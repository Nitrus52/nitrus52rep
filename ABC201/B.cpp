#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<pair<int, string>> a(N);
    for (int i = 0; i < N; i++){
        string s;
        int t;
        cin >> s >> t;
        a[i] = make_pair(t, s);
    }
    sort(a.begin(), a.end());
    cout << a[N-2].second << "\n";
}
