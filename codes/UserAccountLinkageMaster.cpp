void __fastcall UserAccountLinkageMaster___ctor(UserAccountLinkageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD0B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
    byte_4A5BD0B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
}


bool __fastcall UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(
        UserAccountLinkageEntity_o **entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v5; // x1

  if ( (byte_4A5BD0D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserAccountLinkageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BD0D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1B8880C(UserId, v5);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           UserId,
           (const MethodInfo_311DB34 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
}


UserAccountLinkageEntity_o *__fastcall UserAccountLinkageMaster__getSelfUserAccountLinkage(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4A5BD0C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD0C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v2);
  return (UserAccountLinkageEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         (int64_t)Instance,
                                         (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
}