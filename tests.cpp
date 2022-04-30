#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>


TEST_CASE("0 is the input so vector has no elements"){
  std::vector<int> a = makeVector(0);
  CHECK(a.size() == 0);
}

TEST_CASE("-1 is the input so vector has no elements"){
  std::vector<int> a = makeVector(-1);
  CHECK(a.size() == 0);
}

TEST_CASE("3 is the input so vector has 3 elements 0-2"){
  std::vector<int> a = makeVector(3);
  CHECK(a.size() == 3);
  CHECK(a[0] == 0);
  CHECK(a[1] == 1);
  CHECK(a[2] == 2);
}
TEST_CASE("Tests that only positive elements of the vector are displayed in the new vector"){
  const std::vector<int> v{-1,2,-1,3,4,-1,-6};
  std::vector<int> b;
  b = goodVibes(v);
  CHECK(b[0] == 2);
  CHECK(b[1] == 3);
  CHECK(b[2] == 4);
}

TEST_CASE("Checks that the new vector doesn't display any values when they're all negative"){
  const std::vector<int> v{-1,-2,-1,-3,-4,-1,-6};
  std::vector<int> b;
  b = goodVibes(v);
  CHECK(b.size() == 0);
}

TEST_CASE("Checks size of the second vector after function is performed"){
  std::vector<int> v1{1,2,3,4};
  std::vector<int> v2{4,5,6,7,8};

  gogeta(v1, v2);
  CHECK(v2.size() == 0);
}
TEST_CASE("Checks that all elements from vector 2 are appended to vector 1"){
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};

  gogeta(v1, v2);
  CHECK(v1[0] == 1);
  CHECK(v1[1] == 2);
  CHECK(v1[2] == 3);
  CHECK(v1[3] == 4);
  CHECK(v1[4] == 5);

}
TEST_CASE("vector 1 has some missing elements compared to vector 2"){
  std::vector<int> v1{2,0};
  std::vector<int> v2{4,5,4,3};

  std::vector<int> a = sumPairWise(v1,v2);
  CHECK(a[0] == 6);
  CHECK(a[1] == 5);
  CHECK(a[2] == 4);
  CHECK(a[3] == 3);

}
TEST_CASE("vector 2 has some missing elements compared to vector 1"){
  std::vector<int> v1{4,5,4,3};
  std::vector<int> v2{2,0};

  std::vector<int> a = sumPairWise(v1,v2);
  CHECK(a[0] == 6);
  CHECK(a[1] == 5);
  CHECK(a[2] == 4);
  CHECK(a[3] == 3);

}
TEST_CASE("vector 2 has no elements"){
  std::vector<int> v1{4,5,4,3};
  std::vector<int> v2{};

  std::vector<int> a = sumPairWise(v1,v2);
  CHECK(a[0] == 4);
  CHECK(a[1] == 5);
  CHECK(a[2] == 4);
  CHECK(a[3] == 3);

}
TEST_CASE("vector 1 has no elements"){
  std::vector<int> v1{};
  std::vector<int> v2{4,5,4,3};

  std::vector<int> a = sumPairWise(v1,v2);
  CHECK(a[0] == 4);
  CHECK(a[1] == 5);
  CHECK(a[2] == 4);
  CHECK(a[3] == 3);

}
