#pragma once
#include <iostream>

using namespace std;
namespace MyFraction {
    class Fraction {
    private:
        int numerator = 0;
        int denominator = 0;
    public:
        Fraction operator+(Fraction& fr) {
            return add(fr);
        }
        Fraction operator-(Fraction& fr) {
            return subtraction(fr);
        }
        Fraction operator*(Fraction& fr) {
            return multiplication(fr);
        }
        Fraction operator/(Fraction& fr) {
            return division(fr);
        }
        bool setNumerator(int num) {
            if (num != 0) {
                numerator = num;
                return true;
            }
            else
                return false;
        }
        bool setDenominator(int num) {
            if (num != 0) {
                denominator = num;
                return true;
            }
            else
                return false;
        }
        int getNumerator() {
            return numerator;
        }
        int getDenominator() {
            return denominator;
        }
        Fraction division(Fraction& fr) {
            Fraction temp;

            int resNum = numerator * fr.denominator;
            temp.setNumerator(resNum);

            int resDen = denominator * fr.numerator;
            temp.setDenominator(resDen);

            return temp;
        }
        Fraction multiplication(Fraction& fr) {
            Fraction temp;

            int resNum = numerator * fr.numerator;
            temp.setNumerator(resNum);

            int resDen = denominator * fr.denominator;
            temp.setDenominator(resDen);

            return temp;
        }
        Fraction add(Fraction& fr) {
            Fraction temp;

            int resNum = (numerator * fr.denominator) + (denominator + fr.numerator);
            temp.setNumerator(resNum);

            int resDen = denominator * fr.denominator;
            temp.setDenominator(resDen);

            return temp;
        }
        Fraction subtraction(Fraction& fr) {
            Fraction temp;

            int resNum = (numerator * fr.denominator) - (denominator + fr.numerator);
            temp.setNumerator(resNum);

            int resDen = denominator * fr.denominator;
            temp.setDenominator(resDen);

            return temp;
        }
        void printFraction() {
            cout << numerator << "/" << denominator;
        }
        double decimalFraction() {
            if (numerator != 0 && denominator != 0)
                return double(numerator) / double(denominator);
            else
                return 0;
        }
    };
}