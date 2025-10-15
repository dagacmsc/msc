#include<iostream>
using namespace std;
class fibonacci
{
 private:
  unsigned long int f0,f1,fib;
 public:
  fibonacci();
  void increment();
  void display();
};
fibonacci::fibonacci()
{
 cout<<"Constructor\n\n\n";
 f0=0;
 f1=1;
 cout<<f0<<'\t'<<f1<<'\t';
 fib=f0+f1;

}
void fibonacci::increment()
{
 f0=f1;
 f1=fib;
 fib=f0+f1;
}

void fibonacci::display()
{
 cout<<fib<<'\t';
}
int main()
{
 fibonacci number;
 for(int i=0;i<=10;i++)
 {
  number.display();
  number.increment();
 }
 return 0;
}


