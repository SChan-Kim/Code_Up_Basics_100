#include <iostream>

using namespace std;

int main() {

    char ch;
    cin >> ch;
    cout << static_cast<char>(static_cast<int>(ch)+1) << endl;
    return 0;
}

