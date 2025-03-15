#include <iostream>

using namespace std;


void solve(){
    char ch;
    char prev = '0';
    int res = 0;
    int length = 0;
    cin >> length;
    for (int i=0; i<length; i++){
        cin >> ch;
        if (prev != '0' && ch == prev) res++;
        prev = ch;
    }
    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}