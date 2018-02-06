#pragma once
#include <opencv2\opencv.hpp>
#include <Windows.h>
#include "ptrClassses.h"
#define PEN b.height > 45 && b.width > 45
//#define PEN true

namespace VisualPaiting {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace std;

	/// <summary>
	/// Summary for VisualDraw
	/// </summary>
	public ref class VisualDraw : public System::Windows::Forms::Form
	{
	public:
		PaitingValues *ptrVals;
		VisualDraw(void)
		{
			InitializeComponent();
		}
		VisualDraw(PaitingValues ptrInval)
		{
			InitializeComponent();
			ptrVals = &ptrInval;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VisualDraw()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ColorDialog^  colorDialog1;

	private: System::Windows::Forms::Button^  Rubber;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;



















	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VisualDraw::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->Rubber = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Rubber
			// 
			this->Rubber->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Rubber.BackgroundImage")));
			this->Rubber->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Rubber->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Rubber->Location = System::Drawing::Point(12, 292);
			this->Rubber->Name = L"Rubber";
			this->Rubber->Size = System::Drawing::Size(144, 64);
			this->Rubber->TabIndex = 2;
			this->Rubber->Text = L" ";
			this->Rubber->UseVisualStyleBackColor = true;
			this->Rubber->Click += gcnew System::EventHandler(this, &VisualDraw::Rubber_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(12, 152);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 64);
			this->button6->TabIndex = 6;
			this->button6->Text = L" ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &VisualDraw::button6_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 64);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VisualDraw::button1_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(12, 222);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 64);
			this->button5->TabIndex = 5;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &VisualDraw::button5_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(12, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VisualDraw::button2_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(85, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 64);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VisualDraw::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(85, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VisualDraw::button3_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(12, 362);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 64);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Save";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &VisualDraw::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(85, 362);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 64);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &VisualDraw::button8_Click);
			// 
			// VisualDraw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(172, 438);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Rubber);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"VisualDraw";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"VisualDraw";
			this->Load += gcnew System::EventHandler(this, &VisualDraw::VisualDraw_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Color color = colorDialog1->Color;
			ptrVals->lineColor = Scalar(color.B, color.G, color.R);
		}
	}
		void changeMouse(cv::Point &location)
		{
			SetCursorPos(location.x + 15, location.y + 15);
		}
		void openCavas()
		{
			cv::VideoCapture cap(1);
			cap.set(CV_CAP_PROP_FRAME_WIDTH, 1920);
			cap.set(CV_CAP_PROP_FRAME_HEIGHT, 1080);
			int lastX = 0, lastY = 0, posX = 0, posY = 0; Width = cap.get(CV_CAP_PROP_FRAME_WIDTH), Height = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
			int x = 0, y = 0;
			Mat imgDrawing(Height, Width, CV_8UC3, Scalar(255, 255, 255)),frame,imgHSV(Height, Width, CV_8UC3),imgThreshold(Height, Width, CV_8UC3);
			while (1)
			{
				cap >> frame;
				cvtColor(frame, imgHSV, COLOR_BGR2HSV);
				inRange(imgHSV, Scalar(43, 77, 0), Scalar(66, 255, 255), imgThreshold);
				cv::medianBlur(imgThreshold, imgThreshold, 5);
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
					x = 0, y = 0;
				}
				else
				{
					Rect b = boundingRect(contours[0]);
					changeMouse(cv::Point(posX, posY));

					if (PEN && ptrVals->line)
					{
						if (x == 0 && y == 0)
						{
							x = lastX;
							y = lastY;
						}
						line(imgDrawing, cv::Point(x, y), cv::Point(posX, posY), ptrVals->lineColor, 1);
					}
					if (PEN && ptrVals->circle)
					{
						if (x == 0 && y == 0)
						{
							x = lastX;
							y = lastY;
						}
						int radius = sqrt(abs(posX - x) * abs(posX - x) + abs(posY - y) * abs(posY - y));

						circle(imgDrawing, cv::Point(x, y), radius, ptrVals->lineColor);
					}
					if (PEN && ptrVals->rectangle)
					{
						
						if (x == 0 && y == 0)
						{
							x = lastX;
							y = lastY;
						}

						rectangle(imgDrawing, cv::Point(x, y), cv::Point(posX, posY), ptrVals->lineColor);

					}


					if ( PEN && !ptrVals->rubber && ptrVals->brush)
						line(imgDrawing, cv::Point(posX, posY), cv::Point(lastX, lastY), ptrVals->lineColor, 2);
					if ( PEN && ptrVals->rubber)
						line(imgDrawing, cv::Point(posX, posY), cv::Point(lastX, lastY), cv::Scalar(255,255,255), 50);
				}

				//imshow("Video", frame);
				imshow("Drawing", imgDrawing);
				//DrawCVImage(pictureBox1, imgDrawing);
				//imshow("Threshold", imgThreshold);
					if (cv::waitKey(30) >= 0) break;
			}
		}
	private: System::Void VisualDraw_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		openCavas();
	}
private: System::Void Rubber_Click(System::Object^  sender, System::EventArgs^  e) {
	ptrVals->brush = true;
	ptrVals->rubber = true;
	ptrVals->rectangle = false;
	ptrVals->circle = false;
	ptrVals->line = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	ptrVals->rubber = false;
	ptrVals->rectangle = false;
	ptrVals->circle = false;
	ptrVals->brush = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	ptrVals->rectangle = true;
	ptrVals->circle = false;
	ptrVals->rubber = false;
	ptrVals->brush = false;
	ptrVals->line = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	ptrVals->circle = true;
	ptrVals->brush = false;
	ptrVals->rubber = false;
	ptrVals->rectangle = false;
	ptrVals->line = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	ptrVals->circle = false;
	ptrVals->line = true;
	ptrVals->brush = false;
	ptrVals->rubber = false;
	ptrVals->rectangle = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	imwrite("123.jpg", ptrVals->finalMAT);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
