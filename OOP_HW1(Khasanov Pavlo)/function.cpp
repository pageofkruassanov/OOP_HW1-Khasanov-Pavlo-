#include "function.h"

void checkInput()
{
	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void inputNumerator(Fraction& fr)
{
    while (true) {
        int num;
        cin >> num;
        if (num != 0) {
            fr.setNumerator(num);
            break;
        }
        else {
            cout << endl << "Error input, try again: ";
            checkInput();
        }
    }
}

void inputDenominator(Fraction& fr)
{
    while (true) {
        int num;
        cin >> num;
        if (num != 0) {
            fr.setDenominator(num);
            break;
        }
        else {
            cout << endl << "Error input, try again: ";
            checkInput();
        }
    }
}

