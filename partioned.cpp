#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;
bool canPartition(vector<int>& nums, vector<bool>& used, int index, int k, int currentSum, int targetSum) {
    if (k == 1) return true; 
    if (currentSum == targetSum) return canPartition(nums, used, 0, k - 1, 0, targetSum); // Start a new partition
    if (currentSum > targetSum) return false; 
    
    for (int i = index; i < nums.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            if (canPartition(nums, used, i + 1, k, currentSum + nums[i], targetSum)) {
                return true;
            }
            used[i] = false; // Backtrack
        }
    }
    return false;
}
bool canPartitionKSubsets(vector<int>& nums, int k) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum % k != 0) return false;
    
    int targetSum = totalSum / k;
    vector<bool> used(nums.size(), false);
    sort(nums.begin(), nums.end(), greater<int>()); // Sort in descending order
    
    return canPartition(nums, used, 0, k, 0, targetSum);
}
int main() {
    vector<int> nums = {4, 3, 2, 3, 5, 2, 1};
    int k = 4;
    
    if (canPartitionKSubsets(nums, k)) {
        cout << "The array can be partitioned into " << k << " parts with equal sum." << endl;
    } else {
        cout << "The array cannot be partitioned into " << k << " parts with equal sum." << endl;
    }
    return 0;
}