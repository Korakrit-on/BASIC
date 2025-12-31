#include <stdio.h>

int main() {
    int N_CALCULATIONS, i;
    int attkLvl, oppLvl, oppArmor;
    float baseAttack, damageReduction, netDamage, damageDeficit;
    const float WORTH_THRESHOLD = 150.0;

    // Read the number of calculations
    if (scanf("%d", &N_CALCULATIONS) != 1) {
        return 1;
    }

    // Perform calculations for each scenario
    for (i = 0; i < N_CALCULATIONS; i++) {
        // Read the attacker's level, opponent's level, and opponent's armor
        if (scanf("%d %d %d", &attkLvl, &oppLvl, &oppArmor) != 3) {
            break;
        }

        // Calculate the base attack
        baseAttack = attkLvl * 10.0;

        // Determine the damage reduction based on the opponent's armor
        if (oppArmor < 50) {
            damageReduction = 0.20; 
        } else {
            damageReduction = 0.40; 
        }

        // Calculate the net damage
        netDamage = baseAttack * (1.0 - damageReduction);

        // Evaluate the result
        if (netDamage >= WORTH_THRESHOLD) {
            printf("SUCCESS! Net Damage: %.2f\n", netDamage);
        } else {
            damageDeficit = WORTH_THRESHOLD - netDamage;
            printf("FAIL. Deficit: %.2f\n", damageDeficit);
        }
    }
    
    return 0;
}