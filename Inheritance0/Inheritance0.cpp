#include <iostream>
using namespace std;

class A
{
public:
   void fun1()
   {}
    
};
class B : virtual public A
{
public:

    
};
class C :virtual public A
{
public:

    
};
class D : public B, public C
{
public:
    

  
};  

int main()
{
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    cout << sizeof(D) << endl;




    
}
