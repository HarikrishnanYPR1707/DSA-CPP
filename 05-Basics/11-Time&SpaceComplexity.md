# Time complexity

### What is Time Complexity?

- The rate at which the time taken increases with respect to the input size.
- TC --> Big-O Notation
- What is "Big-O" of any Code Snippet?👇
  Big-O of any Code Snippet is basically the number of steps that Code Snippet will take.

---

### Rules for computing of Time Complexity

- Always computer Time Complexity in terms of worst case scenario
- Avoid Constants
- Avoid Lower Values

---

### Types of cases

- Best Case
- Average Case
- Best Case

---

### Questions - 1

```c++
for(int i = 0; i < N; i++) {
	for(int j = 0; j < N; j++){
		// A block of code
	}
}
```

| value of i | Value of j         |
| ---------- | ------------------ |
| i = 0      | j = 0, 1, 2 .... N |
| i = 1      | j = 0, 1, 2 .... N |
| i = 2      | j = 0, 1, 2 .... N |
| i = 3      | j = 0, 1, 2 .... N |
| .          | .                  |
| .          | .                  |
| .          | .                  |
| .          | .                  |
| i = N-1    | j = 0, 1, 2 .... N |

Every time it is running for "N" times so,
N + N + N + ...... + N => N x N => N<sup>2</sup>

Therefore the time complexity is --> O(N<sup>2</sup>)

---

### Questions - 2

```c++
for(int i = 0; i < N; i++) {
	for(int j = 0; j <= i; j++){
		// A block of code
	}
}
```

| value of i | Value of j           |
| ---------- | -------------------- |
| i = 0      | j = 0                |
| i = 1      | j = 0, 1             |
| i = 2      | j = 0, 1, 2          |
| i = 3      | j = 0, 1, 2, 3       |
| .          | .                    |
| .          | .                    |
| .          | .                    |
| .          | .                    |
| i = N-1    | j = 0, 1, 2 .... N-1 |

Every time it is running for "N" times so,
=> 1 + 2 + 3 + ..... + N
=> (N x (N -1)) / 2
=> (N<sup>2</sup> / 2) + (N / 2)
=> N<sup>2</sup> / 2
=> N<sup>2</sup>
Therefore the time complexity is --> O(N<sup>2</sup>)
The exact time complexity is --> O((N<sup>2</sup> / 2) + (N / 2))

---

# Space complexity

### What is Space Complexity?

- **_Auxiliary Space + Input Space_** is know as Space complexity.
- **_Auxiliary Space_** --> Space that you take to solve the problem
- **_Input Space_** --> Space that you take to solve the problem

##### Example :

There have to variables "a" and "b".
And the formula is "c = a + b".
So here "c" is using **_Auxiliary Space_** and "a" and "b" are using the **_Input Space_**.

##### Example :

If we declare a array of N size then the **_Space Complexity_** will be O(N).

---
