﻿#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin >> a;
    cin >> b;

    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            cout << i+1 << " " << j+1 << endl;
        }
    }

    return 0;

}

