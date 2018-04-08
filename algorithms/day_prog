#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    
    string solve = "";
    
    if (year > 1699){
      if (year != 1918){
        if (((year % 400 == 0) || ((year % 4 == 0)&&(year % 100 != 0))) && (year > 1918))
            solve = "12.09." + to_string(year);
        else
            solve = "13.09." + to_string(year);
        
        if ((year % 4 == 0) && (year < 1918))
            solve = "12.09." + to_string(year);
        
        if ((year % 4 != 0) && (year < 1918))
            solve = "13.09." + to_string(year);
      }
      else
        solve = "26.09." + to_string(year);   
    }   
    return solve;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
