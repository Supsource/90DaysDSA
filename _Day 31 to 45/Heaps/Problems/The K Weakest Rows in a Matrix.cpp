class Solution {
public:
vector kWeakestRows(vector<vector>& mat, int k) {
vector<pair<int, int>> mcount;
for(int i = 0; i < mat.size(); i++){
int count = 0;
for(int j = 0; j < mat[i].size() and mat[i][j]!=0; j++){
count++;
}
mcount.push_back({count, i});
}
sort(mcount.begin(), mcount.end(), [](auto mcount1, auto mcount2){
return mcount1.first < mcount2.first? true:
mcount1.first == mcount2.first and mcount1.second < mcount2.second;});
vector ans;
for(int i = 0; i < k; i++)
ans.push_back(mcount[i].second);
return ans;
}
};