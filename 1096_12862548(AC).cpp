#include <iostream>

using namespace std;


int main() {

    int input, a, b;
    int map[20][20];

    for(int i=0; i<20; i++) {
            for(int j=0; j<20; j++)
                map[i][j] = 0;
    }

    cin >> input;

    for(int i=0; i<input; i++) {
        cin >> a;
        cin >> b;

        map[a][b] = 1;
    }

    for(int i=1; i<20; i++) {
            for(int j=1; j<20; j++)
                cout << map[i][j] << " ";
            cout << endl;
    }

    return 0;
}

