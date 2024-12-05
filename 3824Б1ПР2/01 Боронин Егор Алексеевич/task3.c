// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
  if (isnan(a)) return b;
  if (isnan(b)) return a;
  if (a > b) return a;
  return b;
}
