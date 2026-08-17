class Solution {
public:
     bool solve(int row,int endrow,int col,int endcol,vector<vector<char>>& board)
        {
            unordered_set<int>st;
            for(int i = row;i<=endrow;i++)
            {
                for(int j=col;j<=endcol;j++)
                {
                    if(board[i][j]=='.') continue;

                    if(st.find(board[i][j])!=st.end())
                    {
                        return false;
                    }

                    st.insert(board[i][j]);
                }

            }

            return true;
        }
    bool isValidSudoku(vector<vector<char>>& board) {
        //validate rows

        for(int i=0;i<9;i++)
        {
            unordered_set<char>st;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;

                if(st.find(board[i][j])!=st.end())
                {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        //validate columns

        for(int j=0;j<9;j++)
        {
            unordered_set<char>st;
            for(int i=0;i<9;i++)
            {
                if(board[i][j]=='.') continue;

                if(st.find(board[i][j])!=st.end())
                {
                    return false;
                }

                st.insert(board[i][j]);
            }
        }

        //validate box

        for(int row = 0;row<9;row+=3)
        {
            int endrow = row+2;
            for(int col = 0;col<9;col+=3)
            {
                int endcol = col+2;

                if(solve(row,endrow,col,endcol,board)==false)
                {
                    return false;
                }
            }

        }

        return true;
    }
};
