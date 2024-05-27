#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <string>

// --------------------------------------------------------------------- //

// a simple single header vector2 class designed for 2D game development //
// https://github.com/nik0-dev                                           //

// --------------------------------------------------------------------- //

class Vector2 {

    public:
        float x;
        float y;

        Vector2(float x, float y) : x(x), y(y) {}
        
        static const Vector2 left, right, up, down, zero, one, screenDown, screenUp;

        // Addition
        static Vector2 Add(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x + vec_b.x, vec_a.y + vec_b.y); }
        Vector2 operator+(const Vector2& other) const { return Vector2::Add(*this, other); }

        // Subtraction
        static Vector2 Subtract(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x - vec_b.x, vec_a.y - vec_b.y); }
        Vector2 operator-(const Vector2& other) const { return Vector2::Subtract(*this, other); }

        // Multiplication
        static Vector2 Multiply(const Vector2& vec_a, const float op_b) { return Vector2(vec_a.x * op_b, vec_a.y * op_b); }
        static Vector2 Multiply(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x * vec_b.x, vec_a.y * vec_b.y); }
        Vector2 operator*(const float other) const { return Vector2::Multiply(*this, other); }
        Vector2 operator*(const Vector2& other) const { return Vector2::Multiply(*this, other); }

        // Division
        static Vector2 Divide(const Vector2& vec_a, const float op_b) { return Vector2(vec_a.x / op_b, vec_a.y / op_b); }
        static Vector2 Divide(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(vec_a.x / vec_b.x, vec_a.y / vec_b.y); }
        Vector2 operator/(const float other) const { return Vector2::Divide(*this, other); }
        Vector2 operator/(const Vector2& other) const { return Vector2::Divide(*this, other); }
        
        // Comparison
        bool operator==(const Vector2& other) { return Vector2::Equals(*this, other); }
        static bool Equals(const Vector2& vec_a, const Vector2& vec_b) { return vec_a.x == vec_b.x && vec_a.y == vec_b.y; }
        static Vector2 Max(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(std::max(vec_a.x, vec_b.x), std::max(vec_a.x, vec_b.y)); }
        static Vector2 Min(const Vector2& vec_a, const Vector2& vec_b) { return Vector2(std::min(vec_a.x, vec_b.x), std::min(vec_a.x, vec_b.y)); } 

        // Utility
        std::string ToString(int precision) const { 
            return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")"; 
        }
        
        void Set(float set_x, float set_y) {
            x = set_x;
            y = set_y;
        }

};

// helper constants for typical vector math

const Vector2 Vector2::left(-1, 0);
const Vector2 Vector2::right(1, 0);
const Vector2 Vector2::down(0, -1);
const Vector2 Vector2::up(0, 1);

const Vector2 Vector2::zero(0, 0);
const Vector2 Vector2::one(1, 1);

// special constants for screen space

const Vector2 Vector2::screenDown(0, 1);
const Vector2 Vector2::screenUp(0, -1);

// ---------------------------------- //

class Vector2Int {

    public:
        int x;
        int y;

        Vector2Int(int x, int y) : x(x), y(y) {}
        
        static const Vector2Int left, right, up, down, zero, one, screenDown, screenUp;

        // Addition
        static Vector2Int Add(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(vec_a.x + vec_b.x, vec_a.y + vec_b.y); }
        Vector2Int operator+(const Vector2Int& other) const { return Vector2Int::Add(*this, other); }

        // Subtraction
        static Vector2Int Subtract(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(vec_a.x - vec_b.x, vec_a.y - vec_b.y); }
        Vector2Int operator-(const Vector2Int& other) const { return Vector2Int::Subtract(*this, other); }

        // Multiplication
        static Vector2Int Multiply(const Vector2Int& vec_a, const int op_b) { return Vector2Int(vec_a.x * op_b, vec_a.y * op_b); }
        static Vector2Int Multiply(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(vec_a.x * vec_b.x, vec_a.y * vec_b.y); }
        Vector2Int operator*(const int other) const { return Vector2Int::Multiply(*this, other); }
        Vector2Int operator*(const Vector2Int& other) const { return Vector2Int::Multiply(*this, other); }

        // Division
        static Vector2Int Divide(const Vector2Int& vec_a, const int op_b) { return Vector2Int(vec_a.x / op_b, vec_a.y / op_b); }
        static Vector2Int Divide(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(vec_a.x / vec_b.x, vec_a.y / vec_b.y); }
        Vector2Int operator/(const int other) const { return Vector2Int::Divide(*this, other); }
        Vector2Int operator/(const Vector2Int& other) const { return Vector2Int::Divide(*this, other); }
        
        // Comparison
        bool operator==(const Vector2Int& other) { return Vector2Int::Equals(*this, other); }
        static bool Equals(const Vector2Int& vec_a, const Vector2Int& vec_b) { return vec_a.x == vec_b.x && vec_a.y == vec_b.y; }
        static Vector2Int Min(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(std::min(vec_a.x, vec_b.x), std::min(vec_a.x, vec_b.y)); } 
        static Vector2Int Max(const Vector2Int& vec_a, const Vector2Int& vec_b) { return Vector2Int(std::max(vec_a.x, vec_b.x), std::max(vec_a.x, vec_b.y)); }

        // Utility
        std::string ToString() const { return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")"; }
        
        void Set(int set_x, int set_y) {
            x = set_x;
            y = set_y;
        }

};

// helper constants for typical vector math

const Vector2Int Vector2Int::left(-1, 0);
const Vector2Int Vector2Int::right(1, 0);
const Vector2Int Vector2Int::down(0, -1);
const Vector2Int Vector2Int::up(0, 1);

const Vector2Int Vector2Int::zero(0, 0);
const Vector2Int Vector2Int::one(1, 1);

// special constants for screen space

const Vector2Int Vector2Int::screenDown(0, 1);
const Vector2Int Vector2Int::screenUp(0, -1);


#endif