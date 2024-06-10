#include <bits/stdc++.h>
using namespace std;
void rep(char *name, int size)
{
  // for(int i=0;i<size;i++){
  //   name[i]=toupper(name[i]);
  // }
  for (int i = 0; i < size; i++)
  {
    if (name[i] >= 'a' && name[i] <= 'z')
      name[i] = name[i] - 'a' + 'A';
  }
  cout << name << endl;
}
int main()
{
  char name[100];
  cout << "enter the name";
  cin.getline(name, 50);
  rep(name, strlen(name));
  return 0;
}