#include <iostream>

using namespace std;


int main() {

    int map[10][10];
    int x,y;

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++)
            cin >> map[j][i];
    }

    x = 1;
    y = 1;

    while(1) {

        if(map[1][1] == 2) {
            map[1][1] = 9;
            break;
        }

        map[x][y] = 9;

        if((map[x+1][y] == 1)&&(map[x][y+1] == 1))
            break;

        else if(map[x+1][y] == 2) {
            map[x+1][y] = 9;
            break;
        }

        else if((map[x][y+1] == 2) && (map[x+1][y] == 1)) {
            map[x][y+1] = 9;
            break;
        }

        else if(map[x+1][y] == 1)
            y++;

        else if(map[x][y+1] == 1)
            x++;
        else
            x++;
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++)
            cout << map[j][i] << " ";
        cout << endl;
    }

    return 0;
}

