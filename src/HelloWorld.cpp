#include <Speaker.h>

using namespace std;
using namespace Hello;


#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;

int main(int argc, char *argv[]) {
    Speaker* speaker = new Speaker();

    speaker->sayHello();
  
  
    Mat image = imread("/home/ubuntu/Pictures/abc.jpg");

    if (image.empty())
    {
        cout << "No image found! Check path." << endl;
    }
    else
    {
        cout << "Yeah!!!." << endl;
    	namedWindow("Display Image", WINDOW_AUTOSIZE );
    	imshow("Display Image", image);

    	waitKey(0);
    }

    return 0;
}


#ifdef _XXX_
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
#endif // _XXX_
