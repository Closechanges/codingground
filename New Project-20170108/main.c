/* ==== KOMPENSATION ABGABE ====
 * Kompensationsaufgabe
 * Abgabe von: Erika Mustermann
 * =============================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_MATCH 200 // maximale Anzahl auszugebender Matches
#define MAX_STRING 255 // Maximale WortlÃ¤nge

/*** Datenstrukturen ***/
// QElement wird von Queue benutzt
struct QElement {
    // HIER Code einfÃ¼gen
    // * Datenstruktur implementieren
    char repeated_phrase[] = "ich will";
    FILE * read_file;
    read_file = fopen("/desktop/eingabe.txt", "r")
};

typedef struct QElement QElement;

struct Queue {
    // HIER Code einfÃ¼gen
    // * Datenstruktur implementieren
};

typedef struct Queue Queue;

// Queue initialisieren
Queue* init_queue() {
    // HIER Code einfÃ¼gen
}

// Speicher der Qeue freigeben
void queue_freigeben(Queue *queue) {
    // HIER Code einfÃ¼gen
};

// FÃ¼ge string als QElement am Ende der Queue an
void enqueue(Queue *queue, char* string){
    // HIER Code einfÃ¼gen
}

// LÃ¶sche das erste QElement der Queue
void dequeue (Queue *queue) {
    // HIER Code einfÃ¼gen
}

// Debug Ausgabe fÃ¼r Queue
void queue_ausgeben(Queue *queue) {
    // HIER Code einfÃ¼gen
}

// Vergleiche Inhalte zweier Queues bis zur LÃ¤nge
int match(Queue *suchphrase, Queue *queue) {
    // HIER Code einfÃ¼gen
}

int main(int argc, char** argv) {
    // Parameter einlesen
    if (argc < 3)
    {
        printf("Nutzung: %s <Dateiname> <Wort1> <Wort2> ...\n", argv[0]);
        return 1;
    }

    // HIER Code einfÃ¼gen
    // * Initialisiere Queues
    // * FÃ¼lle die Queue der Suchphrase
    //   Tipp: Die Elemente findest du bei argv[2] bis argv[argc]
    // * ÃœberpÃ¼fe mit queue_ausgeben ob du es korrekt eingelesen hast.

    // HIER Code einfÃ¼gen
    // * WÃ¶rter aus Datei mit enqueue in die Queue befÃ¶rdern bis Queue voll ist.
    // * Von da an mit enqueue und dequeue WÃ¶rter in die Queue lesen und Queues
    //   vergleichen
    // * Gebe die Positionen der gefundenen Phrase im Text an, in dem du die WÃ¶rter des
    //   Text von 1 an hochzÃ¤hlst. Die Position der Phrase ist identisch mit der Position
    //   des ersten Wortes der Phrase.

    // HIER Speicher der Queues freigeben
    // * ÃœberprÃ¼fe mit valgrind ob alles freigeben wird.
}