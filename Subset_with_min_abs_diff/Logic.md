Partition an array into 2 sets such that the absolute difference between the sum of elements of each set is minimum-

CodeStudio practice link- 
https://www.codingninjas.com/codestudio/problems/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum_842494?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0 

#striver #takeuforward

Problem Statement: 
You are given an array containing N non-negative integers. Your task is to partition this array into two subsets such that the absolute difference between subset sums is minimum.
You just need to find the minimum absolute difference considering any valid division of the array elements.

Solution: In this, we have to find the tabulation (dp[n][TotalSum+1] for all possibilities of having a set with sum 0 or TotalSum. Hence the last row of this matrix will give us the possibilities of having a sum s considering subset of all the elements n.
Now since we know the TotlaSum of the array (say {1,2,3,4,5}) and sum s(say 10) of a subset of that array ({1,2,3,4}), we can easily get the sum of remaining elements TotalSum-s (15-10=5) and hence the abs difference (10-5 =5). Similarly we can do this for all s possible and find the minimum.
