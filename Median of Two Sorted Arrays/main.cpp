class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> &A = nums1;
        vector<int> &B = nums2;
        int total = nums1.size() + nums2.size();
        int half = total / 2;

        if (A.size() > B.size())
            swap(A, B);

        int l = 0;
        int r = A.size();

        while (true)
        {
            int i = (l + r) / 2;
            int j = half - i;

            int Aleft = (i == 0) ? INT_MIN : A[i - 1];
            int Aright = (i == A.size()) ? INT_MAX : A[i];
            int Bleft = (j == 0) ? INT_MIN : B[j - 1];
            int Bright = (j == B.size()) ? INT_MAX : B[j];

            if (Aleft <= Bright && Bleft <= Aright)
            {
                if (total % 2)
                    return min(Aright, Bright);

                return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
            }
            else if (Aleft > Bright)
                r = i - 1;
            else
                l = i + 1;
        }
    }
};
