/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_solaris_service_pools_PoolInternal */

#ifndef _Included_com_sun_solaris_service_pools_PoolInternal
#define _Included_com_sun_solaris_service_pools_PoolInternal
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_solaris_service_pools_PoolInternal_POOL_VER_CURRENT
#define com_sun_solaris_service_pools_PoolInternal_POOL_VER_CURRENT 1L
#undef com_sun_solaris_service_pools_PoolInternal_POOL_VER_NONE
#define com_sun_solaris_service_pools_PoolInternal_POOL_VER_NONE 0L
#undef com_sun_solaris_service_pools_PoolInternal_PO_TRUE
#define com_sun_solaris_service_pools_PoolInternal_PO_TRUE 1L
#undef com_sun_solaris_service_pools_PoolInternal_PO_FALSE
#define com_sun_solaris_service_pools_PoolInternal_PO_FALSE 0L
#undef com_sun_solaris_service_pools_PoolInternal_PO_SUCCESS
#define com_sun_solaris_service_pools_PoolInternal_PO_SUCCESS 0L
#undef com_sun_solaris_service_pools_PoolInternal_PO_FAIL
#define com_sun_solaris_service_pools_PoolInternal_PO_FAIL -1L
#undef com_sun_solaris_service_pools_PoolInternal_POE_OK
#define com_sun_solaris_service_pools_PoolInternal_POE_OK 0L
#undef com_sun_solaris_service_pools_PoolInternal_POE_BAD_PROP_TYPE
#define com_sun_solaris_service_pools_PoolInternal_POE_BAD_PROP_TYPE 1L
#undef com_sun_solaris_service_pools_PoolInternal_POE_INVALID_CONF
#define com_sun_solaris_service_pools_PoolInternal_POE_INVALID_CONF 2L
#undef com_sun_solaris_service_pools_PoolInternal_POE_NOTSUP
#define com_sun_solaris_service_pools_PoolInternal_POE_NOTSUP 3L
#undef com_sun_solaris_service_pools_PoolInternal_POE_INVALID_SEARCH
#define com_sun_solaris_service_pools_PoolInternal_POE_INVALID_SEARCH 4L
#undef com_sun_solaris_service_pools_PoolInternal_POE_BADPARAM
#define com_sun_solaris_service_pools_PoolInternal_POE_BADPARAM 5L
#undef com_sun_solaris_service_pools_PoolInternal_POE_PUTPROP
#define com_sun_solaris_service_pools_PoolInternal_POE_PUTPROP 6L
#undef com_sun_solaris_service_pools_PoolInternal_POE_DATASTORE
#define com_sun_solaris_service_pools_PoolInternal_POE_DATASTORE 7L
#undef com_sun_solaris_service_pools_PoolInternal_POE_SYSTEM
#define com_sun_solaris_service_pools_PoolInternal_POE_SYSTEM 8L
#undef com_sun_solaris_service_pools_PoolInternal_POE_ACCESS
#define com_sun_solaris_service_pools_PoolInternal_POE_ACCESS 9L
#undef com_sun_solaris_service_pools_PoolInternal_PO_RDONLY
#define com_sun_solaris_service_pools_PoolInternal_PO_RDONLY 0L
#undef com_sun_solaris_service_pools_PoolInternal_PO_RDWR
#define com_sun_solaris_service_pools_PoolInternal_PO_RDWR 1L
#undef com_sun_solaris_service_pools_PoolInternal_PO_CREAT
#define com_sun_solaris_service_pools_PoolInternal_PO_CREAT 2L
#undef com_sun_solaris_service_pools_PoolInternal_PO_DISCO
#define com_sun_solaris_service_pools_PoolInternal_PO_DISCO 4L
#undef com_sun_solaris_service_pools_PoolInternal_PO_UPDATE
#define com_sun_solaris_service_pools_PoolInternal_PO_UPDATE 8L
#undef com_sun_solaris_service_pools_PoolInternal_POU_SYSTEM
#define com_sun_solaris_service_pools_PoolInternal_POU_SYSTEM 1L
#undef com_sun_solaris_service_pools_PoolInternal_POU_POOL
#define com_sun_solaris_service_pools_PoolInternal_POU_POOL 2L
#undef com_sun_solaris_service_pools_PoolInternal_POU_PSET
#define com_sun_solaris_service_pools_PoolInternal_POU_PSET 4L
#undef com_sun_solaris_service_pools_PoolInternal_POU_CPU
#define com_sun_solaris_service_pools_PoolInternal_POU_CPU 8L
/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_init
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_version
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1version
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POX_NATIVE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POX_1NATIVE
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POX_TEXT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POX_1TEXT
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_INVAL
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1INVAL
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_UINT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1UINT
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_INT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1INT
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_DOUBLE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1DOUBLE
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_BOOL
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1BOOL
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POC_STRING
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POC_1STRING
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POV_NONE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POV_1NONE
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POV_LOOSE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POV_1LOOSE
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POV_STRICT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POV_1STRICT
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POV_RUNTIME
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POV_1RUNTIME
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POF_INVALID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POF_1INVALID
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POF_VALID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POF_1VALID
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    get_POF_DESTROY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_get_1POF_1DESTROY
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_error
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1error
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_strerror
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1strerror
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_strerror_sys
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1strerror_1sys
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_type_list
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1type_1list
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_status
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1status
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_set_status
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1set_1status
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1alloc
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_status
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1status
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_close
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1close
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_remove
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1remove
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_open
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1open
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_rollback
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1rollback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_commit
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1commit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_export
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1export
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_validate
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1validate
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_update
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1update
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_pool
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1pool
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_query_pools
 * Signature: (JLjava/util/List;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1query_1pools
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_resource
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1resource
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_query_resources
 * Signature: (JLjava/util/List;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1query_1resources
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_query_components
 * Signature: (JLjava/util/List;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1query_1components
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_location
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1location
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_info
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1info
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_create
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1create
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_destroy
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1destroy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_transfer
 * Signature: (JJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1transfer
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_xtransfer
 * Signature: (JJJLjava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1xtransfer
  (JNIEnv *, jclass, jlong, jlong, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_query_resource_components
 * Signature: (JJLjava/util/List;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1query_1resource_1components
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_info
 * Signature: (JJI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1info
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_create
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1create
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_destroy
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1destroy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_associate
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1associate
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_dissociate
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1dissociate
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_info
 * Signature: (JJI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1info
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_query_pool_resources
 * Signature: (JJLjava/util/List;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1query_1pool_1resources
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_owning_resource
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1owning_1resource
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_component_info
 * Signature: (JJI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1component_1info
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_property
 * Signature: (JJLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1property
  (JNIEnv *, jclass, jlong, jlong, jstring, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_put_property
 * Signature: (JJLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1put_1property
  (JNIEnv *, jclass, jlong, jlong, jstring, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_rm_property
 * Signature: (JJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1rm_1property
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_walk_properties
 * Signature: (JJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1walk_1properties
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_conf_to_elem
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1conf_1to_1elem
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_to_elem
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1to_1elem
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_resource_to_elem
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1resource_1to_1elem
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_component_to_elem
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1component_1to_1elem
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_uint64
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1uint64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_int64
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1int64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_double
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1double
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_bool
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1bool
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_string
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1string
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_type
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1type
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_uint64
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1uint64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_int64
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1int64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_double
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1double
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_bool
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1bool
  (JNIEnv *, jclass, jlong, jshort);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_string
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1string
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_get_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1get_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_set_name
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1set_1name
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1alloc
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_value_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1value_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_static_location
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1static_1location
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_dynamic_location
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1dynamic_1location
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_set_binding
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1set_1binding
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_binding
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1binding
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_get_resource_binding
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1get_1resource_1binding
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_walk_pools
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1walk_1pools
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_walk_resources
 * Signature: (JJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1walk_1resources
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     com_sun_solaris_service_pools_PoolInternal
 * Method:    pool_walk_components
 * Signature: (JJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_PoolInternal_pool_1walk_1components
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_sun_solaris_service_pools_Element */

#ifndef _Included_com_sun_solaris_service_pools_Element
#define _Included_com_sun_solaris_service_pools_Element
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sun_solaris_service_pools_Element
 * Method:    walkProps
 * Signature: (JJLcom/sun/solaris/service/pools/PropertyWalk;Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_sun_solaris_service_pools_Element_walkProps
  (JNIEnv *, jobject, jlong, jlong, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_sun_solaris_service_pools_Value */

#ifndef _Included_com_sun_solaris_service_pools_Value
#define _Included_com_sun_solaris_service_pools_Value
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sun_solaris_service_pools_Value
 * Method:    getUnsignedInt64Value
 * Signature: (J)Lcom/sun/solaris/service/pools/UnsignedInt64;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_Value_getUnsignedInt64Value
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_Value
 * Method:    getLongValue
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_sun_solaris_service_pools_Value_getLongValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_Value
 * Method:    getStringValue
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_solaris_service_pools_Value_getStringValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_Value
 * Method:    getBoolValue
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sun_solaris_service_pools_Value_getBoolValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_sun_solaris_service_pools_Value
 * Method:    getDoubleValue
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_sun_solaris_service_pools_Value_getDoubleValue
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_sun_solaris_service_pools_HRTime */

#ifndef _Included_com_sun_solaris_service_pools_HRTime
#define _Included_com_sun_solaris_service_pools_HRTime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sun_solaris_service_pools_HRTime
 * Method:    timestamp
 * Signature: ()Lcom/sun/solaris/service/pools/UnsignedInt64;
 */
JNIEXPORT jobject JNICALL Java_com_sun_solaris_service_pools_HRTime_timestamp
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
