#include <iostream>

using namespace std;


int main() {

    int h,w,n;
    int l,d,x,y;
    cin >> h >> w;

    int map[100][100];

    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++)
            map[i][j] = 0;
    }
    // initialization

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> l >> d >> x >> y;
        cout << "";
        while(1) {
            map[x][y] = 1;
            l--;
            if(l==0)
                break;
            else {
                if(d==1)
                    x++;
                else
                    y++;
            }
        }
    }

    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++)
            cout << map[i][j] << " ";
        cout << endl;
    }


    return 0;
}
