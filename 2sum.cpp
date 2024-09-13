#include <iostream>
#include <vector>

bool findPairWithSum(const std::vector<int>& a, int K) {
    int left = 0;
    int right = a.size() - 1;
    
    while (left < right) {
        int current_sum = a[left] + a[right];
        
        if (current_sum == K) {
            return true;
        } else if (current_sum < K) {
            ++left;
        } else {
            --right;
        }
    }
    
    return false;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5, 6}; // Sorted array
    int K = 3; // Target sum
    
    if (findPairWithSum(a, K)) {
        std::cout << "There exists a pair with sum " << K << ".\n";
    } else {
        std::cout << "No pair with sum " << K << " found.\n";
    }
    
    return 0;
}
