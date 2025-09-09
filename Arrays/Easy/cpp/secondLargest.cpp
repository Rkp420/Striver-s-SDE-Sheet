#include <iostream>
using namespace std;

// TWO TRAVERSAL APPROACH  
class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        int maxi = INT_MIN;
        for (int num : nums)
            maxi = max(maxi, num);

        int ans = INT_MIN;
        for (int num : nums)
        {
            if (num != maxi)
                ans = max(ans, num);
        }

        return ans == INT_MIN ? -1 : ans;
    }
};

// ONE TRAVERSAL APPROACH
class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        int maxi = INT_MIN;
        int ans = INT_MIN;
        for (int num : nums)
        {
            maxi = max(maxi, num);
            if (num < maxi)
                ans = max(ans, num);
        };

        return ans == INT_MIN ? -1 : ans;
    }
};

int main()
{
    return 0;
}