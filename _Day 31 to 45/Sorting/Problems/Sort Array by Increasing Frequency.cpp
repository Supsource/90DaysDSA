  vector<int> frequencySort(vector<int>& A) {
        unordered_map<int, int> count;
        for (int a: A)
            count[a]++;
        sort(begin(A), end(A), [&](int a, int b) {
            return count[a] == count[b] ? a > b : count[a] < count[b];
        });
        return A;
    }