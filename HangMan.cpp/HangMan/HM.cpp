#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

//This program will run the game HangMan

//Game mode
void Game();

//Movie genre
string Movies();

//Food genre
string Foods();

//Game genre
string Games();

//Hangman game play
bool HangMan(string answer);

//Outputs the new model
void ManHang(int wrong);



//menu
int main() {
    string start;

    cout << "Hello player! Welcome to hangman!\n";
    cout << "Type start to start the game!\n";
    cout << " \n";
    cout << "Type Here: ";
    cin >> start;

    system("cls");

    //Start up of the game
    if (start == "Start" || start == "start") {
        Game();
    }
    else {
        cout << "Please come again, thank you for playing!";
    }
}

void Game() {
    bool playAgain = true;
    bool winOrLose;
    string yesOrNo;
    string genre;
    string answer;

    while (playAgain) {
        cout << "Welcome to HangMan!\n";
        cout << "The rules are simple, you must get the correct words before the man gets hanged!\n";
        cout << "What genre would you like to play? Movies, Foods, or Games?";
        cout << "  \n\n";
        cout << "Genre: ";
        cin >> genre;

        if (genre == "Movies" || genre == "movies") {
            answer = Movies();

            cout << " \n";
            cout << "You have selected the movies genre!\n";
            cout << "You will have 6 attempts before you either win or lose!\n";
            cout << "Good luck and have a great time!\n";
            cout << " \n";

            winOrLose = HangMan(answer);

            if (winOrLose) {
                cout << " \n";
                cout << "You guessed the correct answer!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }
            else {
                cout << " \n";
                cout << "You lost the game!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }

        }
        else if (genre == "Foods" || genre == "foods") {
            answer = Foods();

            cout << " \n";
            cout << "You have selected the foods genre!\n";
            cout << "You will have 6 attempts before you either win or lose!\n";
            cout << "Good luck and have a great time!\n";
            cout << " \n";

            winOrLose = HangMan(answer);

            if (winOrLose) {
                cout << " \n";
                cout << "You guessed the correct answer!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }
            else {
                cout << " \n";
                cout << "You lost the game!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }
        }
        else if (genre == "Games" || genre == "games") {
            answer = Games();

            cout << " \n";
            cout << "You have selected the games genre!\n";
            cout << "You will have 6 attempts before you either win or lose!\n";
            cout << "Good luck and have a great time!\n";
            cout << " \n";

            winOrLose = HangMan(answer);

            if (winOrLose) {
                cout << " \n";
                cout << "You guessed the correct answer!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }
            else {
                cout << " \n";
                cout << "You lost the game!\n";
                cout << "The correct answer was: " << answer << endl;
                cout << "Would you like to play again? (Yes or No): ";
                cin >> yesOrNo;

                if (yesOrNo == "Yes" || yesOrNo == "yes") {
                    playAgain = true;
                    cout << " \n";

                    system("cls");
                }
                else if (yesOrNo == "No" || yesOrNo == "no") {
                    playAgain = false;
                    cout << " \n";

                    system("cls");
                }
            }
        }
        else {
            cout << "Invalid genre! Please choose Movies, Foods, or Games.\n";
        }
    }

    cout << "Thank you for playing hangman!\n";
    cout << "Please come play again!";
    cout << " \n\n";
}

string Movies() {
    string movies[] = { "Titanic", "ToyStory", "Elf", "Ratatouille", "Frozen" };
    int numMovies;

    srand(time(0));

    numMovies = rand() % 5;

    return movies[numMovies];
}

string Foods() {
    string foods[] = { "Apple", "Banana", "Grape", "Watermelon", "Strawberry" };
    int numFoods;

    srand(time(0));

    numFoods = rand() % 5;

    return foods[numFoods];
}

string Games() {
    string games[] = { "Mario", "CallOfDuty", "Minecraft", "SuperSmashBros", "GrandTheftAuto" };
    int numGames;

    srand(time(0));

    numGames = rand() % 5;

    return games[numGames];
}

bool HangMan(string answer) {
    char choices;
    int realCorrect = 0;
    int wrongs = 0;
    bool winLose = true;
    vector<char> usedLetters;
    vector<char> remainingSpots(answer.size(), '_');

    while (winLose) {
        system("cls");

        ManHang(wrongs);

        cout << "Current word: ";
        for (char c : remainingSpots) {
            cout << c << " ";
        }
        cout << "\n\n";

        cout << "Used letters: ";
        for (char c : usedLetters) {
            cout << c << " ";
        }
        cout << "\n\nSelect your letter: ";
        cin >> choices;

        if (!isalpha(choices)) {
            cout << "Invalid input. Please enter a letter.\n";
            continue;
        }

        choices = tolower(choices);

        // Check if letter is already used
        if (find(usedLetters.begin(), usedLetters.end(), choices) != usedLetters.end()) {
            cout << "You already used this letter. Try again.\n";
            continue;
        }

        usedLetters.push_back(choices);

        bool found = false;
        for (int i = 0; i < answer.size(); i++) {
            if (tolower(answer[i]) == choices) {
                remainingSpots[i] = answer[i];
                found = true;
            }
        }

        if (found) {
            cout << "Good job! " << choices << " is in the word.\n";
        }
        else {
            wrongs++;
            cout << "Sorry, " << choices << " is not in the word.\n";
        }

        if (wrongs > 6) {
            winLose = false;
            return false;
        }

        if (remainingSpots == vector<char>(answer.begin(), answer.end())) {
            winLose = false;
            return true;
        }
    }
    return false;
}

void ManHang(int wrong) {
    const string stages[] = {
        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "   |        |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "  /|        |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "  /|\\       |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "  /|\\       |\n"
        "  /         |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n",

        "   +--------+\n"
        "   |        |\n"
        "   |        |\n"
        "   |        |\n"
        "   0        |\n"
        "  /|\\       |\n"
        "  / \\       |\n"
        "            |\n"
        "            |\n"
        "            |\n"
        "        ----+----\n"
    };

    cout << stages[wrong];
}