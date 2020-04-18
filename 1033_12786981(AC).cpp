#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string HexAlpha(int DecNum) {
    string answer = "";

    if(DecNum == 10)
        answer += 'A';
    else if(DecNum == 11)
        answer += 'B';
    else if(DecNum == 12)
        answer += 'C';
    else if(DecNum == 13)
        answer += 'D';
    else if(DecNum == 14)
        answer += 'E';
    else if(DecNum == 15)
        answer += 'F';
    else
        answer = to_string(DecNum);

    return answer;
}

string DectoHex(int number, string answer) {
    if(number/16 > 0) {
        answer += DectoHex(number/16,answer);
        answer += HexAlpha(number%16);
    }
    else
        answer += HexAlpha(number);
    return answer;
}


int main() {

    int number;
    string answer = "";
    cin >> number;

    answer = DectoHex(number,answer);
    cout << answer << endl;

    return 0;
}

