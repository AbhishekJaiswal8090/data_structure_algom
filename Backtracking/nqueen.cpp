#include <iostream>
#include <vector>
using namespace std;

// n queen problem

// Printing chessboard
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

// making the chessbaord initially with empty board
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

// checking if current position is safe for the queen or not
bool isSafe(vector<vector<char>> &board, int row, int j)
{
    int n = board.size();
    // whether current position is safe or not
    if (board[row][j] == 'Q')
    {
        return false;
    }

    // horizontally safe or not
    for (int i = 0; i < j; i++)
    {
        if (board[row][j] == 'Q')
        {
            return false;
        }
    }

    // vertically safe or not
    for (int i = 0; i < row; i++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // checking digonally

    // left diagonal

    for (int i = row, col = j; i >= 0 && col >= 0; i--, col--)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // right diagonal

    for (int i = row, col = j; i >= 0 && col < n; i--, col++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    return true;
}

// Heres the main logic of the soln
// setting the position of thr queen if it is safe and if not backtrack
void nQueens(vector<vector<char>> &board, int row)
{
    int n = board.size();

    if (row == n)
    {
        PrintChessBoard(board, n);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j))

        { // cols
            board[row][j] = 'Q';
            nQueens(board, row + 1);
            board[row][j] = '.';
        }
    }
}

int main()
{
    vector<vector<char>> board;
    int n;
    cin >> n;

    chessBoard(board, n);
    PrintChessBoard(board, n);
    nQueens(board, 0);
    return 0;
}