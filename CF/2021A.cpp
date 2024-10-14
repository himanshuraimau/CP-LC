#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long result = a[0];  
        for (int i = 1; i < n; ++i) {
            result = (result + a[i]) / 2;  
        }
        cout << result << endl;
    }

    return 0;
}
