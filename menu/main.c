#include <string.h>
#include <stdio.h>

int main() {
    int comida;
    int reorder;
    int bebida;
    int reobeb;
    int postre;
    int reopos;
    while (1) {
        printf("Que desea comer?\n");
        printf("menu:\n"
               "1.pizza\n"
               "2.hamburguesa\n"
               "3.sopa\n");
        scanf("%i", &comida);
        switch (comida) {
            case 1:
                printf("usted escogio pizza\n");
                printf("si desea continuar presione 1\nsi desea cambiar su orden presione 2\n"
                       "si desea salir del menu presione 0");
                scanf("%i", &reorder);
                if (reorder == 1) {
                    while (reobeb != 2) {
                        printf("Que desea tomar?\n"
                               "1. agua de limon\n"
                               "2.agua de jamaica\n"
                               "3.refresco\n");
                        scanf("%i", &bebida);
                        switch (bebida) {
                            case 1:
                                printf("usted eligio agua de limon");
                                printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                       "si desea salir del menu presione 0");
                                scanf("%i", &reobeb);
                                if (reobeb == 0) {
                                    return 0;
                                } else if (reobeb == 1) {
                                    printf("que desea de postre:\n"
                                           "1.pastel\n"
                                           "2.dona\n"
                                           "3.helado\n");
                                    scanf("%i", &postre);
                                    switch (postre) {
                                        case 1:
                                            printf("usted eligio pastel\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden\n");
                                                return 0;
                                            } else if (reopos == 2) {
                                                break;

                                            }
                                        case 2:
                                            printf("usted eligio dona\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {

                                            }
                                        case 3:
                                            printf("usted eligio helado\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {
                                                break;


                                            }
                                    }


                                }
                            case 2:
                                printf("usted eligió agua de jaimaica\n");
                                printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                       "si desea salir del menu presione 0\n");
                                scanf("%i", &reobeb);
                                if (reobeb == 0) {
                                    return 0;
                                } else if (reobeb == 1) {
                                    printf("que desea de postre:\n"
                                           "1.pastel\n"
                                           "2.dona\n"
                                           "3.helado\n");
                                    scanf("%i", &postre);
                                    switch (postre) {
                                        case 1:
                                            printf("usted eligio pastel\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden\n");
                                                return 0;
                                            } else if (reopos == 2) {

                                            }
                                        case 2:
                                            printf("usted eligio dona\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {

                                            }
                                        case 3:
                                            printf("usted eligio helado\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {


                                            }
                                    }


                                }

                            case 3:
                                printf("usted eligio refresco\n");
                                printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                       "si desea salir del menu presione 0\n");
                                scanf("%i", &reobeb);
                                if (reobeb == 0) {
                                    return 0;
                                } else if (reobeb == 1) {
                                    printf("que desea de postre:\n"
                                           "1.pastel\n"
                                           "2.dona\n"
                                           "3.helado\n");
                                    scanf("%i", &postre);
                                    switch (postre) {
                                        case 1:
                                            printf("usted eligio pastel\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {

                                            }
                                        case 2:
                                            printf("usted eligio dona\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden");
                                                return 0;
                                            } else if (reopos == 2) {

                                            }
                                        case 3:
                                            printf("usted eligio helado\n");
                                            printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                            );
                                            scanf("%i", &reopos);
                                            if (reopos == 1) {
                                                printf("gracias por su orden\n");
                                                return 0;
                                            } else if (reopos == 2) {


                                            }
                                    }


                                }
                        }


                    }
                    case 2:
                        printf("usted eligio hamburguesa\n");
                    printf("si desea continuar presione 1\nsi desea cambiar su orden presione 2\n"
                           "si desea salir del menu presione 0");
                    scanf("%i", &reorder);
                    if (reorder == 1) {
                        while (reobeb != 2) {
                            printf("Que desea tomar?\n"
                                   "1. agua de limon\n"
                                   "2.agua de jamaica\n"
                                   "3.refresco\n");
                            scanf("%i", &bebida);
                            switch (bebida) {
                                case 1:
                                    printf("usted eligio agua de limon\n");
                                    printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                           "si desea salir del menu presione 0");
                                    scanf("%i", &reobeb);
                                    if (reobeb == 0) {
                                        return 0;
                                    } else if (reobeb == 1) {
                                        printf("que desea de postre:\n"
                                               "1.pastel\n"
                                               "2.dona\n"
                                               "3.helado\n");
                                        scanf("%i", &postre);
                                        switch (postre) {
                                            case 1:
                                                printf("usted eligio pastel\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 2:
                                                printf("usted eligio dona\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 3:
                                                printf("usted eligio helado\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                        }
                                    }
                                case 2:
                                    printf("usted eligio agua de jamaica\n");
                                    printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                           "si desea salir del menu presione 0\n");
                                    scanf("%i", &reobeb);
                                    if (reobeb == 0) {
                                        return 0;
                                    } else if (reobeb == 1) {
                                        printf("que desea de postre:\n"
                                               "1.pastel\n"
                                               "2.dona\n"
                                               "3.helado\n");
                                        scanf("%i", &postre);
                                        switch (postre) {
                                            case 1:
                                                printf("usted eligio pastel\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 2:
                                                printf("usted eligio dona\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 3:
                                                printf("usted eligio helado\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }

                                        }


                                    }
                                case 3:
                                    printf("usted eligio refresco\n");
                                    printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                           "si desea salir del menu presione 0");
                                    scanf("%i", &reobeb);
                                    if (reobeb == 0) {
                                        return 0;
                                    } else if (reobeb == 1) {
                                        printf("que desea de postre:\n"
                                               "1.pastel\n"
                                               "2.dona\n"
                                               "3.helado\n");
                                        scanf("%i", &postre);
                                        switch (postre) {
                                            case 1:
                                                printf("usted eligio pastel\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden\n");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 2:
                                                printf("usted eligio dona\n");

                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden\n");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }
                                            case 3:
                                                printf("usted eligio helado\n");
                                                printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                );
                                                scanf("%i", &reopos);
                                                if (reopos == 1) {
                                                    printf("gracias por su orden");
                                                    return 0;
                                                } else if (reopos == 2) {

                                                }

                                        }


                                    }
                            }


                        }
                        case 3:
                            printf("usted eligio sopa\n");
                        printf("si desea continuar presione 1\nsi desea cambiar su orden presione 2\n"
                               "si desea salir del menu presione 0");
                        scanf("%i", &reorder);
                        if (reorder == 1) {
                            while (reobeb != 2) {
                                printf("Que desea tomar?\n"
                                       "1. agua de limon\n"
                                       "2.agua de jamaica\n"
                                       "3.refresco\n");
                                scanf("%i", &bebida);
                                switch (bebida) {
                                    case 1:
                                        printf("usted eligio agua de limon\n");
                                        printf("si desea continuar con la orden del postre presione 1\nsi desea reordenar prsione 2\n"
                                               "si desea salir del menu presione 0\n");
                                        scanf("%i", &reobeb);
                                        if (reobeb == 0) {
                                            return 0;
                                        } else if (reobeb == 1) {
                                            printf("que desea de postre:\n"
                                                   "1.pastel\n"
                                                   "2.dona\n"
                                                   "3.helado\n");
                                            scanf("%i", &postre);
                                            switch (postre) {
                                                case 1:
                                                    printf("usted eligio pastel\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 2:
                                                    printf("usted eligio dona\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 3:
                                                    printf("usted eligio helado");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }


                                            }


                                        }
                                    case 2:
                                        printf("usted eligio agua de jamaica\n");
                                        printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                               "si desea salir del menu presione 0\n");
                                        scanf("%i", &reobeb);
                                        if (reobeb == 0) {
                                            return 0;
                                        } else if (reobeb == 1) {
                                            printf("que desea de postre:\n"
                                                   "1.pastel\n"
                                                   "2.dona\n"
                                                   "3.helado\n");
                                            scanf("%i", &postre);
                                            switch (postre) {
                                                case 1:
                                                    printf("usted eligio pastel\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 2:
                                                    printf("usted eligio dona\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 3:
                                                    printf("usted eligio helado\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                            }


                                        }
                                    case 3:
                                        printf("usted eligio refresco\n");
                                        printf("si desea continuar con la orden del postre prsione 1\nsi desea reordenar prsione 2\n"
                                               "si desea salir del menu presione 0\n");
                                        scanf("%i", &reobeb);
                                        if (reobeb == 0) {
                                            return 0;
                                        } else if (reobeb == 1) {
                                            printf("que desea de postre:\n"
                                                   "1.pastel\n"
                                                   "2.dona\n"
                                                   "3.helado\n");
                                            scanf("%i", &postre);
                                            switch (postre) {
                                                case 1:
                                                    printf("usted eligio pastel\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 2:
                                                    printf("usted eligio dona\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                                case 3:
                                                    printf("usted eligio helado\n");
                                                    printf("si desea finalizar su orden presione 1\nsi desea reordenar prsione 2\n"
                                                    );
                                                    scanf("%i", &reopos);
                                                    if (reopos == 1) {
                                                        printf("gracias por su orden\n");
                                                        return 0;
                                                    } else if (reopos == 2) {

                                                    }
                                            }

                                        }


                                }
                            }
                        }
                    }
                }
        }
    }
}