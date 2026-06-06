#include <stdio.h>
#include <../include/contact.h>

void addContact (Contact contacts[], int *count) 
{
    printf("Inserir nome do contato: ");
    scanf("%99s", contacts[*count].name);

    printf("Inserir telefone do contato: ");
    scanf("%19s", contacts[*count].phone);

    (*count)++;
}
void listContacts(Contact contacts[], int count)
{
if(count == 0) {
    printf("Nenhum contato encontrado!\n");
    return;
}
    for (int i = 0; i < count; i++) {
        printf("Contato %d:\n", i ++);
        {
            printf(
                "\n%d  | %s | %s\n", 
                i + 1,
                contacts[i].name, 
                contacts[i].phone            
                
            );
        }
    }
}
