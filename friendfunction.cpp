#include<iostream>
using namespace std;

class complex{

private:
           

           public:
           int a=5;
           int b=4;

           int p=5;
           int q=4;
          void setdata(){

            a,b,p,q;
          }


           friend void hello(complex s1,complex s2); 

};

void hello(complex s1,complex s2){

int c= s1.a+s1.b;

int w=s2.p+s2.q;

int z=c+w;

cout<<"value of z  in friend function is  "<<z<<endl;


}



int main()
{ complex d;
d.setdata();
hello(d,d);

   
 return 0;
}