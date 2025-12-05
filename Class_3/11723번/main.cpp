#include <iostream>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	bool S[21] = {false, };
	
	for(int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		
		if(cmd == "add") {
			int x;
			cin >> x;
			S[x] = true;
		}
		else if(cmd == "remove") {
			int x;
			cin >> x;
			S[x] = false;
		}
		else if(cmd == "check") {
			int x;
			cin >> x;
			cout << S[x] << '\n';
		}
		else if(cmd == "toggle") {
			int x;
			cin >> x;
			if(S[x] == true) S[x] = false;
			else S[x] = true;
		}
		else if(cmd == "all") {
			for(int i = 1; i <= 20; i++) {
				S[i] = true;
			}
		}
		else if(cmd == "empty") {
			for(int i = 1; i <= 20; i++) {
				S[i] = false;
			}
		}
	}
	return 0;
}
