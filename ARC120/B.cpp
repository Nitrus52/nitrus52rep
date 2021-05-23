#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++){
        cin >> S[i];
    }

    vector<int> check(H+W-1), checkR(H+W-1), checkB(H+W-1);
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if (S[i][j] != '.') check[i+j] = 1;
            if (S[i][j] == 'R') checkR[i+j] = 1;
            if (S[i][j] == 'B') checkB[i+j] = 1;
        }
    }

    int t = 0;
    for (int i = 0; i < H+W-1; i++){
        if (check[i] == 0) t++;
    }

    bool flag = true;
    for (int i = 0; i < H+W-1; i++){
        if (checkR[i] && checkB[i]) flag = false;
    }
    if (flag) cout << modpow(2, t, 998244353) << "\n";
    else cout << 0 << "\n";
}
