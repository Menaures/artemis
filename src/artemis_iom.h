///
/// @file artemis_iom.h
///

#ifndef ARTEMIS_IOM_H
#define ARTEMIS_IOM_H

#include <am_bsp.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum e_artemis_iom_module_t
{
    ARTEMIS_IOM_MODULE_I2C0 = 4,
    ARTEMIS_IOM_MODULE_I2C1 = 3,
    ARTEMIS_IOM_MODULE_SPI0 = 0
} artemis_iom_module_t;

typedef struct s_artemis_iom_t
{
    artemis_iom_module_t module;
    am_hal_iom_config_t config;
    void *handle;
} artemis_iom_t;

void artemis_iom_initialize(artemis_iom_t *iom);
void artemis_iom_uninitialize(artemis_iom_t *iom);

#ifdef __cplusplus
}
#endif

#endif
