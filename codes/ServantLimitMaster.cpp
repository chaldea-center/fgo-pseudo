void __fastcall ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB65C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__, method);
    byte_4AB65C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    7,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitMaster__GetAscensionAfterDialogId(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  int32_t result; // w0
  ServantLimitAddEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AB65C2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AB65C2 = 1;
  }
  v11 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v9) )
    goto LABEL_8;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, 0LL);
  if ( result == -1 )
  {
LABEL_8:
    v11 = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v11, svtId, limitCount, 0LL) )
    {
      Instance = (DataManager_o *)v11;
      if ( v11 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v11, -1, 0LL);
LABEL_15:
      sub_1BAB678(Instance, v8);
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

  if ( (byte_4AB65BE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_4AB65BE = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, 0LL);
  return (ServantLimitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
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

  if ( (byte_4AB65C1 & 1) == 0 )
  {
    sub_1BAB41C(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_4AB65C1 = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_1BAB678(0LL, v8);
  rarity = Entity->fields.rarity;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(rarity, 0, 0LL);
}


bool __fastcall ServantLimitMaster__TryGetEntity(
        ServantLimitMaster_o *this,
        ServantLimitEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB65BF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__, entity);
    byte_4AB65BF = 1;
  }
  PK = (Il2CppObject *)ServantLimitEntity__CreatePK(svtId, limitCount, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}