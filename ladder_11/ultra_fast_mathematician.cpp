#include <iostream>

using namespace std;

void solve(){
    string num1;
    string num2;
    cin >> num1;
    cin >> num2;

    string res (num1.size(), '0');

    for (int i=0; i<num1.size(); i++){
        if (num1[i] != num2[i]) res[i] = '1';
    }

    cout << res << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}