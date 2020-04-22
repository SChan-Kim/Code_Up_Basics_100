#include <iostream>

using namespace std;

int main() {

    int r,g,b;
    int count = 0;
    cin >> r;
    cin >> g;
    cin >> b;

    for(int i=0; i<r; i++) {
        for(int j=0; j<g; j++) {
            for(int k=0; k<b; k++) {
                printf("%d %d %d\n", i,j,k);
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}

