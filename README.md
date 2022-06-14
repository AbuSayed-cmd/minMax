# minMax
This is simple array problem, where we have to take input from users and print the maximum and minimum value of the array list.
```
 int maxNo= INT_MIN; // INT_MIN will provide possible minimum number. 
 int minNo = INT_MAX; // INT_MAX will provide pssible maximum number.
```
For `INT_MIN` and `INT_MAX`, we have to decleare a header file -> `#include <climits>`

Here we have intialize `int maxNo=INT_MIN`, which means that when any value is greater than INT_MIN, it update the maxNo.
In that way, we will get the max of value of the array list.

```
maxNo=max(maxNo,arr[i]);
minNo=min(minNo,arr[i]);
```
Here, max and min two build in functon which will compare between two values and will provide maximum and minumum value between these two values.
