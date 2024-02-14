void __fastcall SubBgmPlayArgs___ctor(
        SubBgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  BgmPlayArgs___ctor((BgmPlayArgs_o *)this, bgmName, volume, fadeTime, startTime, 0LL);
}


BgmPlayArgs_o *__fastcall SubBgmPlayArgs__Clone(SubBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  BgmPlayArgs_o *v10; // x0
  BgmPlayArgs_o *v11; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v15; // 0:x2.8

  if ( (byte_42135D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, method);
    sub_B0D8A4(&SubBgmPlayArgs_TypeInfo, v3);
    byte_42135D1 = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v10 = (BgmPlayArgs_o *)sub_B0D974(SubBgmPlayArgs_TypeInfo, v8, v9);
  v15 = volume;
  v11 = v10;
  BgmPlayArgs___ctor(v10, BgmName_k__BackingField, v15, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v11;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  void *Master_WarQuestSelectionMaster; // x0
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w23
  __int64 v18; // x22
  __int64 v19; // x8
  int32_t v20; // w21
  float v21; // s0
  System_String_o *age; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  BgmPlayArgs_o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x21
  __int64 v28; // x0
  System_Nullable_float__o volume; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v32; // 0:x2.8

  if ( (byte_42135D2 & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v11);
    sub_B0D8A4(&SubBgmPlayArgs_TypeInfo, v12);
    byte_42135D2 = 1;
  }
  entity = 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_WarQuestSelectionMaster = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  v15 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v16 = Master_WarQuestSelectionMaster;
  if ( v15 >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= v15 )
      {
LABEL_28:
        v28 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v28, 0LL);
      }
      v18 = *((_QWORD *)v16 + (int)v17 + 4);
      if ( !v18 )
        goto LABEL_27;
      v19 = *(_QWORD *)(v18 + 24);
      if ( v19 )
      {
        if ( !(_DWORD)v19 )
          goto LABEL_28;
        v20 = *(_DWORD *)(v18 + 32);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_27;
        Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   v20,
                                                   (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( *(int *)(v18 + 24) <= 1 )
          {
            Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            }
            v21 = **((float **)Master_WarQuestSelectionMaster + 23);
          }
          else
          {
            v21 = (float)*(int *)(v18 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_27;
          age = entity->fields.age;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            v21,
            (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
          v25 = (BgmPlayArgs_o *)sub_B0D974(SubBgmPlayArgs_TypeInfo, v23, v24);
          v32 = volume;
          v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
          BgmPlayArgs___ctor(v25, age, v32, 0.0, 0LL, 0LL);
          if ( !v13 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            v26,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
        }
      }
      v15 = *((_DWORD *)v16 + 6);
    }
    while ( (int)++v17 < v15 );
  }
  if ( !v13 )
LABEL_27:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}