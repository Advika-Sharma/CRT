#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
// Function to check if the array can be rearranged into a palindrome and calculate the number of possible palindromic arrays
bool canFormPalindrome(int arr[], int n) {
    unordered_map<int, int> freq;
    
    // Count the frequency of each element
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }
    // Count the number of odd frequency elements
    int oddCount = 0;
    for (auto f : freq) {
        if (f.second % 2 != 0) {
            oddCount++;
        }
    }
    // If more than one element has an odd count, the array cannot form a palindrome
    if (oddCount > 1) {
        return false;
    }
    // Calculate the number of palindromic permutations
    long long denominator = 1;
    long long halfLength = 0;
    
    for (auto f : freq) {
        denominator *= factorial(f.second / 2); // Divide frequencies by 2 (half of each goes on either side)
        halfLength += f.second / 2; // Sum of half-length of all elements
    }
    long long result = factorial(halfLength) / denominator;
    
    cout << "Number of possible palindromic arrays: " << result << endl;
    return true;
}
int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (canFormPalindrome(arr, n)) {
        cout << "The array can be rearranged to form a palindrome." << endl;
    } else {
        cout << "The array cannot be rearranged to form a palindrome." << endl;
    }
    return 0;
}