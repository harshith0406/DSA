#include <bits/stdc++.h>
using namespace std;
void cmp(string a, string b)
{
  if (a.length() != b.length())
  {
    cout << "not same";
  }
  int i=0,j=a.length()-1;
  while(i<=j){
    if(a[i] != b[i]){
      cout<<"not same";
      return;
    }
    i++;
  }
  cout<<"same"<<endl;
}
int main()
{
  string a = "hello", b = "hello";
  cmp(a, b);
  return 0;
}