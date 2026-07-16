class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int pre=1;
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i =0; i<n;i++){
           
            ans[i]=pre;//or pre*ans[i]
            pre=pre*nums[i];
        }
       int  post=1;
        for(int j=n-1;j>=0;j--){
            ans[j] *=post;
            post=post*nums[j];
        }
        return ans;
    }
};