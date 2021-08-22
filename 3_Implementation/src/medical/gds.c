#include "header.h"

int gds(int scale)
{
    char inp;
    scale=0;
    printf("1. Are you basically satisfied with your life? Y / N: ");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n2. Have you dropped many of your activities and interests? Y / N: ");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n3. Do you feel that your life is empty? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n4. Do you often get bored?  Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n5. Are you in good spirits most of the time? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n6. Are you afraid that something bad is going to happen to you? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n7. Do you feel happy most of the time? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n8. Do you often feel helpless? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n9. Do you prefer to stay at home, rather than going out and doing new things? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;


    printf("\n10. Do you feel you have more problems with memory than most? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;


    printf("\n11. Do you think it is wonderful to be alive now? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n12. Do you feel pretty worthless the way you are now? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n13. Do you feel full of energy? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n14. Do you feel that your situation is hopeless? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    printf("\n15. Do you think that most people are better off than you are? Y/N");
    scanf("%c", &inp);
    if(inp == 'Y' || inp == 'y') scale++;

    return(scale);
}
