void __fastcall ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CDFD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__, method);
    byte_4B1CDFD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *__fastcall ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CDFE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__,
      *(_QWORD *)&rarity);
    byte_4B1CDFE = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0
  __int64 v10; // x8

  if ( (byte_4B1CDF8 & 1) == 0 )
  {
    sub_1BCAFF8(&Rarity_TypeInfo, *(_QWORD *)&rarity);
    byte_4B1CDF8 = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, (const MethodInfo *)isGrandServant);
  if ( Entity )
  {
    v10 = 40LL;
    if ( isGrandServant )
      v10 = 56LL;
    return *(_DWORD *)((char *)&Entity->klass + v10);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(rarity, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameTypeFixRarity(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t exceedCount,
        int32_t actualRarity,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0
  __int64 v11; // x8

  if ( (byte_4B1CDFA & 1) == 0 )
  {
    sub_1BCAFF8(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_4B1CDFA = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, actualRarity, exceedCount, *(const MethodInfo **)&actualRarity);
  if ( Entity )
  {
    v11 = 40LL;
    if ( isGrandServant )
      v11 = 56LL;
    return *(_DWORD *)((char *)&Entity->klass + v11);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(actualRarity, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_41831384(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isGrandServant,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x22
  int32_t Rarity_41831584; // w20
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  __int64 v14; // x8

  v10 = this;
  if ( (byte_4B1CDF9 & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1BCAFF8(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_4B1CDF9 = 1;
  }
  Rarity_41831584 = ServantExceedMaster__GetRarity_41831584(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_41831584, exceedCount, v12);
  if ( Entity )
  {
    v14 = 40LL;
    if ( isGrandServant )
      v14 = 56LL;
    return *(_DWORD *)((char *)&Entity->klass + v14);
  }
  else
  {
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    return Rarity__getFrameTypeImage(Rarity_41831584, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_41832040(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_41831584; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_4B1CDFB & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_1BCAFF8(&Rarity_TypeInfo, rarity);
    byte_4B1CDFB = 1;
  }
  Rarity_41831584 = ServantExceedMaster__GetRarity_41831584(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_41831584;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_41831584, exceedCount, v12);
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

  return ServantExceedMaster__GetRarity_41831584(this, svtId, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetRarityIcon(
        ServantExceedMaster_o *this,
        int32_t actualRarity,
        int32_t exceedCount,
        int32_t defValue,
        bool isGrandServant,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantExceedEntity_o *Entity; // x0
  __int64 v9; // x8

  v7 = defValue;
  Entity = ServantExceedMaster__GetEntity(this, actualRarity, exceedCount, *(const MethodInfo **)&defValue);
  if ( Entity )
  {
    v9 = 44LL;
    if ( isGrandServant )
      v9 = 60LL;
    return *(_DWORD *)((char *)&Entity->klass + v9);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetRarity_41831584(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x3
  ServantLimitEntity_o *v13; // x0
  ServantLimitAddEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1CDFC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1CDFC = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v10) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
LABEL_17:
    sub_1BCB254(Instance, v9);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v15, svtId, limitCount, v11) )
  {
LABEL_14:
    v13 = entity;
    if ( !entity )
      return (int)v13;
LABEL_15:
    LODWORD(v13) = v13->fields.rarity;
    return (int)v13;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v15 || !Instance )
    goto LABEL_17;
  v13 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v15->fields.battleCharaLimitCount, v12);
  if ( v13 )
    goto LABEL_15;
  return (int)v13;
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

  if ( (byte_4B1CDFF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__, entity);
    byte_4B1CDFF = 1;
  }
  PK = (Il2CppObject *)ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
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
  const MethodInfo *v13; // x3

  if ( (byte_4B1CDF7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantLimitMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B1CDF7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, v12)) == 0LL )
  {
    sub_1BCB254(Instance, v11);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v13);
}