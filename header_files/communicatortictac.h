#pragma once
/*extern int player;
extern char grid[10];
extern double gridval[10];
double gridans[];*/
extern char grid[10];
extern double gridval[10];
extern double midlayer1[5];
extern double midlayer2[5];
extern double midlayer3[5];
extern double midlayerweight1[50];
extern double midlayerweight2[50];
extern double midlayerweight3[25];
extern double midlayerweight4[50];
extern double responselayer[10];
extern double changeweight1[45];
extern double changeweight4[45];
extern double weighterror1[45];
extern double midlayerweight1a[9];
extern double midlayerweight1b[9];
extern double midlayerweight1c[9];
extern double midlayerweight1d[9];
extern double midlayerweight1e[9];
extern double midlayerweight2a[5];
extern double midlayerweight2b[5];
extern double midlayerweight2c[5];
extern double midlayerweight2d[5];
extern double midlayerweight2e[5];
extern double midlayerweight2f[5];
extern double midlayerweight2g[5];
extern double midlayerweight2h[5];
extern double midlayerweight2i[5];
extern double changeweight1a[5];
extern double changeweight1b[5];
extern double changeweight1c[5];
extern double changeweight1d[5];
extern double changeweight1e[5];
extern double changeweight1f[5];
extern double changeweight1g[5];
extern double changeweight1h[5];
extern double changeweight1i[5];
extern double changeweight2a[9];
extern double changeweight2b[9];
extern double changeweight2c[9];
extern double changeweight2d[9];
extern double changeweight2e[9];
int botcalc();
void weight_adjust();
void boteval(bool nummoves);
