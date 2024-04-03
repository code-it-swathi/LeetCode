#include <algorithm>
#include <vector>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
   int n=matrix.size();
   cout<<"matrix size"<<n;
   for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
        {
         swap(matrix[i][j], matrix[j][i]);
        }
    } 
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};




       /*Transpose _>Row becomes Column and column becomes row
    reverse every row
    to transpose the diagonals will stay where they are
    1  2   3  4
    5  6   7  8
    9  10  11 12
    13 14  15 16

     transpose is
     1  5  9  13
     2  6  10 14
     3  7  11 15
     4  8  12 16

    The diagonal elements are same
    and 0,1 is swapped with 1,0 similrly
        0,2 ->2,0
        0,3-> 3,0
        1,2->2,1
        1,3 -> 3,1
        2,3->3,2
   
   i traverses from 0-2 ie 0 to n-1-1 
   j from i+1 tp  n-1*/