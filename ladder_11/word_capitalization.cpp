#include <iostream>

using namespace std;

void solve(){
    string str;
    char ch;
    while (cin.peek() != '\n'){
        cin >> ch;
        str += ch;
    }
    str[0] = toupper(str[0]);
    cout<<str<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}