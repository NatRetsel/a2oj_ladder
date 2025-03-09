#include <iostream>
#include <vector>

using namespace std;

void flip(vector<vector<int>>& grid, int row, int col){
    grid[row][col] == 1? grid[row][col] = 0 : grid[row][col] = 1;
    // up
    if (row-1 >=0) grid[row-1][col] == 1? grid[row-1][col] = 0 : grid[row-1][col] = 1;
    //down
    if (row+1 < grid.size()) grid[row+1][col] == 1? grid[row+1][col] = 0 : grid[row+1][col] = 1;
    // left
    if (col-1 >=0) grid[row][col-1] == 1? grid[row][col-1] = 0 : grid[row][col-1] = 1;
    //right
    if (col+1 < grid[0].size()) grid[row][col+1] == 1? grid[row][col+1] = 0 : grid[row][col+1] = 1;
}

void solve(){
    vector<vector<int>> res (3, vector<int>(3,true));
    int num;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> num;
            if (num % 2 != 0) {
                flip(res, i, j);
            }
        }
    }



    for (vector<int>row:res){
        for (int num: row){
            cout<<num;
        }
        cout<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}