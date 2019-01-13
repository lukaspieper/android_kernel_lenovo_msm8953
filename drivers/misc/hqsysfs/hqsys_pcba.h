#ifndef HQSYS_PCBA
#define HQSYS_PCBA


typedef enum
{
   PCBA_UNKNOW=0,
   PCBA_V3,
   PCBA_V4,
   PCBA_END,
  

}PCBA_CONFIG;

struct pcba_info
{
	PCBA_CONFIG pcba_config;
	char pcba_name[32];
};



PCBA_CONFIG get_huaqin_pcba_config(void);

#endif
