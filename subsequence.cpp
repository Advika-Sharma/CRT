#include <iostream>
#include <vector>
using namespace std;
bool isSubsequence(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    int m = b.size();
    int i = 0; 
    int j = 0;
    while (j < m) {
        if (i < n && a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i == n;
}
int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {1, 2, 3, 4, 5};

    if (isSubsequence(a, b)) {
        cout << "Array a is a subsequence of array b." << endl;
    } else {
        cout << "Array a is not a subsequence of array b." << endl;
    }
    return 0;
}