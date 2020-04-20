#include <iostream>

using namespace std;

int main() {

    int num;
    int sum = 0;
    cin >> num;

    for(int i = 0; i<num+1; i++) {
        if(i%2 == 0)
            sum += i;
    }

    cout << sum << endl;

    return 0;

}

