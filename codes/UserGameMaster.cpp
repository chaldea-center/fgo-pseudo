void __fastcall UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF215 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__, method);
    byte_49FF215 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    28,
    (const MethodInfo_30D62EC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool __fastcall UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v8; // x1

  if ( (byte_49FF217 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_UserGameMaster___, method);
    sub_1B64870(&DataManager_TypeInfo, v3);
    sub_1B64870(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__, v4);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    byte_49FF217 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1B64ACC(UserId, v8);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           UserId,
           (const MethodInfo_30D6380 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *__fastcall UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_49FF216 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserGameMaster___, v1);
    sub_1B64870(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v2);
    sub_1B64870(&NetworkManager_TypeInfo, v3);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF216 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64ACC(Instance, v6);
  return (UserGameEntity_o *)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               (int64_t)Instance,
                               (const MethodInfo_30D632C *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}