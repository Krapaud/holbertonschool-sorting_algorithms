# 📊 Algorithmes de Tri

Ce projet implémente plusieurs algorithmes de tri classiques en langage C, dans le cadre du cursus Holberton School.

## 📋 Description

Ce projet explore l'implémentation et l'analyse de la complexité temporelle de différents algorithmes de tri :
- **Tri à bulles (Bubble Sort)**
- **Tri par insertion (Insertion Sort)**
- **Tri par sélection (Selection Sort)**
- **Tri rapide (Quick Sort)**

Chaque algorithme est accompagné d'une analyse de sa complexité temporelle dans les meilleurs, moyens et pires cas.

## 🗂️ Structure du Projet

```
holbertonschool-sorting_algorithms/
│
├── sort.h                      # Fichier d'en-tête principal
├── print_array.c              # Fonction pour afficher les tableaux
├── print_list.c               # Fonction pour afficher les listes
│
├── 0-bubble_sort.c            # Implémentation du tri à bulles
├── 0-O                        # Complexité temporelle du tri à bulles
├── 0-main.c                   # Test du tri à bulles
│
├── 1-insertion_sort_list.c    # Implémentation du tri par insertion
├── 1-O                        # Complexité temporelle du tri par insertion
├── 1-main.c                   # Test du tri par insertion
│
├── 2-selection_sort.c         # Implémentation du tri par sélection
├── 2-O                        # Complexité temporelle du tri par sélection
├── 2-main.c                   # Test du tri par sélection
│
├── 3-quick_sort.c             # Implémentation du tri rapide
├── 3-O                        # Complexité temporelle du tri rapide
├── 3-main.c                   # Test du tri rapide
│
└── README.md                  # Ce fichier
```

## 🛠️ Compilation et Exécution

### Prérequis
- Compilateur GCC
- Système Linux/Unix

### Compilation
```bash
# Tri à bulles
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble

# Tri par insertion
gcc -Wall -Wextra -Werror -pedantic 1-insertion_sort_list.c 1-main.c print_list.c -o insertion

# Tri par sélection
gcc -Wall -Wextra -Werror -pedantic 2-selection_sort.c 2-main.c print_array.c -o select

# Tri rapide
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-quick_sort.c 3-main.c print_array.c -o quick
```

### Exécution
```bash
./bubble      # Exécuter le tri à bulles
./insertion   # Exécuter le tri par insertion
./select      # Exécuter le tri par sélection
./quick       # Exécuter le tri rapide
```

## 📊 Algorithmes Implémentés

### 1. Tri à Bulles (Bubble Sort)
**Fichiers :** `0-bubble_sort.c`, `0-O`

Le tri à bulles compare les éléments adjacents et les échange s'ils sont dans le mauvais ordre. Ce processus est répété jusqu'à ce que le tableau soit trié.

**Complexité temporelle :**
- Meilleur cas : O(n)
- Cas moyen : O(n²)
- Pire cas : O(n²)

### 2. Tri par Insertion (Insertion Sort)
**Fichiers :** `1-insertion_sort_list.c`, `1-O`

Le tri par insertion construit le tableau final trié un élément à la fois. Il est efficace pour de petites quantités de données. Dans ce projet, il est implémenté sur une liste doublement chaînée.

**Complexité temporelle :**
- Meilleur cas : O(n)
- Cas moyen : O(n²)
- Pire cas : O(n²)

### 3. Tri par Sélection (Selection Sort)
**Fichiers :** `2-selection_sort.c`, `2-O`

Le tri par sélection divise la liste en deux parties : triée et non triée. Il sélectionne répétitivement le plus petit élément de la partie non triée.

**Complexité temporelle :**
- Meilleur cas : O(n²)
- Cas moyen : O(n²)
- Pire cas : O(n²)

### 4. Tri Rapide (Quick Sort)
**Fichiers :** `3-quick_sort.c`, `3-O`

Le tri rapide utilise la stratégie "diviser pour régner" avec le schéma de partition de Lomuto. Le pivot est toujours le dernier élément de la partition.

**Complexité temporelle :**
- Meilleur cas : O(n log n)
- Cas moyen : O(n log n)
- Pire cas : O(n²)

## 🔧 Structures de Données

### Tableau d'Entiers
Utilisé pour les tris à bulles, par sélection et rapide.

### Liste Doublement Chaînée
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Utilisée pour le tri par insertion. Les nœuds ne peuvent pas être modifiés (valeur `n` constante), seuls les liens entre nœuds peuvent être changés.

## 📝 Fonctions Utilitaires

### `print_array`
Affiche un tableau d'entiers.
```c
void print_array(const int *array, size_t size);
```

### `print_list`
Affiche une liste doublement chaînée d'entiers.
```c
void print_list(const listint_t *list);
```

## 🎯 Objectifs d'Apprentissage

- Comprendre le fonctionnement des algorithmes de tri classiques
- Analyser la complexité temporelle et spatiale
- Implémenter des algorithmes efficaces en C
- Travailler avec différentes structures de données
- Respecter les normes de codage et les contraintes du projet

## 📚 Notation Big O

Les fichiers `*-O` contiennent les notations Big O pour chaque algorithme :
- **O(1)** : Temps constant
- **O(n)** : Temps linéaire
- **O(n²)** : Temps quadratique
- **O(log n)** : Temps logarithmique
- **O(n log n)** : Temps quasi-linéaire

### Format des fichiers de complexité :
Chaque fichier `*-O` contient 3 lignes :
1. Complexité dans le meilleur cas
2. Complexité dans le cas moyen
3. Complexité dans le pire cas

## ✅ Tests

Chaque algorithme est accompagné d'un fichier de test (`*-main.c`) qui :
- Initialise un tableau de test avec les valeurs : `{19, 48, 99, 71, 13, 52, 96, 73, 86, 7}`
- Affiche l'état initial du tableau/liste
- Exécute l'algorithme de tri
- Affiche chaque étape de tri (après chaque échange)
- Affiche le résultat final trié

### Exemple de sortie attendue :
```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

[étapes de tri avec affichage après chaque échange]

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

## 🔍 Spécifications Techniques

### Contraintes du projet :
- Utilisation du compilateur GCC avec les flags `-Wall -Wextra -Werror -pedantic`
- Respect du style de codage Betty
- Pas plus de 5 fonctions par fichier
- Variables déclarées en début de bloc
- Affichage obligatoire après chaque échange d'éléments

### Fonctions interdites :
- Aucune fonction de la bibliothèque standard sauf `printf`, `malloc`, `free`

## 🧪 Test avec de gros datasets

Pour tester les algorithmes avec de grandes quantités de données aléatoires, vous pouvez utiliser [Random.org](https://www.random.org/) pour générer des ensembles de nombres.

## 👨‍💻 Auteur

Projet développé dans le cadre du programme Holberton School.

## 📄 Licence

Ce projet est à des fins éducatives uniquement.