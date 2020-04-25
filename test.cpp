#include <iostream>

using namespace std;


int main() {

    int input, a, b;
    int map[20][20];

    for(int i=1; i<20; i++) {
            for(int j=1; j<20; j++)
                cin >> map[i][j];
    }

    cin >> input;

    for(int i=1; i<=input; i++) {
        cin >> a >> b;
        for(int j=1; j<20; j++) {
            if(map[a][j] == 0)
                map[a][j] = 1;
            else
                map[a][j] = 0;

            }

        for(int k=1; k<20; k++) {
            if(map[k][b] == 0)
                map[k][b] = 1;
            else
                map[k][b] = 0;
        }
    }

    for(int i=1; i<20; i++) {
        for(int j=1; j<20; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }


    return 0;
}
