#include <iostream>

using namespace std;

int main() {

    int h,b;
    float result,w;

    cin >> w;
    cin >> h;
    cin >> b;

    w = w/(1024*1.0);

    result = h*b*w;

    cout << fixed;
    cout.precision(2);
    cout << result/(1024*8*1.0) << " MB" << endl;


    return 0;
}

