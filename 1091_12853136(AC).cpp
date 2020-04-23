#include <iostream>

using namespace std;


int main() {

    int a,m,d,n;
    long result;
    cin >> a;
    cin >> m;
    cin >> d;
    cin >> n;
    result = a;

    while(1) {
        if(n == 1)
            break;
        else{
            result = result*m+d;
            n--;
        }
    }

    cout << result << endl;
    return 0;
}

