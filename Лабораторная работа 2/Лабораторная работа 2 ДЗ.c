#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    // Вес вещей 
    float a = 15.5;  // диван
    float b = 5.7;   // чемодан
    float c = 2.0;   // саквояж
    float d = 1.0;   // корзина
    float e = 1.4;   // картонка
    float f = 6.3;   // собачонка
    // Лимит
    float g = 20.0;  // лимит багажа
    float h = 5.0;   // лимит ручной клади
    // Цена
    float n = 200.0; // за 1 кг лишнего багажа
    float v = 400.0; // за 1 кг лишней ручной клади
    // Расчет  
    float ves_bagaza = a + b + c + d + e; //багаж без собаки
    float ves_ruklad = f; // ручной багаж
    float lishniy_bagaz = ves_bagaza - g; // лишний вес за багаж
    float lishniy_ruklad = ves_ruklad - h; // лишний вес за рукладку 
    // расчет доплаты за перевес
    float oplata_bagaz = lishniy_bagaz * n;
    float oplata_ruklad = lishniy_ruklad * v;
    // общая сумма
    float itog = oplata_bagaz + oplata_ruklad;
    printf("Рассчет доплаты за багаж\n");
    printf("Дано:\n");
    printf("- Вес дивана: %.2f кг.\n", a);
    printf("- Вес чемодана: %.2f кг.\n", b);
    printf("- Вес саквояжа: %.2f кг.\n", c);
    printf("- Вес корзины: %.2f кг.\n", d);
    printf("- Вес картонки: %.2f кг.\n", e);
    printf("- Вес собачки: %.2f кг.\n", f);
    printf("- Лимит багажа: %.2f кг.\n", g);
    printf("- Лимит ручной клади: %.2f кг.\n", h);
    printf("- Цена за 1 кг лишнего багажа: %.2f руб.\n", n);
    printf("- Цена за 1 кг лишней ручной клади: %.2f руб.\n\n", v);
    // делаем расчет
    printf("РАСЧЁТ:\n");
    printf("- Вес багажа: %.2f + %.2f + %.2f + %.2f + %.2f = %.2f кг.\n", a, b, c, d, e, ves_bagaza);
    printf("- Вес ручной клади: %.2f кг.\n", ves_ruklad);
    printf("- Перевес багажа: %.2f - %.2f = %.2f кг.\n", ves_bagaza, g, lishniy_bagaz);
    printf("- Перевес ручной клади: %.2f - %.2f = %.2f кг.\n", ves_ruklad, h, lishniy_ruklad);
    printf("- Доплата за багаж: %.2f * %.2f = %.2f руб.\n", lishniy_bagaz, n, oplata_bagaz);
    printf("- Доплата за ручную кладь: %.2f * %.2f = %.2f руб.\n", lishniy_ruklad, v, oplata_ruklad);
    printf("-------------------------------------\n");
    printf("ИТОГО: %.2f + %.2f = %.2f руб.\n", oplata_bagaz, oplata_ruklad, itog);
    getchar();

    return 0;
}