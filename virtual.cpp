#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"base print"<<endl;
    }
        void show()
        {
            cout<<"base show"<<endl;

        }
        
    }; 



class derived:public base{
    public:

    void print (){
cout<<"derived print "<<endl;

    }

    void show(){
        cout<<"derived show"<<endl;
    }


};
int main()
{
    base *bptr;
    derived d;
    bptr=&d;
    d.print();
    bptr-> print();
    bptr->show();


 return 0;  
}