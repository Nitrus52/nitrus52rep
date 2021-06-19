#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int r = n*1.08;
    if (r < 206) cout << "Yay!\n";
    else if (r == 206) cout << "so-so\n";
    else cout << ":(\n";
}
