#pragma once

namespace MyShoppingCartProjects {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		double water = 5.85;
		double cookies = 3.54;
		double milk = 4.21;
		double ham = 2.34;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;



		   double bread = 1.78;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTotal;
	private: System::Windows::Forms::Button^ btnLists;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnExit;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ rtLists;
	private: System::Windows::Forms::NumericUpDown^ numBread;
	private: System::Windows::Forms::Label^ lblBread;


	private: System::Windows::Forms::NumericUpDown^ numMilk;
	private: System::Windows::Forms::NumericUpDown^ numHam;


	private: System::Windows::Forms::Label^ lblMilk;
	private: System::Windows::Forms::Label^ lblHam;


	private: System::Windows::Forms::NumericUpDown^ numCookies;
	private: System::Windows::Forms::Label^ lblNumItems;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lblCookies;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numWater;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblWater;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblCostItem;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnLists = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->rtLists = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->numBread = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblBread = (gcnew System::Windows::Forms::Label());
			this->numMilk = (gcnew System::Windows::Forms::NumericUpDown());
			this->numHam = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblMilk = (gcnew System::Windows::Forms::Label());
			this->lblHam = (gcnew System::Windows::Forms::Label());
			this->numCookies = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblCostItem = (gcnew System::Windows::Forms::Label());
			this->lblNumItems = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblCookies = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numWater = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblWater = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHam))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCookies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWater))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Coral;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(32, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1336, 640);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->btnTotal);
			this->panel5->Controls->Add(this->btnLists);
			this->panel5->Controls->Add(this->btnPrint);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Controls->Add(this->btnExit);
			this->panel5->Location = System::Drawing::Point(15, 550);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1298, 84);
			this->panel5->TabIndex = 0;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// btnTotal
			// 
			this->btnTotal->BackColor = System::Drawing::Color::Coral;
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->Location = System::Drawing::Point(11, 11);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(250, 70);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"Total";
			this->btnTotal->UseVisualStyleBackColor = false;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::btnTotal_Click);
			// 
			// btnLists
			// 
			this->btnLists->BackColor = System::Drawing::Color::Coral;
			this->btnLists->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLists->Location = System::Drawing::Point(267, 11);
			this->btnLists->Name = L"btnLists";
			this->btnLists->Size = System::Drawing::Size(250, 70);
			this->btnLists->TabIndex = 0;
			this->btnLists->Text = L"Lists";
			this->btnLists->UseVisualStyleBackColor = false;
			this->btnLists->Click += gcnew System::EventHandler(this, &MyForm::btnLists_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->BackColor = System::Drawing::Color::Coral;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(533, 11);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(250, 70);
			this->btnPrint->TabIndex = 0;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = false;
			this->btnPrint->Click += gcnew System::EventHandler(this, &MyForm::btnPrint_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Coral;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(789, 11);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(250, 70);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Coral;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1045, 11);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(250, 70);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->rtLists);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(865, 108);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(461, 423);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// rtLists
			// 
			this->rtLists->Location = System::Drawing::Point(14, 55);
			this->rtLists->Name = L"rtLists";
			this->rtLists->Size = System::Drawing::Size(434, 355);
			this->rtLists->TabIndex = 0;
			this->rtLists->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(150, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 36);
			this->label3->TabIndex = 0;
			this->label3->Text = L"List";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->numBread);
			this->panel3->Controls->Add(this->lblBread);
			this->panel3->Controls->Add(this->numMilk);
			this->panel3->Controls->Add(this->numHam);
			this->panel3->Controls->Add(this->lblMilk);
			this->panel3->Controls->Add(this->lblHam);
			this->panel3->Controls->Add(this->numCookies);
			this->panel3->Controls->Add(this->lblCostItem);
			this->panel3->Controls->Add(this->lblNumItems);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->lblCookies);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->numWater);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->lblWater);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(28, 121);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(831, 423);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Location = System::Drawing::Point(197, 239);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(75, 65);
			this->panel9->TabIndex = 5;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Location = System::Drawing::Point(197, 304);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(75, 65);
			this->panel10->TabIndex = 6;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Location = System::Drawing::Point(197, 174);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(75, 65);
			this->panel8->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(197, 109);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(75, 65);
			this->panel7->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(197, 42);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(75, 65);
			this->panel6->TabIndex = 2;
			// 
			// numBread
			// 
			this->numBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBread->Location = System::Drawing::Point(314, 315);
			this->numBread->Name = L"numBread";
			this->numBread->Size = System::Drawing::Size(181, 45);
			this->numBread->TabIndex = 1;
			this->numBread->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numBread->ValueChanged += gcnew System::EventHandler(this, &MyForm::numBread_ValueChanged);
			// 
			// lblBread
			// 
			this->lblBread->BackColor = System::Drawing::Color::White;
			this->lblBread->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblBread->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBread->Location = System::Drawing::Point(526, 300);
			this->lblBread->Name = L"lblBread";
			this->lblBread->Size = System::Drawing::Size(278, 39);
			this->lblBread->TabIndex = 0;
			this->lblBread->Text = L"$0.00";
			this->lblBread->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// numMilk
			// 
			this->numMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMilk->Location = System::Drawing::Point(314, 194);
			this->numMilk->Name = L"numMilk";
			this->numMilk->Size = System::Drawing::Size(181, 45);
			this->numMilk->TabIndex = 1;
			this->numMilk->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numMilk->ValueChanged += gcnew System::EventHandler(this, &MyForm::numMilk_ValueChanged);
			// 
			// numHam
			// 
			this->numHam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numHam->Location = System::Drawing::Point(314, 254);
			this->numHam->Name = L"numHam";
			this->numHam->Size = System::Drawing::Size(181, 45);
			this->numHam->TabIndex = 1;
			this->numHam->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numHam->ValueChanged += gcnew System::EventHandler(this, &MyForm::numHam_ValueChanged);
			// 
			// lblMilk
			// 
			this->lblMilk->BackColor = System::Drawing::Color::White;
			this->lblMilk->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMilk->Location = System::Drawing::Point(526, 177);
			this->lblMilk->Name = L"lblMilk";
			this->lblMilk->Size = System::Drawing::Size(278, 39);
			this->lblMilk->TabIndex = 0;
			this->lblMilk->Text = L"$0.00";
			this->lblMilk->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblHam
			// 
			this->lblHam->BackColor = System::Drawing::Color::White;
			this->lblHam->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblHam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHam->Location = System::Drawing::Point(526, 232);
			this->lblHam->Name = L"lblHam";
			this->lblHam->Size = System::Drawing::Size(278, 39);
			this->lblHam->TabIndex = 0;
			this->lblHam->Text = L"$0.00";
			this->lblHam->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// numCookies
			// 
			this->numCookies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCookies->Location = System::Drawing::Point(314, 122);
			this->numCookies->Name = L"numCookies";
			this->numCookies->Size = System::Drawing::Size(181, 45);
			this->numCookies->TabIndex = 1;
			this->numCookies->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numCookies->ValueChanged += gcnew System::EventHandler(this, &MyForm::numCookies_ValueChanged);
			// 
			// lblCostItem
			// 
			this->lblCostItem->BackColor = System::Drawing::Color::White;
			this->lblCostItem->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCostItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCostItem->Location = System::Drawing::Point(526, 371);
			this->lblCostItem->Name = L"lblCostItem";
			this->lblCostItem->Size = System::Drawing::Size(278, 39);
			this->lblCostItem->TabIndex = 0;
			this->lblCostItem->Text = L"$0.00";
			this->lblCostItem->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblCostItem->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// lblNumItems
			// 
			this->lblNumItems->BackColor = System::Drawing::Color::White;
			this->lblNumItems->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblNumItems->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumItems->Location = System::Drawing::Point(195, 372);
			this->lblNumItems->Name = L"lblNumItems";
			this->lblNumItems->Size = System::Drawing::Size(309, 39);
			this->lblNumItems->TabIndex = 0;
			this->lblNumItems->Text = L"0";
			this->lblNumItems->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblNumItems->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 372);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 38);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Total Cost";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(24, 322);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 38);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Bread";
			// 
			// lblCookies
			// 
			this->lblCookies->BackColor = System::Drawing::Color::White;
			this->lblCookies->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCookies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCookies->Location = System::Drawing::Point(526, 109);
			this->lblCookies->Name = L"lblCookies";
			this->lblCookies->Size = System::Drawing::Size(278, 39);
			this->lblCookies->TabIndex = 0;
			this->lblCookies->Text = L"$0.00";
			this->lblCookies->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 38);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Milk";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 38);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ham";
			// 
			// numWater
			// 
			this->numWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numWater->Location = System::Drawing::Point(314, 53);
			this->numWater->Name = L"numWater";
			this->numWater->Size = System::Drawing::Size(181, 45);
			this->numWater->TabIndex = 1;
			this->numWater->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numWater->ValueChanged += gcnew System::EventHandler(this, &MyForm::numWater_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 38);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Cookies";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// lblWater
			// 
			this->lblWater->BackColor = System::Drawing::Color::White;
			this->lblWater->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWater->Location = System::Drawing::Point(526, 40);
			this->lblWater->Name = L"lblWater";
			this->lblWater->Size = System::Drawing::Size(278, 39);
			this->lblWater->TabIndex = 0;
			this->lblWater->Text = L"$0.00";
			this->lblWater->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(572, 1);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(200, 36);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Cost of Items";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(248, 1);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(246, 36);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Number of Items";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(25, 1);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(158, 36);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Cart Items";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 38);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Water";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(28, 18);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1298, 84);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel11->Location = System::Drawing::Point(993, 6);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(97, 78);
			this->panel11->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Coral;
			this->label1->Location = System::Drawing::Point(70, -7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(852, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Shopping Cart System";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 741);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBread))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numMilk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numHam))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCookies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numWater))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			System::Windows::Forms::DialogResult iExit;

			iExit = MessageBox::Show("Confirm if you want to exit", "Shopping Cart Systems",MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);
			if (iExit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		numWater->Value = 0;
		numCookies->Value = 0;
		numMilk->Value = 0;
		numHam->Value = 0;
		numBread->Value = 0;

		rtLists->Clear();
		lblCookies->Text = "$0.00";
		lblWater->Text = "$0.00";
		lblMilk->Text = "$0.00";
		lblHam->Text = "$0.00";
		lblBread->Text = "$0.00";
		lblCostItem->Text = "$0.00";
		lblNumItems->Text = "0";
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numWater_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numWater->Value);
	lblWater->Text = String::Format("{0:c2}", i * water);
}
private: System::Void numCookies_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numCookies->Value);
	lblCookies->Text = String::Format("{0:c2}", i * cookies);
}
private: System::Void numMilk_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numMilk->Value);
	lblMilk->Text = String::Format("{0:c2}", i * milk);
}
private: System::Void numHam_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numHam->Value);
	lblHam->Text = String::Format("{0:c2}", i * ham);
}
private: System::Void numBread_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	double i = Convert::ToDouble(numBread->Value);
	lblBread->Text = String::Format("{0:c2}", i * bread);
}
private: System::Void btnTotal_Click(System::Object^ sender, System::EventArgs^ e) {

	double q[7], p[7];

	q[0] = Convert::ToDouble(numWater->Value);
	q[1] = Convert::ToDouble(numCookies->Value);
	q[2] = Convert::ToDouble(numMilk->Value);
	q[3] = Convert::ToDouble(numHam->Value);
	q[4] = Convert::ToDouble(numBread->Value);

	q[5] = q[0] + q[1] + q[2] + q[3] + q[4];
	lblNumItems->Text = Convert::ToString(q[5]);

	p[0] = q[0] * water;
	p[1] = q[1] * cookies;
	p[2] = q[2] * milk;
	p[3] = q[3] * ham;
	p[4] = q[4] * bread;

	p[5] = p[0] + p[1] + p[2] + p[3] + p[4];
	lblCostItem->Text = String::Format("{0:c2}", p[5]);

}
private: System::Void btnLists_Click(System::Object^ sender, System::EventArgs^ e) {

	rtLists->Clear();

	rtLists->AppendText(label15->Text + "\t" + "\t" + label16->Text + "\t" + "\t" + label17->Text + "\n" + "\n");
	rtLists->AppendText(label2->Text + "\t" + "\t" + "\t" + numWater->Value + "\t" + "\t" +  lblWater->Text + "\n" + "\n");
	rtLists->AppendText(label4->Text + "\t" + "\t" + "\t" + numCookies->Value + "\t" + "\t" +  lblCookies->Text + "\n" + "\n");
	rtLists->AppendText(label6->Text + "\t" + "\t" + numMilk->Value + "\t" + "\t" + "\t" + lblMilk->Text + "\n" + "\n");
	rtLists->AppendText(label8->Text + "\t" + "\t" + "\t" + numHam->Value + "\t" + "\t" +  lblHam->Text + "\n" + "\n");
	rtLists->AppendText(label9->Text + "\t" + "\t" + "\t" + numBread->Value + "\t" + "\t" +  lblBread->Text + "\n" + "\n");

	rtLists->AppendText(label12->Text + "\t" +  lblNumItems->Text + "\t" + "\t" + "\t" + lblCostItem->Text + "\n" + "\n");

	


}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {

	printPreviewDialog1->ShowDialog();

}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Time New Rome", 14, FontStyle::Regular);

	e->Graphics->DrawString(rtLists->Text, fntString, Brushes::BlueViolet, 100, 100);

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

