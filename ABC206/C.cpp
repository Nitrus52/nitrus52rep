#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<int, int> mp;
    ll ans = 0;
    for (int i = n-1; i >= 0; i--){
        ans += (n-1)-i;
        ans -= mp[a[i]];
        mp[a[i]] += 1;
    }

    cout << ans << "\n";
}
