#include <iostream>

using namespace std; 

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "arr:   " << arr << endl;
    cout << "&arr:  " << &arr << endl;
    cout << arr - &arr << endl; 

}