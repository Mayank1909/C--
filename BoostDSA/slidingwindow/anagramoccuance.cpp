//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // bool areAnagram(string s1, string s2)
    // {
    //     unordered_map<char, int> mp;
    //     for (int i = 0; i < s1.length(); i++)
    //     {
    //         mp[s1[i]]++;
    //     }
    //     for (int i = 0; i < s2.length(); i++)
    //     {
    //         mp[s2[i]]--;
    //     }
    //     for (auto it = mp.begin(); it != mp.end(); it++)
    //     {
    //         if (it->second != 0)
    //             return false;
    //     }
    //     return true;
    // }
    // int search(string word, string text)
    // {
    //     int res = 0;
    //     for (int i = 0; i < text.length() - word.length() + 1; i++)
    //     {
    //         if (areAnagram(text.substr(i, word.length()), word))
    //             res++;
    //     }
    //     // code here
    //     return res;
    //     }
    int search(string pat, string txt)
    {
        unordered_map<char, int> mp;
        int ans = 0;
        for (auto i : pat)
            mp[i]++;
        int k = pat.size();
        int count = mp.size();
        int i = 0, j = 0;
        while (j < txt.size())
        {

            if (mp.find(txt[j]) != mp.end())
            {
                mp[txt[j]]--;
                if (mp[txt[j]] == 0)
                    count--;
            }
            if (j - i + 1 < k) // window size not achived
            {
                j++;
            }
            else if (j - i + 1 == k) // windoe isze hit
            {
                if (count == 0)
                    ans++;

                i++;
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends