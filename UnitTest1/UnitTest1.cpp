#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1_it/Lab_06_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			int s = 55;

			int result = Sum(a, n);

			Assert::AreEqual(result, s, 1e-1);
		}
	};
}
