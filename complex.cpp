#include<iostream>
using namespace std;
class Complex{
  public:
  int a,b;
  Complex(){
    a=0;
    b=0;
  }
  Complex(int x,int y){
    a=x;
    b=y;
  }
  void add(Complex&ob,Complex&ob1){
    int c=ob.a+ob1.a;
    int d=ob.b+ob1.b;
    cout<<c<<"+i"<<d<<endl;
  }
  void sub(Complex&ob,Complex&ob1){
    int c=ob.a-ob1.a;
    int d=ob.b-ob1.b;
    cout<<c<<"-i"<<d<<endl;
  }
  void multiply(Complex&ob,Complex&ob1){
    int c=(ob.a*ob1.a)-(ob.b*ob1.b);
    int d=(ob.a*ob1.b)+(ob.b*ob1.a);
    cout<<c<<"+i"<<d<<endl;
  }
  void division(Complex&ob,Complex&ob1){
    float c=((ob.a*ob1.a)-(ob.b*ob1.b))/(((ob1.a*ob1.a)+(ob1.b*ob1.b))*1.0);
    float d=((ob.b*ob1.a)-(ob.a*ob1.b))/(((ob1.a*ob1.a)+(ob1.b*ob1.b))*1.0);
    cout<<c<<"+i"<<d<<endl;
  }
};
int main(){
  cout<<"enter real and imaginary part of 1st no.";
  int x,y;
  cin>>x>>y;
  Complex obj(x,y);
  cout<<"enter real and imaginary part of 2nd no.";
  cin>>x>>y;
  Complex obj1(x,y);
  obj.add(obj,obj1);
  obj.sub(obj,obj1);
  obj.multiply(obj,obj1);
  obj.division(obj,obj1);
}