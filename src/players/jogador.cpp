#include "jogador.hpp"

// Construtor padrão
Jogador::Jogador() : apelido(""), nome(""), email(""), senha(""), vitorias(0), derrotas(0) {}

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

void Jogador::incrementarVitorias() {
    vitorias++;
}

void Jogador::incrementarDerrotas() {
    derrotas++;
}

void listarJogadores(const std::unordered_map<std::string, Jogador>& jogadores) {
    if (jogadores.empty()) {
        std::cout << "Nenhum jogador cadastrado.\n";
        return;
    }

    std::cout << "Jogadores cadastrados:\n";
    for (const auto& [apelido, jogador] : jogadores) {
        std::cout << "Apelido: " << apelido << ", Nome: " << jogador.getNome()
                  << ", Vitórias: " << jogador.getVitorias()
                  << ", Derrotas: " << jogador.getDerrotas() << "\n";
    }
}

void registrarResultado(std::unordered_map<std::string, Jogador>& jogadores,
                        const std::string& vencedor, const std::string& perdedor) {
    if (jogadores.find(vencedor) != jogadores.end() && jogadores.find(perdedor) != jogadores.end()) {
        jogadores[vencedor].incrementarVitorias();
        jogadores[perdedor].incrementarDerrotas();
        std::cout << "Resultado registrado: " << vencedor << " venceu, " << perdedor << " perdeu.\n";
    } else {
        std::cout << "ERRO: Um ou ambos os jogadores não foram encontrados.\n";
    }
}
