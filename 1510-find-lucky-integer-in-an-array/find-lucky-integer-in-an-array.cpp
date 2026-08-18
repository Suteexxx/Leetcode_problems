class Solution {
public:
    int findLucky(vector<int>& arr) {
        int size = arr.size();
        int largest = -1;

        for (int i = 0; i < size; i++) {
            int count = 0;

            for (int j = 0; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            
            if (count == arr[i]) {
                largest = max(largest, arr[i]);
            }
        }

        return largest;
    }
};