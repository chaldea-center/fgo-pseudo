void __fastcall ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBD3F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__, method);
    byte_40FBD3F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    100,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t __fastcall ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD41 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, name);
    byte_40FBD41 = 1;
  }
  result = 0LL;
  if ( !DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
          (DataMasterBase_o *)this,
          &result,
          name,
          (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___) )
    return -1LL;
  if ( !result )
    sub_B170D4();
  return *(_QWORD *)&result->fields.type;
}


int64_t __fastcall ConstantLongMaster__GetValue_28461356(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD42 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, name);
    byte_40FBD42 = 1;
  }
  result = 0LL;
  if ( DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
         (DataMasterBase_o *)this,
         &result,
         name,
         (const MethodInfo_18C375C *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___) )
  {
    if ( !result )
      sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD40 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantLongMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FBD40 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         name,
         (const MethodInfo_266F830 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__) )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.shortCutBannerId;
LABEL_10:
    sub_B170D4();
  }
  return -1LL;
}