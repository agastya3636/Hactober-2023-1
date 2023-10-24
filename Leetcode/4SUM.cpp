class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=0;
        int n=nums.size();
        set<vector<int>>rs;
        vector<vector<int>>r;
        for(int i=0;i<n;i++)
        {
             s=0;
            s=s+nums[i];
            

            for(int k=i+1;k<n;k++)
            {
                
            
                int j=k+1;
                int m=n-1;
                while(j<m)
                {
                    long long int ss=nums[i];
                    ss=ss+nums[k]+nums[j]+nums[m];
                
                    if(ss==target)
                    {
                       
                        rs.insert({nums[i],nums[k],nums[j],nums[m]});
                        m--;
                        j++;
                    }
                    else if(ss>target)
                    {
                        m--;

                    }
                    else
                    {
                        j++;
                    }
                }
            }
        }
        
        for(auto x:rs)
       {
           r.push_back(x);
       }
        return r;
    }
};

//https://leetcode.com/problems/4sum/
