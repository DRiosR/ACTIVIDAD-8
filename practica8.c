// RiosRodriguezDaniel 372800
// 26-sep-23
/*
ACTIVIDAD 8
Realiza programa en C el programa deberá tener el siguiente menú.
MENÚ
1.- LLENAR VECTOR 1 (MANUALMENTE)
2.- LLENAR VECTOR 2 ALEATORIAMENTE
3.- LLENAR VECTOR 3 (CON VECTOR1 Y VECTOR2)
4.- IMPRIMIR VECTORES
5.- LLENA MATRIZ 4 X 4
6.- IMPRIMIR MATRIZ
0.- SALIR
NOTA: EL PROGRAMA DEBERÁ REPETIRSE CUANTAS VECES LO DESEE EL USUARIO
NOTA 2: EL VECTOR 1 DE 10 POSICIONES, NÚMEROS DEL 30 AL 70
NOTA 3: EL VECTOR 2 DE 10 POSICIONES CON NÚMEROS GENERADOS ALEATORIAMENTE DEL 1 AL 20 ( SIN REPETIR)
NOTA 4: EL VECTOR 3 DE 20 POSICIONES, CON LOS DATOS DEL ARREGLO1 Y ARREGLO2
NOTA 5: MATRIZ 4 X 4 LLENARLA CON LOS DATOS DEL VECTOR1 Y VECTOR2,
*/
// R.R.D_act8_1_932
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int vector1[10];
int vector2[10];
int vector3[20];
int matriz[4][4];
int validarnumeros(char mensaje[], int ri, int rf);
void vec1();
void vec2();
void vec3();
void mostrarvec();
void matriz4x4();
void imprimirmatriz();

int main()
{

    int repetir;
    int x, menu;
    do
    {
        menu = 0;
        x = validarnumeros("MENU\n1.- LLENAR VECTOR 1 (MANUALMENTE)\n2.- LLENAR VECTOR 2 ALEATORIAMENTE\n3.- LLENAR VECTOR 3 (CON VECTOR1 Y VECTOR2)\n4.- IMPRIMIR VECTORES\n5.- LLENA MATRIZ 4 X 4\n6.- IMPRIMIR MATRIZ\n0.- SALIR\n", 0, 6);
        switch (x)
        {
        case 1:
            vec1();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }

            break;
        case 2:
            vec2();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }
            break;
        case 3:
            vec3();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }
            break;
        case 4:
            mostrarvec();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }
            break;
        case 5:
            matriz4x4();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }
            break;
        case 6:
            imprimirmatriz();
            repetir = validarnumeros("QUIERES HACER OTRA OPCION\nSI=1\nNO=2\n", 1, 2);
            if (repetir == 1)
            {
                menu = 1;
            }
            else
            {
                printf("FIN DEL POGRAMA");
                return 0;
            }
            break;
        case 0:
            printf("FIN DEL PROGRAMA");
            return 0;
            break;
        default:
            break;
        }
    } while (menu == 1);
}
void vec1()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        vector1[i] = validarnumeros("ESCRIBE EL NUMERO MENOR QUE 70 Y MAYOR QUE 30: ", 30, 70);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d=%d\n", i, vector1[i]);
    }
}
void vec2()
{
    int i, j, x, rs, ri, repe;
    for (i = 0; i < 10; i++)
    {
        ri = 1;
        rs = 20;
        x = (rs - ri) + 1;
        do
        {
            vector2[i] = (rand() % x) + ri;
            repe = 0;
            for (j = 0; j < i; j++)
            {

                if (vector2[i] == vector2[j])
                {
                    repe = 1;
                }
            }
        } while (repe == 1);
        printf("%d\n", vector2[i]);
    }
}
void vec3()
{
    for (int i = 0; i < 10; i++)
    {
        vector3[i] = vector1[i];
        vector3[i + 10] = vector2[i];
    }
    // Imprimir vector3 si es necesario
    for (int i = 0; i < 20; i++)
    {
        printf("%d=%d\n", i, vector3[i]);
    }
}
void mostrarvec()
{
    int i;
    printf("vector1=");
    for (i = 0; i < 10; i++)
    {
        printf(",%d ", vector1[i]);
    }
    printf("\nvector2=");
    for (i = 0; i < 10; i++)
    {
        printf(",%d ", vector2[i]);
    }
    printf("\nvector3=");
    for (i = 0; i < 20; i++)
    {
        printf(",%d ", vector3[i]);
    }
    printf("\n");
}
void matriz4x4()
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = vector1[i * 4 + j];
        }
    }
    for (i = 2; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = vector2[(i - 2) * 4 + j];
        }
    }
}
void imprimirmatriz()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }
}
int validarnumeros(char mensaje[], int ri, int rf)
{
    char calificacion[100];
    int num;
    do
    {
        printf("%s ", mensaje);
        fflush(stdin);
        gets(calificacion);
        num = atoi(calificacion);
        if (num < ri || num > rf)
        {
            printf("INGRESE EL NUMERO OTRA VEZ PORFAVOR\n");
        }
    } while (num < ri || num > rf);
    return num;
}