void UserAccountLinkageMaster___ctor(UserAccountLinkageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27FFE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
    byte_4C27FFE = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    498,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
}


bool UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(
        UserAccountLinkageEntity_o **entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0

  if ( (byte_4C28000 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserAccountLinkageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28000 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C2D6EC(v5, v3);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           v5->static_fields->userIdNumber,
           (const MethodInfo_338A340 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
}


UserAccountLinkageEntity_o *UserAccountLinkageMaster__getSelfUserAccountLinkage(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4C27FFF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27FFF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C2D6EC(Instance, v2);
  return (UserAccountLinkageEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                         (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
}