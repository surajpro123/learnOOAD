#include <iostream>
using namespace std;

// forward declaration --->
class Y;
class X
{
    int data;
    friend void add(X, Y);

public:
    void setvalue(int v)
    {
        data = v;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setvalue(int v)
    {
        num = v;
    }
};

void add(X o1, Y o2)
{
    cout << o1.data + o2.num;
}

int main(){
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setvalue(5);

    add(a1,b1);
}
