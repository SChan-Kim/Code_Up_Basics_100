#include <iostream>

using namespace std;

int main() {

    int count = 1;
    long int input,sum;

    cin >> input;


    while(1){
        sum += count;
        if(sum >= input) {
            cout << sum << endl;
            break;
        }
        count ++;
    }


    return 0;
}

