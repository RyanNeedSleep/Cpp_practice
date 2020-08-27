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
        ~Vector_container(){}
        
        int size() const{return v.size();}
        double& operator[](int i){return v[i];}
};

int main(){
    
    print(v);
    cout << "done" << endl;
}
