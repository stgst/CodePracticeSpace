
#include <iostream>

using namespace std;

int main() {
	int N;
	int S;
	int day;
	int total = 0;

	cin >> N; // Total books
	int B[N];

	for (int i = 1; i <= N; i++) {
		cin >> S;
		cin >> day;
		int bsize = ; //ERROR With Some Question.
		if ((day - 100) > 0) {
			int Array_num = bsize + 1;
			B[Array_num] = S;
			total = 5 * (day - 100) + total;
		} else {
			continue;
		}
	}
	int bsize = ; //ERROR With Some Question.
        for (int i = 0; i <= bsize; i++) {
		cout << B[i] << endl;
	}

	return 0;
}
