/*
  To Carry or not to Carry
  URI Online Judge | 1026
  https://www.urionlinejudge.com.br/judge/en/problems/view/1026
*/

#include <iostream>

using namespace std;

int main()
{
  unsigned int a, b;
  while(cin >> a >> b){
    cout << (a ^ b) << endl;
  }
}
