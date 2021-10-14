/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603DA.ASN"
 * 	`asn1c -fcompound-names -pdu=all -no-gen-OER`
 */

#include "SignalStatus.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_regional_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_regional_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_136P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_5 = {
	sizeof(struct SignalStatus__regional),
	offsetof(struct SignalStatus__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_5 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_5,
	sizeof(asn_DEF_regional_tags_5)
		/sizeof(asn_DEF_regional_tags_5[0]) - 1, /* 1 */
	asn_DEF_regional_tags_5,	/* Same as above */
	sizeof(asn_DEF_regional_tags_5)
		/sizeof(asn_DEF_regional_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_regional_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_regional_5,
	1,	/* Single element */
	&asn_SPC_regional_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SignalStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatus, sequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sequenceNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatus, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionReferenceID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalStatus, sigStatus),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalStatusPackageList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sigStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatus, regional),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_regional_5,
		0,
		{ 0, &asn_PER_memb_regional_constr_5,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_SignalStatus_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_SignalStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sigStatus */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_SignalStatus_specs_1 = {
	sizeof(struct SignalStatus),
	offsetof(struct SignalStatus, _asn_ctx),
	asn_MAP_SignalStatus_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SignalStatus_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatus = {
	"SignalStatus",
	"SignalStatus",
	&asn_OP_SEQUENCE,
	asn_DEF_SignalStatus_tags_1,
	sizeof(asn_DEF_SignalStatus_tags_1)
		/sizeof(asn_DEF_SignalStatus_tags_1[0]), /* 1 */
	asn_DEF_SignalStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatus_tags_1)
		/sizeof(asn_DEF_SignalStatus_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SignalStatus_1,
	4,	/* Elements count */
	&asn_SPC_SignalStatus_specs_1	/* Additional specs */
};

