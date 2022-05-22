#include<iostream>
using namespace std;

class complx{
    int a;
    int b;
public:
    friend complx adcomplx(complx fst,complx snd);
    friend int myfun(complx f,complx s);
    void setcomplx(int x,int y){
        a = x;
        b = y;

    }
    void prnt(void){
        cout<<"YOur complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }

};

complx adcomplx(complx fst,complx snd){
    complx trd;
    trd.setcomplx((fst.a+snd.a),(fst.b+snd.b));
    return trd;

}

int myfun(complx f,complx s){

    return f.a+s.b;

}



int main(){

    complx s1,s2,s3;
    s1.setcomplx(1,2);
    s1.prnt();
    s2.setcomplx(3,4);
    s2.prnt();
   s3 = adcomplx(s1,s2);
   s3.prnt();


   printf("the sum of two number is %d",myfun(s1,s2));


    return 0;


}

