#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float L;
	float l;
	float l3;
	float l4;
	float B;
	float b;
	float h;
	float D;
	float d;
	float pi = 3.14;
	float r;
	float res;
	int val;
	int esc;
	
	cout << "escolha area ou perimetro.\n";
	cout << "[1] = area; [2] = perimetro: ";
	cin >> esc;
	
switch(esc){
	case 1:
	    cout << "AREA:\n";
	    cout << "indique uma forma geometrica: ";
	    cout << "[1] = quadrado; [2] = paralelogramo; [3] = retangulo; [4] = triangulo;\n [5] = triangulo equilatero; [6] = trapezio; [7] = losango; [8] = circulo:  ";
	    cin >> val;
	
            switch(val){
		        case 1:
			        cout << "digite o valor da lateral do quadrado:";
			        cin >> L;
			        res = L*L;
			        cout << "\no valor da area do quadrado: " << res << "\n";
		          	break;
		        case 2:
	        		cout << "digite o valor da altura do paralelogramo: ";
		        	cin >> h;
	        		cout << "digite o valor da base do paralelogramo: ";
		        	cin >> b;
		        	res = b*h;
	        		cout << "o valor da area do paralelogramo: " << res << "\n\n";
		        	break;
		        case 3:
		        	cout << "digite o valor da altura do retangulo: ";
		        	cin >> h;
		        	cout << "digite o valor da base do retangulo: ";
		        	cin >> b;
		        	res = h*b;
		        	cout << "o valor da area do retangulo: " << res << "\n\n";
		        	break;
	        	case 4:
		        	cout << "digite o valor da base do triangulo: ";
		        	cin >> b;
	            	cout << "digite o valor da altura do triangulo: ";
		        	cin >> h;
	        		res = (b*h)/2;
		        	cout << "o valor da area do triangulo: " << res << "\n\n";
		        	break;
	        	case 5:
		        	cout << "digite o valor do lado do triangulo: ";
	        		cin >> L;
	        		res = L*L * sqrt(3) / 4;
	        		cout << "o valor da area do triangulo: " << res << "\n\n";
	        		break;
		        case 6:
		        	cout << "digite o valor da base maior do trapezio: ";
	        		cin >> B;
	        		cout << "digite o valor da base menor do trapezio: ";
	        		cin >> b;
		        	cout << "digite o valor da altura do trapezio: ";
		        	cin >> h;
		        	res = (B+b)*h/2;
		        	cout << "o valor da area do trapezio: " << res << "\n\n";
		        	break;
	        	case 7:
	        		cout << "digite o valor da diagonal maior do trapezio: ";
		        	cin >> D;
		        	cout << "digite o valor da diagonal menor do trapezio: ";
		        	cin >> d;
	        		res = D*d/2;
	        		cout << "o valor da area do trapezio: " << res << "\n\n";
	        		break;
	        	case 8:
	        		cout << "digite o valor do raio(obs: raio=diametro/2): ";
		        	cin >> r;
		        	res = pi*(r*r);
	        		cout << "o valor da area do circulo: " << res << "\n\n";
	        		break;
		
	}
	case 2:
	    cout << "PERIMETRO:\n";
	    cout << "indique uma forma geometrica: ";
    	cout << "[1] = quadrado; [2] = paralelogramo; [3] = retangulo; [4] = triangulo;\n [5] = triangulo equilatero; [6] = trapezio; [7] = losango; [8] = circulo:  ";
    	cin >> val;
	
            switch(val){
        		case 1:
		        	cout << "digite o valor da lateral do quadrado:";
	        		cin >> L;
	        		res = L*4;
	        		cout << "\no valor da perimetro do quadrado: " << res << "\n";
	        		break;
	        	case 2:
	        		cout << "digite o lado maior paralelogramo: ";
	        		cin >> L;
	        		cout << "digite o lado menor do paralelogramo: ";
	        		cin >> l;
	        		res = 2 * (L + l);
	        		cout << "o valor do o perimetro do paralelogramo: " << res << "\n\n";
	        		break;
		        case 3:
		        	cout << "digite o valor da altura do retangulo: ";
		        	cin >> h;
	        		cout << "digite o valor da base do retangulo: ";
	        		cin >> b;
		        	res = 2 * (b+h);
		        	cout << "o valor do perimetro do retangulo: " << res << "\n\n";
		        	break;
	        	case 4:
	        		cout << "digite o valor do primeiro lado do triangulo: ";
	        		cin >> L;
	        		cout << "digite o valor do segundo lado do triangulo: ";
	        		cin >> l;
	        		cout << "digite o valor do terceiro lado do triangulo: ";
	        		cin >> l3;
        			res = L + l + l3;
	        		cout << "o valor do perimetro do triangulo: " << res << "\n\n";
	        		break;
	        	case 5:
	        		cout << "digite o valor do lado do triangulo: ";
	        		cin >> L;
	        		res = L*3;
	        		cout << "o valor do perimetro do triangulo: " << res << "\n\n";
        			break;
        		case 6:
	        		cout << "digite o valor do primeiro lado do trapezio: ";
	        		cin >> L;
	        		cout << "digite o valor do segundo lado do trapezio: ";
	        		cin >> l;
	        		cout << "digite o valor do terceiro lado do trapezio: ";
	        		cin >> l3;
	        		cout << "digite o valor do segundo lado do trapezio ";
	        		cin >> l4;
	        		res = L + l + l3 + l4;
	        		cout << "o valor do perimetro do trapezio: " << res << "\n\n";
	        		break;
	        	case 7:
	        		cout << "digite o valor da lateral do losango: ";
	        		cin >> L;
	        		res = L*4;
	        		cout << "o valor do perimetro do trapezio: " << res << "\n\n";
        			break;
	        	case 8:
	        		cout << "digite o valor do raio(obs: raio=diametro/2): ";
	        		cin >> r;
	        		res = pi*r*2;
	        		cout << "o valor da circuferencia: " << res << "\n\n";
	        		break;
			
           }
	
    }
	
	cout << "programa finalizado";
	return 0;
}