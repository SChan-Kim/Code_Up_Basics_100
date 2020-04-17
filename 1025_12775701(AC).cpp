#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int number;
    cin >> number;
    cout << "[" << number/10000*10000 << "]" << endl;
    cout << "[" << (number/1000)%10*1000 << "]" << endl;
    cout << "[" << (number/100)%10*100 << "]" << endl;
    cout << "[" << (number/10)%10*10 << "]" << endl;
    cout << "[" << number%10 << "]" << endl;
    
}

