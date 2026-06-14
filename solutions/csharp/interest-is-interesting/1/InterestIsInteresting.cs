using System;

static class SavingsAccount
{
        public static float InterestRate(decimal balance)
        {
            while (balance < 0) return 3.213f;
            while (balance >= 0 && balance < 1000) return 0.5f;
            while (balance > 0 && balance >= 1000 && balance < 5000) return 1.621f;
            while (balance > 0 && balance >= 5000) return 2.475f;

            return 0;
        }

        public static decimal Interest(decimal balance)
        {
            while (balance <= 0) return ((decimal)SavingsAccount.InterestRate(balance)/100)*balance;
            while (balance > 0 && balance < 1000) return ((decimal)SavingsAccount.InterestRate(balance) / 100) * balance;
            while (balance > 0 && balance >= 1000 && balance < 5000) return ((decimal)SavingsAccount.InterestRate(balance) / 100) * balance;
            while (balance > 0 && balance >= 5000) return ((decimal)SavingsAccount.InterestRate(balance) / 100) * balance;
            return 0;
        }

        public static decimal AnnualBalanceUpdate(decimal balance)
        {
            while (balance <= 0) return (decimal)SavingsAccount.Interest(balance) + balance;
            while (balance > 0 && balance < 1000) return (decimal)SavingsAccount.Interest(balance) + balance;
            while (balance > 0 && balance >= 1000 && balance < 5000) return (decimal)SavingsAccount.Interest(balance) + balance;
            while (balance > 0 && balance >= 5000) return (decimal)SavingsAccount.Interest(balance) + balance;
            return 0;
        }

        public static int YearsBeforeDesiredBalance(decimal balance, decimal targetBalance)
        {
        int years = 0;
        while (balance < targetBalance)
        {
            balance = AnnualBalanceUpdate(balance);
            years++;
        }
        return years;
        }
}
