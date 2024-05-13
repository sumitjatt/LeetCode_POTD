#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        for(int i = 0 ; i<row ; i++){
            if(grid[i][0]==0){
                for(int j = 0 ; j<column ; j++){
                    if(grid[i][j]==0){
                        grid[i][j]=1;
                    }
                    else{
                        grid[i][j]=0;
                    }
                }
            }   
        }
        
        for(int i = 1 ; i<column ; i++){
            int a = 0;
            int b = 0;
            for(int j = 0; j<row ; j++){
                if(grid[j][i]==0){
                    a++;
                }
                else{
                    b++;
                }
            }
            if(a>b){
                for(int k = 0 ; k<row ; k++){
                    if(grid[k][i]==0){
                        grid[k][i]=1;
                    }
                    else{
                        grid[k][i]=0;
                    }
                }
            }
        }
        int sum = 0;
        for(int i = 0 ; i<row ; i++){
            int x = 1;
            for(int j = column-1 ; j>=0 ; j--){
              sum = sum + (grid[i][j]*x);
              x=x*2;
            }
        }
        return sum;
    }
};