**********************************************************************************  Question  **************************************************************************************************************************************************
Given a length n, count the number of strings of length n that can be made using a, b and c with at-most one b and two c allowed.

Example 1:

Input: n = 1
Output: 3
Explanation: Possible strings are: "a",
"b" and "c"
Example 2:

Input: n = 3
Output: 19
Explanation: Number of strings with 3 
occurrances of a: 1
2-a and 1-b: 3
2-a and 1-c: 3
1-a, 1-b and 1-c: 6
1-a and 2-c: 3
1-b and 2-c: 3
So, total number of strings of length 3
is 1 + 3 + 3 + 6 + 3 + 3 = 19
Your Task:  
You don't need to read input or print anything. Your task is to complete the function countStr() which takes the n as inputs and returns the total number of valid strings.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ n ≤ 105

***********************************************************************************  Solution  *************************************************************************************************************************************************

long long int countStr(long long int n){
    //complete the function here
      long long int case1=1; // all a
    long long int case2=n; // one b
    long long int case3=n; // one c
    long long int case4=n*(n-1); // one b,one c
    long long int case5=(n*(n-1))/2; // two c
    long long int case6=(n*(n-1)*(n-2))/2; // one b, two c
    
    return case1+case2+case3+case4+case5+case6;
    
}


