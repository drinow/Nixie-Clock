#ifndef __RED_H
#define __RED_H 
#include "sys.h"   
#include "bsp_SysTick.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//Mini STM32������
//����ң�ؽ��� ��������		   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2010/6/17 
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2009-2019
//All rights reserved
////////////////////////////////////////////////////////////////////////////////// 	  
  
#define RDATA PBin(7)	 //�������������
//����ң��ʶ����(ID),ÿ��ң�����ĸ�ֵ��������һ��,��Ҳ��һ����.
//����ѡ�õ�ң����ʶ����Ϊ0
#define REMOTE_ID 0      

extern u8 Remote_Cnt;    //��������,�˴ΰ��¼��Ĵ���
extern u8 Remote_Rdy;    //������յ����� 
extern u32 Remote_Odr;   //�����ݴ洦
void Remote_Init(void);    //���⴫��������ͷ���ų�ʼ��
u8 Remote_Process(void);   //������յ����ݴ���
u8 Pulse_Width_Check(void);//�������	  	
#endif














