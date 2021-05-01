#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < 12; i++){
        if (s.substr(i, 4) == "ZONe") count++;
    }
    cout << count << "\n";
}
