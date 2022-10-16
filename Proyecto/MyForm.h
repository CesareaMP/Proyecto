#pragma once
#include "Pila.h";
#include <wchar.h>
#include <locale>
#include <exception>
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
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(41, 117);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(565, 260);
			this->listBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 548);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
					str = nullptr;
				}
				for (int i = 0; i < artista->Length; i++)
				{
					artista += artista[i];
				}
				nueva_pila.Add(msclr::interop::marshal_as<std::string>(artista), msclr::interop::marshal_as<std::string>(nombre));
				
			}
			for (int i = 0; i < nueva_pila.Count() + 1; i++)
			{
				listBox1->Items->Add(gcnew String(nueva_pila.Pop().c_str()));
			}
			
			
	}
	};
}
