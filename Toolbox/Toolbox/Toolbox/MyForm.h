#pragma once
#include<opencv2/opencv.hpp>
#include"iostream"
#include<msclr/marshal_cppstd.h>
#include<msclr/marshal.h>
//Name: Ahmed Ayman Ahmed Mahmoud   Sec:3     Id:18414
namespace Toolbox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cv;
	using namespace System::IO;
	using namespace msclr::interop;

	//path
	string impath1 = "F:\\E-learning\\Fifth Year\\DIP\\Toolbox\\Toolbox\\gon.jpg"; 
	string impath2 = "F:\\E-learning\\Fifth Year\\DIP\\Toolbox\\Toolbox\\background.jpeg";
	
	//src image
	
	Mat src = imread(impath1, 0);
	Mat src1 = imread(impath2, 0);


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	struct SDL_Texture;
	typedef struct SDL_Texture SDL_Texture;
	public ref class MyForm : public System::Windows::Forms::Form
	
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ showbutton;
	private: System::Windows::Forms::Button^ equalizebutton;
	private: System::Windows::Forms::Button^ negativebutton;
	private: System::Windows::Forms::Button^ resetbutton;
	private: System::Windows::Forms::Button^ flipbutton;
	private: System::Windows::Forms::TextBox^ flipvalue;
	private: System::Windows::Forms::Label^ fvalue;
	private: System::Windows::Forms::Button^ zoombutton;
	private: System::Windows::Forms::TextBox^ xvalue;
	private: System::Windows::Forms::TextBox^ yvalue;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ skewbutton;
	private: System::Windows::Forms::TextBox^ skvalue;

	private: System::Windows::Forms::Button^ rotationbutton;
	private: System::Windows::Forms::TextBox^ anglevalue;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ transbutton;
	private: System::Windows::Forms::TextBox^ txvalue;
	private: System::Windows::Forms::TextBox^ tyvalue;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ savebutton;
	private: System::Windows::Forms::Button^ blindbutton;
	private: System::Windows::Forms::TextBox^ srcpic;
	private: System::Windows::Forms::TextBox^ backpic;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ Logbutton;
	private: System::Windows::Forms::Button^ gammabutton;
	private: System::Windows::Forms::TextBox^ gamma;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ Bitplanbutton;
	private: System::Windows::Forms::TextBox^ plan;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ graylevbutton;
	private: System::Windows::Forms::TextBox^ Tmin;
	private: System::Windows::Forms::TextBox^ Tmax;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ tradationbutton;
	private: System::Windows::Forms::Button^ pyramidalbutton;
	private: System::Windows::Forms::Button^ circlefilterbutton;
	private: System::Windows::Forms::Button^ conebutton;
	private: System::Windows::Forms::Button^ openbutton;
	private: System::Windows::Forms::Button^ medfilterbutton;
	private: System::Windows::Forms::TextBox^ ksize;
	private: System::Windows::Forms::Label^ kernelsize;
	private: System::Windows::Forms::Button^ sobelbutton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ SVx;
	private: System::Windows::Forms::TextBox^ SVy;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ SVK;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ SobelHbutton;
	private: System::Windows::Forms::TextBox^ SHx;
	private: System::Windows::Forms::TextBox^ SHy;
	private: System::Windows::Forms::TextBox^ SHK;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ edgedetbutton;
	private: System::Windows::Forms::Button^ Thresholdbutton;
	private: System::Windows::Forms::TextBox^ thres;
	private: System::Windows::Forms::Label^ th;
	private: System::Windows::Forms::Button^ Compressbutton;
	private: System::Windows::Forms::TextBox^ ComV;
	private: System::Windows::Forms::Label^ Cvalue;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ sky3;
	private: System::Windows::Forms::TextBox^ sky2;
	private: System::Windows::Forms::TextBox^ skx2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ sky1;
	private: System::Windows::Forms::TextBox^ skx1;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ zy1;
private: System::Windows::Forms::TextBox^ zx1;
private: System::Windows::Forms::TextBox^ path;
private: System::Windows::Forms::TextBox^ path2;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ SobelXYbutton;
private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->showbutton = (gcnew System::Windows::Forms::Button());
			this->equalizebutton = (gcnew System::Windows::Forms::Button());
			this->negativebutton = (gcnew System::Windows::Forms::Button());
			this->resetbutton = (gcnew System::Windows::Forms::Button());
			this->flipbutton = (gcnew System::Windows::Forms::Button());
			this->flipvalue = (gcnew System::Windows::Forms::TextBox());
			this->fvalue = (gcnew System::Windows::Forms::Label());
			this->zoombutton = (gcnew System::Windows::Forms::Button());
			this->xvalue = (gcnew System::Windows::Forms::TextBox());
			this->yvalue = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->skewbutton = (gcnew System::Windows::Forms::Button());
			this->skvalue = (gcnew System::Windows::Forms::TextBox());
			this->rotationbutton = (gcnew System::Windows::Forms::Button());
			this->anglevalue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->transbutton = (gcnew System::Windows::Forms::Button());
			this->txvalue = (gcnew System::Windows::Forms::TextBox());
			this->tyvalue = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->savebutton = (gcnew System::Windows::Forms::Button());
			this->blindbutton = (gcnew System::Windows::Forms::Button());
			this->srcpic = (gcnew System::Windows::Forms::TextBox());
			this->backpic = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Logbutton = (gcnew System::Windows::Forms::Button());
			this->gammabutton = (gcnew System::Windows::Forms::Button());
			this->gamma = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Bitplanbutton = (gcnew System::Windows::Forms::Button());
			this->plan = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->graylevbutton = (gcnew System::Windows::Forms::Button());
			this->Tmin = (gcnew System::Windows::Forms::TextBox());
			this->Tmax = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tradationbutton = (gcnew System::Windows::Forms::Button());
			this->pyramidalbutton = (gcnew System::Windows::Forms::Button());
			this->circlefilterbutton = (gcnew System::Windows::Forms::Button());
			this->conebutton = (gcnew System::Windows::Forms::Button());
			this->openbutton = (gcnew System::Windows::Forms::Button());
			this->medfilterbutton = (gcnew System::Windows::Forms::Button());
			this->ksize = (gcnew System::Windows::Forms::TextBox());
			this->kernelsize = (gcnew System::Windows::Forms::Label());
			this->sobelbutton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SVx = (gcnew System::Windows::Forms::TextBox());
			this->SVy = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SVK = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SobelHbutton = (gcnew System::Windows::Forms::Button());
			this->SHx = (gcnew System::Windows::Forms::TextBox());
			this->SHy = (gcnew System::Windows::Forms::TextBox());
			this->SHK = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->edgedetbutton = (gcnew System::Windows::Forms::Button());
			this->Thresholdbutton = (gcnew System::Windows::Forms::Button());
			this->thres = (gcnew System::Windows::Forms::TextBox());
			this->th = (gcnew System::Windows::Forms::Label());
			this->Compressbutton = (gcnew System::Windows::Forms::Button());
			this->ComV = (gcnew System::Windows::Forms::TextBox());
			this->Cvalue = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zy1 = (gcnew System::Windows::Forms::TextBox());
			this->zx1 = (gcnew System::Windows::Forms::TextBox());
			this->sky3 = (gcnew System::Windows::Forms::TextBox());
			this->sky2 = (gcnew System::Windows::Forms::TextBox());
			this->skx2 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->sky1 = (gcnew System::Windows::Forms::TextBox());
			this->skx1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->SobelXYbutton = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->path = (gcnew System::Windows::Forms::TextBox());
			this->path2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// showbutton
			// 
			this->showbutton->Location = System::Drawing::Point(70, 14);
			this->showbutton->Name = L"showbutton";
			this->showbutton->Size = System::Drawing::Size(59, 21);
			this->showbutton->TabIndex = 0;
			this->showbutton->Text = L"Show";
			this->toolTip1->SetToolTip(this->showbutton, L"represented image");
			this->showbutton->UseVisualStyleBackColor = true;
			this->showbutton->Click += gcnew System::EventHandler(this, &MyForm::showbutton_Click);
			// 
			// equalizebutton
			// 
			this->equalizebutton->Location = System::Drawing::Point(4, 17);
			this->equalizebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->equalizebutton->Name = L"equalizebutton";
			this->equalizebutton->Size = System::Drawing::Size(76, 24);
			this->equalizebutton->TabIndex = 1;
			this->equalizebutton->Text = L"Equalize";
			this->toolTip1->SetToolTip(this->equalizebutton, L"increase intensities to solve problem of low contrast images");
			this->equalizebutton->UseVisualStyleBackColor = true;
			this->equalizebutton->Click += gcnew System::EventHandler(this, &MyForm::equalizebutton_Click);
			// 
			// negativebutton
			// 
			this->negativebutton->Location = System::Drawing::Point(4, 16);
			this->negativebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->negativebutton->Name = L"negativebutton";
			this->negativebutton->Size = System::Drawing::Size(70, 24);
			this->negativebutton->TabIndex = 2;
			this->negativebutton->Text = L"Negative";
			this->toolTip1->SetToolTip(this->negativebutton, L"reverse pixels (0 to 255) or (255 to 0)");
			this->negativebutton->UseVisualStyleBackColor = true;
			this->negativebutton->Click += gcnew System::EventHandler(this, &MyForm::negativebutton_Click);
			// 
			// resetbutton
			// 
			this->resetbutton->Location = System::Drawing::Point(135, 14);
			this->resetbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->resetbutton->Name = L"resetbutton";
			this->resetbutton->Size = System::Drawing::Size(58, 21);
			this->resetbutton->TabIndex = 3;
			this->resetbutton->Text = L"Reset";
			this->toolTip1->SetToolTip(this->resetbutton, L"return to image source");
			this->resetbutton->UseVisualStyleBackColor = true;
			this->resetbutton->Click += gcnew System::EventHandler(this, &MyForm::resetbutton_Click);
			// 
			// flipbutton
			// 
			this->flipbutton->Location = System::Drawing::Point(4, 17);
			this->flipbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->flipbutton->Name = L"flipbutton";
			this->flipbutton->Size = System::Drawing::Size(43, 19);
			this->flipbutton->TabIndex = 4;
			this->flipbutton->Text = L"Flip";
			this->toolTip1->SetToolTip(this->flipbutton, L"flip around x = 0, flip around y = 1, flip around xy = -1");
			this->flipbutton->UseVisualStyleBackColor = true;
			this->flipbutton->Click += gcnew System::EventHandler(this, &MyForm::flipbutton_Click);
			// 
			// flipvalue
			// 
			this->flipvalue->Location = System::Drawing::Point(52, 18);
			this->flipvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->flipvalue->Name = L"flipvalue";
			this->flipvalue->Size = System::Drawing::Size(19, 20);
			this->flipvalue->TabIndex = 5;
			// 
			// fvalue
			// 
			this->fvalue->AutoSize = true;
			this->fvalue->Location = System::Drawing::Point(74, 20);
			this->fvalue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->fvalue->Name = L"fvalue";
			this->fvalue->Size = System::Drawing::Size(39, 13);
			this->fvalue->TabIndex = 6;
			this->fvalue->Text = L"f-value";
			// 
			// zoombutton
			// 
			this->zoombutton->Location = System::Drawing::Point(25, 120);
			this->zoombutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->zoombutton->Name = L"zoombutton";
			this->zoombutton->Size = System::Drawing::Size(100, 21);
			this->zoombutton->TabIndex = 7;
			this->zoombutton->Text = L"Zoom";
			this->toolTip1->SetToolTip(this->zoombutton, L"to show the object from closer away");
			this->zoombutton->UseVisualStyleBackColor = true;
			this->zoombutton->Click += gcnew System::EventHandler(this, &MyForm::zoombutton_Click);
			// 
			// xvalue
			// 
			this->xvalue->Location = System::Drawing::Point(36, 159);
			this->xvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->xvalue->Name = L"xvalue";
			this->xvalue->Size = System::Drawing::Size(19, 20);
			this->xvalue->TabIndex = 8;
			// 
			// yvalue
			// 
			this->yvalue->Location = System::Drawing::Point(99, 159);
			this->yvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->yvalue->Name = L"yvalue";
			this->yvalue->Size = System::Drawing::Size(20, 20);
			this->yvalue->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 144);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"cols";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 144);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"rows";
			// 
			// skewbutton
			// 
			this->skewbutton->Location = System::Drawing::Point(4, 244);
			this->skewbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->skewbutton->Name = L"skewbutton";
			this->skewbutton->Size = System::Drawing::Size(72, 26);
			this->skewbutton->TabIndex = 12;
			this->skewbutton->Text = L"Skewing";
			this->toolTip1->SetToolTip(this->skewbutton, L"stretching image");
			this->skewbutton->UseVisualStyleBackColor = true;
			this->skewbutton->Click += gcnew System::EventHandler(this, &MyForm::skewbutton_Click);
			// 
			// skvalue
			// 
			this->skvalue->Location = System::Drawing::Point(80, 304);
			this->skvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->skvalue->Name = L"skvalue";
			this->skvalue->Size = System::Drawing::Size(20, 20);
			this->skvalue->TabIndex = 13;
			// 
			// rotationbutton
			// 
			this->rotationbutton->Location = System::Drawing::Point(4, 41);
			this->rotationbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rotationbutton->Name = L"rotationbutton";
			this->rotationbutton->Size = System::Drawing::Size(72, 20);
			this->rotationbutton->TabIndex = 15;
			this->rotationbutton->Text = L"Rotation";
			this->toolTip1->SetToolTip(this->rotationbutton, L"do rotating image by angle");
			this->rotationbutton->UseVisualStyleBackColor = true;
			this->rotationbutton->Click += gcnew System::EventHandler(this, &MyForm::rotationbutton_Click);
			// 
			// anglevalue
			// 
			this->anglevalue->Location = System::Drawing::Point(81, 41);
			this->anglevalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->anglevalue->Name = L"anglevalue";
			this->anglevalue->Size = System::Drawing::Size(18, 20);
			this->anglevalue->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(102, 43);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"angle";
			// 
			// transbutton
			// 
			this->transbutton->Location = System::Drawing::Point(25, 63);
			this->transbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->transbutton->Name = L"transbutton";
			this->transbutton->Size = System::Drawing::Size(100, 20);
			this->transbutton->TabIndex = 18;
			this->transbutton->Text = L"Transformation";
			this->toolTip1->SetToolTip(this->transbutton, L"do moving image by tx-value and ty-value");
			this->transbutton->UseVisualStyleBackColor = true;
			this->transbutton->Click += gcnew System::EventHandler(this, &MyForm::transbutton_Click);
			// 
			// txvalue
			// 
			this->txvalue->Location = System::Drawing::Point(38, 101);
			this->txvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txvalue->Name = L"txvalue";
			this->txvalue->Size = System::Drawing::Size(18, 20);
			this->txvalue->TabIndex = 19;
			// 
			// tyvalue
			// 
			this->tyvalue->Location = System::Drawing::Point(80, 101);
			this->tyvalue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tyvalue->Name = L"tyvalue";
			this->tyvalue->Size = System::Drawing::Size(18, 20);
			this->tyvalue->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 85);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"tx-value";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(74, 85);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"ty-value";
			// 
			// savebutton
			// 
			this->savebutton->Location = System::Drawing::Point(197, 14);
			this->savebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(50, 21);
			this->savebutton->TabIndex = 23;
			this->savebutton->Text = L"Save";
			this->toolTip1->SetToolTip(this->savebutton, L"Keep image");
			this->savebutton->UseVisualStyleBackColor = true;
			this->savebutton->Click += gcnew System::EventHandler(this, &MyForm::savebutton_Click);
			// 
			// blindbutton
			// 
			this->blindbutton->Location = System::Drawing::Point(25, 182);
			this->blindbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->blindbutton->Name = L"blindbutton";
			this->blindbutton->Size = System::Drawing::Size(100, 23);
			this->blindbutton->TabIndex = 24;
			this->blindbutton->Text = L"blinding";
			this->toolTip1->SetToolTip(this->blindbutton, L"to add two images together");
			this->blindbutton->UseVisualStyleBackColor = true;
			this->blindbutton->Click += gcnew System::EventHandler(this, &MyForm::blindbutton_Click);
			// 
			// srcpic
			// 
			this->srcpic->Location = System::Drawing::Point(36, 221);
			this->srcpic->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->srcpic->Name = L"srcpic";
			this->srcpic->Size = System::Drawing::Size(18, 20);
			this->srcpic->TabIndex = 25;
			// 
			// backpic
			// 
			this->backpic->Location = System::Drawing::Point(80, 221);
			this->backpic->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->backpic->Name = L"backpic";
			this->backpic->Size = System::Drawing::Size(18, 20);
			this->backpic->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 206);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"src-pic";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(70, 206);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 13);
			this->label8->TabIndex = 28;
			this->label8->Text = L"back-pic";
			// 
			// Logbutton
			// 
			this->Logbutton->Location = System::Drawing::Point(79, 17);
			this->Logbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Logbutton->Name = L"Logbutton";
			this->Logbutton->Size = System::Drawing::Size(57, 23);
			this->Logbutton->TabIndex = 29;
			this->Logbutton->Text = L"LogTrans";
			this->toolTip1->SetToolTip(this->Logbutton, L"increase brightness");
			this->Logbutton->UseVisualStyleBackColor = true;
			this->Logbutton->Click += gcnew System::EventHandler(this, &MyForm::Logbutton_Click);
			// 
			// gammabutton
			// 
			this->gammabutton->Location = System::Drawing::Point(4, 45);
			this->gammabutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gammabutton->Name = L"gammabutton";
			this->gammabutton->Size = System::Drawing::Size(70, 24);
			this->gammabutton->TabIndex = 30;
			this->gammabutton->Text = L"PowerTrans";
			this->toolTip1->SetToolTip(this->gammabutton, L"increase or decrease brightness by gamma");
			this->gammabutton->UseVisualStyleBackColor = true;
			this->gammabutton->Click += gcnew System::EventHandler(this, &MyForm::gammabutton_Click);
			// 
			// gamma
			// 
			this->gamma->Location = System::Drawing::Point(79, 50);
			this->gamma->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gamma->Name = L"gamma";
			this->gamma->Size = System::Drawing::Size(19, 20);
			this->gamma->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(101, 53);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"gam";
			// 
			// Bitplanbutton
			// 
			this->Bitplanbutton->Location = System::Drawing::Point(4, 72);
			this->Bitplanbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Bitplanbutton->Name = L"Bitplanbutton";
			this->Bitplanbutton->Size = System::Drawing::Size(70, 25);
			this->Bitplanbutton->TabIndex = 33;
			this->Bitplanbutton->Text = L"Bitplan";
			this->toolTip1->SetToolTip(this->Bitplanbutton, L"Converting a gray level image to a binary image");
			this->Bitplanbutton->UseVisualStyleBackColor = true;
			this->Bitplanbutton->Click += gcnew System::EventHandler(this, &MyForm::Bitplanbutton_Click);
			// 
			// plan
			// 
			this->plan->Location = System::Drawing::Point(79, 76);
			this->plan->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->plan->Name = L"plan";
			this->plan->Size = System::Drawing::Size(19, 20);
			this->plan->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(101, 79);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 35;
			this->label10->Text = L"bplan";
			// 
			// graylevbutton
			// 
			this->graylevbutton->Location = System::Drawing::Point(4, 98);
			this->graylevbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->graylevbutton->Name = L"graylevbutton";
			this->graylevbutton->Size = System::Drawing::Size(71, 22);
			this->graylevbutton->TabIndex = 36;
			this->graylevbutton->Text = L"Graylevel";
			this->toolTip1->SetToolTip(this->graylevbutton, L"Used when we need to make an object more clear");
			this->graylevbutton->UseVisualStyleBackColor = true;
			this->graylevbutton->Click += gcnew System::EventHandler(this, &MyForm::graylevbutton_Click);
			// 
			// Tmin
			// 
			this->Tmin->Location = System::Drawing::Point(101, 102);
			this->Tmin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Tmin->Name = L"Tmin";
			this->Tmin->Size = System::Drawing::Size(23, 20);
			this->Tmin->TabIndex = 37;
			// 
			// Tmax
			// 
			this->Tmax->Location = System::Drawing::Point(77, 102);
			this->Tmax->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Tmax->Name = L"Tmax";
			this->Tmax->Size = System::Drawing::Size(20, 20);
			this->Tmax->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(99, 123);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 39;
			this->label11->Text = L"T-min";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::GrayText;
			this->label12->Location = System::Drawing::Point(64, 123);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"T-max";
			// 
			// tradationbutton
			// 
			this->tradationbutton->Location = System::Drawing::Point(4, 43);
			this->tradationbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tradationbutton->Name = L"tradationbutton";
			this->tradationbutton->Size = System::Drawing::Size(80, 24);
			this->tradationbutton->TabIndex = 41;
			this->tradationbutton->Text = L"Gaussianfilter";
			this->toolTip1->SetToolTip(this->tradationbutton, L" do enhancing (remove spark noise)");
			this->tradationbutton->UseVisualStyleBackColor = true;
			this->tradationbutton->Click += gcnew System::EventHandler(this, &MyForm::tradationbutton_Click);
			// 
			// pyramidalbutton
			// 
			this->pyramidalbutton->Location = System::Drawing::Point(4, 97);
			this->pyramidalbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pyramidalbutton->Name = L"pyramidalbutton";
			this->pyramidalbutton->Size = System::Drawing::Size(76, 23);
			this->pyramidalbutton->TabIndex = 42;
			this->pyramidalbutton->Text = L"Pyramfilter";
			this->toolTip1->SetToolTip(this->pyramidalbutton, L" do enhancing (remove spark noise)");
			this->pyramidalbutton->UseVisualStyleBackColor = true;
			this->pyramidalbutton->Click += gcnew System::EventHandler(this, &MyForm::pyramidalbutton_Click);
			// 
			// circlefilterbutton
			// 
			this->circlefilterbutton->Location = System::Drawing::Point(4, 71);
			this->circlefilterbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->circlefilterbutton->Name = L"circlefilterbutton";
			this->circlefilterbutton->Size = System::Drawing::Size(76, 24);
			this->circlefilterbutton->TabIndex = 43;
			this->circlefilterbutton->Text = L"Circlefilter";
			this->toolTip1->SetToolTip(this->circlefilterbutton, L" do enhancing (remove spark noise)");
			this->circlefilterbutton->UseVisualStyleBackColor = true;
			this->circlefilterbutton->Click += gcnew System::EventHandler(this, &MyForm::circlefilterbutton_Click);
			// 
			// conebutton
			// 
			this->conebutton->Location = System::Drawing::Point(4, 120);
			this->conebutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->conebutton->Name = L"conebutton";
			this->conebutton->Size = System::Drawing::Size(76, 24);
			this->conebutton->TabIndex = 44;
			this->conebutton->Text = L"Conefilter";
			this->toolTip1->SetToolTip(this->conebutton, L" do enhancing (remove spark noise)");
			this->conebutton->UseVisualStyleBackColor = true;
			this->conebutton->Click += gcnew System::EventHandler(this, &MyForm::conebutton_Click);
			// 
			// openbutton
			// 
			this->openbutton->Location = System::Drawing::Point(4, 14);
			this->openbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->openbutton->Name = L"openbutton";
			this->openbutton->Size = System::Drawing::Size(61, 21);
			this->openbutton->TabIndex = 45;
			this->openbutton->Text = L"Open";
			this->toolTip1->SetToolTip(this->openbutton, L"choose the image from pc");
			this->openbutton->UseVisualStyleBackColor = true;
			this->openbutton->Click += gcnew System::EventHandler(this, &MyForm::openbutton_Click);
			// 
			// medfilterbutton
			// 
			this->medfilterbutton->Location = System::Drawing::Point(4, 149);
			this->medfilterbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->medfilterbutton->Name = L"medfilterbutton";
			this->medfilterbutton->Size = System::Drawing::Size(76, 21);
			this->medfilterbutton->TabIndex = 46;
			this->medfilterbutton->Text = L"Median";
			this->toolTip1->SetToolTip(this->medfilterbutton, L" do enhancing (remove spark noise and preserve the edges)");
			this->medfilterbutton->UseVisualStyleBackColor = true;
			this->medfilterbutton->Click += gcnew System::EventHandler(this, &MyForm::medfilterbutton_Click);
			// 
			// ksize
			// 
			this->ksize->Location = System::Drawing::Point(86, 150);
			this->ksize->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ksize->Name = L"ksize";
			this->ksize->Size = System::Drawing::Size(20, 20);
			this->ksize->TabIndex = 47;
			// 
			// kernelsize
			// 
			this->kernelsize->AutoSize = true;
			this->kernelsize->Location = System::Drawing::Point(104, 153);
			this->kernelsize->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->kernelsize->Name = L"kernelsize";
			this->kernelsize->Size = System::Drawing::Size(38, 13);
			this->kernelsize->TabIndex = 48;
			this->kernelsize->Text = L"K_size";
			// 
			// sobelbutton
			// 
			this->sobelbutton->Location = System::Drawing::Point(28, 173);
			this->sobelbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sobelbutton->Name = L"sobelbutton";
			this->sobelbutton->Size = System::Drawing::Size(94, 24);
			this->sobelbutton->TabIndex = 49;
			this->sobelbutton->Text = L"SobelV";
			this->toolTip1->SetToolTip(this->sobelbutton, L" try to find edge by finding sharp changes in intensities and increase spark nois"
				L"e (on x-axis)  ");
			this->sobelbutton->UseVisualStyleBackColor = true;
			this->sobelbutton->Click += gcnew System::EventHandler(this, &MyForm::sobelbutton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(266, 71);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(388, 347);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"picturebox to see output of openbutton");
			// 
			// SVx
			// 
			this->SVx->Location = System::Drawing::Point(28, 213);
			this->SVx->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SVx->Name = L"SVx";
			this->SVx->Size = System::Drawing::Size(17, 20);
			this->SVx->TabIndex = 51;
			// 
			// SVy
			// 
			this->SVy->Location = System::Drawing::Point(62, 213);
			this->SVy->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SVy->Name = L"SVy";
			this->SVy->Size = System::Drawing::Size(20, 20);
			this->SVy->TabIndex = 52;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 200);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(23, 13);
			this->label13->TabIndex = 53;
			this->label13->Text = L"svx";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(59, 200);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 13);
			this->label14->TabIndex = 54;
			this->label14->Text = L"svy";
			// 
			// SVK
			// 
			this->SVK->Location = System::Drawing::Point(101, 213);
			this->SVK->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SVK->Name = L"SVK";
			this->SVK->Size = System::Drawing::Size(22, 20);
			this->SVK->TabIndex = 55;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(86, 200);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 13);
			this->label15->TabIndex = 56;
			this->label15->Text = L"svk_size";
			// 
			// SobelHbutton
			// 
			this->SobelHbutton->Location = System::Drawing::Point(28, 236);
			this->SobelHbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SobelHbutton->Name = L"SobelHbutton";
			this->SobelHbutton->Size = System::Drawing::Size(94, 20);
			this->SobelHbutton->TabIndex = 57;
			this->SobelHbutton->Text = L"SobelH";
			this->toolTip1->SetToolTip(this->SobelHbutton, L" try to find edge by finding sharp changes in intensities and increase spark nois"
				L"e (on y-axis)  ");
			this->SobelHbutton->UseVisualStyleBackColor = true;
			this->SobelHbutton->Click += gcnew System::EventHandler(this, &MyForm::SobelHbutton_Click);
			// 
			// SHx
			// 
			this->SHx->Location = System::Drawing::Point(25, 274);
			this->SHx->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SHx->Name = L"SHx";
			this->SHx->Size = System::Drawing::Size(20, 20);
			this->SHx->TabIndex = 58;
			// 
			// SHy
			// 
			this->SHy->Location = System::Drawing::Point(59, 274);
			this->SHy->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SHy->Name = L"SHy";
			this->SHy->Size = System::Drawing::Size(22, 20);
			this->SHy->TabIndex = 59;
			// 
			// SHK
			// 
			this->SHK->Location = System::Drawing::Point(98, 274);
			this->SHK->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SHK->Name = L"SHK";
			this->SHK->Size = System::Drawing::Size(20, 20);
			this->SHK->TabIndex = 60;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(22, 258);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 13);
			this->label16->TabIndex = 61;
			this->label16->Text = L"shx";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(57, 258);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 13);
			this->label17->TabIndex = 62;
			this->label17->Text = L"shy";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(86, 258);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 13);
			this->label18->TabIndex = 63;
			this->label18->Text = L"shk_size";
			// 
			// edgedetbutton
			// 
			this->edgedetbutton->Location = System::Drawing::Point(4, 16);
			this->edgedetbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->edgedetbutton->Name = L"edgedetbutton";
			this->edgedetbutton->Size = System::Drawing::Size(102, 23);
			this->edgedetbutton->TabIndex = 64;
			this->edgedetbutton->Text = L"Edge Detection";
			this->toolTip1->SetToolTip(this->edgedetbutton, L" try to find edge by finding sharp changes in intensities and increase spark nois"
				L"e");
			this->edgedetbutton->UseVisualStyleBackColor = true;
			this->edgedetbutton->Click += gcnew System::EventHandler(this, &MyForm::edgedetbutton_Click);
			// 
			// Thresholdbutton
			// 
			this->Thresholdbutton->Location = System::Drawing::Point(4, 42);
			this->Thresholdbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Thresholdbutton->Name = L"Thresholdbutton";
			this->Thresholdbutton->Size = System::Drawing::Size(80, 22);
			this->Thresholdbutton->TabIndex = 65;
			this->Thresholdbutton->Text = L"Threshold";
			this->toolTip1->SetToolTip(this->Thresholdbutton, L"choose a specific value and make it the Threshold and what is before it is consid"
				L"er object");
			this->Thresholdbutton->UseVisualStyleBackColor = true;
			this->Thresholdbutton->Click += gcnew System::EventHandler(this, &MyForm::Thresholdbutton_Click);
			// 
			// thres
			// 
			this->thres->Location = System::Drawing::Point(86, 44);
			this->thres->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->thres->Name = L"thres";
			this->thres->Size = System::Drawing::Size(20, 20);
			this->thres->TabIndex = 66;
			// 
			// th
			// 
			this->th->AutoSize = true;
			this->th->Location = System::Drawing::Point(110, 46);
			this->th->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->th->Name = L"th";
			this->th->Size = System::Drawing::Size(22, 13);
			this->th->TabIndex = 67;
			this->th->Text = L"TH";
			// 
			// Compressbutton
			// 
			this->Compressbutton->Location = System::Drawing::Point(4, 17);
			this->Compressbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Compressbutton->Name = L"Compressbutton";
			this->Compressbutton->Size = System::Drawing::Size(62, 21);
			this->Compressbutton->TabIndex = 68;
			this->Compressbutton->Text = L"Compress";
			this->toolTip1->SetToolTip(this->Compressbutton, L"press something into a smaller space");
			this->Compressbutton->UseVisualStyleBackColor = true;
			this->Compressbutton->Click += gcnew System::EventHandler(this, &MyForm::Compressbutton_Click);
			// 
			// ComV
			// 
			this->ComV->Location = System::Drawing::Point(71, 20);
			this->ComV->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ComV->Name = L"ComV";
			this->ComV->Size = System::Drawing::Size(24, 20);
			this->ComV->TabIndex = 69;
			// 
			// Cvalue
			// 
			this->Cvalue->AutoSize = true;
			this->Cvalue->Location = System::Drawing::Point(96, 22);
			this->Cvalue->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Cvalue->Name = L"Cvalue";
			this->Cvalue->Size = System::Drawing::Size(47, 13);
			this->Cvalue->TabIndex = 70;
			this->Cvalue->Text = L"cvalue%";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox1->Controls->Add(this->openbutton);
			this->groupBox1->Controls->Add(this->showbutton);
			this->groupBox1->Controls->Add(this->resetbutton);
			this->groupBox1->Controls->Add(this->savebutton);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->groupBox1->Location = System::Drawing::Point(317, 1);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(251, 42);
			this->groupBox1->TabIndex = 72;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Master Keys";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->zy1);
			this->groupBox2->Controls->Add(this->zx1);
			this->groupBox2->Controls->Add(this->sky3);
			this->groupBox2->Controls->Add(this->sky2);
			this->groupBox2->Controls->Add(this->skx2);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->sky1);
			this->groupBox2->Controls->Add(this->skx1);
			this->groupBox2->Controls->Add(this->transbutton);
			this->groupBox2->Controls->Add(this->txvalue);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->tyvalue);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->flipbutton);
			this->groupBox2->Controls->Add(this->flipvalue);
			this->groupBox2->Controls->Add(this->fvalue);
			this->groupBox2->Controls->Add(this->rotationbutton);
			this->groupBox2->Controls->Add(this->anglevalue);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->zoombutton);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->xvalue);
			this->groupBox2->Controls->Add(this->yvalue);
			this->groupBox2->Controls->Add(this->blindbutton);
			this->groupBox2->Controls->Add(this->srcpic);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->backpic);
			this->groupBox2->Controls->Add(this->skewbutton);
			this->groupBox2->Controls->Add(this->skvalue);
			this->groupBox2->Location = System::Drawing::Point(745, 1);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(144, 329);
			this->groupBox2->TabIndex = 73;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Image Operations";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(74, 144);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(12, 13);
			this->label21->TabIndex = 82;
			this->label21->Text = L"y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 144);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 81;
			this->label3->Text = L"x";
			// 
			// zy1
			// 
			this->zy1->Location = System::Drawing::Point(73, 159);
			this->zy1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->zy1->Name = L"zy1";
			this->zy1->Size = System::Drawing::Size(18, 20);
			this->zy1->TabIndex = 80;
			// 
			// zx1
			// 
			this->zx1->Location = System::Drawing::Point(15, 159);
			this->zx1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->zx1->Name = L"zx1";
			this->zx1->Size = System::Drawing::Size(18, 20);
			this->zx1->TabIndex = 79;
			// 
			// sky3
			// 
			this->sky3->Location = System::Drawing::Point(107, 304);
			this->sky3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sky3->Name = L"sky3";
			this->sky3->Size = System::Drawing::Size(19, 20);
			this->sky3->TabIndex = 78;
			// 
			// sky2
			// 
			this->sky2->Location = System::Drawing::Point(107, 281);
			this->sky2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sky2->Name = L"sky2";
			this->sky2->Size = System::Drawing::Size(19, 20);
			this->sky2->TabIndex = 78;
			// 
			// skx2
			// 
			this->skx2->Location = System::Drawing::Point(80, 281);
			this->skx2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->skx2->Name = L"skx2";
			this->skx2->Size = System::Drawing::Size(20, 20);
			this->skx2->TabIndex = 78;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(105, 241);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(18, 13);
			this->label20->TabIndex = 78;
			this->label20->Text = L"py";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(81, 241);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(18, 13);
			this->label19->TabIndex = 78;
			this->label19->Text = L"px";
			// 
			// sky1
			// 
			this->sky1->Location = System::Drawing::Point(107, 258);
			this->sky1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sky1->Name = L"sky1";
			this->sky1->Size = System::Drawing::Size(19, 20);
			this->sky1->TabIndex = 78;
			// 
			// skx1
			// 
			this->skx1->Location = System::Drawing::Point(80, 258);
			this->skx1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->skx1->Name = L"skx1";
			this->skx1->Size = System::Drawing::Size(20, 20);
			this->skx1->TabIndex = 78;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox3->Controls->Add(this->negativebutton);
			this->groupBox3->Controls->Add(this->Logbutton);
			this->groupBox3->Controls->Add(this->gammabutton);
			this->groupBox3->Controls->Add(this->gamma);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->Bitplanbutton);
			this->groupBox3->Controls->Add(this->plan);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->graylevbutton);
			this->groupBox3->Controls->Add(this->Tmax);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->Tmin);
			this->groupBox3->Location = System::Drawing::Point(745, 333);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(143, 143);
			this->groupBox3->TabIndex = 74;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Trans and Slicing(Bright)";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox4->Controls->Add(this->SobelXYbutton);
			this->groupBox4->Controls->Add(this->equalizebutton);
			this->groupBox4->Controls->Add(this->tradationbutton);
			this->groupBox4->Controls->Add(this->circlefilterbutton);
			this->groupBox4->Controls->Add(this->pyramidalbutton);
			this->groupBox4->Controls->Add(this->conebutton);
			this->groupBox4->Controls->Add(this->medfilterbutton);
			this->groupBox4->Controls->Add(this->ksize);
			this->groupBox4->Controls->Add(this->kernelsize);
			this->groupBox4->Controls->Add(this->sobelbutton);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->SVx);
			this->groupBox4->Controls->Add(this->SHK);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->SHy);
			this->groupBox4->Controls->Add(this->SVy);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->SHx);
			this->groupBox4->Controls->Add(this->SVK);
			this->groupBox4->Controls->Add(this->SobelHbutton);
			this->groupBox4->Location = System::Drawing::Point(4, 1);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(151, 329);
			this->groupBox4->TabIndex = 75;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Image Enhancement";
			// 
			// SobelXYbutton
			// 
			this->SobelXYbutton->Location = System::Drawing::Point(29, 296);
			this->SobelXYbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->SobelXYbutton->Name = L"SobelXYbutton";
			this->SobelXYbutton->Size = System::Drawing::Size(92, 19);
			this->SobelXYbutton->TabIndex = 82;
			this->SobelXYbutton->Text = L"SobelXY";
			this->toolTip1->SetToolTip(this->SobelXYbutton, L" try to find edge by finding sharp changes in intensities and increase spark nois"
				L"e (on xy-axis)  ");
			this->SobelXYbutton->UseVisualStyleBackColor = true;
			this->SobelXYbutton->Click += gcnew System::EventHandler(this, &MyForm::SobelXYbutton_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox5->Controls->Add(this->edgedetbutton);
			this->groupBox5->Controls->Add(this->Thresholdbutton);
			this->groupBox5->Controls->Add(this->thres);
			this->groupBox5->Controls->Add(this->th);
			this->groupBox5->Location = System::Drawing::Point(4, 333);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Size = System::Drawing::Size(151, 73);
			this->groupBox5->TabIndex = 76;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Image Segmentation";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox6->Controls->Add(this->Compressbutton);
			this->groupBox6->Controls->Add(this->ComV);
			this->groupBox6->Controls->Add(this->Cvalue);
			this->groupBox6->Location = System::Drawing::Point(745, 479);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Size = System::Drawing::Size(144, 44);
			this->groupBox6->TabIndex = 77;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Image Compression";
			// 
			// path
			// 
			this->path->Location = System::Drawing::Point(50, 20);
			this->path->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->path->Name = L"path";
			this->path->Size = System::Drawing::Size(128, 20);
			this->path->TabIndex = 78;
			this->toolTip1->SetToolTip(this->path, L"source image path");
			this->path->TextChanged += gcnew System::EventHandler(this, &MyForm::textbox1_TextChanged);
			// 
			// path2
			// 
			this->path2->Location = System::Drawing::Point(50, 46);
			this->path2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->path2->Name = L"path2";
			this->path2->Size = System::Drawing::Size(128, 20);
			this->path2->TabIndex = 79;
			this->toolTip1->SetToolTip(this->path2, L"blinding image");
			this->path2->TextChanged += gcnew System::EventHandler(this, &MyForm::path2_TextChanged);
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::GrayText;
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->path);
			this->groupBox7->Controls->Add(this->path2);
			this->groupBox7->Location = System::Drawing::Point(4, 410);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Size = System::Drawing::Size(184, 75);
			this->groupBox7->TabIndex = 80;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Pathing";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(4, 46);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 13);
			this->label23->TabIndex = 81;
			this->label23->Text = L"Path2";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(4, 20);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(35, 13);
			this->label22->TabIndex = 80;
			this->label22->Text = L"Path1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label24->Location = System::Drawing::Point(304, 461);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(319, 13);
			this->label24->TabIndex = 81;
			this->label24->Text = L"User Friendly when stoping on any button, you show what it doing ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(894, 527);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Toolbox";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ img_path;
		

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void showbutton_Click(System::Object^ sender, System::EventArgs^ e) {
			Mat src = imread(impath1, 0);
			namedWindow("Image", 0);
			imshow("Image", src);

		

		

		
	}
	private: System::Void equalizebutton_Click(System::Object^ sender, System::EventArgs^ e){
		//convert from system string to cv string
		//marshal_context^ context = gcnew marshal_context();
		//const char* src_path = context->marshal_as<const char*>(img_path);
		//image processing 
		
		//src = imread(src_path, 0);

		equalizeHist(src, src);
		namedWindow("Image", 0);
		imshow("Image", src);
	
		//imwrite(src_path, src);
		//reload image 
		//pictureBox1->ImageLocation = img_path;
	}

	private: System::Void negativebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//convert from system string to cv string
		//marshal_context^ context = gcnew marshal_context();
		//const char* src_path = context->marshal_as<const char*>(img_path);
		//image processing 
		//Mat src;
		//src = imread(src_path, 0);
	

		for (int i = 0; i < src.rows; i++) {
			for (int j = 0; j < src.cols; j++) {
				src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
			}
		}
		namedWindow("Image", 0);
		imshow("Image", src);
		//imwrite(src_path, src);
		//reload image 
		//pictureBox1->ImageLocation = img_path;
	}
    private: System::Void resetbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	src = imread(impath1, 0);
	namedWindow("Image", 0);
	imshow("Image", src);
	}
	private: System::Void flipbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//convert from system string to cv string
		//marshal_context^ context = gcnew marshal_context();
		//const char* src_path = context->marshal_as<const char*>(img_path);
		//image processing 
		//Mat src;
		//src = imread(src_path, 0);

		int fv = Convert::ToInt32(flipvalue->Text);
		//flip around x = 0
		//flip around y = 1
		//flip around xy = -1
		flip(src, src, fv);
		namedWindow("Image", 0);
		imshow("Image", src);	
	}

	private: System::Void zoombutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//convert from system string to cv string
		//marshal_context^ context = gcnew marshal_context();
		//const char* src_path = context->marshal_as<const char*>(img_path);
		//image processing 
		//Mat src;
		//src = imread(src_path, 0);


		double zx = Convert::ToDouble(xvalue->Text);
		double zy = Convert::ToDouble(yvalue->Text);
		double ZX1 = Convert::ToDouble(zx1->Text);
		double ZY2 = Convert::ToDouble(zy1->Text);
		Mat zoom = src(Rect(ZX1, ZY2, zy , zx ));
		resize(zoom, src,cv::Size(), 2, 2, 0);
		namedWindow("Image", 0);
		imshow("Image", src);
	}
private: System::Void skewbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);


	int x1 = Convert::ToInt32(skx1->Text);
	int y1 = Convert::ToInt32(sky2->Text);
	int x2 = Convert::ToInt32(skx2->Text);
	int y2 = Convert::ToInt32(sky2->Text);
	int x3 = Convert::ToInt32(skvalue->Text);
	int y3 = Convert::ToInt32(sky3->Text);
	Point2f src_p[3];
	src_p[0] = Point2f(x1, y1);
	src_p[1] = Point2f(x2, y2);
	src_p[2] = Point2f(x3, y3);
	Point2f dst_p[3];
	dst_p[0] = Point2f(0, 0);
	dst_p[1] = Point2f(src.cols - 1, 0);
	dst_p[2] = Point2f(0, src.rows - 1);
	Mat SK = getAffineTransform(src_p, dst_p);
	warpAffine(src, src, SK, src.size());
	namedWindow("Image", 0);
	imshow("Image", src);


	}
private: System::Void rotationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	double angle = Convert::ToDouble(anglevalue->Text);


	resize(src, src, cv::Size(src.cols,src.cols));
	Mat R = getRotationMatrix2D(Point2f(src.cols / 2, src.rows / 2), angle, 1);
	warpAffine(src, src, R, src.size());
	namedWindow("Image", 0);
	imshow("Image", src);
	}
private: System::Void transbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	

	int tx = Convert::ToInt32(txvalue->Text);
	int ty = Convert::ToInt32(tyvalue->Text);
	Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
	warpAffine(src, src, TM, src.size());
	namedWindow("Image", 0);
	imshow("Image", src);
	}
	private: System::Void savebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		//convert from system string to cv string
		//marshal_context^ context = gcnew marshal_context();
		//const char* src_path = context->marshal_as<const char*>(img_path);
		//image processing 
		//Mat src;
		//src = imread(src_path, 0);
	

		imwrite("New.jpg", src);
	}
private: System::Void blindbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src,src1;
	//src = imread(src_path, 0);
	//src1 = imread("background.jpeg",0); 
	Mat src = imread(impath1, 0);
	Mat src1 = imread(impath2, 0);//background
	double sp = Convert::ToDouble(srcpic->Text);
	double bp = Convert::ToDouble(backpic->Text);
	//namedWindow("background", 0);
	//imshow("background", src1);
	Mat dst(src.rows, src.cols, CV_8UC1);
	resize(src1, src1, cv::Size(src.cols, src.rows));
	for (int i = 0; i < src.rows; i++) {
		for (int j = 0; j < src.cols; j++) {
			dst.at<uchar>(i, j) = src.at<uchar>(i, j) * sp + src1.at<uchar>(i, j) * bp;
		}
	}
	src = dst;
	namedWindow("Image", 0);
	imshow("Image", src);
	}

private: System::Void Logbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	

	src.convertTo(src, CV_32F);
	src = src + 1;
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
			src.at<float>(i, j) = log(src.at<float>(i, j));
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void gammabutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	double g = Convert::ToDouble(gamma->Text);


	src.convertTo(src, CV_32F);
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
			src.at<float>(i, j) = powf(src.at<float>(i, j), g);
	normalize(src, src, 0, 255, NORM_MINMAX);
	convertScaleAbs(src, src);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void Bitplanbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);


	int p = Convert::ToInt32(plan->Text);
	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
		{
			if (src.at<uchar>(i, j) & p)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = 0;
		}
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void graylevbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	int tmin = Convert::ToInt32(Tmin->Text);
	int tmax = Convert::ToInt32(Tmax->Text);


	for (int i = 0; i < src.rows; i++)
		for (int j = 0; j < src.cols; j++)
		{
			if (src.at<uchar>(i, j) > tmin && src.at<uchar>(i, j) < tmax)
				src.at<uchar>(i, j) = 255;
			else src.at<uchar>(i, j) = src.at<uchar>(i, j);
		}
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void tradationbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	
	// i convert tradationbutton to gaussianbutton
	//Gaussian


	Mat kernel_G = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	kernel_G = kernel_G / 16;
	cout << endl << kernel_G << endl;
	filter2D(src, src, CV_8UC1, kernel_G);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void pyramidalbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);

	Mat kernel_p = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);
	kernel_p = kernel_p / 81;
	cout << endl << kernel_p << endl;
	filter2D(src, src, CV_8UC1, kernel_p);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void circlefilterbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);


	Mat kernel_c = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	kernel_c = kernel_c / 21;
	cout << endl << kernel_c << endl;
	filter2D(src, src, CV_8UC1, kernel_c);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void conebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	

	Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
	kernel_co = kernel_co / 25;
	cout << endl << kernel_co << endl;
	filter2D(src, src, CV_8UC1, kernel_co);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void openbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ img = gcnew OpenFileDialog();
	img->InitialDirectory = "C:\\ | F:\\ | E:\\";
	img->Filter = "All files (*.*)|(*.*)|JPG|*.jpg|JPEG|*.jpeg|GIF|*.gif|PNG|*.png";
	img->Multiselect = true;
	img->FilterIndex = 2;
	img->RestoreDirectory = true;
	if (img->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBox1->ImageLocation = img->FileName;
		img_path = img->FileName;

	}
	
}
private: System::Void medfilterbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);


	int KS = Convert::ToInt32(ksize->Text);
	medianBlur(src, src, KS);
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void sobelbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//convert from system string to cv string
	//marshal_context^ context = gcnew marshal_context();
	//const char* src_path = context->marshal_as<const char*>(img_path);
	//image processing 
	//Mat src;
	//src = imread(src_path, 0);
	//Sobel Vertical


	int	Vx = Convert::ToInt32(SVx->Text);
	int Vy = Convert::ToInt32(SVy->Text);
	int Vk = Convert::ToInt32(SVK->Text);
	Mat dst_V;
	Sobel(src, dst_V, CV_16UC1, Vx, Vy, Vk);
	convertScaleAbs(dst_V, dst_V);
	src = dst_V;
	namedWindow("Image", 0);
	imshow("Image", src);
	//addWeighted(dst_V, 1, dst_H, 1, 0, dstS);
	//src = dstS;
	//namedWindow("Image", 0);
	//imshow("Image", src);
	
}
private: System::Void SobelHbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//sobel Horzintal


	int	Hx = Convert::ToInt32(SHx->Text);
	int Hy = Convert::ToInt32(SHy->Text);
	int Hk = Convert::ToInt32(SHK->Text);
	Mat dst_H;
	Sobel(src, dst_H, CV_16UC1, 0, 1, 5);
	convertScaleAbs(dst_H, dst_H);
	src = dst_H;
	namedWindow("Image", 0);
	imshow("Image", src);
}
private: System::Void edgedetbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Laplacian


	Mat kernel_L = (Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);
	filter2D(src, src, CV_8UC1, kernel_L);
	namedWindow("Image", 0);
	imshow("Image", src);

}
private: System::Void Thresholdbutton_Click(System::Object^ sender, System::EventArgs^ e) {


	int th = Convert::ToInt32(thres->Text); 

		for (int r = 0; r < src.rows; r++)
		{
			for (int c = 0; c < src.cols; c++)
			{
				if (src.at<uchar>(r, c) > th)
					src.at<uchar>(r, c) = 255;
				else
					src.at<uchar>(r, c) = 0;
			}
		}
		namedWindow("Image", 0);
		imshow("Image", src);

}
private: System::Void Compressbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::vector<int> params;
	params.push_back(CV_IMWRITE_JPEG_QUALITY);
	params.push_back(Convert::ToInt32(ComV->Text));   // 1% to 100% = Decompress

	imwrite("compress.jpg", src, params);
	Mat compressImg = imread("compress.jpg");
	namedWindow("Image", 0);
	imshow("Image", compressImg);
}

private: System::Void textbox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	impath1 = context.marshal_as<string>(path->Text);
	Mat src = imread(impath1, 0);
}
private: System::Void path2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	impath2 = context.marshal_as<string>(path2->Text);
	Mat src = imread(impath2, 0);
}
private: System::Void SobelXYbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Mat dstS;
	addWeighted(src, 1, src, 1, 0, dstS);
	src = dstS;
	namedWindow("Image", 0);
	imshow("Image", src);
}
};
}
