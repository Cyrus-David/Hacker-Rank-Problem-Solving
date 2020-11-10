#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> a) {
    int size = a.size();

    int cnt = 0, swapped = 1, last = size - 1;
   
    while(swapped) { //checks whether there is a swap that happened
        swapped = 0;
        for (int i = 0; i < last; i++) {
            if (a[i] > a[i + 1]){
                swapped = 1;
                swap(a[i],a[i+1]);
                cnt++;
            }
        }
        last--; //it is guaranted that the last index will be the largest
    }

    cout << "Array is sorted in "<< cnt << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[size-1];
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    
    bubbleSort(a);

    return 0;
}

