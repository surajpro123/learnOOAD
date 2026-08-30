//constructor

#include<iostream>
using namespace std;

class show{
    int data;
    public:
        show(void);
        void print(){
            cout<< data <<endl;
        }
};
     
show::show(void){
    data=32;
}

int main(){
    show s;
    s.print();
}
