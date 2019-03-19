/** * @file CanIf.h * @author Guillaume Sottas * @date 07/12/2017 */#ifndef CANIF_H#define CANIF_H#ifdef __cplusplusextern "C"{#endif /* ifdef __cplusplus */#include "CanIf_Types.h"PduIdType get_pdu_id(void);const PduInfoType *get_p_pdu_info_type(void);Std_ReturnType get_return_value(void);void set_pdu_id(PduIdType pduId);void set_p_pdu_info_type(PduInfoType *pPduInfo);void set_return_value(Std_ReturnType returnValue);extern Std_ReturnType CanIf_Transmit(PduIdType txPduId, const PduInfoType *pPduInfo);#ifdef __cplusplus}#endif /* ifdef __cplusplus */#endif /* define CANIF_H */