#ifndef DSS_ERRORS_DEF_H
#define DSS_ERRORS_DEF_H

/*============================================================================
  Copyright (c) 2008-2015 Qualcomm Technologies Incorporated.
  All Rights Reserved.
  Qualcomm Confidential and Proprietary
  ============================================================================*/
namespace dss
{
  namespace Error
  {
    typedef enum
    {
      DSS_ERROR_MIN                                        = 0,
      DSS_ERROR_NULL_ERRNO                                 = 1,
      DSS_ERROR_NO_MORE_APPLICATIONS_AVAILABLE             = 2,
      DSS_ERROR_NET_POLICY_CONVERSION_FAILED               = 3,
      DSS_ERROR_DSSNETAPP_ALLOCATION_FAILED                = 4,
      DSS_ERROR_DSSNETAPP_INITIALIZATION_FAILED            = 5,
      DSS_ERROR_DSSNETAPP_ADDITION_FAILED                  = 6,
      DSS_ERROR_DSSNETAPP_DELETION_FAILED                  = 7,
      DSS_ERROR_SET_POLICY_FAILED                          = 8,
      DSS_ERROR_INVALID_APPLICATION_ID                     = 9,
      DSS_ERROR_ADDRESS_FAMILY_CONVERSION_FAILED           = 10,
      DSS_ERROR_SOCKET_TYPE_CONVERSION_FAILED              = 11,
      DSS_ERROR_PROTOCOL_TYPE_CONVERSION_FAILED            = 12,
      DSS_ERROR_NULL_SOCKET_FACTORY                        = 13,
      DSS_ERROR_SOCKET_CREATION_FAILED                     = 14,
      DSS_ERROR_NET_POLICY_CREATION_FAILED                 = 15,
      DSS_ERROR_SET_SOCKET_OPT_FAILED                      = 16,
      DSS_ERROR_INVALID_SOCKET_DESCRIPTOR                  = 17,
      DSS_ERROR_NULL_SOCKET_ID                             = 18,
      DSS_ERROR_NULL_LOCAL_ADDRESS                         = 19,
      DSS_ERROR_INVALID_ADDRESS_FAMILY                     = 20,
      DSS_ERROR_ILLEGAL_IPV4_ADDRESS_LENGTH                = 21,
      DSS_ERROR_ILLEGAL_IPV6_ADDRESS_LENGTH                = 22,
      DSS_ERROR_BIND_OPERATION_FAILED                      = 23,
      DSS_ERROR_GET_SOCK_NAME_FAILED                       = 24,
      DSS_ERROR_NULL_SERVER_ADDRESS                        = 25,
      DSS_ERROR_CONNECT_OPERATION_FAILED                   = 26,
      DSS_ERROR_INVALIED_BACKLOG_PARAMETER                 = 27,
      DSS_ERROR_LISTEN_OPERATION_FAILED                    = 28,
      DSS_ERROR_NULL_REMOTE_ADDRESS_OR_NULL_ADDRLEN        = 29,
      DSS_ERROR_ACCEPT_OPERATION_FAILED                    = 30,
      DSS_ERROR_NULL_SOCKFD_PTR                            = 31,
      DSS_ERROR_SOCKET_APPLICATION_MISMATCH                = 32,
      DSS_ERROR_NULL_BUFFER                                = 33,
      DSS_ERROR_READ_OPERATION_FAILED                      = 34,
      DSS_ERROR_NULL_IOV_PARAMETER                         = 35,
      DSS_ERROR_READV_OPERATION_FAILED                     = 36,
      DSS_ERROR_NULL_ADDRESS_LENGTH                        = 37,
      DSS_ERROR_RECVFROM_OPERATION_FAILED                  = 38,
      DSS_ERROR_NULL_MSG_PARAMETER                         = 39,
      DSS_ERROR_NULL_MSG_IOV_PARAMETER                     = 40,
      DSS_ERROR_BUFFER_MEMORY_ALLOCATION_FAILED            = 41,
      DSS_ERROR_ANC_DATA_MEMORY_ALLOCATION_FAILED          = 42,
      DSS_ERROR_DSS_CMSG_FIRSTHDR_OR_DSS_CMSG_NXTHDR_FAILED = 43,
      DSS_ERROR_WRITE_OPERATION_FAILED                     = 44,
      DSS_ERROR_WRITEV_OPERATION_FAILED                    = 45,
      DSS_ERROR_NULL_DESTINATION_ADDRESS                   = 46,
      DSS_ERROR_MSG_LEN_ZERO_OR_LESS                       = 47,
      DSS_ERROR_ANCILLARY_DATA_NOT_SUPPORTED               = 48,
      DSS_ERROR_SHUTDOWN_OPERATION_FAILED                  = 49,
      DSS_ERROR_CLOSE_OPERATION_FAILED                     = 50,
      DSS_ERROR_SOCKETS_STILL_PRESENT                      = 51,
      DSS_ERROR_FAILED_TO_REMOVE_NETAPP_FROM_APPSLIST      = 52,
      DSS_ERROR_NULL_OPTVAL_OR_OPTLEN                      = 53,
      DSS_ERROR_SET_SOLINGER_OPERATION_FAILED              = 54,
      DSS_ERROR_SET_SOLINGERRESET_OPERATION_FAILED         = 55,
      DSS_ERROR_DSS_SO_CB_FCN_SUPPORTED_ONLY_FOR_DSS_SOCKET2_SOCKETS = 56,
      DSS_ERROR_SET_LEGACY_POLICY_OPERATION_FAILED         = 57,
      DSS_ERROR_INVALID_OPTLEN                             = 58,
      DSS_ERROR_INCORRECT_OPTION_LEVEL                     = 59,
      DSS_ERROR_OPTION_LEVEL_CONVERSION_FAILED             = 60,
      DSS_ERROR_SETOPTPRIV_OPERATION_FAILED                = 61,
      DSS_ERROR_OPTION_NAME_CONVERSION_FAILED              = 62,
      DSS_ERROR_SET_OPT_OPERATION_FAILED                   = 63,
      DSS_ERROR_OPTION_NOT_SUPPORTED_FOR_DSS_GETSOCKOPT    = 64,
      DSS_ERROR_GET_SOLINGER_FAILED                        = 65,
      DSS_ERROR_IDS2DSLINGER_FAILED                        = 66,
      DSS_ERROR_GET_SOLINGERRESET_FAILED                   = 67,
      DSS_ERROR_GETOPTPRIV_OPRERATION_FAILED               = 68,
      DSS_ERROR_GET_OPT_OPERATION_FAILED                   = 69,
      DSS_ERROR_NULL_ADDRESS                               = 70,
      DSS_ERROR_GETSOCKNAME_OPERATION_FAILED               = 71,
      DSS_ERROR_GET_PEERNAME_OPERATION_FAILED              = 72,
      DSS_ERROR_DSS_WRITE_DSM_CHAIN_FAILED                 = 73,
      DSS_ERROR_DSS_READ_DSM_CHAIN_FAILED                  = 74,
      DSS_ERROR_INVALID_ARGUMENTS                          = 75,
      DSS_ERROR_DSS_GET_QOS_SHARE_HANDLE_DEPRECATED        = 76,
      DSS_ERROR_QUERY_INTERFACE_FAILED                     = 77,
      DSS_ERROR_CONNECT_OPERATION_IN_PROGRESS              = 78,
      DSS_ERROR_SOCKET_ALREADY_CONNECTED                   = 79,
      DSS_ERROR_LISTEN_OPERATION_IN_PROGRESS               = 80,
      DSS_ERROR_ACCEPT_OPERATION_IN_PROGRESS               = 81,
      DSS_ERROR_INVALID_APPICALTION_DESCRIPTOR             = 82,
      DSS_ERROR_READ_OPERATION_IN_PROGRESS                 = 83,
      DSS_ERROR_READV_OPERATION_IN_PROGRESS                = 84,
      DSS_ERROR_DSS_RECVFROM_DSM_CHAIN_FAILED              = 85,
      DSS_ERROR_RECVFROM_OPERATION_IN_PROGRESS             = 86,
      DSS_ERROR_INVALID_RECVMSG_FLAG                       = 87,
      DSS_ERROR_WRITE_OPERATION_IN_PROGRESS                = 88,
      DSS_ERROR_WRITEV_OPERATION_IN_PROGRESS               = 89,
      DSS_ERROR_SENDTO_OPERATION_IN_PROGRESS               = 90,
      DSS_ERROR_SENDTO_OPERATION_FAILED                    = 91,
      DSS_ERROR_CLOSE_OPERATION_IN_PROGRESS                = 92,
      DSS_ERROR_WRITE_DSM_CHAIN_FAILED                     = 93,
      DSS_ERROR_READ_DSM_CHAIN_FAILED                      = 94,
      DSS_ERROR_SENDTO_DSM_CHAIN_FAILED                    = 95,
      DSS_ERROR_DSS_SO_QOS_SHARE_HANDLE_SOCKOPT_DEPRECATED = 96,
      DSS_ERROR_DS2IDSLINGER_OPERATION_FAILED              = 97,
      DSS_ERROR_SET_SDBACKSIGNAL_OPERATION_FAILED          = 98,
      DSS_ERROR_SET_SYSTEM_OPTION_FAILED                   = 99,
      DSS_ERROR_INVALID_SOCKET_OPTIONS                     = 100,
      DSS_ERROR_GET_SYSTEM_OPTION_FAILED                   = 101,
      DSS_ERROR_DSNET_NETWORK_FACTORY_CREATION_FAILED      = 102,
      DSS_ERROR_CREATE_IPFILTERSPEC_FAILED                 = 103,
      DSS_ERROR_DS2IDSIPFILTER_FAILED                      = 104,
      DSS_ERROR_SET_IFACEID_FAILED                         = 105,
      DSS_ERROR_SET_ROUTABLE_FAILED                        = 106,
      DSS_ERROR_CREATE_NETWORKPRIV_FAILED                  = 107,
      DSS_ERROR_LOOKUP_INTERFACE_FAILED                    = 108,
      DSS_ERROR_REGISTER_FILTERS_FAILED                    = 109,
      DSS_ERROR_DS2IDSIFACEGROUP_FAILED                    = 110,
      DSS_ERROR_REMOVE_FILTER_REG_OBJECT_FAILED            = 111,
      DSS_ERROR_DS2IDSNETPOLICY_FAILED                     = 112,
      DSS_ERROR_GET_NETWORKFACTORY_FAILED                  = 113,
      DSS_ERROR_CREATE_NETWORK_FAILED                      = 114,
      DSS_ERROR_BUILDIFACEID_FAILED                        = 115,
      DSS_ERROR_GET_NETAPP_FAILED                          = 116,
      DSS_ERROR_NETMONITORED_INIT_FAILED                   = 117,
      DSS_ERROR_IDSNETWORKPRIVSCOPE_INIT_FAILED            = 118,
      DSS_ERROR_IDSNETWORKSCOPE_INIT_FAILED                = 119,
      DSS_ERROR_ILLEGAL_IOCTL_NAME                         = 120,
      DSS_ERROR_NEGATIVE_NETHANDLE                         = 121,
      DSS_ERROR_NEGATIVE_CALLTYPE                          = 122,
      DSS_ERROR_GET_NET_OBJECTS_FAILED                     = 123,
      DSS_ERROR_IDSNETWORKEXTSCOPE_INIT_FAILED             = 124,
      DSS_ERROR_IOCTL_FAILED_NO_ACTIVE_NETWORK             = 125,
      DSS_ERROR_NULL_NETACTIVE                             = 126,
      DSS_ERROR_GET_QOS_DEFAULT_FAILED                     = 127,
      DSS_ERROR_GET_TECH_OBJECT_FAILED                     = 128,
      DSS_ERROR_GET_DSSNETQOS_SECONDARY_FAILED             = 129,
      DSS_ERROR_GET_NETQOS_SECONDARY_FAILED                = 130,
      DSS_ERROR_NULL_ARGVAL                                = 131,
      DSS_ERROR_REG_EVENTCB_FAILED                         = 132,
      DSS_ERROR_DEREG_EVENTCB_FAILED                       = 133,
      DSS_ERROR_DS2IDSSESSION_TIMER_SELECT_FAILED          = 134,
      DSS_ERROR_RESET_FMCTUNNEL_PARAMS_FAILED              = 135,
      DSS_ERROR_SET_FMCTUNNEL_PARAMS_FAILED                = 136,
      DSS_ERROR_GET_NET_QOS_MANAGER_FAILED                 = 137,
      DSS_ERROR_NET_QOS_MANAGER_CLOSE_FAILED               = 138,
      DSS_ERROR_CREATE_QOS_SECONDARY_INPUT_FAILED          = 139,
      DSS_ERROR_MAX
    }dss_error_enum_type;
  };
};
#endif //DSS_ERRORS_DEF_H