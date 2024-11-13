void __fastcall UserGameMaster___ctor(UserGameMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__, method, v2);
    byte_4B16F4A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    28,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long___ctor__);
}


bool __fastcall UserGameMaster__TryGetSelfUserGame(UserGameEntity_o **entity, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v13; // x1

  if ( (byte_4B16F4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGameMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B16F4C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    sub_1BCAA3C(UserId, v13);
  return DataMasterBase_object__object__long___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)entity,
           UserId,
           (const MethodInfo_31B3040 *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__TryGetEntity__);
}


UserGameEntity_o *__fastcall UserGameMaster__getSelfUserGame(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4B16F4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGameMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16F4B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGameMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v10);
  return (UserGameEntity_o *)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               (int64_t)Instance,
                               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserGameMaster__UserGameEntity__long__GetEntity__);
}