class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        int res=nums[0];
        int low=0;
        int high=n-1;

        while (low<=high){
            if(nums[low]<nums[high]){
                res=min(res, nums[low]);
                break;
            }
            int mid=low+((high-low)/2);
            res=min(res, nums[mid]);
            
            if(nums[low]<=nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return res;
    }
};
