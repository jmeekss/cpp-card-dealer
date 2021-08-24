/*
* Author:       J Meeks
* Purpose:      This header file provides declarations for the "Card" class
*/

#ifndef CARD_H
#define CARD_H

#include <string>

namespace cardHeader {

	class Card {

        	private:
                	std::string rank;
                	std::string suit;

        	public:
			//sets card rank
                	void set_rank(std::string rankIn) {
                        	rank = rankIn;
                	}
			//sets card suit
                	void set_suit(std::string suitIn) {
                        	suit = suitIn;
                	}
			//gets string representation of card
                	std::string get_card() const {
                        	return rank + " of " + suit;
                	}
	};


};

#endif
