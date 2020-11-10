#include <bits/stdc++.h>

using namespace std;

void solve(double mealC, int tipP, int taxP) {
    meal_cost = ( mealC*((float)tipP/100)) + (mealC*((float)taxP/100) ) + mealC;
    
    if(mealC-(int)mealC > 0.5)
        cout << (int)mealC+1;
    else
     cout << (int)mealC;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
