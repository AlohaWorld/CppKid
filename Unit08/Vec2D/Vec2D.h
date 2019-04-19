#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <exception>
class Vec2D {
public:
  Vec2D();
  Vec2D(double , double);
  ~Vec2D();
private:
  double x_;
  double y_;
public:
  // 将向量转换为字符串形式表示
  std::string toString();
  // 向量加法
  Vec2D add(Vec2D secondVec2D);
  // 向量和数值的加法
  Vec2D add(double numeral);
  // 向量减法
  Vec2D subtract(Vec2D secondVec2D);
  Vec2D subtract(double numeral);
  // 向量点积
  double dot(Vec2D secondVec2D);
  // 向量数乘
  Vec2D multiply(double multiplier);
  // 向量求负值
  Vec2D negative();
  // 向量自增1
  Vec2D& increase();
  // 向量自减1
  Vec2D& decrease();
  // 读取或者修改向量元素
  double& at(const int index);
  // 求向量的范数（长度)
  double magnitude();
  // 求向量与x+轴的夹角
  double direction();
  // 比较两个向量的长度。如果firstVec2D小于secondVec2D，返回-1，若大于则返回1，若相等则返回0
  int compareTo(Vec2D secondVec2D);
};
