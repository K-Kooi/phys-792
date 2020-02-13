#include <iostream>
#include <TRandom3.h>
#include <TH1F.h>
#include <TCanvas.h>
int main()
{
	TH1F histogram("histogram",";Height [cm];",20,100,300);
	TRandom3 generator(0);

	for (int i=0; i<160; i++) histogram.Fill(generator.Gaus(170,20));

	TCanvas can;
	histogram.Draw();
	can.Print("height.png");

	return 0;
}
