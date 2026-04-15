#include <stdio.h>
#define ull unsigned long long
#define ll signed long long
static inline ull max(ull a, ull b) {
    ll diff = a - b;
    ll mask = diff >> 63;
    return a - (diff & mask);
}
static inline void solve();
int main() {
    int d;
    scanf("%d", &d);
    for (int i = 0; i < d; i++) {
        solve();
    }
}
static inline void solve() {
    ull r, c;
    scanf("%llu%llu", &r, &c);
    r--, c--;
    ull l = max(r, c);
    ull x = (((l + 1) * (l + 2)) >> 1) + ((l * (l + 1)) >> 1) - l;
   x += (((l & 1) << 1) - 1) * (r - c);
   printf("%llu\n", x);
}
