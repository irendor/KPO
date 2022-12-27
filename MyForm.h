#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ нарисоватьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox_h;

	private: System::Windows::Forms::TextBox^ textBox_b;

	private: System::Windows::Forms::TextBox^ textBox_a;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::CheckBox^ checkBox_sin;

	private: System::Windows::Forms::CheckBox^ checkBox_cos;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton_sin;
	private: System::Windows::Forms::RadioButton^ radioButton_cos;
	private: System::Windows::Forms::RadioButton^ radioButton_main;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::CheckBox^ checkBox_main;
	private: System::Windows::Forms::TextBox^ textBox_koef;
	private: System::Windows::Forms::TextBox^ textBox_x1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_x2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_x3;

	private: System::Windows::Forms::ToolStripMenuItem^ измеритьДлинуКривойToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox_accuracy;

	private: System::Windows::Forms::TextBox^ textBox_second;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox_first;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_length;


	private: System::Windows::Forms::Label^ label8;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->нарисоватьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->измеритьДлинуКривойToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_main = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_sin = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_cos = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox_sin = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_cos = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_koef = (gcnew System::Windows::Forms::TextBox());
			this->textBox_x1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_x2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_x3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_main = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_accuracy = (gcnew System::Windows::Forms::TextBox());
			this->textBox_second = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_first = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_length = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1039, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->нарисоватьГрафикToolStripMenuItem,
					this->очиститьГрафикToolStripMenuItem, this->измеритьДлинуКривойToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// нарисоватьГрафикToolStripMenuItem
			// 
			this->нарисоватьГрафикToolStripMenuItem->Name = L"нарисоватьГрафикToolStripMenuItem";
			this->нарисоватьГрафикToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->нарисоватьГрафикToolStripMenuItem->Text = L"Нарисовать график";
			this->нарисоватьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::нарисоватьГрафикToolStripMenuItem_Click);
			// 
			// очиститьГрафикToolStripMenuItem
			// 
			this->очиститьГрафикToolStripMenuItem->Name = L"очиститьГрафикToolStripMenuItem";
			this->очиститьГрафикToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->очиститьГрафикToolStripMenuItem->Text = L"Очистить график";
			this->очиститьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьГрафикToolStripMenuItem_Click);
			// 
			// измеритьДлинуКривойToolStripMenuItem
			// 
			this->измеритьДлинуКривойToolStripMenuItem->Name = L"измеритьДлинуКривойToolStripMenuItem";
			this->измеритьДлинуКривойToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->измеритьДлинуКривойToolStripMenuItem->Text = L"Измерить длину кривой";
			this->измеритьДлинуКривойToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::измеритьДлинуКривойToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart);
			this->groupBox1->Location = System::Drawing::Point(9, 25);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(453, 361);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"График";
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->HeaderSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::Line;
			legend1->Name = L"Legend1";
			legend1->Title = L"Цвета графиков";
			legend1->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::DashLine;
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 17);
			this->chart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"cosinus";
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"sinus";
			series2->Name = L"Series2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"своя функция";
			series3->Name = L"Series3";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Size = System::Drawing::Size(453, 344);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox_h);
			this->groupBox2->Controls->Add(this->textBox_b);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox_a);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(478, 236);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(269, 150);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры построения графика функции";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(25, 76);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->MaximumSize = System::Drawing::Size(79, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 34);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Конечное значение";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_h
			// 
			this->textBox_h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_h->Location = System::Drawing::Point(148, 114);
			this->textBox_h->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(110, 28);
			this->textBox_h->TabIndex = 5;
			// 
			// textBox_b
			// 
			this->textBox_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_b->Location = System::Drawing::Point(148, 76);
			this->textBox_b->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(110, 28);
			this->textBox_b->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(21, 36);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->MaximumSize = System::Drawing::Size(90, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Начальное значение";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_a
			// 
			this->textBox_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a->Location = System::Drawing::Point(148, 36);
			this->textBox_a->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(110, 28);
			this->textBox_a->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 119);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"h (шаг)";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton_main);
			this->groupBox3->Controls->Add(this->radioButton_sin);
			this->groupBox3->Controls->Add(this->radioButton_cos);
			this->groupBox3->Location = System::Drawing::Point(478, 34);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(130, 113);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выбор функции";
			// 
			// radioButton_main
			// 
			this->radioButton_main->AutoSize = true;
			this->radioButton_main->Location = System::Drawing::Point(9, 83);
			this->radioButton_main->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton_main->Name = L"radioButton_main";
			this->radioButton_main->Size = System::Drawing::Size(96, 17);
			this->radioButton_main->TabIndex = 4;
			this->radioButton_main->TabStop = true;
			this->radioButton_main->Text = L"Своя функция";
			this->radioButton_main->UseVisualStyleBackColor = true;
			// 
			// radioButton_sin
			// 
			this->radioButton_sin->AutoSize = true;
			this->radioButton_sin->Location = System::Drawing::Point(9, 53);
			this->radioButton_sin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton_sin->Name = L"radioButton_sin";
			this->radioButton_sin->Size = System::Drawing::Size(66, 17);
			this->radioButton_sin->TabIndex = 3;
			this->radioButton_sin->TabStop = true;
			this->radioButton_sin->Text = L"y = sin(x)";
			this->radioButton_sin->UseVisualStyleBackColor = true;
			// 
			// radioButton_cos
			// 
			this->radioButton_cos->AutoSize = true;
			this->radioButton_cos->Location = System::Drawing::Point(9, 20);
			this->radioButton_cos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton_cos->Name = L"radioButton_cos";
			this->radioButton_cos->Size = System::Drawing::Size(70, 17);
			this->radioButton_cos->TabIndex = 2;
			this->radioButton_cos->TabStop = true;
			this->radioButton_cos->Text = L"y = cos(x)";
			this->radioButton_cos->UseVisualStyleBackColor = true;
			// 
			// checkBox_sin
			// 
			this->checkBox_sin->AutoSize = true;
			this->checkBox_sin->Location = System::Drawing::Point(11, 54);
			this->checkBox_sin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox_sin->Name = L"checkBox_sin";
			this->checkBox_sin->Size = System::Drawing::Size(67, 17);
			this->checkBox_sin->TabIndex = 1;
			this->checkBox_sin->Text = L"y = sin(x)";
			this->checkBox_sin->UseVisualStyleBackColor = true;
			// 
			// checkBox_cos
			// 
			this->checkBox_cos->AutoSize = true;
			this->checkBox_cos->Location = System::Drawing::Point(11, 22);
			this->checkBox_cos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox_cos->Name = L"checkBox_cos";
			this->checkBox_cos->Size = System::Drawing::Size(71, 17);
			this->checkBox_cos->TabIndex = 0;
			this->checkBox_cos->Text = L"y = cos(x)";
			this->checkBox_cos->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox_koef);
			this->groupBox4->Controls->Add(this->textBox_x1);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox_x2);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->textBox_x3);
			this->groupBox4->Location = System::Drawing::Point(478, 152);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(269, 79);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ввод данных для своей функции";
			// 
			// textBox_koef
			// 
			this->textBox_koef->Location = System::Drawing::Point(237, 37);
			this->textBox_koef->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_koef->Name = L"textBox_koef";
			this->textBox_koef->Size = System::Drawing::Size(31, 20);
			this->textBox_koef->TabIndex = 8;
			// 
			// textBox_x1
			// 
			this->textBox_x1->Location = System::Drawing::Point(178, 37);
			this->textBox_x1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_x1->Name = L"textBox_x1";
			this->textBox_x1->Size = System::Drawing::Size(30, 20);
			this->textBox_x1->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(208, 38);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"x +";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(137, 38);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"x^2 +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(59, 38);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"x^3 +";
			// 
			// textBox_x2
			// 
			this->textBox_x2->Location = System::Drawing::Point(104, 37);
			this->textBox_x2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_x2->Name = L"textBox_x2";
			this->textBox_x2->Size = System::Drawing::Size(30, 20);
			this->textBox_x2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 37);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"y =";
			// 
			// textBox_x3
			// 
			this->textBox_x3->Location = System::Drawing::Point(27, 37);
			this->textBox_x3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_x3->Name = L"textBox_x3";
			this->textBox_x3->Size = System::Drawing::Size(30, 20);
			this->textBox_x3->TabIndex = 1;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox_main);
			this->groupBox5->Controls->Add(this->checkBox_sin);
			this->groupBox5->Controls->Add(this->checkBox_cos);
			this->groupBox5->Location = System::Drawing::Point(612, 34);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Size = System::Drawing::Size(135, 113);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Очистка графика";
			// 
			// checkBox_main
			// 
			this->checkBox_main->AutoSize = true;
			this->checkBox_main->Location = System::Drawing::Point(11, 83);
			this->checkBox_main->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox_main->Name = L"checkBox_main";
			this->checkBox_main->Size = System::Drawing::Size(97, 17);
			this->checkBox_main->TabIndex = 2;
			this->checkBox_main->Text = L"Своя функция";
			this->checkBox_main->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->textBox_accuracy);
			this->groupBox7->Controls->Add(this->textBox_second);
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Controls->Add(this->textBox_first);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Location = System::Drawing::Point(759, 34);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox7->Size = System::Drawing::Size(269, 169);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Измерение длины кривой";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(20, 76);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->MaximumSize = System::Drawing::Size(79, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 34);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Конечное значение";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_accuracy
			// 
			this->textBox_accuracy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_accuracy->Location = System::Drawing::Point(141, 114);
			this->textBox_accuracy->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_accuracy->Name = L"textBox_accuracy";
			this->textBox_accuracy->Size = System::Drawing::Size(110, 28);
			this->textBox_accuracy->TabIndex = 5;
			// 
			// textBox_second
			// 
			this->textBox_second->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_second->Location = System::Drawing::Point(141, 76);
			this->textBox_second->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_second->Name = L"textBox_second";
			this->textBox_second->Size = System::Drawing::Size(110, 28);
			this->textBox_second->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(16, 36);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->MaximumSize = System::Drawing::Size(82, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 34);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Начальное значение";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_first
			// 
			this->textBox_first->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_first->Location = System::Drawing::Point(141, 36);
			this->textBox_first->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_first->Name = L"textBox_first";
			this->textBox_first->Size = System::Drawing::Size(110, 28);
			this->textBox_first->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(21, 119);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 17);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Точность";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label9);
			this->groupBox6->Controls->Add(this->textBox_length);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Location = System::Drawing::Point(760, 224);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox6->Size = System::Drawing::Size(269, 162);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Результат";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(224, 91);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 26);
			this->label9->TabIndex = 2;
			this->label9->Text = L"см";
			// 
			// textBox_length
			// 
			this->textBox_length->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_length->Location = System::Drawing::Point(4, 89);
			this->textBox_length->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_length->Name = L"textBox_length";
			this->textBox_length->Size = System::Drawing::Size(208, 32);
			this->textBox_length->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(0, 47);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(174, 26);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Длина кривой =";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 397);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Измерение длины кривой на экране";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: double a, b, h;
		private: double x, y;
		private: double x1, x2, x3, koef;
		private: double first, second, accuracy, length, y1, y2;

	private: System::Void нарисоватьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: void DefaultParams();
	private: System::Void измеритьДлинуКривойToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
