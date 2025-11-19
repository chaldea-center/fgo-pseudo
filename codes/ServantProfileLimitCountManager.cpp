void ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CB7723 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_6669/*"Fgo_20191029"*/);
    byte_4CB7723 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6669/*"Fgo_20191029"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6669/*"Fgo_20191029"*/,
    v1,
    v2);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->limitCountList, (int32_t)v3, v5, v6);
}


void ServantProfileLimitCountManager___ctor(ServantProfileLimitCountManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CB771C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    byte_4CB771C = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C6BC60(v2, v1);
  }
  size = limitCountList->fields._size;
  v5 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v3; // x0

  if ( (byte_4CB771A & 1) == 0 )
  {
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    byte_4CB771A = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v3 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v3);
}


int32_t ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ServantProfileLimitCountManager_c *v6; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v8; // x21
  Il2CppObject *v9; // x0

  if ( (byte_4CB771E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C6BA08(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C6BA08(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__);
    sub_1C6BA08(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_4CB771E = 1;
  }
  v3 = sub_1C6BC54(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = servantId;
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v6 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v6->static_fields->limitCountList;
  v8 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0);
  if ( !limitCountList )
LABEL_10:
    sub_1C6BC60(v4, v5);
  v9 = System_Collections_Generic_List_object___Find(
         limitCountList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v9 )
    LODWORD(v9) = HIDWORD(v9[1].klass);
  return (int)v9;
}


System_String_o *ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CB7719 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&DatFileName_TypeInfo);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB7719 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0);
  return System_String__Concat_64005056(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


void ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0

  if ( (byte_4CB771B & 1) == 0 )
  {
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    byte_4CB771B = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v1);
}


bool ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  ServantProfileLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v6; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryReader_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  ServantProfileLimitCountManager_c *v12; // x0
  int v13; // w22
  char v14; // w21
  ServantProfileLimitCountManager_c *v15; // x0
  int v16; // w21
  int v17; // w23
  int v18; // w24
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ServantProfileLimitCountManager_c *v24; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  System_IO_Stream_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  ServantProfileLimitCountManager_c *v38; // x0

  if ( (byte_4CB771F & 1) == 0 )
  {
    sub_1C6BA08(&System_IO_BinaryReader_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    byte_4CB771F = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v38 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C6BC54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C6BC60(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
  {
    v13 = 5;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v15 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v15 = ServantProfileLimitCountManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v16 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v19 = sub_1C6BC54(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        if ( !v19 )
          sub_1C6BC60(v20, v21);
        *(_DWORD *)(v19 + 16) = v17;
        *(_DWORD *)(v19 + 20) = v18;
        v24 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v24 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v24->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1C6BC60(0, v21);
        items = limitCountList->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1C6BC60(limitCountList, v21);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v19,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v19;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), v19, v22, v23);
        }
        --v16;
      }
      while ( v16 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._6_Close.methodPtr)(
      v8,
      v8->klass->vtable._6_Close.method);
    v13 = 8;
  }
  klass = v8->klass;
  v31 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v33 = sub_1C41D90(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v8, *(_QWORD *)(v33 + 8));
  if ( (v13 | 8) == 8 )
  {
    v13 = 9;
    if ( !v7 )
      return v13 == 9;
  }
  else if ( !v7 )
  {
    return v13 == 9;
  }
  v34 = v7->klass;
  v35 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_46;
    }
    v37 = (__int64)&v34->vtable + 16 * *v36;
  }
  else
  {
LABEL_46:
    v37 = sub_1C41D90(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v37)(v7, *(_QWORD *)(v37 + 8));
  return v13 == 9;
}


void ServantProfileLimitCountManager__SetLimitCount(int32_t servantId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  ServantProfileLimitCountManager_c *v8; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v10; // x22
  Il2CppObject *v11; // x0
  ServantProfileLimitCountManager_c *v12; // x0
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ServantProfileLimitCountManager_c *v16; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4CB771D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C6BA08(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C6BA08(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__);
    sub_1C6BA08(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
    byte_4CB771D = 1;
  }
  v5 = sub_1C6BC54(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = servantId;
  v8 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v8 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v8->static_fields->limitCountList;
  v10 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0);
  if ( !limitCountList )
    goto LABEL_22;
  v11 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v10,
          (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v11 )
  {
    v13 = sub_1C6BC54(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v13 + 20) = limitCount;
      v16 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v16 = ServantProfileLimitCountManager_TypeInfo;
      }
      v6 = (System_Collections_Generic_List_object__o *)v16->static_fields->limitCountList;
      if ( v6 )
      {
        items = v6->fields._items;
        v18 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v13;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), v13, v14, v15);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1C6BC60(v6, v7);
  }
  if ( SHIDWORD(v11[1].klass) >= limitCount )
    return;
  HIDWORD(v11[1].klass) = limitCount;
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  v12->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  System_Predicate_object__o *v10; // x22
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  const MethodInfo *v13; // x0

  if ( (byte_4CB7722 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78528104);
    sub_1C6BA08(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C6BA08(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__);
    sub_1C6BA08(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
    byte_4CB7722 = 1;
  }
  v5 = sub_1C6BC54(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0
    || (Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                   (const MethodInfo_33FCE18 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__),
        v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_58720872(
          v9,
          Entitys,
          (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78528104),
        v10 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0),
        !v9) )
  {
LABEL_12:
    sub_1C6BC60(Instance, v7);
  }
  if ( System_Collections_Generic_List_object___Find(
         v9,
         (System_Predicate_T__o *)v10,
         (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v12 = *(_DWORD *)(v5 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v12, limitCount, v11);
    ServantProfileLimitCountManager__WriteData(v13);
  }
}


void ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  int32_t v6; // w21
  __int64 v7; // x23
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v10; // x22
  System_Predicate_object__o *v11; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v12; // x8
  __int64 v13; // x23
  __int64 v14; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  int32_t v16; // w22
  const MethodInfo *v17; // x2
  int32_t v18; // w23
  ServantProfileLimitCountManager_c *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4CB7721 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__getEntityList__);
    sub_1C6BA08(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78528104);
    sub_1C6BA08(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__);
    sub_1C6BA08(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
    byte_4CB7721 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_24;
  Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                             (const MethodInfo_33FCE18 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720872(
    v4,
    Entitys,
    (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78528104);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor;
  if ( !monitor )
    goto LABEL_24;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor,
         (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = sub_1C6BC54(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   monitor,
                   v6,
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v7 )
        break;
      *(_QWORD *)(v7 + 16) = Instance;
      v10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v7 + 16);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)Instance, v8, v9);
      v11 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v11,
        (Il2CppObject *)v7,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0);
      if ( !v4 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v4,
                   (System_Predicate_T__o *)v11,
                   (const MethodInfo_3800FDC *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        v14 = *(_QWORD *)&v12[5].fields.currentCryptoKey;
        v13 = *(_QWORD *)&v12[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v14;
        *(_QWORD *)&v20.fields.fakeValue = v13;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v20, 0);
        v15 = *v10;
        if ( !*v10 )
          break;
        v16 = (int)Instance;
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v15[6], 0);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v16, v18, v17);
      }
      if ( ++v6 >= System_Collections_ObjectModel_Collection_object___get_Count(
                     monitor,
                     (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C6BC60(Instance, v2);
  }
LABEL_21:
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v19);
}


bool ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  ServantProfileLimitCountManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryWriter_o *v8; // x20
  __int64 v9; // x1
  ServantProfileLimitCountManager_c *v10; // x0
  struct ServantProfileLimitCountManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v14; // x1
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_IO_Stream_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4CB7720 & 1) == 0 )
  {
    sub_1C6BA08(&System_IO_BinaryWriter_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&ServantProfileLimitCountManager_TypeInfo);
    byte_4CB7720 = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C6BC54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64876120(v8, v7, 0);
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  v11 = v10->static_fields;
  limitCountList = v11->limitCountList;
  if ( !limitCountList )
    sub_1C6BC60(v10, v9);
  if ( !v8 )
    sub_1C6BC60(v10, v9);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v16 = ServantProfileLimitCountManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->limitCountList;
      if ( !v17 )
        sub_1C6BC60(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C6BC60(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v8->klass->vtable._5_Close.methodPtr)(
    v8,
    v8->klass->vtable._5_Close.method);
  klass = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v24 = sub_1C41D90(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  if ( v7 )
  {
    v25 = v7->klass;
    v26 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = (__int64)&v25->vtable + 16 * *v27;
    }
    else
    {
LABEL_36:
      v28 = sub_1C41D90(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v28)(v7, *(_QWORD *)(v28 + 8));
  }
  return 1;
}


void ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass10_0___GetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.servantId == this->fields.servantId;
}


void ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass13_0___UpdateProfileServantLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass13_0_o *v4; // x20
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4CB7724 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB7724 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0 )
    sub_1C6BC60(this, x);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v10, 0);
}


void ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass14_0___SetLimitCountExistProfile_b__0(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.svtId == this->fields.servantId;
}


void ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass9_0___SetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.servantId == this->fields.servantId;
}