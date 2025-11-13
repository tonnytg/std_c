int ft_recursive_factorial()
{
    if (nb < 0)
    {
        // less than 0 return 0
        return (0);
    }
    if (nb == 1 || nb == 0)
    {
        // equal 1 or 0 return 1 and break recursion
        return (1);
    }
    return (nb * ft_recursive_factorial( nb -1));
}
