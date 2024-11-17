// #include<pch.h>
#include "opencv2/opencv.hpp"
#include "iostream"

// using namespace cv;
// using namespace std;

int main(int argc, char** argv) {
	cv::Mat src = cv::imread("pic.jpg");
	if (src.empty()) {
		std::cout << "image is empty or the path is invalid!" << std::endl;
		return -1;
	}
	//namedWindow("输入窗口", WINDOW_FREERATIO);
	cv::imshow("输入窗口", src);
	cv::waitKey(0);
	cv::destroyAllWindows();
	return 0;
}
