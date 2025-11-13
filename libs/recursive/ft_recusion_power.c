int ft_recursion(int nb, int power)
{
    if (nb < 0)
    {
        // check number less than 0 and return 0
        return (0);
    }
    if (power == 0)
    {
        // all number in power 0 return 1 and break recursion
        return (1);
    }
    // create a new stack to process with power less than last power
    return (nb * ft_recursion(nb, power - 1));
}
