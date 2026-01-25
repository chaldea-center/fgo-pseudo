void UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF523 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
    byte_4CEF523 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    28,
    (const MethodInfo_342E534 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0

  if ( (byte_4CEF525 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserGameMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF525 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C7BD40(v5, v3);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           v5->static_fields->userIdNumber,
           (const MethodInfo_34308A4 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4CEF524 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserGameMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF524 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C7BD40(Instance, v2);
  return (UserGameEntity_o *)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                               (const MethodInfo_3430858 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}