#include<iostream>
#include<sstream>

int main(){
  using namespace std;

  istringstream istr("1 5.67");

  cout<<istr.str()<<endl;
  string str = istr.str();
  cout<<str<<endl;
  int n ;
  double d;
  istr>>n;
  istr>>d;

  cout<<d<<endl;
  cout<<n<<endl;
  return 0;














}

