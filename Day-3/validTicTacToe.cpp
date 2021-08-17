#include<bits/stdc++.h>
using namespace std;
bool iswinner(vector<string>& board, char s) {
	//checking if winner in row
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == s && board[i][1] == s && board[i][2] == s)
			return true;
        }
        //checking if winner in columns
	for (int i = 0; i < 3; i++)
	{
		if (board[0][i] == s && board[1][i] == s && board[2][i] == s)
			return true;
	}
	//checking if winner '\' in diogonal
	if (board[0][0] == s && board[1][1] == s && board[2][2] == s)
		return true;
	//checking if winner '/' in diogonal
	if (board[0][2] == s && board[1][1] == s && board[2][0] == s )
		return true;
	return false;
}
bool validTicTacToe(vector<string>& board) {
	int noofx = 0;
	int noof0 = 0;
	for ( int i = 0; i < 3; i++) {
		for ( int j = 0; j < 3; j++) {
			if (board[j][i] == 'X')
			{
				noofx++;
			}
			if (board[j][i] == 'O')
			{
				noof0++;
			}
		}
	}
    cout<<noof0;
	if (noofx != noof0 && noofx  != noof0 + 1) {
		return false;
	}
	if (noofx > noof0) {
		return  (iswinner(board, 'O')) ? false : true;
	}
	if (noofx == noof0) {
		return  (iswinner(board, 'X')) ? false : true;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<string>board;
		string s;
		cin.get();
		for (int i = 0; i < 3; i++) {
			getline(cin, s);
			board.push_back(s);
		}
		cout << validTicTacToe(board);
	}
	return 0;
}