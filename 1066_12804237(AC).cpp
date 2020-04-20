#include <iostream>

using namespace std;

int main() {

    int num[3];
    for(int i=0; i<3; i++)
        cin >> num[i];

    for(int j=0; j<3; j++) {
        if(num[j]%2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }


    return 0;
}

