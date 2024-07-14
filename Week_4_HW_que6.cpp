// aggressive cow problem

class Solution {
public:
    bool isPossibleSolution(vector<int>& arr, int n, int k, int minDistance) {
        int cowCount = 1;
        int position = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] - position >= minDistance) {
                cowCount++;
                position = arr[i];
            } else if (cowCount == k) {
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int>& stalls) {
        sort(stalls.begin(), stalls.end());
        int start = 0;
        int end = stalls[stalls.size() - 1] - stalls[0];
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (isPossibleSolution(stalls, n, k, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};