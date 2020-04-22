#include <iostream>

using namespace std;

int main() {

    char input;
    int number;

    cin >> input;

    switch (input) {
        case 'A':
            number = 10;
            break;
        case 'B':
            number = 11;
            break;
        case 'C':
            number = 12;
            break;
        case 'D':
            number = 13;
            break;
        case 'E':
            number = 14;
            break;
        case 'F':
            number = 15;
            break;
        default:
            number = (int)input;
            break;
    }

    for(int i=1; i<16; i++)
        cout << input << "*" << i << "=" << hex << uppercase << number*i << endl;


    return 0;
}

