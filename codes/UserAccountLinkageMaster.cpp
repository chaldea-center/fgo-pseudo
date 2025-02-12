void __fastcall UserAccountLinkageMaster___ctor(UserAccountLinkageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC86C0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__, method);
    byte_4BC86C0 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long___ctor__);
}


bool __fastcall UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(
        UserAccountLinkageEntity_o **entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0

  if ( (byte_4BC86C2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserAccountLinkageMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    byte_4BC86C2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C1AE30(v8, v6);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           v8->static_fields->userIdNumber,
           (const MethodInfo_324AC20 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__TryGetEntity__);
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

  if ( (byte_4BC86C1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserAccountLinkageMaster___, v1);
    sub_1C1ABD4(&Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__, v2);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC86C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserAccountLinkageMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C1AE30(Instance, v6);
  return (UserAccountLinkageEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                         (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserAccountLinkageMaster__UserAccountLinkageEntity__long__GetEntity__);
}