#include <iostream>
using namespace std;

int main() {
    char res = 's';

    while (res == 's') {
        int num = 0;

       
        while (num < 1 || num > 4000) {
            cout << "Numero arabigo: ";
            cin >> num;
        }

        string romano = "";

       
        while (num >= 1000) {
            romano += "M";
            num -= 1000;
        }

        if (num >= 900) {
            romano += "CM";
            num -= 900;
        }

        if (num >= 500) {
            romano += "D";
            num -= 500;
        }

        if (num >= 400) {
            romano += "CD";
            num -= 400;
        }

        while (num >= 100) {
            romano += "C";
            num -= 100;
        }

        if (num >= 90) {
            romano += "XC";
            num -= 90;
        }

        if (num >= 50) {
            romano += "L";
            num -= 50;
        }

        if (num >= 40) {
            romano += "XL";
            num -= 40;
        }

        while (num >= 10) {
            romano += "X";
            num -= 10;
        }

        if (num == 9) {
            romano += "IX";
            num -= 9;
        }

        if (num >= 5) {
            romano += "V";
            num -= 5;
        }

        if (num == 4) {
            romano += "IV";
            num -= 4;
        }

        while (num > 0) {
            romano += "I";
            num -= 1;
        }

        cout << "El numero romano es: " << romano << endl;

        res = ' ';
        while (res != 's' && res != 'n') {
            cout << "Desea introducir mas numeros (s/n): ";
            cin >> res;
        }
    }

    return 0;
}