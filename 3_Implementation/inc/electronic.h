#ifndef __ELECTRONIC_H_
#define __ELECTRONIC_H_

void Switchcase();
float Voltage(float I, float R);
float Current(float V, float R);
float Power(float I,float R);
float Resistancer(float V, float I);
float Rseries(float R1,float R2,float R3);
float Rparllel(float R1,float R2,float R3);
float V_to_I_trans(float v, float r);
float I_to_V_trans(float i, float r);


#endif  /* __FUN_H__  */