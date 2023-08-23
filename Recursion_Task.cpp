#include<bits/stdc++.h>
using namespace std;

// 22A91A12A1

void fun1(int i) {
    if(i > 10) return;
    else cout << i << " ";
    fun1(i+1);
}

void fun2(int i) {
    if(i < 1) return;
    else cout << i << " ";
    fun2(i-1);
}

int factorial(int n) {
    int fact = 1;
    if(n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}

int countdigits(int n) {
    if(n == 0) return 0;
    else return 1 + countdigits(n/10);
}

int main() {
    fun1(1);
    cout << endl;

    fun2(10);
    cout << endl;

    int n;
    cin >> n;
    int res = factorial(n);
    cout << res << endl;

    int digits = countdigits(12345);
    cout << digits << endl;

    return 0;
}
