#include <bits/stdc++.h>
using namespace std;
int main()
{
  char name[100];
  cout << "enter the name";
  // cin >> name;->fails when we have an space or newlime or tab char
  cin.getline(name, 5); 
  // size here is amount of the character that can be taken as input for the character

  cout << "my name is " << name << endl;
  return 0;
}