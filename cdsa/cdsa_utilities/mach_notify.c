/*
 * Copyright (c) 2000-2001 Apple Computer, Inc. All Rights Reserved.
 * 
 * The contents of this file constitute Original Code as defined in and are
 * subject to the Apple Public Source License Version 1.2 (the 'License').
 * You may not use this file except in compliance with the License. Please obtain
 * a copy of the License at http://www.apple.com/publicsource and read it before
 * using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS
 * OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT. Please see the License for the
 * specific language governing rights and limitations under the License.
 */


/*
 * IDENTIFICATION:
 * stub generated Wed Mar 29 13:49:14 2000
 * with a MiG generated Sat Feb 5 17:40:06 PST 2000 by root@salzburg
 *
 * NOTE: This file was originally generated by MIG, but has since been hand-massaged
 * to the point where re-generating it is not advised.
 */

/* Module notify */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#include <mach/std_types.h>

#ifndef	mig_internal
#define	mig_internal	static
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#ifndef	TypeCheck
#define	TypeCheck 0
#endif	/* TypeCheck */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	1
#endif	/* UseStaticTemplates */

#define _WALIGN_(x) (((x) + 3) & ~3)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* typedefs for all replies */

	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_port_deleted_t;

	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_port_destroyed_t;

	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_no_senders_t;

	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_send_once_t;

	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__mach_notify_dead_name_t;


/* Forward Declarations */


mig_internal novalue _Xmach_notify_port_deleted
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_notify_port_destroyed
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_notify_no_senders
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_notify_send_once
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_notify_dead_name
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


/* SimpleRoutine mach_notify_port_deleted */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cdsa_mach_notify_port_deleted
(
	mach_port_t notify,
	mach_port_name_t name
);

/* SimpleRoutine mach_notify_port_deleted */
mig_internal novalue _Xmach_notify_port_deleted
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
		mach_msg_trailer_t trailer;
	} Request;

	typedef __Reply__mach_notify_port_deleted_t Reply;
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
	} __Request;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register Request *In0P = (Request *) InHeadP;
	register Reply *OutP = (Reply *) OutHeadP;
	__DeclareRcvSimple(65, "mach_notify_port_deleted")
	__BeforeRcvSimple(65, "mach_notify_port_deleted")
#if	TypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != sizeof(__Request)))
		{ MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS); }
#endif	/* TypeCheck */

	OutP->RetCode = cdsa_mach_notify_port_deleted(In0P->Head.msgh_request_port, In0P->name);
	__AfterRcvSimple(65, "mach_notify_port_deleted")
}

/* SimpleRoutine mach_notify_port_destroyed */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cdsa_mach_notify_port_destroyed
(
	mach_port_t notify,
	mach_port_t rights
);

/* SimpleRoutine mach_notify_port_destroyed */
mig_internal novalue _Xmach_notify_port_destroyed
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t rights;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Request;

	typedef __Reply__mach_notify_port_destroyed_t Reply;
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t rights;
		/* end of the kernel processed data */
	} __Request;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register Request *In0P = (Request *) InHeadP;
	register Reply *OutP = (Reply *) OutHeadP;
	__DeclareRcvSimple(69, "mach_notify_port_destroyed")
	__BeforeRcvSimple(69, "mach_notify_port_destroyed")
#if	TypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != sizeof(__Request)))
		{ MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS); }
#endif	/* TypeCheck */

#if	TypeCheck
	if (In0P->rights.type != MACH_MSG_PORT_DESCRIPTOR || 
	    In0P->rights.disposition != MACH_MSG_TYPE_MOVE_RECEIVE)
		{ MIG_RETURN_ERROR(OutP, MIG_TYPE_ERROR); }
#endif	/* TypeCheck */

	OutP->RetCode = cdsa_mach_notify_port_destroyed(In0P->Head.msgh_request_port, In0P->rights.name);
	__AfterRcvSimple(69, "mach_notify_port_destroyed")
}

/* SimpleRoutine mach_notify_no_senders */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cdsa_mach_notify_no_senders
(
	mach_port_t notify,
	mach_port_mscount_t mscount
);

/* SimpleRoutine mach_notify_no_senders */
mig_internal novalue _Xmach_notify_no_senders
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_mscount_t mscount;
		mach_msg_trailer_t trailer;
	} Request;

	typedef __Reply__mach_notify_no_senders_t Reply;
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_mscount_t mscount;
	} __Request;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register Request *In0P = (Request *) InHeadP;
	register Reply *OutP = (Reply *) OutHeadP;
	__DeclareRcvSimple(70, "mach_notify_no_senders")
	__BeforeRcvSimple(70, "mach_notify_no_senders")
#if	TypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != sizeof(__Request)))
		{ MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS); }
#endif	/* TypeCheck */

	OutP->RetCode = cdsa_mach_notify_no_senders(In0P->Head.msgh_request_port, In0P->mscount);
	__AfterRcvSimple(70, "mach_notify_no_senders")
}

/* SimpleRoutine mach_notify_send_once */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cdsa_mach_notify_send_once
(
	mach_port_t notify
);

/* SimpleRoutine mach_notify_send_once */
mig_internal novalue _Xmach_notify_send_once
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;

	typedef __Reply__mach_notify_send_once_t Reply;
	typedef struct {
		mach_msg_header_t Head;
	} __Request;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register Request *In0P = (Request *) InHeadP;
	register Reply *OutP = (Reply *) OutHeadP;
	__DeclareRcvSimple(71, "mach_notify_send_once")
	__BeforeRcvSimple(71, "mach_notify_send_once")
#if	TypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != sizeof(__Request)))
		{ MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS); }
#endif	/* TypeCheck */

	OutP->RetCode = cdsa_mach_notify_send_once(In0P->Head.msgh_request_port);
	__AfterRcvSimple(71, "mach_notify_send_once")
}

/* SimpleRoutine mach_notify_dead_name */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t cdsa_mach_notify_dead_name
(
	mach_port_t notify,
	mach_port_name_t name
);

/* SimpleRoutine mach_notify_dead_name */
mig_internal novalue _Xmach_notify_dead_name
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
		mach_msg_trailer_t trailer;
	} Request;

	typedef __Reply__mach_notify_dead_name_t Reply;
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
	} __Request;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register Request *In0P = (Request *) InHeadP;
	register Reply *OutP = (Reply *) OutHeadP;
	__DeclareRcvSimple(72, "mach_notify_dead_name")
	__BeforeRcvSimple(72, "mach_notify_dead_name")
#if	TypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != sizeof(__Request)))
		{ MIG_RETURN_ERROR(OutP, MIG_BAD_ARGUMENTS); }
#endif	/* TypeCheck */

	OutP->RetCode = cdsa_mach_notify_dead_name(In0P->Head.msgh_request_port, In0P->name);
	__AfterRcvSimple(72, "mach_notify_dead_name")
}

/* union of all replies */

union __ReplyUnion {
	__Reply__mach_notify_port_deleted_t Reply_mach_notify_port_deleted;
	__Reply__mach_notify_port_destroyed_t Reply_mach_notify_port_destroyed;
	__Reply__mach_notify_no_senders_t Reply_mach_notify_no_senders;
	__Reply__mach_notify_send_once_t Reply_mach_notify_send_once;
	__Reply__mach_notify_dead_name_t Reply_mach_notify_dead_name;
};


extern boolean_t notify_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

extern mig_routine_t notify_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
const struct cdsa_notify_subsystem {
	struct subsystem *	subsystem;	/* Reserved for system use */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	base_addr;	/* Base ddress */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[9];
	struct routine_arg_descriptor	/*Array of arg descriptors */
		arg_descriptor[6];
} cdsa_notify_subsystem = {
#define ARGDES(n) \
    (struct routine_arg_descriptor *)&cdsa_notify_subsystem.arg_descriptor[n]
	0,
	64,
	73,
	sizeof(union __ReplyUnion),
	(vm_address_t)&cdsa_notify_subsystem,
	{
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) cdsa_mach_notify_port_deleted,
            (mig_stub_routine_t) _Xmach_notify_port_deleted, 2, 1, ARGDES(0), sizeof(__Reply__mach_notify_port_deleted_t) },
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) cdsa_mach_notify_port_destroyed,
            (mig_stub_routine_t) _Xmach_notify_port_destroyed, 2, 2, ARGDES(1), sizeof(__Reply__mach_notify_port_destroyed_t) },
          { (mig_impl_routine_t) cdsa_mach_notify_no_senders,
            (mig_stub_routine_t) _Xmach_notify_no_senders, 2, 1, ARGDES(3), sizeof(__Reply__mach_notify_no_senders_t) },
          { (mig_impl_routine_t) cdsa_mach_notify_send_once,
            (mig_stub_routine_t) _Xmach_notify_send_once, 1, 1, ARGDES(4), sizeof(__Reply__mach_notify_send_once_t) },
          { (mig_impl_routine_t) cdsa_mach_notify_dead_name,
            (mig_stub_routine_t) _Xmach_notify_dead_name, 2, 1, ARGDES(5), sizeof(__Reply__mach_notify_dead_name_t) },
	},

	{
            {
                0 | MACH_RPC_PORT  | MACH_RPC_MOVE_SEND_ONCE,
                4,
                1,
                0,
            },
            {
                0 | MACH_RPC_PORT  | MACH_RPC_MOVE_SEND_ONCE,
                4,
                1,
                0,
            },
            {
                0 | MACH_RPC_PORT  | MACH_RPC_IN ,
                4,
                1,
                4,
            },
            {
                0 | MACH_RPC_PORT  | MACH_RPC_MOVE_SEND_ONCE,
                4,
                1,
                0,
            },
            {
                0 | MACH_RPC_PORT  | MACH_RPC_MOVE_SEND_ONCE,
                4,
                1,
                0,
            },
            {
                0 | MACH_RPC_PORT  | MACH_RPC_MOVE_SEND_ONCE,
                4,
                1,
                0,
            },
	},

};

mig_external boolean_t cdsa_notify_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;

	if ((InHeadP->msgh_id > 72) || (InHeadP->msgh_id < 64) ||
	    ((routine = cdsa_notify_subsystem.routine[InHeadP->msgh_id - 64].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t cdsa_notify_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 64;

	if ((msgh_id > 8) || (msgh_id < 0))
		return 0;

	return cdsa_notify_subsystem.routine[msgh_id].stub_routine;
}