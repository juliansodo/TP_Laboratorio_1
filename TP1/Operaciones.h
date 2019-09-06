
/** \brief Pide por printf ambos numeros, recibe las letras de los operandos para orientar al usuario.
 *
 * \param char
 * \param int*
 * \param char
 * \param int*
 * \return void
 *
 */
void pedirNumeros(char, int*, char, int*);


/** \brief Suma el operando A y B y devuelve el resultado
 *
 * \param int
 * \param int
 * \return int
 *
 */
int sumarNumeros(int, int);


/** \brief Resta el operando A y B y devuelve el resultado
 *
 * \param int
 * \param int
 * \return int
 *
 */
int restarNumeros(int, int);


/** \brief Multiplica el operando A y B y devuelve el resultado
 *
 * \param int
 * \param int
 * \return int
 *
 */
int multiplicarNumeros(int, int);


/** \brief Divide el operando A y B y devuelve el resultado. Si el denominador es cero, devuelve un error y el resultado de la operacion es cero.
 *
 * \param int
 * \param int
 * \return float
 *
 */
float dividirNumeros(int, int);


/** \brief Analiza el operando enviado por parametro y obtiene su factorial. Si el operando es cero, el resultado es uno.
 *
 * \param int
 * \return int
 *
 */
int factorialNumero(int);
