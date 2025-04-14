#include <iostream>
#include <opencv2/opencv.hpp>

// 최대 밝기값을 구하는 함수
int findMaxBrightness(const cv::Mat& img) {
    double minVal, maxVal;
    cv::minMaxLoc(img, &minVal, &maxVal);
    return static_cast<int>(maxVal);
}

int main() {
    // 그레이스케일로 이미지 로딩
    cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);
    if (img.empty()) {
        std::cerr << "이미지를 불러올 수 없습니다." << std::endl;
        return -1;
    }

    // 최대 밝기 출력
    int maxBrightness = findMaxBrightness(img);
    std::cout << "최대 밝기: " << maxBrightness << std::endl;

    // 이미지 표시
    cv::imshow("Lenna Window", img);
    cv::waitKey(0);
    return 0;
}
