#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct producto
{
    char npro[20];
    int can_vend,pre_uni;
    int valor;
};

struct proveedores
{
    char nombre[30],empresa[30];
    char direccion[30];
    int tel;
    producto pro[50];

}prove[50];


int main()
{
    int n;
    printf("ingrese el numero de proveedores\n");
    scanf("%d",&n);

    prove[n];

    for(int i=0;i<n;i++)
    {
        printf("ingrese proveedor %d\n",i+1);
        scanf("%s",prove[i].nombre);

        printf("ingrese dirrecion \n");
        scanf( "%s",prove[i].direccion);

        printf("ingrese telefono \n");
        scanf("%d",&prove[i].tel);

        printf("ingrese nombre empresa \n");
        scanf("%s",prove[i].empresa);

        printf("ingrese nombre de producto: \n");
        scanf("%s",prove[i].pro[i].npro);

        printf("ingrese cantidad de producto: \n");
        scanf("%d",&prove[i].pro[i].can_vend);

        printf("ingrese valor unitario del producto: \n");
        scanf("%d",&prove[i].pro[i].pre_uni);


    }

    for(int i=0;i<n;i++)
    {
        printf("nombre del provedor %d es: %s\n",i+1,prove[i].nombre);

        printf("la direccion es: %s\n",prove[i].direccion);

        printf("el numero de telefono es: %d\n",prove[i].tel);

        printf("la empresa es: %s\n",prove[i].empresa);

        printf("el nombredel producto es: %s\n",prove[i].pro[i].npro);

        printf("la cantidad es: %d\n",prove[i].pro[i].can_vend);

        printf("el valor unitario es: %d\n",prove[i].pro[i].pre_uni);

        prove[i].pro[i].valor=prove[i].pro[i].can_vend*prove[i].pro[i].pre_uni;
    }

        float aux1,aux2;
        int c1,c2;

        aux1=prove[0].pro[0].valor;
        aux2=prove[0].pro[0].valor;

        printf("\n");

        for(int i=0;i<n;i++)
        {
             if(aux1<=prove[i].pro[i].valor)
             {
                 c1=i;
             }
        }
        for(int i=0;i<n;i++)
        {
            if(aux2>=prove[i].pro[i].valor)
            {
                aux2=prove[i].pro[i].valor;
                c2=i;
            }
        }

        printf("proveedor mas caro:\n");

        printf("nombre: %s\n",prove[c1].nombre);

        printf("proveedor mas barato:\n");

        printf("nombre: %s\n",prove[c2].nombre);


        char v_prove[n][200];

        for(int i=0;i<n;i++)
        {
            strcpy(v_prove[i],prove[i].pro[i].npro);
        }

        printf("los productos son:\n");

        for(int i=0;i<n;i++)
        {
            printf("%s\n",v_prove[i]);
        }
}

