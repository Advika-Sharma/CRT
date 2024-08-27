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
#include <iostream>
#include <limits> // For std::numeric_limits

int main() {
    int arr[] = {2, 9, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    std::cout << "The smallest integer in the array is: " << min << std::endl;

    return 0;
}

