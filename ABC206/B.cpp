#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; ; i++){
        sum += i;
        if (sum >= n){
            cout << i << "\n";
            break;
        }
    }
}
