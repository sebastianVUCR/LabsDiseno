#ifndef ARISTAND_H
#define ARISTAND_H

/* REPRESENTA UNA ARISTA NO DIRIGIDA GENÉRICA */
class AristaND:public Arista
{
	public:
		AristaND();
		virtual ~AristaND();


		virtual void dibujar();
		virtual void cortar();
		virtual void eliminar();
		virtual void reducir();
		virtual void copiar();

	};

	AristaND::AristaND()
	{

	}

	AristaND::~AristaND()
	{

	}


	void AristaND:: dibujar() {}
	void AristaND::cortar() {}
	void AristaND::eliminar() {}
	void AristaND::reducir() {}
	void AristaND::copiar() {}
#endif // ARISTAND_H
