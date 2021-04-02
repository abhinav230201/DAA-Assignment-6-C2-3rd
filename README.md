# DAA Assignment 
#### Team Members

|Enrollment No.|Name|Github_Id|
|--------------|----|--------|
|IIT2019098|Abhinav|abhinav230201|
|IIT2019097|Harsh Sharma|harsh12-hub|
|IIT2019099|Nitesh Rawat|nitesh1053|

**Group No-** 02 (Section B)

**Faculty Name-** Dr. Mohammad Javed IIIT Allahabad

**Mentor Name-** Sir Bulla Rajesh

---
## Problem Statement
Given weights and values of n items, we need to put these
items in a knapsack of capacity W to get the maximum
total value in the knapsack.

---
## How to use code

Download project
```
git clone https://github.com/abhinav230201/DAA-Assignment-6-C2-3rd.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assignment-6

#Compiling The code
g++ solution.cpp -o output
```
---

Run the code
```
./output
```
Input
```
First line of input contains n and w, number of items and the total weight.
Next n line contains two space seperated integers each, denoting the profit and weight.
```
Ouput 
```
Maximum profit possible.
```
---
**Test case**

Test Case-1
```
Input:
1 10
500 30
Output:
Maximum Profit we can obtain is : 166.666666666667
```

Test Case-2
```
Input:
3 50
60 10 
100 20 
120 30 
Output:
Maximum Profit we can obtain is : 240
```
---
### Theory
Logic
```
We choose those items first whose profit/weight ratio is maximum.
```
Implementation
```
Let total items be n, the knapsack capacity be W. and let us store the items weight and profit in array of pairs, say pair of double,double ar[n], If w >= total weight of the items, we take all the items, otherwise we first choose those items whose profit/weight is maximum, we keep on doing it until the current's item weight is more than the capacity of bag remaining, then finally we take a part of the last item remaining (a fraction of it).
```
---
### Analysis

**Time Complexity**
```
For all the cases : O(NlogN)

```
where N is the number of items.

---
**Space Complexity**
```
For all the cases : O(N)
```

### References

GFG : Greedy Algorithms.
