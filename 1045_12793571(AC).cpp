#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float a,b;
    cin >> a;
    cin >> b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << int(a/b) << endl;
    cout << int(a)%int(b) << endl;
    cout << fixed;
    cout.precision(2);
    cout << a/b << endl;

    return 0;
}

