class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) 
    {
        int r = grid.size() ;
	    int c = grid[0].size() ;
	    
	    queue<pair<int,int>> q ;
	    
	    
	    vector<vector<int>>   ans(r,vector<int>(c,0)) ;
	    vector<vector<int>>   vis(r,vector<int>(c,0)) ;
	    
	    
	    
	    
	    for(int i=0 ;i<r ;i++)
	    {
	        for(int j=0 ; j< c;j++)
	        {
	            if(grid[i][j] == 0 )
	            {
	                ans[i][j] = 0 ;
	                vis[i][j] = 1 ;
	                q.push({i,j}) ;
	            }
	        }
	        
	    }
	    
	    
	    
	    int times =1 ;
	    
	    
	    
	    while(!q.empty())
        {
            
            int s=q.size();
            
            
            for(int k=0;k<s;k++) 
            {
                auto ele = q.front() ;
                q.pop() ;
                
            
                int i= ele.first ;
                int j = ele.second ;
                            

                
                //up
                if(i>0 && vis[i-1][j] == 0)
                {

                    ans[i-1][j] = times ;
                     vis[i-1][j] = 1 ;
                    
                    q.push({i-1,j}) ;
                    
                    
                }
                    

                //left
                if(j>0 && vis[i][j-1] == 0)
                {
 
                    ans[i][j-1] = times ;
                     vis[i][j-1] = 1 ;
                    q.push({i,j-1}) ;
                    
        
                }
                
                //down
                if(i<r-1 &&  vis[i+1][j] == 0)
                {

                    ans[i+1][j] = times ;
                     vis[i+1][j] = 1 ;
                    q.push({i+1,j}) ;
                    
      
                    
                }
                
                //right
                if(j <c-1 &&  vis[i][j+1] == 0)
                {

                    ans[i][j+1] = times ;
                     vis[i][j+1] = 1 ;
                    q.push({i,j+1}) ;
                    
                   
                    
                }

	        }
            times ++ ;
        }
	    
	   
	    
	    
	    return ans ;
        
    }
};