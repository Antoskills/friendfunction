#include <iostream>
using namespace std;

class fflearn
{
  int a,b;
  public:
  void getdata()
  {
    a=10;
    b=20;
  }
  friend float sum(fflearn f);
};

float sum (fflearn f)
{
  return float(f.a+f.b);
}
int main()
{
  fflearn f;
  f.getdata();
  cout<<"value="<<sum(f);
  return 0;
}
