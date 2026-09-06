class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
           for(int i = 0 ; i<nums.size();i++){
              int  num = nums[i];
              freq[num]++;
           }
   vector<vector<int>>bucket(nums.size()+1);
     for( auto const&pair : freq){
         int num = pair.first;
         int count = pair.second;
         bucket[count].push_back(num);
     }
  vector<int>result ;
     for( int i =bucket.size()-1;i>=0;i--){
          for(int num : bucket[i]){
            result.push_back(num);
            if(result.size()==k)
             return result;
          }
     }
  
      return result;
    }
};
