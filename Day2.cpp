#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double tip,tax,totalcost;
    //tip=meal_cost*(tip_percent/100);
    tip=meal_cost*(tip_percent*0.01);
    //cout << tip << endl;
    tax=meal_cost*(tax_percent*0.01);
    //cout << tax << endl;
    //totalcost=ceil(meal_cost+tip+tax);
    totalcost=round(meal_cost+tip+tax);
    //totalcost = meal_cost + tip + tax;
    cout << totalcost << endl;
    //cout<<"The total meal cost is "<<totalcost<<" dollars"<<endl;
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
