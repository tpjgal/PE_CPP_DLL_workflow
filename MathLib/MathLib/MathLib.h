#pragma once
#ifdef MATHLIB_EXPORTS 
#define MATHLIB_API __declspec(dllexport)
#else 
#define MATHLIB_API __declspec(dllexport)
#endif // 


namespace MathLib
{

	class MATHLIB_API  Calculator
	{
	public:
		static int Add(int a, int b);
		static int Subtract(int a, int b);
		static int Multiply(int a, int b);
		
		static double Divide(int a, int b);
		static bool Isprime(int n);
	};
}