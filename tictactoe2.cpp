#include <bits/stdc++.h>

using namespace std;

char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
char humanPlayer = 'X';
char aiPlayer = 'O';

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << "-------------" << endl;
    }
}

bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool hasWon(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

void makeMove(char player, int row, int col) {
    board[row][col] = player;
}

void humanPlayerMove() {
    int row, col;
    cout << "Enter row and column (1-3) for your move: ";
    cin >> row >> col;
    row--;
    col--;
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
        cout << "Invalid move! Try again." << endl;
        humanPlayerMove();
    } else {
        makeMove(humanPlayer, row, col);
    }
}

void aiPlayerMove() {
    srand(time(NULL));
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');
    makeMove(aiPlayer, row, col);
}

int main() {
    while (!isBoardFull()) {
        drawBoard();
        humanPlayerMove();
        if (hasWon(humanPlayer)) {
            drawBoard();
            cout << "You win!" << endl;
            return 0;
        }
        aiPlayerMove();
        if (hasWon(aiPlayer)) {
            drawBoard();
            cout << "You lose!" << endl;
            return 0;
        }
    }
    drawBoard();
    cout << "Tie game!" << endl;
    return 0;
}
