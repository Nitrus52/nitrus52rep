#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;

int main(){
    int N,D,H;
    cin >> N >> D >> H;
    int d[1010], h[1010];
    for (int i = 0; i < N; i++){
        cin >> d[i] >> h[i];
    }

    long double right = 0.0;
    long double left = 1000.0;
    for (int i = 0; i < 5000000; i++){
        long double mid = (right+left)/2;
        bool flag = true;
        for (int j = 0; j < N; j++){
            if ((H-mid)/D < (h[j]-mid)/d[j]) flag = false;
        }

        if (flag) left = mid;
        else right = mid;
    }

    cout << left << "\n";
}
