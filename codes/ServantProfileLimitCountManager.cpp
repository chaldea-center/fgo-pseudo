void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FF6DE & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_1B64870(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v4);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v5);
    sub_1B64870(&StringLiteral_6615/*"Fgo_20191029"*/, v6);
    byte_49FF6DE = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6615/*"Fgo_20191029"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6615/*"Fgo_20191029"*/,
    v2,
    v3);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v7;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->limitCountList, (int32_t)v7, v9, v10);
}


void __fastcall ServantProfileLimitCountManager___ctor(
        ServantProfileLimitCountManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ServantProfileLimitCountManager_c *v4; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FF6D7 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v3);
    byte_49FF6D7 = 1;
  }
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v4->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1B64ACC(v4, v1);
  }
  size = limitCountList->fields._size;
  v7 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v4; // x0

  if ( (byte_49FF6D5 & 1) == 0 )
  {
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_49FF6D5 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v4 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v4);
}


int32_t __fastcall ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  ServantProfileLimitCountManager_c *v10; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x0

  if ( (byte_49FF6D9 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method);
    sub_1B64870(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v3);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v4);
    sub_1B64870(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v5);
    sub_1B64870(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v6);
    byte_49FF6D9 = 1;
  }
  v7 = sub_1B64ABC(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = servantId;
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v10->static_fields->limitCountList;
  v12 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
LABEL_10:
    sub_1B64ACC(v8, v9);
  v13 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v13 )
    LODWORD(v13) = HIDWORD(v13[1].klass);
  return (int)v13;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FF6D4 & 1) == 0 )
  {
    sub_1B64870(&AndroidUtil_TypeInfo, v1);
    sub_1B64870(&DatFileName_TypeInfo, v2);
    sub_1B64870(&StringLiteral_1124/*"/"*/, v3);
    byte_49FF6D4 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_61394836(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_49FF6D6 & 1) == 0 )
  {
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_49FF6D6 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  ServantProfileLimitCountManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  ServantProfileLimitCountManager_c *v12; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  ServantProfileLimitCountManager_c *v18; // x0
  int v19; // w22
  char v20; // w21
  ServantProfileLimitCountManager_c *v21; // x0
  int v22; // w21
  int v23; // w23
  int v24; // w24
  __int64 v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  ServantProfileLimitCountManager_c *v30; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  System_IO_Stream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  ServantProfileLimitCountManager_c *v44; // x0

  if ( (byte_49FF6DA & 1) == 0 )
  {
    sub_1B64870(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B64870(&System_IDisposable_TypeInfo, v2);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_1B64870(&ManagerConfig_TypeInfo, v4);
    sub_1B64870(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v5);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_49FF6DA = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v44 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v44);
    return 0;
  }
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_1B64ABC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_1B64ACC(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v21 = ServantProfileLimitCountManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      do
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = sub_1B64ABC(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1B64ACC(v26, v27);
        *(_DWORD *)(v25 + 16) = v23;
        *(_DWORD *)(v25 + 20) = v24;
        v30 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v30 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v30->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1B64ACC(0LL, v27);
        items = limitCountList->fields._items;
        v33 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1B64ACC(limitCountList, v27);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v25,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v25, v28, v29);
        }
        --v22;
      }
      while ( v22 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._6_Close.method)(
      v14,
      v14->klass->vtable._7_Dispose.methodPtr);
    v19 = 8;
  }
  klass = v14->klass;
  v37 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_36;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v39 = sub_1BB6850(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v14, *(_QWORD *)(v39 + 8));
  if ( (v19 | 8) == 8 )
  {
    v19 = 9;
    if ( !v13 )
      return v19 == 9;
  }
  else if ( !v13 )
  {
    return v19 == 9;
  }
  v40 = v13->klass;
  v41 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_46;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_46:
    v43 = sub_1BB6850(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
  return v19 == 9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_Collections_Generic_List_object__o *v12; // x0
  __int64 v13; // x1
  ServantProfileLimitCountManager_c *v14; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v16; // x22
  Il2CppObject *v17; // x0
  ServantProfileLimitCountManager_c *v18; // x0
  __int64 v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  ServantProfileLimitCountManager_c *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_49FF6D8 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v5);
    sub_1B64870(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v6);
    sub_1B64870(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v7);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v8);
    sub_1B64870(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v9);
    sub_1B64870(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_49FF6D8 = 1;
  }
  v11 = sub_1B64ABC(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_DWORD *)(v11 + 16) = servantId;
  v14 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v14 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v14->static_fields->limitCountList;
  v16 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
    goto LABEL_22;
  v17 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v17 )
  {
    v19 = sub_1B64ABC(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v19 + 20) = limitCount;
      v22 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v22 = ServantProfileLimitCountManager_TypeInfo;
      }
      v12 = (System_Collections_Generic_List_object__o *)v22->static_fields->limitCountList;
      if ( v12 )
      {
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v19,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v19;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 4), v19, v20, v21);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1B64ACC(v12, v13);
  }
  if ( SHIDWORD(v17[1].klass) >= limitCount )
    return;
  HIDWORD(v17[1].klass) = limitCount;
  v18 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v18 = ServantProfileLimitCountManager_TypeInfo;
  }
  v18->static_fields->isModfiy = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x22
  System_Collections_Generic_List_object__o *v18; // x21
  System_Predicate_object__o *v19; // x22
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  const MethodInfo *v22; // x0

  if ( (byte_49FF6DD & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount);
    sub_1B64870(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75674488, v7);
    sub_1B64870(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_1B64870(&System_Predicate_ServantProfileEntity__TypeInfo, v9);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__, v12);
    sub_1B64870(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v13);
    byte_49FF6DD = 1;
  }
  v14 = sub_1B64ABC(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_DWORD *)(v14 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)Instance,
                                                                          (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_55243428(
          v18,
          Entitys_object,
          (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75674488),
        v19 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v19,
          (Il2CppObject *)v14,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0LL),
        !v18) )
  {
LABEL_12:
    sub_1B64ACC(Instance, v16);
  }
  if ( System_Collections_Generic_List_object___Find(
         v18,
         (System_Predicate_T__o *)v19,
         (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v21 = *(_DWORD *)(v14 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v21, limitCount, v20);
    ServantProfileLimitCountManager__WriteData(v22);
  }
}


void __fastcall ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x20
  System_Collections_Generic_List_object__o *v19; // x19
  System_Collections_ObjectModel_Collection_T__o *klass; // x20
  int32_t v21; // w21
  Il2CppObject *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  UserServantEntity_c *v25; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v27; // x10
  int32_t v28; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v29; // x23
  System_Predicate_object__o *v30; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  __int64 v32; // x22
  __int64 v33; // x24
  int32_t v34; // w22
  const MethodInfo *v35; // x2
  int32_t v36; // w23
  ServantProfileLimitCountManager_c *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_49FF6DC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v2);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75674488, v7);
    sub_1B64870(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&System_Predicate_ServantProfileEntity__TypeInfo, v10);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v13);
    sub_1B64870(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v14);
    sub_1B64870(&UserServantEntity_TypeInfo, v15);
    byte_49FF6DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                    (DataMasterBase_o *)Instance,
                                                                    (const MethodInfo_2E3BF5C *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v19,
    Entitys_object,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75674488);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  klass = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass;
  if ( !klass )
    goto LABEL_36;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass,
         (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = (Il2CppObject *)sub_1B64ABC(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v22, 0LL);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   klass,
                   v21,
                   (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v22 )
        break;
      if ( Instance )
      {
        v25 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v27 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v27 = 0LL;
        v22[1].klass = v27;
        v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v22[1];
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v28 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v25 ? (int)Instance : 0;
        else
          v28 = 0;
      }
      else
      {
        v28 = 0;
        v22[1].klass = 0LL;
        v29 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v22[1];
      }
      sub_1B64814((ServantStatusBattleListViewItem_o *)v29, v28, v23, v24);
      v30 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v30,
        v22,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0LL);
      if ( !v19 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v19,
                   (System_Predicate_T__o *)v30,
                   (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v31 = *v29;
        if ( !*v29 )
          break;
        v33 = *(_QWORD *)&v31[5].fields.currentCryptoKey;
        v32 = *(_QWORD *)&v31[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v38.fields.currentCryptoKey = v33;
        *(_QWORD *)&v38.fields.fakeValue = v32;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v38, 0LL);
        if ( !*v29 )
          break;
        v34 = (int)Instance;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532((*v29)[6], 0LL);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v34, v36, v35);
      }
      if ( ++v21 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      klass,
                      (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_33;
    }
LABEL_36:
    sub_1B64ACC(Instance, v17);
  }
LABEL_33:
  v37 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v37);
}


bool __fastcall ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantProfileLimitCountManager_c *v7; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  ServantProfileLimitCountManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryWriter_o *v14; // x20
  __int64 v15; // x1
  ServantProfileLimitCountManager_c *v16; // x0
  struct ServantProfileLimitCountManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  __int64 v20; // x1
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_IO_Stream_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_49FF6DB & 1) == 0 )
  {
    sub_1B64870(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B64870(&System_IDisposable_TypeInfo, v2);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_1B64870(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_1B64870(&ManagerConfig_TypeInfo, v5);
    sub_1B64870(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_49FF6DB = 1;
  }
  v7 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v7 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1B64ABC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61621732(v14, v13, 0LL);
  v16 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v16 = ServantProfileLimitCountManager_TypeInfo;
  }
  v17 = v16->static_fields;
  limitCountList = v17->limitCountList;
  if ( !limitCountList )
    sub_1B64ACC(v16, v15);
  if ( !v14 )
    sub_1B64ACC(v16, v15);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v22 = ServantProfileLimitCountManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->limitCountList;
      if ( !v23 )
        sub_1B64ACC(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1B64ACC(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v14->klass->vtable._5_Close.method)(
    v14,
    v14->klass->vtable._6_Dispose.methodPtr);
  klass = v14->klass;
  v28 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v30 = sub_1BB6850(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  if ( v13 )
  {
    v31 = v13->klass;
    v32 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_36;
      }
      v34 = (__int64)(&v31->vtable._0_Equals.method + 2 * *v33);
    }
    else
    {
LABEL_36:
      v34 = sub_1BB6850(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v34)(v13, *(_QWORD *)(v34 + 8));
  }
  return 1;
}


void __fastcall ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass10_0___GetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass13_0___UpdateProfileServantLimitCount_b__0(
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
  if ( (byte_49FF6DF & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1B64870(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        x);
    byte_49FF6DF = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_1B64ACC(this, x);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v10, 0LL);
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass14_0___SetLimitCountExistProfile_b__0(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}


void __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantProfileLimitCountManager___c__DisplayClass9_0___SetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.servantId == this->fields.servantId;
}