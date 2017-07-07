#include "student.h"
#include <string>
namespace SPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for newStud
	/// </summary>
	public ref class newStud : public System::Windows::Forms::Form
	{
	public:
		newStud(void)
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
		~newStud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Welcome;
	private: System::Windows::Forms::Button^  btnRemove;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::ListBox^  lstCurrent;
	private: System::Windows::Forms::ListBox^  lstAvaliable;
	private: System::Windows::Forms::Button^  OK;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(newStud::typeid));
			this->Welcome = (gcnew System::Windows::Forms::Label());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->lstCurrent = (gcnew System::Windows::Forms::ListBox());
			this->lstAvaliable = (gcnew System::Windows::Forms::ListBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Welcome
			// 
			this->Welcome->AutoSize = true;
			this->Welcome->BackColor = System::Drawing::Color::Transparent;
			this->Welcome->Font = (gcnew System::Drawing::Font(L"Papyrus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome->Location = System::Drawing::Point(241, 11);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Size = System::Drawing::Size(388, 64);
			this->Welcome->TabIndex = 2;
			this->Welcome->Text = L"Welcome new comer";
			// 
			// btnRemove
			// 
			this->btnRemove->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRemove.BackgroundImage")));
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"Papyrus", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemove->ForeColor = System::Drawing::Color::Cornsilk;
			this->btnRemove->Location = System::Drawing::Point(321, 269);
			this->btnRemove->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(151, 70);
			this->btnRemove->TabIndex = 9;
			this->btnRemove->Text = L"Remove";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &newStud::btnRemove_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.BackgroundImage")));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Papyrus", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Cornsilk;
			this->btnAdd->Location = System::Drawing::Point(321, 163);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(151, 70);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &newStud::btnAdd_Click);
			// 
			// lstCurrent
			// 
			this->lstCurrent->FormattingEnabled = true;
			this->lstCurrent->ItemHeight = 16;
			this->lstCurrent->Location = System::Drawing::Point(534, 111);
			this->lstCurrent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstCurrent->Name = L"lstCurrent";
			this->lstCurrent->Size = System::Drawing::Size(230, 356);
			this->lstCurrent->TabIndex = 7;
			// 
			// lstAvaliable
			// 
			this->lstAvaliable->FormattingEnabled = true;
			this->lstAvaliable->ItemHeight = 16;
			this->lstAvaliable->Location = System::Drawing::Point(49, 111);
			this->lstAvaliable->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lstAvaliable->Name = L"lstAvaliable";
			this->lstAvaliable->Size = System::Drawing::Size(221, 356);
			this->lstAvaliable->TabIndex = 6;
			// 
			// OK
			// 
			this->OK->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OK.BackgroundImage")));
			this->OK->Font = (gcnew System::Drawing::Font(L"Papyrus", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OK->ForeColor = System::Drawing::Color::Cornsilk;
			this->OK->Location = System::Drawing::Point(649, 481);
			this->OK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(230, 72);
			this->OK->TabIndex = 10;
			this->OK->Text = L"Done";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &newStud::OK_Click);
			// 
			// newStud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(891, 564);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->lstCurrent);
			this->Controls->Add(this->lstAvaliable);
			this->Controls->Add(this->Welcome);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"newStud";
			this->Text = L"newStud";
			this->Load += gcnew System::EventHandler(this, &newStud::newStud_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ name;
	public: bool nw = false;
	public: newStud^ n;
	private: System::Void newStud_Load(System::Object^  sender, System::EventArgs^  e) {
		if (nw)
		{
			student^ go = gcnew student();
			go->n = name;
			go->Show();
			this->Close();
		}
		else
		{
			new_user u;
			u.fill(lstAvaliable);
		}
	}
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lstAvaliable->SelectedIndex != -1)
		{
			lstCurrent->Items->Add(lstAvaliable->SelectedItem);
			lstAvaliable->Items->Remove(lstAvaliable->SelectedItem);
		}
	}
	private: System::Void btnRemove_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lstCurrent->SelectedIndex != -1)
		{
			lstAvaliable->Items->Add(lstCurrent->SelectedItem);
			lstCurrent->Items->Remove(lstCurrent->SelectedItem);
		}
	}
	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lstCurrent->Items->Count != 0)
		{
			new_user u;
			u.get_pre(lstCurrent);
			u.save(name);
			student^ go = gcnew student();
			go->Show();
			go->n = name;
			Hide();
		}
		else
		{
			MessageBox::Show("kindly ... please choose your courses  !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	};
}
