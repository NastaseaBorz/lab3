#include "../include/foo.h"
#include "catch.hpp"

TEST_CASE("foo: test", "[testing]") {
	int a = 4;
	int b = 2;
	REQUIRE(foo(a,b) == 1);
	REQUIRE(foo(2,4) == 0);
}
