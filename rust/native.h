#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Fill the provided output buffer with the unquoted string.
 *
 * # Parameters
 *
 * * input_buf: Non Null pointer to utf-8 encoded character sequence to be unquoted. A terminating
 *              zero is not required.
 * * input_len: Number of bytes in input_buf (Without terminating zero).
 * * output_buf: Non Null pointer to buffer which will hold the utf-8 encoded output string. The
 *               buffer should be big enough to hold the unquoted string. This function is not
 *               going to write beyond the bounds specified by `output_len`. This makes it important
 *               to call `quoted_len` before allocating the buffer.
 * * output_len: Length of the output buffer.
 */
void unquote(const uint8_t *input_buf,
             uintptr_t input_len,
             uint8_t *output_buf,
             uintptr_t output_len);

/*
 * Fill the provided output buffer with the quoted string.
 *
 * # Parameters
 *
 * * input_buf: Non Null pointer to utf-8 encoded character sequence to be quoted. A terminating
 *              zero is not required.
 * * input_len: Number of bytes in input_buf (Without terminating zero).
 * * output_buf: Non Null pointer to buffer which will hold the utf-8 encoded output string. The
 *               buffer should be big enough to hold the quoted string. This function is not going
 *               to write beyond the bounds specified by `output_len`. This makes it important to
 *               call `quoted_len` before allocating the buffer.
 * * output_len: Length of the output buffer.
 */
void quote(const uint8_t *input_buf,
           uintptr_t input_len,
           uint8_t *output_buf,
           uintptr_t output_len);

/*
 * Returns the quoted length of the provided utf-8 encoded input string.
 *
 * # Parameters
 *
 * * input_buf: Non Null pointer to utf-8 encoded character sequence to be quoted. A terminating
 *              zero is not required.
 * * input_len: Number of bytes in input_buf (Without terminating zero).
 */
uintptr_t quoted_len(const uint8_t *input_buf, uintptr_t input_len);

/*
 * Returns the unquoted length of the provided utf-8 encoded and percent quoted input string.
 *
 * # Parameters
 *
 * * input_buf: Non Null pointer to utf-8 encoded character sequence to be unquoted. A terminating
 *              zero is not required.
 * * input_len: Number of bytes in input_buf (Without terminating zero).
 */
uintptr_t unquoted_len(const uint8_t *input_buf, uintptr_t input_len);
