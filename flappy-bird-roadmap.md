# 🎮 Roadmap Flappy Bird ASCII - Projet C

> **Guide tuteur pour le développement d'un clone de Flappy Bird en console**  
> *Cette roadmap est flexible et peut être adaptée selon votre progression*

---

## 📋 Vue d'ensemble du projet

### Objectifs pédagogiques
- ✅ Consolider les bases du C (structures, pointeurs, fonctions)
- ✅ Apprendre la programmation temps réel et les animations
- ✅ Découvrir la détection de collisions et la physique simple
- ✅ Maîtriser l'affichage console avancé
- ✅ Organiser un projet en modules

### Résultat attendu
Un jeu Flappy Bird fonctionnel dans le terminal, avec un oiseau qui saute, des obstacles qui défilent, un système de score et une détection de collision.

---

## 🏗️ Architecture du projet

```
flappy-bird/
├── main.c              # Point d'entrée et menu principal
├── game.h/game.c       # Boucle de jeu et logique globale
├── bird.h/bird.c       # Structure et comportement de l'oiseau
├── pipe.h/pipe.c       # Gestion des tuyaux (obstacles)
├── display.h/display.c # Rendu console et interface
├── input.h/input.c     # Gestion des entrées clavier
├── utils.h/utils.c     # Utilitaires (random, timing, etc.)
├── Makefile            # Compilation automatisée
└── README.md           # Documentation du projet
```

---

## 🎯 Phase 1 : Fondations (2-3 jours)

### Étape 1.1 : Configuration du projet
- [ ] Créer l'arborescence des fichiers
- [ ] Écrire un `main.c` basique qui affiche "Flappy Bird Game"
- [ ] Créer un `Makefile` simple
- [ ] Tester la compilation

### Étape 1.2 : Affichage de base
- [ ] Créer `display.h/display.c`
- [ ] Implémenter `clear_screen()` (codes ANSI ou system("clear"))
- [ ] Implémenter `draw_border()` pour dessiner les limites du jeu
- [ ] Créer une grille de jeu 20x60 caractères
- [ ] Tester l'affichage d'un cadre vide

### Étape 1.3 : Structure de l'oiseau
- [ ] Créer `bird.h` avec la structure `Bird`
- [ ] Définir position (x, y), vitesse, état
- [ ] Créer `bird.c` avec `bird_create()`, `bird_init()`
- [ ] Implémenter `bird_draw()` pour afficher l'oiseau (`@` ou `🐦`)
- [ ] Tester l'affichage statique de l'oiseau

**🎯 Objectif de fin de phase :** Afficher un oiseau immobile dans un cadre

---

## ⚡ Phase 2 : Mouvement et physique (3-4 jours)

### Étape 2.1 : Gestion du temps
- [ ] Créer `utils.h/utils.c`
- [ ] Implémenter `get_time_ms()` pour mesurer le temps
- [ ] Créer `sleep_ms()` pour contrôler la vitesse du jeu
- [ ] Définir une FPS cible (ex: 30 FPS = 33ms par frame)

### Étape 2.2 : Physique de l'oiseau
- [ ] Ajouter la gravité dans `bird.c`
- [ ] Implémenter `bird_update()` qui applique la gravité
- [ ] L'oiseau tombe automatiquement
- [ ] Limiter l'oiseau aux bords de l'écran

### Étape 2.3 : Input non-bloquant
- [ ] Créer `input.h/input.c`
- [ ] Rechercher comment détecter une touche sans bloquer le programme
- [ ] Implémenter `check_input()` (kbhit() sur Windows, select() sur Linux)
- [ ] Détecter la barre d'espace pour faire sauter l'oiseau

### Étape 2.4 : Boucle de jeu basique
- [ ] Créer `game.h/game.c`
- [ ] Implémenter la boucle principale : Update → Draw → Sleep
- [ ] Intégrer physique + input + affichage
- [ ] L'oiseau saute quand on appuie sur espace

**🎯 Objectif de fin de phase :** Oiseau qui tombe et saute avec les contrôles

---

## 🚧 Phase 3 : Obstacles et collisions (4-5 jours)

### Étape 3.1 : Structure des tuyaux
- [ ] Créer `pipe.h` avec la structure `Pipe`
- [ ] Définir position x, hauteur du gap, taille du gap
- [ ] Créer `pipe.c` avec `pipe_create()`, `pipe_init()`
- [ ] Implémenter `pipe_draw()` pour dessiner un tuyau vertical

### Étape 3.2 : Génération de tuyaux
- [ ] Implémenter `pipe_generate()` avec position aléatoire du gap
- [ ] Créer un array de tuyaux dans `game.c`
- [ ] Générer périodiquement de nouveaux tuyaux
- [ ] Limiter le nombre de tuyaux à l'écran (ex: 3 max)

### Étape 3.3 : Défilement des obstacles
- [ ] Implémenter `pipe_update()` qui déplace les tuyaux vers la gauche
- [ ] Supprimer les tuyaux qui sortent de l'écran
- [ ] Optimiser la gestion mémoire des tuyaux

### Étape 3.4 : Détection de collision
- [ ] Implémenter `check_collision_bird_pipe()`
- [ ] Vérifier collision avec le sol et le plafond
- [ ] Implémenter `check_collision_bird_ground()`
- [ ] Tester toutes les collisions

**🎯 Objectif de fin de phase :** Obstacles qui défilent avec détection de collision

---

## 🏆 Phase 4 : Gameplay et scoring (2-3 jours)

### Étape 4.1 : Système de score
- [ ] Ajouter une variable `score` dans la structure de jeu
- [ ] Incrémenter le score quand l'oiseau passe un tuyau
- [ ] Afficher le score en temps réel
- [ ] Éviter de compter plusieurs fois le même tuyau

### Étape 4.2 : Game Over
- [ ] Implémenter l'état "Game Over" quand il y a collision
- [ ] Arrêter la physique et les mouvements
- [ ] Afficher un message "Game Over" + score final
- [ ] Permettre de redémarrer avec une touche

### Étape 4.3 : États du jeu
- [ ] Créer un enum pour les états : MENU, PLAYING, GAMEOVER
- [ ] Implémenter `game_state_update()` selon l'état actuel
- [ ] Gérer les transitions entre états
- [ ] Créer un menu simple de démarrage

**🎯 Objectif de fin de phase :** Jeu complet et jouable avec scoring

---

## ✨ Phase 5 : Polish et fonctionnalités bonus (2-4 jours)

### Étape 5.1 : Améliorations visuelles
- [ ] Ajouter des couleurs avec codes ANSI
- [ ] Améliorer les caractères utilisés (ASCII art)
- [ ] Créer des animations simples (battement d'ailes)
- [ ] Améliorer l'interface utilisateur

### Étape 5.2 : Persistance des données
- [ ] Sauvegarder le meilleur score dans un fichier
- [ ] Charger le meilleur score au démarrage
- [ ] Afficher "NEW RECORD!" quand approprié

### Étape 5.3 : Fonctionnalités avancées (optionnel)
- [ ] Difficulté progressive (vitesse qui augmente)
- [ ] Différents types d'obstacles
- [ ] Système de vies multiples
- [ ] Mode démo (IA qui joue)
- [ ] Sons avec beeps système

### Étape 5.4 : Documentation et finalisation
- [ ] Commenter tout le code
- [ ] Écrire un README.md complet
- [ ] Optimiser les performances
- [ ] Tester sur différents terminaux
- [ ] Créer une version release

**🎯 Objectif de fin de phase :** Jeu polished prêt à être partagé

---

## 🛠️ Outils et ressources

### Compilation
```bash
# Makefile basique
gcc -o flappy main.c game.c bird.c pipe.c display.c input.c utils.c -std=c99 -Wall
```

### Fonctions système utiles
- `usleep()` ou `nanosleep()` pour le timing
- `system("clear")` ou codes ANSI pour nettoyer l'écran
- `kbhit()` (Windows) ou `select()` (Linux) pour l'input non-bloquant
- `srand()` et `rand()` pour la génération aléatoire

### Codes ANSI utiles
```c
#define CLEAR_SCREEN "\033[2J\033[H"
#define HIDE_CURSOR "\033[?25l"
#define SHOW_CURSOR "\033[?25h"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_RESET "\033[0m"
```

---

## 🚨 Défis potentiels et solutions

### Input non-bloquant
**Problème :** `scanf()` bloque le programme  
**Solution :** Utiliser `select()` sur Linux ou `kbhit()` sur Windows

### Scintillement de l'écran
**Problème :** L'écran clignote à chaque frame  
**Solution :** Double buffering ou mise à jour sélective

### Timing inconsistant
**Problème :** Le jeu va trop vite/lent selon la machine  
**Solution :** Mesurer le temps écoulé et ajuster les updates

### Collisions imprécises
**Problème :** Détection de collision approximative  
**Solution :** Utiliser des hitboxes précises et tester tous les pixels

---

## 📚 Extensions créatives

Une fois le projet de base terminé, vous pourriez explorer :

- 🎨 **Version graphique** avec SDL ou raylib
- 🤖 **IA qui joue** avec des algorithmes génétiques
- 🌐 **Version multijoueur** en réseau
- 📱 **Port mobile** avec adaptation tactile
- 🎵 **Effets sonores** et musique
- 🏆 **Système de achievements** et statistiques

---

## ✅ Checklist finale

- [ ] Le jeu compile sans warnings
- [ ] L'oiseau répond aux contrôles
- [ ] Les obstacles défilent correctement
- [ ] Les collisions sont détectées
- [ ] Le score fonctionne
- [ ] Le game over et restart marchent
- [ ] Le code est propre et commenté
- [ ] Un README explique comment jouer

---

*Bonne chance dans votre développement ! N'hésitez pas à adapter cette roadmap selon vos besoins et votre rythme d'apprentissage. L'important est de progresser étape par étape et de comprendre chaque concept avant de passer au suivant.* 🚀