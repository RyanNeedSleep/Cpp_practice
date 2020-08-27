# include <iostream> 
# include <vector>
using namespace std;

class Container {
    public:
        virtual double& operator[](int) = 0;
        virtual int size() const = 0;
        virtual ~Container(){}
};

void print (Container& c){
    const int size = c.size();

    for(int i = 0; i != size; i++){
        cout << c[i] << endl;
    }
}


class Vector_container : public Container {
    vector<double> v;
    public:
        Vector_container(int s): v(s) {}
        Vector_container(std::initializer_list<double>& ls): v(ls) {}
        ~Vector_container(){}
        
        int size() const{return v.size();}
        double& operator[](int i){return v[i];}
};

int main(){
    Vector_container v({1, 2, 3, 4, 5}); 
    print(v);
    cout << "done" << endl;
}
