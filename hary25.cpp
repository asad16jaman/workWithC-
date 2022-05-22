#include<iostream>
#include<string>
using namespace std;

/*
// arry on my user define data type...... and ar use...
class Student{
    string name;
    static int id;
public:
    void setName(void){
        cout<<"inter your name : "<<endl;
        cin>>name;

    };
    string display(){
        return name;
    }
    static idre(void){
        return id++;
    }
};
int Student:: id=1001;

*/
class Complex{
    int a;
    int b;

public:
    void setmy(int x,int y){
        a = x;
        b = y;
    }
    void setbyobj(Complex m,Complex n){
        a = m.a+n.a;
        b = m.b+n.b;
    }
    void display(void){
        cout<<"complax number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};



int main(){
    /*
       // arry on my user define data type...... and ar use...
        Student clone[5];
    for(int i=0;i<5;i++){
        clone[i].setName();
    }

    for(int i=0;i<5;i++){
        cout<<"id is : "<<clone[i].idre()<<" and name is : "<<clone[i].display()<<endl;
    }
    */

    Complex a1,b1,c1;
    a1.setmy(1,2);
    a1.display();
    b1.setmy(3,4);
    b1.display();
    c1.setbyobj(a1,b1);
    c1.display();



return 0;
}
