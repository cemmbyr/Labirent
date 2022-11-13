#include <stdio.h>
#include <stdlib.h>
struct lab{
int veri;

struct lab*ileri;
struct lab*geri;
};
typedef struct lab node;

struct Yigindugum
{
    int bilgi;
    struct Yigindugum * sonraki;
};

struct Yigindugum*yenidugum(int bilgi)
{
    struct Yigindugum*yigindugum=(struct Yigindugum*)malloc(sizeof(struct Yigindugum));
    yigindugum->bilgi=bilgi;
    yigindugum->sonraki=NULL;
    return yigindugum;
};

struct Yigindugum* kok=NULL;

void ekle(struct Yigindugum** kok,int bilgi)
{
    struct Yigindugum* yigindugum=yenidugum(bilgi);
    yigindugum->sonraki=*kok;
    *kok=yigindugum;
        printf("%d verisine sahip dugum eklendi\n", bilgi);
}
int bosmu(struct Yigindugum *kok)
{
    return !kok;
}
int al(struct Yigindugum** kok)
{
    if(bosmu(*kok))
    {
        return -1;
    }
    struct Yigindugum* alinacak = *kok;
    *kok=(*kok)->sonraki;
    int alinan=alinacak->bilgi;
    free(alinacak);
    printf("%d alindi\n",alinan);
    return alinan;

}

int main()
{
    printf("            \nLABIRENT OYUNU\n              ");
    srand(time(NULL));
    labirent();
    return 0;
}
int labirent()
{

    int i,j,a=0,b=0,n,x=0,y=0;
    printf("\nLabirentin boyutunu giriniz:");
    scanf("%d",&n);
    while(25<n)
    {
        printf("\nLabirentin boyutunu tekrar giriniz:");
        scanf("%d",&n);
    }
    n=n+2;
    int matris[n][n];
        for(i=0; i<n; i++){
        for(j=0 ;j<n; j++){
            matris[i][j]=rand()%2;
        }
        }
    for(i=0; i<n; i++)
    {
        for(j=0;j<n;j++){
        if(i==0 && j<=n-1){
                matris[i][j]=0;
        }
        if(i==6 && j<=n-1){
                matris[i][j]=0;
        }
        if((i>0 && i<n-1) && (j==0 || j==n-1)){
            matris[i][j]=0;
        }
    }
    }
    printf("LABIRENT\n\n");
        for(i=1; i<n-1; i++)
    {
        for(j=1;j<n-1;j++){
        printf("%3d",matris[i][j]);
    }
    printf("\n");
    }

YUKARI:
    printf("\nLabirent girisinin satirini(1'den %d'e kadar) giriniz:",n-2);
    scanf("%d",&a);
    while(n-2<a || a<1)
    {
        printf("Tekrar labirent girisinin satirini(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&a);
    }
    if(a==1)
    {
        printf("Labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&b);
        while(n-2<b)
        {
            printf("Tekrar labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&b);
        }
        printf("Girdiginiz labirent girisinin koordinatlari[%d][%d]'dir.",a,b);
    }
    else if(a==n-2)
    {
        printf("Labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&b);
        while(n-2<b)
        {
            printf("Tekrar labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&b);
        }
        printf("Girdiginiz labirent girisinin koordinatlari[%d][%d]'dir.",a,b);
    }
    else
    {
        printf("Labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&b);
        while(n-2<b || 1!=b && n-2!=b)
        {
            printf("Tekrar labirent girisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&b);
            if(b==n-2 || b==1)
                break;
        }


        printf("Girdiginiz labirent girisinin koordinatlari[%d][%d]'dir.",a,b);
    }
    printf("\nLabirent cikisinin satirini(1'den %d'e kadar) giriniz:",n-2);
    scanf("%d",&x);
    while(n-2<x || x<1)
    {
        printf("Tekrar labirent cikisinin satirini(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&x);
    }
    if(x==1)
    {
        printf("Labirent cikisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&y);
        while(n-2<y)
        {
            printf("Tekrar labirent cikisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&y);
        }
        printf("Girdiginiz labirent cikisinin koordinatlari[%d][%d]'dir.",x,y);
    }
    else if(x==n-2)
    {
        printf("Labirent cikisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&y);
        while(n-2<y)
        {
            printf("Tekrar labirent cikisinin  sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&y);
        }
        printf("Girdiginiz labirent cikisinin koordinatlari[%d][%d]'dir.",x,y);
    }
    else
    {
        printf("Labirent cikisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
        scanf("%d",&y);
        while(n-2<y || 1!=y && n-2!=y)
        {
            printf("Tekrar labirent cikisinin sutununu(1'den %d'e kadar) giriniz:",n-2);
            scanf("%d",&y);
            if(y==n-2 || y==1)
                break;
        }

        printf("Girdiginiz labirent cikisinin koordinatlari[%d][%d]'dir.",x,y);
    }
    if (a==x && b==y)
    {
        printf("\nAyni degerleri girdiniz.Tekrardan baska degerler giriniz.\n");
        goto YUKARI;
    }
    else if(matris[a][b]==0 || matris[x][y]==0)
    {
        printf("\nGirdiginiz degerlerde duvar bulunmaktadir.Tekrardan baska degerler giriniz.\n");
        goto YUKARI;
    }
      int deger;
      int k=0,l=0;
      k=a;
      l=b;
      node*iter;
      node*root;
      root=NULL;
      root=(node*)malloc(sizeof(node));
      root->geri=NULL;
      iter=(node*)malloc(sizeof(node));
      iter->veri=matris[a][b];

      while(a!=x || b!=y){
         if(a>(n-1) || b>(n-1)){
            break;
         }
         if(matris[a][b-1]!=1 && matris[a][b+1]!=1 && matris[a-1][b]!=1 && matris[a+1][b]!=1){
               matris[a][b]=0;
               iter->ileri->geri=iter;
               root=iter->ileri->veri;
                free(root);
                if(matris[k][l]==matris[a][b]){
                    printf("\nCikis yoktur\n");
                    break;
                }
                if(deger==1){
                    b++;
                }
                if(deger==2){
                    b--;
                }
                if(deger==3){
                    a++;
                }
                if(deger==4){
                    a--;
                }
        }
         if(matris[a][b-1]==1)
        {
            matris[a][b]=3;
            iter->ileri=(node*)malloc(sizeof(node));
            iter->ileri->geri=iter;
            iter->ileri->veri=matris[a][b-1];
            matris[a][b-1]=3;
            b--;
            printf("\nSol : %d  ",iter->ileri->veri);
            deger=1;
        }
        else if(matris[a][b+1]==1)
        {
            matris[a][b]=3;
            iter->ileri=(node*)malloc(sizeof(node));
            iter->ileri->geri=iter;
            iter->ileri->veri=matris[a][b+1];
            matris[a][b+1]=3;
            b++;
            printf("\nSag : %d  ",iter->ileri->veri);
            deger=2;
        }
        else if(matris[a-1][b]==1)
        {
            matris[a][b]=3;
            iter->ileri=(node*)malloc(sizeof(node));
            iter->ileri->geri=iter;
            iter->ileri->veri=matris[a-1][b];
            matris[a-1][b]=3;
            a--;
            printf("\nYukari : %d  ",iter->ileri->veri);
            deger=3;
        }
        else if(matris[a+1][b]==1)
        {
            matris[a][b]=3;
            iter->ileri->geri=iter;
            iter->ileri=(node*)malloc(sizeof(node));
            iter->ileri->veri=matris[a+1][b];
            matris[a+1][b]=3;
            a++;
            printf("\nAsagi : %d  ",iter->ileri->veri);
            deger=4;
        }
      }
     printf("\n\n");
    for(i=1; i<n-1; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if(matris[i][j]==1){
                matris[i][j]=0;
            }
            else if(matris[i][j]==3){
                matris[i][j]=1;
            }
            printf(" %3d",matris[i][j]);
        }
        printf("\n");
    }


    return 0;
}
