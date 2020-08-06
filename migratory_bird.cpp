#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int solve(vi arr) {
    int max = *max_element(arr.begin(),arr.end());
    
    int *store = new int[max+1]{0};

    
    for (int i = 0; i < arr.size(); i++) store[arr[i]]++;

    int maxC = store[0];
    int ans;

    for (int i = 1; i <= max; i++)
        if (maxC < store[i]){
            maxC = store[i];
            ans = i;
        }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vi arr;

    int element;
    int tc; cin >> tc;

    for (int t = 1; t <= tc; t++) {
    	cin >> element;
	arr.push_back(element);
    }

    cout << solve(arr);
}

