#include <iostream>

using namespace std;

int main() {
    int i = 4; double d = 4.0; string s = "HackerRank ";
    int n1; double n2; string S;
  
    cin >> n1 >> n2;
    cin.ignore(); //ignores an end of line character 
    getline(cin, S);

    cout << n1 + i << endl; 
    printf("%.1f\n",n2 + d);
    cout << s + S;
    

    return 0;
}
