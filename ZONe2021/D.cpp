#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;

int main(){
    string s;
    cin >> s;

    vector<char> t(1000010);
    int pr = 500005, pl = 500006;
    bool dir = true;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'R'){
            dir = !dir;
            continue;
        }

        if (dir){
            t[pl] = s[i];
            if (t[pl] == t[pl-1]) pl--;
            else pl++;
        }
        else {
            t[pr] = s[i];
            if (t[pr] == t[pr+1]) pr++;
            else pr--;
        }
    }

    if (dir){
        for (int i = pr+1; i < pl; i++){
            cout << t[i];
        }
    }
    else {
        for (int i = pl-1; i > pr; i--){
            cout << t[i];
        }
    }
    cout << "\n";
}
