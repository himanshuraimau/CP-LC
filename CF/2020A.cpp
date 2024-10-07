#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << endl;
            continue;
        }

        ull ans = 0;

        while (n > 0) {
            ull power = 1;
            ull q = 0;
            while (power <= n) {
                q++;
                power *= k;
            }

            ull largestPower = power / k;
            ull tmp = n / largestPower;

            ans += tmp;
            n -= largestPower * tmp;

            if (n < k) {
                ans += n;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
