#include<iostream>
using namespace std;
int count=0;
class test
{
public:
    test()
    {
        count++;
        cout<<"\n constuctor msg: object no."<< count <<"created\n \n"; }

    ~test()
    {
        cout<<"\n \n destructor msg: object no."<<count<< "destructed\n";
        count--;
    }
};

int main()
{
   cout<<"inside main block\n";
   cout<<" creating first object\n \n";

   test T1;
   {
       cout<<"hi\n";
   }

   {
       cout<<"inside block 1\n";
       cout<<"creating 2 more blocks\n";
       test T2;
       test T3;
       cout<<"leaving block1 \n";

   }

       cout<<"\n back in main";
       return 0;
}









