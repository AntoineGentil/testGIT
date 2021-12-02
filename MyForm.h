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


	private: System::Windows::Forms::Button^ btn_insert;


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

	private: System::Windows::Forms::Button^ INSERER_ADRESSE;

	private: System::Windows::Forms::TextBox^ txt_Ville_perso;



	private: System::Windows::Forms::TextBox^ txt_Code_Postal;

	private: System::Windows::Forms::TextBox^ txt_adresse_perso;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;





	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ datapersonnel;

	private: System::Windows::Forms::Button^ btn_load_perso;
	private: System::Windows::Forms::Button^ INSERER_PERSO;


	private: System::Windows::Forms::TextBox^ txt_ID_Données;
	private: System::Windows::Forms::Button^ DELETE_PERSO;


	private: System::Windows::Forms::TextBox^ txt_ID_Superieur_Personnel;
	private: System::Windows::Forms::Button^ UPDATE_Perso;


	private: System::Windows::Forms::TextBox^ txt_date_embauche;

	private: System::Windows::Forms::TextBox^ txt_ID_Personnel;
	private: System::Windows::Forms::TextBox^ txt_Prenom_Personnel;

	private: System::Windows::Forms::TextBox^ txt_Nom_Personnel;
private: System::Windows::Forms::Button^ button3;




private: System::Windows::Forms::TextBox^ txt_prenom_superieur;
private: System::Windows::Forms::Button^ btn_Update_Superieur;
private: System::Windows::Forms::Button^ btn_Delete_Superieur;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::TextBox^ txt_Nom_Superieur;
private: System::Windows::Forms::Button^ UpdateAdresse;
private: System::Windows::Forms::TextBox^ txt_Id_Superieur;
private: System::Windows::Forms::Label^ ID_Supérieur;


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
			this->btn_insert = (gcnew System::Windows::Forms::Button());
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
			this->ID_Supérieur = (gcnew System::Windows::Forms::Label());
			this->txt_Id_Superieur = (gcnew System::Windows::Forms::TextBox());
			this->UpdateAdresse = (gcnew System::Windows::Forms::Button());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btn_Delete_Superieur = (gcnew System::Windows::Forms::Button());
			this->btn_Update_Superieur = (gcnew System::Windows::Forms::Button());
			this->txt_prenom_superieur = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nom_Superieur = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->INSERER_ADRESSE = (gcnew System::Windows::Forms::Button());
			this->txt_Ville_perso = (gcnew System::Windows::Forms::TextBox());
			this->txt_Code_Postal = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse_perso = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->datapersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load_perso = (gcnew System::Windows::Forms::Button());
			this->INSERER_PERSO = (gcnew System::Windows::Forms::Button());
			this->txt_ID_Données = (gcnew System::Windows::Forms::TextBox());
			this->DELETE_PERSO = (gcnew System::Windows::Forms::Button());
			this->txt_ID_Superieur_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->UPDATE_Perso = (gcnew System::Windows::Forms::Button());
			this->txt_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_Prenom_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nom_Personnel = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datapersonnel))->BeginInit();
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
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(295, 244);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(408, 22);
			this->txt_id->TabIndex = 5;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_id_TextChanged);
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
			this->radioButton1->Size = System::Drawing::Size(126, 20);
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
			this->radioButton2->Size = System::Drawing::Size(92, 20);
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
			this->tabControl1->Size = System::Drawing::Size(1424, 715);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Controls->Add(this->btn_insert);
			this->tabPage1->Controls->Add(this->txt_date_achat);
			this->tabPage1->Controls->Add(this->txt_date_naissance);
			this->tabPage1->Controls->Add(this->txt_num_tel);
			this->tabPage1->Controls->Add(this->txt_id);
			this->tabPage1->Controls->Add(this->txt_prenom);
			this->tabPage1->Controls->Add(this->txt_nom);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1416, 686);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Gestion Client";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			this->label11->Size = System::Drawing::Size(192, 16);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Code Postal Adresse Livraison";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(723, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 16);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Ville Adresse";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(723, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(203, 16);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Code postal Adresse Facturation";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(298, 561);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Adresse Livraison";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(298, 515);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 16);
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
			this->label6->Size = System::Drawing::Size(94, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Date 1er achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(298, 414);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date naissance Client";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Numéro Tél Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prénom Client";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Nom Client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"ID Client";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ID_Supérieur);
			this->tabPage2->Controls->Add(this->txt_Id_Superieur);
			this->tabPage2->Controls->Add(this->UpdateAdresse);
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Controls->Add(this->radioButton5);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->btn_Delete_Superieur);
			this->tabPage2->Controls->Add(this->btn_Update_Superieur);
			this->tabPage2->Controls->Add(this->txt_prenom_superieur);
			this->tabPage2->Controls->Add(this->txt_Nom_Superieur);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->INSERER_ADRESSE);
			this->tabPage2->Controls->Add(this->txt_Ville_perso);
			this->tabPage2->Controls->Add(this->txt_Code_Postal);
			this->tabPage2->Controls->Add(this->txt_adresse_perso);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->datapersonnel);
			this->tabPage2->Controls->Add(this->btn_load_perso);
			this->tabPage2->Controls->Add(this->INSERER_PERSO);
			this->tabPage2->Controls->Add(this->txt_ID_Données);
			this->tabPage2->Controls->Add(this->DELETE_PERSO);
			this->tabPage2->Controls->Add(this->txt_ID_Superieur_Personnel);
			this->tabPage2->Controls->Add(this->UPDATE_Perso);
			this->tabPage2->Controls->Add(this->txt_date_embauche);
			this->tabPage2->Controls->Add(this->txt_ID_Personnel);
			this->tabPage2->Controls->Add(this->txt_Prenom_Personnel);
			this->tabPage2->Controls->Add(this->txt_Nom_Personnel);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1416, 686);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Gestion Personnel";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ID_Supérieur
			// 
			this->ID_Supérieur->AutoSize = true;
			this->ID_Supérieur->Location = System::Drawing::Point(729, 510);
			this->ID_Supérieur->Name = L"ID_Supérieur";
			this->ID_Supérieur->Size = System::Drawing::Size(85, 16);
			this->ID_Supérieur->TabIndex = 71;
			this->ID_Supérieur->Text = L"ID_Supérieur";
			this->ID_Supérieur->Click += gcnew System::EventHandler(this, &MyForm::ID_Supérieur_Click);
			// 
			// txt_Id_Superieur
			// 
			this->txt_Id_Superieur->Location = System::Drawing::Point(726, 527);
			this->txt_Id_Superieur->Name = L"txt_Id_Superieur";
			this->txt_Id_Superieur->Size = System::Drawing::Size(408, 22);
			this->txt_Id_Superieur->TabIndex = 70;
			this->txt_Id_Superieur->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_Id_Superieur_TextChanged);
			// 
			// UpdateAdresse
			// 
			this->UpdateAdresse->Location = System::Drawing::Point(38, 378);
			this->UpdateAdresse->Name = L"UpdateAdresse";
			this->UpdateAdresse->Size = System::Drawing::Size(112, 113);
			this->UpdateAdresse->TabIndex = 69;
			this->UpdateAdresse->Text = L"UpdateAdresse";
			this->UpdateAdresse->UseVisualStyleBackColor = true;
			this->UpdateAdresse->Click += gcnew System::EventHandler(this, &MyForm::UpdateAdresse_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(13, 569);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(139, 20);
			this->radioButton6->TabIndex = 68;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Select 1 personnel";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(11, 542);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(146, 20);
			this->radioButton5->TabIndex = 67;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Select all personnel";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(11, 611);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(169, 20);
			this->radioButton3->TabIndex = 61;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Select every superieurs";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(13, 637);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(137, 20);
			this->radioButton4->TabIndex = 61;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Select 1 Superieur";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(726, 450);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(134, 16);
			this->label13->TabIndex = 66;
			this->label13->Text = L"Prénom du supérieur ";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(726, 391);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 16);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Nom du supérieur";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// btn_Delete_Superieur
			// 
			this->btn_Delete_Superieur->Location = System::Drawing::Point(726, 621);
			this->btn_Delete_Superieur->Name = L"btn_Delete_Superieur";
			this->btn_Delete_Superieur->Size = System::Drawing::Size(424, 36);
			this->btn_Delete_Superieur->TabIndex = 64;
			this->btn_Delete_Superieur->Text = L"btn_Delete_Superieur";
			this->btn_Delete_Superieur->UseVisualStyleBackColor = true;
			this->btn_Delete_Superieur->Click += gcnew System::EventHandler(this, &MyForm::btn_Delete_Superieur_Click);
			// 
			// btn_Update_Superieur
			// 
			this->btn_Update_Superieur->Location = System::Drawing::Point(726, 569);
			this->btn_Update_Superieur->Name = L"btn_Update_Superieur";
			this->btn_Update_Superieur->Size = System::Drawing::Size(408, 39);
			this->btn_Update_Superieur->TabIndex = 63;
			this->btn_Update_Superieur->Text = L"Update Superieur";
			this->btn_Update_Superieur->UseVisualStyleBackColor = true;
			this->btn_Update_Superieur->Click += gcnew System::EventHandler(this, &MyForm::btn_Update_Superieur_Click_);
			// 
			// txt_prenom_superieur
			// 
			this->txt_prenom_superieur->Location = System::Drawing::Point(726, 475);
			this->txt_prenom_superieur->Name = L"txt_prenom_superieur";
			this->txt_prenom_superieur->Size = System::Drawing::Size(408, 22);
			this->txt_prenom_superieur->TabIndex = 62;
			// 
			// txt_Nom_Superieur
			// 
			this->txt_Nom_Superieur->Location = System::Drawing::Point(726, 421);
			this->txt_Nom_Superieur->Name = L"txt_Nom_Superieur";
			this->txt_Nom_Superieur->Size = System::Drawing::Size(408, 22);
			this->txt_Nom_Superieur->TabIndex = 61;
			this->txt_Nom_Superieur->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_Nom_Superieur_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(726, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(408, 46);
			this->button3->TabIndex = 60;
			this->button3->Text = L"AJOUTER des supérieurs";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::INSERT_Superieur_Click);
			// 
			// INSERER_ADRESSE
			// 
			this->INSERER_ADRESSE->Location = System::Drawing::Point(178, 326);
			this->INSERER_ADRESSE->Name = L"INSERER_ADRESSE";
			this->INSERER_ADRESSE->Size = System::Drawing::Size(100, 46);
			this->INSERER_ADRESSE->TabIndex = 59;
			this->INSERER_ADRESSE->Text = L"INS Adresse";
			this->INSERER_ADRESSE->UseVisualStyleBackColor = true;
			this->INSERER_ADRESSE->Click += gcnew System::EventHandler(this, &MyForm::insert_adres_Click);
			// 
			// txt_Ville_perso
			// 
			this->txt_Ville_perso->Location = System::Drawing::Point(726, 275);
			this->txt_Ville_perso->Name = L"txt_Ville_perso";
			this->txt_Ville_perso->Size = System::Drawing::Size(408, 22);
			this->txt_Ville_perso->TabIndex = 56;
			// 
			// txt_Code_Postal
			// 
			this->txt_Code_Postal->Location = System::Drawing::Point(295, 612);
			this->txt_Code_Postal->Name = L"txt_Code_Postal";
			this->txt_Code_Postal->Size = System::Drawing::Size(408, 22);
			this->txt_Code_Postal->TabIndex = 55;
			// 
			// txt_adresse_perso
			// 
			this->txt_adresse_perso->Location = System::Drawing::Point(295, 567);
			this->txt_adresse_perso->Name = L"txt_adresse_perso";
			this->txt_adresse_perso->Size = System::Drawing::Size(408, 22);
			this->txt_adresse_perso->TabIndex = 54;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(723, 251);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 16);
			this->label14->TabIndex = 51;
			this->label14->Text = L"Ville Personnel";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(298, 592);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 16);
			this->label15->TabIndex = 50;
			this->label15->Text = L"Code Postal Personnel";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(298, 546);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(122, 16);
			this->label16->TabIndex = 49;
			this->label16->Text = L"Adresse Personnel";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(295, 495);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(150, 16);
			this->label17->TabIndex = 47;
			this->label17->Text = L"ID_Données_Personnel";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(292, 306);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(284, 16);
			this->label18->TabIndex = 46;
			this->label18->Text = L"ID Supérieur permettant d\'identifier le supérieur";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(295, 455);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(161, 16);
			this->label19->TabIndex = 45;
			this->label19->Text = L"Date Embauche Employé";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(295, 400);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(118, 16);
			this->label20->TabIndex = 44;
			this->label20->Text = L"Prénom Personnel";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(295, 353);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(100, 16);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Nom Personnel";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(295, 251);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(88, 16);
			this->label22->TabIndex = 42;
			this->label22->Text = L"ID_Personnel";
			// 
			// datapersonnel
			// 
			this->datapersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datapersonnel->Location = System::Drawing::Point(7, 53);
			this->datapersonnel->Margin = System::Windows::Forms::Padding(4);
			this->datapersonnel->Name = L"datapersonnel";
			this->datapersonnel->RowHeadersWidth = 51;
			this->datapersonnel->Size = System::Drawing::Size(1224, 185);
			this->datapersonnel->TabIndex = 31;
			this->datapersonnel->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::datapersonnel_CellContentClick);
			// 
			// btn_load_perso
			// 
			this->btn_load_perso->Location = System::Drawing::Point(38, 263);
			this->btn_load_perso->Margin = System::Windows::Forms::Padding(4);
			this->btn_load_perso->Name = L"btn_load_perso";
			this->btn_load_perso->Size = System::Drawing::Size(100, 103);
			this->btn_load_perso->TabIndex = 32;
			this->btn_load_perso->Text = L"Load DB table personnel";
			this->btn_load_perso->UseVisualStyleBackColor = true;
			this->btn_load_perso->Click += gcnew System::EventHandler(this, &MyForm::Load_Click);
			// 
			// INSERER_PERSO
			// 
			this->INSERER_PERSO->Location = System::Drawing::Point(178, 263);
			this->INSERER_PERSO->Margin = System::Windows::Forms::Padding(4);
			this->INSERER_PERSO->Name = L"INSERER_PERSO";
			this->INSERER_PERSO->Size = System::Drawing::Size(100, 46);
			this->INSERER_PERSO->TabIndex = 33;
			this->INSERER_PERSO->Text = L"Insérer new personnel";
			this->INSERER_PERSO->UseVisualStyleBackColor = true;
			this->INSERER_PERSO->Click += gcnew System::EventHandler(this, &MyForm::btn_Insert_perso_Click);
			// 
			// txt_ID_Données
			// 
			this->txt_ID_Données->Location = System::Drawing::Point(295, 516);
			this->txt_ID_Données->Margin = System::Windows::Forms::Padding(4);
			this->txt_ID_Données->Name = L"txt_ID_Données";
			this->txt_ID_Données->Size = System::Drawing::Size(408, 22);
			this->txt_ID_Données->TabIndex = 41;
			this->txt_ID_Données->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_ID_Données_TextChanged);
			// 
			// DELETE_PERSO
			// 
			this->DELETE_PERSO->Location = System::Drawing::Point(178, 463);
			this->DELETE_PERSO->Margin = System::Windows::Forms::Padding(4);
			this->DELETE_PERSO->Name = L"DELETE_PERSO";
			this->DELETE_PERSO->Size = System::Drawing::Size(100, 46);
			this->DELETE_PERSO->TabIndex = 34;
			this->DELETE_PERSO->Text = L"DEL";
			this->DELETE_PERSO->UseVisualStyleBackColor = true;
			this->DELETE_PERSO->Click += gcnew System::EventHandler(this, &MyForm::DELETE_PERSO_Click);
			// 
			// txt_ID_Superieur_Personnel
			// 
			this->txt_ID_Superieur_Personnel->Location = System::Drawing::Point(295, 326);
			this->txt_ID_Superieur_Personnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_ID_Superieur_Personnel->Name = L"txt_ID_Superieur_Personnel";
			this->txt_ID_Superieur_Personnel->Size = System::Drawing::Size(408, 22);
			this->txt_ID_Superieur_Personnel->TabIndex = 40;
			this->txt_ID_Superieur_Personnel->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_ID_Superieur_Personnel_TextChanged);
			// 
			// UPDATE_Perso
			// 
			this->UPDATE_Perso->Location = System::Drawing::Point(178, 398);
			this->UPDATE_Perso->Margin = System::Windows::Forms::Padding(4);
			this->UPDATE_Perso->Name = L"UPDATE_Perso";
			this->UPDATE_Perso->Size = System::Drawing::Size(100, 46);
			this->UPDATE_Perso->TabIndex = 35;
			this->UPDATE_Perso->Text = L"UPDATE";
			this->UPDATE_Perso->UseVisualStyleBackColor = true;
			this->UPDATE_Perso->Click += gcnew System::EventHandler(this, &MyForm::UPDATE_Perso_Click);
			// 
			// txt_date_embauche
			// 
			this->txt_date_embauche->Location = System::Drawing::Point(295, 469);
			this->txt_date_embauche->Margin = System::Windows::Forms::Padding(4);
			this->txt_date_embauche->Name = L"txt_date_embauche";
			this->txt_date_embauche->Size = System::Drawing::Size(408, 22);
			this->txt_date_embauche->TabIndex = 39;
			this->txt_date_embauche->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_date_embauche_TextChanged);
			// 
			// txt_ID_Personnel
			// 
			this->txt_ID_Personnel->Location = System::Drawing::Point(295, 275);
			this->txt_ID_Personnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_ID_Personnel->Name = L"txt_ID_Personnel";
			this->txt_ID_Personnel->Size = System::Drawing::Size(408, 22);
			this->txt_ID_Personnel->TabIndex = 36;
			this->txt_ID_Personnel->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_ID_Personnel_TextChanged);
			// 
			// txt_Prenom_Personnel
			// 
			this->txt_Prenom_Personnel->Location = System::Drawing::Point(295, 421);
			this->txt_Prenom_Personnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_Prenom_Personnel->Name = L"txt_Prenom_Personnel";
			this->txt_Prenom_Personnel->Size = System::Drawing::Size(408, 22);
			this->txt_Prenom_Personnel->TabIndex = 38;
			this->txt_Prenom_Personnel->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_Prenom_Personnel_TextChanged);
			// 
			// txt_Nom_Personnel
			// 
			this->txt_Nom_Personnel->Location = System::Drawing::Point(295, 374);
			this->txt_Nom_Personnel->Margin = System::Windows::Forms::Padding(4);
			this->txt_Nom_Personnel->Name = L"txt_Nom_Personnel";
			this->txt_Nom_Personnel->Size = System::Drawing::Size(408, 22);
			this->txt_Nom_Personnel->TabIndex = 37;
			this->txt_Nom_Personnel->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_Nom_Personnel_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1416, 686);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gestion Commande";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1416, 686);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion Article";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1416, 686);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Gestion Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1704, 739);
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
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datapersonnel))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->radioButton5->Checked == true) {
			this->datapersonnel->Refresh();
			this->oDs = this->oSvc->selectionnerToutesLesPersonnel("Rsl");
			this->datapersonnel->DataSource = this->oDs;
			this->datapersonnel->DataMember = "Rsl";

		}
		else if (this->radioButton6->Checked == true) {
			this->datapersonnel->Refresh();
			this->oDs = this->oSvc->selectionnerunpersonnel("Rsl", Convert::ToInt32(this->txt_ID_Personnel->Text));
			this->datapersonnel->DataSource = this->oDs;
			this->datapersonnel->DataMember = "Rsl";
		}
		else if (this->radioButton3->Checked == true) {
			this->datapersonnel->Refresh();
			this->oDs = this->oSvc->selectionnerTouslessuperieurs("Rsl");
			this->datapersonnel->DataSource = this->oDs;
			this->datapersonnel->DataMember = "Rsl";
		}
		else if (this->radioButton4->Checked == true) {
			this->datapersonnel->Refresh();
			this->oDs = this->oSvc->selectionnerunSuperieur("Rsl", Convert::ToInt32(this->txt_Id_Superieur->Text));
			this->datapersonnel->DataSource = this->oDs;
			this->datapersonnel->DataMember = "Rsl";
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
private: System::Void DELETE_PERSO_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->deleteapersonnel(Convert::ToInt32(this->txt_ID_Personnel->Text));
	}

private: System::Void UPDATE_Perso_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->updateAdressepersonnel(this->txt_adresse_perso->Text, this->txt_Code_Postal->Text, this->txt_Ville_perso->Text);
	this->oSvc->updateapersonnel(Convert::ToInt32(this->txt_ID_Personnel->Text),Convert::ToInt32(this->txt_ID_Superieur_Personnel->Text), this->txt_Nom_Personnel->Text, this->txt_Prenom_Personnel->Text, this->txt_date_embauche->Text);
	}
	   

private: System::Void insert_adres_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->ajouterAdressepersonnel(this->txt_adresse_perso->Text, this->txt_Code_Postal->Text, this->txt_Ville_perso->Text);
}
private: System::Void btn_Insert_perso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnpersonnel(this->txt_Nom_Personnel->Text, this->txt_Prenom_Personnel->Text, this->txt_date_embauche->Text, Convert::ToInt32(this->txt_ID_Superieur_Personnel->Text));
	}

	   //superieur
private: System::Void INSERT_Superieur_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->ajouterUnSuperieur(this->txt_Nom_Personnel->Text,this->txt_Prenom_Personnel->Text,this->txt_date_embauche->Text, Convert::ToInt32(this->txt_ID_Données->Text), Convert::ToInt32(this->txt_ID_Personnel->Text), Convert::ToInt32(this->txt_ID_Superieur_Personnel->Text));
}
	   //,Convert::ToInt32(this->txt_Id_Superieur->Text)
private: System::Void btn_Update_Superieur_Click_(System::Object^ sender, System::EventArgs^ e) {
			   this->oSvc->updatesuperieur(/*1*/this->txt_Nom_Personnel->Text,/*2*/ this->txt_Prenom_Personnel->Text,/*3*/ this->txt_date_embauche->Text, /*4*/Convert::ToInt32(this->txt_ID_Données->Text), /*5*/Convert::ToInt32(this->txt_ID_Personnel->Text), /*6*/Convert::ToInt32(this->txt_ID_Superieur_Personnel->Text),Convert::ToInt32(this->txt_Id_Superieur->Text));
		   }
private: System::Void btn_Delete_Superieur_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->deletesuperieur(Convert::ToInt32(this->txt_Id_Superieur->Text));
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void datapersonnel_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void txt_Nom_Superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_Prenom_Personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ID_Personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_date_embauche_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ID_Superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UpdateAdresse_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->oSvc->updateAdressepersonnel(this->txt_adresse_perso->Text, this->txt_Code_Postal->Text, this->txt_Ville_perso->Text);
}
	private: System::Void txt_ID_Superieur_Personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   private: System::Void ID_Supérieur_Click(System::Object^ sender, System::EventArgs^ e) {
		   }
		   
private: System::Void txt_Id_Superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ID_Données_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_Nom_Personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}