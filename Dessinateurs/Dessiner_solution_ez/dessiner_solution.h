#ifndef _DESSINER_SOLUTION_
#define _DESSINER_SOLUTION_

typedef struct SOLUTION {
	char nom[80];
	int x,y;
	int l, h;
} **ENSEMBLE_SOLUTIONS;


ENSEMBLE_SOLUTIONS Obj_Solution;
int nb_obj, largeur_conteneur, hauteur_conteneur;
double surface_max, pourcentage;

void PrintUsage ();
void LireSolutions ();
ENSEMBLE_SOLUTIONS AllouerEnsembleSolutions ();
void win1_redessiner (Window win);
void win1_event (Ez_event *ev) ;


#endif  /* _DESSINER_SOLUTION_ */
