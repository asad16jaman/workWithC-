#include<iostream>
using namespace std;

class Emp{
    int id;
    static int ser;
public:
    void setId(void){
        cout<<"inter the id number:"<<endl;
        cin>>id;
        ser++;

    };
    void disp(void){
        cout<<"id number is : "<<id<<" and ser number is : "<<ser<<endl;
        //ser++;
    }


};

//int Emp:: ser=1;
int Emp:: ser;



int main(){

    Emp st1,st2,st3,st4;

    st1.setId();
    //st1.setId();
    //st1.setId();
    st1.disp();

    st2.setId();
    st2.disp();

    st3.setId();
    st3.disp();

    st4.setId();
    st4.disp();



    return 0;


}
