void __fastcall ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A030 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__, method);
    byte_418A030 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    7,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
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
  const MethodInfo *v10; // x2
  int32_t result; // w0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  ServantLimitAddEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_418A032 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A032 = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v9) )
    goto LABEL_8;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, v10);
  if ( result == -1 )
  {
LABEL_8:
    v14 = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v14, svtId, limitCount, v12) )
    {
      Instance = (DataManager_o *)v14;
      if ( v14 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v14, -1, v13);
LABEL_15:
      sub_B2C434(Instance, v8);
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
  System_String_o *PK; // x1

  if ( (byte_418A02E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_418A02E = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
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

  if ( (byte_418A031 & 1) == 0 )
  {
    sub_B2C35C(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_418A031 = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_B2C434(0LL, v8);
  rarity = Entity->fields.rarity;
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
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
  System_String_o *PK; // x2

  if ( (byte_418A02F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__, entity);
    byte_418A02F = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}