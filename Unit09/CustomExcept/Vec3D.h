#pragma once
#include <array>
#include "RangeException.h"
// 任务1：创建Vec3D类，用 array 保存向量成员；
// 任务3：实现Vec3D::operator[](const int index)
// 当index越界时，抛出RangeException的对象
class Vec3D {
private:
  std::array <double, 3> v{ 1.0, 1.0, 1.0 };
public:
  Vec3D() = default;
  Vec3D(double x, double y, double z) {
    v[ 0 ] = x;
    v[ 1 ] = y;
    v[ 2 ] = z;
  }
  double &operator [] (const int index) {
    if (index >= 0 && index <= 2) {
      return v[ index ];
    } else {
      throw RangeException(3, index);
    }
  }
};