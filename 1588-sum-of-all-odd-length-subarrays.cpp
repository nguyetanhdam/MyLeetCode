class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            int leftCount = i + 1; // Số phần tử bên trái của arr[i]
            int rightCount = n - i; // Số phần tử bên phải của arr[i]

            int leftOdd = (leftCount + 1) / 2; // Số phần tử lẻ bên trái của arr[i]
            int rightOdd = (rightCount + 1) / 2; // Số phần tử lẻ bên phải của arr[i]

            int leftEven = leftCount / 2; // Số phần tử chẵn bên trái của arr[i]
            int rightEven = rightCount / 2; // Số phần tử chẵn bên phải của arr[i]

            // Tính tổng các dãy con có độ dài lẻ qua arr[i]
            result += (leftOdd * rightOdd + leftEven * rightEven) * arr[i];
        }

        return result;
    }
};
