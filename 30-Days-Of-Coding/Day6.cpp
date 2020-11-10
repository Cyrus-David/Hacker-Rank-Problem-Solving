#include <iostream>

int main() {
    int n;
    string word;

    cin >> n;
    while(n--){
        cin >> word;

        for(int i = 0; i < word.length(); i+=2)
                cout << word[i];
        cout << " ";
        for(int i = 1; i < word.length(); i+=2)
                cout << word[i];
        cout << endl;
    }

    return 0;
}
