#pragma once
namespace SPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminPanal
	/// </summary>
	public ref class adminPanal : public System::Windows::Forms::Form
	{
	public:
		adminPanal(void)
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
		~adminPanal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  data;
	private: System::Windows::Forms::GroupBox^  ne;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  prd;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  C_N;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  add;
	private: System::Windows::Forms::ListBox^  pre;



	private: System::Windows::Forms::ListBox^  all;
	private: System::Windows::Forms::Button^  Edit;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Course_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Period;
	private: System::Windows::Forms::Button^  remv;
	private: System::Windows::Forms::TextBox^  ser_box;
	private: System::Windows::Forms::Button^  ser;
	private: System::Windows::Forms::GroupBox^  edit_box;
	private: System::Windows::Forms::Button^  ED;


	private: System::Windows::Forms::Button^  remv2;
	private: System::Windows::Forms::ListBox^  pre2;
	private: System::Windows::Forms::Button^  add2;
	private: System::Windows::Forms::ListBox^  all2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  perd;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  co_n;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  nw;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(adminPanal::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->Course_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ne = (gcnew System::Windows::Forms::GroupBox());
			this->edit_box = (gcnew System::Windows::Forms::GroupBox());
			this->ED = (gcnew System::Windows::Forms::Button());
			this->remv2 = (gcnew System::Windows::Forms::Button());
			this->pre2 = (gcnew System::Windows::Forms::ListBox());
			this->add2 = (gcnew System::Windows::Forms::Button());
			this->all2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->perd = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->co_n = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->remv = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->pre = (gcnew System::Windows::Forms::ListBox());
			this->all = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->prd = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->C_N = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->ser_box = (gcnew System::Windows::Forms::TextBox());
			this->ser = (gcnew System::Windows::Forms::Button());
			this->nw = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->ne->SuspendLayout();
			this->edit_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(288, 476);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(263, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add new course";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminPanal::button1_Click);
			// 
			// data
			// 
			this->data->AllowUserToDeleteRows = false;
			this->data->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Course_name, this->Period });
			this->data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->data->Location = System::Drawing::Point(620, 66);
			this->data->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->data->Name = L"data";
			this->data->RowTemplate->Height = 24;
			this->data->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data->Size = System::Drawing::Size(653, 555);
			this->data->TabIndex = 2;
			// 
			// Course_name
			// 
			this->Course_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Course_name->HeaderText = L"Course_name";
			this->Course_name->Name = L"Course_name";
			this->Course_name->ReadOnly = true;
			// 
			// Period
			// 
			this->Period->HeaderText = L"Period";
			this->Period->Name = L"Period";
			this->Period->ReadOnly = true;
			// 
			// ne
			// 
			this->ne->BackColor = System::Drawing::Color::Transparent;
			this->ne->Controls->Add(this->edit_box);
			this->ne->Controls->Add(this->remv);
			this->ne->Controls->Add(this->add);
			this->ne->Controls->Add(this->pre);
			this->ne->Controls->Add(this->all);
			this->ne->Controls->Add(this->label3);
			this->ne->Controls->Add(this->prd);
			this->ne->Controls->Add(this->label2);
			this->ne->Controls->Add(this->C_N);
			this->ne->Controls->Add(this->label1);
			this->ne->Controls->Add(this->button1);
			this->ne->Location = System::Drawing::Point(15, 85);
			this->ne->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ne->Name = L"ne";
			this->ne->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ne->Size = System::Drawing::Size(577, 555);
			this->ne->TabIndex = 3;
			this->ne->TabStop = false;
			this->ne->Enter += gcnew System::EventHandler(this, &adminPanal::groupBox1_Enter);
			// 
			// edit_box
			// 
			this->edit_box->BackColor = System::Drawing::Color::Transparent;
			this->edit_box->Controls->Add(this->ED);
			this->edit_box->Controls->Add(this->remv2);
			this->edit_box->Controls->Add(this->pre2);
			this->edit_box->Controls->Add(this->add2);
			this->edit_box->Controls->Add(this->all2);
			this->edit_box->Controls->Add(this->label4);
			this->edit_box->Controls->Add(this->perd);
			this->edit_box->Controls->Add(this->label5);
			this->edit_box->Controls->Add(this->co_n);
			this->edit_box->Controls->Add(this->label6);
			this->edit_box->Location = System::Drawing::Point(0, 0);
			this->edit_box->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_box->Name = L"edit_box";
			this->edit_box->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_box->Size = System::Drawing::Size(589, 555);
			this->edit_box->TabIndex = 12;
			this->edit_box->TabStop = false;
			this->edit_box->Visible = false;
			// 
			// ED
			// 
			this->ED->BackColor = System::Drawing::Color::Transparent;
			this->ED->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ED.BackgroundImage")));
			this->ED->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ED->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ED->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ED->ForeColor = System::Drawing::Color::Black;
			this->ED->Location = System::Drawing::Point(236, 465);
			this->ED->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ED->Name = L"ED";
			this->ED->Size = System::Drawing::Size(316, 59);
			this->ED->TabIndex = 14;
			this->ED->Text = L"Edit Course";
			this->ED->UseVisualStyleBackColor = false;
			this->ED->Click += gcnew System::EventHandler(this, &adminPanal::ED_Click);
			// 
			// remv2
			// 
			this->remv2->BackColor = System::Drawing::Color::Transparent;
			this->remv2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remv2.BackgroundImage")));
			this->remv2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remv2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->remv2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remv2->ForeColor = System::Drawing::Color::Black;
			this->remv2->Location = System::Drawing::Point(221, 322);
			this->remv2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->remv2->Name = L"remv2";
			this->remv2->Size = System::Drawing::Size(144, 59);
			this->remv2->TabIndex = 13;
			this->remv2->Text = L"Remove";
			this->remv2->UseVisualStyleBackColor = false;
			this->remv2->Click += gcnew System::EventHandler(this, &adminPanal::remv2_Click);
			// 
			// pre2
			// 
			this->pre2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->pre2->FormattingEnabled = true;
			this->pre2->ItemHeight = 16;
			this->pre2->Location = System::Drawing::Point(377, 176);
			this->pre2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pre2->Name = L"pre2";
			this->pre2->Size = System::Drawing::Size(195, 260);
			this->pre2->TabIndex = 9;
			// 
			// add2
			// 
			this->add2->BackColor = System::Drawing::Color::Transparent;
			this->add2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add2.BackgroundImage")));
			this->add2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add2->ForeColor = System::Drawing::Color::Black;
			this->add2->Location = System::Drawing::Point(224, 234);
			this->add2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add2->Name = L"add2";
			this->add2->Size = System::Drawing::Size(133, 59);
			this->add2->TabIndex = 12;
			this->add2->Text = L"Add";
			this->add2->UseVisualStyleBackColor = false;
			this->add2->Click += gcnew System::EventHandler(this, &adminPanal::add2_Click);
			// 
			// all2
			// 
			this->all2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->all2->FormattingEnabled = true;
			this->all2->ItemHeight = 16;
			this->all2->Location = System::Drawing::Point(5, 176);
			this->all2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->all2->Name = L"all2";
			this->all2->Size = System::Drawing::Size(187, 260);
			this->all2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(345, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 34);
			this->label4->TabIndex = 6;
			this->label4->Text = L"weeks";
			// 
			// perd
			// 
			this->perd->BackColor = System::Drawing::Color::WhiteSmoke;
			this->perd->Location = System::Drawing::Point(257, 94);
			this->perd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->perd->Multiline = true;
			this->perd->Name = L"perd";
			this->perd->Size = System::Drawing::Size(73, 34);
			this->perd->TabIndex = 5;
			
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label5->Location = System::Drawing::Point(163, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 34);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Period";
			// 
			// co_n
			// 
			this->co_n->BackColor = System::Drawing::Color::WhiteSmoke;
			this->co_n->Location = System::Drawing::Point(179, 34);
			this->co_n->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->co_n->Multiline = true;
			this->co_n->Name = L"co_n";
			this->co_n->Size = System::Drawing::Size(283, 34);
			this->co_n->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(23, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 34);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Course name";
			// 
			// remv
			// 
			this->remv->BackColor = System::Drawing::Color::Transparent;
			this->remv->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remv.BackgroundImage")));
			this->remv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->remv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->remv->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remv->ForeColor = System::Drawing::Color::Black;
			this->remv->Location = System::Drawing::Point(199, 334);
			this->remv->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->remv->Name = L"remv";
			this->remv->Size = System::Drawing::Size(144, 59);
			this->remv->TabIndex = 11;
			this->remv->Text = L"Remove";
			this->remv->UseVisualStyleBackColor = false;
			this->remv->Click += gcnew System::EventHandler(this, &adminPanal::remv_Click);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::Color::Transparent;
			this->add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add.BackgroundImage")));
			this->add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->ForeColor = System::Drawing::Color::Black;
			this->add->Location = System::Drawing::Point(201, 245);
			this->add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(133, 59);
			this->add->TabIndex = 10;
			this->add->Text = L"Add";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &adminPanal::button2_Click);
			// 
			// pre
			// 
			this->pre->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->pre->FormattingEnabled = true;
			this->pre->ItemHeight = 16;
			this->pre->Location = System::Drawing::Point(365, 176);
			this->pre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pre->Name = L"pre";
			this->pre->Size = System::Drawing::Size(184, 260);
			this->pre->TabIndex = 9;
			// 
			// all
			// 
			this->all->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->all->FormattingEnabled = true;
			this->all->ItemHeight = 16;
			this->all->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"NO PREREQUSITE" });
			this->all->Location = System::Drawing::Point(-1, 176);
			this->all->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->all->Name = L"all";
			this->all->Size = System::Drawing::Size(185, 260);
			this->all->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label3->Location = System::Drawing::Point(247, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 36);
			this->label3->TabIndex = 6;
			this->label3->Text = L"weeks";
			// 
			// prd
			// 
			this->prd->BackColor = System::Drawing::Color::WhiteSmoke;
			this->prd->Location = System::Drawing::Point(171, 94);
			this->prd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->prd->Multiline = true;
			this->prd->Name = L"prd";
			this->prd->Size = System::Drawing::Size(73, 34);
			this->prd->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(53, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Period";
			// 
			// C_N
			// 
			this->C_N->BackColor = System::Drawing::Color::WhiteSmoke;
			this->C_N->Location = System::Drawing::Point(171, 37);
			this->C_N->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C_N->Multiline = true;
			this->C_N->Name = L"C_N";
			this->C_N->Size = System::Drawing::Size(283, 34);
			this->C_N->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(-1, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Course name";
			// 
			// Edit
			// 
			this->Edit->BackColor = System::Drawing::Color::Transparent;
			this->Edit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Edit.BackgroundImage")));
			this->Edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Edit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edit->ForeColor = System::Drawing::Color::Black;
			this->Edit->Location = System::Drawing::Point(1100, 644);
			this->Edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(173, 59);
			this->Edit->TabIndex = 12;
			this->Edit->Text = L"Edit";
			this->Edit->UseVisualStyleBackColor = false;
			this->Edit->EnabledChanged += gcnew System::EventHandler(this, &adminPanal::Edit_EnabledChanged);
			this->Edit->Click += gcnew System::EventHandler(this, &adminPanal::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(884, 644);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 59);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Remove Course";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &adminPanal::button5_Click);
			// 
			// ser_box
			// 
			this->ser_box->Location = System::Drawing::Point(7, 21);
			this->ser_box->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->ser_box->Name = L"ser_box";
			this->ser_box->Size = System::Drawing::Size(335, 22);
			this->ser_box->TabIndex = 14;
			// 
			// ser
			// 
			this->ser->BackColor = System::Drawing::Color::Transparent;
			this->ser->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ser.BackgroundImage")));
			this->ser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ser->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ser->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ser->ForeColor = System::Drawing::Color::Black;
			this->ser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ser.Image")));
			this->ser->Location = System::Drawing::Point(347, 10);
			this->ser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ser->Name = L"ser";
			this->ser->Size = System::Drawing::Size(59, 44);
			this->ser->TabIndex = 15;
			this->ser->UseVisualStyleBackColor = false;
			this->ser->Click += gcnew System::EventHandler(this, &adminPanal::ser_Click);
			// 
			// nw
			// 
			this->nw->BackColor = System::Drawing::Color::Transparent;
			this->nw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nw.BackgroundImage")));
			this->nw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nw->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nw->ForeColor = System::Drawing::Color::Black;
			this->nw->Location = System::Drawing::Point(1099, 644);
			this->nw->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->nw->Name = L"nw";
			this->nw->Size = System::Drawing::Size(173, 59);
			this->nw->TabIndex = 16;
			this->nw->Text = L"New";
			this->nw->UseVisualStyleBackColor = false;
			this->nw->Visible = false;
			this->nw->Click += gcnew System::EventHandler(this, &adminPanal::nw_Click);
			// 
			// adminPanal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1287, 738);
			this->Controls->Add(this->ser);
			this->Controls->Add(this->ser_box);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Edit);
			this->Controls->Add(this->ne);
			this->Controls->Add(this->data);
			this->Controls->Add(this->nw);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"adminPanal";
			this->Text = L"adminPanal";
			this->Load += gcnew System::EventHandler(this, &adminPanal::adminPanal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->ne->ResumeLayout(false);
			this->ne->PerformLayout();
			this->edit_box->ResumeLayout(false);
			this->edit_box->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void adminPanal_Load(System::Object^  sender, System::EventArgs^  e) {
		admin h;
		h.fill(all);
		h.show(data);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		admin x;
		if (x.check(C_N->Text) || C_N->Text == "" || prd->Text == "" || pre->Items->Count == 0)
		{
			MessageBox::Show("One or more fileds where not filled , or course name already exist !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			x.get_pre(pre);
			pre->Items->Clear();
			x.save(C_N->Text, prd->Text);
			x.refresh(data, all);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (all->SelectedIndex != -1)
		{
			pre->Items->Add(all->SelectedItem);
			all->Items->Remove(all->SelectedItem);
		}
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void remv_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pre->SelectedIndex != -1)
		{
			all->Items->Add(pre->SelectedItem);
			pre->Items->Remove(pre->SelectedItem);
		}
	}
	private: System::Void ser_Click(System::Object^  sender, System::EventArgs^  e) {
		admin obj;
		if (ser_box->Text != "")
		{
			obj.search(ser_box->Text);
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (data->Rows->Count != 0)
		{
			admin obj;
			obj.remove(data->SelectedCells[0]->Value->ToString());
			obj.refresh(data, all);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Edit->Visible = false;
		nw->Visible = true;
		admin obj;
		edit_box->Visible = true;
		co_n->Text = data->SelectedCells[0]->Value->ToString();
		perd->Text = data->SelectedCells[1]->Value->ToString();
		all2->Items->Clear();
		obj.fill(all2);
		obj.select_course(co_n->Text, pre2, all2);


	}
	private: System::Void Edit_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void add2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (all2->SelectedIndex != -1)
		{
			pre2->Items->Add(all2->SelectedItem);
			all2->Items->Remove(all2->SelectedItem);
		}

	}
	private: System::Void remv2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (pre2->SelectedIndex != -1)
		{
			all2->Items->Add(pre2->SelectedItem);
			pre2->Items->Remove(pre2->SelectedItem);
		}
	}
	private: System::Void nw_Click(System::Object^  sender, System::EventArgs^  e) {
		ne->Visible = true;
		nw->Visible = false;
		Edit->Visible = true;
		edit_box->Visible = false;
	}
	private: System::Void ED_Click(System::Object^  sender, System::EventArgs^  e) {
		admin obj;
		obj.remove(co_n->Text);
		if (co_n->Text == "" || perd->Text == "" || pre2->Items->Count == 0)
		{
			MessageBox::Show("One or more fileds where not filled , or course name already exist !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			obj.get_pre(pre2);
			obj.save(co_n->Text, perd->Text);
			obj.refresh(data, all);
		}

	}
	
	
};
}
