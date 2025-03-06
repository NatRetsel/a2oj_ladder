#include <iostream>

using namespace std;

void solve(){
    int n, t;
    cin >> n;
    cin >> t;
    string q(n, '\0');
    for (int i=0; i<n; i++){
        cin >> q[i];
    }
    for (int i=0; i<t; i++){
        int j=0;
        while (j < n-1){
            if (q[j] == 'B' && q[j+1] == 'G'){
                swap(q[j], q[j+1]);
                j += 2;
            }else{
                j++;
            }
        }
    }
    cout<<q<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}