# dynamic.cpp
#include<iostream>
  using namespace std;
  class fixed_deposit
  {long int p_amount; //principal amount
   int years;
   float rate;
   float r_value;
  public:
   fixed_deposit(){ }
  fixed _deposit(long int p,int y,float r=0.12);
  fixed_deposit(long int p,int y,int r);
  void display(void);};
  fixed_deposit::fixed_deposit(long int p,int y,float r)
  {p_amount=p;
  years=y;
  rate=r;
  r_value=p_amount;
  for(int i=1;i<=y;i++)
      r_value=r_value*(1.0+r);
   fixed_deposit::fixed_deposit(long int p,int y,int r)
    {p_amount=p;
     years=y;
     rate=r;
     r_value=p_amount;
     for(int i=1;i<=y;i++)
     r_value=r_value*(1.0+float(r)/100);}
  void fixed_deposit::display(void)
  {cout<<"\n"<<"principal amount="<<p_amount<<"\n"<<"return value="<<r_value<<"\n";}
  int main()
  {fixed_deposit fd1,fd2,fd3;//deposits created
  long int p;
  int y;
  flaot r;
  int R;
  cout<<"enter amount,period,interest rate(in percent)"<<"\n";
  cin>>p>>y>>R;
  fd1=fixed_deposit(p,y,R);
  cout<<"enter amount,period,interest rate(in decimal)"<<"\n";
  cin>>p>>y>>r;
  fd2=fixed_deposit(p,y,r);
  cout<<"enter amount and period\n";
  cin>>p>>y;
  fd3=fixed_deposit(p,y);
  cout<<"\n deposit 1";
  fd1.display();
  cout<<"\n deposit 2";
  fd2.display();
  cout<<"\n deposit 3";
  fd3.display();
  return 0;
  }