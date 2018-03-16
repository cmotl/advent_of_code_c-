// whattotest.cpp
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <numeric>

enum struct Direction { up, down };

Direction to_direction(const char c){
  return (c == '(' ? Direction::up : Direction::down);  
}

std::vector<Direction> acl(const std::string& s) {
  std::vector<Direction> v;
  std::transform(s.begin(), s.end(), std::back_inserter(v),  [](char c){ return to_direction(c); });
  return v;
}

int final_floor(std::vector<Direction> v) {
  return std::accumulate(v.begin(), v.end(), 0, 
      [](const int floor, const Direction d) { return (d == Direction::up ? floor + 1 : floor - 1); } );
}
