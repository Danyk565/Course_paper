#pragma once
#include"Type_selection.h"
//#include"Auxiliary_functions.h"
#include<msclr\marshal_cppstd.h>
using std::vector;
using std::string;
namespace KursachWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(866, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(866, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(866, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 22);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(963, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Случайный набор";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(963, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ввод из файла";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(963, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ручной ввод";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(939, 233);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 22);
			this->textBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(916, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Искомый элемент";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(464, 208);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(939, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 22);
			this->textBox2->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(890, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Количество элементов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Ввод элементов";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 280);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(41, 20);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Int";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(78, 280);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(72, 20);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Double";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(173, 280);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(56, 20);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Char";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(245, 280);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(62, 20);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"String";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(513, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(300, 112);
			this->label7->TabIndex = 18;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(516, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(272, 22);
			this->textBox3->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(916, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"количество тестов";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(939, 299);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 22);
			this->textBox4->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(868, 76);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(186, 22);
			this->textBox5->TabIndex = 22;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(15, 375);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(311, 216);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(378, 375);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 216);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(740, 375);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(311, 216);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(255, 32);
			this->label9->TabIndex = 26;
			this->label9->Text = L"график зависимости числа итераций \n от размера массива";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(375, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(318, 32);
			this->label10->TabIndex = 27;
			this->label10->Text = L"график зависимостивремени \n время выполнения поиска от размера массива";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(737, 324);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 16);
			this->label11->TabIndex = 28;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(737, 340);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(381, 32);
			this->label12->TabIndex = 29;
			this->label12->Text = L"график зависимости временивыполнения поиска \n от количества предварительно произв"
				L"еденных поисков";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(12, 621);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(464, 208);
			this->richTextBox2->TabIndex = 30;
			this->richTextBox2->Text = L"";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 602);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 16);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Ввод элементов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1128, 841);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Type_selection<int>A;
		A.Number_el = Convert::ToInt64(textBox2->Text);
		A.Desired_el = Convert::ToInt64(textBox1->Text);
		std::string Mass = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
		std::vector<string>Words = A.Dividing_line(Mass);
		for (int i = 0; i < Words.size(); i++) {
			A.Mass_for_Search.push_back(std::stoi(Words[i]));
		}
			String^ Test = textBox3->Text;
			int H_tests = Convert::ToInt64(textBox4->Text);
			vector<int>Tests_number;
			String^ rez;
			for (int i = 0; i < H_tests; i++) {
				rez += Test[i];
				Tests_number.push_back(Convert::ToInt64(rez));
				rez = "";
			}
		
		richTextBox2->Text += msclr::interop::marshal_as<String^>(Report(Tests_number, A));
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Type_selection<int>A;
		A.Number_el = Convert::ToInt64(textBox2->Text);
		A.Desired_el = Convert::ToInt64(textBox1->Text);
		std::string file_path = msclr::interop::marshal_as<std::string>(textBox5->Text);
		file_input(file_path, A);
		for (int i = 0; i < A.Number_el; i++)
			richTextBox1->Text += " " + A.Mass_for_Search[i];
		//std::string Test = msclr::interop::marshal_as<std::string>(textBox3->Text);
		String^ Test = textBox3->Text;
		int H_tests = Convert::ToInt64(textBox4->Text);
		vector<int>Tests_number;
		String^ rez;
		for (int i = 0; i < H_tests; i++) {
			rez += Test[i];
			Tests_number.push_back(Convert::ToInt64(rez));
			rez = "";
		}
		richTextBox2->Text += msclr::interop::marshal_as<String^>(Report(Tests_number, A));
		//richTextBox2->Clear();
	}
};
}
