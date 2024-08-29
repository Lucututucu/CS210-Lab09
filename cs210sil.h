/* cs210sil.h
 * =============================================================
 *    Name: Lucas Briggs
 * Section: T1/2 Kloenne
 * Purpose: Creating a safe input library
 * =============================================================
 */

/** ----------------------------------------------
 * @brief safely read one integer from stdin
 * @return the integer value read (if successful)
 */
int getIntegerSafe();

/** ----------------------------------------------
 * @brief safely read one long from stdin
 * @return the long value read (if successful)
 */
long getLongSafe();

/** ----------------------------------------------
 * @brief safely read one float from stdin
 * @return the float value read (if successful)
 */
float getFloatSafe();

/** ----------------------------------------------
 * @brief safely read one double from stdin
 * @return the double value read (if successful)
 */
double getDoubleSafe();

/** ----------------------------------------------
 * @brief safely read one char from stdin
 * @return the char value read (if successful)
 */
char getCharSafe();