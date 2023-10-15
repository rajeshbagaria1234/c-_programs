
#include<iostream>
using namespace std;

void setdata(int &c){
c=c+1;


}
int main()
{
int c=4;
setdata(c);

cout<<c<<endl;
cout<<c<<endl;

 return 0;
}