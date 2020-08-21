#include <iostream>

using namespace std;

class Error{};
class Error1{};
void test1() {
    throw Error1();
}

int main(){
    try{
        test1();
    }
    catch(Error){
        cout << "ohhhh" << endl;
    }
    cout << "still working" << endl;
}
