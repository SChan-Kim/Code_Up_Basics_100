#include <iostream>

using namespace std;

int main() {

    char alphabet;
    cin >> alphabet;

    for(int i = 97; i<int(alphabet)+1; i++)
        cout << (char)i << " ";


    return 0;

}

