#include <iostream>
#include <TRandom3.h>
#include <TH1F.h>
#include <TCanvas.h>

int main()
{
        TH1F histogram("histogram","",20,0,100);
        TRandom3 generator(0);

        for (int i=0; i<1000; i++) histogram.Fill(generator.Exp(15));

	histogram.Fit("expo");

        TCanvas can;
        histogram.Draw();
        can.Print("expo.png");

        return 0;
}
