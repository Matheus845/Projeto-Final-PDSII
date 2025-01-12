#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <string>

class Jogador {
public:
    // Construtores
    Jogador(); // Construtor padrão
    Jogador(const std::string& apelido, const std::string& nome, const std::string& email, const std::string& senha);

    // Getters
    std::string getApelido() const;
    std::string getNome() const;
    std::string getEmail() const;
    std::string getSenha() const;
    int getVitorias() const;
    int getDerrotas() const;

    // Setters
    void setApelido(const std::string& apelido);
    void setNome(const std::string& nome);
    void setEmail(const std::string& email);
    void setSenha(const std::string& senha);
    void setVitorias(int vitorias);
    void setDerrotas(int derrotas);

    // Métodos para atualizar estatísticas
    void incrementarVitorias();
    void incrementarDerrotas();

private:
    std::string apelido;
    std::string nome;
    std::string email;
    std::string senha;
    int vitorias;
    int derrotas;
};

#endif 
