#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int y,m,d;
    scanf("%d.%d.%d", &y,&m,&d);
    cout << setw(4) << setfill('0') << y << "." << setw(2) << setfill('0') << m << "." << setw(2) << setfill('0') << d;
    return 0;
}

