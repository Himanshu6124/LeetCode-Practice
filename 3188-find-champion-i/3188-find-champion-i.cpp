class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {   
        
        int n = grid.size() ;

        for(int i=0;i<n;i++){
            int cnt = 0 ;
            bool flag = false ;
            for(int j=0;j<n;j++){
                if( i==j && grid[i][j] == 0 )
                flag= true ;

                if(grid[i][j]==1)
                cnt++ ;
            }
            cout<<cnt<<endl ;
            if(cnt==n-1 && flag)
            return i ;
        } 
        return false;

    }
};