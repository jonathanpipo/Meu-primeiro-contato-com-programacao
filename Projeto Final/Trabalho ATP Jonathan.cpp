#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <cmath>
#include <string.h>

using namespace std;


float media(float pais[], int x){
	float media, tot;
	for(int i = 0; i<x; i++){
	tot += pais[i];
	}
	media = tot/x;
	return media;
}

void ordenar(float vetor[], int tamanho){
	float y, x, aux;
	
	for(int x = 0; x < 31; x++){
		for(int y = x; y< 31; y++){
			if (vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
}
}

void mediana(float pais[], int med ){
	med = med / 2;
	ordenar(pais, 30);
	cout << "A mediana é: " << pais[med];
}

float variancia(float s[], int n ){
    float sum = 0.0;
    float dev = 0.0;
    float med = media(s , n);
    int i = 0;

    for( i = 0; i < n; i++ )
    {
        dev = s[i] - med;
        sum += (dev * dev);
    }

    cout << sum / 31;
}

void moda(float v[]){
	int T = 32; //tamanho do vetor
	int i, j, cont[T];
	float conta, moda;
	
	for(i=0;i<T;i++){
        for(j=i+1;j<T;j++){
			if(v[i]==v[j]){
				cont[i]++;
					if(cont[i]>conta){
						conta=cont[i];
						moda=v[i];
					}
			}
        }
        cont[i]=0;
    }
    if(conta == 0){
    	printf("Nao existe moda\n");
	}
	else{
		printf("Moda: %.2f\n", moda);
	}
}

void minima(float pais[]){
	float menor = 10;
	for(int i = 0; i<31; i++){
		if(pais[i]<menor){
		menor = pais[i];
			}
		}
	cout << "O menor valor é: " << menor ;
}

void maxima(float pais[]){
	float maior;
	for(int i = 0; i<31; i++){
	if(pais[i]>maior){
	maior = pais[i];
		}
	}
	cout << "O maior valor é: " << maior;
}

int main() {
	setlocale(LC_ALL,"");
	int escolha;
	char pais;
	float result, mpais;
	float mbrasil, meua, mchina;
	int pano[31] = {2019, 2018, 2017, 2016, 2015, 2014, 2013, 2012, 2011, 2010, 2009, 2008, 2007, 2006, 2005, 2004, 2003, 2002, 2001, 2000, 1999, 1998, 1997, 1996, 1995, 1994, 1993, 1992, 1991, 1990, 1989};
	float pbrasil[31] = {1, 1, 1.1, -3.5, -3.8, 0.5, 2.3, 0.9, 2.7, 7.5, -0.2, 5.1, 5.4, 3.7, 2.3, 5.1, -0.2, 1, 1.9, 4.2, 0.5, 0.4, 3.3, 2.2, 4.2, 5.5, 4.5, -0.5, 1, -4.3, 3.2};
	float peua[31] = {2.2, 2.9, 2.2, 1.6, 2.4, 2.5, 1.6, 2.2, 1.7, 2.8, -2.6, 1.1, 2, 3.2, 3.2, 4.4, 3.1, 2.4, 0.3, 5, 4.8, 4.5, 4.4, 3.8, 2.7, 4, 2.8, 3.5, -0.1, 1.9, 3.7};
	float pchina[31] = {6.9, 6.9, 6.8, 6.7, 6.9, 7.3, 7.7, 7.8, 9.2, 10.3, 9.1, 9, 11.9, 10.2, 9.1, 9.1, 8, 8, 8.3, 7.4, 7.6, 7.9, 9.2, 10.1, 11.5, 13.7, 14.1, 14.3, 8.5, 4, 4.2};
	float ordfreqvalorbr[23] = {-4.3, -3.8, -3.5, -0.5, -0.2, 0.4, 0.5, 0.9, 1, 1.1, 1.9, 2.2, 2.3, 2.7, 3.2, 3.3, 3.7, 4.2, 4.5, 5.1, 5.4, 5.5, 7.5};
	float ordfreqfibr[23] = {1, 1, 1, 1, 2, 1, 2, 1, 4, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1};
	float ordfreqffibr[23] = {1, 2, 3, 4, 6, 7, 9, 10, 14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 28, 29, 30, 31};
	float ordfreqfrbr[23] = {3.22, 3.22, 3.22, 3.22, 6.45, 3.22, 12.90, 3.22, 3.22, 3.22, 6.45, 3.22, 3.22, 3.22, 3.22, 6.45, 3.22, 6.45, 3.22, 3.22, 3.22};
	float ordfreqfribr[23] = {3.22, 6.44, 9.66, 12.88, 19.33, 22.55, 29, 32.22, 45.12, 48.34, 51.56, 54.78, 61.23, 64.45, 67.67, 70.89, 74.11, 80.56, 83.78, 90.23, 93.45, 96.67, 99.89};
	
	float ordfreqvaloreua[24] = {-2.6, -0.1, 0.3, 1.1, 1.6, 1.7, 1.9, 2, 2.2, 2.4, 2.5, 2.7, 2.8, 2.9, 3.1, 3.2, 3.5, 3.7, 3.8, 4, 4.4, 4.5, 4.8, 5,};
	float ordfreqfieua[24] = {1, 1, 1, 1, 2, 1, 1, 1, 3, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1};
	float ordfreqffieua[24] = {1, 2, 3, 4, 6, 7, 8, 9, 12, 14, 15, 16, 18, 19, 20, 22, 23, 24, 25, 26, 28, 29, 30, 31};
	float ordfreqfreua[24] = {3.22, 3.22, 3.22, 3.22, 6.45, 3.22, 3.22, 3.22, 9.67, 6.45, 3.22, 3.22, 6.45, 3.22, 3.22, 6.45, 3.22, 3.22, 3.22, 3.22, 6.45, 3.22, 3.22, 3.22};
	float ordfreqfrieua[24] = {3.22, 6.44, 9.66, 12.88, 19.33, 22.55, 25.77, 28.99, 28.66, 45.11, 48.33, 51.55, 58, 61.22, 64.44, 70.89, 74.11, 77.33, 80.55, 83.77, 90.22, 93.44, 96.66, 99.88};
	
	float ordfreqvalorchina[25] = {4, 4.2, 6.7, 6.8, 6.9, 7.3, 7.4, 7.6, 7.7, 7.8, 7.9, 8, 8.3, 8.5, 9, 9.1, 9.2, 10.1, 10.2, 10.3, 11.5, 11.9, 13.7, 14.1, 14.3};
	float ordfreqfichina[25] = {1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1,};
	float ordfreqffichina[25] = {1, 2, 3, 4, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31};
	float ordfreqfrchina[25] = {3.22, 3.22, 3.22, 3.22, 9.67, 3.22, 3.22, 3.22, 3.22, 3.22, 3.22, 6.45, 3.22, 3.22, 3.22, 9.67, 6.45, 3.22, 3.22, 3.22, 3.22, 3.22, 3.22, 3.22, 3.22};
	float ordfreqfrichina[25] = {3.22, 6.44, 9.66, 12.88, 22.55, 25.77, 28.99, 32.21, 35.43, 38.65, 41.87, 45.09, 51.54, 54.76, 57.98, 61.20, 70.87, 77.32, 80.54, 83.76, 86.98, 90.20, 93.42, 96.64, 99.86};
	

	int ano; // variavel do ano (case 2)
	
 	cout << "Selecione a opção que desejar:\n";
 	cout << "1 > Exibir o país que possui a maior taxa média de crescimento dos últimos 30 anos.\n"; // maior média 
 	cout << "2 > Exibir a taxa de crescimentos dos ultimos 'n' anos do país solicitado.\n"; //o usuário vai determinar quantos anos e qual país será feita a verificação de crescimento (média de x anos)
 	cout << "3 > Exibir o período de maior crescimento de determinado país.\n"; //o usuário escolhe o país e o programa mostra o ano em que teve a maior taxa de crescimento
 	cout << "4 > Exibir informações gerais de cada país.\n"; // menor valor, maior valor, média, moda, variância e ordenação de frequencia
 	cout << "5 > Exibir as ordenações de frequência dos 3 países. \n";
 	scanf ("%d", &escolha);
 	
 	cout << "\nVocê selecionou a opção " << escolha;
 	cout << "\n";
 	
	switch(escolha) {
	case 1:
		float resbrasil, reseua, reschina, resbra;
		reschina = 0;
		resbrasil = 0;
		reseua = 0;
		for(int i = 0; i<31; i++){
			resbrasil = resbrasil + pbrasil[i];
			mbrasil = resbrasil / 31;
		}
		for(int i = 0; i<31; i++){
			reseua = reseua + peua[i];
			meua = reseua / 31;
		}
		for(int i = 0; i<31; i++){
			reschina = reschina + pchina[i];
			mchina = reschina / 31;
		}
		if(mbrasil > mchina && mbrasil > meua){
			cout << "O país com a maior taxa media de crescimento dos últimos 30 anos é o Brasil com " << mbrasil << "% de taxa de crescimento.";
		}
		else if (mchina > mbrasil && mchina > meua ){
			cout << "O país com a maior taxa media de crescimento dos últimos 30 anos é a China com " << mchina << "% de taxa de crescimento.";
		}
		else {
			cout << "O país com maior a taxa media de crescimento dos últimos 30 anos são os Estados Unidos com " << meua << "% de taxa de crescimento.";
		}
		
		break;
		
	case 2:
		cout << "Digite o país a ser analisado. Brasil, China, EUA\n";
		scanf("%s", &pais);
			if (!strcmp(&pais, "Brasil") || !strcmp(&pais, "brasil")){			
				cout << "Digite o valor dos ultimos anos a serem analisados.\n";
				scanf("%i", &ano);	
				for (int j = 0; j<ano; j++){
					cout << "A taxa de crescimento do " << &pais << " é de " << pbrasil[j] << "% referente ao ano de "	<< pano[j] << "\n";
				}
			}
			else if (!strcmp(&pais, "China") || !strcmp(&pais, "china")){	
				cout << "Digite o valor dos ultimos anos a serem analisados.\n";
				scanf("%i", &ano);		
				for (int j = 0; j<ano; j++){
					cout << "A taxa de crescimento da " << &pais  << " é de " << pchina[j] << "% referente ao ano de "	<< pano[j] << "\n";
				}
			}
			else if (!strcmp(&pais, "EUA") || !strcmp(&pais, "eua")){
				cout << "Digite o valor dos ultimos anos a serem analisados.\n";
				scanf("%i", &ano);			
				for (int j = 0; j<ano; j++){
					cout << "A taxa de crescimento dos " << &pais<< " é de " << peua[j] << "% referente ao ano de " << pano[j] << "\n";
				}
			}
			else {
				cout << "Nenhum país encontrado, digite Brasil, China ou EUA.";
			}
	
		break;
		
		case 3:
			float maior;
			int anoesp; //Refere-se ao ano específico da maior alteração da taxa do PIB
			maior = 0;
				cout << "Digite o país a ser analisado. Brasil, China, EUA\n";
				scanf("%s", &pais);
			if (!strcmp(&pais, "Brasil") || !strcmp(&pais, "brasil")){			
				for(int i = 0; i<31; i++){
					if(pbrasil[i]>maior){
					maior = pbrasil[i];
					anoesp = i;
					}
				}
				cout << maior;
				cout << " referente ao ano de " << pano[anoesp];
				
			}
			else if (!strcmp(&pais, "China") || !strcmp(&pais, "china")){	
				for(int i = 0; i<31; i++){
					if(pchina[i]>maior){
					maior = pchina[i];
					anoesp = i;
					}
				}
				cout << maior;
				cout << " referente ao ano de " << pano[anoesp];
			}
			else if (!strcmp(&pais, "EUA") || !strcmp(&pais, "eua")){
				for(int i = 0; i<31; i++){
					if(peua[i]>maior){
					maior = peua[i];
					anoesp = i;
					}
				}
				cout << maior;
				cout << " referente ao ano de " << pano[anoesp];	
			}
			else {
				cout << "Nenhum país encontrado, digite Brasil, China ou EUA.";
			}
		break;
		case 4:
			cout << "\n";
			cout << "------------ Os dados do BRASIL são: ------------ \n";
			minima(pbrasil);
			cout << "\n";
			maxima(pbrasil);
			cout << "\n";
			cout << "A média é: " << media(pbrasil, 31);
			cout << "\n";
			mediana(pbrasil, 31);
			cout << "\n";
			moda(pbrasil);
			cout << "A variancia é: "; 
			variancia(pbrasil, 31);
			cout << "\n";
						
			cout << "\n";
			cout << "------------- Os dados dos ESTADOS UNIDOS são: ------------- \n";
			minima(peua);
			cout << "\n";
			maxima(peua);
			cout << "\n";
			cout << "A média é: " << media(peua, 31);
			cout << "\n";
			mediana(peua, 31);
			cout << "\n";
			moda(peua);
			cout << "A variancia é: "; 
			variancia(peua, 31);
			cout << "\n";
			
			cout << "\n";
			cout << "------------ Os dados da CHINA são: ------------ \n";
			minima(pchina);
			cout << "\n";
			maxima(pchina);
			cout << "\n";
			cout << "A média é: " << media(pchina, 31);
			cout << "\n";
			mediana(pchina, 31);
			cout << "\n";
			moda(pchina);
			cout << "A variancia é: "; 
			variancia(pchina, 31);
			cout << "\n";
			
			
			break;
		
			case 5:
			//Brasil
			cout << "\nOrdenação de frequência do Brasil.\n";
			cout << "Valor      |";
			cout << "fi      |" ;
			cout << "Fi      |";
			cout << "fr      |";
			cout << "Fri      \n";
			for (int i=0; i<23; i++){
				
				printf ("%.1f", ordfreqvalorbr[i]); 
				cout << "        ";
				printf ("%.f", ordfreqfibr[i]);
				cout << "        ";
				printf ("%.f", ordfreqffibr[i]);
				cout << "        ";
				printf ("%.2f", ordfreqfrbr[i]); cout << "%";
				cout << "     ";
				printf ("%.2f", ordfreqfribr[i]); cout << "%";
			
				
				cout << "  ";
				cout << "\n";
				
			}
			cout << "\nOrdenação de frequência dos Estados Unidos.";
			cout << "\n";  
			cout << "Valor      |";
			cout << "fi      |" ;
			cout << "Fi      |";
			cout << "fr      |";
			cout << "Fri      \n";
				for (int j=0; j<24; j++){
					
					printf ("%.1f", ordfreqvaloreua[j]); 
					cout << "        ";
					printf ("%.f", ordfreqfieua[j]);
					cout << "        ";
					printf ("%.f", ordfreqffieua[j]);
					cout << "        ";
					printf ("%.2f", ordfreqfreua[j]); cout << "%";
					cout << "     ";
					printf ("%.2f", ordfreqfrieua[j]); cout << "%";
				
					
					cout << "  ";
					cout << "\n";
				}
			//China
			cout << "\nOrdenação de frequência da China.\n";
			cout << "Valor      |";
			cout << "fi      |" ;
			cout << "Fi      |";
			cout << "fr      |";
			cout << "Fri      \n";
				for (int k=0; k<25; k++){
					
					printf ("%.1f", ordfreqvalorchina[k]); 
					cout << "        ";
					printf ("%.f", ordfreqfichina[k]);
					cout << "        ";
					printf ("%.f", ordfreqffichina[k]);
					cout << "        ";
					printf ("%.2f", ordfreqfrchina[k]); cout << "%";
					cout << "     ";
					printf ("%.2f", ordfreqfrichina[k]); cout << "%";
				
					
					cout << "  ";
					cout << "\n";
					
				}
				break;
		default:
			break;
	
	}
	
	return 0;
	}
