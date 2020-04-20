#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

re_enter:
    int m;
    cin >> m;

    if(n-- != 0) {
        cout << m << endl;
        goto re_enter;
    }


    return 0;
}

