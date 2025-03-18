#include <iostream>

using namespace std;

void solve(){
    
    int size, num;
    int res = 0;
    cin >> size;
    int maxPos = size-1, minPos = 0;
    int maxNum = INT_MIN, minNum = INT_MAX;
    for (int i=0; i<size; i++){
        cin >> num;
        if (num >= maxNum){
            if (num == maxNum) maxPos = min(maxPos,i);
            else maxPos = i;
            maxNum = num;
        }
        if (num <= minNum){
            if (num == minNum) minPos = max(minPos,i);
            else minPos = i;
            minNum = num;   
        }
    }

    if (maxPos > minPos) res = maxPos + (size - 1 - minPos) - 1;
    else res = maxPos + (size - 1 - minPos);

    cout << res <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}