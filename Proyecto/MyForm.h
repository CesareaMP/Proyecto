#pragma once
#include "Pila.h";
#include "Cola.h";
#include "List.h";
#include <fstream>
#include <msclr\marshal_cppstd.h>//libreria que permite convertir system::string a std::string y viceversa
namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	Pila nueva_pila;
	COLA nueva_cola;
	LIST lista_original;
	LIST lista_existente;
	LIST lista_ordenada;
	bool cancion = true;
	bool artista = true;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ list_muestreo;
	private: System::Windows::Forms::ListBox^ list_agregar;
	protected:


	private: System::Windows::Forms::TextBox^ txt_nombre_artista;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_nombre_cancion;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_reproduccion_actual;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->list_muestreo = (gcnew System::Windows::Forms::ListBox());
			this->list_agregar = (gcnew System::Windows::Forms::ListBox());
			this->txt_nombre_artista = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre_cancion = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_reproduccion_actual = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// list_muestreo
			// 
			this->list_muestreo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->list_muestreo->Enabled = false;
			this->list_muestreo->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->list_muestreo->FormattingEnabled = true;
			this->list_muestreo->ItemHeight = 22;
			this->list_muestreo->Location = System::Drawing::Point(44, 142);
			this->list_muestreo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->list_muestreo->MultiColumn = true;
			this->list_muestreo->Name = L"list_muestreo";
			this->list_muestreo->Size = System::Drawing::Size(373, 378);
			this->list_muestreo->TabIndex = 0;
			// 
			// list_agregar
			// 
			this->list_agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)), static_cast<System::Int32>(static_cast<System::Byte>(201)),
				static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->list_agregar->Enabled = false;
			this->list_agregar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->list_agregar->FormattingEnabled = true;
			this->list_agregar->ItemHeight = 22;
			this->list_agregar->Location = System::Drawing::Point(44, 142);
			this->list_agregar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->list_agregar->MultiColumn = true;
			this->list_agregar->Name = L"list_agregar";
			this->list_agregar->Size = System::Drawing::Size(373, 378);
			this->list_agregar->TabIndex = 1;
			this->list_agregar->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::list_agregar_SelectedIndexChanged);
			// 
			// txt_nombre_artista
			// 
			this->txt_nombre_artista->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->txt_nombre_artista->Location = System::Drawing::Point(44, 42);
			this->txt_nombre_artista->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nombre_artista->Name = L"txt_nombre_artista";
			this->txt_nombre_artista->Size = System::Drawing::Size(207, 22);
			this->txt_nombre_artista->TabIndex = 2;
			this->txt_nombre_artista->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre del artista";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre de la canción";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txt_nombre_cancion
			// 
			this->txt_nombre_cancion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->txt_nombre_cancion->Location = System::Drawing::Point(44, 107);
			this->txt_nombre_cancion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nombre_cancion->Name = L"txt_nombre_cancion";
			this->txt_nombre_cancion->Size = System::Drawing::Size(207, 22);
			this->txt_nombre_cancion->TabIndex = 4;
			this->txt_nombre_cancion->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_nombre_cancion_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(259, 42);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 87);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txt_reproduccion_actual
			// 
			this->txt_reproduccion_actual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->txt_reproduccion_actual->Enabled = false;
			this->txt_reproduccion_actual->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_reproduccion_actual->ForeColor = System::Drawing::SystemColors::Desktop;
			this->txt_reproduccion_actual->Location = System::Drawing::Point(47, 46);
			this->txt_reproduccion_actual->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_reproduccion_actual->Name = L"txt_reproduccion_actual";
			this->txt_reproduccion_actual->Size = System::Drawing::Size(248, 26);
			this->txt_reproduccion_actual->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(47, 78);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 51);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Ordenar por Cancion A<-->Z";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(240, 78);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(177, 51);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Ordenar por Artista A<-->Z";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button4->Location = System::Drawing::Point(301, 31);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 43);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Siguiente";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Reproduciendo";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button5->Location = System::Drawing::Point(259, 534);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 47);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Agregar a pila";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button6->Location = System::Drawing::Point(44, 534);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button6->Size = System::Drawing::Size(160, 47);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Eliminar";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button7->Location = System::Drawing::Point(257, 534);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 47);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Exportar";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button8->Location = System::Drawing::Point(44, 534);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(207, 47);
			this->button8->TabIndex = 15;
			this->button8->Text = L"Mostrar Original";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel1->Controls->Add(this->list_agregar);
			this->panel1->Controls->Add(this->txt_nombre_artista);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->txt_nombre_cancion);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(53, 155);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(452, 608);
			this->panel1->TabIndex = 16;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->list_muestreo);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->txt_reproduccion_actual);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(544, 155);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(469, 608);
			this->panel2->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(53, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(960, 95);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1062, 806);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "rolas.csv";
		StreamReader^ din = File::OpenText(fileName);
		String^ str = din->ReadLine();
		int contador = 0;
		while (str != nullptr) {
			String^ comas = str->Split(',')[contador];
			String^ nombre = comas->Split('-')[0];
			contador++;
			String^ artista = "";
			for (int i = nombre->Length + 1; i <= comas->Length - 1; i++)
			{
				artista += comas[i];
			}
			if (artista[artista->Length - 1] == ';')
			{
				artista = artista->Split(';')[0];
				str = nullptr;
			}
			nueva_pila.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(nombre));
			lista_original.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(nombre));
			lista_existente.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(nombre));
		}
		list_muestreo->Items->Clear();
		int iterador = nueva_pila.Count();
		for (int i = 0; i < iterador; i++)
		{
			list_muestreo->Items->Add(gcnew String(nueva_pila.Pop().c_str()));
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (txt_nombre_cancion->Text!="")
		{
			string pasar_datos = "";
			nueva_cola.Add(msclr::interop::marshal_as<std::string>(txt_nombre_artista->Text), msclr::interop::marshal_as<std::string>(txt_nombre_cancion->Text));
			if (txt_nombre_artista->Text=="")
			{
				txt_nombre_artista->Text = "desconocido";
			}
			pasar_datos = msclr::interop::marshal_as<std::string>(txt_nombre_cancion->Text) + "-" + msclr::interop::marshal_as<std::string>(txt_nombre_artista->Text);
			txt_nombre_artista->Text = "";
			txt_nombre_cancion->Text = "";
			list_agregar->Items->Add(gcnew String(pasar_datos.c_str()));
			/*list_agregar->Items->Add(gcnew String(nueva_cola.Get_song().c_str()));*/
		}
		else
		{
			MessageBox::Show("Debe ingresar el nombre de la canción");
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		list_muestreo->SelectedIndex = 0;
		txt_reproduccion_actual->Text = Convert::ToString(list_muestreo->Text);
		list_muestreo->Items->RemoveAt(0);
		lista_existente.delete_last();
	}
	catch (Exception^e)
	{
		//MessageBox::Show("No sea idiota ya no hay canciones");
		txt_reproduccion_actual->Text = "";
		lista_original.delete_list();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		nueva_cola.Get_song();
		list_agregar->Items->RemoveAt(0);
	}
	catch (Exception^e)
	{
		MessageBox::Show("No hay nada que eliminar");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cancion==true)
	{
		cancion = false;
		lista_existente.bubble_sort_cancion(cancion);
	}
	else
	{
		cancion = true;
		lista_existente.bubble_sort_cancion(cancion);
	}
	list_muestreo->Items->Clear();
		
		for (int i = 0; i < lista_existente.Count(); i++)
		{
			list_muestreo->Items->Add(gcnew String(lista_existente.Get(i).c_str()));
		}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	lista_existente.delete_list();
	list_muestreo->Items->Clear();
	for (int i = 0; i < lista_original.Count(); i++)
	{
		String^ todoget = gcnew String(lista_original.Get(i).c_str());
		String^ cancion = todoget->Split('-')[0];
		String^ artista = todoget->Split('-')[1];
		lista_existente.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(cancion));
	}
	for (int i = 0; i < lista_existente.Count(); i++)
	{
		list_muestreo->Items->Add(gcnew String(lista_existente.Get(i).c_str()));
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int iterador = nueva_cola.Count();
	for (int i = 0; i < iterador; i++)
	{
		String^ todoget = gcnew String(nueva_cola.Get_song().c_str());
		String^ cancion = todoget->Split('-')[0];
		String^ artista = todoget->Split('-')[1];
		nueva_pila.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(cancion));
		lista_original.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(cancion));
		lista_existente.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(cancion));
	
	}
	list_agregar->Items->Clear();
	list_muestreo->Items->Clear();
	for (int i = 0; i < lista_existente.Count(); i++)
	{
		list_muestreo->Items->Add(gcnew String(lista_existente.Get(i).c_str()));
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (artista==true)
	{
		artista = false;
		lista_existente.bubble_sort_artista(artista);
	}
	else
	{
		artista = true;
		lista_existente.bubble_sort_artista(artista);
	}
	list_muestreo->Items->Clear();

	for (int i = 0; i < lista_existente.Count(); i++)
	{
		list_muestreo->Items->Add(gcnew String(lista_existente.Get(i).c_str()));
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	string exportar = "";
	for (int i = 0; i < lista_existente.Count(); i++)
	{
		if (i==lista_existente.Count()-1)
		{
			exportar += lista_existente.Get(i) + ";";
		}
		else
		{
			exportar += lista_existente.Get(i) + ",";
		}
	}
	std::ofstream myfile;
	myfile.open("playlist.csv");
	myfile << exportar;
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void list_agregar_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_nombre_cancion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
