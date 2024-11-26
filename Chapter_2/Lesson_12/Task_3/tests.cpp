#define CATCH_CONFIG_MAIN
#include"catch2/catch_all.hpp"
#include"extended_array.h"
TEST_CASE("CheckSumResult") {
	SECTION("bitwise") {
		ExtArray<int> v1{ 0, 1, 1, 1, 0, 0, 1 };
		INFO("Sum of ones in bitwise array calculated wrong");
		REQUIRE(v1.checkSum() == 4);
	}
	SECTION("bool") {
		ExtArray<bool> v2{ true, 0, false, 1, true };
		INFO("Sum of true values in bitwise array calculated wrong");
		REQUIRE(v2.checkSum() == 3);
	}
}

TEST_CASE("CheckSumBadTypeID") {
	SECTION("double") {
		ExtArray<double> v3{ 0, 1.5, 1 };
		REQUIRE_THROWS_AS(v3.checkSum(), std::bad_typeid);
	}
	SECTION("char") {
		ExtArray<char> v4{ 0, 'a', 15 };
		REQUIRE_THROWS_AS(v4.checkSum(), std::bad_typeid);
	}
}

TEST_CASE("CheckSumLogicError") {
	SECTION("notBitwise") {
		ExtArray<int> v5{ 4, 2, 7, 3, -5, 0, -3, 1 };
		REQUIRE_THROWS_AS(v5.checkSum(), std::logic_error);
	}
}
