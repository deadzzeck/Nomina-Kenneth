//sistema de nomina que gestione la nomina de los trabajadores, la entrada y salida monetaria y a su vez gestiones y las entrade materiales de recurso para el coorporativo 
#include <stdio.h>
#include <stlib.h>


int main()
{
    int x;
    printf("Bienvenido usuario \n");
    printf("Elija una opcion\n");
    printf("1- Facturas \n2- inventario \n3- cobrar\n4- pagar\n5- cotizaciones \n6- nominas de usuarios \n7- Recursos humanos \n8- adquicisiones \n9- Opciones \n10- salir \n ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("fracturas \n");
            //se solicita que ingresen su nombre y clave
            //comprobar que el nombre y la clave sea correcto para la factura
            break;
        case 2:
            printf("inventario \n");
            // se solisita que ingrese su nombre y clave
            //se muestran todos los productos con ese nombre
            break;
        case 3:
            printf("cobrar\n");
            //se muestran la descripcion de todas las cuentas por cobrar
            // y se aparece el total al sumar todas las cuentas
            break;
        case 4:
            printf("pagar \n");
            //se muestran la descripcion de todas las cuentas por pagar
            // y se aparece el total al sumar las cuentas
            break;
        case 5:
            printf("cotizaciones \n");
            //se ingresan y guardan los datos del producto y precio
            //del producto que se decee comprar
            // y se le mostraran formas y plazos de pago
            break;
        case 6:
            printf("nominas de usuario\n");
            //se pedira el nombre y clave del empleado
            break;
        case 7:
            printf("recursos humanos\n");
            //se pedira el nombre y clave del empleado
            //para verificar informacion personal
        case 8:
            printf("adquicisiones \n");
            //essta opcion sera en caso de olvidar la contraseña
            break;
        case 9:
            printf("opciones\n");
            //se mostraran todas las ventas hechas hasta el momento
            break;
        case 10:
            printf("salir \n");
            //se mostraran todas las ventas que han sido aceptadas
            //y las que aun no han sido aceptadsa
            break;
        
            default:
            printf("opcion no valida\n");
    }
    return 0;
}
