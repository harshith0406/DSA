#include <bits/stdc++.h>
using namespace std;
void rev(char *name,int size){
  int i=0,j=size-1;
  bool found=true;
  while(i<j){
    if(name[i]!=name[j]){
      found = false;
      break;
    }
    i++;j--;
  }
  if(found){
    cout<<"palindrome";
  }
  else{
    cout<<"not palindrome";
  }
}
int main()
{
  char name[100];
  cout << "enter the name";
  cin.getline(name, 50);
  rev(name,strlen(name));
  return 0;
}