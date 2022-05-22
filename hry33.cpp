#include<iostream>
#include<string>
//main concept is constructor overloading.....................

using namespace std;

class Bank{

    int maintk;
    int interst;
    int year;
    float interstrat;
    float tkwithinterst;

public:
    Bank(){};
    Bank(int tk1,float tk2,int y1);
    Bank(int tk1,int tk2,int y1);

    void display(void){
        cout<<"joma taka is "<<maintk<<" and tk-with-intersted is : "<<tkwithinterst<<endl;
    }



};

Bank :: Bank(int tk1,float tk2,int y1){

    maintk = tk1;
    interstrat = tk2;
    year = y1;
    tkwithinterst = maintk;
    cout<<tkwithinterst * (1+5)<<endl;

    for(int i=0;i<year;i++){
        tkwithinterst = tkwithinterst *(1+interstrat);
    }

}

Bank :: Bank(int tk1,int tk2,int y1){

    maintk= tk1;
    interstrat = float(tk2)/100;
    year = y1;
    tkwithinterst = maintk;
    for(int i = 0;i<year;i++){

        tkwithinterst = tkwithinterst * (1+interstrat);
    }

}




int main(){
    /*
    int a,b,d;
    float c;
    cout<<"inter the number : "<<endl;
    cin>>a>>b>>c;
    */
    Bank e1(500,5,1);
    //by default expression value of c is double......
    e1.display();
    Bank e7;



return 0;
}

