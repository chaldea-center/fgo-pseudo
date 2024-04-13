void __fastcall ServantLimitMaster___ctor(ServantLimitMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAE48 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    7,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string___ctor__);
}


int32_t __fastcall ServantLimitMaster__GetAscensionAfterDialogId(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x2
  int32_t result; // w0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x2
  ServantLimitAddEntity_o *v19; // [xsp+8h] [xbp-28h] BYREF
  ServantLimitEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42EAE4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EAE4A = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)Instance, &entity, svtId, limitCount, v14) )
    goto LABEL_8;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_15;
  result = ServantLimitEntity__GetAscensionAfterDialogId(entity, -1, v15);
  if ( result == -1 )
  {
LABEL_8:
    v19 = 0LL;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)Instance, &v19, svtId, limitCount, v17) )
    {
      Instance = (DataManager_o *)v19;
      if ( v19 )
        return ServantLimitAddEntity__GetAscensionAfterDialogId(v19, -1, v18);
LABEL_15:
      sub_B5D69C(Instance, v13);
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

  if ( (byte_42EAE46 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__,
      svtId,
      limitCount,
      method);
    byte_42EAE46 = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__GetEntity__);
}


int32_t __fastcall ServantLimitMaster__GetRewardRarityType(
        ServantLimitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitEntity_o *Entity; // x0
  __int64 v8; // x1
  int32_t rarity; // w19

  if ( (byte_42EAE49 & 1) == 0 )
  {
    sub_B5D5C4(&Rarity_TypeInfo, svtId, limitCount, method);
    byte_42EAE49 = 1;
  }
  Entity = ServantLimitMaster__GetEntity(this, svtId, limitCount, method);
  if ( !Entity )
    sub_B5D69C(0LL, v8);
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

  if ( (byte_42EAE47 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&limitCount);
    byte_42EAE47 = 1;
  }
  PK = ServantLimitEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantLimitMaster__ServantLimitEntity__string__TryGetEntity__);
}