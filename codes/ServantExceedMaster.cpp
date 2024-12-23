void __fastcall ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67308 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__, method);
    byte_4B67308 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *__fastcall ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67306 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__,
      *(_QWORD *)&rarity);
    byte_4B67306 = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0

  if ( (byte_4B6730A & 1) == 0 )
  {
    sub_1BE4ACC(&Rarity_TypeInfo, *(_QWORD *)&rarity);
    byte_4B6730A = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, method);
  if ( Entity )
    return Entity->fields.frameType;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(rarity, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_40616324(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v8; // x21
  int32_t Rarity_40616492; // w19
  const MethodInfo *v10; // x3
  ServantExceedEntity_o *Entity; // x0

  v8 = this;
  if ( (byte_4B6730B & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1BE4ACC(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_4B6730B = 1;
  }
  Rarity_40616492 = ServantExceedMaster__GetRarity_40616492(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v8, Rarity_40616492, exceedCount, v10);
  if ( Entity )
    return Entity->fields.frameType;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(Rarity_40616492, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_40616792(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_40616492; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_4B6730C & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1BE4ACC(&Rarity_TypeInfo, rarity);
    byte_4B6730C = 1;
  }
  Rarity_40616492 = ServantExceedMaster__GetRarity_40616492(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_40616492;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_40616492, exceedCount, v12);
  if ( Entity )
    return Entity->fields.frameType;
  v15 = *rarity;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(v15, 0, 0LL);
}


int32_t __fastcall ServantExceedMaster__GetRarity(ServantExceedMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantExceedMaster__GetRarity_40616492(this, svtId, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetRarityIcon(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        int32_t defValue,
        const MethodInfo *method)
{
  int32_t v5; // w19
  ServantExceedEntity_o *Entity; // x0

  v5 = defValue;
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, *(const MethodInfo **)&defValue);
  if ( Entity )
    return Entity->fields.rarityIcon;
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetRarity_40616492(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  ServantLimitEntity_o *v10; // x0
  ServantLimitAddEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B6730D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B6730D = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, 0LL) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BE4D28(Instance, v9);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v12, svtId, limitCount, 0LL) )
  {
LABEL_14:
    v10 = entity;
    if ( !entity )
      return (int)v10;
LABEL_15:
    LODWORD(v10) = v10->fields.rarity;
    return (int)v10;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v12 || !Instance )
    goto LABEL_17;
  v10 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v12->fields.battleCharaLimitCount, 0LL);
  if ( v10 )
    goto LABEL_15;
  return (int)v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantExceedMaster__TryGetEntity(
        ServantExceedMaster_o *this,
        ServantExceedEntity_o **entity,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67307 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__, entity);
    byte_4B67307 = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *__fastcall ServantExceedMaster__getEntity(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4B67309 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B67309 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_1BE4D28(Instance, v11);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v12);
}