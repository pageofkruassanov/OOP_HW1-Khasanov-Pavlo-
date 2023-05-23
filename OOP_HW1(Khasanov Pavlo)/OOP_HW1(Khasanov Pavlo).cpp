#include <iostream>
#include "classes.h";
#include "function.h"
#include <Windows.h>
using namespace std;

int main()
{
    Fraction fr1;
    Fraction fr2;
    Fraction frRes;
    while (true) {
        cout << "Input first fraction" << endl << "input numerator: ";
        inputNumerator(fr1);

        cout << endl << "input denominator: ";
        inputDenominator(fr1);

        cout << "Great, you entered the first fraction. Enter now the second fraction" << endl << "input numerator: ";
        inputNumerator(fr2);

        cout << endl << "input denominator: ";
        inputDenominator(fr2);

        cout << endl << "First fraction: ";
        fr1.printFraction();
        cout << endl << "Second fraction: ";
        fr2.printFraction();

        char symbol;
        cout << endl << "Input an operation on fractions(*, /, +, -): ";
        while (true) {
            cin >> symbol;
            checkInput();
            if (symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-')
                break;
            else
                cout << endl << "Error input, try again: ";
        }

        fr1.printFraction();
        cout << " " << symbol << " ";
        fr2.printFraction();

        cout << endl << "Operation in progress...";
        Sleep(3000);
        cout << endl << "...";
        Sleep(2800);
        cout << endl << "...";
        Sleep(2500);

        switch (symbol) {
        case '*':
            frRes = fr1.multiplication(fr2);
            break;
        case '/':
            frRes = fr1.division(fr2);
            break;
        case '+':
            frRes = fr1.add(fr2);
            break;
        case '-':
            frRes.subtraction(fr2);
            break;
        }

        cout << endl << endl << "Result: ";
        frRes.printFraction();
        double decimalRes = frRes.decimalFraction();
        cout << endl << "Decimal fraction: " << decimalRes;

        bool process = 0;
        cout << endl << "Do you want to continue (0 - no, 1 - yes)";

        cin >> process;
        checkInput();

        if (!process)
            break;
    }
    cout << endl;
    system("pause");
}