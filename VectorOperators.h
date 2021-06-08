
#ifndef _VECTOR_OPERANDS
#define _VECTOR_OPERANDS

// ### Declarations ###:
// Vector2:
Vector2 operator+(const Vector2& a, const Vector2& b);
Vector2& operator+=(Vector2& a, const Vector2& b);

Vector2 operator-(const Vector2& a, const Vector2& b);
Vector2& operator-=(Vector2& a, const Vector2& b);

Vector2 operator*(const Vector2& a, const Vector2& b);
Vector2& operator*=(Vector2& a, const Vector2& b);
Vector2 operator*(const float f, const Vector2& v);
Vector2 operator*(const Vector2& v, const float f);
Vector2& operator*=(Vector2& v, const float f);

Vector2 operator/(const Vector2& a, const Vector2& b);
Vector2& operator/=(Vector2& a, const Vector2& b);
Vector2 operator/(const float f, const Vector2& v);
Vector2 operator/(const Vector2& v, const float f);
Vector2& operator/=(Vector2& v, const float f);

bool operator==(const Vector2& a, const Vector2& b);
bool operator!=(const Vector2& a, const Vector2& b);


// Vector3:
Vector3 operator+(const Vector3& a, const Vector3& b);
Vector3& operator+=(Vector3& a, const Vector3& b);

Vector3 operator-(const Vector3& a, const Vector3& b);
Vector3& operator-=(Vector3& a, const Vector3& b);

Vector3 operator*(const Vector3& a, const Vector3& b);
Vector3& operator*=(Vector3& a, const Vector3& b);
Vector3 operator*(const float f, const Vector3& v);
Vector3 operator*(const Vector3& v, const float f);
Vector3& operator*=(Vector3& v, const float f);

Vector3 operator/(const Vector3& a, const Vector3& b);
Vector3& operator/=(Vector3& a, const Vector3& b);
Vector3 operator/(const float f, const Vector3& v);
Vector3 operator/(const Vector3& v, const float f);
Vector3& operator/=(Vector3& v, const float f);

bool operator==(const Vector3& a, const Vector3& b);
bool operator!=(const Vector3& a, const Vector3& b);


// Vector4:
Vector4 operator+(const Vector4& a, const Vector4& b);
Vector4& operator+=(Vector4& a, const Vector4& b);

Vector4 operator-(const Vector4& a, const Vector4& b);
Vector4& operator-=(Vector4& a, const Vector4& b);

Vector4 operator*(const Vector4& a, const Vector4& b);
Vector4& operator*=(Vector4& a, const Vector4& b);
Vector4 operator*(const float f, const Vector4& v);
Vector4 operator*(const Vector4& v, const float f);
Vector4& operator*=(Vector4& v, const float f);

Vector4 operator/(const Vector4& a, const Vector4& b);
Vector4& operator/=(Vector4& a, const Vector4& b);
Vector4 operator/(const float f, const Vector4& v);
Vector4 operator/(const Vector4& v, const float f);
Vector4& operator/=(Vector4& v, const float f);

bool operator==(const Vector4& a, const Vector4& b);
bool operator!=(const Vector4& a, const Vector4& b);




#ifdef VECTOR_OPERANDS_IMPLEMENTATION
// ### Implementations ###:
// Vector2:
Vector2 operator+(const Vector2& a, const Vector2& b) {
    return Vector2{ a.x + b.x, a.y + b.y }; 
}
Vector2& operator+=(Vector2& a, const Vector2& b) {
    a.x += b.x;
    a.y += b.y;
    return a; 
}

Vector2 operator-(const Vector2& a, const Vector2& b) {
    return Vector2{ a.x - b.x, a.y - b.y }; 
}
Vector2& operator-=(Vector2& a, const Vector2& b) {
    a.x -= b.x;
    a.y -= b.y;
    return a; 
}

Vector2 operator*(const Vector2& a, const Vector2& b) {
    return Vector2{ a.x * b.x, a.y * b.y }; 
}
Vector2& operator*=(Vector2& a, const Vector2& b) {
    a.x *= b.x;
    a.y *= b.y;
    return a; 
}
Vector2 operator*(const float f, const Vector2& v) {
    return Vector2{ v.x * f, v.y * f }; 
}
Vector2 operator*(const Vector2& v, const float f) {
    return Vector2{ v.x * f, v.y * f }; 
}
Vector2& operator*=(Vector2& v, const float f) {
    v.x *= f;
    v.y *= f;
    return v; 
}

Vector2 operator/(const Vector2& a, const Vector2& b) {
    return Vector2{ a.x / b.x, a.y / b.y }; 
}
Vector2& operator/=(Vector2& a, const Vector2& b) {
    a.x /= b.x;
    a.y /= b.y;
    return a; 
}
Vector2 operator/(const float f, const Vector2& v) {
    return Vector2{ v.x / f, v.y / f }; 
}
Vector2 operator/(const Vector2& v, const float f) {
    return Vector2{ v.x / f, v.y / f }; 
}
Vector2& operator/=(Vector2& v, const float f) {
    v.x /= f;
    v.y /= f;
    return v; 
}

bool operator==(const Vector2& a, const Vector2& b) {
    return ((a.x == b.x) && (a.y == b.y));
}
bool operator!=(const Vector2& a, const Vector2& b) {
    return ((a.x != b.x) || (a.y != b.y));
}


// Vector3:
Vector3 operator+(const Vector3& a, const Vector3& b) {
    return Vector3{ a.x + b.x, a.y + b.y, a.z + b.z }; 
}
Vector3& operator+=(Vector3& a, const Vector3& b) {
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    return a; 
}

Vector3 operator-(const Vector3& a, const Vector3& b) {
    return Vector3{ a.x - b.x, a.y - b.y, a.z - b.z }; 
}
Vector3& operator-=(Vector3& a, const Vector3& b) {
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    return a; 
}

Vector3 operator*(const Vector3& a, const Vector3& b) {
    return Vector3{ a.x * b.x, a.y * b.y, a.z * b.z }; 
}
Vector3& operator*=(Vector3& a, const Vector3& b) {
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    return a; 
}
Vector3 operator*(const float f, const Vector3& v) {
    return Vector3{ v.x * f, v.y * f, v.z * f }; 
}
Vector3 operator*(const Vector3& v, const float f) {
    return Vector3{ v.x * f, v.y * f, v.z * f }; 
}
Vector3& operator*=(Vector3& v, const float f) {
    v.x *= f;
    v.y *= f;
    v.z *= f;
    return v; 
}

Vector3 operator/(const Vector3& a, const Vector3& b) {
    return Vector3{ a.x / b.x, a.y / b.y, a.z / b.z }; 
}
Vector3& operator/=(Vector3& a, const Vector3& b) {
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    return a; 
}
Vector3 operator/(const float f, const Vector3& v) {
    return Vector3{ v.x / f, v.y / f, v.z / f }; 
}
Vector3 operator/(const Vector3& v, const float f) {
    return Vector3{ v.x / f, v.y / f, v.z / f }; 
}
Vector3& operator/=(Vector3& v, const float f) {
    v.x /= f;
    v.y /= f;
    v.z /= f;
    return v; 
}

bool operator==(const Vector3& a, const Vector3& b) {
    return ((a.x == b.x) && (a.y == b.y) && (a.z == b.z));
}
bool operator!=(const Vector3& a, const Vector3& b) {
    return ((a.x != b.x) || (a.y != b.y) || (a.z != b.z));
}


// Vector4:
Vector4 operator+(const Vector4& a, const Vector4& b) {
    return Vector4{ a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w }; 
}
Vector4& operator+=(Vector4& a, const Vector4& b) {
    a.x += b.x;
    a.y += b.y;
    a.z += b.z;
    a.w += b.w;
    return a; 
}

Vector4 operator-(const Vector4& a, const Vector4& b) {
    return Vector4{ a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w }; 
}
Vector4& operator-=(Vector4& a, const Vector4& b) {
    a.x -= b.x;
    a.y -= b.y;
    a.z -= b.z;
    a.w -= b.w;
    return a; 
}

Vector4 operator*(const Vector4& a, const Vector4& b) {
    return Vector4{ a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w }; 
}
Vector4& operator*=(Vector4& a, const Vector4& b) {
    a.x *= b.x;
    a.y *= b.y;
    a.z *= b.z;
    a.w *= b.w;
    return a; 
}
Vector4 operator*(const float f, const Vector4& v) {
    return Vector4{ v.x * f, v.y * f, v.z * f, v.w * f }; 
}
Vector4 operator*(const Vector4& v, const float f) {
    return Vector4{ v.x * f, v.y * f, v.z * f, v.w * f }; 
}
Vector4& operator*=(Vector4& v, const float f) {
    v.x *= f;
    v.y *= f;
    v.z *= f;
    v.w *= f;
    return v; 
}

Vector4 operator/(const Vector4& a, const Vector4& b) {
    return Vector4{ a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w }; 
}
Vector4& operator/=(Vector4& a, const Vector4& b) {
    a.x /= b.x;
    a.y /= b.y;
    a.z /= b.z;
    a.w /= b.w;
    return a; 
}
Vector4 operator/(const float f, const Vector4& v) {
    return Vector4{ v.x / f, v.y / f, v.z / f, v.w / f }; 
}
Vector4 operator/(const Vector4& v, const float f) {
    return Vector4{ v.x / f, v.y / f, v.z / f, v.w / f }; 
}
Vector4& operator/=(Vector4& v, const float f) {
    v.x /= f;
    v.y /= f;
    v.z /= f;
    v.w /= f;
    return v; 
}

bool operator==(const Vector4& a, const Vector4& b) {
    return ((a.x == b.x) && (a.y == b.y) && (a.z == b.z) && (a.w == b.w));
}
bool operator!=(const Vector4& a, const Vector4& b) {
    return ((a.x != b.x) || (a.y != b.y) || (a.z != b.z) || (a.w != b.w));
}



#endif // VECTOR_OPERANDS_IMPLEMENTATION

#endif // _VECTOR_OPERANDS
