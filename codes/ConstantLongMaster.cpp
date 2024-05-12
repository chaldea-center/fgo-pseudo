void __fastcall ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CC95 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
    byte_438CC95 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    101,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t __fastcall ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v6; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438CC97 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
    byte_438CC97 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1D188C8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( !EntityFromId_ServantVoiceEntity )
    return -1LL;
  if ( !result )
    sub_B7769C(EntityFromId_ServantVoiceEntity, v6);
  return *(_QWORD *)&result->fields.type;
}


int64_t __fastcall ConstantLongMaster__GetValue_28438008(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438CC98 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
    byte_438CC98 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1D188C8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B7769C(EntityFromId_ServantVoiceEntity, v8);
    return *(_QWORD *)&result->fields.type;
  }
  return def;
}


float __fastcall ConstantLongMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantLongMaster__getValue(name, method) / 1000.0;
}


int64_t __fastcall ConstantLongMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438CC96 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantLongMaster___);
    sub_B775C4(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438CC96 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance,
                                &entity,
                                name,
                                (const MethodInfo_21FBD3C *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.shortCutBannerId;
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return -1LL;
}