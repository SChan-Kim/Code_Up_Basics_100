#include <iostream>

using namespace std;


int main() {

    int a,b,c, day;

    cin >> a;
    cin >> b;
    cin >> c;
    day = 1;

    while((day%a!=0)||(day%b!=0)||(day%c!=0)) // day를 a,b,c로 나누었을 때 모두 0이 되면 loop가 돌아가지 않는다.
        day++;

    cout << day << endl;

    return 0;
}

