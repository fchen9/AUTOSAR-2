$(PROJECT_NAME)_$(CANTP_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/CanTp_Cfg.h
$(PROJECT_NAME)_$(CANTP_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/CanTp_PBCfg.h
$(PROJECT_NAME)_$(CANTP_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/CanTp_PBCfg.c
$(PROJECT_NAME)_$(CANTP_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/CanTp.mk

$(PROJECT_NAME)_CONFIG_FILES += $($(PROJECT_NAME)_$(CANTP_MODULE_NAME)_CONFIG_FILES)