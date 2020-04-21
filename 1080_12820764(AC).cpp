#include <iostream>

using namespace std;

int main() {

    int input,sum,result;
    cin >> input;
    sum = 0;
    result = 1;
    while(1) {
        sum += result;
        if(sum >= input)
            break;
        result++;
    }

    cout << result << endl;

    return 0;

}

