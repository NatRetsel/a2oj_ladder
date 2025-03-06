#include <vector>
#include <iostream>

using namespace std;


void solve() {
    int n;
    // Your code here
    int row = 0, col = 0;
    int r = 0, c = 0;
    bool found = false;
    while (row < 5){
        cin >> n;
        if (n == 1) {
            found = true;
            r = row;
            c = col;
        }
        col++;
        if (col == 5) {
            row++;
            col = 0;
        }
    }
    // smallest number of operation == shortest distance to middle
    cout<<abs(3-(r+1))+abs(3-(c+1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}