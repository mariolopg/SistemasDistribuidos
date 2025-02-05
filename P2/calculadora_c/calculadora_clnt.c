/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "calculadora.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

operacion_result *
sumar_1(double arg1, double arg2,  CLIENT *clnt)
{
	sumar_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, sumar, (xdrproc_t) xdr_sumar_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
restar_1(double arg1, double arg2,  CLIENT *clnt)
{
	restar_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, restar, (xdrproc_t) xdr_restar_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
multiplicar_1(double arg1, double arg2,  CLIENT *clnt)
{
	multiplicar_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, multiplicar, (xdrproc_t) xdr_multiplicar_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
dividir_1(double arg1, double arg2,  CLIENT *clnt)
{
	dividir_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, dividir, (xdrproc_t) xdr_dividir_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
potencia_1(double arg1, double arg2,  CLIENT *clnt)
{
	potencia_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, potencia, (xdrproc_t) xdr_potencia_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
raiz_1(double arg1, double arg2,  CLIENT *clnt)
{
	raiz_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, raiz, (xdrproc_t) xdr_raiz_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
factorial_1(double arg1,  CLIENT *clnt)
{
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, factorial,
		(xdrproc_t) xdr_double, (caddr_t) &arg1,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
modulo_1(double arg1, double arg2,  CLIENT *clnt)
{
	modulo_1_argument arg;
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, modulo, (xdrproc_t) xdr_modulo_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

operacion_result *
vabsoluto_1(double arg1,  CLIENT *clnt)
{
	static operacion_result clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, vAbsoluto,
		(xdrproc_t) xdr_double, (caddr_t) &arg1,
		(xdrproc_t) xdr_operacion_result, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
