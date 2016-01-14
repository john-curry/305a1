#include "Image.h"


int main(int, char**){

    Image image(512, 512);

    const size_t size = 56;    

    bool black = true;

    Pixel Black(0, 0, 0);

    Pixel White(255, 255, 255);


    for (int i = 0; i < 512; i++)
    {
        for (int j = 0; j < 512; j++)
        {
           int iOffset  = i - (i / (size) * size);
           int jOffset  = j - (j / (size) * size);

           int iBit = iOffset / (size / 2);
           int jBit = jOffset / (size / 2);

           black = iBit ^ jBit;

           if (black) image(i, j) = Black;
           else       image(i, j) = White;
        }

    }
    
    image.show("GLFW3+Libpng Image Window Demo");
//    image.save("/Users/ilucky/Desktop/demo.png");
	
}
