#include <bits/stdc++.h>
using namespace std;

void solve() {
	//input
	int r, c;
	cin >> r >> c;

	vector<array<int, 2>> moves;
	//move to y=x diagonal
	moves.push_back({(r+c)/2, (r+c)/2});
	//move to (1, 1)
	moves.push_back({1, 1});
	//first 3 diagonals
	for(int i=4; i<=8; i+=2) {
		//visit all cells in x+y=i
		moves.push_back({i/2, i/2});
		moves.push_back({1, i-1});
		moves.push_back({i-1, 1});
		moves.push_back({i/2, i/2});
	}
	//last 4 diagonals
	for(int i=10; i<=16; i+=2) {
		//visit all cells in x+y=i
		moves.push_back({i/2, i/2});
		moves.push_back({i-8, 8});
		moves.push_back({8, i-8});
		moves.push_back({i/2, i/2});
	}

	//output
	cout << moves.size() << "\n";
	for(array<int, 2> a : moves)
		cout << a[0] << " " << a[1] << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}
