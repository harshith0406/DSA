#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a="hello world";
  //string b="hello world";
  string target="world";
  if(a.find(target)==-1){
    cout<<"not present";
  }
  else{
    cout<<"the pos is "<<a.find(target)<<endl;
  }
  //replace

  string str="this is my first msg";
  string word="love";
  str.replace(0,4,word);
  cout<<str<<endl;
  str.erase(0,4);
  cout<<str<<endl;
  return 0;
}