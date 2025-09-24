Here’s a polished, plagiarism-safe version of your Experiment 13 documentation, keeping all the theory, algorithms, and flowcharts intact but reworded and structured slightly differently for clarity and originality:

---

# Experiment 13: Constructor, Function, and Operator Overloading in C++

## Objective

To understand and implement Constructor, Function, and Operator Overloading in C++.

## Tools Used

* VS Code (or any C++ IDE)

---

## Theory

### Function Overloading

Function overloading allows multiple functions with the **same name** to coexist in a class or scope as long as they have **different parameter lists** (in terms of number, type, or order).
It is a form of **compile-time polymorphism**, where the compiler determines which function to call based on the arguments.

**Benefits:**

* Enhances readability
* Avoids multiple function names for similar operations
* Simplifies maintenance and extension

**Key Points:**

* Functions must have the same name but different:

  1. Number of parameters
  2. Type of parameters
  3. Order of parameters

---

### Operator Overloading

Operator overloading allows defining **custom behavior** for operators (like +, -, <<, >>) when applied to user-defined classes or objects.
It is also a form of **compile-time polymorphism**.

**Benefits:**

* Makes code intuitive and easier to read
* Simplifies object manipulation
* Reduces verbose function calls

**Types:**

1. Unary Operators → ++, --, !
2. Binary Operators → +, -, \*, /, %
3. Stream Operators → <<, >> for input/output of objects

---

### Constructor Overloading

Constructor overloading allows a class to have multiple constructors with different parameter lists, enabling **flexible object creation**.

**Key Points:**

* Default Constructor → initializes default values
* Parameterized Constructor → initializes with user-provided values
* Copy Constructor → creates a new object as a copy of an existing object
* Compiler differentiates constructors based on **number** and **type** of parameters

---

### Difference Between Constructor Types and Constructor Overloading

| Feature    | Types of Constructors                                     | Constructor Overloading                                               |
| ---------- | --------------------------------------------------------- | --------------------------------------------------------------------- |
| Definition | Individual constructors like default, parameterized, copy | Multiple constructors with different argument lists in a single class |
| Purpose    | Specific to initialization                                | Provides flexibility and polymorphism                                 |
| Usage      | Each constructor has its role                             | Multiple constructors exist together for versatility                  |

**Copy Constructor Note:**

* Special type of constructor for object copying
* Can be part of overloaded constructors but has a unique signature

---

## Algorithms

### Program 1: Constructor Overloading

1. Define class `fetch` with `a` and `b`.
2. Implement three constructors:

   * Default: initializes to 0
   * 1-parameter: sets `a`, `b=0`
   * 2-parameter: sets `a` and `b`
3. Implement `disp()` to print values.
4. In `main()`, create objects using all constructors and call `disp()`.

---

### Program 2: Constructor Overloading with Default, Parameterized, Copy

1. Define class `fetch` with `a` and `b`.
2. Implement constructors:

   * Default → `a=3, b=4`
   * Parameterized → assigns `a` and `b`
   * Copy → copies values from another object
3. Implement `disp()` to print values.
4. In `main()`, create objects using all three constructors and call `disp()`.

---

### Program 3: Function Overloading

1. Define two functions `purchase`:

   * `purchase(name, quantity)` → CART view
   * `purchase(name, unit_price, quantity)` → CHECKOUT view
2. Input `productName`, `quantity`, `unit_price`
3. Call the two functions for user input and hardcoded products.

---

### Program 4: Operator Overloading

1. Define class `Purchase` with `productName`, `unit_price`, `quantity`.
2. Implement:

   * Constructor
   * `totalPrice()`
   * Overloaded `+` operator → sum total price of two objects
   * Overloaded `<<` operator → print object details
3. In `main()`, create objects, display them, and compute combined totals.

---

## Flowcharts

### Program 1: Constructor Overloading

```
Start
 │
 ▼
Define class fetch { a, b }
 │
 ▼
Constructors: default, 1-param, 2-param
 │
 ▼
Define disp()
 │
 ▼
main(): Create objects → f1, f2, f3
 │
 ▼
Call disp() for each object
 │
 ▼
End
```

---

### Program 2: Constructor Overloading with Copy

```
Start
 │
 ▼
Define class fetch { a, b }
 │
 ▼
Constructors: default, parameterized, copy
 │
 ▼
Define disp()
 │
 ▼
main(): Create objects → f1, f2, f3, f4
 │
 ▼
Call disp() for each object
 │
 ▼
End
```

---

### Program 3: Function Overloading

```
Start
 │
 ▼
Define purchase(name, qty) and purchase(name, price, qty)
 │
 ▼
Input productName, qty, unit_price
 │
 ▼
Call purchase() for CART
 │
 ▼
Call purchase() for CHECKOUT
 │
 ▼
Call hardcoded purchases
 │
 ▼
End
```

---

### Program 4: Operator Overloading

```
Start
 │
 ▼
Define class Purchase with constructor, totalPrice(), operator+ and operator<<
 │
 ▼
main(): Create objects p1, p2
 │
 ▼
Display objects using <<
 │
 ▼
Compute combined = p1 + p2
 │
 ▼
Print combined total
 │
 ▼
End
```

---

## Real-Life Applications

**Constructor Overloading:**

* Bank accounts: default or initial balance
* Shapes: default or custom dimensions
* Files: default or filename provided
* Games: player position initialization

**Operator Overloading:**

* Mathematical objects: vectors, matrices, complex numbers
* Finance: currency, invoice calculations
* Games: point/vector manipulation
* I/O: overloaded << and >> for custom objects

**Function Overloading:**

* Mathematical operations with different types
* Displaying objects in multiple ways
* Shopping/billing systems: cart vs checkout
* Library functions: cout, cin internally

---

## Summary Table: Overloading Types

| Feature                   | Function Overloading                        | Constructor Overloading            | Operator Overloading                        |
| ------------------------- | ------------------------------------------- | ---------------------------------- | ------------------------------------------- |
| Scope                     | Class or global                             | Inside class                       | Inside class                                |
| Overloaded entity         | Normal functions                            | Constructors                       | Operators (+, -, <<, etc.)                  |
| Purpose                   | Perform similar tasks with different inputs | Initialize objects in various ways | Define custom operator behavior for objects |
| Return type               | Any                                         | N/A                                | Depends on operator                         |
| Compile-time polymorphism | Yes                                         | Yes                                | Yes                                         |

---

This version keeps all technical content intact but rewords explanations, variable names, and formatting for originality.

Do you want me to also provide **ready-to-run example code snippets** for all four programs in this document?
