#include <iostream>

using namespace std;

int main() {

    int input;

    cin >> input;

    for(int i=0; i<input+1; i++) {
        if(i%3 == 0)
            continue;
        else
            cout << i << " ";
    }


    return 0;
}

