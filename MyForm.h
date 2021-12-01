#pragma once
#include "Service.h"

namespace LivrablePOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;



	private: NS_Service::Service^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txt_num_tel;
	private: System::Windows::Forms::TextBox^ txt_date_naissance;
	private: System::Windows::Forms::TextBox^ txt_date_achat;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TextBox^ txt_adr_liv;
	private: System::Windows::Forms::TextBox^ txt_adr_fact;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_cp_liv;
	private: System::Windows::Forms::TextBox^ txt_ville;
	private: System::Windows::Forms::TextBox^ txt_cp_fact;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_num_tel = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_achat = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_cp_liv = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->txt_cp_fact = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_liv = (gcnew System::Windows::Forms::TextBox());
			this->txt_adr_fact = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(7, 22);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(1224, 185);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(38, 232);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(100, 103);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(178, 232);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(100, 46);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS Client";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(178, 432);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 46);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(178, 367);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(100, 46);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(295, 244);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(408, 22);
			this->txt_id->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(295, 295);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(408, 22);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(295, 342);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(408, 22);
			this->txt_prenom->TabIndex = 7;
			// 
			// txt_num_tel
			// 
			this->txt_num_tel->Location = System::Drawing::Point(295, 391);
			this->txt_num_tel->Margin = System::Windows::Forms::Padding(4);
			this->txt_num_tel->Name = L"txt_num_tel";
			this->txt_num_tel->Size = System::Drawing::Size(408, 22);
			this->txt_num_tel->TabIndex = 8;
			// 
			// txt_date_naissance
			// 
			this->txt_date_naissance->Location = System::Drawing::Point(295, 438);
			this->txt_date_naissance->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_naissance->Name = L"txt_date_naissance";
			this->txt_date_naissance->Size = System::Drawing::Size(408, 22);
			this->txt_date_naissance->TabIndex = 9;
			this->txt_date_naissance->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_date_naissance_TextChanged);
			// 
			// txt_date_achat
			// 
			this->txt_date_achat->Location = System::Drawing::Point(295, 485);
			this->txt_date_achat->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_achat->Name = L"txt_date_achat";
			this->txt_date_achat->Size = System::Drawing::Size(408, 22);
			this->txt_date_achat->TabIndex = 10;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 32);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(131, 21);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Select everyone";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 72);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(96, 21);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Select one";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1246, 715);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->txt_cp_liv);
			this->tabPage1->Controls->Add(this->txt_ville);
			this->tabPage1->Controls->Add(this->txt_cp_fact);
			this->tabPage1->Controls->Add(this->txt_adr_liv);
			this->tabPage1->Controls->Add(this->txt_adr_fact);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dgv_enr);
			this->tabPage1->Controls->Add(this->btn_load);
			this->tabPage1->Controls->Add(this->btn_insert);
			this->tabPage1->Controls->Add(this->txt_date_achat);
			this->tabPage1->Controls->Add(this->btn_delete);
			this->tabPage1->Controls->Add(this->txt_date_naissance);
			this->tabPage1->Controls->Add(this->btn_update);
			this->tabPage1->Controls->Add(this->txt_num_tel);
			this->tabPage1->Controls->Add(this->txt_id);
			this->tabPage1->Controls->Add(this->txt_prenom);
			this->tabPage1->Controls->Add(this->txt_nom);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1238, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestion Client";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(178, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 46);
			this->button1->TabIndex = 30;
			this->button1->Text = L"INS Adresse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_adr_Click);
			// 
			// txt_cp_liv
			// 
			this->txt_cp_liv->Location = System::Drawing::Point(726, 342);
			this->txt_cp_liv->Name = L"txt_cp_liv";
			this->txt_cp_liv->Size = System::Drawing::Size(408, 22);
			this->txt_cp_liv->TabIndex = 29;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(726, 295);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(408, 22);
			this->txt_ville->TabIndex = 28;
			// 
			// txt_cp_fact
			// 
			this->txt_cp_fact->Location = System::Drawing::Point(726, 244);
			this->txt_cp_fact->Name = L"txt_cp_fact";
			this->txt_cp_fact->Size = System::Drawing::Size(408, 22);
			this->txt_cp_fact->TabIndex = 27;
			// 
			// txt_adr_liv
			// 
			this->txt_adr_liv->Location = System::Drawing::Point(295, 581);
			this->txt_adr_liv->Name = L"txt_adr_liv";
			this->txt_adr_liv->Size = System::Drawing::Size(408, 22);
			this->txt_adr_liv->TabIndex = 26;
			// 
			// txt_adr_fact
			// 
			this->txt_adr_fact->Location = System::Drawing::Point(295, 536);
			this->txt_adr_fact->Name = L"txt_adr_fact";
			this->txt_adr_fact->Size = System::Drawing::Size(408, 22);
			this->txt_adr_fact->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(723, 321);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(201, 17);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Code Postal Adresse Livraison";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(723, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Ville Adresse";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(723, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(214, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Code postal Adresse Facturation";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(298, 561);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Adresse Livraison";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(298, 515);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Adresse Facturation";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(7, 360);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(164, 100);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sélectionner un mode";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(298, 464);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Date 1er achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(298, 414);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date naissance Client";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Numéro Tél Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prénom Client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Nom Client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ID Client";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1238, 686);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Gestion Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1238, 686);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gestion Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1238, 686);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion Article";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1238, 686);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Gestion Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 739);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Gestion des clients";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->radioButton1->Checked == true) {
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else if (this->radioButton2->Checked == true) {
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerUnePersonne("Rsl", Convert::ToInt32(this->txt_id->Text));
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Service::Service();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text, this->txt_num_tel->Text, this->txt_date_naissance->Text, this->txt_date_achat->Text);
	}
	private: System::Void txt_date_naissance_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->deletesomeone(Convert::ToInt32(this->txt_id->Text));
	}

	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->modifierClient(Convert::ToInt32(this->txt_id->Text), this->txt_nom->Text, this->txt_prenom->Text, this->txt_num_tel->Text, this->txt_date_naissance->Text, this->txt_date_achat->Text);
	}
	

private: System::Void btn_insert_adr_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->ajouterUneAdresse(this->txt_adr_fact->Text, this->txt_adr_liv->Text, this->txt_cp_fact->Text, this->txt_ville->Text, this->txt_cp_liv->Text);
}
};
}