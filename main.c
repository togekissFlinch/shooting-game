#include <stdio.h>
void title(char title[100])
{
    printf("%s\n", title);
}
void draw_window()
{
    FILE *texte = fopen("texte.txt", "r");
    char ligne[100];
    while (fgets (ligne, sizeof(ligne), texte))
    {
        printf("%s", ligne);
    }
}
int main()
{
    title("SHOOTING GAME !!!!");
    draw_window();
}
