Problem Description

Question – : Juan Marquinho is a geologist and he needs to count rock samples in order to send it to a chemical laboratory. He has a problem: The laboratory only accepts rock samples by a range of its size in ppm (parts per million).

Juan Marquinho receives the rock samples one by one and he classifies the rock samples according to the range of the laboratory. This process is very hard because the number of rock samples may be in millions.

Juan Marquinho needs your help, your task is to develop a program to get the number of rocks in each of the ranges accepted by the laboratory.

Input Format: An positive integer S (the number of rock samples) separated by a blank space, and a positive integer R (the number of ranges of the laboratory); A list of the sizes of S samples (in ppm), as positive integers separated by space R lines where the ith line containing two positive integers, space separated, indicating the minimum size and maximum size respectively of the ith range.

Output Format: R lines where the ith line contains a single non-negative integer indicating the number of the samples which lie in the ith range.

Constraints:

10 <= S <= 10000
1 <= R <= 1000000
1<=size of Sample <= 1000
Example 1

Input: 10 2
345 604 321 433 704 470 808 718 517 811
300 350
400 700
Output: 2 4