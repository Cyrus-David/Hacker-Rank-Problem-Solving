#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() 
{
    int entries;
    cin >> entries;
    map<string,int>phoneBook;
    string Name;
    unsigned int Number;

    for(int i=0; i < entries; i++){
      cin >> Name;
      cin >> Number;
      phoneBook[Name] = Number;
    }
    for(int i=0; i < entries; i++){
      cin >> Name;
      if(phoneBook[Name] == 0)
        cout << "Not found" << endl;
      else
        cout << Name << "=" << phoneBook[Name] << endl;
    }

    return 0;
}
