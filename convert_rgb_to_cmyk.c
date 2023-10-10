/*  In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale from 
    0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K 
    varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula:
    - White=Max(red/255,green/255,blue/255)
    - Cyan=(white - red/255)/white
    - Magenta=(white - green/255)/white
    - Yellow=(white - blue/255)/white
    - Black=1 - white
Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1. */

#include <stdio.h>

int main ()
{
    int red,green,blue;
    double white,cyan,magenta,yellow,black;

    printf("enter value of red, green, blue(0 to 255): ");
    scanf("%d %d %d",&red ,&green ,&blue);

    white = (red > green) ? (red > blue ? red: blue) : (green > blue ? green : blue);
    
    if (white == 0)
    {
        cyan = magenta = yellow + 0.0;
        black = 1.0;
    }
    else
    {
        cyan = (white - (double)red / 255.0) / white;
        magenta = (white - (double)green / 255.0) / white;
        yellow = (white - (double)blue / 255.0) / white;
        black = 1.0 - white;
    }

    printf("CMYK values:\n");
    printf("Cyan: %.2lf\n", cyan);
    printf("Magenta: %.2lf\n", magenta);
    printf("Yellow: %.2lf\n", yellow);
    printf("Black: %.2lf\n", black);

    return 0;
}