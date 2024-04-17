#include <iostream>

using namespace std;

int main() {
    srand(time(0));

    cout << "Welcome to the Rock, Paper, Scissors game!\n";
    cout << "Choose:\n";
    cout << "1. Rock\n";
    cout << "2. Scissors\n";
    cout << "3. Paper\n";
    cout << "Enter the corresponding number: ";

    int user;
    cin >> user;

    if (user < 1 || user > 3) {
        cout << "Invalid input. Please try again.\n";
        return 1;
    }

    int ai = rand() % 3 + 1;

    cout << "Computer chose: ";
    switch (ai) {
    case 1:
        cout << "Rock\n";
        break;
    case 2:
        cout << "Scissors\n";
        break;
    case 3:
        cout << "Paper\n";
        break;
    }

    if (user == ai) {
        cout << "It's a tie!\n";
    }
    else if ((user == 1 && ai == 2) ||
        (user == 2 && ai == 3) ||
        (user == 3 && ai == 1)) {
        cout << "You win!\n";
    }
    else {
        cout << "Computer wins!\n";
    }

    return 0;
}
