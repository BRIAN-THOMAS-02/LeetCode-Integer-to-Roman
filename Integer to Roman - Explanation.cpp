Integer to Roman - "https://leetcode.com/problems/integer-to-roman/"
Explanation

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string intToRoman(int num) 
    {
        vector<string> romans = {{"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}};
        vector<int> value = {{1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}};
        
        int input_size = romans.size();
        int idx = input_size - 1;
        
        string result = "";
        
        //since num is being subtracted at end of loop checking if greater than 0
        while(num > 0)
        {
            /*cout<<"\n\t";
            cout<<num<<" > "<<0;*/
            
            //printing all the values, to see given input is smaller than which element of value
            cout<<"\n";
            cout<<value[idx]<<" <= "<<num<<" | Bool : "<<(value[idx]<=num);
            
            while(value[idx] <= num)
            {
                cout<<"\n\n\n\tInside While Condition : ";
                cout<<value[idx]<<" <= "<<num;
                
                //we are storing the roman value of the equivalent or closest smaller number in the empty string 'result'
                cout<<"\n\n\t\tresult = "<<result<<" + "<<romans[idx];
                result = result + romans[idx];
                cout<<"\n\t\tresult = "<<result;
                
                //after storing the equivalent roman value the corresponding integer must be subtrated from the given input number
                cout<<"\n\n\t\tnum = "<<num<<" - "<<value[idx];
                num = num - value[idx];
                cout<<"\n\t\tnum = "<<num<<"\n\n";
            } 
        //decrementing the index counter
        idx = idx - 1;
        }
    cout<<"\n\nFinal Result : ";
    cout<<result;
    return result;
    }
};

int main()
{
    Solution obj;
    obj.intToRoman(18);
}
