#include <stdio.h>

int main() {
    char name[30];
    char choice;

    printf("Welcome to the Height Oracle!\n");
    printf("Please enter the name of the person whose height you want to guess: ");
    scanf("%s", name);

    printf("Is %s taller than a refrigerator (178 cm)? (Y/N): ", name);
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') { // if >178
        printf("Hmm, very tall... Let me think.\n");

        printf("Is %s taller than a vending machine (183 cm)? (Y/N): ", name);
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y') { // >183
            printf("Interesting...\n");
            printf("Is %s taller than a doorway (200 cm)? (Y/N): ", name);
            scanf(" %c", &choice);

            if (choice == 'Y' || choice == 'y') { // >200
                printf("Wow... tall indeed!\n");
                printf("Is %s taller than a shower curtain (210 cm)? (Y/N): ", name);
                scanf(" %c", &choice);

                if (choice == 'Y' || choice == 'y') { // >210
                    printf("Is %s taller than a giant wardrobe (230 cm)? (Y/N): ", name);
                    scanf(" %c", &choice);

                    if (choice == 'Y' || choice == 'y') { // >230
                        printf("Is %s taller than a super-tall closet (251 cm)? (Y/N): ", name);
                        scanf(" %c", &choice);

                        if (choice == 'Y' || choice == 'y') { // >251
                            printf("WOWWW! Someone call the records book — this person is extraordinary!\n");
                            printf("Because the tallest person on earth is Sultan Koseb with 251cm of height");
                        } else { // <=251
                            printf("Estimated height: 230–251 cm.I will guess 240cm\n");
                            printf("Title: Ceiling Scraper\n");
                        } // end if >251

                    } else { // <=230
                        printf("Estimated height: 210–230 cm.So probably 215 cm?\n");
                        printf("Title: High Hanger\n");
                    } // end if >230

                } else { // <=210
                    printf("Is %s taller than a street sign (205 cm)? (Y/N): ", name);
                    scanf(" %c", &choice);

                    if (choice == 'Y' || choice == 'y') {
                        printf("Estimated height: 205–210 cm.\n");
                    } else {
                        printf("Estimated height: 200–205 cm.\n");
                    } // end inner range
                    printf("Title: Door Dominator\n");
                } // end if >210

            } else { // <=200
                printf("Is %s taller than a shelf (190 cm)? (Y/N): ", name);
                scanf(" %c", &choice);

                if (choice == 'Y' || choice == 'y') {
                    printf("Estimated height: 190–200 cm.\n");
                } else {
                    printf("Estimated height: 183–190 cm.\n");
                }
                printf("Title: Wall Watcher\n");
            } // end if >200

        } else { // <=183
            printf("Is %s taller than a plush giraffe (180 cm)? (Y/N): ", name);
            scanf(" %c", &choice);

            if (choice == 'Y' || choice == 'y') {
                printf("Estimated height: 180–183 cm.\n");
            } else {
                printf("Estimated height: 178–180 cm.\n");
            }
            printf("Title: Elegant Giraffe\n");
        } // end if >183

    } else { // if <=178
        printf("Hmm interesting...\n");
        printf("Is %s taller than an armchair (160 cm)? (Y/N): ", name);
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') { // >160
            printf("Getting closer...\n");
            printf("Is %s taller than Uncle Tom (167 cm)? (Y/N): ", name);
            scanf(" %c", &choice);

            if (choice == 'Y' || choice == 'y') { // >167
                printf("Almost there, hang in there!\n");
                printf("Is %s taller than Claire (172 cm)? (Y/N): ", name);
                scanf(" %c", &choice);

                if (choice == 'Y' || choice == 'y') {
                    printf("Estimated height: 172–178 cm. I am guessing...175 cm?\n");
                } else {
                    printf("Estimated height: 167–172 cm.I will guess 169 cm.\n");
                }
                printf("Title: Balcony Breeze\n");

            } else { // <=167
                printf("Estimated height: 160–167 cm.So maybe 164 cm?\n");
                printf("Title: Uncle Tom's Rival\n");
            } // end if >167

        } else { // <=160
            printf("Let me think...\n");
            printf("Is %s taller than a laundry basket (150 cm)? (Y/N): ", name);
            scanf(" %c", &choice);

            if (choice == 'Y' || choice == 'y') { // >150
                printf("Estimated height: 150–160 cm.\n");
                printf("Title: Basket Boss\n");
            } else { // <=150
                printf("Is %s taller than a large plush toy (140 cm)? (Y/N): ", name);
                scanf(" %c", &choice);

                if (choice == 'Y' || choice == 'y') { // >140
                    printf("Estimated height: 140–150 cm.So probably 155cm?\n");
                    printf("Title: Plush Power\n");
                } else { // <=140
                    printf("Is %s taller than a goat (85 cm)? (Y/N): ", name);
                    scanf(" %c", &choice);

                    if (choice == 'Y' || choice == 'y') {
                        printf("Estimated height: 85–140 cm. So im thinking.... !05 cm?\n");
                        printf("Title: Little Walker\n");
                    } else {
                        printf("Is %s taller than a snake (63 cm)? (Y/N): ", name);
                        scanf(" %c", &choice);

                        if (choice == 'Y' || choice == 'y') {
                            printf("Estimated height: 63–85 cm.So maybeeee 74 cm?\n");
                            printf("Title: Slither Rival\n");
                        } else {
                            printf("WOWWW! Someone call the records book — this person might be the shortest in the world!\n");
                        } // end if >63

                    } // end if >85
                } // end if >140
            } // end if >150
        } // end if >160
    } // end if >178

    return 0;
}
