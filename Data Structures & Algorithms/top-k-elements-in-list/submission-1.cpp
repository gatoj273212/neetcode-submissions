class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       std::unordered_map<int, int> freq;
       for( int num : nums){
        freq[num]++;
       }
     priority_queue<pair<int, int>> pq;
        for( auto  num : freq ){
            pq.push({num.second , num.first});         
        }
     vector<int> res;
     while (k--){
        res.push_back(pq.top().second);
        pq.pop();
     } 
     return res;  
    }

};
