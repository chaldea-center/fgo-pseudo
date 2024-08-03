void __fastcall ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD5E5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v4);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6615/*"Fgo_20191029"*/, v6);
    byte_49FD5E5 = 1;
  }
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6615/*"Fgo_20191029"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6615/*"Fgo_20191029"*/,
    v2,
    v3);
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->limitCountList, (int32_t)v9, v11, v12);
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

  if ( (byte_49FD5DE & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v3);
    byte_49FD5DE = 1;
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
      sub_1B64324(v4);
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

  if ( (byte_49FD5DC & 1) == 0 )
  {
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_49FD5DC = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  ServantProfileLimitCountManager_c *v12; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v14; // x21
  Il2CppObject *v15; // x0

  if ( (byte_49FD5E0 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      method);
    sub_1B640C8(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v4);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v5);
    sub_1B640C8(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__, v6);
    sub_1B640C8(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_49FD5E0 = 1;
  }
  v8 = sub_1B64314(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)(v8 + 16) = servantId;
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v12 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v12->static_fields->limitCountList;
  v14 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                        v10,
                                        v11);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
LABEL_10:
    sub_1B64324(v9);
  v15 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v15 )
    LODWORD(v15) = HIDWORD(v15[1].klass);
  return (int)v15;
}


System_String_o *__fastcall ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD5DB & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD5DB = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(27, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_49FD5DD & 1) == 0 )
  {
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v1);
    byte_49FD5DD = 1;
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x20
  __int64 v17; // x0
  System_String_o *v18; // x21
  ServantProfileLimitCountManager_c *v19; // x0
  int v20; // w22
  char v21; // w21
  ServantProfileLimitCountManager_c *v22; // x0
  int v23; // w21
  int v24; // w23
  int v25; // w24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x22
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  ServantProfileLimitCountManager_c *v32; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  System_IO_Stream_c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  ServantProfileLimitCountManager_c *v46; // x0

  if ( (byte_49FD5E1 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v5);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_49FD5E1 = 1;
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
    v46 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v46);
    return 0;
  }
  v12 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v16 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v14, v15);
  System_IO_BinaryReader___ctor(v16, v13, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  v19 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v19 = ServantProfileLimitCountManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
  {
    v20 = 5;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v22 = ServantProfileLimitCountManager_TypeInfo;
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
      v22 = ServantProfileLimitCountManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v23 >= 1 )
    {
      do
      {
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        v28 = sub_1B64314(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v26, v27);
        System_Object___ctor((Il2CppObject *)v28, 0LL);
        if ( !v28 )
          sub_1B64324(v29);
        *(_DWORD *)(v28 + 16) = v24;
        *(_DWORD *)(v28 + 20) = v25;
        v32 = ServantProfileLimitCountManager_TypeInfo;
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
          v32 = ServantProfileLimitCountManager_TypeInfo;
        }
        limitCountList = (System_Collections_Generic_List_object__o *)v32->static_fields->limitCountList;
        if ( !limitCountList )
          sub_1B64324(0LL);
        items = limitCountList->fields._items;
        v35 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( !items )
          sub_1B64324(limitCountList);
        size = limitCountList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            limitCountList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          limitCountList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v28, v30, v31);
        }
        --v23;
      }
      while ( v23 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._6_Close.method)(
      v16,
      v16->klass->vtable._7_Dispose.methodPtr);
    v20 = 8;
  }
  klass = v16->klass;
  v39 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_36;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v41 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v16, *(_QWORD *)(v41 + 8));
  if ( (v20 | 8) == 8 )
  {
    v20 = 9;
    if ( !v13 )
      return v20 == 9;
  }
  else if ( !v13 )
  {
    return v20 == 9;
  }
  v42 = v13->klass;
  v43 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_46;
    }
    v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v44);
  }
  else
  {
LABEL_46:
    v45 = sub_1BB60A8(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v45)(v13, *(_QWORD *)(v45 + 8));
  return v20 == 9;
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
  __int64 v14; // x2
  ServantProfileLimitCountManager_c *v15; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v17; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  ServantProfileLimitCountManager_c *v21; // x0
  __int64 v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  ServantProfileLimitCountManager_c *v25; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_49FD5DF & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__,
      v5);
    sub_1B640C8(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo, v6);
    sub_1B640C8(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v7);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v8);
    sub_1B640C8(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__, v9);
    sub_1B640C8(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, v10);
    byte_49FD5DF = 1;
  }
  v11 = sub_1B64314(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&limitCount, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_DWORD *)(v11 + 16) = servantId;
  v15 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v15 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v15->static_fields->limitCountList;
  v17 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                        v13,
                                        v14);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0LL);
  if ( !limitCountList )
    goto LABEL_22;
  v18 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v18 )
  {
    v22 = sub_1B64314(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo, v19, v20);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v22 + 20) = limitCount;
      v25 = ServantProfileLimitCountManager_TypeInfo;
      if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        v25 = ServantProfileLimitCountManager_TypeInfo;
      }
      v12 = (System_Collections_Generic_List_object__o *)v25->static_fields->limitCountList;
      if ( v12 )
      {
        items = v12->fields._items;
        v27 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v12->fields._version;
        if ( items )
        {
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)v22,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v22;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), v22, v23, v24);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1B64324(v12);
  }
  if ( SHIDWORD(v18[1].klass) >= limitCount )
    return;
  HIDWORD(v18[1].klass) = limitCount;
  v21 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
LABEL_19:
    v21 = ServantProfileLimitCountManager_TypeInfo;
  }
  v21->static_fields->isModfiy = 1;
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
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Predicate_object__o *v22; // x22
  const MethodInfo *v23; // x2
  int32_t v24; // w20
  const MethodInfo *v25; // x0

  if ( (byte_49FD5E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantProfileMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75666000, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_1B640C8(&System_Predicate_ServantProfileEntity__TypeInfo, v9);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__, v12);
    sub_1B640C8(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, v13);
    byte_49FD5E4 = 1;
  }
  v14 = sub_1B64314(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&limitCount, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_DWORD *)(v14 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0LL
    || (Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)Instance,
                                                                          (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                             v17,
                                                             v18),
        System_Collections_Generic_List_object____ctor_55234504(
          v19,
          Entitys_object,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75666000),
        v22 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ServantProfileEntity__TypeInfo, v20, v21),
        System_Predicate_object____ctor(
          v22,
          (Il2CppObject *)v14,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0LL),
        !v19) )
  {
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( System_Collections_Generic_List_object___Find(
         v19,
         (System_Predicate_T__o *)v22,
         (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v24 = *(_DWORD *)(v14 + 16);
    if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    ServantProfileLimitCountManager__SetLimitCount(v24, limitCount, v23);
    ServantProfileLimitCountManager__WriteData(v25);
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
  System_Collections_Generic_IEnumerable_T__o *Entitys_object; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x19
  System_Collections_ObjectModel_Collection_T__o *klass; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w21
  Il2CppObject *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  UserServantEntity_c *v28; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v30; // x10
  int32_t v31; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Predicate_object__o *v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v36; // x8
  __int64 v37; // x22
  __int64 v38; // x24
  int32_t v39; // w22
  const MethodInfo *v40; // x2
  int32_t v41; // w23
  ServantProfileLimitCountManager_c *v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49FD5E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v1);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v2);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantProfileMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_ServantProfileEntity___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75666000, v7);
    sub_1B640C8(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&System_Predicate_ServantProfileEntity__TypeInfo, v10);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(
      &Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
      v13);
    sub_1B640C8(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v14);
    sub_1B640C8(&UserServantEntity_TypeInfo, v15);
    byte_49FD5E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entitys_object = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__getEntitys_object_(
                                                                    (DataMasterBase_o *)Instance,
                                                                    (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_ServantProfileEntity___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantProfileEntity__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor_55234504(
    v20,
    Entitys_object,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___75666000);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  klass = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass;
  if ( !klass )
    goto LABEL_36;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].klass,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = (Il2CppObject *)sub_1B64314(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo, v22, v23);
      System_Object___ctor(v25, 0LL);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   klass,
                   v24,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v25 )
        break;
      if ( Instance )
      {
        v28 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v30 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo
              ? (Il2CppClass *)Instance
              : 0LL;
        else
          v30 = 0LL;
        v25[1].klass = v30;
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v25[1];
        if ( LOBYTE(Instance->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
          v31 = (UserServantEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == v28 ? (int)Instance : 0;
        else
          v31 = 0;
      }
      else
      {
        v31 = 0;
        v25[1].klass = 0LL;
        v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v25[1];
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v32, v31, v26, v27);
      v35 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_ServantProfileEntity__TypeInfo, v33, v34);
      System_Predicate_object____ctor(
        v35,
        v25,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0LL);
      if ( !v20 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v20,
                   (System_Predicate_T__o *)v35,
                   (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v36 = *v32;
        if ( !*v32 )
          break;
        v38 = *(_QWORD *)&v36[5].fields.currentCryptoKey;
        v37 = *(_QWORD *)&v36[5].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v43.fields.currentCryptoKey = v38;
        *(_QWORD *)&v43.fields.fakeValue = v37;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
        if ( !*v32 )
          break;
        v39 = (int)Instance;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*v32)[6], 0LL);
        if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
        ServantProfileLimitCountManager__SetLimitCount(v39, v41, v40);
      }
      if ( ++v24 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      klass,
                      (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_33;
    }
LABEL_36:
    sub_1B64324(Instance);
  }
LABEL_33:
  v42 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v42);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x20
  ServantProfileLimitCountManager_c *v17; // x0
  struct ServantProfileLimitCountManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w21
  int32_t i; // w22
  ServantProfileLimitCountManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  System_IO_Stream_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FD5E2 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v6);
    byte_49FD5E2 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = ServantProfileLimitCountManager_TypeInfo;
  if ( !ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo);
    v17 = ServantProfileLimitCountManager_TypeInfo;
  }
  v18 = v17->static_fields;
  limitCountList = v18->limitCountList;
  if ( !limitCountList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v18->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
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
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        HIDWORD(v25[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v16->klass->vtable._5_Close.method)(
    v16,
    v16->klass->vtable._6_Dispose.methodPtr);
  klass = v16->klass;
  v27 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
  if ( v13 )
  {
    v30 = v13->klass;
    v31 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_36;
      }
      v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
    }
    else
    {
LABEL_36:
      v33 = sub_1BB60A8(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v33)(v13, *(_QWORD *)(v33 + 8));
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
    sub_1B64324(this);
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
  if ( (byte_49FD5E6 & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_1B640C8(
                                                                        &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                        x);
    byte_49FD5E6 = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0LL )
    sub_1B64324(this);
  svtId = x->fields.svtId;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.servantId == this->fields.servantId;
}