#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> arr){
    int length = *max_element(arr.begin(), arr.end());
    vector<int> list (length + 1,0);
    int size = arr.size();

    for(int i = 0; i < size; i++){
        list[arr[i]]++;
    }

    vector<int> ans;
    int hold;
    for(int i = 0; i < length; i++){
        hold = list[i] + list[i+1];
        ans.push_back(hold);
    }

    return hold = *max_element(ans.begin(),ans.end());

}

int main(){
    int testCase;
    int temp;

    vector<int> numbers;
    cin >> testCase;
    while(testCase--){
        cin >> temp;
        numbers.push_back(temp);
    }

    cout << pickingNumbers(numbers);
}
