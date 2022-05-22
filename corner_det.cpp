#include "corner_det.h"

int findChessboardCorners3(const cv::Mat &arr, CvSize pattern_size,
                           CvPoint2D32f *out_corners, int *out_corner_count,
                           int min_number_of_corners) {
    cv::imshow("corner_det", arr);
    cv::waitKey(0);
}