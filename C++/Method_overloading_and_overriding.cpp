#include<iostream>
using namespace std;

class Methods{
    int var;

    public: 
       virtual void pure() = 0;
        //Method Overloading...
        int virtual power(int num){
            num *= num;
            return num;
        }

        int power(int num, int expo){
            int result=num;
            for(int i=1; i<expo; i++){
                result *= num ;
            }
            return result;
        }
};

class Derived : public Methods{
    public: 
        //Method overriding...
        int power(int num){
            cout<<"Maximum power of the bike is: "<<num<<" km/h"<<endl;
        }
        void pure(){
            cout<<"Welcome to BMW"<<endl;
        }
};
//Driver programme...
 
int main(){
    Methods t1;
    Derived t2;
    t2.power(50);
    cout<<"Pow^2 : "<<t1.power(11);
    cout<<endl<<"Power : "<<t1.power(3, 3);
    t2.pure();
    
    return 0;
}