In last code
https://drive.google.com/open?id=1ntT6sB3WEppZlB0ynOUw0uLcvT6sj4kN


1
4
10 20 L 10 30 R 20 40 L 20 60 R
20 60

Gives 20 correct without checking if 60 present or not
So it will give 20 for following too

1
4
10 20 L 10 30 R 20 40 L 20 60 R
20 50

But 50 not present in the tree

To Improve we can 1st check if both keys present in the tree or not - O(N)
  LCA is also- O(N)
