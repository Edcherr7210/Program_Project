# include <iostream>
# include <cstdlib>
# include <cmath>
using namespace std; 

/*This program will be a number guessing game*/

int main() {
	
	char gameAgn{};
	string startUp{};
	int attempts;
	int guess{}; 
	int randomNum;

	//Greet the gamer and start the game

	cout << "Welcome To The Number Guessing Game!\n";
	cout << "Please Type 'Str' To Start The Game!\n";
	cin >> startUp;
	
	if (startUp == "Str" || startUp == "str") {

		//This is where the game will start
		while (gameAgn != 'N' && gameAgn != 'n') {

			//Description of the game
			cout << "You Are Going To get 5 Attempts To Guess The Number!\n";
			cout << "When The 5 Attempts Are Up, You Will Lose!\n";
			cout << "But If You Guess Within The 5 Attempts, You Will Win!\n"; 
			cout << "You May Start Guessing!\n";
			cin >> guess;
			attempts = 0;

			while (attempts < 4) {
				
				srand(time(0));
				randomNum = rand() % 10;

				if (guess != randomNum) {
					cout << "Wrong, Guess Again!\n";
					cin >> guess;
					attempts += 1;
				}
				else if (guess == randomNum) {
					cout << "Congradulations! You Got The Correct Number!\n";
					break; 
				}
				
			}
			if (attempts == 4) {
				cout << "You Lost The Game! The Correct Number is: " << randomNum << " \n";
			}

			//Ask the user if they want to play again or if they want to end the game
			cout << "Would You Like To Play Again? (Y/N)\n";
			cin >> gameAgn;
		}
	}

	cout << "Thank You For Playing The Game! Come Back Later!\n";
	cout << "GOODBYE";
	return 0;
}