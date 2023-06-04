class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=0;i<numRows;i++)
        {
            result[i].resize(i+1);
            result[i][0] =result[i][i] = 1;  //first and last elements are equal to 1 in each row
            for(int j=1;j<i;j++)
            {
                result[i][j]=result[i-1][j-1] + result[i-1][j]; //adding previous row previous element and previous row top element
            }
        }
        return result;
    }
};
