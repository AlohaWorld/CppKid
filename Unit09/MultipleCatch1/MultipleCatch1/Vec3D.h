#pragma once

#include <array>
#include <string>
#include <cmath>
#include <limits>
#include "RangeException.h"
#include "ZeroException.h"

class Vec3D {
public:
  constexpr static std::size_t DIMENSION = 3;
private:
  std::array<double, DIMENSION> vec{ 1.0, 1.0, 1.0 };
  bool isSame(double a, double b) {
    return std::fabs(a - b) < std::numeric_limits<double>::epsilon();
  }
public:

  Vec3D(double x, double y, double z) {
    vec[ 0 ] = x;
    vec[ 1 ] = y;
    vec[ 2 ] = z;
  }
  Vec3D() = default;
  double &operator[] (const int index) {
    if (index >= 0 && index < DIMENSION) {
      return vec[ index ];
    } else {
      throw RangeException(DIMENSION, index);
    }
  }

  Vec3D operator /(const double divisor) {
    Vec3D t(*this);
    if (isSame(divisor, 0.0))
      throw ZeroException();
    else {
      for (auto &i : t.vec) {
        i /= divisor;
      }
      return t;
    }
  }
};