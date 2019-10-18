#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

int main() {
	using namespace std;
	srand(time(0));
	int guess = rand() % 10 + 1;
	int n;
	for (n = 9; n > 0; n--) {// loop for 10 attempts
		int input_val;
		cout << "Guess the number: ";
		if(cin >> input_val){ //condition: check if the input value is an Integer
			if (guess == input_val) {//if your Guess is correct
				system("cls");
				cout << "Correct!" << endl;
				cout << "The number is: " << guess;
				break;
			}
				else { //if your guess is not correct
				cout << "Wrong number try again!" << endl;
				cout << "You have " << n << " tries left." << endl;
			}
		}
		else { 
			cout << "Error: Only numbers only!!";
			break;
		}
	}
}