#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,k;
    cin >> n >> k;
    map<ll, ll> m;
    for (int i = 0; i < n; i++){
        ll a,b;
        cin >> a >> b;
        m[a] += b;
    }

    ll money = k;
    ll ans = 0;
    for (auto p : m){
        ll key = p.first;
        ll val = p.second;
        if (money-(key-ans) < 0){
            cout << ans+money << "\n";
            return 0;
        }
        else {
            ans += key;
            money -= key;
            money += val;
        }
    }
    cout << ans+money << "\n";
}
