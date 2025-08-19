linha1 = input().split()

linha2 = input().split()

numero_peca1 = int(linha1[1])
valor_unitario1 = float(linha1[2])

numero_peca2 = int(linha2[1])
valor_unitario2 = float(linha2[2])

total_a_pagar = (numero_peca1 * valor_unitario1) + (numero_peca2 * valor_unitario2)

print(f"VALOR A PAGAR: R$ {total_a_pagar:.2f}")