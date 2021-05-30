#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans;
    if (a == b) ans = c;
    else if (a == c) ans = b;
    else if (b == c) ans = a;
    else ans = 0;

    cout << ans << "\n";
}
