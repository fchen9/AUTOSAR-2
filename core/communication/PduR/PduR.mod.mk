# PduR
obj-$(USE_PDUR) += PduR_CanNm.o
obj-$(USE_PDUR) += PduR_Com.o
obj-$(USE_PDUR) += PduR_Logic.o
obj-$(USE_PDUR) += PduR_LinIf.o
obj-$(USE_PDUR) += PduR_CDD_LinSlvIf.o
obj-$(USE_PDUR) += PduR_CddPduR.o
pb-obj-$(USE_PDUR) += PduR_PbCfg.o
pb-pc-file-$(USE_PDUR) += PduR_Cfg.h PduR_Cfg.c
obj-$(USE_PDUR) += PduR_Cfg.o
obj-$(USE_PDUR) += PduR_CanIf.o
obj-$(USE_PDUR) += PduR_CanTp.o
obj-$(USE_PDUR) += PduR_J1939Tp.o
obj-$(USE_PDUR) += PduR_IpduM.o
obj-$(USE_PDUR) += PduR_Dcm.o
obj-$(USE_PDUR) += PduR_SoAd.o
obj-$(USE_PDUR) += PduR_DoIP.o
obj-$(USE_PDUR) += PduR_Routing.o
obj-$(USE_PDUR) += PduR.o
obj-$(USE_PDUR) += PduR_FrIf.o
obj-$(USE_PDUR) += PduR_FrNm.o
obj-$(USE_PDUR) += PduR_FrTp.o
obj-$(USE_PDUR) += PduR_UdpNm.o
obj-$(USE_PDUR) += PduR_LdCom.o
obj-$(USE_PDUR) += PduR_SecOC.o

inc-$(USE_PDUR) += $(ROOTDIR)/communication/Com/inc
inc-$(USE_PDUR) += $(ROOTDIR)/communication/PduR/inc
vpath-$(USE_PDUR) += $(ROOTDIR)/communication/PduR/src