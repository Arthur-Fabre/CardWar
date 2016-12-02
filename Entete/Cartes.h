//Initialisation de la structure contenant les caractéristiques des cartes
struct Cartes
{
	char*	Nom;
	int		Numero_Carte;
	int		Mana;
	int		Vie;
	int		Attaque;

	int		Sort_de_la_Carte;
	int		Passif_de_la_Carte;

	int		Effects_Actifs[10];
	bool	Mort;

	char*	Image_de_la_Carte;
	
	int		Sleep;
	bool	AFaite;
};

//Déclaration des fonctions d'initialisation des cartes
void Remplir_Carte(struct Cartes[]);
void Init_Cartes (struct Cartes* ,char* ,int ,int ,int ,int ,int ,int ,bool ,char*,int,bool);
