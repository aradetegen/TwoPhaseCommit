/*
 * Written by Arade T Tegen
 * 
 */

#ifndef _SERVER_H_RPCGEN
#define _SERVER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct to_localID {
	int trans_type;
	int global_id;
	int global_prognum;
};
typedef struct to_localID to_localID;

struct to_dm {
	int key;
	int value;
	int local_id;
};
typedef struct to_dm to_dm;

struct commit_struct {
	int id;
	bool_t commit;
	int type;
};
typedef struct commit_struct commit_struct;

struct coord_reg {
	int global_id;
	int local_id;
	int prognum;
};
typedef struct coord_reg coord_reg;

struct vote_req {
	int local_id;
	int time_out;
	char *DM_list;
};
typedef struct vote_req vote_req;

#define SERVERVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define GET_LOCAL_ID 1
extern  int * get_local_id_1(to_localID *, CLIENT *);
extern  int * get_local_id_1_svc(to_localID *, struct svc_req *);
#define GET_GLOBAL_ID 2
extern  int * get_global_id_1(void *, CLIENT *);
extern  int * get_global_id_1_svc(void *, struct svc_req *);
#define MODIFY_DB 3
extern  int * modify_db_1(to_dm *, CLIENT *);
extern  int * modify_db_1_svc(to_dm *, struct svc_req *);
#define COMMIT_LOCAL 4
extern  int * commit_local_1(commit_struct *, CLIENT *);
extern  int * commit_local_1_svc(commit_struct *, struct svc_req *);
#define COMMIT_GLOBAL 5
extern  int * commit_global_1(commit_struct *, CLIENT *);
extern  int * commit_global_1_svc(commit_struct *, struct svc_req *);
#define REGISTER_DM 6
extern  int * register_dm_1(coord_reg *, CLIENT *);
extern  int * register_dm_1_svc(coord_reg *, struct svc_req *);
#define GIVE_VOTE 7
extern  int * give_vote_1(vote_req *, CLIENT *);
extern  int * give_vote_1_svc(vote_req *, struct svc_req *);
#define DECISION_STATE 8
extern  int * decision_state_1(int *, CLIENT *);
extern  int * decision_state_1_svc(int *, struct svc_req *);
extern int serverprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define GET_LOCAL_ID 1
extern  int * get_local_id_1();
extern  int * get_local_id_1_svc();
#define GET_GLOBAL_ID 2
extern  int * get_global_id_1();
extern  int * get_global_id_1_svc();
#define MODIFY_DB 3
extern  int * modify_db_1();
extern  int * modify_db_1_svc();
#define COMMIT_LOCAL 4
extern  int * commit_local_1();
extern  int * commit_local_1_svc();
#define COMMIT_GLOBAL 5
extern  int * commit_global_1();
extern  int * commit_global_1_svc();
#define REGISTER_DM 6
extern  int * register_dm_1();
extern  int * register_dm_1_svc();
#define GIVE_VOTE 7
extern  int * give_vote_1();
extern  int * give_vote_1_svc();
#define DECISION_STATE 8
extern  int * decision_state_1();
extern  int * decision_state_1_svc();
extern int serverprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_to_localID (XDR *, to_localID*);
extern  bool_t xdr_to_dm (XDR *, to_dm*);
extern  bool_t xdr_commit_struct (XDR *, commit_struct*);
extern  bool_t xdr_coord_reg (XDR *, coord_reg*);
extern  bool_t xdr_vote_req (XDR *, vote_req*);

#else /* K&R C */
extern bool_t xdr_to_localID ();
extern bool_t xdr_to_dm ();
extern bool_t xdr_commit_struct ();
extern bool_t xdr_coord_reg ();
extern bool_t xdr_vote_req ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SERVER_H_RPCGEN */
