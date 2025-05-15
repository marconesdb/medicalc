# MediCalc - Calculadora de Medicamentos para Idosos

![MediCalc Logo](https://img.shields.io/badge/MediCalc-1.0-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Language](https://img.shields.io/badge/language-C-orange)

## 📋 Sobre o Projeto

MediCalc é uma ferramenta simples e eficiente desenvolvida para ajudar idosos e seus cuidadores a gerenciar os gastos com medicamentos. O programa calcula a duração dos medicamentos, estima custos mensais e verifica se os gastos estão dentro do orçamento disponível.

## ✨ Recursos Principais

- 🧮 **Cálculo de duração**: Determina por quantos dias os medicamentos durarão com base na quantidade de comprimidos e dosagem diária
- 💰 **Estimativa de custos**: Calcula o custo mensal aproximado de cada medicamento
- 📊 **Análise de orçamento**: Verifica se os gastos estão dentro do orçamento mensal definido
- ⚠️ **Alertas de reposição**: Notifica quando medicamentos precisarão ser repostos em breve (7 dias ou menos)
- 🚨 **Alertas de orçamento**: Avisa quando os gastos excedem o orçamento ou comprometem mais de 70% dele

## 🛠️ Pré-requisitos

Para compilar e executar o MediCalc, você precisará de:

- Compilador C (GCC recomendado)
- Sistema operacional Windows, Linux ou macOS

## 📥 Instalação

### Clonando o repositório

```bash
git clone https://github.com/seu-usuario/medicalc.git
cd medicalc
```

### Compilando o programa

**Linux/macOS:**
```bash
gcc -o medicalc medicalc.c
```

**Windows (usando MinGW):**
```bash
gcc -o medicalc.exe medicalc.c
```

## 🚀 Como Usar

### Executando o programa

**Linux/macOS:**
```bash
./medicalc
```

**Windows:**
```bash
medicalc.exe
```

### Guia de uso

1. **Definir orçamento**: Insira seu orçamento mensal para medicamentos (use ponto como separador decimal, ex: 200.00)

2. **Cadastrar medicamentos**: Para cada medicamento, informe:
   - Nome do medicamento
   - Preço da caixa (em R$)
   - Quantidade de comprimidos na caixa
   - Número de comprimidos tomados por dia

3. **Revisar resultados**: O programa mostrará:
   - Duração estimada de cada medicamento
   - Alertas para medicamentos que precisam ser repostos em breve
   - Custo mensal total estimado
   - Porcentagem do orçamento comprometida
   - Alertas de orçamento (quando aplicável)

## 📷 Exemplo de Uso

```
=== MediCalc - Calculadora de Medicamentos para Idosos ===

Informe seu orçamento mensal para medicamentos (R$) [use ponto como separador decimal, ex: 200.00]: 300.00
→ Orçamento registrado: R$ 300.00

--- Medicamento 1 ---
Nome: Losartana
→ Nome registrado: Losartana
Preço da caixa (R$) [ex: 34.90]: 15.90
→ Preço registrado: R$ 15.90
Quantidade de comprimidos na caixa: 30
→ Quantidade registrada: 30 comprimidos
Quantos comprimidos por dia: 1
→ Doses diárias registradas: 1 comprimido(s)/dia

--- Medicamento 2 ---
Nome: AAS
→ Nome registrado: AAS
Preço da caixa (R$) [ex: 58.75]: 12.75
→ Preço registrado: R$ 12.75
Quantidade de comprimidos na caixa: 30
→ Quantidade registrada: 30 comprimidos
Quantos comprimidos por dia: 1
→ Doses diárias registradas: 1 comprimido(s)/dia

--- Medicamento 3 ---
Nome: Paracetamol
→ Nome registrado: Paracetamol
Preço da caixa (R$) [ex: 19.99]: 8.99
→ Preço registrado: R$ 8.99
Quantidade de comprimidos na caixa: 20
→ Quantidade registrada: 20 comprimidos
Quantos comprimidos por dia: 2
→ Doses diárias registradas: 2 comprimido(s)/dia

==================== RESULTADOS ====================

Duração dos medicamentos (em dias):
- Losartana: 30.0 dias
- AAS: 30.0 dias
- Paracetamol: 10.0 dias

Alertas de reposição:
⚠️  Repor Paracetamol em 10 dias.

Análise de custos:
- Custo total mensal estimado: R$ 55.64
- Percentual do orçamento comprometido: 18.5%
✅ Gastos dentro do orçamento.
```

## 🤔 Perguntas Frequentes

**P: O programa pode calcular para mais de 3 medicamentos?**  
R: A versão atual suporta apenas 3 medicamentos. Estamos trabalhando para adicionar suporte a mais medicamentos em versões futuras.

**P: Posso usar vírgula como separador decimal?**  
R: Não, o programa está configurado para usar ponto (.) como separador decimal. Certifique-se de inserir os valores neste formato.

**P: O programa funciona para medicamentos líquidos ou injetáveis?**  
R: A versão atual foi projetada para medicamentos em comprimidos. Suporte para outros formatos está planejado para versões futuras.

## 🔧 Dicas de Solução de Problemas

- Se o programa exibir valores estranhos, verifique se você utilizou o ponto como separador decimal
- Certifique-se de inserir valores válidos para todos os campos
- Em caso de erro na execução, tente recompilar o programa

## 📝 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo LICENSE para detalhes.

## 👨‍💻 Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

1. Faça um fork do projeto
2. Crie sua branch de recurso (`git checkout -b feature/AmazingFeature`)
3. Faça commit das suas alterações (`git commit -m 'Add some AmazingFeature'`)
4. Faça push para a branch (`git push origin feature/AmazingFeature`)
5. Abra um Pull Request