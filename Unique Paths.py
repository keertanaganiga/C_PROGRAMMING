'''
Unique Paths
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

 

Example 1:


Input: m = 3, n = 7
Output: 28
'''
class Solution(object):
    def uniquePaths(self, m, n):
        row=[1]*n
        
        for i in range(m-1):
            newRow=[1]*n
            
            for j in range(n-2,-1,-1):
                newRow[j]=newRow[j+1]+row[j]
                
            row=newRow
            
        return row[0]

n=7
m=3
Solution.uniquePaths(0,3,7)
