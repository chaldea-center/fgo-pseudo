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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v12; // x0
  BgmPlayArgs_o *v13; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v17; // 0:x2.8

  if ( (byte_42E7B14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SubBgmPlayArgs_TypeInfo, v5, v6, v7);
    byte_42E7B14 = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v12 = (BgmPlayArgs_o *)sub_B5D694(SubBgmPlayArgs_TypeInfo);
  v17 = volume;
  v13 = v12;
  BgmPlayArgs___ctor(v12, BgmName_k__BackingField, v17, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v13;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  int v35; // w8
  void *v36; // x20
  unsigned int v37; // w23
  __int64 v38; // x22
  __int64 v39; // x8
  int32_t v40; // w21
  float v41; // s0
  System_String_o *age; // x22
  BgmPlayArgs_o *v43; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x21
  __int64 v46; // x0
  System_Nullable_float__o volume; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v50; // 0:x2.8

  if ( (byte_42E7B15 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v26, v27, v28);
    sub_B5D5C4(&SubBgmPlayArgs_TypeInfo, v29, v30, v31);
    byte_42E7B15 = 1;
  }
  entity = 0LL;
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_WarQuestSelectionMaster = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  v35 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v36 = Master_WarQuestSelectionMaster;
  if ( v35 >= 1 )
  {
    v37 = 0;
    do
    {
      if ( v37 >= v35 )
      {
LABEL_28:
        v46 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v46, 0LL);
      }
      v38 = *((_QWORD *)v36 + (int)v37 + 4);
      if ( !v38 )
        goto LABEL_27;
      v39 = *(_QWORD *)(v38 + 24);
      if ( v39 )
      {
        if ( !(_DWORD)v39 )
          goto LABEL_28;
        v40 = *(_DWORD *)(v38 + 32);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_27;
        Master_WarQuestSelectionMaster = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   v40,
                                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( *(int *)(v38 + 24) <= 1 )
          {
            Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_WarQuestSelectionMaster = BgmManager_TypeInfo;
            }
            v41 = **((float **)Master_WarQuestSelectionMaster + 23);
          }
          else
          {
            v41 = (float)*(int *)(v38 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_27;
          age = entity->fields.age;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            v41,
            (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
          v43 = (BgmPlayArgs_o *)sub_B5D694(SubBgmPlayArgs_TypeInfo);
          v50 = volume;
          v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
          BgmPlayArgs___ctor(v43, age, v50, 0.0, 0LL, 0LL);
          if ( !v32 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v32,
            v44,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
        }
      }
      v35 = *((_DWORD *)v36 + 6);
    }
    while ( (int)++v37 < v35 );
  }
  if ( !v32 )
LABEL_27:
    sub_B5D69C(Master_WarQuestSelectionMaster, v34);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}