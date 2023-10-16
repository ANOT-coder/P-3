
#include <iostream>
using namespace std;
class automobile{
          public:
          char name[50];
          char model[25];
       void set()
    {
        cout<<" enter the name:";
        cin>> name;
        cout<<" enter the model number:";
        cin>> model;
    }
};
class car:public automobile
{
    
    public:
    void display()
    {
        cout<<" Brand name:"<<name<<endl;
      
        cout<<" Model :"<<model;
    }
};

int main()
{
    car c;
    c.set();
    c.display();
    
    return 0;

}