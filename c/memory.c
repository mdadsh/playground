// This program will only execute in Linux

#include <ctype.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <unistd.h>

void escape(void *p)
{
    asm volatile(""
                 :
                 : "g"(p)
                 : "memory");
}

void report_memory(const char *prefix)
{
    struct rusage ru;
    if (getrusage(RUSAGE_SELF, &ru))
    {
        perror("getrusage");
        exit(1);
    }

    char statusfilename[256];
    snprintf(statusfilename, 256, "/proc/%d/status", getpid());

    FILE *f = fopen(statusfilename, "r");
    if (!f)
    {
        perror("fopen");
        exit(1);
    }

    char buf[256] = {'\0'};
    char *bufstart = buf;
    while (fgets(buf, 256, f))
    {
        if (strstr(buf, "VmSize") == buf)
        {
            bufstart = buf + 7;
            // Skip leading spaces and trim trailing newline.
            while (isspace(*bufstart))
            {
                bufstart++;
            }
            char *pos = strchr(bufstart, '\n');
            if (pos)
            {
                *pos = '\0';
            }
            break;
        }
    }

    printf("%s: max RSS = %ld kB; vm size = %s\n", prefix, ru.ru_maxrss,
           bufstart);
}

int main(int argc, char **argv)
{
    printf("PID = %d\n", getpid());
    report_memory("started");

    int N = 100 * 1024 * 1024;
    int *m = malloc(N * sizeof(int));
    escape(m);
    report_memory("after malloc");

    for (int i = 0; i < N; ++i)
    {
        m[i] = i;
    }
    report_memory("after touch");

    printf("press ENTER\n");
    (void)fgetc(stdin);
    return 0;
}