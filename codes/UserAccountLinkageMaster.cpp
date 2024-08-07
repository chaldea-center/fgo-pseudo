void __fastcall UserAccountLinkageMaster___ctor(UserAccountLinkageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5D1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__, method);
    byte_49FF5D1 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
}


bool __fastcall UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(
        UserAccountLinkageEntity_o **entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v8; // x1

  if ( (byte_49FF5D3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserAccountLinkageMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__, v4);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    byte_49FF5D3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1B64C5C(UserId, v8);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           UserId,
           (const MethodInfo_30D6998 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
}


UserAccountLinkageEntity_o *__fastcall UserAccountLinkageMaster__getSelfUserAccountLinkage(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_49FF5D2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserAccountLinkageMaster___, v1);
    sub_1B64A00(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__, v2);
    sub_1B64A00(&NetworkManager_TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF5D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64C5C(Instance, v6);
  return (UserAccountLinkageEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         (int64_t)Instance,
                                         (const MethodInfo_30D6944 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
}