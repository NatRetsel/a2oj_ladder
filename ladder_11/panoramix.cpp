#include <iostream>
#include <vector>
using namespace std;

void sieve_of_eratosthenes(vector<bool>& isPrime){
    for (int i=2; i*i <= 50; i++){
        if (isPrime[i] == true){
            for (int j = i*i; j<=50; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

void solve(){
    vector<bool> isPrime(51,true);
    sieve_of_eratosthenes(isPrime);
    int num1;
    int num2;
    cin >> num1 >> num2;
    int left = num1+1;
    while (isPrime[left] != true){
        left++;
    }
    if (left == num2)cout << "YES"<<endl;
    else cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}