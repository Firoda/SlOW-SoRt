# SlOW-SoRt


->This is the slowest sorting algorithm, I implemented. It is so slow, that even its best case is worse than Bubble Sort.
-> It is based on the principle of ** Muliply and Surrender ** in stark contrast to Divide and Conquer used everywhere.  

The Runtime for Slowsort->
  T(n) = 2T(n/2) + T(n-1) + c
  
  
**_ Some Interesting Runtime Observation _**

**For 10 elements:**
- It made 247 recursive calls
- It made 32 swaps 

**For 50 element:**
- It made 146872 recursive calls
- It made 599 swaps 

**For 500 elements:**
- Well My Program Crashed😅😅
