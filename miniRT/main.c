#include "garbageCollector.h"
#include "libft/libft.h"
#include "miniRT.h"

int main(void)
{
	mlx_t		*mlx_ptr;
	
	mlx_ptr = mlx_init(1500, 1500, "miniRT", false);
	mlx_loop(mlx_ptr);
}