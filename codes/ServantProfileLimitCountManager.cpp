void ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C443E6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C37058(&StringLiteral_6677/*"Fgo_20191029"*/);
    byte_4C443E6 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6677/*"Fgo_20191029"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6677/*"Fgo_20191029"*/,
    v1,
    v2);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->limitCountList, (int32_t)v3, v5, v6);
}


void ServantProfileLimitCountManager___ctor(ServantProfileLimitCountManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C443DF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C443DF = 1;
  }
  v1 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v1->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C372B4(v1);
  }
  size = limitCountList->fields._size;
  v4 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v3; // x0

  if ( (byte_4C443DD & 1) == 0 )
  {
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C443DD = 1;
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
  ServantProfileLimitCountManager_c *v5; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v7; // x21
  Il2CppObject *v8; // x0

  if ( (byte_4C443E1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C37058(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C37058(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__);
    sub_1C37058(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_4C443E1 = 1;
  }
  v3 = sub_1C372A4(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = servantId;
  v5 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v5 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v5->static_fields->limitCountList;
  v7 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0);
  if ( !limitCountList )
LABEL_10:
    sub_1C372B4(v4);
  v8 = System_Collections_Generic_List_object___Find(
         limitCountList,
         (System_Predicate_T__o *)v7,
         (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v8 )
    LODWORD(v8) = HIDWORD(v8[1].klass);
  return (int)v8;
}


System_String_o *ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C443DC & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C443DC = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  ServantProfileLimitCountManager_c *v1; // x0

  if ( (byte_4C443DE & 1) == 0 )
  {
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C443DE = 1;
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
  System_String_o *v10; // x21
  ServantProfileLimitCountManager_c *v11; // x0
  int v12; // w22
  char v13; // w21
  ServantProfileLimitCountManager_c *v14; // x0
  int v15; // w21
  int v16; // w23
  int v17; // w24
  __int64 v18; // x22
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  ServantProfileLimitCountManager_c *v22; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  System_IO_Stream_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  ServantProfileLimitCountManager_c *v36; // x0

  if ( (byte_4C443E2 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C443E2 = 1;
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
    v36 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v36);
    return 0;
  }
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C372B4(v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v11 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v11 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v14 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v14 = ServantProfileLimitCountManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v18 = sub_1C372A4(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        if ( !v18 )
          sub_1C372B4(v19);
        *(_DWORD *)(v18 + 16) = v16;
        *(_DWORD *)(v18 + 20) = v17;
        v22 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v22 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v22->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1C372B4(0);
        items = limitCountList->fields._items;
        v25 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1C372B4(limitCountList);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
        }
        --v15;
      }
      while ( v15 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._6_Close.methodPtr)(
      v8,
      v8->klass->vtable._6_Close.method);
    v12 = 8;
  }
  klass = v8->klass;
  v29 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_36;
    }
    v31 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v31 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
  if ( (v12 | 8) == 8 )
  {
    v12 = 9;
    if ( !v7 )
      return v12 == 9;
  }
  else if ( !v7 )
  {
    return v12 == 9;
  }
  v32 = v7->klass;
  v33 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_46;
    }
    v35 = (__int64)&v32->vtable + 16 * *v34;
  }
  else
  {
LABEL_46:
    v35 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v35)(v7, *(_QWORD *)(v35 + 8));
  return v12 == 9;
}


void ServantProfileLimitCountManager__SetLimitCount(int32_t servantId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  ServantProfileLimitCountManager_c *v7; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v9; // x22
  Il2CppObject *v10; // x0
  ServantProfileLimitCountManager_c *v11; // x0
  __int64 v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ServantProfileLimitCountManager_c *v15; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4C443E0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_1C37058(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C37058(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__);
    sub_1C37058(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
    byte_4C443E0 = 1;
  }
  v5 = sub_1C372A4(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_DWORD *)(v5 + 16) = servantId;
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v7->static_fields->limitCountList;
  v9 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0);
  if ( !limitCountList )
    goto LABEL_22;
  v10 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v10 )
  {
    v12 = sub_1C372A4(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v12 + 20) = limitCount;
      v15 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v15 = ServantProfileLimitCountManager_TypeInfo;
      }
      v6 = (System_Collections_Generic_List_object__o *)v15->static_fields->limitCountList;
      if ( v6 )
      {
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v12,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), v12, v13, v14);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1C372B4(v6);
  }
  if ( SHIDWORD(v10[1].klass) >= limitCount )
    return;
  HIDWORD(v10[1].klass) = limitCount;
  v11 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v11 = ServantProfileLimitCountManager_TypeInfo;
  }
  v11->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x22
  System_Collections_Generic_List_object__o *v8; // x21
  System_Predicate_object__o *v9; // x22
  const MethodInfo *v10; // x2
  int32_t v11; // w20
  const MethodInfo *v12; // x0

  if ( (byte_4C443E5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78065256);
    sub_1C37058(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C37058(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__);
    sub_1C37058(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
    byte_4C443E5 = 1;
  }
  v5 = sub_1C372A4(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0
    || (Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                   (const MethodInfo_33A4DDC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_58337560(
          v8,
          Entitys,
          (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78065256),
        v9 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0),
        !v8) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  if ( System_Collections_Generic_List_object___Find(
         v8,
         (System_Predicate_T__o *)v9,
         (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v11 = *(_DWORD *)(v5 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v11, limitCount, v10);
    ServantProfileLimitCountManager__WriteData(v12);
  }
}


void ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x20
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  int32_t v5; // w21
  __int64 v6; // x23
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v9; // x22
  System_Predicate_object__o *v10; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v11; // x8
  __int64 v12; // x23
  __int64 v13; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v14; // x8
  int32_t v15; // w22
  const MethodInfo *v16; // x2
  int32_t v17; // w23
  ServantProfileLimitCountManager_c *v18; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C443E4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__getEntityList__);
    sub_1C37058(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78065256);
    sub_1C37058(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__);
    sub_1C37058(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
    byte_4C443E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_24;
  Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                             (const MethodInfo_33A4DDC *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v3,
    Entitys,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___78065256);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor;
  if ( !monitor )
    goto LABEL_24;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor,
         (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_1C372A4(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v6, 0);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   monitor,
                   v5,
                   (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v6 )
        break;
      *(_QWORD *)(v6 + 16) = Instance;
      v9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v6 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)Instance, v7, v8);
      v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v10,
        (Il2CppObject *)v6,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0);
      if ( !v3 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v3,
                   (System_Predicate_T__o *)v10,
                   (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v11 = *v9;
        if ( !*v9 )
          break;
        v13 = *(_QWORD *)&v11[5].fields.currentCryptoKey;
        v12 = *(_QWORD *)&v11[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v13;
        *(_QWORD *)&v19.fields.fakeValue = v12;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
        v14 = *v9;
        if ( !*v9 )
          break;
        v15 = (int)Instance;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v14[6], 0);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v15, v17, v16);
      }
      if ( ++v5 >= System_Collections_ObjectModel_Collection_object___get_Count(
                     monitor,
                     (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_24:
    sub_1C372B4(Instance);
  }
LABEL_21:
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v18);
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
  ServantProfileLimitCountManager_c *v9; // x0
  struct ServantProfileLimitCountManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_IO_Stream_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C443E3 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantProfileLimitCountManager_TypeInfo);
    byte_4C443E3 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v8, v7, 0);
  v9 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v9 = ServantProfileLimitCountManager_TypeInfo;
  }
  v10 = v9->static_fields;
  limitCountList = v10->limitCountList;
  if ( !limitCountList )
    sub_1C372B4(v9);
  if ( !v8 )
    sub_1C372B4(v9);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
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
      v14 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v14 = ServantProfileLimitCountManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->limitCountList;
      if ( !v15 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C372B4(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v17[1].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v8->klass->vtable._5_Close.methodPtr)(
    v8,
    v8->klass->vtable._5_Close.method);
  klass = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_29;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v21 = sub_1C87870(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  if ( v7 )
  {
    v22 = v7->klass;
    v23 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_36;
      }
      v25 = (__int64)&v22->vtable + 16 * *v24;
    }
    else
    {
LABEL_36:
      v25 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v25)(v7, *(_QWORD *)(v25 + 8));
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
    sub_1C372B4(this);
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
  if ( (byte_4C443E7 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C443E7 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0 )
    sub_1C372B4(this);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  return x->fields.servantId == this->fields.servantId;
}