#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A node in an n-ary tree */
typedef struct Node {
    char *name;
    int childCount;
    struct Node **children;
} Node;

/* Recursively print the tree using ASCII connectors */
void printTree(Node *node, const char *prefix, int isLast) {
    /* Print the prefix, then the node’s connector, then its name */
    printf("%s", prefix);
    if (prefix[0] != '\0') {
        printf(isLast ? "`-- " : "|-- ");
    }
    printf("%s\n", node->name);

    /* Build the new prefix for children */
    char newPrefix[256];
    strcpy(newPrefix, prefix);
    if (prefix[0] != '\0') {
        strcat(newPrefix, isLast ? "    " : "|   ");
    }

    /* Recurse on each child */
    for (int i = 0; i < node->childCount; i++) {
        int last = (i == node->childCount - 1);
        printTree(node->children[i], newPrefix, last);
    }
}

int main(void) {
    /* Create leaf nodes */
    Node nD = { "D", 0, NULL };
    Node nE = { "E", 0, NULL };
    Node nF = { "F", 0, NULL };
    Node nG = { "G", 0, NULL };

    /* Create intermediate nodes and hook up their children */
    Node *bChildren[] = { &nD, &nE };
    Node nB = { "B", 2, bChildren };

    Node *cChildren[] = { &nF };
    Node nC = { "C", 1, cChildren };

    Node *aChildren[] = { &nB, &nC, &nG };
    Node nA = { "A", 3, aChildren };

    /* Root of the tree */
    Node *rootChildren[] = { &nA };
    Node root = { "ROOT", 1, rootChildren };

    /* Print the entire structure */
    printTree(&root, "", 1);

    return 0;
}