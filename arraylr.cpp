#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1);        // Array to hold elements (1-based indexing)
    vector<long long> prefix(N + 1, 0); // Prefix sum array

    // Input the array
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i]; // Calculate prefix sum
    }

    // Processing each query
    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        // Output the sum from index L to R using the prefix sum array
        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}
