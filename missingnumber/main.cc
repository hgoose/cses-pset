#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char** argv) {

    ll t, tmp, i{};
    cin >> t;
    vector<int> n(t-1);

    while (cin >> tmp) { 
        n[i++] = tmp;
    }

    ll should = (t*(t+1))/2;
    for (const auto e : n) {
        should-=e;
    }
    cout << should;

    return 0;
}
