#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <string>
#include <sstream>
#include <iomanip>

template<typename T>
class Vector2 {
    static_assert(std::is_same<T, int>::value || std::is_same<T, float>::value, "Vector2 must be of type 'int' or 'float'.");
    
public:

    // members
    T x, y;

    // constructors
    Vector2(T x, T y) : x(x), y(y) {}

    // constants
    static const Vector2<T> left, right, up, down, zero, one, screenDown, screenUp;

    // operators
    Vector2 operator+(const Vector2& other) const { return Vector2(x + other.x, y + other.y); }
    Vector2 operator-(const Vector2& other) const { return Vector2(x - other.x, y - other.y); }
    Vector2 operator*(T op) const { return Vector2(x * op, y * op); }
    Vector2 operator*(const Vector2& other) const { return Vector2(x * other.x, y * other.y); }
    Vector2 operator/(T op) const { return Vector2(x / op, y / op); }
    Vector2 operator/(const Vector2& other) const { return Vector2(x / other.x, y / other.y); }
    bool operator==(const Vector2& other) const { return x == other.x && y == other.y; }

    // Static methods
    static Vector2<T> Add(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x + vec_b.x, vec_a.y + vec_b.y); }
    static Vector2<T> Subtract(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x - vec_b.x, vec_a.y - vec_b.y); }
    static Vector2<T> Multiply(const Vector2& vec_a, T op_b) { return Vector2(vec_a.x * op_b, vec_a.y * op_b); }
    static Vector2<T> Multiply(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x * vec_b.x, vec_a.y * vec_b.y); }
    static Vector2<T> Divide(const Vector2& vec_a, T op_b) { return Vector2(vec_a.x / op_b, vec_a.y / op_b); }
    static Vector2<T> Divide(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x / vec_b.x, vec_a.y / vec_b.y); }
    static bool Equals(const Vector2& vec_a, const Vector2& vec_b) { return vec_a.x == vec_b.x && vec_a.y == vec_b.y; }
    static Vector2<T> Max(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(std::max(vec_a.x, vec_b.x), std::max(vec_a.y, vec_b.y)); }
    static Vector2<T> Min(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(std::min(vec_a.x, vec_b.x), std::min(vec_a.y, vec_b.y)); }

    // public methods
    std::string ToString() const { return "(" + std::to_string(x) + "," + std::to_string(y) + ")"; }
    
    std::string ToString(int precision) const { 
        std::stringstream ss;
        ss << std::fixed << std::setprecision(precision) << "(" << x << "," << y << ")"; 
        return ss.str();
    }

    void Set(T setX, T setY) {
        x = setX;
        y = setY;
    }

    Vector2<int> ToVector2Int() { return Vector2<int>(x,y); }
    Vector2<float> ToVector2Float() { return Vector2<float>(x,y); }

};

// static constant initialization
template<typename T> const Vector2<T> Vector2<T>::left(-1, 0);
template<typename T> const Vector2<T> Vector2<T>::right(1, 0);
template<typename T> const Vector2<T> Vector2<T>::down(0, -1);
template<typename T> const Vector2<T> Vector2<T>::up(0, 1);
template<typename T> const Vector2<T> Vector2<T>::zero(0, 0);
template<typename T> const Vector2<T> Vector2<T>::one(1, 1);
template<typename T> const Vector2<T> Vector2<T>::screenDown(0, 1);
template<typename T> const Vector2<T> Vector2<T>::screenUp(0, -1);

#endif 
