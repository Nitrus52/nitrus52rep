#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            sum += i*100 + j;
        }
    }

    cout << sum << "\n";
}
