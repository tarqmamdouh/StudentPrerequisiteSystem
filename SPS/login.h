#include "classes.h"
#include "adminPanal.h"
#include "newStud.h"
namespace SPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  sign;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  user_n;
	private: System::Windows::Forms::Label^  regi;







	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  sign_in;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  pw;
	private: System::Windows::Forms::Label^  wrong;
	private: System::Windows::Forms::TextBox^  rpass;
















	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pass;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  name;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  user;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  em;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  log;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::GroupBox^  regist;
	private: System::Windows::Forms::PictureBox^  pc;
	private: System::Windows::Forms::PictureBox^  uc;
	private: System::Windows::Forms::Label^  wrong4;
	private: System::Windows::Forms::Label^  wrong3;
	private: System::Windows::Forms::Label^  wrong2;
	private: System::Windows::Forms::PictureBox^  AC;
	private: System::Windows::Forms::TextBox^  ap;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::PictureBox^  pic2;
	private: System::Windows::Forms::PictureBox^  pic1;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->sign = (gcnew System::Windows::Forms::GroupBox());
			this->pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->wrong = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sign_in = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pw = (gcnew System::Windows::Forms::TextBox());
			this->user_n = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->regi = (gcnew System::Windows::Forms::Label());
			this->rpass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->em = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->log = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->regist = (gcnew System::Windows::Forms::GroupBox());
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->AC = (gcnew System::Windows::Forms::PictureBox());
			this->ap = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->wrong4 = (gcnew System::Windows::Forms::Label());
			this->wrong3 = (gcnew System::Windows::Forms::Label());
			this->wrong2 = (gcnew System::Windows::Forms::Label());
			this->pc = (gcnew System::Windows::Forms::PictureBox());
			this->uc = (gcnew System::Windows::Forms::PictureBox());
			this->sign->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->regist->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uc))->BeginInit();
			this->SuspendLayout();
			// 
			// sign
			// 
			this->sign->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign.BackgroundImage")));
			this->sign->Controls->Add(this->wrong);
			this->sign->Controls->Add(this->label1);
			this->sign->Controls->Add(this->sign_in);
			this->sign->Controls->Add(this->pictureBox3);
			this->sign->Controls->Add(this->pictureBox2);
			this->sign->Controls->Add(this->pw);
			this->sign->Controls->Add(this->user_n);
			this->sign->Controls->Add(this->pictureBox1);
			this->sign->Controls->Add(this->regi);
			this->sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sign->Location = System::Drawing::Point(37, 57);
			this->sign->Margin = System::Windows::Forms::Padding(60, 2, 3, 2);
			this->sign->Name = L"sign";
			this->sign->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sign->Size = System::Drawing::Size(551, 654);
			this->sign->TabIndex = 0;
			this->sign->TabStop = false;
			// 
			// pic2
			// 
			this->pic2->BackColor = System::Drawing::Color::Transparent;
			this->pic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic2.BackgroundImage")));
			this->pic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pic2->Location = System::Drawing::Point(332, 184);
			this->pic2->Name = L"pic2";
			this->pic2->Size = System::Drawing::Size(551, 654);
			this->pic2->TabIndex = 24;
			this->pic2->TabStop = false;
			this->pic2->Visible = false;
			// 
			// wrong
			// 
			this->wrong->AutoSize = true;
			this->wrong->BackColor = System::Drawing::Color::Transparent;
			this->wrong->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->wrong->ForeColor = System::Drawing::Color::Red;
			this->wrong->Location = System::Drawing::Point(17, 224);
			this->wrong->Name = L"wrong";
			this->wrong->Size = System::Drawing::Size(461, 33);
			this->wrong->TabIndex = 5;
			this->wrong->Text = L"You entered wrong username or password !";
			this->wrong->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(103, 609);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Don\'t have an account\?";
			// 
			// sign_in
			// 
			this->sign_in->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sign_in.BackgroundImage")));
			this->sign_in->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sign_in->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sign_in->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->sign_in->Location = System::Drawing::Point(371, 427);
			this->sign_in->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sign_in->Name = L"sign_in";
			this->sign_in->Size = System::Drawing::Size(155, 57);
			this->sign_in->TabIndex = 2;
			this->sign_in->Text = L"Sign in";
			this->sign_in->UseVisualStyleBackColor = true;
			this->sign_in->Click += gcnew System::EventHandler(this, &login::signin_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(95, 348);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 44);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(95, 284);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(55, 44);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pw
			// 
			this->pw->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pw->Font = (gcnew System::Drawing::Font(L"Constantia", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pw->ForeColor = System::Drawing::SystemColors::Desktop;
			this->pw->Location = System::Drawing::Point(156, 348);
			this->pw->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pw->Name = L"pw";
			this->pw->PasswordChar = '*';
			this->pw->Size = System::Drawing::Size(295, 43);
			this->pw->TabIndex = 2;
			// 
			// user_n
			// 
			this->user_n->BackColor = System::Drawing::Color::WhiteSmoke;
			this->user_n->Font = (gcnew System::Drawing::Font(L"Constantia", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_n->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->user_n->Location = System::Drawing::Point(156, 284);
			this->user_n->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->user_n->Name = L"user_n";
			this->user_n->Size = System::Drawing::Size(295, 43);
			this->user_n->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(551, 197);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// regi
			// 
			this->regi->AutoSize = true;
			this->regi->BackColor = System::Drawing::Color::Transparent;
			this->regi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->regi->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->regi->ForeColor = System::Drawing::Color::DarkBlue;
			this->regi->Location = System::Drawing::Point(373, 609);
			this->regi->Name = L"regi";
			this->regi->Size = System::Drawing::Size(159, 33);
			this->regi->TabIndex = 2;
			this->regi->Text = L"Register Now";
			this->regi->Click += gcnew System::EventHandler(this, &login::regi_Click);
			// 
			// rpass
			// 
			this->rpass->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rpass->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->rpass->Location = System::Drawing::Point(173, 354);
			this->rpass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rpass->Name = L"rpass";
			this->rpass->PasswordChar = '*';
			this->rpass->Size = System::Drawing::Size(295, 40);
			this->rpass->TabIndex = 4;
			this->rpass->TextChanged += gcnew System::EventHandler(this, &login::rpass_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label3->Location = System::Drawing::Point(60, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 28);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Name";
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pass->Location = System::Drawing::Point(173, 284);
			this->pass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(295, 40);
			this->pass->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(40, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"User Name ";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::WhiteSmoke;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->name->Location = System::Drawing::Point(173, 154);
			this->name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(295, 40);
			this->name->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label5->Location = System::Drawing::Point(45, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 28);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Password";
			// 
			// user
			// 
			this->user->BackColor = System::Drawing::Color::WhiteSmoke;
			this->user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->user->Location = System::Drawing::Point(173, 215);
			this->user->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(295, 40);
			this->user->TabIndex = 2;
			this->user->TextChanged += gcnew System::EventHandler(this, &login::user_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(5, 362);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Repeat password";
			// 
			// em
			// 
			this->em->BackColor = System::Drawing::Color::WhiteSmoke;
			this->em->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->em->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->em->Location = System::Drawing::Point(173, 426);
			this->em->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->em->Name = L"em";
			this->em->Size = System::Drawing::Size(295, 40);
			this->em->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(15, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 28);
			this->label7->TabIndex = 10;
			this->label7->Text = L"E-mail adress";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(168, 606);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(281, 33);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Already have an account\?";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(371, 538);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 57);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// log
			// 
			this->log->AutoSize = true;
			this->log->BackColor = System::Drawing::Color::Transparent;
			this->log->Cursor = System::Windows::Forms::Cursors::Hand;
			this->log->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::Color::DarkBlue;
			this->log->Location = System::Drawing::Point(464, 609);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(74, 28);
			this->log->TabIndex = 13;
			this->log->Text = L"Log in";
			this->log->Click += gcnew System::EventHandler(this, &login::log_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(5, 0);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(551, 263);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// regist
			// 
			this->regist->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"regist.BackgroundImage")));
			this->regist->Controls->Add(this->AC);
			this->regist->Controls->Add(this->ap);
			this->regist->Controls->Add(this->checkBox1);
			this->regist->Controls->Add(this->wrong4);
			this->regist->Controls->Add(this->wrong3);
			this->regist->Controls->Add(this->wrong2);
			this->regist->Controls->Add(this->pc);
			this->regist->Controls->Add(this->uc);
			this->regist->Controls->Add(this->log);
			this->regist->Controls->Add(this->button2);
			this->regist->Controls->Add(this->label8);
			this->regist->Controls->Add(this->label7);
			this->regist->Controls->Add(this->em);
			this->regist->Controls->Add(this->label6);
			this->regist->Controls->Add(this->user);
			this->regist->Controls->Add(this->label5);
			this->regist->Controls->Add(this->name);
			this->regist->Controls->Add(this->label4);
			this->regist->Controls->Add(this->pass);
			this->regist->Controls->Add(this->label3);
			this->regist->Controls->Add(this->rpass);
			this->regist->Controls->Add(this->pictureBox4);
			this->regist->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->regist->Location = System::Drawing::Point(727, 57);
			this->regist->Margin = System::Windows::Forms::Padding(60, 2, 3, 2);
			this->regist->Name = L"regist";
			this->regist->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->regist->Size = System::Drawing::Size(551, 654);
			this->regist->TabIndex = 2;
			this->regist->TabStop = false;
			this->regist->Visible = false;
			// 
			// pic1
			// 
			this->pic1->BackColor = System::Drawing::Color::Transparent;
			this->pic1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic1.BackgroundImage")));
			this->pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pic1->Location = System::Drawing::Point(408, 52);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(551, 348);
			this->pic1->TabIndex = 23;
			this->pic1->TabStop = false;
			// 
			// AC
			// 
			this->AC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AC.Image")));
			this->AC->Location = System::Drawing::Point(477, 482);
			this->AC->Margin = System::Windows::Forms::Padding(4);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(52, 42);
			this->AC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AC->TabIndex = 22;
			this->AC->TabStop = false;
			this->AC->Visible = false;
			// 
			// ap
			// 
			this->ap->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ap->Enabled = false;
			this->ap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ap->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ap->Location = System::Drawing::Point(175, 482);
			this->ap->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ap->Name = L"ap";
			this->ap->Size = System::Drawing::Size(295, 40);
			this->ap->TabIndex = 21;
			this->ap->TextChanged += gcnew System::EventHandler(this, &login::ap_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->checkBox1->Location = System::Drawing::Point(15, 487);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(145, 32);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"I\'am Admin";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &login::checkBox1_CheckedChanged);
			// 
			// wrong4
			// 
			this->wrong4->AutoSize = true;
			this->wrong4->BackColor = System::Drawing::Color::Transparent;
			this->wrong4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->wrong4->ForeColor = System::Drawing::Color::Red;
			this->wrong4->Location = System::Drawing::Point(81, 550);
			this->wrong4->Name = L"wrong4";
			this->wrong4->Size = System::Drawing::Size(235, 33);
			this->wrong4->TabIndex = 19;
			this->wrong4->Text = L"password mismatch !";
			this->wrong4->Visible = false;
			// 
			// wrong3
			// 
			this->wrong3->AutoSize = true;
			this->wrong3->BackColor = System::Drawing::Color::Transparent;
			this->wrong3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->wrong3->ForeColor = System::Drawing::Color::Red;
			this->wrong3->Location = System::Drawing::Point(52, 551);
			this->wrong3->Name = L"wrong3";
			this->wrong3->Size = System::Drawing::Size(256, 33);
			this->wrong3->TabIndex = 18;
			this->wrong3->Text = L"user name already exist";
			this->wrong3->Visible = false;
			// 
			// wrong2
			// 
			this->wrong2->AutoSize = true;
			this->wrong2->BackColor = System::Drawing::Color::Transparent;
			this->wrong2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->wrong2->ForeColor = System::Drawing::Color::Red;
			this->wrong2->Location = System::Drawing::Point(-9, 551);
			this->wrong2->Name = L"wrong2";
			this->wrong2->Size = System::Drawing::Size(356, 33);
			this->wrong2->TabIndex = 17;
			this->wrong2->Text = L"One or more fields was not filled";
			this->wrong2->Visible = false;
			// 
			// pc
			// 
			this->pc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pc.Image")));
			this->pc->Location = System::Drawing::Point(472, 354);
			this->pc->Margin = System::Windows::Forms::Padding(4);
			this->pc->Name = L"pc";
			this->pc->Size = System::Drawing::Size(52, 42);
			this->pc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pc->TabIndex = 16;
			this->pc->TabStop = false;
			this->pc->Visible = false;
			// 
			// uc
			// 
			this->uc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uc.Image")));
			this->uc->Location = System::Drawing::Point(472, 217);
			this->uc->Margin = System::Windows::Forms::Padding(4);
			this->uc->Name = L"uc";
			this->uc->Size = System::Drawing::Size(49, 39);
			this->uc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->uc->TabIndex = 15;
			this->uc->TabStop = false;
			this->uc->Visible = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1331, 734);
			this->Controls->Add(this->regist);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->pic1);
			this->Controls->Add(this->pic2);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->sign->ResumeLayout(false);
			this->sign->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->regist->ResumeLayout(false);
			this->regist->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uc))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void signin_Click(System::Object^  sender, System::EventArgs^  e) {
   signin sign1;
	if (user_n->Text == "" || pw->Text == "" || sign1.check(user_n->Text, pw->Text)==false)
	{
		wrong->Visible = true;
	}
	else
	{
		if (sign1.checktype(user_n->Text) == "admin")
		{
			adminPanal^ f = gcnew adminPanal();
			f->Show();
			Hide();
		}
		else if (sign1.NEW(user_n->Text))
		{
			newStud^ f = gcnew newStud();
			f->name = user_n->Text;
			f->Show();
			Hide();
		}
		else
		{
			newStud^ f = gcnew newStud();
			f->nw = true;
			f->name = user_n->Text->ToString();
			f->Show();
			this->Hide();
		}
	}
}



private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	reg obj;
	bool k = true;
	    if (user->Text == "" || pass->Text == "" || rpass->Text == "" || em->Text == "" || name->Text == "" || ap->Enabled == true && ap->Text =="")
	{
		wrong2->Visible = true;
		uc->Visible = true;
		pc->Visible = true;
		AC->Visible = true;
		k = false;
	}
	    if (obj.check_user(user->Text) == false)
		{
			wrong3->Visible = true;
			uc->Visible = true;
			k = false;
		}
	    if (pass->Text != rpass->Text)
		{
			wrong4->Visible = true;
			pc->Visible = true;
			k = false;
		}
	    if (ap->Enabled == true && ap->Text != "dr.lobna mady")
		{
			AC->Visible = true;
			k = false;
		}
		if (k == true && ap->Enabled == true && ap->Text == "dr.lobna mady")
		{
			obj.save_to_DB(name->Text, user->Text, pass->Text, em->Text, "admin");
		}
		if (k == true && ap->Enabled == false)
		{
			obj.save_to_DB(name->Text, user->Text, pass->Text, em->Text, "student");
			MessageBox::Show("Done , thanks for register .");
			sign->Show();
			regist->Hide();
			pic1->Show();
			pic2->Hide();

		}
}
private: System::Void user_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	wrong2->Visible = false;
	wrong3->Visible = false;
	wrong4->Visible = false;
	uc->Visible = false;
	pc->Visible = false;
	AC->Visible = false;
}
private: System::Void rpass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	wrong2->Visible = false;
	wrong3->Visible = false;
	wrong4->Visible = false;
	uc->Visible = false;
	pc->Visible = false;
	AC->Visible = false;

}
private: System::Void ap_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	wrong2->Visible = false;
	wrong3->Visible = false;
	wrong4->Visible = false;
	uc->Visible = false;
	pc->Visible = false;
	AC->Visible = false;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		ap->Enabled = true;
	}
	else
	{
		ap->Enabled = false;
	}
}
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void regi_Click(System::Object^  sender, System::EventArgs^  e) {
	regist->Show();
	sign->Hide();
	pic2->Show();
	pic1->Hide();
}
private: System::Void log_Click(System::Object^  sender, System::EventArgs^  e) {
	sign->Show();
	regist->Hide();	
	pic1->Show();
	pic2->Hide();
}
};
}