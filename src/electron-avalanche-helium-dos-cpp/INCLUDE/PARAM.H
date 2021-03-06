//	Abramov A.A., 1994
//
//	Parameters of gase discharge 
//	Arrays for electron statistic counting 
//	Functions for working with arrays

extern double 		voltage;	// Voltage
extern double 		dk; 		// Length of cathode falling
extern double 		field;		// Electric field 
extern double 		dd; 		// Length of gase discharge box
extern long int 	nstat;		// Number of statistical electrons
extern char		file_param[];	// File name 
extern long int 	ilav;		// ⥪�騩 ����� ������
extern long int 	istat;		// ⥪�� ���-�� ��� ��-� 
extern double 		ftime;		// Time of counting

void 	print_par(); 			// ����� ��ࠬ��஢ �祩�� �� ��ᯫ��
void 	fscan_par(char*);		// �⥭�� ��ࠬ��஢ �祩�� �� 䠩��	

const int imax=100;			// ��᫮ ࠧ������ �஬���⪠
const int nmas=16;			// ������⢮ ���ᨢ��

extern double* 	xx;
extern double* 	ff;
extern double*	de;
extern double* 	mm;
extern double* 	vvx;		
extern double* 	vvd;		
extern double* 	vvr;
extern double* 	vvv;		
extern double* 	eex;		
extern double* 	eer;		
extern double* 	eee;
extern double* 	evx;	
extern double* 	fto;
extern double* 	fel;
extern double* 	fex;	
extern double* 	fio;	


//	���������� ������� ��� ������ � ���������
void 	read_param(); 		// C���� ���ᨢ� �� 䠩�� 
void 	write_param(); 		// ������ ���ᨢ�� � 䠩� 
void 	print_param(); 		// ����� ���ᨢ�� �� ��ᯫ�� 

double	xtoe(int,double);
double	etox(int,double);
double	etof(int,double);