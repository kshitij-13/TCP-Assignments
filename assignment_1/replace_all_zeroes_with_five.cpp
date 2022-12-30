//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Driver program to test above function

// } Driver Code Ends
class Solution
{
public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {

        int rem = 0, num = 0, rev = 0;
        while (n > 0)
        {
            rem = n % 10;
            if (rem == 0)
            {
                num = num * 10 + 5;
            }
            else
            {
                num = num * 10 + rem;
            }

            n = n / 10;
        }

        while (num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        return rev;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.convertFive(n) << endl;
    }
}
// } Driver Code Ends