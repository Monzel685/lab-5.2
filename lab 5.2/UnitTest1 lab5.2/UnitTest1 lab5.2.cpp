#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.2/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1lab52
{
	TEST_CLASS(UnitTest1lab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
        {

            double x = 1.5;
            double eps = 1e-6;
            double s = 0;
            int n = 0;

            double expected = atanh(1.0 / x);


            double result = S(x, eps, n, s);


            Assert::AreEqual(expected, result, eps);
        }
	};
}
