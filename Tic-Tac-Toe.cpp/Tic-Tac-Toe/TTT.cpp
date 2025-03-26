#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void CallBoard(char* spaces);
void PlayerMove(char* spaces, char player);
void ComputerMove(char* spaces, char computer);
bool CheckWinner(char* spaces, char player, char computer);
bool CheckTie(char* spaces);


int main() {
	char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	char player = 'X';
	char computer = 'O';
	bool running = true;
	char playAgn;

	CallBoard(spaces);

	while (running) {
		PlayerMove(spaces, player);
		CallBoard(spaces);
		if (CheckWinner(spaces, player, computer)) {
			running = false;
			break;
		}
		else if (CheckTie(spaces)) {
			break;
		}

		ComputerMove(spaces, computer);
		CallBoard(spaces);
		if (CheckWinner(spaces, player, computer)) {
			running = false;
			break;
		}
		else if (CheckTie(spaces)) {
			break;
		}
	}

	return 0;
}

void CallBoard(char* spaces) {
	cout << " \n";
	cout << "*******************\n";
	cout << "*     |     |     *" << endl;
	cout << "*  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  *" << endl;
	cout << "*_____|_____|_____*" << endl;
	cout << "*     |     |     *" << endl;
	cout << "*  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  *" << endl;
	cout << "*_____|_____|_____*" << endl;
	cout << "*     |     |     *" << endl;
	cout << "*  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  *" << endl;
	cout << "*     |     |     *" << endl;
	cout << "*******************\n";
	cout << " \n";
}
void PlayerMove(char* spaces, char player) {
	int num;

	do
	{
		cout << "Choose A Number (1-9): ";
		cin >> num;
		num--;

		if (spaces[num] == ' ') {
			spaces[num] = player;
			break;
		}

	} while (true);
}
void ComputerMove(char* spaces, char computer) {
	int num;

	srand(time(0));

	while (true) {
		num = rand() % 9;
		if (spaces[num] == ' ') {
			spaces[num] = computer;
			break;
		}
	}
}
bool CheckWinner(char* spaces, char player, char computer) {
	if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])) {
		spaces[0] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])) {
		spaces[3] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])) {
		spaces[6] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])) {
		spaces[0] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])) {
		spaces[1] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])) {
		spaces[2] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])) {
		spaces[0] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])) {
		spaces[2] == player ? cout << "You Won!" : cout << "You Lose";
	}
	else {
		return false;
	}
	return true;
}
bool CheckTie(char* spaces) {
	for (int i = 0; i < 9; i++) {
		if (spaces[i] == ' ') {
			return false;
		}
	}
	cout << "It's A Tie!";
	return true;
}