#include <iostream>

using namespace std;


int main() {

    int input,tmp;
    int number[10000];

    cin >> input;

    for(int i=0; i<input; i++) {
        cin >> tmp;
        number[i] = tmp;
    }

    for(int j=input-1; j>-1; j--)
        cout << number[j] << " ";



    return 0;
}

