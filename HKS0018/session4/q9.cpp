#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool isConsecutive(vector<int>& nums) {
    if (nums.empty()) return false;
    
    int min_num = *min_element(nums.begin(), nums.end());
    int max_num = *max_element(nums.begin(), nums.end());
    
    if (max_num - min_num + 1 != nums.size()) {
        return false;
    }
    
    unordered_set<int> num_set(nums.begin(), nums.end());
    return num_set.size() == nums.size();
}

int main() {
    vector<int> nums;
    int size, num;
    
    cout << "Enter the size of the vector: ";
    cin >> size;
    
    cout << "Enter " << size << " numbers separated by spaces:\n";
    for (int i = 0; i < size; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    cout << "\nChecking if numbers can be rearranged to be consecutive...\n";
    cout << "Vector: ";
    for (int n : nums) cout << n << " ";
    
    bool result = isConsecutive(nums);
    cout << "\nResult: " << (result ? "true" : "false") << endl;
    
    return 0;
}