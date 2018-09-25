#pragma once

template<typename T>
class Vector2 {
public:
	T x;
	T y;

	Vector2() {
	}
	Vector2(T i) :x(i), y(i) {
	}
	Vector2(T x, T y) :x(x), y(y) {
	}
	Vector2(const Vector2& vec) :x(vec.x), y(vec.y) {
	}
};

typedef Vector2<int>Pos;
