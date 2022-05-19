#include<iostream>
using namespace std;
class p1{
public:
    void fun (){
    cout<<"hello";}
    };
    class  p2 : public p1{
public:
    void fun1(){
    cout<<"hello1";
    }
    };
    class p3 : public p1{
        public:
    void fun2(){
   cout<<"hello2";
   }
    };
    class p4:public p2,public p3{
public:
    void fun4(){
 cout<<"hello3";
 }
    };
    int main(){
    p4 obj;
   // obj.fun();
    obj.p2::fun();
    }

