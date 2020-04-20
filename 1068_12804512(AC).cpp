#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if(a>89 && a<101)
        cout << "A" << endl;

    else if(a>69 && a<90)
        cout << "B" << endl;

    else if(a>39 && a<70)
        cout << "C" << endl;

    else if(a>-1 && a<40)
        cout << "D" << endl;



    return 0;
}

