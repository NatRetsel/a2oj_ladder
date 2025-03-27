#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void solve(){
    int d;
    vector<int>damages(4, 0);
    for (int i=0; i<4; i++) cin >> damages[i];
    cin >> d;
    vector<int>dragons(d+1,0);
    int res = 0;
    for (int num : damages){
        for (int i=num; i<=d; i+=num){
            if (dragons[i] == 0) {
                dragons[i] = 1;
                res++;
            }
        }
    }
    cout << res <<endl;    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}