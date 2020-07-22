# SlOW-SoRt


* This is the slowest sorting algorithm, I implemented. It is so slow, that even its best case is worse than Bubble Sort.
* It is based on the principle of **Multiply and Surrender** in stark contrast to Divide and Conquer used everywhere.  

The Runtime for Slowsort->   T(n) = 2T(n/2) + T(n-1) + c
  
  
**_Some Interesting Runtime Observation_**

**For 10 elements:**
- It made 247 recursive calls
- It made 32 swaps 

**For 50 element:**
- It made 146872 recursive calls
- It made 599 swaps 

**For 500 elements:**
- Well My Program Crashed😅😅



# Fast is not the Best Policy :)
