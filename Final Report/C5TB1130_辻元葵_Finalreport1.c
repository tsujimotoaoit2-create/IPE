#include <stdio.h>

int a[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int b[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
int c[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

void read_a_mat()
{
    int i,j;
    FILE *fp;
    fp = fopen("a_mat.txt","r");
    
    for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                fscanf(fp,"%d",&a[i][j]);
            }
        }
    fclose(fp);
}

void read_b_mat()
{
    int i,j;
    FILE *fp;
    fp = fopen("b_mat.txt","r");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            fscanf(fp,"%d",&b[i][j]);
        }
    }
    fclose(fp);
}
    


void matual(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j,k;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void write_c_mat()
{
    int i,j;
    FILE *fp;
    fp =fopen("c_mat.txt","w");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            fprintf(fp,"%d ",c[i][j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
}

int main()
{
    read_a_mat();
    read_b_mat();
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }
    matual(a,b,c);
    write_c_mat();
    return 0;
}