class Solution {
public:
	vector<int> getRow(int rowIndex)
	{
		vector<int> result;
		int mid_range;
		for (int i = 0; i <= rowIndex; i++) {
			result.push_back(1);
			mid_range = result.size() - 2;
			for (int j = mid_range; j > 0; j--) {
				result[j] = result[j - 1] + result[j];
			}
		}

		return result;
	}
};