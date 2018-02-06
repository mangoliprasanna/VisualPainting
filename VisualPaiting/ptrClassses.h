class PaitingValues {
public:
	cv::Scalar lineColor;
	bool rubber, circle, brush, rectangle, line;
	cv::Mat finalMAT;
	PaitingValues() {
		lineColor = cv::Scalar(0, 0, 0);
		rubber = false;
		brush = true;
		rectangle = false;
		circle = false;
		line = false;
	};
};