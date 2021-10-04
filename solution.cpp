//
// Created by Kylian Lee on 2021/10/04.
//

#include <iostream>
#include <queue>

using namespace std;

int main(){
  int N, K, cnt = 0;
  priority_queue<int> coins;
  cin >> N >> K;
  for (int i = 0; i < N; ++i) {
    int coin;
    cin >> coin;
    coins.push(coin);
  }
  while(K){
    while(coins.top() > K)
      coins.pop();
    int max_coin = coins.top();
    int max_num_of_coin = K / max_coin;
    K -= max_coin * max_num_of_coin;
    cnt += max_num_of_coin;
    coins.pop();
  }
  cout << cnt << '\n';
  return 0;
}