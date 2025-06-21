BgmPlayArgs_o *__fastcall SubBgmPlayArgs__Clone(SubBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v8; // x0
  BgmPlayArgs_o *v9; // x21
  const MethodInfo *v10; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v14; // 0:x2.8

  if ( (byte_4B1BB99 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, method);
    sub_1BCAFF8(&SubBgmPlayArgs_TypeInfo, v3);
    byte_4B1BB99 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v8 = (BgmPlayArgs_o *)sub_1BCB244(SubBgmPlayArgs_TypeInfo);
  v14 = volume;
  v9 = v8;
  BgmPlayArgs___ctor(v8, BgmName_k__BackingField, v14, FadeTime_k__BackingField, StartTime_k__BackingField, v10);
  return v9;
}


SubBgmPlayArgs_array *__fastcall SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  void *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  void *v17; // x20
  unsigned int v18; // w23
  __int64 v19; // x22
  __int64 v20; // x8
  int32_t v21; // w21
  float v22; // s0
  System_String_o *monitor; // x22
  BgmPlayArgs_o *v24; // x0
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x4
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v37; // 0:x2.8

  if ( (byte_4B1BB9A & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_BgmMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v10);
    sub_1BCAFF8(&SubBgmPlayArgs_TypeInfo, v11);
    byte_4B1BB9A = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_object = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0LL);
  if ( !Master_object )
    goto LABEL_28;
  v16 = *((_DWORD *)Master_object + 6);
  v17 = Master_object;
  if ( v16 >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= v16 )
LABEL_29:
        sub_1BCB25C(Master_object, v14, v15);
      v19 = *((_QWORD *)v17 + (int)v18 + 4);
      if ( !v19 )
        goto LABEL_28;
      v20 = *(_QWORD *)(v19 + 24);
      if ( v20 )
      {
        if ( !(_DWORD)v20 )
          goto LABEL_29;
        v21 = *(_DWORD *)(v19 + 32);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v21,
                                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v19 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_object = BgmManager_TypeInfo;
            }
            v22 = **((float **)Master_object + 23);
          }
          else
          {
            v22 = (float)*(int *)(v19 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_28;
          monitor = (System_String_o *)entity[1].monitor;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0LL;
          System_Nullable_float____ctor(
            p_volume,
            v22,
            (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
          v24 = (BgmPlayArgs_o *)sub_1BCB244(SubBgmPlayArgs_TypeInfo);
          v37 = volume;
          v25 = (Il2CppObject *)v24;
          BgmPlayArgs___ctor(v24, monitor, v37, 0.0, 0LL, v26);
          if ( !v12 )
            goto LABEL_28;
          items = v12->fields._items;
          v30 = Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v25,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v25;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v25, v27, v28);
          }
        }
      }
      v16 = *((_DWORD *)v17 + 6);
    }
    while ( (int)++v18 < v16 );
  }
  if ( !v12 )
LABEL_28:
    sub_1BCB254(Master_object, v14);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v12,
                                   (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}