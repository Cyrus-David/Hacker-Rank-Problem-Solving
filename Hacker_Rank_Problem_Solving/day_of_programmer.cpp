#include <iostream>
using namespace std;

string dayOfProgrammer(int year) {
    int flag = 0;
    
    if (year > 1918) {
        if (year % 400 == 0)
            flag = 1;
        else if (year % 4 == 0 && year % 100 != 0)
            flag = 1;
    } else {
        if (year % 4 == 0)
            flag = 1;
    }
    
    string ans;
    if(year != 1918)
        ans = (flag) ? "12.09." + to_string(year) : "13.09." + to_string(year);
    else
        ans = "26.09.1918";

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc; cin >> tc;
    cout << dayOfProgrammer(tc);
}
