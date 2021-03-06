/*!
 * Программа lab_01_2_4
 * Назначена переводить заданное пользователем количество секунд в часы,
 * минуты, секунды
 */
#include <stdio.h>

#define HOUR 3600
#define MINUTE 60

int main(void)
{
    int tseconds; //!< Общее количество секунд (сокр. totalseconds),
                  //!< после вычислений играет роль остаточных секунд

    int hours, minutes; /*!< Значение часов, минут */

    /*!
     * Ввод количества секунд пользователем
     */
    printf("Input seconds: ");
    scanf("%d", &tseconds);

    /*!
     * Вычисление количества часов и минут
     */
    hours = tseconds / HOUR;
    tseconds = tseconds - HOUR * hours;

    minutes = tseconds / MINUTE;
    tseconds = tseconds - MINUTE * minutes;

    /*!
     * Вывод значений часов, минут и секунд
     */
    printf("Hours: %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds: %d", tseconds);

    return 0;
}
