#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    ll max = 0;
    ll t = 0;
    ll sum = 0;
    for (int i = 0; i < N; i++){
        if (A[i] > max){
            t += 2*A[i]-max;
            sum += (A[i]-max)*i;
            max = A[i];
        }
        else {
            t += A[i];
        }
        cout << sum+t << "\n";
        sum += t;
    }
}
