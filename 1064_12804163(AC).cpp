#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << ((a>b? b:a)>c? c:(a>b? b:a)) << endl;
    return 0;
}

