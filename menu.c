#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void printLogo(){
    printf("                  ************************************************************************************\n");
    printf("                  *                                                                                  *\n");
    printf("                  *     ::::::::   ::::::::        ::::::::      :::     ::::    ::::  ::::::::::    *  \n");
    printf("                  *    :+:    :+: :+:    :+:      :+:    :+:   :+: :+:   +:+:+: :+:+:+ :+:           *   \n")    ;
    printf("                  *    +:+        +:+    +:+      +:+         +:+   +:+  +:+ +:+:+ +:+ +:+           *      \n");
    printf("                  *    :#:        +#+    +:+      :#:        +#++:++#++: +#+  +:+  +#+ +#++:++#      *   \n");
    printf("                  *    +#+   +#+# +#+    +#+      +#+   +#+# +#+     +#+ +#+       +#+ +#+           *       \n");
    printf("                  *    #+#    #+# #+#    #+#      #+#    #+# #+#     #+# #+#       #+# #+#           *      \n") ;
    printf("                  *     ########   ########        ########  ###     ### ###       ### ##########    *  \n");
    printf("                  *                                                                                  *\n");
    printf("                  ************************************************************************************\n\n");

}

int showMenu(){
    int choice = 0;
    printLogo();
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  1  *                  Nouvelle partie                       *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  2  *                  Charger partie                        *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  3  *                       Aide                             *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  4  *                      Quitter                           *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    //Choix du mode de  jeu
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  1  *                   Homme VS Homme                       *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    printf("                            *     *                                                        *\n");
    printf("                            *  2  *                  Homme VS Machine                      *\n");
    printf("                            *     *                                                        *\n");
    printf("                            ****************************************************************\n");
    scanf("%d",&choice);
    //Mode pvp
    if(choice==1){
        printf("-----PVP MODE INITIATE----- \n");
        return 1;
    }

    //Mode
    if (choice==2)
    {
        printf("                            ****************************************************************\n");
        printf("                            *     *                                                        *\n");
        printf("                            *  1  *                      Facile                            *\n");
        printf("                            *     *                                                        *\n");
        printf("                            ****************************************************************\n");
        printf("                            *     *                                                        *\n");
        printf("                            *  2  *                      Avancee                           *\n");
        printf("                            *     *                                                        *\n");
        printf("                            ****************************************************************\n");
        //scanf("%d",&diff);
        return 2;
    }
}
