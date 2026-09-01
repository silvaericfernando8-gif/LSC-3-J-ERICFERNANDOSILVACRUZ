aves = ["Aguila", "Loro", "Colibri" "Canario"]

print("--- Lista Inicial de Aves ---")
for ave in aves:
    print(f"-{ave}")

nueva_ave = input("\nIngrese el nombre de una nueva ave para insertar: ")
aves.append(nueva_ave)

print("\n--- Lista Actualizada de Aves ---")
for i, ave in enumerate(aves, start=1):
    print(f"{i}. {ave}")
