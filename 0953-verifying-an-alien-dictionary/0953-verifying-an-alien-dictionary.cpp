class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mp;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < words.size() - 1; i++) {
        string w1 = words[i];
        string w2 = words[i + 1];

        int j = 0;
        bool foundDifference = false;

        while (j < w1.size() && j < w2.size()) {
            if (w1[j] != w2[j]) {
                if (mp[w1[j]] > mp[w2[j]]) {
                    return false;
                }
                foundDifference = true;
                break;
            }
            j++;
        }

        if (!foundDifference && w1.size() > w2.size()) {
            return false;
        }
    }

    return true;
}
    
};