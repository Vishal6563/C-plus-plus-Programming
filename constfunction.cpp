#include<iostream>
using namespace std;

// constant function is such function which cannot change the value of its coller object

class Demo
{
    public:
    int A;
    int B;
    const int C;
    const int D;

    Demo() :C(11),D(10)
    {
        A=0;
        B=0;
    }
    Demo(int i, int j,int k, int l) : C(k), D(l)
    {
        A = i;
        B = j;
    }
    void fun()
    {
        // A++;   //A
        // B++;   //A
        // C++;   //NA
        // D++;   //NA
    }
    void gun() const
    {
        // A++;   //NA
        // B++;   //NA
        // C++;  / //NA
        // D++;   //NA
    }
};

int main ()
{
 
   Demo obj1(10,20,30,40);
   const Demo obj2(10,20,30,40);

   obj1.fun();
   obj1.gun();
   
   obj2.fun(); 
   obj2.gun();







    return 0; 
}