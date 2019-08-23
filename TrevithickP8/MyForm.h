//James Trevithick							jtrevithick2@cnm.edu							TrevithickP8

#pragma once
#include "UtilityFunctions.h"
#include"Enigma.h"
#include <cstdlib>


namespace TrevithickP8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	Enigma enig;
	/// </summary>
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
	private: System::Windows::Forms::Label^  lbMain;
	private: System::Windows::Forms::Label^  lbMain2;
	private: System::Windows::Forms::Label^  lbEncodeKey;


	private: System::Windows::Forms::Label^  lbkey;

	private: System::Windows::Forms::Label^  lbSM;


	private: System::Windows::Forms::Button^  bEncode;
	private: System::Windows::Forms::Label^  lbDecode;
	private: System::Windows::Forms::Button^  bDecode;
	private: System::Windows::Forms::Button^  bClear;
	private: System::Windows::Forms::Label^  lbSummary;
	private: System::Windows::Forms::Label^  lbMessage;
	private: System::Windows::Forms::Label^  lbCodedMess;
	private: System::Windows::Forms::Label^  lbCoddedKey;
	private: System::Windows::Forms::TextBox^  tbMess;
	private: System::Windows::Forms::TextBox^  tbCodedMess;
	private: System::Windows::Forms::TextBox^  tbKey;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  rbKey;
	private: System::Windows::Forms::RadioButton^  rbGeneratedKey;
	private: System::Windows::Forms::NumericUpDown^  nupKey;
	private: System::Windows::Forms::TextBox^  cbText;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lbMain = (gcnew System::Windows::Forms::Label());
			this->lbMain2 = (gcnew System::Windows::Forms::Label());
			this->lbEncodeKey = (gcnew System::Windows::Forms::Label());
			this->lbkey = (gcnew System::Windows::Forms::Label());
			this->lbSM = (gcnew System::Windows::Forms::Label());
			this->bEncode = (gcnew System::Windows::Forms::Button());
			this->lbDecode = (gcnew System::Windows::Forms::Label());
			this->bDecode = (gcnew System::Windows::Forms::Button());
			this->bClear = (gcnew System::Windows::Forms::Button());
			this->lbSummary = (gcnew System::Windows::Forms::Label());
			this->lbMessage = (gcnew System::Windows::Forms::Label());
			this->lbCodedMess = (gcnew System::Windows::Forms::Label());
			this->lbCoddedKey = (gcnew System::Windows::Forms::Label());
			this->tbMess = (gcnew System::Windows::Forms::TextBox());
			this->tbCodedMess = (gcnew System::Windows::Forms::TextBox());
			this->tbKey = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rbKey = (gcnew System::Windows::Forms::RadioButton());
			this->rbGeneratedKey = (gcnew System::Windows::Forms::RadioButton());
			this->nupKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbText = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupKey))->BeginInit();
			this->SuspendLayout();
			// 
			// lbMain
			// 
			this->lbMain->AutoSize = true;
			this->lbMain->Font = (gcnew System::Drawing::Font(L"Blackadder ITC", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbMain->Location = System::Drawing::Point(487, 32);
			this->lbMain->Name = L"lbMain";
			this->lbMain->Size = System::Drawing::Size(544, 31);
			this->lbMain->TabIndex = 0;
			this->lbMain->Text = L"Welcome to the Engima Encoding and Decoding Machine!";
			this->lbMain->Click += gcnew System::EventHandler(this, &MyForm::lbMain_Click);
			// 
			// lbMain2
			// 
			this->lbMain2->AutoSize = true;
			this->lbMain2->Font = (gcnew System::Drawing::Font(L"Blackadder ITC", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMain2->Location = System::Drawing::Point(487, 67);
			this->lbMain2->Name = L"lbMain2";
			this->lbMain2->Size = System::Drawing::Size(556, 31);
			this->lbMain2->TabIndex = 1;
			this->lbMain2->Text = L"Please enter your secret message to be encoded or decded below:";
			// 
			// lbEncodeKey
			// 
			this->lbEncodeKey->AutoSize = true;
			this->lbEncodeKey->Location = System::Drawing::Point(9, 208);
			this->lbEncodeKey->Name = L"lbEncodeKey";
			this->lbEncodeKey->Size = System::Drawing::Size(147, 17);
			this->lbEncodeKey->TabIndex = 2;
			this->lbEncodeKey->Text = L"Encode: Choose One:";
			this->lbEncodeKey->Click += gcnew System::EventHandler(this, &MyForm::lbEncodeKey_Click);
			// 
			// lbkey
			// 
			this->lbkey->AutoSize = true;
			this->lbkey->Location = System::Drawing::Point(12, 242);
			this->lbkey->Name = L"lbkey";
			this->lbkey->Size = System::Drawing::Size(0, 17);
			this->lbkey->TabIndex = 4;
			this->lbkey->Click += gcnew System::EventHandler(this, &MyForm::lbkey_Click);
			// 
			// lbSM
			// 
			this->lbSM->AutoSize = true;
			this->lbSM->Location = System::Drawing::Point(16, 346);
			this->lbSM->Name = L"lbSM";
			this->lbSM->Size = System::Drawing::Size(182, 17);
			this->lbSM->TabIndex = 6;
			this->lbSM->Text = L"Enter your secret message:";
			// 
			// bEncode
			// 
			this->bEncode->Location = System::Drawing::Point(12, 423);
			this->bEncode->Name = L"bEncode";
			this->bEncode->Size = System::Drawing::Size(199, 53);
			this->bEncode->TabIndex = 8;
			this->bEncode->Text = L"Encode";
			this->bEncode->UseVisualStyleBackColor = true;
			this->bEncode->Click += gcnew System::EventHandler(this, &MyForm::bEncode_Click);
			// 
			// lbDecode
			// 
			this->lbDecode->AutoSize = true;
			this->lbDecode->Location = System::Drawing::Point(694, 137);
			this->lbDecode->Name = L"lbDecode";
			this->lbDecode->Size = System::Drawing::Size(210, 17);
			this->lbDecode->TabIndex = 9;
			this->lbDecode->Text = L"DECODE: Just press the button!";
			// 
			// bDecode
			// 
			this->bDecode->Location = System::Drawing::Point(697, 168);
			this->bDecode->Name = L"bDecode";
			this->bDecode->Size = System::Drawing::Size(212, 57);
			this->bDecode->TabIndex = 10;
			this->bDecode->Text = L"DECODE";
			this->bDecode->UseVisualStyleBackColor = true;
			this->bDecode->Click += gcnew System::EventHandler(this, &MyForm::bDecode_Click);
			// 
			// bClear
			// 
			this->bClear->Location = System::Drawing::Point(697, 346);
			this->bClear->Name = L"bClear";
			this->bClear->Size = System::Drawing::Size(193, 53);
			this->bClear->TabIndex = 11;
			this->bClear->Text = L"CLEAR";
			this->bClear->UseVisualStyleBackColor = true;
			this->bClear->Click += gcnew System::EventHandler(this, &MyForm::bClear_Click);
			// 
			// lbSummary
			// 
			this->lbSummary->AutoSize = true;
			this->lbSummary->Font = (gcnew System::Drawing::Font(L"Blackadder ITC", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSummary->Location = System::Drawing::Point(388, 492);
			this->lbSummary->Name = L"lbSummary";
			this->lbSummary->Size = System::Drawing::Size(336, 37);
			this->lbSummary->TabIndex = 12;
			this->lbSummary->Text = L"<=Secret Message Summary=>";
			// 
			// lbMessage
			// 
			this->lbMessage->AutoSize = true;
			this->lbMessage->Location = System::Drawing::Point(208, 554);
			this->lbMessage->Name = L"lbMessage";
			this->lbMessage->Size = System::Drawing::Size(69, 17);
			this->lbMessage->TabIndex = 13;
			this->lbMessage->Text = L"Message:";
			// 
			// lbCodedMess
			// 
			this->lbCodedMess->AutoSize = true;
			this->lbCodedMess->Location = System::Drawing::Point(163, 628);
			this->lbCodedMess->Name = L"lbCodedMess";
			this->lbCodedMess->Size = System::Drawing::Size(114, 17);
			this->lbCodedMess->TabIndex = 14;
			this->lbCodedMess->Text = L"Coded Message:";
			// 
			// lbCoddedKey
			// 
			this->lbCoddedKey->AutoSize = true;
			this->lbCoddedKey->Location = System::Drawing::Point(241, 706);
			this->lbCoddedKey->Name = L"lbCoddedKey";
			this->lbCoddedKey->Size = System::Drawing::Size(36, 17);
			this->lbCoddedKey->TabIndex = 15;
			this->lbCoddedKey->Text = L"Key:";
			// 
			// tbMess
			// 
			this->tbMess->Location = System::Drawing::Point(283, 554);
			this->tbMess->Multiline = true;
			this->tbMess->Name = L"tbMess";
			this->tbMess->ReadOnly = true;
			this->tbMess->Size = System::Drawing::Size(473, 40);
			this->tbMess->TabIndex = 16;
			// 
			// tbCodedMess
			// 
			this->tbCodedMess->Location = System::Drawing::Point(283, 625);
			this->tbCodedMess->Multiline = true;
			this->tbCodedMess->Name = L"tbCodedMess";
			this->tbCodedMess->ReadOnly = true;
			this->tbCodedMess->Size = System::Drawing::Size(473, 48);
			this->tbCodedMess->TabIndex = 17;
			// 
			// tbKey
			// 
			this->tbKey->Location = System::Drawing::Point(283, 706);
			this->tbKey->Name = L"tbKey";
			this->tbKey->ReadOnly = true;
			this->tbKey->Size = System::Drawing::Size(111, 22);
			this->tbKey->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(469, 204);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// rbKey
			// 
			this->rbKey->AutoSize = true;
			this->rbKey->Location = System::Drawing::Point(12, 241);
			this->rbKey->Name = L"rbKey";
			this->rbKey->Size = System::Drawing::Size(103, 21);
			this->rbKey->TabIndex = 20;
			this->rbKey->TabStop = true;
			this->rbKey->Text = L"Enter a Key";
			this->rbKey->UseVisualStyleBackColor = true;
			// 
			// rbGeneratedKey
			// 
			this->rbGeneratedKey->AutoSize = true;
			this->rbGeneratedKey->Location = System::Drawing::Point(12, 285);
			this->rbGeneratedKey->Name = L"rbGeneratedKey";
			this->rbGeneratedKey->Size = System::Drawing::Size(201, 21);
			this->rbGeneratedKey->TabIndex = 21;
			this->rbGeneratedKey->TabStop = true;
			this->rbGeneratedKey->Text = L"Use EnigmaGenerated Key";
			this->rbGeneratedKey->UseVisualStyleBackColor = true;
			// 
			// nupKey
			// 
			this->nupKey->Location = System::Drawing::Point(121, 241);
			this->nupKey->Name = L"nupKey";
			this->nupKey->Size = System::Drawing::Size(120, 22);
			this->nupKey->TabIndex = 22;
			// 
			// cbText
			// 
			this->cbText->Location = System::Drawing::Point(19, 376);
			this->cbText->Multiline = true;
			this->cbText->Name = L"cbText";
			this->cbText->Size = System::Drawing::Size(179, 41);
			this->cbText->TabIndex = 23;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1155, 735);
			this->Controls->Add(this->cbText);
			this->Controls->Add(this->nupKey);
			this->Controls->Add(this->rbGeneratedKey);
			this->Controls->Add(this->rbKey);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbKey);
			this->Controls->Add(this->tbCodedMess);
			this->Controls->Add(this->tbMess);
			this->Controls->Add(this->lbCoddedKey);
			this->Controls->Add(this->lbCodedMess);
			this->Controls->Add(this->lbMessage);
			this->Controls->Add(this->lbSummary);
			this->Controls->Add(this->bClear);
			this->Controls->Add(this->bDecode);
			this->Controls->Add(this->lbDecode);
			this->Controls->Add(this->bEncode);
			this->Controls->Add(this->lbSM);
			this->Controls->Add(this->lbkey);
			this->Controls->Add(this->lbEncodeKey);
			this->Controls->Add(this->lbMain2);
			this->Controls->Add(this->lbMain);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trevithick James Engima Coding Machine";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nupKey))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lbMain_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void lbEncodeKey_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void lbkey_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bEncode_Click(System::Object^  sender, System::EventArgs^  e) {
	string mess;
	string k;

	//convert managed strings to native strings
	To_string(cbText->Text, mess);

	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->InitialDirectory = "\\";
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if (rbKey->Checked)
		{
			//convert managed strings to native strings	 
			
			int kk = Decimal::ToInt32(nupKey->Value);//?
			enig.SetMessage(mess, kk);

		}

		else //if (rbGeneratedKey->Checked)
		{
			enig.SetMessage(mess);
		}

		//now get back the result

		tbMess->Text = gcnew String(enig.GetDecodedMessage().c_str());
		tbCodedMess->Text = gcnew String(enig.GetCodedMessage().c_str());
		tbKey->Text = enig.GetKey().ToString();

		//and open the output stream
		StreamWriter^ output = gcnew StreamWriter(saveFileDialog1->FileName);
		output->WriteLine(gcnew String(enig.GetCodedMessage().c_str()));
		output->WriteLine(enig.GetKey().ToString());
		output->Close();
	}



	else
		tbMess->Text = "No Message found!";

}
private: System::Void bClear_Click(System::Object^  sender, System::EventArgs^  e) {
	
	tbMess->Clear();
	tbCodedMess->Clear();
	tbKey->Clear();
	


}
private: System::Void bDecode_Click(System::Object^  sender, System::EventArgs^  e) {
	//Decode Button	make two managed strings to read in the data from the file			 
	String^ cMess;
	String^ kkey;

	//initialize properties (see MSDN)
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;//?
	openFileDialog1->InitialDirectory = "\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;


	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((openFileDialog1->OpenFile()) != nullptr)  //Check that file is open
		{
			//read the stream now using the Stream Reader class by making a new   streamreader object

			StreamReader^ input = gcnew StreamReader(openFileDialog1->FileName);
			cMess = input->ReadLine();
			kkey = input->ReadLine();

			input->Close();

			//now we have two managed strings and we will have to convert them to native strings
			std::string codedMess, k;
			To_string(cMess, codedMess);
			To_string(kkey, k);
			int kk = atoi(k.c_str());

			//now set the inputs into our Enigma object
			enig.SetCodedMessage(codedMess, kk);

			//and display the results: message, key and filename
			tbMess->Text = gcnew String(enig.GetDecodedMessage().c_str());
			tbKey->Text = enig.GetKey().ToString();
			tbCodedMess->Text = cMess;

		}
		else
			tbMess->Text = " File not opened!";
	}


}
};
}
