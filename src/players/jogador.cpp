#include "jogador.hpp"

// Construtor padrão
Jogador::Jogador() : apelido(""), nome(""), email(""), senha("") {}

// Construtor parametrizado
Jogador::Jogador(const std::string& apelido, const std::string& nome, const std::string& email, const std::string& senha)
    : apelido(apelido), nome(nome), email(email), senha(senha), vitorias(0), derrotas(0) {}

// Métodos getter
std::string Jogador::getApelido() const {
    return apelido;
}

std::string Jogador::getNome() const {
    return nome;
}

std::string Jogador::getEmail() const {
    return email;
}

std::string Jogador::getSenha() const {
    return senha;
}

int Jogador::getVitorias() const {
    return vitorias;
}

int Jogador::getDerrotas() const {
    return derrotas;
}

// Métodos setter
void Jogador::setApelido(const std::string& apelido) {
    this->apelido = apelido;
}

void Jogador::setNome(const std::string& nome) {
    this->nome = nome;
}

void Jogador::setEmail(const std::string& email) {
    this->email = email;
}

void Jogador::setSenha(const std::string& senha) {
    this->senha = senha;
}

void Jogador::setVitorias(int vitorias) {
    this->vitorias = vitorias;
}

void Jogador::setDerrotas(int derrotas) {
    this->derrotas = derrotas;
}

// Métodos para atualizar estatísticas
void Jogador::incrementarVitorias() {
    vitorias++;
}

void Jogador::incrementarDerrotas() {
    derrotas++;
}
