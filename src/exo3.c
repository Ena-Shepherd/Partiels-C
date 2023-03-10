/*

 Author: Yannis STEFANELLI

 Creation Date: 10-03-2023 11:21:21

 Description :

*/

typedef enum {DIVERS, VETEMENT, NOURRITURE, LIVRE} Type;

typedef struct {
    char a_nom[256];
    float a_prix;
    char a_description[1024];
    Type a_type;
} Article;

Article* creer_article()
{
    return malloc(sizeof(Article));
}

void afficher_article(const Article* Article)
{
    printf("%s, %.2f, %s, %d", Article->a_nom, Article->a_prix, Article->a_description, Article->a_type);
}

void modifier_article(Article* Article)
{   
    //on peut pas remplacer un tableau statique monsieur O-O

    Article->a_prix = /*random bullshit*/ 0;
    Article->a_type = /*random bullshit*/ 0;
}

void liberer_article(Article** Article) {
    free(*Article);
}

#include <stdio.h>

void save_article(const Article* article, const char* filename)
{
    FILE* fichier = fopen(filename, "w");
    if (fichier == NULL)
    {
        printf("Erreur d'ouverture du fichier %s\n", filename);
        return;
    }
    
    fprintf(fichier, "%s\n", article->a_nom);
    fprintf(fichier, "%.2f\n", article->a_prix);
    fprintf(fichier, "%s\n", article->a_description);
    fprintf(fichier, "%d\n", article->a_type);
    
    fclose(fichier);
}

Article* load_article(const char* filename, Article* article)
{
    FILE* fichier = fopen(filename, "r");
    if (fichier == NULL)
    {
        printf("Erreur d'ouverture du fichier %s\n", filename);
        return NULL;
    }

    if (article == NULL)
    {
        printf("Erreur : pointeur article invalide\n");
        fclose(fichier);
        return NULL;
    }
    
    fgets(article->a_nom, 256, fichier);
    fscanf(fichier, "%f\n", &(article->a_prix));
    fgets(article->a_description, 1024, fichier);
    fscanf(fichier, "%d\n", &(article->a_type));
    
    fclose(fichier);
    return article;
}

int main_article() {

}