#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << a+b+c << endl;
    cout << fixed;
    cout.precision(1);
    cout << (a+b+c)/3 << endl;

    return 0;
}

