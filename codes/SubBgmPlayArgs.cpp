BgmPlayArgs_o *SubBgmPlayArgs__Clone(SubBgmPlayArgs_o *this, const MethodInfo *method)
{
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  System_Nullable_float__o p_volume; // x0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v8; // x0
  System_Nullable_float__o v9; // x2
  BgmPlayArgs_o *v10; // x21
  const MethodInfo *v11; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C425F7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&SubBgmPlayArgs_TypeInfo);
    byte_4C425F7 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v8 = (BgmPlayArgs_o *)sub_1C372A4(SubBgmPlayArgs_TypeInfo);
  v9 = volume;
  v10 = v8;
  BgmPlayArgs___ctor(v8, BgmName_k__BackingField, v9, FadeTime_k__BackingField, StartTime_k__BackingField, v11);
  return v10;
}


SubBgmPlayArgs_array *SubBgmPlayArgs__ConvertFromEntityScript(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  void *Master_object; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w23
  __int64 v8; // x22
  __int64 v9; // x8
  int32_t v10; // w21
  float v11; // s0
  System_String_o *monitor; // x22
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v14; // x0
  System_Nullable_float__o v15; // x2
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C425F8 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&SubBgmPlayArgs_TypeInfo);
    byte_4C425F8 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_object = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0);
  if ( !Master_object )
    goto LABEL_28;
  v5 = *((_DWORD *)Master_object + 6);
  v6 = Master_object;
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= v5 )
LABEL_29:
        sub_1C372BC(Master_object);
      v8 = *((_QWORD *)v6 + (int)v7 + 4);
      if ( !v8 )
        goto LABEL_28;
      v9 = *(_QWORD *)(v8 + 24);
      if ( v9 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_29;
        v10 = *(_DWORD *)(v8 + 32);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v10,
                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v8 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_object = BgmManager_TypeInfo;
            }
            v11 = **((float **)Master_object + 23);
          }
          else
          {
            v11 = (float)*(int *)(v8 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_28;
          monitor = (System_String_o *)entity[1].monitor;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0;
          System_Nullable_float____ctor(
            p_volume,
            v11,
            (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
          v14 = (BgmPlayArgs_o *)sub_1C372A4(SubBgmPlayArgs_TypeInfo);
          v15 = volume;
          v16 = (Il2CppObject *)v14;
          BgmPlayArgs___ctor(v14, monitor, v15, 0.0, 0, v17);
          if ( !v3 )
            goto LABEL_28;
          items = v3->fields._items;
          v21 = Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v16,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v16;
            sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
          }
        }
      }
      v5 = *((_DWORD *)v6 + 6);
    }
    while ( (int)++v7 < v5 );
  }
  if ( !v3 )
LABEL_28:
    sub_1C372B4(Master_object);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}