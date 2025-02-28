#include <stdio.h>
extern int M,N,K,ker,npoints,boundary,new,nsum;
extern double X,Y,Z,dt,nsteps;
extern double Ms,A,Ku,gam,alpha,RelTol,dcd,sha,idmi,rad;
void readdata(void)
{
  char str[80];
  FILE *fp,*fp1;
  fp1=fopen("view","w");
  fprintf(fp1,"=====Simulations of Micromagnetics=====\n");
  fp=fopen("data.c","r");
  fgets(str,80,fp);
  fscanf(fp,"%s%d ",str,&ker);
  fgets(str,80,fp);
  fscanf(fp,"%s%d ",str,&new);
  fgets(str,80,fp);
  fscanf(fp,"%s%d ",str,&boundary);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%d ",str,&M);
  fprintf(fp1,"M=%d\n",M);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%d ",str,&N);
  fprintf(fp1,"N=%d\n",N);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%d ",str,&K);
  fprintf(fp1,"K=%d\n",K);
  fgets(str,80,fp);
  fscanf(fp,"%s%d ",str,&nsum);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&nsteps);
  fprintf(fp1,"nsteps=%e\n",nsteps);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%d ",str,&npoints);
  fprintf(fp1,"npoints=%d\n",npoints);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&dt);
  fprintf(fp1,"dt=%e\n",dt);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&X);
  fprintf(fp1,"X=%e\n",X);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&Y);
  fprintf(fp1,"Y=%e\n",Y);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&Z);
  fprintf(fp1,"Z=%e\n",Z);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&Ms);
  fprintf(fp1,"Ms=%e\n",Ms);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&A);
  fprintf(fp1,"An=%e\n",A);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&Ku);
  fprintf(fp1,"Ku=%e\n",Ku);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&gam);
  fprintf(fp1,"gam=%le\n",gam);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&alpha);
  fprintf(fp1,"alpha=%e\n",alpha);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&RelTol);
  fprintf(fp1,"RelTol=%e\n",RelTol);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&dcd);
  fprintf(fp1,"dcd=%e\n",dcd);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&sha);
  fprintf(fp1,"sha=%e\n",sha);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&rad);
  fprintf(fp1,"rad=%e\n",rad);
  fgets(str,80,fp);
  fputs(str,fp1);
  fscanf(fp,"%s%le ",str,&idmi);
  fprintf(fp1,"idmi=%e\n",idmi);

  fclose(fp1);
  fclose(fp);	
 } 
