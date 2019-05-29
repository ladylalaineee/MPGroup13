#include <iostream>
#include <cmath>
#define PI 3.14159265 

using namespace std;

int main()   //MAIN
{
	double sideA, sideB, sideC; //declaring variables for sides
	double angleA, angleB, angleC, halfPeri, area, perimeter, apothem,circumcenter; //delcaring variables for angles

	//Entering side length
	cout << "Enter measurements for each side of the triangle" << endl;
	cout << "Side A: ";
	cin >> sideA;
	cout << "Side B: ";
	cin >> sideB;
	cout << "Side C: ";
	cin >> sideC;
	cout << endl;
	
	//Compute the interior angles
	cout << "A." << endl;
	cout << "Angle A is: " << angleA << endl;
	angleA = ((sideB*sideB) + (sideC*sideC) - (sideA*sideA)) / (2 * sideB * sideC);
	cout << "Angle B is: " << angleB << endl;
	angleB = ((sideC*sideC) + (sideA*sideA) - (sideB*sideB)) / (2 * sideA * sideC);
	cout << "Angle C is: " << angleC << endl;
	angleC = (180-angleA-angleB);
	cout << endl;
	
	//Identifying triangle type
	//ALL sides are equal
	if (sideA==sideB && sideB==sideC)
	{
		cout << "B." << endl;
		cout << "The triangle is EQUILATERAL." << endl;
	}
	//At least TWO sides are equal
	else if (sideA==sideB || sideB==sideC || sideC==sideA)
	{
		cout << "B." << endl;
		cout << "The triangle is ISOSCELES." << endl;
	}	
	//NO sides are equal
	else
	{
		cout << "B." << endl;
		cout << "The triangle is SCALENE." << endl;
	}
	cout << endl;
	
	//Getting the area
	cout << "C." << endl;
	cout << "The area of the triangle is: " << area << endl;
	halfPeri= perimeter/2;
	area = (sqrt(halfPeri*(halfPeri-sideA)*(halfPeri-sideB)*halfPeri-sideC));
	
	//Getting the perimeter
	cout << "The perimeter of the triangle is: " << perimeter;
	perimeter = sideA+sideB+sideC;
	cout << endl;
	cout << endl;
	
	//Acute, Right, Obtuse
	cout << "D." << endl;
	if(sideA+sideB>sideC &&sideB+sideC>sideA && sideC+sideA>sideB)
      {
      	// Acute Triangle
        if(sideA>0 && sideA<90 && sideB>0 && sideB<90 && sideC>0 && sideC<90)
          {
            cout<< "The triangle is ACUTE.";
            cout << endl;
          }
        // Obtuse Triangle  
        else if(sideA>90 && sideB>90 && sideC>90)
          { 
            cout<<"The triangle is OBTUSE.";
            cout << endl;
          }
        // Right Triangle  
        else if(sideA*sideA+sideB*sideB==sideC*sideC && sideB*sideB+sideC*sideC==sideA*sideA && sideC*sideC+sideA*sideA==sideB*sideB)
          {
            cout<<"The triangle is RIGHT.";
            cout << endl;
          }
        else 
           cout <<"Sides invalid." << endl;
           cout << endl;
      }    
      cout << endl;

	//Compute for length of Apothem and Circumcenter
	//APOTHEM
	cout << "E." << endl;
	cout << "The Apothem of the triangle is: " << apothem << endl;
	apothem = (2*area/perimeter); 
	
	//CIRCUMCENTER
	cout << "The Circumcenter of the triangle is: " << circumcenter << endl;
	circumcenter = (sideA * sideB * sideC)/sqrt((sideA + sideB + sideC) * (sideA + sideC - sideA) * (sideA + sideB - sideC));
		return 0;
}

