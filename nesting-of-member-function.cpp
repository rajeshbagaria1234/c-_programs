#include<iostream>
using namespace std;
//nesting of member function

void setdata(){



    cout<<"m is less than 5"<<endl;

}


void getdata(int m){

if (m<5)
{


setdata();
    
}
}


int main()
{
getdata(2);
getdata(4);


 return 0;
}