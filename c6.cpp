#include <iostream>

using namespace std; 

class Test{
    public:
        Test(int v = 0){ value = v;}
        int getVal() const { return value;}
    private: 
        int value;
};

int main(){
    const Test t;
    int x = t.getVal();
    cout << x << endl;
}
