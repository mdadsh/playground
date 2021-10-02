package main

func main() {
	// var card string = "Ace of Spades" // Also valid variable declaration method but not idiomatic GO use below instead
	// card := "Ace of Spades" // Only use colon for first time variable declaration
	//cards := deck{"Ace of Diamonds", newCard()}
	//cards = append(cards, "Six of Spades")
	// cards := newDeck()

	//for i, card := range cards {
	//	fmt.Println(i, card)
	//}
	//cards.print()
	// hand, remaningCards := deal(cards, 5)
	// hand.print()
	// remaningCards.print()
	// greeting := "Hi There"
	// fmt.Println([]byte(greeting)) //This is implementation of type conversion
	// cards := newDeck()
	//fmt.Println(cards.toString())
	// cards.saveToFile("mycards")
	// cards := newDeckFromFile("mycards")
	// cards.print()
	cards := newDeck()
	cards.shuffle()
	cards.print()
}
