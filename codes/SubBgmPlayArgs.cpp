BgmPlayArgs_o *__fastcall SubBgmPlayArgs__Clone(SubBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BgmPlayArgs_o *v13; // x0
  BgmPlayArgs_o *v14; // x21
  const MethodInfo *v15; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v19; // 0:x2.8

  if ( (byte_4B1581F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, method, v2);
    sub_1BCA7E0(&SubBgmPlayArgs_TypeInfo, v4, v5);
    byte_4B1581F = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v13 = (BgmPlayArgs_o *)sub_1BCAA2C(SubBgmPlayArgs_TypeInfo, v10, v11, v12);
  v19 = volume;
  v14 = v13;
  BgmPlayArgs___ctor(v13, BgmName_k__BackingField, v19, FadeTime_k__BackingField, StartTime_k__BackingField, v15);
  return v14;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x19
  void *Master_object; // x0
  __int64 v25; // x1
  int v26; // w8
  void *v27; // x20
  unsigned int v28; // w23
  __int64 v29; // x22
  __int64 v30; // x8
  int32_t v31; // w21
  float v32; // s0
  System_String_o *monitor; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  BgmPlayArgs_o *v37; // x0
  Il2CppObject *v38; // x21
  const MethodInfo *v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v54; // 0:x2.8

  if ( (byte_4B15820 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v19, v20);
    sub_1BCA7E0(&SubBgmPlayArgs_TypeInfo, v21, v22);
    byte_4B15820 = 1;
  }
  entity = 0LL;
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_object = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !Master_object )
    goto LABEL_28;
  v26 = *((_DWORD *)Master_object + 6);
  v27 = Master_object;
  if ( v26 >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v28 >= v26 )
LABEL_29:
        sub_1BCAA44(Master_object, v25);
      v29 = *((_QWORD *)v27 + (int)v28 + 4);
      if ( !v29 )
        goto LABEL_28;
      v30 = *(_QWORD *)(v29 + 24);
      if ( v30 )
      {
        if ( !(_DWORD)v30 )
          goto LABEL_29;
        v31 = *(_DWORD *)(v29 + 32);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v31,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v29 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v25);
              Master_object = BgmManager_TypeInfo;
            }
            v32 = **((float **)Master_object + 23);
          }
          else
          {
            v32 = (float)*(int *)(v29 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_28;
          monitor = (System_String_o *)entity[1].monitor;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            v32,
            (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
          v37 = (BgmPlayArgs_o *)sub_1BCAA2C(SubBgmPlayArgs_TypeInfo, v34, v35, v36);
          v54 = volume;
          v38 = (Il2CppObject *)v37;
          BgmPlayArgs___ctor(v37, monitor, v54, 0.0, 0LL, v39);
          if ( !v23 )
            goto LABEL_28;
          items = v23->fields._items;
          v47 = Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              v38,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v38;
            sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v38, v40, v41, v42, v43, v44, v45);
          }
        }
      }
      v26 = *((_DWORD *)v27 + 6);
    }
    while ( (int)++v28 < v26 );
  }
  if ( !v23 )
LABEL_28:
    sub_1BCAA3C(Master_object, v25);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v23,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}