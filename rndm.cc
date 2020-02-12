// poisson_distribution
#include <iostream>
#include <TRandom3.h>

using namespace std;

int main()
{
	TRandom3 generator(0);

	int n = 1000;
	int s = 20;
	int m = 10;
	int a [s];

	for (int i=0; i<s; i++) 
		a[i]=0;

	cout << "some Poisson-distributed results (mean=" << m << "): " << endl;

	int tmp = 0;
	for (int i=0; i<n; i++) 
	{
		tmp = generator.Poisson(m);
		a[tmp]++;
	}
	
	for (int i=0; i<s; i++)
		cout << i << "\t" << a[i] << endl;

	return 0;
}
