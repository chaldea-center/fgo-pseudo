BgmPlayArgs_o *SubBgmPlayArgs__Clone(SubBgmPlayArgs_o *this, const MethodInfo *method)
{
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v7; // x21
  const MethodInfo *v8; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FE10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_596FE10 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    Volume_k__BackingField,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v7 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
  BgmPlayArgs___ctor(v7, BgmName_k__BackingField, volume, FadeTime_k__BackingField, StartTime_k__BackingField, v8);
  return v7;
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
  BgmPlayArgs_o *v14; // x21
  const MethodInfo *v15; // x4
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596FE11 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubBgmPlayArgs__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_596FE11 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SubBgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SubBgmPlayArgs___ctor__);
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
        sub_2213CE4(Master_object);
      v9 = *((_QWORD *)v7 + (int)v8 + 4);
      if ( !v9 )
        goto LABEL_28;
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
      {
        if ( !(_DWORD)v10 )
          goto LABEL_29;
        v11 = *(_DWORD *)(v9 + 32);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  &entity,
                                  v11,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( *(int *)(v9 + 24) <= 1 )
          {
            Master_object = BgmManager_TypeInfo;
            if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
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
          volume = 0;
          System_Nullable_float____ctor(
            (System_Nullable_float__o)&volume,
            v12,
            (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
          v14 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
          BgmPlayArgs___ctor(v14, monitor, volume, 0.0, 0, v15);
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
              (Il2CppObject *)v14,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v14;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v14, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      v6 = *((_DWORD *)v7 + 6);
    }
    while ( (int)++v8 < v6 );
  }
  if ( !v3 )
LABEL_28:
    sub_2213CDC(Master_object, v5);
  return (SubBgmPlayArgs_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SubBgmPlayArgs__ToArray__);
}