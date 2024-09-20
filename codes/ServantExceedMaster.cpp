void __fastcall ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B86D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
    byte_4A5B86D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    157,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *__fastcall ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B86B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
    byte_4A5B86B = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
}


int32_t __fastcall ServantExceedMaster__GetFrameType(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0

  if ( (byte_4A5B86F & 1) == 0 )
  {
    sub_1B885B0(&Rarity_TypeInfo);
    byte_4A5B86F = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, method);
  if ( Entity )
    return Entity->fields.frameType;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(rarity, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_39669416(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v8; // x21
  int32_t Rarity_39669584; // w19
  const MethodInfo *v10; // x3
  ServantExceedEntity_o *Entity; // x0

  v8 = this;
  if ( (byte_4A5B870 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1B885B0(&Rarity_TypeInfo);
    byte_4A5B870 = 1;
  }
  Rarity_39669584 = ServantExceedMaster__GetRarity_39669584(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v8, Rarity_39669584, exceedCount, v10);
  if ( Entity )
    return Entity->fields.frameType;
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(Rarity_39669584, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_39669872(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_39669584; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_4A5B871 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1B885B0(&Rarity_TypeInfo);
    byte_4A5B871 = 1;
  }
  Rarity_39669584 = ServantExceedMaster__GetRarity_39669584(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_39669584;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_39669584, exceedCount, v12);
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

  return ServantExceedMaster__GetRarity_39669584(this, svtId, 0, v3);
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


int32_t __fastcall ServantExceedMaster__GetRarity_39669584(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x3
  ServantLimitEntity_o *v11; // x0
  ServantLimitAddEntity_o *v13; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5B872 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B872 = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v8) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v7);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v13, svtId, limitCount, v9) )
  {
LABEL_14:
    v11 = entity;
    if ( !entity )
      return (int)v11;
LABEL_15:
    LODWORD(v11) = v11->fields.rarity;
    return (int)v11;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v13 || !Instance )
    goto LABEL_17;
  v11 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v13->fields.battleCharaLimitCount, v10);
  if ( v11 )
    goto LABEL_15;
  return (int)v11;
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

  if ( (byte_4A5B86C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
    byte_4A5B86C = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
}


ServantExceedEntity_o *__fastcall ServantExceedMaster__getEntity(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_4A5B86E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B86E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, v11)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v12);
}