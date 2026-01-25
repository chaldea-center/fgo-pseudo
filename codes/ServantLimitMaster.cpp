void ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF01C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
    byte_4CEF01C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    7,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
}


int32_t ServantLimitMaster__GetAscensionAfterDialogId(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x2
  int32_t result; // w0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2
  ServantLimitAddEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEF01E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF01E = 1;
  }
  v12 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v7) )
    goto LABEL_8;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, v8);
  if ( result == -1 )
  {
LABEL_8:
    v12 = 0;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v12, svtId, limitCount, v10) )
    {
      Instance = (DataManager_o *)v12;
      if ( v12 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v12, -1, v11);
LABEL_15:
      sub_1C7BD40(Instance, v6);
    }
    return -1;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *ServantLimitMaster__GetEntity(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF01A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
    byte_4CEF01A = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
}


int32_t ServantLimitMaster__GetRewardRarityType(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitEntity_o *Entity; // x0
  __int64 v8; // x1
  int32_t rarity; // w19

  if ( (byte_4CEF01D & 1) == 0 )
  {
    sub_1C7BAE8(&Rarity_TypeInfo);
    byte_4CEF01D = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_1C7BD40(0, v8);
  rarity = Entity->fields.rarity;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(rarity, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitMaster__TryGetEntity(
        ServantLimitMaster_o *this,
        ServantLimitEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF01B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
    byte_4CEF01B = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}