#include <stdio.h>

struct Mahsulot{
    char nom[20];
    int narx;
    int son;

};

int toatl_price(struct Mahsulot m){
    return m.narx * m.son;
}

int main(){
    struct Mahsulot m1;

    printf("Mahsulot nomi: ");
    scanf("%s",m1.nom);

    printf("Narx: ");
    scanf("%d",&m1.narx);

    printf("Soni:");
    scanf("%d",&m1.son);

    printf("Mahsulot nomi: %s\n",m1.nom);
    printf("Ummumiy narx: %d som\n",toatl_price(m1));
    
}
