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

  if ( (byte_4C26930 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&SubBgmPlayArgs_TypeInfo);
    byte_4C26930 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v8 = (BgmPlayArgs_o *)sub_1C2D6DC(SubBgmPlayArgs_TypeInfo);
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
  __int64 v5; // x1
  __int64 v6; // x2
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w23
  __int64 v10; // x22
  __int64 v11; // x8
  int32_t v12; // w21
  float v13; // s0
  System_String_o *monitor; // x22
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v16; // x0
  System_Nullable_float__o v17; // x2
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C26931 & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&SubBgmPlayArgs_TypeInfo);
    byte_4C26931 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_object = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0);
  if ( !Master_object )
    goto LABEL_28;
  v7 = *((_DWORD *)Master_object + 6);
  v8 = Master_object;
  if ( v7 >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= v7 )
LABEL_29:
        sub_1C2D6F4(Master_object, v5, v6);
      v10 = *((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        goto LABEL_28;
      v11 = *(_QWORD *)(v10 + 24);
      if ( v11 )
      {
        if ( !(_DWORD)v11 )
          goto LABEL_29;
        v12 = *(_DWORD *)(v10 + 32);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v12,
                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v10 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_object = BgmManager_TypeInfo;
            }
            v13 = **((float **)Master_object + 23);
          }
          else
          {
            v13 = (float)*(int *)(v10 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_28;
          monitor = (System_String_o *)entity[1].monitor;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0;
          System_Nullable_float____ctor(
            p_volume,
            v13,
            (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
          v16 = (BgmPlayArgs_o *)sub_1C2D6DC(SubBgmPlayArgs_TypeInfo);
          v17 = volume;
          v18 = (Il2CppObject *)v16;
          BgmPlayArgs___ctor(v16, monitor, v17, 0.0, 0, v19);
          if ( !v3 )
            goto LABEL_28;
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v18,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v18;
            sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
    }
    while ( (int)++v9 < v7 );
  }
  if ( !v3 )
LABEL_28:
    sub_1C2D6EC(Master_object, v5);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}