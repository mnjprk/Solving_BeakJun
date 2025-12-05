#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, target;
	cin >> N >> target;
	
	vector<int> coin_value(N);
	
	for(int i = 0; i < N; i++){
		cin >> coin_value[i];
	}
	
	int cnt = 0;
	
	for(int i = N - 1; i >= 0; i--){
		if(coin_value[i] < target){
			cnt += target / coin_value[i];
			target %= coin_value[i];
		}
		if(target == 0) break;
	}
	
	cout << cnt;
	
	return 0;
}
