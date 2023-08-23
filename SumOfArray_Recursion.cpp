#include<bits/stdc++.h>
using namespace std;
// 22A91A12A1

int sumofall(int n, int A[]) {
    if(n == 0) return 0;
    return A[n-1] + sumofall(n-1, A);
}

int main() {
    int a;
    cin >> a;
    int A[n];
    for(int i=0; i<a; i++) {
        cin >> A[i];
    }
    cout << sumofall(a, A);
    return 0;
}
