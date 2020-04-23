#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a,r,n;
    cin >> a;
    cin >> r;
    cin >> n;

    cout << long(a*pow(r,(n-1))) << endl;

    return 0;
}

