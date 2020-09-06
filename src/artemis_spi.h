///
/// @file artemis_spi.h
///

#ifndef ARTEMIS_SPI_H
#define ARTEMIS_SPI_H

#include "artemis_iom.h"
#include "artemis_stream.h"
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct s_artemis_spi_t
{
    artemis_iom_t iom;
} artemis_spi_t;

bool artemis_spi_send(artemis_spi_t *spi, artemis_stream_t *txstream);
bool artemis_spi_receive(artemis_spi_t *spi, artemis_stream_t *rxstream, uint32_t rxnumber);
bool artemis_spi_transfer(artemis_spi_t *spi, artemis_stream_t *txstream, artemis_stream_t *rxstream);

#ifdef __cplusplus
}
#endif

#endif
