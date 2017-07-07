#include "new_user.h"
namespace SPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
	public:
		student(void)
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
		~student()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::ListBox^  lstCurrent;
	private: System::Windows::Forms::ListBox^  lstAvaliable;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  lstFind;
	private: System::Windows::Forms::Button^  btnFind;
	private: System::Windows::Forms::TextBox^  txtSearch;

	private: System::Windows::Forms::DataGridView^  data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Course_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Period;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(student::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lstCurrent = (gcnew System::Windows::Forms::ListBox());
			this->lstAvaliable = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lstFind = (gcnew System::Windows::Forms::ListBox());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->Course_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Period = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btnAdd);
			this->groupBox1->Controls->Add(this->lstCurrent);
			this->groupBox1->Controls->Add(this->lstAvaliable);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(51, 108);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(548, 273);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(264, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 48);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Current Course";
			// 
			// btnAdd
			// 
			this->btnAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.BackgroundImage")));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Papyrus", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Coral;
			this->btnAdd->Location = System::Drawing::Point(185, 110);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(120, 55);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &student::btnAdd_Click);
			// 
			// lstCurrent
			// 
			this->lstCurrent->FormattingEnabled = true;
			this->lstCurrent->ItemHeight = 16;
			this->lstCurrent->Location = System::Drawing::Point(311, 57);
			this->lstCurrent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstCurrent->Name = L"lstCurrent";
			this->lstCurrent->Size = System::Drawing::Size(159, 180);
			this->lstCurrent->TabIndex = 3;
			// 
			// lstAvaliable
			// 
			this->lstAvaliable->FormattingEnabled = true;
			this->lstAvaliable->ItemHeight = 16;
			this->lstAvaliable->Location = System::Drawing::Point(20, 57);
			this->lstAvaliable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstAvaliable->Name = L"lstAvaliable";
			this->lstAvaliable->Size = System::Drawing::Size(159, 180);
			this->lstAvaliable->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-8, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Courses avaliable";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->lstFind);
			this->groupBox3->Controls->Add(this->btnFind);
			this->groupBox3->Controls->Add(this->txtSearch);
			this->groupBox3->Location = System::Drawing::Point(59, 386);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(540, 273);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 48);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Search";
			// 
			// lstFind
			// 
			this->lstFind->FormattingEnabled = true;
			this->lstFind->ItemHeight = 16;
			this->lstFind->Location = System::Drawing::Point(39, 135);
			this->lstFind->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstFind->Name = L"lstFind";
			this->lstFind->Size = System::Drawing::Size(401, 132);
			this->lstFind->TabIndex = 7;
			// 
			// btnFind
			// 
			this->btnFind->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFind.BackgroundImage")));
			this->btnFind->Font = (gcnew System::Drawing::Font(L"Papyrus", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFind->ForeColor = System::Drawing::Color::Coral;
			this->btnFind->Location = System::Drawing::Point(320, 57);
			this->btnFind->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(120, 55);
			this->btnFind->TabIndex = 6;
			this->btnFind->Text = L"Find";
			this->btnFind->UseVisualStyleBackColor = true;
			this->btnFind->Click += gcnew System::EventHandler(this, &student::btnFind_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(39, 75);
			this->txtSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(275, 22);
			this->txtSearch->TabIndex = 2;
			// 
			// data
			// 
			this->data->AllowUserToDeleteRows = false;
			this->data->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Course_name, this->Period });
			this->data->Cursor = System::Windows::Forms::Cursors::Hand;
			this->data->Location = System::Drawing::Point(605, 80);
			this->data->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->data->Name = L"data";
			this->data->RowTemplate->Height = 24;
			this->data->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data->Size = System::Drawing::Size(537, 579);
			this->data->TabIndex = 8;
			this->data->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &student::data_CellContentClick);
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
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 729);
			this->Controls->Add(this->data);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"student";
			this->Text = L"Student Panal";
			this->Load += gcnew System::EventHandler(this, &student::student_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
public: String^ n;
private: System::Void student_Load(System::Object^  sender, System::EventArgs^  e) {
	old_user user;
	user.fill(lstAvaliable);
	user.show(data);
	user.select(n, lstCurrent, lstAvaliable);
}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	old_user u;
	if (lstAvaliable->SelectedIndex != -1)
	{
		if (u.checkValid(n, lstAvaliable->SelectedItem->ToString()))
		{
			String^ s = lstAvaliable->SelectedItem->ToString();
			lstCurrent->Items->Add(lstAvaliable->SelectedItem);
			lstAvaliable->Items->Remove(lstAvaliable->SelectedItem);
			u.save(n, s);
		}
		else
		{
			MessageBox::Show("You are not qualified to this course ...", "SORRY", MessageBoxButtons::OK, MessageBoxIcon::Hand);

		}

	}
}
private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void data_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void btnFind_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtSearch->Text != "")
	{
		old_user s;
		s.search(lstFind, txtSearch->Text);
	}
}
};
}
