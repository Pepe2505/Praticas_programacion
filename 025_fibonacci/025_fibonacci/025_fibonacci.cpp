//13. Hacer uno que realize la serie de fibonacci -> 1, 1, 2, 3, 5, 6, 13, ..., n

#include <iostream>

int main()
{
	int n, x = 0, y = 1, z = 1;
	int alumnos_que_aprovaron_todos_los_examenes, aprovaron_solo_un_examen, aprovaron_el_ultimo_examen, cantidad_de_examenes_que_aprovaron_todos, total_de_examenes_aprovados, alumnos;
	int examenes_por_alumno;

	std::cout << "digite el numero de elementos: ";
	std::cin >> n;

	std::cout << "1";
	for(int i=1; i<=n; i++)
	{
		z = x + y; //1 2 3 5
		std::cout << z << ""; //1 2 3 5
		x = y; //1 1 2
		y = z; //1 2 3
	}

	std::cout << "\n cuantos alumnos aprovaron todos los examenes";
	std::cin >> alumnos_que_aprovaron_todos_los_examenes;
	std::cout << "cuantos aprovaron solo un";
	std::cin >> aprovaron_solo_un_examen;
	std::cout << "cuantps aprovaron el ultimo examen";
	std::cin >> aprovaron_el_ultimo_examen;
	std::cout << "cuantos alumnos no reprobaron ningun examen";
	std::cin >> alumnos;
	std::cout << "cauntos examenes hizo cada alumno: ";
	std::cin >> examenes_por_alumno;

	cantidad_de_examenes_que_aprovaron_todos = alumnos * examenes_por_alumno;
	total_de_examenes_aprovados = cantidad_de_examenes_que_aprovaron_todos + aprovaron_solo_un_examen;

	std::cout << "\n el total de los examenes que aprovaron los alumnos que aprovaron todos los examenes: " << cantidad_de_examenes_que_aprovaron_todos << std::endl;
	std::cout << "total de examenes aprovados: " << total_de_examenes_aprovados << std::endl;

	return 0;
}