#include <bits/stdc++.h>
using namespace std;
int main()
{
  char name[100];
  cout << "enter the name";
  cin.getline(name, 50);
  int count = 0;
  for (auto i : name)
  {
    if(i=='\0') break;
    count++;
  }

  cout << "my name count is  " << count << endl;
  cout<<"using inbuild "<<strlen(name)<<endl;
  return 0;
}