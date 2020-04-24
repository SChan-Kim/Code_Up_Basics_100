#include <iostream>

using namespace std;


int main() {

    int input,tmp;
    int result = 10001;
    int number[10000];

    cin >> input;

    for(int i=0; i<input; i++) {
        cin >> tmp;
        number[i] = tmp;
        if(tmp < result)
            result = tmp;
    }

    cout << result << endl;

    return 0;
}

