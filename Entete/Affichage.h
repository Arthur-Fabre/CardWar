//initialisation structure des différents élements d'affichage
struct Element_Affiche
{
	char* Nom;
	SDL_Surface *Ma_Surface;
	char* Image;
	int X;
	int Y;

};

//Declaration des fonctions d'affichage
void Initialisation_Elements_Affichage (struct Element_Affiche[]);
void Remplir_Elements (struct Element_Affiche* ,char* ,SDL_Surface* ,char* ,int ,int);
void Parametrage_Image_Elements_Affichage (struct Element_Affiche[] ,int ,char*);
void Parametrage_Transparence_Elements_Affichage (struct Element_Affiche[] ,int ,int);
void Affichage(struct Element_Affiche[] ,SDL_Surface* ,int ,int);
int Recuperation_X (struct Element_Affiche[],int);
int Recuperation_Y (struct Element_Affiche[],int);
void Parametrage_X_Y_Elements_Affichage (struct Element_Affiche[],int,int,int);
SDL_Surface * Init_Fenetre(int ,int ,int ,char *);
void Blitter_Surface(SDL_Surface*, SDL_Surface*, int, int);
void Clear_Element (struct Element_Affiche[] ,int);
void Affichage1(struct Element_Affiche [],SDL_Surface *);
void CarakCarte (struct Element_Affiche[],int,int,int,int,int,int);
void Anim_Carte(struct Element_Affiche[],SDL_Surface *,int,int);