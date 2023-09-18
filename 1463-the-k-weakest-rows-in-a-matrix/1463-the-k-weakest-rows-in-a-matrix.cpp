class Solution {
public:

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<pair<int, int>> rowSumIndex; // Store pair of (sum, row index)

    for (int i = 0; i < mat.size(); i++) {
        int sum = 0;
        for (int j = 0; j < mat[0].size(); j++) {
            sum += mat[i][j];
        }
        rowSumIndex.push_back({sum, i});
    }

    // Custom comparison function for the priority_queue
    auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second; // If sums are equal, choose smaller index
        }
        return a.first < b.first; // Otherwise, choose smaller sum
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);

    for (int i = 0; i < k; i++) {
        pq.push(rowSumIndex[i]);
    }

    for (int i = k; i < rowSumIndex.size(); i++) {
        if (rowSumIndex[i] < pq.top()) {
            pq.pop();
            pq.push(rowSumIndex[i]);
        }
    }

    vector<int> ans;

    while (!pq.empty()) {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    // Reverse the result to get the weakest rows in ascending order
    reverse(ans.begin(), ans.end());

    return ans;
   
    }
};