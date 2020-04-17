#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int f,b;
    scanf("%d-%d", &f,&b);
    cout << setw(6) << setfill('0') << f << b << endl;
    return 0;
}

