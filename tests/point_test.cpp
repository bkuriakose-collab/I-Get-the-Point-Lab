#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/point.hpp"

using namespace std;


TEST_CASE("getters testing ") {

	Point p(3, 4);
	REQUIRE(p.get_x() == 3);
	REQUIRE(p.get_y() == 4);
}
TEST_CASE("checking the distance operator") {

	Point a(0, 0);
	Point b(3, 4);
	REQUIRE((a - b) == 5);
}
TEST_CASE("equality operator tetsing") {

	Point a(2, 3);
	Point b(2, 3);
	REQUIRE((a == b) == true);
}
TEST_CASE("inequality operator testing") {

	Point a(2, 3);
	Point b(5, 6);
	REQUIRE((a != b) == true);
}
TEST_CASE("midpoint operator testing ") {

	Point a(0, 0);

	Point b(4, 6);
	Point mid = a / b;
	REQUIRE(mid.get_x() == 2);
	REQUIRE(mid.get_y() == 3);
}

