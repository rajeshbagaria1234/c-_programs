#include<iostream>
using namespace std;


class B; //forward decleration

class A{

private:
        int a=5;
        int b=6;

        public:
 
        int c;

        void setdata(){
         c=a+b;
        }

        friend void hello(A m,B n);

};

class B{

private:
        int d=4;
        int e=5;
        

        public:
           
           int f;
        void setvalue(){
           
           f=d+e;
        }

friend void hello(A m,B n);

};

void hello(A m,B n){

int h=m.c+n.f;
cout<<h<<endl;

}

int main()
{
A x;
x.setdata();
B y;
y.setvalue();

 hello(x,y);
 return 0;
}