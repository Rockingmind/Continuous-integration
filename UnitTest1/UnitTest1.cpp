#include "pch.h"
#include "CppUnitTest.h"
#include "..\Continuous integration\Continuous integration.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double actual = taylor_cos(M_PI, 100);
			double expected = -1;
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(TestMethod2)
		{
			double actual = taylor_cos(M_PI/3, 100);
			double expected = 0.5;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestMethod3) {
			double actual = taylor_cos(M_PI/2, 100);
			double expected = 0;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestMethod4) {
			double actual = taylor_cos(0, 100);
			double expected = 1;
			Assert::AreEqual(expected, actual);
		}
	};
}
