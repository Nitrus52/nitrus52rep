#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < 10000; i++){
        int i1 = i%10, i10 = i/10%10, i100 = i/100%10, i1000 = i/1000;
        int check[10] = {};
        check[i1] = 1;
        check[i10] = 1;
        check[i100] = 1;
        check[i1000] = 1;

        bool isOk = true;
        for (int i = 0; i < 10; i++){
            if (s[i] == 'o'){
                if (check[i] != 1){
                    isOk = false;
                }
            }
            if (s[i] == 'x'){
                if (check[i] != 0){
                    isOk = false;
                }
            }
        }

        if (isOk) ans++;
    }
    cout << ans << "\n";
}
