#include<iostream>
#include <fstream>
#include <stdio.h>      
#include <math.h>       /* cos */
using namespace std;
#include "time.h"

int main()
{
  string line;
  ifstream myfile ("Pi_2500000.txt");
ofstream myfile2;
ofstream myfile3;
  int v = 0;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;
  int c5 = 0;
 
  if (myfile.is_open())
  {
    int i;
    int s= 0;
    int j=0 ;
    int l;
    int arreglo[5];
    arreglo[0]= 1;
    arreglo[1]=10;
    arreglo[2]=20;
    arreglo[3]=50;
    arreglo[4]=100;
    int m;
    while ( getline (myfile,line) )
    {
      //auto start = chrono::steady_clock::now();
      
myfile2.open ("tiempo.txt");
      int n = line.length();
    for (m=0;m<5;m++)
    {
     clock_t begin = clock();
      for(i=2; i<n;i++)
	{
	
	  char letra = line[i];
	  int l = (int)letra;
	  if(l==1)
	    {
	      v=1;
	      c1=c1+1;
	    }
	  if(l==2)
	    {
	      if(v==1)
		{
		  c2 = c2+1;
		  v = 2;
		}
	    }
	  if(l==3)
	    {
	      if(v==2)
		{
		  c3 = c3+1;
		  v = 3;
		}
	    }
	 if(l==4)
	    {
	      if(v==3)
		{
		  c4 = c4+1;
		  v = 4;
		}
	    }
	  if(l==5)
	    {
	      if(v==4)
		{
		  c5 = c5+1;
		  v = 5;
		}
	    }

	
	      if(j>=n/arreglo[m])
	{
	clock_t after = clock();
	j = 0;
	

	//      myfile2 << duration_cast<chrono::nanoseconds>(end - start).count();
	  cout << (after-begin)<< "\n";

	  myfile2 << (after-begin);
	  myfile2 << "\n";
	begin = clock();
	  myfile3.open ("archivo.txt");

	 myfile3 << c1 << "\n";
	 myfile3 << c2 << "\n";
	 myfile3 << c3 << "\n";
	 myfile3 << c4 << "\n";
	 myfile3 << c5 << "\n";
	c1 = 0;
	c2 = 0;
	c3 = 0;
	c4 = 0;
	c5 = 0;
	}
	else
	{
	j = j+1;
	}
	}

    }
  myfile3.close();
  myfile2.close();
	//auto end = chrono::steady_clock::now();
	


	}
    myfile.close();
  }

  return 0;
}
