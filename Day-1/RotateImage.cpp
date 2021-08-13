#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
	int n = matrix[0].size();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}
	}
	for (int k = 0; k < n; k++) {
		reverse(matrix[k].begin(), matrix[k].end());
	}

}
int main() {
	int n;
	cin >> n;
	int num;
	vector<vector<int>>matrix;
	for (int i = 0; i < n; i++) {
		vector <int>temp;
		for (int j = 0; j < n; j++) {
			cin >> num;
			temp.push_back(num);
		}
		matrix.push_back(temp);
	}
	rotate(matrix);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
