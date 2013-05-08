//
//  main.cpp
//  OptimalCylinder
//
//  Created by Akhil Verghese on 4/6/13.
//  Copyright (c) 2013 Akhil Verghese. All rights reserved.
//

#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
double pi=M_PI;

int main(int argc, const char * argv[])
{
    int W,H,T,temp;
    double maxvolume, r, h,ratio, L1, L2, L3, L4;
    L1=((double)1+(1/pi));
    L2=(((double)1/2)+(pi/2));
    L3=((double)2+pi);
    L4=(pi*pi)+(2/pi);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&W);
        scanf("%d",&H);
        if(H>W)
        {
            temp=H;
            H=W;
            W=temp;
        }
        ratio=(double)W/(double)H;
        if(ratio<L1)
        {
            r=((double)H/(2*pi));
            h=(W-(2*r));
        }
        else if(ratio<L2)
        {
            r=((double)W/(2*((double)1+pi)));
            h=H;
        }
        else if(ratio<L3)
        {
            r=(((pi*W)+W+H)-sqrt(H*((2*W*(1+pi))-(H*pi*(2*pi)))))/34.305579416537888;
            h=H;
        }
        else if(ratio<L4)
        {
            r=(double)H/2;
            h=(double)H;
        }
        else
        {
            r=(double)H/(2*pi);
            h=(W-(4*r));
        }
        
        printf("%.12lf\n",r);
        maxvolume=r*r*h*pi;
        printf("%.12lf\n",maxvolume);
        getchar();
    }
    return 0;
}

