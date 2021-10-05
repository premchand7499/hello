
//#include<stdafx.h>
#include<opencv2/opencv.hpp>

#include<iostream>

using namespace cv;
using namespace std;

int main(int argc,char** argv)
{
	Mat image(600,800,CV_8UC3,scalar(100,250,30));

	String windowname = "Blank image";

	namedwindow(windowname);

	imshow(windowname,image);

	waitkey(0);

	destorywindow(windowname);

	return 0;
}




