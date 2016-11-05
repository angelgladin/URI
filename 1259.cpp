/*
  Even and Odd
  URI Online Judge | 1259
  https://www.urionlinejudge.com.br/judge/en/problems/view/1259
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template<typename T> void print_priority_queue(T& q)
{
  while(!q.empty()){
    cout << q.top() << endl;
    q.pop();
  }
}

int main()
{
  int t, aux;
  priority_queue<int, vector<int>, greater<int> > q_even_asc;
  priority_queue<int> q_odd_n_desc;
  
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> aux;
    if(aux % 2 == 0)
      q_even_asc.push(aux);
    else
      q_odd_n_desc.push(aux);
  }

  print_priority_queue(q_even_asc);
  print_priority_queue(q_odd_n_desc);
}
