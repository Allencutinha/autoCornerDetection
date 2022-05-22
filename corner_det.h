#pragma once
#include <opencv2/opencv.hpp>
int findChessboardCorners3(const cv::Mat &arr, CvSize pattern_size,
                           CvPoint2D32f *out_corners, int *out_corner_count,
                           int min_number_of_corners);