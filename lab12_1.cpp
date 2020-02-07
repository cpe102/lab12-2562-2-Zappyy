#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}
void stat(const double A[],int N,double B[])
{
	double x=0;
	double y=0;
	double z=0;
	B[3] = A[0];
	B[2] = A[0];
	for(int i=0;i<N;i++)
	{
		x = x+A[i];
		B[0] = x/N;
	}
	for(int j=0;j<N;j++)
	{
		y = y+A[j]*A[j];
		z = B[0]*B[0];
		B[1] = pow((1.0/N*y)-z,0.5);
	}
	for(int mx=0;mx<N;mx++)
	{
		if(A[mx] > B[2]) B[2] = A[mx];
	}
	for(int mn=0;mn<N;mn++)
	{
		if(A[mn] < B[3]) B[3] = A[mn];
	}
}
