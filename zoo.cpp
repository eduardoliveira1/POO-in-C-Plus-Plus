#include <iostream>
#include <vector>
using namespace std;

/*
sistema para um zoológico fictício que cuida de diversos animais e tem uma equipe de funcionários que gerenciam as operações do zoológico. O sistema deverá registrar informações dos animais, controlar atividades como alimentação, e rastrear os funcionários responsáveis por cuidar dos animais. Cada animal tem características específicas e, dependendo de sua espécie, precisa de cuidados diferentes.
*/

class animal {
    public:
    string nome, especie;
    int idade;
    float peso;

    animal(string n, string e, int i, float p) {
        nome = n;
        especie = e;
        idade = i;
        peso = p;
    }

    void exibirInfo() {
        cout <<"\tNome: " << nome << "\tEspecie: " << especie << "\tIdade: " << idade << " anos\tPeso: " << peso << "kg" << endl;
    }
};

class cachorro : public animal {
    public: 

    void emitirSom() {
        cout << "Au au" << endl;
    }

    void cuidadosEspeciais() {
        cout << "Banho semanal";
    }
};

class gato : public animal {
    public: 

    void emitirSom() {
        cout << "Miau" << endl;
    }
    
    void cuidadosEspeciais() {
        cout << "Retirar o excesso de pelo" << endl;
    }
};

class leao : public animal {
    public: 

    void emitirSom() {
        cout << "Rugido" << endl;
    }
    
    void cuidadosEspeciais() {
        cout << "Monitoramento constante de temperatura" << endl;
    }
};

class funcionario {
    private:
    string nome, cargo;
    float salarioFixo, salario; // salario = salario fixo + bonus por numero de animais que ele cuida
};

int main() {
    system("cls");
    /*
    nome = ricardo, geraldo;
    especie = cachorro, leao, tigre;
    */
    animal dog ("montanha", "cachorro", 4, 12);
    dog.exibirInfo();
}