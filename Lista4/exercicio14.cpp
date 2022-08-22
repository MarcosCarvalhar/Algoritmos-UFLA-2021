#include <iostream>

using namespace std;

float calc(float d_Atual,float v_media,float tempo)
{
	return d_Atual + (v_media * tempo);
}

float converte(float d){
	return d / 1.852;
}
int main()
{
	float d_Atual=0, v_media, tempo, previsao;
	
	while(d_Atual != -1){
		cin >> d_Atual >> v_media >> tempo;
		previsao = calc(d_Atual, v_media, tempo);
		cout << converte(d_Atual) << " " << converte(previsao);
	}
}



