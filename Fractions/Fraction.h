#pragma once
#include <string>
#include <iostream>


// Addition: a/b + c/d = (a*d + b*c)/(b*d)
// Subtraction: a/b - c/d = (a*d - b*c)/(b*d)
// Multiplication: (a/b) * (c/d) = (a*c)/(b*d)
// Division: (a/b) / (c/d) = (a*d)/(b*c)


namespace mathlib
{
	class Fraction
	{
	private:
		int numerator = 0;
		int denominator = 0;

	public:

		
		

		Fraction(int numerator2, int denominator2)
		{
			numerator = numerator2;
			denominator = denominator2;
			if (denominator == 0)
			{
				std::cout << "denominator is 0 please try again" << std::endl;
			};
			
		}
	
		static float toFloat(Fraction frat) 
		{
			if ( frat.denominator == 0)
			{
				std::cout << "something is 0 try again";
			}
			
			
			float val = (float) frat.numerator / frat.denominator;
			return val;
		}


		bool operator == (Fraction red) 
		{
			toFloat(red);
			toFloat(*this);
			if (numerator == red.numerator)
			{
				float i = numerator + red.numerator /2 ;
			}
		}
		

		Fraction operator +(Fraction fra)
		{
			int comDen = this->denominator * fra.denominator;
			int num2 = numerator * fra.denominator;
			int onum = denominator * fra.numerator;
			int addnum = num2 + onum;
			Fraction(num2, onum);
			{
				Fraction blue = (Fraction(addnum, comDen));
				return blue;
			};





		}
		
			

		int Mul = numerator * denominator;
		int Div = numerator / denominator;*/

	};
}