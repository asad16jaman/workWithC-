
#include<iostream>
using namespace std;
class Calculator;




class complx{
    int a;
    int b;
    friend int Calculator :: realadd(complx,complx);
public:
    void setcomplx(int x,int y){
        a = x;
        b = y;

    }
    void prnt(void){
        cout<<"YOur complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }

};
class Calculator{
public:
    int sumdata(int x,int y){
        return x+y;
    }

    int realadd(complx,complx);

};



int Calculator :: realadd(complx x,complx y){

    return x.a + y.a;
}






int main(){

    complx c1,c2;
    c1.setcomplx(1,2);
    c2.setcomplx(3,4);
    Calculator  cl1;
    cl1.realadd(c1,c2);


    return 0;


}


