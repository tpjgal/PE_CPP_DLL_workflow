#include "pch.h"
#include "MathLib.h"
#include <stdexcept>

namespace MathLib
{
	int Calculator::Add(int a, int b)
	{
		return a + b;
	}

	int Calculator::Subtract(int a, int b)
	{
		return a - b;
	}

	int Calculator::Multiply(int a, int b)
	{
		return a * b;
	}

	double Calculator::Divide(int a, int b)
	{
		if (b == 0)
		{
			throw std::invalid_argument("Division by zero");
		}
		return static_cast<double>(a) / static_cast<double>(b);
	}

	bool Calculator::Isprime(int n)
	{
		if (n < 2)
		{
			return false;
		}

		for (int i= 2; i* i <= n; ++i)
		{
			if (n % i == 0)
			{
				return false;
			 }

		}
		return true;
	}
}