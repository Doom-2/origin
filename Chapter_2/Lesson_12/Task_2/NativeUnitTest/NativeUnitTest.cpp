#include "pch.h"
#include "CppUnitTest.h"
#include "../extended_array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTest
{
	TEST_CLASS(ExtendedArrayTest)
	{
	public:

		TEST_METHOD(Mean) {
			ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
			Assert::AreEqual(v1.mean(), 1.125);
		}

		TEST_METHOD(MeanInRange) {
			ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
			Assert::AreEqual(v1.mean(2, 5), 1.25);
			Assert::ExpectException<std::invalid_argument>([&] { v1.mean(1, 10); });
			Assert::ExpectException<std::invalid_argument>([&] { v1.mean(-10, -5); });
			Assert::ExpectException<std::invalid_argument>([&] { v1.mean(-10, 5); });
		}
		TEST_METHOD(Median) {
			ExtArray<double> v2{ 4.5, 0.7, 10.8, -3.5 };
			Assert::AreEqual(2.6, v2.median());
		}
		TEST_METHOD(Mode) {
			ExtArray<int> v1{ 4, 2, 7, 2, 5, -5, 0, 5, 5 };
			Assert::AreEqual(5, v1.mode().first);
		}
	};
}
