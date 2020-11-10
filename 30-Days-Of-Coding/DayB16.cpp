#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;

    try{
        cout << stoi(S);
    }catch(...){ //this catches any error in the try scope
         cout << "Bad String";
    }

    return 0;
}
