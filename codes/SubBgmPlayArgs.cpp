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
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v7; // x0
  BgmPlayArgs_o *v8; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v12; // 0:x2.8

  if ( (byte_4350E25 & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&SubBgmPlayArgs_TypeInfo);
    byte_4350E25 = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v7 = (BgmPlayArgs_o *)sub_B70764(SubBgmPlayArgs_TypeInfo);
  v12 = volume;
  v8 = v7;
  BgmPlayArgs___ctor(v7, BgmName_k__BackingField, v12, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v8;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w23
  __int64 v9; // x22
  __int64 v10; // x8
  int32_t v11; // w21
  float v12; // s0
  System_String_o *age; // x22
  BgmPlayArgs_o *v14; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x21
  __int64 v17; // x0
  System_Nullable_float__o volume; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v21; // 0:x2.8

  if ( (byte_4350E26 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
    sub_B70694(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&SubBgmPlayArgs_TypeInfo);
    byte_4350E26 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_WarQuestSelectionMaster = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  v6 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v7 = Master_WarQuestSelectionMaster;
  if ( v6 >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= v6 )
      {
LABEL_28:
        v17 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v17, 0LL);
      }
      v9 = *((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        goto LABEL_27;
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
      {
        if ( !(_DWORD)v10 )
          goto LABEL_28;
        v11 = *(_DWORD *)(v9 + 32);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_27;
        Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   v11,
                                                   (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( *(int *)(v9 + 24) <= 1 )
          {
            Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            }
            v12 = **((float **)Master_WarQuestSelectionMaster + 23);
          }
          else
          {
            v12 = (float)*(int *)(v9 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_27;
          age = entity->fields.age;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            v12,
            (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
          v14 = (BgmPlayArgs_o *)sub_B70764(SubBgmPlayArgs_TypeInfo);
          v21 = volume;
          v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)v14;
          BgmPlayArgs___ctor(v14, age, v21, 0.0, 0LL, 0LL);
          if ( !v3 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v15,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
        }
      }
      v6 = *((_DWORD *)v7 + 6);
    }
    while ( (int)++v8 < v6 );
  }
  if ( !v3 )
LABEL_27:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}