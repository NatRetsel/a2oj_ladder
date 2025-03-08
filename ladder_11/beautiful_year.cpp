#include <iostream>

using namespace std;

void solve(){
    int num;
    cin >> num;
    while (true) {
        num++;
        int thousands = num / 1000;
        int hundreds = num/100 % 10;
        int tens = num/10 % 10;
        int ones = num % 10;
        if (thousands != hundreds && thousands != tens && thousands != ones && hundreds != tens && hundreds!=ones && tens !=ones){
            break;
        }
    }
    cout << num <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}