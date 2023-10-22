class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        // start i and j from k
        
        int i = k;
        
        int j = k;
        
        int maxi = INT_MIN;
        
        // mini will keep track of minimum between [i, j]
        
        int mini = nums[k];
        
        while(i > 0 || j < n - 1)
        {
            // update mini
            
            mini = min({mini, nums[i], nums[j]});
            
            int width = (j - i + 1);
            
            // update maxi
            
            maxi = max(maxi, mini * width);
            
            // move pointers
            
            if(i > 0 && j < n - 1)
            {
                if(nums[i - 1] >= nums[j + 1])
                {
                    i--;
                }
                else
                {
                    j++;
                }
            }
            else if(i == 0 && j < n - 1)
            {
                j++;
            }
            else if(i > 0 && j == n - 1)
            {
                i--;
            }
        }
        
        mini = min({mini, nums[i], nums[j]});
            
        int width = (j - i + 1);
            
        maxi = max(maxi, mini * width);
        
        return maxi;
    }
};