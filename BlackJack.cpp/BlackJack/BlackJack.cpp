#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*This program will run blackjack the card game*/

void BlackJack() {
	string playAgain;


	//This while will loop till you don't want to play the game anymore
	while (playAgain != "No" && playAgain != "no") {
		char hitOrStand;
		int playerPoint = 0;
		int dealerPoint = 0;
		int cardNumber{};

		//Explain the instructions
		cout << " \n";
		cout << "************************************************************************************************\n";
		cout << "*The Rules Are Simple: You Will Either Stand Or Be Asked To Hit!*\n";
		cout << "*When You Ask To Stand, You Will Stick With The Points You Have, And Your Turn Will End!*\n";
		cout << "*When Your Turn Ends, The Dealer Will Play And Try To Get A Better Score Than You!*\n";
		cout << "*When You Ask To Hit, You Will Get Assigned A New Card And Get Added More Points To Your Score!*\n";
		cout << "*Your Goal Is To Get As Close To 21 Points As Much As You Can!*\n";
		cout << "*If You Go Over 21 Points, You Will Bust And Lose The Game! Same Goes For The Dealer!*\n";
		cout << "*************************************************************************************************\n";
		cout << " \n";

		//Wish the player goodluck
		cout << "*******************************\n";
		cout << "*Goodluck On Winning The Game!*\n";
		cout << "*******************************\n";
		cout << " \n";

		//Start the game
		cout << "**********************************\n";
		cout << "Please Press \"H\" To Get First Hit!\n";
		cout << "**********************************\n";
		cout << " \n";

		cin >> hitOrStand;

		if (hitOrStand != 'H' && hitOrStand != 'h') {
			cout << "*********************\n";
			cout << "*Please Press \"H\" Or \"S\"*\n";
			cout << "*********************\n";

			cin >> hitOrStand;
		}

		while (hitOrStand != 'S' && hitOrStand != 's') {

			if (hitOrStand == 'H' || hitOrStand == 'h') {
				srand(time(0));
				cardNumber = rand() % 11 + 1;

				playerPoint += cardNumber;
				cout << "*******************\n";
				cout << "*You Hit " << cardNumber << " Points*\n";
				cout << "*Total Points: " << playerPoint << endl;
				cout << "*******************\n";
			}
			if (playerPoint <= 21) {
				cout << " \n";
				cout << "********************************\n";
				cout << "*You May Hit Again Or Stand \"S\"*\n";
				cout << "********************************\n";

				cin >> hitOrStand;
			}
			else if (playerPoint > 21) {
				cout << " \n";
				cout << "********************************\n";
				cout << "*You Busted, You Lost The Game!*\n";
				cout << "*You Lost The Game With " << playerPoint << " Points*\n";
				cout << "********************************\n";
				cout << " \n";
				break;
			}
		}

		if (playerPoint <= 21) {
			//What happens when you stand
			if (hitOrStand == 'S' || hitOrStand == 's') {
				cout << "********************************************\n";
				cout << "*You Have Decided To Stand, With " << playerPoint << " Points!*\n";
				cout << "*Now It Is The Dealers Turn!*\n";
				cout << "********************************************\n";
				cout << " \n";
			}

			//Start the dealers turn
			while (dealerPoint != 40) {
				srand(time(0));
				cardNumber = rand() % 11 + 1;

				if (dealerPoint <= 16) {
					dealerPoint += cardNumber;
				}
				else if (dealerPoint > 16 && dealerPoint <= 21) {
					cout << "*********************************\n";
					cout << "*Dealer Has Stood With " << dealerPoint << " Points*\n";
					cout << "*********************************\n";
					cout << " \n";
					break;
				}
				else if (dealerPoint > 21) {
					break;
				}
			}

			if (dealerPoint > 21) {
				cout << "**************************************\n";
				cout << "*The Dealer Has Busted With " << dealerPoint << " Points*\n";
				cout << "*You Have Won The Game!*\n";
				cout << "**************************************\n";
				cout << " \n";
			}
			//Compare the points to see who wins
			else if (playerPoint > dealerPoint) {
				cout << "****************************************\n";
				cout << "*You Beat The Dealer, You Won BlackJack*\n";
				cout << "****************************************\n";
				cout << " \n";
			}
			else if (playerPoint < dealerPoint) {
				cout << "**********************************************\n";
				cout << "*You Lost To The Dealer, Dealer Won BlackJack*\n";
				cout << "**********************************************\n";
				cout << " \n";
			}
		}
		
		//Ask if the user wants to play again
		cout << "*******************************************\n";
		cout << "*Would You Like To Play Again? (Yes/No): ";
		cin >> playAgain;
		cout << "*******************************************\n";

	}

	//Game ending
	cout << " \n";
	cout << "**********************************************\n";
	cout << "Thank You For Playing BlackJack The Card Game!\n";
	cout << "**********************************************\n";
}

int main() {

	string startGame;
	//Menu of the game
	cout << "***********************\n";
	cout << "*Welcome To BlackJack!*\n";
	cout << "***********************\n";
	cout << " \n";
	cout << "**********************************************************************\n";
	cout << "*Type \"Start\" To Get Started! Or Type \"End\" To Close Out Of The Game!*\n";
	cout << "**********************************************************************\n";
	cout << " \n";

	cin >> startGame;

	if (startGame == "Start" || startGame == "start") {
		BlackJack();
	}
	else if (startGame == "End" || startGame == "end") {
		cout << " \n";
		cout << "*************************\n";
		cout << "*Please Come Back Later!*\n";
		cout << "*************************\n";
	}
	else {
		cout << " \n";
		cout << "**************************\n";
		cout << "*Invalid Input, Try Again*\n";
		cout << "**************************\n";
		cout << "\n";

		cin >> startGame;

		if (startGame == "Start" || startGame == "start") {
			BlackJack();
		}
	}
	return 0;
}