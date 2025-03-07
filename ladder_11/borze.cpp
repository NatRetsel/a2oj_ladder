#include <iostream>
#include <unordered_map>

using namespace std;

void solve(){
    char ch;
    string num;
    string res;
    unordered_map<string, string> ternary = {{".","0"},{"-.","1"},{"--","2"}};
    do {
        cin >> ch;
        num += ch;
        if (ternary.contains(num)) {
            res += ternary[num];
            num = "";
        } 
    }while(cin.peek() != '\n');
    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}