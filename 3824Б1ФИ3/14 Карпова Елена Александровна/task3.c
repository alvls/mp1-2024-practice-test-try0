// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
  double max_num = a;
  if (b > a) max_num = b;
  return max_num;
}
