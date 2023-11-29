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
  __int64 v10; // x3
  __int64 v11; // x4
  BgmPlayArgs_o *v12; // x0
  BgmPlayArgs_o *v13; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v17; // 0:x2.8

  if ( (byte_40F7C1C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, method);
    sub_B16FFC(&SubBgmPlayArgs_TypeInfo, v3);
    byte_40F7C1C = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v12 = (BgmPlayArgs_o *)sub_B170CC(SubBgmPlayArgs_TypeInfo, v8, v9, v10, v11);
  v17 = volume;
  v13 = v12;
  BgmPlayArgs___ctor(v12, BgmName_k__BackingField, v17, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v13;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Int32_array_array *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int max_length; // w8
  System_Int32_array_array *v20; // x20
  unsigned int v21; // w23
  System_Int32_array *v22; // x22
  __int64 v23; // x8
  int32_t v24; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  float DEFAULT_VOLUME; // s0
  BgmManager_c *v27; // x0
  System_String_o *age; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  BgmPlayArgs_o *v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v39; // 0:x2.8

  if ( (byte_40F7C1D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_BgmMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo, v12);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v13);
    sub_B16FFC(&SubBgmPlayArgs_TypeInfo, v14);
    byte_40F7C1D = 1;
  }
  entity = 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  v16 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !v16 )
    goto LABEL_27;
  max_length = v16->max_length;
  v20 = v16;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
      {
LABEL_28:
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v22 = v20->m_Items[v21];
      if ( !v22 )
        goto LABEL_27;
      v23 = *(_QWORD *)&v22->max_length;
      if ( v23 )
      {
        if ( !(_DWORD)v23 )
          goto LABEL_28;
        v24 = v22->m_Items[1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_27;
        v16 = (System_Int32_array_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                            Master_WarQuestSelectionMaster,
                                            &entity,
                                            v24,
                                            (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
          if ( (int)v22->max_length <= 1 )
          {
            v27 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v27 = BgmManager_TypeInfo;
            }
            DEFAULT_VOLUME = v27->static_fields->DEFAULT_VOLUME;
          }
          else
          {
            DEFAULT_VOLUME = (float)v22->m_Items[2] / 1000.0;
          }
          if ( !entity )
            goto LABEL_27;
          age = entity->fields.age;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            DEFAULT_VOLUME,
            (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
          v33 = (BgmPlayArgs_o *)sub_B170CC(SubBgmPlayArgs_TypeInfo, v29, v30, v31, v32);
          v39 = volume;
          v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
          BgmPlayArgs___ctor(v33, age, v39, 0.0, 0LL, 0LL);
          if ( !v15 )
            goto LABEL_27;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v34,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
        }
      }
      max_length = v20->max_length;
    }
    while ( (int)++v21 < max_length );
  }
  if ( !v15 )
LABEL_27:
    sub_B170D4();
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}