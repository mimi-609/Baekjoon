#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<int> q;


int main() {
	
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) q.push(i);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
		
		int tmp = q.front();
		q.pop();

		q.push(tmp);
	}

}
 
