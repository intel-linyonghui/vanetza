/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RccPart_H_
#define	_RccPart_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RoadType.h"
#include "Zid.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LaneInformation;

/* RccPart */
typedef struct RccPart {
	struct RccPart__zoneIds {
		A_SEQUENCE_OF(Zid_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} zoneIds;
	RoadType_t	 roadType;
	struct RccPart__laneConfiguration {
		A_SEQUENCE_OF(struct LaneInformation) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} laneConfiguration;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RccPart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RccPart;
extern asn_SEQUENCE_specifics_t asn_SPC_RccPart_specs_1;
extern asn_TYPE_member_t asn_MBR_RccPart_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LaneInformation.h"

#endif	/* _RccPart_H_ */
#include "asn_internal.h"
