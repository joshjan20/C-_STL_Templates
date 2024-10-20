# README: Understanding Function Templates in C++

## Lets see the advantages of templates in C++
In C++, functions are often used to perform common operations like addition, subtraction, etc. But when we need to perform these operations on different data types (like `int`, `float`, etc.), we either have to write multiple functions or we can use **templates** to make our code more reusable and flexible. 

This exmaple explains the difference between **without templates** and **with templates** approaches using a simple `add` function in C++.

---

## Without Templates (`without_templates.cpp`)

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int x = 20;
    int y = 30;
    
    float a = 20.20;
    float b = 30.30;
    
    cout << add(x, y) << endl;    // Using int add
    cout << add(a, b) << endl;    // Using float add

    return 0;
}
```

### **How It Works:**
- **Function Overloading**: We define two separate `add` functions, one for `int` and another for `float`. 
- **Drawback**: For every new data type (e.g., `double`, `long`), a new `add` function needs to be created, which increases code repetition.

---

## With Templates (`with_templates.cpp`)

```cpp
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 20;
    int y = 30;
    
    float a = 20.20;
    float b = 30.30;
    
    cout << add<int>(x, y) << endl;    // Using template for int
    cout << add<float>(a, b) << endl;  // Using template for float

    return 0;
}
```

### **How It Works:**
- **Templates**: The `add` function is written once using a **template**. The template allows us to specify the type (`T`) when calling the function, making it versatile for different data types.
- **Advantage**: No need to write separate functions for each data type, reducing code redundancy and enhancing flexibility.

---

## Drawbacks of **Without Templates**:
1. **Repetition**: If you need to support different data types (e.g., `int`, `float`, `double`), you have to write separate functions for each type.
2. **Hard to Maintain**: If the logic in the function needs to be changed, you'll have to update multiple functions, making maintenance more difficult.
3. **Error-Prone**: More code leads to more opportunities for errors, especially when dealing with several overloaded functions for different types.

---

## Advantages of **With Templates**:
1. **Code Reusability**: Templates allow the function to be written once and reused for multiple data types.
2. **Flexibility**: Adding support for new data types is as simple as specifying the type when calling the function.
3. **Maintainability**: Changes to the function logic only need to be made in one place.
4. **Fewer Errors**: Since there is only one template function, there’s less chance of errors from copying and pasting code for each type.

---

## Conclusion
Using templates in C++ is an efficient way to reduce redundancy and make code more scalable. In scenarios where multiple data types are involved, templates offer a clean and effective solution compared to function overloading or writing multiple versions of the same function. This approach improves code maintainability and flexibility, especially in large-scale applications.

By comparing both methods (`without templates` and `with templates`), it's clear that templates bring substantial advantages in terms of code reusability, maintenance, and scalability.