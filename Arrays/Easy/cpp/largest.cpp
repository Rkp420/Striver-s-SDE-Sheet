#include <iostream>
using namespace std;

class Solution
{
public:
    int largestElement(vector<int> &nums)
    {
        int ans = INT_MIN;
        for (int num : nums)
            ans = max(num, ans);

        return ans;
    }
};

int main()
{
    return 0;
}