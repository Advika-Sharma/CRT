//#include <iostream>
//using namespace std;

//int main() {
//  cout << "Hello World!\n";
//  cout<<2<<endl;
//  int a = 89;
//  cout << a++;
//  cout<<a;
//  return 0;
//  int a=5;
//  if ( a == 5){
//    cout <<"valid\n";
//  }
//  cout <<"invalid";
//}

//triangle shape in c++
//int main() {
//  for (int i = 0; i < 5; i++) {
//    for (int j = 0; j < 5 - i; j++) {
//      cout << " ";
//    }
//    for (int k = 0; k <= i; k++) {
//      cout << "*";
//    }
//    cout << endl;
//  }
//}


//given an arry containing positive integers in the array print the smallest ointeger in the array eg (2,9,-1,2,-5,1,10)
//#include <iostream>
//#include <limits> // For std::numeric_limits
//
//int main() {
//    int arr[] = {2, 9, 1, 10};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int min = arr[0];
//    for (int i = 1; i < n; ++i) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    std::cout << "The smallest integer in the array is: " << min << std::endl;
//
//    return 0;
//}

//given an array , find first and second maximum space : O(1), time : O(n) or less {3,1,3,-1,6,-2}
#include <iostream>
#include <limits> // For numeric limits

void findFirstAndSecondMax(const int arr[], int size) {
    if (size < 2) {
        std::cout << "Array should have at least two elements." << std::endl;
        return;
    }

    // Initialize the first and second maximums
    int firstMax = std::numeric_limits<int>::min();
    int secondMax = std::numeric_limits<int>::min();

    // Traverse the array
    for (int i = 0; i < size; ++i) {
        if (arr[i] > firstMax) {
            // Update both firstMax and secondMax
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            // Update only secondMax
            secondMax = arr[i];
        }
    }

    // Check if the second maximum is still the initial value
    if (secondMax == std::numeric_limits<int>::min()) {
        std::cout << "There is no second maximum element." << std::endl;
    } else {
        std::cout << "First Maximum: " << firstMax << std::endl;
        std::cout << "Second Maximum: " << secondMax << std::endl;
    }
}

int main() {
    int arr[] = {3, 1, 3, -1, 6, -2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFirstAndSecondMax(arr, size);

    return 0;
}


//given array => sorted, rotated 
//sorted , none 

//{1,2,3,4,5,6}
//{2,3,4,5,6,1}
//{3,4,5,6,1,2}
//{4,5,6,2,8}