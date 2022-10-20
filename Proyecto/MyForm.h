#pragma once
#include "Pila.h";
#include "Cola.h";
#include "List.h";
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
			this->SuspendLayout();
			// 
			// list_muestreo
			// 
			this->list_muestreo->Enabled = false;
			this->list_muestreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->list_muestreo->FormattingEnabled = true;
			this->list_muestreo->ItemHeight = 25;
			this->list_muestreo->Location = System::Drawing::Point(474, 155);
			this->list_muestreo->MultiColumn = true;
			this->list_muestreo->Name = L"list_muestreo";
			this->list_muestreo->Size = System::Drawing::Size(373, 404);
			this->list_muestreo->TabIndex = 0;
			// 
			// list_agregar
			// 
			this->list_agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->list_agregar->FormattingEnabled = true;
			this->list_agregar->ItemHeight = 25;
			this->list_agregar->Location = System::Drawing::Point(25, 155);
			this->list_agregar->MultiColumn = true;
			this->list_agregar->Name = L"list_agregar";
			this->list_agregar->Size = System::Drawing::Size(334, 404);
			this->list_agregar->TabIndex = 1;
			// 
			// txt_nombre_artista
			// 
			this->txt_nombre_artista->Location = System::Drawing::Point(167, 12);
			this->txt_nombre_artista->Name = L"txt_nombre_artista";
			this->txt_nombre_artista->Size = System::Drawing::Size(100, 22);
			this->txt_nombre_artista->TabIndex = 2;
			this->txt_nombre_artista->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre del artista";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre de la canción";
			// 
			// txt_nombre_cancion
			// 
			this->txt_nombre_cancion->Location = System::Drawing::Point(167, 58);
			this->txt_nombre_cancion->Name = L"txt_nombre_cancion";
			this->txt_nombre_cancion->Size = System::Drawing::Size(100, 22);
			this->txt_nombre_cancion->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(273, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txt_reproduccion_actual
			// 
			this->txt_reproduccion_actual->Enabled = false;
			this->txt_reproduccion_actual->Location = System::Drawing::Point(540, 61);
			this->txt_reproduccion_actual->Name = L"txt_reproduccion_actual";
			this->txt_reproduccion_actual->Size = System::Drawing::Size(259, 22);
			this->txt_reproduccion_actual->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(474, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 46);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Ordenar por Cancion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(623, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Ordenar por Artista";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(759, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 46);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Siguiente";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(620, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Reproduciendo";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(199, 565);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(160, 47);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Agregar a pila";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(25, 565);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 47);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Eliminar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(687, 565);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 47);
			this->button7->TabIndex = 14;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(372, 97);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 42);
			this->button8->TabIndex = 15;
			this->button8->Text = L"Mostrar Original";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(872, 733);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_reproduccion_actual);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_nombre_cancion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nombre_artista);
			this->Controls->Add(this->list_agregar);
			this->Controls->Add(this->list_muestreo);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

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
			
		}
		list_muestreo->Items->Clear();
		txt_reproduccion_actual->Text = gcnew String(nueva_pila.Pop().c_str());
		int iterador = nueva_pila.Count();
		for (int i = 0; i < iterador; i++)
		{
			list_muestreo->Items->Add(gcnew String(nueva_pila.Pop().c_str()));
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_nombre_cancion->Text!="")
		{
			nueva_cola.Add(msclr::interop::marshal_as<std::string>(txt_nombre_artista->Text), msclr::interop::marshal_as<std::string>(txt_nombre_cancion->Text));
			txt_nombre_artista->Text = "";
			txt_nombre_cancion->Text = "";
			list_agregar->Items->Add(gcnew String(nueva_cola.Get_song().c_str()));
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
	}
	catch (Exception^e)
	{
		//MessageBox::Show("No sea idiota ya no hay canciones");
		txt_reproduccion_actual->Text = "";
		lista_original.delete_list();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = list_agregar->SelectedIndex;
	nueva_cola.delet(index, nueva_cola.Count()-1);
	list_agregar->Items->Remove(list_agregar->SelectedItem);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	string original = "";
	for (int i = 0; i < lista_original.Count(); i++)
	{
		original += lista_original.Get(i)+ "\n";
	}
	MessageBox::Show(gcnew String(original.c_str()));
}
};
}
