class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // Con trỏ cho mảng nums1
        int p2 = n - 1; // Con trỏ cho mảng nums2
        int p = m + n - 1; // Con trỏ cho vị trí cuối cùng của mảng nums1

        // Hợp nhất từ cuối mảng nums1 và nums2
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] >= nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // Nếu mảng nums2 còn phần tử thì hợp nhất vào mảng nums1
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};
