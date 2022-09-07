#include<iostream>
using namespace std; 
int GCD(int Num1,int Num2){
    if(Num1==0){
        return Num2;
    }
    if(Num2==0){
        return Num1;
    }
    while(Num1!=Num2){
        if(Num1>Num2){
            Num1-=Num2;
        }
        if(Num2>Num1){
            Num2-=Num1;
        }
    }
    return Num1;
}
int main()
{
    int Num1,Num2;
    cin>>Num1>>Num2;
    int Ans1 = GCD(Num1,Num2);
    int Ans2 = (Num1*Num2)/Ans1;
    cout<<"gcd of "<<Num1<<" and "<<Num2<<" is = "<<Ans1<<endl;
    cout<<"lcm of "<<Num1<<" and "<<Num2<<" is = "<<Ans2<<endl;
    return 0;
}