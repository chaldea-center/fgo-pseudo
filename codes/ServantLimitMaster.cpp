void __fastcall ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC80C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__, method);
    byte_40FC80C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    7,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitMaster__GetAscensionAfterDialogId(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  int32_t result; // w0
  WebViewManager_o *v12; // x0
  ServantLimitAddMaster_o *v13; // x0
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  ServantLimitAddEntity_o *v16; // [xsp+8h] [xbp-28h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FC80E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC80E = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, svtId, limitCount, v9) )
    goto LABEL_8;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, v10);
  if ( result == -1 )
  {
LABEL_8:
    v16 = 0LL;
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v12 )
      goto LABEL_15;
    v13 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v12,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !v13 )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity(v13, &v16, svtId, limitCount, v14) )
    {
      if ( v16 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v16, -1, v15);
LABEL_15:
      sub_B170D4();
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

  if ( (byte_40FC80A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__, *(_QWORD *)&svtId);
    byte_40FC80A = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitMaster__GetRewardRarityType(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitEntity_o *Entity; // x0
  int32_t rarity; // w19

  if ( (byte_40FC80D & 1) == 0 )
  {
    sub_B16FFC(&Rarity_TypeInfo, *(_QWORD *)&svtId);
    byte_40FC80D = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_B170D4();
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

  if ( (byte_40FC80B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__, entity);
    byte_40FC80B = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}