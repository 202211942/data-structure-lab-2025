#include <iostream>
#include <opencv2/opencv.hpp>

// �ִ� ��Ⱚ�� ���ϴ� �Լ�
int findMaxBrightness(const cv::Mat& img) {
    double minVal, maxVal;
    cv::minMaxLoc(img, &minVal, &maxVal);
    return static_cast<int>(maxVal);
}

int main() {
    // �׷��̽����Ϸ� �̹��� �ε�
    cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);
    if (img.empty()) {
        std::cerr << "�̹����� �ҷ��� �� �����ϴ�." << std::endl;
        return -1;
    }

    // �ִ� ��� ���
    int maxBrightness = findMaxBrightness(img);
    std::cout << "�ִ� ���: " << maxBrightness << std::endl;

    // �̹��� ǥ��
    cv::imshow("Lenna Window", img);
    cv::waitKey(0);
    return 0;
}
