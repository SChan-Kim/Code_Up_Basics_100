#include <iostream>

using namespace std;

int main() {

    int input;
    cin >> input;

    for(int i=1; i<input+1; i++) {
        if((i%10)%3 == 0)
            cout << "X" << " ";
        else
            cout << i << " ";
    }


    return 0;
}

