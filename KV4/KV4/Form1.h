#pragma once

namespace KV4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 226);
			this->textBox1->Margin = System::Windows::Forms::Padding(6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(555, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(24, 445);
			this->textBox2->Margin = System::Windows::Forms::Padding(6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(555, 31);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Валюта неизвестна";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 195);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите количество рублей";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 405);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Полученные данные";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"Австралийский доллар", L"Азербайджанский манат", 
				L"Армянский драм", L"Белорусский рубль", L"Болгарский лев", L"Бразильскй реал", L"Форинт", L"Вона", L"Датская крона", L"Доллар США", 
				L"Евро", L"Индийская рупия", L"Тенге", L"Канадский доллар", L"Сом", L"Юань Ренминби", L"Молдавский лей", L"Туркменский новый манат", 
				L"Норвежская крона", L"Злотый", L"Сингапурский доллар", L"Сомони", L"Турецкая лира", L"Узбекский сум", L"Гривна", L"Фунт стерлингов", 
				L"Чешская крона", L"Шведская крона", L"Швейцарский франк", L"Рэнд", L"Йена"});
			this->comboBox1->Location = System::Drawing::Point(591, 224);
			this->comboBox1->Margin = System::Windows::Forms::Padding(6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(476, 33);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"(Выберите валюту)";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1138, 625);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Form1";
			this->Text = L"Конвертер валют";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && textBox1->Text != " ") 
				 switch (comboBox1->SelectedIndex){ 
				case 0:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/47.8459);break; 
				 case 1:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/41.19);break; 
				 case 2:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.13);break; 
				 case 3:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.003186);break; 
				 case 4:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 36.36);break; 
				 case 5:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/19.92);break; 
				 case 6:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 0.22);break; 
				 case 7:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 0.06);break; 
				 case 8:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/9.56);break; 
				 case 9:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/64.02);break; 
				 case 10:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/71.05);break; 
				 case 11:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.95);break; 
				 case 12:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.19);break; 
				 case 13:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/49.51);break; 
				 case 14:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.95);break; 
				 case 15:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/9.67);break;
				 case 16:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/3.23);break;
				 case 17:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/19.03);break;
				 case 18:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/7.65);break;
				 case 19:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/16.20);break;
				 case 20:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/47.60);break;
				 case 21:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/8.14);break;
				 case 22:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/22.15);break;
				 case 23:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.02);break;
				 case 24:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/2.58);break;
				 case 25:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/85.18);break;
				 case 26:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/2.62);break;
				 case 27:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/7.56);break;
				 case 28:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/65.58);break;
				 case 29:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/4.36);break;
				 case 30:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.62);break; 
			 } 
			 else textBox2->Text="Валюта неизвестна"; 
		 } 
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "" && textBox1->Text != " ") 
				 switch (comboBox1->SelectedIndex){ 
				 case 0:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/47.8459);break; 
				 case 1:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/41.19);break; 
				 case 2:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.13);break; 
				 case 3:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.003186);break; 
				 case 4:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 36.36);break; 
				 case 5:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/19.92);break; 
				 case 6:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 0.22);break; 
				 case 7:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/ 0.06);break; 
				 case 8:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/9.56);break; 
				 case 9:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/64.02);break; 
				 case 10:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/71.05);break; 
				 case 11:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.95);break; 
				 case 12:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.19);break; 
				 case 13:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/49.51);break; 
				 case 14:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.95);break; 
				 case 15:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/9.67);break;
				 case 16:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/3.23);break;
				 case 17:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/19.03);break;
				 case 18:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/7.65);break;
				 case 19:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/16.20);break;
				 case 20:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/47.60);break;
				 case 21:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/8.14);break;
				 case 22:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/22.15);break;
				 case 23:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.02);break;
				 case 24:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/2.58);break;
				 case 25:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/85.18);break;
				 case 26:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/2.62);break;
				 case 27:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/7.56);break;
				 case 28:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/65.58);break;
				 case 29:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/4.36);break;
				 case 30:textBox2->Text = Convert:: ToString(Convert::ToInt64(textBox1->Text)/0.62);break;
			 } 
			 else textBox2->Text="Валюта неизвестна";
		 }

};
}

