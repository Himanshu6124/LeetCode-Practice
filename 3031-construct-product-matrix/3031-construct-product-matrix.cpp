class Solution {
public:
    int mod = 12345;
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> p(m, vector<int>(n));
        long prod = 1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                p[i][j] = prod;
                prod = (prod * grid[i][j]) % mod;
            }
        }
        prod = 1;
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                p[i][j] = (p[i][j] * prod) % mod;
                prod = (prod * grid[i][j]) % mod;
            }
        }
        return p;
    }
};