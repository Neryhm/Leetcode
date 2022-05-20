class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		unordered_set<int>DupliFinder;
		for(int i=0;i<nums.size();++i){
			if(DupliFinder.find(nums[i])!=DupliFinder.end()) return true;
			else DupliFinder.emplace(nums[i]);
		}
		return false;
	}
};
