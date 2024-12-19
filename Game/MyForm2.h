#pragma once


namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		bool model1, model2 = true;
		bool moveRight1, moveLeft1, moveRight2, moveLeft2, attack2, attack1, block2, block1, escMenu, endFight = false;

		int step = 10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Form^ secondform;
	public:
		MyForm2(System::Windows::Forms::Form^ o)
		{
			secondform = o;
			InitializeComponent();
			this->KeyPreview = true;
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ moveTimer;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->moveTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1206, 228);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 440);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// moveTimer
			// 
			this->moveTimer->Enabled = true;
			this->moveTimer->Interval = 20;
			this->moveTimer->Tick += gcnew System::EventHandler(this, &MyForm2::moveTimerEvent);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(637, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(305, 84);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Начать бой";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(637, 299);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(305, 84);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Вернуться к выбору героев.";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::White;
			this->progressBar1->Location = System::Drawing::Point(911, 22);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(611, 31);
			this->progressBar1->TabIndex = 4;
			this->progressBar1->Value = 100;
			this->progressBar1->Visible = false;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(12, 22);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(634, 31);
			this->progressBar2->TabIndex = 5;
			this->progressBar2->Value = 100;
			this->progressBar2->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(188, 228);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 440);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(637, 436);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(305, 84);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Выйти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(663, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Нажмите Esc чтобы посомтреть управление";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(144, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 120);
			this->label2->TabIndex = 9;
			this->label2->Text = L"W - удар\r\nS - блок\r\nA - движение влево\r\nD - движение вправо\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(1143, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(232, 120);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Up - удар\r\nDown - блок\r\nLeft - движение влево\r\nRight - движение вправо\r\n";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1534, 681);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::KeyisDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::KeyisUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void KeyisDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//Персонаж справа
		if (e->KeyCode == Keys::Left)
		{
			moveLeft1 = true;
			model1 = false;
		}
		if (e->KeyCode == Keys::Right)
		{
			moveRight1 = true;
			model1 = true;
		}
		if (e->KeyCode == Keys::Up)
		{
			attack1 = true;
			if (model1 == false)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_attack_left.png");
			}
			else if (model1 == true)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_attack_right.png");
			}

			if (pictureBox2->Left < pictureBox1->Right && pictureBox1->Left - pictureBox2->Left < 300)
			{
				if (attack1 == true && block2 == false)
				{
					if(progressBar2->Value <= 30)
					{
						progressBar2->Value = 1;
					}
					else {
						progressBar2->Value = progressBar2->Value - 30;
					}
				}
				else if (attack1 == true && block2 == true)
				{
					if(progressBar2->Value <= 30)
					{
						progressBar2->Value = 1;
					}
					else {
						progressBar2->Value = progressBar2->Value;
					}
				}
			}
			else if (pictureBox2->Right > pictureBox1->Left && pictureBox1->Right - pictureBox2->Right < 300)
			{
				if (attack1 == true && block2 == false)
				{
					progressBar2->Value = progressBar2->Value - 30;
				}
				else if (attack1 == true && block2 == true)
				{
					progressBar2->Value = progressBar2->Value;
				}
			}
		}
		if (e->KeyCode == Keys::Down)
		{
			block1 = true;
			if (model1 == false)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_block_left.png");
			}
			else if (model1 == true)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_block_right.png");
			}
		}
		//Персонаж слева
		if (e->KeyCode == Keys::A)
		{
			moveLeft2 = true;
			model2 = false;
		}
		if (e->KeyCode == Keys::D)
		{
			moveRight2 = true;
			model2 = true;
		}
		if (e->KeyCode == Keys::W)
		{
			attack2 = true;
			if (model2 == false)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_attack_left.png");
			}
			else if (model2 == true)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_attack_right.png");
			}

			if (pictureBox2->Left < pictureBox1->Right && pictureBox1->Right - pictureBox2->Left < 500)
			{
				if (attack2 == true && block1 == false)
				{
					if (progressBar1->Value <= 30)
					{
						progressBar1->Value = 1;
					}
					else {
						progressBar1->Value = progressBar1->Value - 30;
					}
				}
				else if (attack2 == true && block1 == true)
				{
					progressBar1->Value = progressBar1->Value;
				}

			}
			else if (pictureBox2->Right < pictureBox1->Left && pictureBox1->Right - pictureBox2->Left < 500)
			{
				if (attack2 == true && block1 == false)
				{
					if(progressBar1->Value <= 30)
					{
						progressBar1->Value = 1;
					}
					else {
						progressBar1->Value = progressBar1->Value - 30;
					}
				}
				else if (attack2 == true && block1 == true)
				{
					progressBar1->Value = progressBar1->Value;
				}

			}
		}
		if (e->KeyCode == Keys::S)
		{
			block2 = true;
			if (model2 == false)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_block_left.png");
			}
			else if (model2 == true)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_block_right.png");
			}
		}
		if (e->KeyCode == Keys::Escape)
		{
			escMenu = true;
		}

	}
	private: System::Void KeyisUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//Персонаж справа
		if (e->KeyCode == Keys::Left)
		{
			moveLeft1 = false;
		}
		if (e->KeyCode == Keys::Right)
		{
			moveRight1 = false;
		}
		if (e->KeyCode == Keys::Up)
		{
			attack1 = false;
			if (model1 == false)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			}
			else if (model1 == true)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			}
		}
		if (e->KeyCode == Keys::Down)
		{
			block1 = false;
			if (model1 == false)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			}
			else if (model1 == true)
			{
				pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			}
		}
		//Персонаж слева
		if (e->KeyCode == Keys::A)
		{
			moveLeft2 = false;
		}
		if (e->KeyCode == Keys::D)
		{
			moveRight2 = false;
		}
		if (e->KeyCode == Keys::W)
		{
			attack2 = false;
			if (model2 == false)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			}
			else if (model2 == true)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			}
		}
		if (e->KeyCode == Keys::S)
		{
			block2 = false;
			if (model2 == false)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			}
			else if (model2 == true)
			{
				pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			}
		}
		if (e->KeyCode == Keys::Escape)
		{
			escMenu = false;
		}
	}

	private: System::Void moveTimerEvent(System::Object^ sender, System::EventArgs^ e) {
		if (moveLeft1 == true && pictureBox1->Left > 0)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			pictureBox1->Left -= step;
		}
		if (moveRight1 == true && pictureBox1->Right < 1550)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			pictureBox1->Left += step;
		}
		if (moveLeft2 == true && pictureBox2->Left > 0)
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_left.png");
			pictureBox2->Left -= step;
		}
		if (moveRight2 == true && pictureBox2->Right < 1550)
		{
			pictureBox2->Image = System::Drawing::Bitmap::FromFile("Geralt_move_right.png");
			pictureBox2->Left += step;
		}

		if (escMenu == true)
		{
			this->BackgroundImage = System::Drawing::Image::FromFile(L"fon1.jpg");
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			button1->Visible = true;
			button2->Visible = true;
			button3->Visible = true;
			progressBar1->Visible = false;
			progressBar2->Visible = false;
			label1->Visible = false;
			label2->Visible = true;
			label3->Visible = true;
			this->button1->Text = L"Продолжить бой";
			if (endFight = true)
			{
				if (progressBar1->Value > progressBar2->Value)
				{
					button1->Text = L"Победил игрок справа";
				}
				else if (progressBar1->Value < progressBar2->Value)
				{
					button1->Text = L"Победил игрок слева";
				}
			}
			
		}

		if (progressBar1->Value <= 1 || progressBar2->Value <= 1)
		{
			escMenu = true;
			endFight = true;
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackgroundImage = System::Drawing::Image::FromFile(L"fon0.jpg");
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		progressBar1->Visible = true;
		progressBar2->Visible = true;
		label1->Visible = true;
		label2->Visible = false;
		label3->Visible = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		secondform->Show();
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
