class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        //taking the size as row and column
        int row = matrix.size();
        int col = matrix[0].size();
        //creating the duplicate matrix
        vector<vector<int>> vis=matrix;
        //checking the position of 0
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int x=0;x<col;x++)
                    {
                        //filling the row
                        vis[i][x]=0;
                    }

                }
        }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    //filling the column
                    for(int x=0;x<row;x++)
                    {
                        vis[x][j]=0;
                    }

                }
            }
        }
        //now assigning the visited value to the matrix
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]=vis[i][j];
            }
        }
    }
};
