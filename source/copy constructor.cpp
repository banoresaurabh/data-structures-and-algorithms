 #include<iostream>
 using namespace std;
 class test
 {
     int t;
 public:
    test(){}
    test(int a)
    {
        t=a;
    }
    test(test &x)
    {
        t=x.t;
    }
    void display()
    {
        cout<<t<<endl;
    }
 };
 int main()
 {
     test A(100);
     test B=A;
     test C(B);
     test D;
     D=A;

     A.display();
     B.display();
     C.display();
     D.display();
 }
