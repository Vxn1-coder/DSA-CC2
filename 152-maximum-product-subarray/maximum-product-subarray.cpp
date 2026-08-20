class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int a,b,c,ans,best,worst;
        worst=nums[0];
        best=nums[0];
        ans=nums[0];
        for(i=1;i<nums.size();i++){
            a=nums[i]*best;
            b=nums[i];
            c=nums[i]*worst;
            best=max(a,max(b,c));
            worst=min(a,min(b,c));
            ans=max(ans,best);
        }
        return ans;
    }
};