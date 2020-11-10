#include <bits/stdc++.h>

using namespace std;

int maxConsecutive(int number){
    int cnt = 0, save = 0; //start save with zero 
    
    for(int i = 0; number > 0; i++){
        if(number % 2 == 1){
            cnt++;
            if(save < cnt) //compares that last high saved data
            save = cnt;
        }else
            cnt = 0;
        number/=2; // divide the number so it decreases over time
    }
    return save;
}


int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
   
    cout << maxConsecutive(n);

    return 0;
}
