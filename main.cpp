#include "pch.h"

#pragma warning(disable:4996)

char* GenererUUID(size_t len)
{
    char tmp[0x40];
    static const char x[] = "0123456789abcdef";
    std::string uuid;
    uuid.reserve(len);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution < > dis(0, sizeof(x) - 2);
    for (size_t i = 0; i < len; i++)
        uuid += x[dis(gen)];
    sprintf(tmp, "%s", uuid.c_str());
    return tmp;
}
char* FormaterClefUUID(char* Sequence)
{
    char tmp[0x40];
    std::string uuid;
    int len = strlen(Sequence);
    uuid.reserve(len);
    for (size_t i = 0; i < len; i++) {
        uuid += Sequence[i];
        if (i == 8) { uuid += '-'; }
        if (i == 13) { uuid += '-'; }
        if (i == 18) { uuid += '-'; }
        if (i == 23) { uuid += '-'; }
    }
    sprintf(tmp, "%s", uuid.c_str());
    return tmp;
}

int main()
{
    printf("Generateur de UUID pour VirutualBox\t v:1.02!\t%c Patrice Waechter-Ebling 2022-2023\n",0xB8);
    printf("\nUUID Machine      VirtualBox: %s", strupr(FormaterClefUUID(GenererUUID(32))));
    printf("\nUUID Disque Dur   VirtualBox: %s", strupr(FormaterClefUUID(GenererUUID(32))));
}
