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

  if ( (byte_4D2BE90 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&SubBgmPlayArgs_TypeInfo);
    byte_4D2BE90 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v8 = (BgmPlayArgs_o *)sub_1C942E4(SubBgmPlayArgs_TypeInfo);
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
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w23
  __int64 v9; // x22
  __int64 v10; // x8
  int32_t v11; // w21
  float v12; // s0
  System_String_o *monitor; // x22
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v15; // x0
  System_Nullable_float__o v16; // x2
  Il2CppObject *v17; // x21
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2BE91 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
    sub_1C94098(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&SubBgmPlayArgs_TypeInfo);
    byte_4D2BE91 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
  Master_object = EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(rawValue, 0x2Cu, 0);
  if ( !Master_object )
    goto LABEL_28;
  v6 = *((_DWORD *)Master_object + 6);
  v7 = Master_object;
  if ( v6 >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= v6 )
LABEL_29:
        sub_1C942F8(Master_object);
      v9 = *((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        goto LABEL_28;
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
      {
        if ( !(_DWORD)v10 )
          goto LABEL_29;
        v11 = *(_DWORD *)(v9 + 32);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v11,
                                  (const MethodInfo_345B50C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v9 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              Master_object = BgmManager_TypeInfo;
            }
            v12 = **((float **)Master_object + 23);
          }
          else
          {
            v12 = (float)*(int *)(v9 + 36) / 1000.0;
          }
          if ( !entity )
            goto LABEL_28;
          monitor = (System_String_o *)entity[1].monitor;
          p_volume = (System_Nullable_float__o)&volume;
          volume = 0;
          System_Nullable_float____ctor(
            p_volume,
            v12,
            (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
          v15 = (BgmPlayArgs_o *)sub_1C942E4(SubBgmPlayArgs_TypeInfo);
          v16 = volume;
          v17 = (Il2CppObject *)v15;
          BgmPlayArgs___ctor(v15, monitor, v16, 0.0, 0, v18);
          if ( !v3 )
            goto LABEL_28;
          items = v3->fields._items;
          v26 = Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v17,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v17;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v17, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      v6 = *((_DWORD *)v7 + 6);
    }
    while ( (int)++v8 < v6 );
  }
  if ( !v3 )
LABEL_28:
    sub_1C942F0(Master_object, v5);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}