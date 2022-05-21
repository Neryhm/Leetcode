class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>TwoSum;
		for(int i=0;i<nums.size();++i){
			if(TwoSum.find(target-nums[i])!=TwoSum.end()){
				nums.clear();
				nums.push_back(TwoSum.find(target-nums[i])->second);
				nums.push_back(i);
				return nums;
			}
			TwoSum.emplace(nums[i],i);
		}
		return nums;
    }
};
