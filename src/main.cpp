#include <iostream>
#include <string>
#include "hashMap.cpp"

int main() {
  kvmap::HashMap<unsigned, std::string> map;

  for (int i = 0; i < 1000000; i++) {
    map.set(i, "foo");
  }

  std::cout << "4 equals " << map.get(4) <<std:: endl;
  std::cout << "5 equals " << map.get(5) << std::endl;
  std::cout << "there are " << map.count() << " items in the map" << std::endl;
  std::cout << "deleting key 5" << std::endl;
  map.remove(5);
  std::cout << "there are " << map.count() << " items in the map" << std::endl;
  std::cout << "4 equals " << map.get(4) << std::endl;
  std::cout << "5 equals " << map.get(5) << std::endl;
  map.clear();
  std::cout << "there are " << map.count() << " items in the map" << std::endl;
  std::cout << "4 equals " << map.get(4) << std::endl;
  return 0;
}