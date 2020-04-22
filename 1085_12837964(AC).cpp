#include <iostream>

using namespace std;

int main() {

    int b,c,s;
    float result,h;

    cin >> h;
    cin >> b;
    cin >> c;
    cin >> s;

    h = h/(1024*1024*1.0);

    result = h*b*c*s;

    cout << fixed;
    cout.precision(1);
    cout << result/(8*1.0) << " MB" << endl;


    return 0;
}

