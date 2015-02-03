#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <cmath>
#include "discpp.h"
#include <cstdlib>
/*fdsjklafjdskl*/
/*fdjskl;fajdskla;fjdksl;afjkdls;a*/
using namespace std;
//www

/*fjdksl;afjdkls;afjdkls;afjkdlsafjdks HELLO*/



//test
//aaa
//Git test 2/2/2015
//Git test 2nd 2/2/2015
int main ()
{ 
    //aaa
    Dislin g;
    fdsfsfdsfdsfds HELLO;
    int ic;
    int n = Step;
    double temp = 0.0;
    double* z = new double[Step];
    double* xaxis= new double[Step];
    FILE *fp;
    fp = fopen("Mxtest3.txt", "r"); 
    int j=0;
    int w=0;
    for(int i = 0; i < Step; i++)
    {           
        fscanf(fp,"%d\t%le\n", &j, &temp);    
        w= j;
        z[i] = temp;   
    }
    
    fclose(fp);

    for(int i = 0; i <Step; i++)
    { 
      xaxis[i] = i;
    
    }
  

   g.metafl ("xwin");
  g.scrmod ("revers");
  g.disini ();
  g.pagera ();
  g.complx ();
  g.axspos (450, 1800);
  g.axslen (2200, 1200);

  g.name   ("time", "x");
  g.name   ("My", "y");

  g.labdig (-1, "x");
  g.ticks  (10, "x");
  g.ticks  (10, "y");

  //g.titlin ("Demonstration of CURVE", 1);
  //g.titlin ("SIN(X), COS(X)", 3);

  ic=g.intrgb (0.95,0.95,0.95);
  g.axsbgd (ic);

  g.graf   (0.0, Step, 0.0, Step/5, -1.0, 1.0, -1.0, 0.1);
  g.setrgb (0.7, 0.7, 0.7);
  g.grid   (1, 1);

  g.color  ("fore");
  g.height (50);
  g.title  ();

  g.color  ("red");
  g.curve  (xaxis, z, n);
  //g.color  ("green");
  //g.curve  (xray, y2ray, n);
  g.disfin ();
  delete [] z;
  delete [] xaxis;
  return 0;
}
 

