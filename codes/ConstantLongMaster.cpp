void __fastcall ConstantLongMaster___ctor(ConstantLongMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA731 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA731 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    101,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string___ctor__);
}


int64_t __fastcall ConstantLongMaster__GetValue(
        ConstantLongMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v7; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA733 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, (_DWORD)name, (_DWORD)method, v3);
    byte_42EA733 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( !EntityFromId_ServantVoiceEntity )
    return -1LL;
  if ( !result )
    sub_B5D69C(EntityFromId_ServantVoiceEntity, v7);
  return *(_QWORD *)&result->fields.type;
}


int64_t __fastcall ConstantLongMaster__GetValue_28723108(
        ConstantLongMaster_o *this,
        System_String_o *name,
        int64_t def,
        const MethodInfo *method)
{
  int64_t v4; // x19
  _BOOL8 EntityFromId_ServantVoiceEntity; // x0
  __int64 v8; // x1
  ServantVoiceEntity_o *result; // [xsp+8h] [xbp-28h] BYREF

  v4 = def;
  if ( (byte_42EA734 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___, (_DWORD)name, def, method);
    byte_42EA734 = 1;
  }
  result = 0LL;
  EntityFromId_ServantVoiceEntity = DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
                                      (DataMasterBase_o *)this,
                                      &result,
                                      name,
                                      (const MethodInfo_1AE4724 *)Method_DataMasterBase_TryGetEntityFromId_ConstantLongEntity___);
  if ( EntityFromId_ServantVoiceEntity )
  {
    if ( !result )
      sub_B5D69C(EntityFromId_ServantVoiceEntity, v8);
    return *(_QWORD *)&result->fields.type;
  }
  return v4;
}


float __fastcall ConstantLongMaster__getRateValue(System_String_o *name, const MethodInfo *method)
{
  return (float)ConstantLongMaster__getValue(name, method) / 1000.0;
}


int64_t __fastcall ConstantLongMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA732 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantLongMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA732 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantLongMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Instance,
                                &entity,
                                name,
                                (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ConstantLongMaster__ConstantLongEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.shortCutBannerId;
LABEL_10:
    sub_B5D69C(Instance, v12);
  }
  return -1LL;
}