// main.c
#include "hash_table.h"

int main() {
    ht_hash_table* ht = ht_new();
    ht_delete_hash_table(ht);
}