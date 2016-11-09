#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
const int num =10000;
class Vector_Prctice
{
public:
	double x;
	double y;
};
int main()
{
	Vector_Prctice a[num];
	for (int i = 0; i < num; i++)
	{
		a[i].x =i;
		a[i].y= 3.0 *a[i].x + 1 +(float) (rand() / RAND_MAX);
	}
	
	Vector_Prctice b[num];
	for (int j = 0; j < num; j++)
	{
		b[j].x =j;
		b[j].y = 3.0* b[j].x + 1;
	}

	for (int l = 0; l < num; l++)
	{
		double error = sqrt((a[l].y - b[l].y)*(a[l].y - b[l].y));
		cout << error << endl;
	}

}