#include <iostream>
#include <vector>
using namespace std;

// n queen problem

void PrintChessBoard(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "...............\n";
}

void chessBoard(vector<vector<char>> &board, int n)
{

    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
}

bool isSafe(vector<vector<char>> &board, int row, int j)
{
    if (board[row][j] == 'Q')
    {
        return false;
    }
}

void nQueens(vector<vector<char>> &board, int row)
{
    int n = board.size();

    if (row == n)
    {
        PrintChessBoard(board, n);
        return;
    }

    for (int j = 0; j < n; j++)
    { // cols
        board[row][j] = 'Q';
        nQueens(board, row + 1);
        board[row][j] = '.';
    }
}

int main()
{
    vector<vector<char>> board;
    int n = 2;

    chessBoard(board, n);
    PrintChessBoard(board, n);
    nQueens(board, 0);
    return 0;
}