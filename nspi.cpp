#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs(a) ((a) < 0 ? -(a) : (a))


void solve();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; // default 1
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve() {
    ull r, c;
    cin >> r >> c;
    r--, c--;
    ull l = max(r, c);
    ull x = (((l + 1) * (l + 2)) >> 1) + ((l * (l + 1)) >> 1) - l;
    x -= (r - c) * (1 - ((l & 1) << 1));
    cout << x << "\n";
}
