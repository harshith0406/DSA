#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cout<<"Enter the string";
  // cin>>str;
  getline(cin, str);
  cout<<"the string is: "<<str<<endl;
  cout<<"length of the string is: "<<str.length()<<endl;
  cout<<"isempty "<<str.empty()<<endl;
  str.push_back('h');
  cout<<str<<endl;
  str.pop_back();
  cout<<str<<endl;
  cout<<"substr--"<<str.substr(0,2)<<endl;
  //position,length of the string 
  return 0;
}