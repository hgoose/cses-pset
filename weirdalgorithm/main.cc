#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(int argc, char** argv) {

    ll t;
    cin >> t;
    cout << t;
    while (t != 1) {
        if (t % 2 == 0) {
            t/=2;
        } else {
            t=t*3+1;
        }
        cout << " " << t;

    }
    return 0;
}
