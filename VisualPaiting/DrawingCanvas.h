#pragma once
#include <opencv2\opencv.hpp>
#include <Windows.h>
class PaitingValues {
public:
	cv::Scalar lineColor;
	PaitingValues() {
		lineColor = cv::Scalar(0, 255, 255);
	};
};

namespace VisualPaiting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;

	/// <summary>
	/// Summary for DrawingCanvas
	/// </summary>
	public ref class DrawingCanvas : public System::Windows::Forms::Form
	{
	public:
		PaitingValues *ptrVals;
		DrawingCanvas(PaitingValues ptrInval)
		{
			InitializeComponent();
			ptrVals = &ptrInval;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DrawingCanvas()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// DrawingCanvas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"DrawingCanvas";
			this->Text = L"DrawingCanvas";
			this->Load += gcnew System::EventHandler(this, &DrawingCanvas::DrawingCanvas_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		void changeMouse(cv::Point &location)
		{
			SetCursorPos(location.x + 15, location.y + 15);
		}
		void openCavas()
		{
			cv::VideoCapture cap(0);
			cap.set(CV_CAP_PROP_FRAME_WIDTH, 1920);
			cap.set(CV_CAP_PROP_FRAME_HEIGHT, 1080);
			int Width = cap.get(CV_CAP_PROP_FRAME_WIDTH);
			int Height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
			Mat imgDrawing(Height, Width, CV_8UC3, Scalar(255, 255, 255));
			int lastX = 0;
			int lastY = 0;
			int posX = 0;
			int posY = 0;
			Mat frame;
			Mat imgHSV(Height, Width, CV_8UC3);
			Mat imgThreshold(Height, Width, CV_8UC3);

			while (1)
			{
				cap >> frame;
				cvtColor(frame, imgHSV, COLOR_BGR2HSV);
				inRange(imgHSV, Scalar(43, 77, 0), Scalar(66, 255, 255), imgThreshold);

				erode(imgThreshold, imgThreshold, getStructuringElement(MORPH_ELLIPSE, cv::Size(9, 9)));
				dilate(imgThreshold, imgThreshold, getStructuringElement(MORPH_ELLIPSE, cv::Size(9, 9)));
				flip(imgThreshold, imgThreshold, 1);
				flip(frame, frame, 1);


				Moments oMoments = moments(imgThreshold);
				double dM01 = oMoments.m01;
				double dM10 = oMoments.m10;
				double dArea = oMoments.m00;
				lastX = posX;
				lastY = posY;
				if (dArea> 700)
				{
					posX = dM10 / dArea;
					posY = dM01 / dArea;
					if (lastX == 0 && lastY == 0)
					{
						lastX = posX;
						lastY = posY;
					}

				}
				std::vector<std::vector<cv::Point> > contours;
				std::vector<cv::Vec4i> hierarchy;
				cv::findContours(imgThreshold, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
				if (contours.empty())
				{
					posX = 0;
					posY = 0;
					lastX = 0;
					lastY = 0;
				}
				else
				{
					//add(imgThreshold, imgDrawing, imgDrawing);

					Rect b = boundingRect(contours[0]);
					std::cout << b.height << " : " << b.width << "\n";
					//cout << posX << " : " << posY << "\n";
					changeMouse(cv::Point(posX, posY));
					if (b.height > 40 && b.width > 40)
						line(imgDrawing, cv::Point(posX, posY), cv::Point(lastX, lastY), ptrVals->lineColor, 2);
				}

				//imshow("Video", frame);
				imshow("Drawing", imgDrawing);
				//imshow("Threshold", imgThreshold);
				if (cv::waitKey(30) >= 0) break;
			}
		}
	private: System::Void DrawingCanvas_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
