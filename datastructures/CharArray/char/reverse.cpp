#include <bits/stdc++.h>
using namespace std;
void rev(char *name,int size){
  int i=0,j=size-1;
  char temp;
  while(i<j){
    temp=name[i];
    name[i]=name[j];
    name[j]=temp;
    i++;j--;
  }
  cout<<name<<endl;
}
int main()
{
  char name[100];
  cout << "enter the name";
  cin.getline(name, 50);
  rev(name,strlen(name));
  return 0;
}