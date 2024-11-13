void __fastcall ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__, method, v2);
    byte_4B16A6F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    7,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitMaster__GetAscensionAfterDialogId(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t result; // w0
  ServantLimitAddEntity_o *v13; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B16A71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16A71 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v11) )
    goto LABEL_8;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, 0LL);
  if ( result == -1 )
  {
LABEL_8:
    v13 = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v13, svtId, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)v13;
      if ( v13 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v13, -1, 0LL);
LABEL_15:
      sub_1BCAA3C(Instance, v10);
    }
    return -1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall ServantLimitMaster__GetEntity(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16A6D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B16A6D = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, 0LL);
  return (ServantLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitMaster__GetRewardRarityType(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitEntity_o *Entity; // x0
  __int64 v8; // x1
  int32_t rarity; // w19

  if ( (byte_4B16A70 & 1) == 0 )
  {
    sub_1BCA7E0(&Rarity_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    byte_4B16A70 = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_1BCAA3C(0LL, v8);
  rarity = Entity->fields.rarity;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v8);
  return Rarity__getFrameTypeImage(rarity, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantLimitMaster__TryGetEntity(
        ServantLimitMaster_o *this,
        ServantLimitEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16A6E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16A6E = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}