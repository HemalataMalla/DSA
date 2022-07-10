
CodeStudio link- 
https://www.codingninjas.com/codestudio/problems/ninja-and-his-friends_3125885?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

#striver #takeuforward

Problem Statement
Ninja has a 'GRID' of size 'R' X 'C'. Each cell of the grid contains some chocolates. Ninja has two friends Alice and Bob, and he wants to collect 
as many chocolates as possible with the help of his friends.
Initially, Alice is in the top-left position i.e. (0, 0), and Bob is in the top-right place i.e. (0, ‘C’ - 1) in the grid. 
Each of them can move from their current cell to the cells just below them. When anyone passes from any cell, he will pick all chocolates in it, 
and then the number of chocolates in that cell will become zero. If both stay in the same cell, only one of them will pick the chocolates in it.
If Alice or Bob is at (i, j) then they can move to (i + 1, j), (i + 1, j - 1) or (i + 1, j + 1). They will always stay inside the ‘GRID’.
Your task is to find the maximum number of chocolates Ninja can collect with the help of his friends by following the above rules.

Sol: In this, at every step there are 3 variables, curr row(since Alice and Bob both start from same row, so they will be at same row in each step), 
acol- Alice column and bcol- Bob's column. As there are 3 variables, we have to maintain a 3D matrix for memoization. 
If at any step acol is equal to bcol, we should return the chocolates only once. Otherwise the sum of both (row,acol) and (row,bcol) chocolates.
