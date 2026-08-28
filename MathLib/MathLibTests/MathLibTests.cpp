#include "pch.h"
#include "CppUnitTest.h"
#include "../MathLib/MathLib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace MathLib;

namespace MathLibTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:
		
		TEST_METHOD(Add_ReturnSUM)
		{
			Assert::AreEqual(5, Calculator::Add(2, 3));
		}

		TEST_METHOD(Subtract_ReturnDifference)
		{
			Assert::AreEqual(1, Calculator::Subtract(3, 2));
		}

		TEST_METHOD(Multiply_ReturnProduct)
		{
			Assert::AreEqual(6, Calculator::Multiply(2, 3));
		}
	};
}
