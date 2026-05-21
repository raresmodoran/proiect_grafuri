# 🎓 GraphEdu - Platformă Interactivă pentru Studiul Grafurilor Orientate

**GraphEdu** este o aplicație de tip CLI (Command Line Interface) dezvoltată în C++, concepută ca un instrument educațional interactiv pentru înțelegerea conceptelor fundamentale și avansate din teoria grafurilor orientate (digrafuri). Proiectul îmbină armonios teoria pură cu aplicațiile practice și evaluarea interactivă.

---

## 🚀 Caracteristici Principale

Aplicația este structurată sub forma unui curs interactiv ghidat printr-un meniu dinamic:

1. **Module Teoretice & Definiții:** * Explicarea conceptelor de graf orientat, arc, lanț, drum, circuit elementar, subgraf și graf parțial.
2. **Analiza Nodurilor (Gradele unui vârf):**
   * Calculul gradului interior ($d^-$) și exterior ($d^+$).
   * Identificarea automată a vârfurilor izolate sau terminale pe baza matricelor introduse de utilizator.
3. **Metode Multiple de Reprezentare:**
   * Liste de adiacență (implementate dinamic prin pointeri).
   * Matrice de adiacență, matrice de incidență și vectorul arcelor.
   * Matricea drumurilor (conceptul de accesibilitate).
4. **Algoritmi de Conexitate și Tare Conexitate:**
   * Determinarea componentelor conexe.
   * Verificarea tarei conexități folosind **Algoritmul lui Kosaraju** (bazat pe două parcurgeri DFS și graful transpus) și **Algoritmul Roy-Warshall**.
5. **Aplicații Speciale:**
   * Verificarea proprietății de graf Hamiltonian (Teorema lui Dirac/Ore).
   * Verificarea proprietății de graf Eulerian (analiza parității gradelor).
6. **Modul de Evaluare (Test Interactiv):**
   * Un sistem de quiz cu întrebări cu răspuns unic, răspuns multiplu și completare text.
   * Evaluare în timp real, gestionarea punctajului și afișarea rezultatului final.

---

## 🛠️ Tehnologii și Concepte Utilizate

* **Limbaj:** C++ (Standard ISO)
* **Structuri de date standard (STL):** `std::vector`, `std::stack`, `std::queue`, `std::pair`
* **Algoritmi:** Parcurgerea în adâncime (DFS), Algoritmul Roy-Warshall, Algoritmul lui Kosaraju pentru componente tare conexe.
* **Interfață:** Console-based utilizând utilitare specifice Windows (`<windows.h>`, `<conio.h>`) pentru manipularea ecranului (`system("CLS")`) și controlul fluxului de navigare.

---

## 💻 Cum se rulează proiectul

### Cerințe preliminare
* Un sistem de operare **Windows** (datorită utilizării librăriilor `windows.h` și `conio.h`).
* Un compilator de C++ (de exemplu, GCC/MinGW).

### Compilare și Execuție (Terminal)

1. Clonează repository-ul:
   ```bash
   git clone [https://github.com/utilizator/proiect-grafuri-orientate.git](https://github.com/utilizator/proiect-grafuri-orientate.git)
   cd proiect-grafuri-orientate
