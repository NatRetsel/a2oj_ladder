#include <iostream>

using namespace std;

void solve(){
    string str;
    char ch;
    int lowerCount = 0, upperCount = 0;
    while (cin.peek() != '\n'){
        cin >> ch;
        str += ch;
        if (isupper(ch)) upperCount++;
        else lowerCount++;
    }
    if (upperCount > lowerCount){
        for (int i=0; i<str.size(); i++){
            if (str[i] >= 'a' && str[i] <= 'z'){
                str[i] = toupper(str[i]);
            }
        }
    }else{
        for (int i=0; i<str.size(); i++){
            if (str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = tolower(str[i]);
            }
        }
    }
    cout<<str<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}