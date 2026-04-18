class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        // min heap
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(auto i : freq){
            pq.push({i.second, i.first});  // FIXED
            if(pq.size() > k){             // FIXED
                pq.pop();
            }
        }

        vector<int> results;

        while(!pq.empty()){
            results.emplace_back(pq.top().second); // FIXED
            pq.pop();
        }

        return results; // FIXED
    }
};