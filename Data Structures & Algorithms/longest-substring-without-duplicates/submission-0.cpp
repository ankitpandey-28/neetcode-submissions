class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int hash[256];

        // Initialize all characters as not seen
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }

        int l = 0;
        int r = 0;
        int maxLen = 0;

        while (r < n) {

            // If character was seen before
            if (hash[s[r]] != -1) {
                l = max(hash[s[r]] + 1, l);
            }

            // Current window length
            int len = r - l + 1;

            // Update maximum length
            maxLen = max(maxLen, len);

            // Store latest occurrence
            hash[s[r]] = r;

            r++;
        }

        return maxLen;
    }
};