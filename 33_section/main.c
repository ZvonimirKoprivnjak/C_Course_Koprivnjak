#include <stdio.h>
#include <stdlib.h>

//----------------------------------//
//----------*Files*-----------------//
//----------------------------------//

int main()
{
    /*
    //  STEP 1: Kreiranje pokazivaca koji pokazuje na tip podataka FILE
    FILE* fp;

    // STEP 2: otvaranje/pristupanje datoteci
    // fp = fopen(<file_name>, <type_of_operation>);
    //type of operation:
    //      -"w"- writing
    //      -"r"- reading
    //      -"a"- appending
    //fp = fopen("myFirstFile.txt","w"); // otvaranje datoteke u mapi u kojoj se nalazi main
    fp = fopen("C:/Users/zvoni/OneDrive/Radna površina/myFirstFile.txt", "w");

    // ako imamo datoteku koja vec postoji i zelimo je otvoriti s istim IMENOM program ce izbrisati sadrzaj stare verzije jer koristimo "w"
    // ako zelimo dodati onda treba koristiti "a"
    //fp = fopen("myFirstFile.txt","r"); //citanje

    // STEP 3: Provjera ako je dadoteka dobro otvorena
    // ako nesto ne prode uredu fp ce vratiti NULL
    // zato je bitna provjera na pocetku
    //if (fp != NULL) // da se uvjerimo ako je operacija otvaranja dobro prosla
    if (fp == NULL) // znaci da otvaranje nije dobro proslo
        printf("Otvaranje datoteke nije dobro proslo \n");
    else
    {
        printf("Dadoteka je otvorena za pisanje! \n");
        //STEP 4: neki rad s datotekom
        //STEP 5: zatvaranje datoteke
        fclose(fp); // na kraju rada s datotekama bitno ih je zatvoriti
    }

    //----------------------------------------------------------

    FILE* docPtr_read;

    char myChar1;

    docPtr_read = fopen("mySecondFiles.txt", "r"); // "r"-reading

    if (docPtr_read != NULL) //file is successfully opened
    {
        printf("The file is Opened for reading! \n");
        myChar1 = fgetc(docPtr_read);  // za citanje znakova iz dokumentaa
        printf("Character that was read is: %c \n", myChar1); // H
        myChar1 = fgetc(docPtr_read);  //
        printf("Character that was read is: %c \n", myChar1); // e

        fgetc(stdin); // ekvivalentno getchar(); citanje znakova iz tipkovnice
        fclose(docPtr_read);
    }
    //----------------------------------------------------------

    //fputc(<character>,<pointer_to_a_file>)
    FILE* docPtr_write;

    char myChar2;

    docPtr_write = fopen("myThirdFiles.txt", "w"); // "w"-writing

    if (docPtr_write != NULL) //file is successfully opened
    {
        printf("Dokument za pisanje je otvoren!");
        fputc('H',docPtr_write);  // paziti da nisu "" jer se onda gleda kao string
        fputc('e',docPtr_write);
        fputc('y',docPtr_write);

        // putchar('a', stdout); prikazivanje simbola na ekrenu
        fclose(docPtr_write);
    }
    //----------------------------------------------------------

    //fprintf(<pointer_to_a_file>,<placeholders>, <parameters>)
    int num = 5;
    FILE* docPtr_write2;

    docPtr_write2 = fopen("myThirdFiles2.txt", "w"); // "w"-writing

    if (docPtr_write2 != NULL) //file is successfully opened
    {
        printf("Dokument za pisanje je otvoren!");
        fprintf(docPtr_write2, "%d %d", num, num*num);
        fprintf(stdout, "%d", num); //ispis na ekran  isti sto i printf("%d",num);
        fclose(docPtr_write2);
    }
    //----------------------------------------------------------

    //fscanf(<pointer_to_a_file>,<placeholders>, <parameters>)
    int num;
    int num2;
    FILE* docPtr_read2;

    docPtr_read2 = fopen("myFourthFiles.txt", "r");

    if (docPtr_read2 != NULL) //file is successfully opened
    {
        printf("Dokument za citanje je pronaden \n");
        fscanf(docPtr_read2, "%d", &num);
        fscanf(stdin, "%d", &num2); // za unos s ekrana odnosno isto sto i scanf("%d", num2);
        printf("procitani broj je: %d  dodatni broj %d \n", num, num2);
        fclose(docPtr_read2);
    }
    //----------------------------------------------------------

    //fputs(<string>, <pointer_to_a_files>)  //ispisuje string u dokument
    // slicno onome puts("Hey hey"); ispisuje u terminal string
    FILE* docPtr_write3;

    puts("ide ide");  // ova funkcija automatski dodaje novi red, nije potrebno \n
    puts("idee idee");

    docPtr_write3 = fopen("myFifthFiles.txt", "w");

    if (docPtr_write3 != NULL) //file is successfully opened
    {
        printf("Dokument za pisanje je otvoren\n");

        fputs("Hej kako si \n", docPtr_write3);   // potreban \n za novi red
        fputs("Ovo je jako dobro.", docPtr_write3);
        fclose(docPtr_write3);
    }

    //----------------------------------------------------------

    //fgets(<string>, <int/length_limits>, <pointer_to_a_files>)  //
    // slicno onome gets("Hey hey"); // dobivanje stringa od korisnika

    char myString[10];
    int count = 0;
    FILE* docPtr_read3;
    docPtr_read3 = fopen("mySixthFiles.txt", "r");

    if (docPtr_read3 != NULL) //file is successfully opened
    {
        printf("Dokument za citanje je pronaden \n");

        while(fgets(myString, 10, docPtr_read3))  //cita dokument do ne naide na \n ili na ogranicenje kod nas je 10
              printf("string #%d read %s \n", ++count, myString);

        fclose(docPtr_read3);
    }
    //----------------------------------------------------------
    // 1 exercise
    int counter_znakova = 0, counter_redova = 0, counter_znaka = 0;
    char znak;
    FILE *file_zad_1;
    file_zad_1 = fopen("exerciseFile_1.txt", "r");

    if (file_zad_1 == NULL)
    {
        perror("Doslo je do pogreske prilikom otvaranja datoteke.\n");
        return 1;
    }
    printf("Unesi zeljeni znak ciju pripadnost zelis provjeriti: ");
    scanf(" %c",&znak);
    int ch; //Koristite int za ch kada èitate karaktere iz datoteke pomoæu funkcije fgetc,
            //kako biste pravilno detektovali kraj datoteke pomoæu EOF.
    while ((ch = fgetc(file_zad_1)) != EOF) { // Provjeravamo znak po znak dok ne dodemo do END-OF-FILE
        putchar(ch); // jednostavna funkcija koja ispisuje samo jedan karakter na standardni izlaz,
                    //Brža i manja funkcija,
        ++counter_znakova;
        //printf("%c", ch); //Namenjena za formatirani ispis->moze raditi s vise tipova podataka i formata.
        if (ch == '\n')
            counter_redova++;
        if (ch == znak)
            counter_znaka++;
    }
    printf("\nU dokumentu ima %d znakova.\n", counter_znakova);
    printf("Dokument ima %d reda!\n", counter_redova+1);
    printf("Znak %c se pojavljuje %d puta.\n", znak, counter_znaka);
    fclose(file_zad_1);
    //----------------------------------------------------------
    // 2 exercise
    int i;
    FILE *file_zad_2;
    file_zad_2 = fopen("exerciseFile_2.txt", "w");

    if (file_zad_2 == NULL)
    {
        perror("Doslo je do pogreske prilikom otvaranja datoteke.\n");
        return 1;
    }
    fprintf(file_zad_2 ,"Brojevi i njihovi kvadrati\n");
    for (i =1; i <= 10; i++)
    {
        fprintf(file_zad_2,"%d %d \n", i, i*i);
    }

    fclose(file_zad_2);
    //----------------------------------------------------------
    // 3 exercise
    int num1,num2;
    int j;
    FILE *file_zad_3;
    file_zad_3 = fopen("exerciseFile_2.txt", "r");

    if (file_zad_3 == NULL)
    {
        perror("Doslo je do pogreske prilikom pronalazenja datoteke.\n");
        return 1;
    }
    // Preskoèi prvi red (pretpostavljamo da je tekst u prvom redu)
    char buffer[256];
    fgets(buffer, sizeof(buffer), file_zad_3);

    for (j =1 ; j<=10; j++)
    {
        fscanf(file_zad_3, "%d%d", &num1, &num2);
        printf("Procitano %d %d \n", num1, num2);
    }
    fclose(file_zad_3);
    */
    //----------------------------------------------------------
    // 4 exercise
    int counter_array[26] = {0};
    char filename[20] = {0};
    int ch;
    int max_indeks = 0;
    FILE *file_zad_4;

    printf("Unesi ime dokumenta: ");
    scanf("%s", filename);

    file_zad_4 = fopen(filename, "r");

    if (file_zad_4 == NULL)
    {
        perror("Doslo je do pogreske kod otvaranja dokumenta");
        return 1;
    }
//    while ((ch = fgetc(file_zad_4)) != EOF)
//    {
//        if (ch >= 'a' && ch <= 'z')
//        {
//            int indeks = ch -'a';
//            counter_array[indeks]++;
//        }
//      }
    //ili
    while(!feof(file_zad_4))
    {
        ch  = fgetc(file_zad_4);
        if (ch >= 'a' && ch <= 'z')
        {
            int indeks = ch -'a';
            counter_array[indeks]++;
        }
    }

    fclose(file_zad_4);
    for (int k = 0; k<26; k++)
    {
        printf("'%c' se pojavljuje %d \n", k+'a', counter_array[k]);
        if (counter_array[max_indeks]<counter_array[k])
            max_indeks = k;
    }
    printf("Slovo '%c' se pojavljuje najvise i to %d puta.", max_indeks+'a', counter_array[max_indeks]);

    return 0;


}
