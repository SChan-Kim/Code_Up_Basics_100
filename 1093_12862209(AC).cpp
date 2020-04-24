#include <iostream>

using namespace std;


int main() {

    int input,tmp;
    int number[10001];

    cin >> input;

    for(int i=0; i<input+1; i++) {
        number[i] = 0;
    }

    for(int i=1; i<input+1; i++) {
        cin >> tmp;
        number[tmp] += 1;
    }

    for(int i=1; i<24; i++)
        cout << number[i] << " ";



    return 0;
}

