class Solution {
public:
    vector<vector<vector<int>>> memo;
    int dp(vector<int>& nums1, vector<int>& nums2,int i,int j,bool selected)
    {
        if(i==0||j==0)
            return selected?0:-500000001;			//If no number is selected, return the unreachable minimum.
        if(memo[i][j][selected]!=INT_MIN)			// Reuse computed values
            return memo[i][j][selected];
        return memo[i][j][selected]=max({nums1[i-1]*nums2[j-1]+dp(nums1,nums2,i-1,j-1,true),dp(nums1,nums2,i,j-1,selected),dp(nums1,nums2,i-1,j,selected)}); //Return maximum of selecting numbers from both or trying next number from each array (Try all combinations).
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) 
    {
        memo.resize(nums1.size()+1,vector<vector<int>>(nums2.size()+1,vector<int>(2,INT_MIN)));
        return dp(nums1,nums2,nums1.size(),nums2.size(),false);
    }
};