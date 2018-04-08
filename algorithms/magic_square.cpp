#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int formingMagicSquare(vector < vector<int> > s) {
    
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int f_i = 0;
    int f_j = 0;
    int n = s.size();
    int M = 0;
    int M1 = 0;
    int M2 = 0;
    int cost = 0;
    bool found = false;
    
    M = n * (n*n + 1) / 2;   //the wright number of magic matrix
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            M1 += s[i][j];
        
        if (M1 != M){    //если найдена ошибка в строке, значит она и в столбце
            f_i = i;    //поймали не верную строку
            
            for (k = 0; k < n; k++){
                for (l = 0; l < n; l++)
                    M2 += s[l][k];
                
                if (M2 != M){
                    f_j = k;   //поймали не верный столбец
                }
            }  
            cost += abs(M1 - M);
            s[f_i][f_j] += abs(M1 - M);
            //cout <<s[f_i][f_j]<<"\n";
        }
        
            
        M1 = 0; 
        M2 = 0;
    }    
    
    return cost;
}

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}
