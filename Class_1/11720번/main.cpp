#include <iostream>
#include <string>
using namespace std;

int square(int);

int main(){
	int N;
	string num;
	cin>>N;
	cin>>num;
	
	int result = 0;
	for(int i = 0 ; i < N ; i++) {
		result += num[i] - '0';
	}
	cout<<result;
}