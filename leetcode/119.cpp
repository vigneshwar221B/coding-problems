class Solution {
public:
  vector<int> getRow(int rowIndex) {
    if(rowIndex == 0) return {1};
    if(rowIndex == 1) return {1, 1};
    
    vector<int> prev = getRow(rowIndex - 1);
    vector<int> row;
    
    row.push_back(1);
    
    for(int n = 1; n < prev.size(); n++)
        row.push_back(prev[n] + prev[n-1]);
    
    row.push_back(1);

    return row;  
  }
};