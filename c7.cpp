#include <iostream>

using namespace std; 

class myVector{
    public:
        myVector(initializer_list<int>& ls){
            elem = new int[ls.size()];
            sz = ls.size();
            int *ptr = elem;
            
            for(auto x : ls){
                *ptr = x;
                ptr++;
            }
        }
        void print() const{
            int *p = elem;
            for(int i = 0; i < sz; i++){
                cout << *p << endl;
                p++;
            }
        }

    private:
        int sz;
        int *elem;
};

class A{
    int x;
    public:
        A(int i){ 
            x = i;
        }
        void print(){
            cout << "x is: " << x << endl;
        }
        int read(){return x;}
};
class B{
    int y; 
    public:
        B(A a){ 
            y = a.read();
        }
        void print(){
            cout << "y is: " << y << endl;
        }
};
 


int main(){
    initializer_list<int> ls = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    myVector v = ls;
    v.print();
    
    A a = 10;
    B b = a;
    b.print();
    
}

