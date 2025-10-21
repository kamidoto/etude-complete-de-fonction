#include "dDE.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

std::vector <double> nb;
std::vector <std::string> operateur;

void dE(std::string expression)
{
	int start = 0;
	char coP[20];
	std::string sTD; //transformer l chaine de character en nombre(double)
	
	for (int i = 0; i <= expression.length(); i++)
	{
		if (expression[i] == '(' or expression[i] == ')' or expression[i] == '^' or expression[i] == '/' or expression[i] == '*' or expression[i] == '-' or expression[i] == '+' or expression[i] == 'f' or expression[i] == 'x') //separer les nbs
		{
			int nB = i;

				expression.copy(coP, nB, start);

				double st = std::stod(coP, 0);

				nb.push_back(st);

				start = i + 1;

				if (expression[i] == '(')
				{
					operateur.push_back("(");
				}


				if (expression[i] == ')')
				{
					operateur.push_back(")");
				}


				if (expression[i] == '^')
				{
					operateur.push_back("^");
				}


				if (expression[i] == '/')
				{
					operateur.push_back("/");
				}


				if (expression[i] == '*')
				{
					operateur.push_back("*");
				}


				if (expression[i] == '-')
				{
					operateur.push_back("-");
				}


				if (expression[i] == '+')
				{
					operateur.push_back("+");
				}


				if (expression[i] == 'x')
				{
					operateur.push_back("x");
				}
		}

		else if (expression[i] == 'l')
			if (expression[i + 1] == 'o')
				if (expression[i + 2] == 'g')
				{
					operateur.push_back("log");

					if (expression[i + 3] == '(')
					{
						operateur.push_back("(");
						i = i + 3;

						start = i + 1;
					}

					else
						start = i + 3;
				}

		else if (expression[i] == 't')
			if (expression[i + 1] == 'a')
				if (expression[i + 2] == 'n')
				{
					operateur.push_back("tan");

					if (expression[i + 3] == '(')
					{
						operateur.push_back("(");
						i = i + 3;

						start = i + 1;
					}

					else
						start = i + 3;
				}

		else if (expression[i] == 'c')
			if (expression[i + 1] == 'o')
				if (expression[i + 2] == 's')
				{
					operateur.push_back("cos");

					if (expression[i + 3] == '(')
					{
						operateur.push_back("(");
						i = i + 3;

						start = i + 1;
					}

					else
						start = i + 3;
				}

		else if (expression[i] == 's')
			if (expression[i + 1] == 'i')
				if (expression[i + 2] == 'n')
				{
					operateur.push_back("sin");

					if (expression[i + 3] == '(')
					{
						operateur.push_back("(");
						i = i + 3;

						start = i + 1;
					}

					else
						start = i + 3;
				}
	}
}

