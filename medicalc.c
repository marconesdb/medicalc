#include <stdio.h>
#include <locale.h>
#include <string.h> // Necessário para strcspn

#define TAM 50

int main(void) {
    setlocale(LC_NUMERIC, "C");  // Força uso de ponto como separador decimal

    char nome1[TAM], nome2[TAM], nome3[TAM];
    float preco1 = 0, preco2 = 0, preco3 = 0;
    int comp1 = 0, comp2 = 0, comp3 = 0;
    int dose1 = 0, dose2 = 0, dose3 = 0;
    float dur1 = 0, dur2 = 0, dur3 = 0;
    float custo1 = 0, custo2 = 0, custo3 = 0;
    float orcamento = 0, total = 0, percentual = 0;

    char lixo[10]; // para limpar o \n do buffer

    printf("=== MediCalc - Calculadora de Medicamentos para Idosos ===\n");

    // ORÇAMENTO
    printf("\nInforme seu orçamento mensal para medicamentos (R$) [use ponto como separador decimal, ex: 200.00]: ");
    scanf("%f", &orcamento);
    fgets(lixo, 10, stdin); // limpa buffer
    printf("→ Orçamento registrado: R$ %.2f\n", orcamento);

    // MEDICAMENTO 1
    printf("\n--- Medicamento 1 ---\n");
    printf("Nome: ");
    fgets(nome1, TAM, stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    printf("→ Nome registrado: %s\n", nome1);

    printf("Preço da caixa (R$) [ex: 34.90]: ");
    scanf("%f", &preco1);
    printf("→ Preço registrado: R$ %.2f\n", preco1);

    printf("Quantidade de comprimidos na caixa: ");
    scanf("%d", &comp1);
    printf("→ Quantidade registrada: %d comprimidos\n", comp1);

    printf("Quantos comprimidos por dia: ");
    scanf("%d", &dose1);
    printf("→ Doses diárias registradas: %d comprimido(s)/dia\n", dose1);
    fgets(lixo, 10, stdin); // limpa buffer final

    // MEDICAMENTO 2
    printf("\n--- Medicamento 2 ---\n");
    printf("Nome: ");
    fgets(nome2, TAM, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("→ Nome registrado: %s\n", nome2);

    printf("Preço da caixa (R$) [ex: 58.75]: ");
    scanf("%f", &preco2);
    printf("→ Preço registrado: R$ %.2f\n", preco2);

    printf("Quantidade de comprimidos na caixa: ");
    scanf("%d", &comp2);
    printf("→ Quantidade registrada: %d comprimidos\n", comp2);

    printf("Quantos comprimidos por dia: ");
    scanf("%d", &dose2);
    printf("→ Doses diárias registradas: %d comprimido(s)/dia\n", dose2);
    fgets(lixo, 10, stdin); // limpa buffer

    // MEDICAMENTO 3
    printf("\n--- Medicamento 3 ---\n");
    printf("Nome: ");
    fgets(nome3, TAM, stdin);
    nome3[strcspn(nome3, "\n")] = 0;
    printf("→ Nome registrado: %s\n", nome3);

    printf("Preço da caixa (R$) [ex: 19.99]: ");
    scanf("%f", &preco3);
    printf("→ Preço registrado: R$ %.2f\n", preco3);

    printf("Quantidade de comprimidos na caixa: ");
    scanf("%d", &comp3);
    printf("→ Quantidade registrada: %d comprimidos\n", comp3);

    printf("Quantos comprimidos por dia: ");
    scanf("%d", &dose3);
    printf("→ Doses diárias registradas: %d comprimido(s)/dia\n", dose3);

    // CÁLCULOS
    if (dose1 > 0) dur1 = (float) comp1 / dose1;
    if (dose2 > 0) dur2 = (float) comp2 / dose2;
    if (dose3 > 0) dur3 = (float) comp3 / dose3;

    if (dur1 > 0) custo1 = (30.0 / dur1) * preco1;
    if (dur2 > 0) custo2 = (30.0 / dur2) * preco2;
    if (dur3 > 0) custo3 = (30.0 / dur3) * preco3;

    total = custo1 + custo2 + custo3;

    if (orcamento > 0)
        percentual = (total / orcamento) * 100;

    // SAÍDA
    printf("\n==================== RESULTADOS ====================\n");

    printf("\nDuração dos medicamentos (em dias):\n");
    printf("- %s: %.1f dias\n", nome1, dur1 > 0 ? dur1 : 0);
    printf("- %s: %.1f dias\n", nome2, dur2 > 0 ? dur2 : 0);
    printf("- %s: %.1f dias\n", nome3, dur3 > 0 ? dur3 : 0);

    printf("\nAlertas de reposição:\n");
    if (dur1 > 0 && dur1 <= 7)
        printf("⚠️  Repor %s em %.0f dias.\n", nome1, dur1);
    if (dur2 > 0 && dur2 <= 7)
        printf("⚠️  Repor %s em %.0f dias.\n", nome2, dur2);
    if (dur3 > 0 && dur3 <= 7)
        printf("⚠️  Repor %s em %.0f dias.\n", nome3, dur3);
    if (!(dur1 <= 7 && dur1 > 0) && !(dur2 <= 7 && dur2 > 0) && !(dur3 <= 7 && dur3 > 0))
        printf("✅ Nenhum medicamento precisa de reposição urgente.\n");

    printf("\nAnálise de custos:\n");
    printf("- Custo total mensal estimado: R$ %.2f\n", total);
    printf("- Percentual do orçamento comprometido: %.1f%%\n", percentual);

    if (total == 0) {
        printf("❗ Nenhum custo válido foi registrado.\n");
    } else if (percentual > 100) {
        printf("🚨 ALERTA: Orçamento excedido!\n");
    } else if (percentual > 70) {
        printf("⚠️  Mais de 70%% do orçamento comprometido.\n");
    } else {
        printf("✅ Gastos dentro do orçamento.\n");
    }

    return 0;
}
