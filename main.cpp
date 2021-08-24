/*
* Author:	J Meeks
* Purpose:	This program asks the user how many cards they want from a shuffled deck
*		and then deals them that many cards, displays them, and displays how many
*		cards are left in the deck
*/

#include <string>
#include <limits>
#include <iostream>
#include "deck.h"
#include "card.h"

using namespace std;

int getInt(string prompt);

int main() {
	//create a member of the "Deck" class
	deckHeader::Deck cardDeck;

	//fills the deck with cards, and then shuffles them
	cardDeck.new_deck();
	cardDeck.shuffle_deck();

	//displays intro message
	cout << "Card Dealer\n\n" << "I have shuffled a deck of 52 cards.\n\n";

	//asks user for number of cards
	int numCards = getInt("How many cards would you like?: "); 

	//prints cards
	cout << endl;
	for(int i = 0; i < numCards; i++){
		cout << cardDeck.get_card_deal() << endl;
	}

	//displays how many cards are left
	if(cardDeck.get_card_count() == 1){
		cout << "\nThere is " << cardDeck.get_card_count() << " card left in the deck.\n\n" << "Good Luck!" << endl << endl;
	} else {
		cout << "\nThere are " << cardDeck.get_card_count() << " cards left in the deck.\n\n" << "Good Luck!" << endl << endl;
	}

	//returns 0 to indicate normal program exit
	return 0;
}

int getInt(string prompt){
        //variables for valid selection and the number chosen by the user
        int validSelection = 0, number;
        //loops until a valid selection is chosen
        while(validSelection == 0){
                        //asks for integer from user, and checks to make sure a number is entered, then clears buffer
                        cout << prompt;
                        if(!(cin >> number)){
                                number = -1;
                                cin.clear();
                        }
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        //Tells user if their number is invalid, or returns valid number
                        if(number < 0 || number > 52){
                                cout << "Invalid selection\n";
                        } else {
                                return number;
                        }
        }
        return 0;
}

