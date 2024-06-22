### Overview 
___
```
This class is designed to be a very simple and portable header for 2D game development in C++.
```

### Allowed Template Types: 
___
```c++
// To allow for both Vector2 int/float constructs this file makes use of templates.
// Failing to use these types correctly will result in a compile-time error.

/* Only use these types */
- int
- float 

// If you don't supply a template type it will default to Vector2<float>.
```

### Members
___
```c++
x; // - [ the x component of the Vector2 ]
y; // - [ the y component of the Vector2 ]
```

### Constructor
___
```c++
Vector2(float x, float y); // - [ constructs a new Vector2<float> (default constructor) ]
Vector2<T>(T x, T y);      // - [ constructs a new Vector2<T> ]
```

### Constants
___
```c++
// The constants require a type specification to allow for type strictness.

Vector2<T>::left;       // == (-1,0)
Vector2<T>::right;      // == (1,0)
Vector2<T>::up;         // == (0,1)
Vector2<T>::down;       // == (0,-1)

Vector2<T>::zero;       // == (0,0)
Vector2<T>::one;        // == (1,1)

Vector2<T>::screenUp;   // == (0,-1)
Vector2<T>::screenDown; // == (0,1)
```

### Operators
___
```c++
operator+(Vector2<T> other);  // - [ adds two Vector2<T> constructs together ]
operator-(Vector2<T> other);  // - [ subtracts the right hand Vector2<T> from the left hand Vector2<T> ]
operator*(Vector2<T> other);  // - [ multiplies two Vector2<T> constructs together ]
operator*(T op);              // - [ multiplies both components of the Vector2 by a scalar value ]
operator/(Vector2<T> other);  // - [ divides the left hand Vector2<T> by the right hand Vector2<T> ]
operator/(T op);              // - [ divides both components of the Vector2 by a scalar value ]
operator==(Vector2<T> other); // - [ checks for equality between two Vector2<T> constructs ] 
```

### Static Methods
___
```c++
Add(Vector2<T> vec_a, Vector2<T> vec_b);      // - [ adds two Vector2<T> constructs together ]
Subtract(Vector2<T> vec_a, Vector2<T> vec_b); // - [ subtracts the right hand Vector2<T> from the left hand Vector2<T> ]
Multiply(Vector2<T> vec_a, Vector2<T> vec_b); // - [ multiplies two Vector2<T> constructs together ]
Multiply(Vector2<T> vec_a, T op);             // - [ multiplies both components of the Vector2 by a scalar value ]
Divide(Vector2<T> vec_a, Vector2<T> vec_b);   // - [ divides the left hand Vector2<T> by the right hand Vector2<T> ]
Divide(Vector2<T> vec_a, T op);               // - [ divides both components of the Vector2 by a scalar value ]
Equals(Vector2<T> vec_a, Vector2<T> vec_b);   // - [ checks for equality between two Vector2<T> constructs ]
Max(Vector2<T> vec_a, Vector2<T> vec_b);      // - [ returns a Vector2<T> with the biggest components of both vectors ]
Min(Vector2<T> vec_a, Vector2<T> vec_b);      // - [ returns a Vector2<T> with the smallest components of both vectors ] 
```

### Public Methods
___
```c++
ToString();              // - [ returns the string representation of a Vector2<T> instance ]
ToString(int precision); // - [ returns the string representation of a Vector2<T> instance with a formatted precision value, designed for Vector2<float> ]
Set(int setX, int setY); // - [ updates an existing Vector2<T> instance ]
ToVector2Int();          // - [ converts the Vector2<T> instance to a Vector2<int> ]
ToVector2Float();        // - [ converts the Vector2<T> instance to a Vector2<float> ] 
```

### Examples
___
  
**Creating a Vector2:**
```c++
Vector2<int> vec2Int(1,2);            // creates a new Vector2<int> that allows you to use integer components for your vectors.
Vector2<float> vec2Float(1.0f,2.0f);  // creates a new Vector2<float> that allows you to use float components for your vectors.
Vector2 vec2Int(1,2);                 // creates a new Vector2<int>
Vector2 vec2Float(1.0f,2.0f);         // creates a new Vecto2<float>
```


