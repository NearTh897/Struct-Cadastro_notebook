#include <stdio.h>
#include <string.h>
#include <stddef.h>


// Definição do sctruct
    struct Cadastro_notebook {
        char cadastro[50];
        char nome_notebook[50];
        float Ghz;
        short GB_RAM;
        short GB_HD;
        char GPU[50];
        float preco;
    };


int main()
{
    // Declaração de uma variável do tipo struct Cadastro_notebook
    struct Cadastro_notebook Cadastragem;
    
    // Rotulçâo do struct
    strcpy(Cadastragem.cadastro, "1234ABCD");
    strcpy(Cadastragem.nome_notebook, "Asus M321");
    Cadastragem.Ghz = 3.20;
    Cadastragem.GB_RAM = 16;
    Cadastragem.GB_HD = 1024;
    strcpy(Cadastragem.GPU, "Integrada");
    Cadastragem.preco = 2345.99;
    
    // Tabelagem
    printf("=======INFORMAÇÕES=======\n");
    printf("Nome do notebook: %s\n", Cadastragem.nome_notebook);   
    printf("Frequência da CPU: %.2f Ghz\n", Cadastragem.Ghz);
    printf("GB de memória RAM: %d RAM\n",Cadastragem.GB_RAM);
    printf("Capacidade do HD: %d GB\n",Cadastragem.GB_HD);
    printf("Placa de vídeo: %s\n",Cadastragem.GPU);
    printf("Preço: %.2f R$\n",Cadastragem.preco);
    printf("=========================\n");

    
    
    
    
    
    return 0;
}