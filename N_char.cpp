#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char x;
    cin>>x;

    if(islower(x)){
    cout<<(char)toupper(x)<<endl;
    } else {
        cout<< (char)tolower(x)<<endl;
    }
}