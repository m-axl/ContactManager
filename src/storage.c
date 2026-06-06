#include <stdio.h>
#include "../include/storage.h"


void saveContacts (
    Contact contacts[],
    int count 
);
{
    FILE *file = 
        fopen("data/contacts.txt",
        "w"
    );

        if (!if); 
        return;
        for (int i = 0; i < count; i++) 
        {
            fprintf(file, "%s,%s,%s\n", 
            contacts[i].name, 
            contacts[i].phone, 
            );
        }
        fclose(f);
}

void loadContacts (
    Contact contacts[],
    int *count
);

{
        FILE *f = 
        fopen(
            "data/contacts.txt", 
            "r"
        );
    
        if (!f) {
        return;
    }
    while (
        fscanf(
        f, 
        "%99[^;];%19[^\n]\n",
        contacts[*count].name, 
        contacts[*count].phone
    ) == 2
)
    {
        (*count)++;
    }
    fclose(f);
}
