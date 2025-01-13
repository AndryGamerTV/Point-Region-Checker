- This C++ program checks if a given point \((x, y)\) lies inside a specific area defined by a set of inequalities. Here's a breakdown of the functionality:

![image](https://github.com/user-attachments/assets/8af04895-56a2-4940-8375-6ba9d00010bd)

- ### Area Description:
1. The point must satisfy:
   - (y ≥ -1);
   - (y ≤ 1);
   - (x ≥ -2)
   - (x ≤ 2)
2. Additionally, the point must lie below the curve \(y = |x|\).

- ### Key Components of the Program:
1. **`inside_area` Function:**
   - This function checks if the point satisfies all the constraints of the area.
   - It includes a small `eps` value to handle numerical precision errors when comparing floating-point numbers.

2. **Main Function:**
   - Accepts user input for \(x\) and \(y\).
   - Invokes the `inside_area` function to determine if the point lies inside the defined area.
   - Outputs the result to the user.

- ### Example Run:
**Input:**
```
Input x: 1
Input y: 0.5
```

**Output:**
```
--- Task #2 ---
Point (1, 0.5) inside area.
```

**Input:**
```
Input x: -2
Input y: 2
```

**Output:**
```
--- Task #2 ---
Point (-2, 2) outside area.
```
### Notes:
- The `eps` value ensures the program can handle edge cases where floating-point precision might cause issues.
- The condition `y <= fabs(x) + eps` ensures the point lies below the \(y = |x|\) curve.
