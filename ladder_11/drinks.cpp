#include <iostream>
#include <iomanip>

using namespace std;

void solve(){
    int numOrangeDrinks;
    cin >> numOrangeDrinks;
    double res = numOrangeDrinks*100;
    double orangeContent;
    double totOrangeContents = 0.0;
    for (int i=0; i<numOrangeDrinks; i++){
        cin >> orangeContent;
        totOrangeContents += orangeContent;
    }
    res = (totOrangeContents / res) * 100.0;
    cout<<setprecision(12)<<fixed;
    cout <<res <<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}