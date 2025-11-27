#include<bits/stdc++.h>
using namespace std;
void printmatrix(vector<vector<int>> &board){
  for(int i=0;i<board.size();i++){
    for(int j=0;j<board[0].size();j++){
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
}
bool checkwin(vector<vector<int>> &board,int digit,int x,int y){
    int count=0;
    //for diagonal
    for (int j = 0; j < board.size(); j++)
    {
        if (board[j][j] == -1)break;
        if (board[j][j] == digit)
        {
            count++;
        }
        if (count == 3) return true;
    }
    count=0;
    //for other diagonal
    for (int i = 0; i < 3; i++)
    {
       for(int j=2;j>=0;j--){
           if (board[i][j] == -1)break;
           if (board[i][j] == digit)
           {
               count++;
           }
       }
    }
    if (count == 3)return true;
    
    count=0;
    //for horizontal
    for (int i = 0; i < 3; i++)
    {
        if (board[i][y] == -1)
            break;
        if (board[i][y] == digit)
        {
            count++;
        }
    }
    if (count == 3)return true;
    count=0;
    //for vertical
    for (int j = 0; j < 3; j++)
    {
        if (board[x][j] == -1)break;
        if (board[x][j] == digit)
        {
            count++;
        }
    }
    if (count == 3)return true;
    count=0;
   return false;
}

    int main()
    {
        int pl1;
        int pl2;
        vector<vector<int>> board(3, vector<int>(3, -1));
        cout << "select 0 or 1 which pl1 wants to take: ";
        cin >> pl1;
        cout << "select 0 or 1 which pl1 wants to take: ";
        cin >> pl2;
        int x, y;
        printmatrix(board);
        int count = 0;
        while (count < 9)
        {
            cout << "select x and y which position wants p1 wants to put: ";
            cin >> x;
            cin >> y;
            board[x][y] = pl1;
            if (checkwin(board, pl1,x,y))
            {
                cout << "player 1 wins";
                break;
            }
            cout << "select x and y which position wants p2 wants to put: ";
            cin >> x;
            cin >> y;
            board[x][y] = pl2;
            if (checkwin(board, pl2,x,y))
            {
                cout << "player 2 wins";
                break;
            }
            count++;
        }
        cout<<endl;
        printmatrix(board);

}