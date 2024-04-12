void __fastcall ServantExceedMaster___ctor(ServantExceedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2EDA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
    byte_42B2EDA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    156,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExceedEntity_o *__fastcall ServantExceedMaster__GetEntity(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2ED8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
    byte_42B2ED8 = 1;
  }
  PK = ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&exceedCount);
  return (ServantExceedEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__GetEntity__);
}


int32_t __fastcall ServantExceedMaster__GetFrameType(
        ServantExceedMaster_o *this,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedEntity_o *Entity; // x0

  if ( (byte_42B2EDC & 1) == 0 )
  {
    sub_B52984(&Rarity_TypeInfo);
    byte_42B2EDC = 1;
  }
  Entity = ServantExceedMaster__GetEntity(this, rarity, exceedCount, method);
  if ( Entity )
    return Entity->fields.frameType;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(rarity, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_30463188(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v8; // x21
  int32_t Rarity_30463380; // w19
  const MethodInfo *v10; // x3
  ServantExceedEntity_o *Entity; // x0

  v8 = this;
  if ( (byte_42B2EDD & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_B52984(&Rarity_TypeInfo);
    byte_42B2EDD = 1;
  }
  Rarity_30463380 = ServantExceedMaster__GetRarity_30463380(this, svtId, limitCount, *(const MethodInfo **)&exceedCount);
  Entity = ServantExceedMaster__GetEntity(v8, Rarity_30463380, exceedCount, v10);
  if ( Entity )
    return Entity->fields.frameType;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(Rarity_30463380, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExceedMaster__GetFrameType_30463684(
        ServantExceedMaster_o *this,
        int32_t *rarity,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        const MethodInfo *method)
{
  ServantExceedMaster_o *v10; // x21
  int32_t Rarity_30463380; // w0
  const MethodInfo *v12; // x3
  ServantExceedEntity_o *Entity; // x0
  int32_t v15; // w19

  v10 = this;
  if ( (byte_42B2EDE & 1) == 0 )
  {
    this = (ServantExceedMaster_o *)sub_B52984(&Rarity_TypeInfo);
    byte_42B2EDE = 1;
  }
  Rarity_30463380 = ServantExceedMaster__GetRarity_30463380(this, svtId, limitCount, *(const MethodInfo **)&limitCount);
  *rarity = Rarity_30463380;
  Entity = ServantExceedMaster__GetEntity(v10, Rarity_30463380, exceedCount, v12);
  if ( Entity )
    return Entity->fields.frameType;
  v15 = *rarity;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  return Rarity__getFrameTypeImage(v15, 0, 0LL);
}


int32_t __fastcall ServantExceedMaster__GetRarity(ServantExceedMaster_o *this, int32_t svtId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantExceedMaster__GetRarity_30463380(this, svtId, 0, v3);
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


int32_t __fastcall ServantExceedMaster__GetRarity_30463380(
        ServantExceedMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ServantLimitEntity_o *v8; // x0
  ServantLimitAddEntity_o *v10; // [xsp+0h] [xbp-30h] BYREF
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B2EDF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EDF = 1;
  }
  v10 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, 0LL) )
    goto LABEL_14;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___)) == 0LL )
  {
LABEL_17:
    sub_B52A5C(Instance, v7);
  }
  if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v10, svtId, limitCount, 0LL) )
  {
LABEL_14:
    v8 = entity;
    if ( !entity )
      return (int)v8;
LABEL_15:
    LODWORD(v8) = v8->fields.rarity;
    return (int)v8;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v10 || !Instance )
    goto LABEL_17;
  v8 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, v10->fields.battleCharaLimitCount, 0LL);
  entity = v8;
  if ( v8 )
    goto LABEL_15;
  return (int)v8;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantExceedMaster__TryGetEntity(
        ServantExceedMaster_o *this,
        ServantExceedEntity_o **entity,
        int32_t rarity,
        int32_t exceedCount,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2ED9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
    byte_42B2ED9 = 1;
  }
  PK = ServantExceedEntity__CreatePK(rarity, exceedCount, *(const MethodInfo **)&rarity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantExceedMaster__ServantExceedEntity__string__TryGetEntity__);
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

  if ( (byte_42B2EDB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2EDB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, limitCount, 0LL)) == 0LL )
  {
    sub_B52A5C(Instance, v10);
  }
  return ServantExceedMaster__GetEntity(this, *((_DWORD *)Instance + 6), exceedCount, v11);
}