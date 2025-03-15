#include <iostream>

using namespace std;


void solve(){
    long long num;
    cin >> num;
    int numLucky = 0;
    while (num != 0){
        int remain = num%10;
        if (remain == 4 || remain == 7) numLucky++;
        num /= 10;
    };
    
    if (numLucky == 4 || numLucky == 7) cout <<"YES"<<endl;
    else cout << "NO" <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}