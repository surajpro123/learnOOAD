#include <iostream>
using namespace std;

class c2;
class c1{
    int val;
    friend void exchange(c1 &,c2&);
    public:
        void indata(int a){
            val=a;
        }
        void display(){
            cout<<val<<endl;
        }
};


class c2{
    int num;
    friend void exchange(c1&,c2&);
    public:
        void indata(int a){
            num=a;
        }
        void display(){
            cout<<num<<endl;
        }
};

void exchange(c1 &o1, c2 &o2){
    int tmp=o1.val;
    o1.val=o2.num;
    o2.num=tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(23);
    oc2.indata(43);
    exchange(oc1,oc2);

    oc1.display();
    oc2.display();
}