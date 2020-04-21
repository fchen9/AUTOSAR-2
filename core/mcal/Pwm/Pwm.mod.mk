#Pwm
obj-$(USE_PWM) += Pwm_Lcfg.o
obj-$(USE_PWM) += Pwm_PBcfg.o
obj-$(USE_PWM)-$(CFG_MPC5604P) += Pwm_Hw_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5604P) += Pwm.o
obj-$(USE_PWM)-$(CFG_MPC5744P) += Pwm_Hw_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5744P) += Pwm.o
obj-$(USE_PWM)-$(CFG_MPC5643L) += Pwm_Hw_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5643L) += Pwm.o
obj-$(USE_PWM)-$(CFG_SPC56XL70) += Pwm_Hw_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_SPC56XL70) += Pwm.o
obj-$(USE_PWM)-$(CFG_MPC5746C) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5748G) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5777C) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC560X) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5606S) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5668) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5516) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5567) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC563XM) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5644A) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5645S) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_MPC5646B) += Pwm_mpc5xxx.o
obj-$(USE_PWM)-$(CFG_STM32F1X) += Pwm_stm32.o
obj-$(USE_PWM)-$(CFG_TMS570) += Pwm_Hw_tms570.o
obj-$(USE_PWM)-$(CFG_TMS570) += Pwm.o
obj-$(USE_PWM)-$(CFG_JACINTO) += Pwm.o
obj-$(USE_PWM)-$(CFG_RH850F1L) += Pwm.o
obj-$(USE_PWM)-$(CFG_TMS570) += Pwm_Irq.o
obj-$(USE_PWM)-$(CFG_JACINTO) += Pwm_Irq.o
obj-$(USE_PWM)-$(CFG_RH850F1L) += Pwm_Irq.o
obj-$(USE_PWM)-$(CFG_ZYNQ) += Pwm_zynq.o
obj-$(USE_PWM)-$(CFG_JACINTO) += Pwm_Hw_jacinto.o
obj-$(USE_PWM)-$(CFG_JAC6) += epwm.o
obj-$(USE_PWM)-$(CFG_JAC6) += epwm_asr.o
obj-$(USE_PWM)-$(CFG_RH850F1L) += Pwm_Hw_taud.o

inc-$(USE_PWM) += $(ROOTDIR)/mcal/Pwm/inc
inc-$(USE_PWM) += $(ROOTDIR)/mcal/Pwm/src
vpath-$(USE_PWM) += $(ROOTDIR)/mcal/Pwm/src
