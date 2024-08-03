void __fastcall WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
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
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD67F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v4);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6623/*"Fgo_20220427"*/, v6);
    byte_49FD67F = 1;
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6623/*"Fgo_20220427"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields,
    StringLiteral_6623/*"Fgo_20220427"*/,
    v2,
    v3);
  *(_WORD *)&WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  static_fields = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12);
}


void __fastcall WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WarBoardMessageHistoryManager_c *v4; // x0
  WarBoardMessageHistoryManager_c *v5; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9
  WarBoardMessageHistoryManager_c *v9; // x0

  if ( (byte_49FD67A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v2);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v3);
    byte_49FD67A = 1;
  }
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v4 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v5 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v5 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = v5->static_fields->infoList;
    if ( !infoList )
      sub_1B64324(v5);
    size = infoList->fields._size;
    v8 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v9 = WarBoardMessageHistoryManager_TypeInfo;
  }
  *(_WORD *)&v9->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_49FD678 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_49FD678 = 1;
  }
  v2 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD677 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD677 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0

  if ( (byte_49FD679 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_49FD679 = 1;
  }
  v2 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardMessageHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v17; // x20

  if ( (byte_49FD67B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&sceneType);
    sub_1B640C8(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v8);
    sub_1B640C8(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v9);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v10);
    byte_49FD67B = 1;
  }
  v11 = sub_1B64314(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&sceneType, *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = stageId;
  *(_DWORD *)(v11 + 20) = sceneType;
  *(_DWORD *)(v11 + 24) = idx;
  v15 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v15 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
  v17 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                        v13,
                                        v14);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1B64324(v12);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
}


bool __fastcall WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  WarBoardMessageHistoryManager_c *v9; // x0
  System_String_o *FilePath; // x19
  WarBoardMessageHistoryManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  System_String_o *v17; // x20
  WarBoardMessageHistoryManager_c *v18; // x0
  int v19; // w21
  char v20; // w20
  WarBoardMessageHistoryManager_c *v21; // x0
  int v22; // w20
  int v23; // w22
  int v24; // w23
  int v25; // w24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  WarBoardMessageHistoryManager_c *v32; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0

  if ( (byte_49FD67D & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_49FD67D = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v9);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v11 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v11);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v15 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v13, v14);
  System_IO_BinaryReader___ctor(v15, v12, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                             v15,
                             v15->klass->vtable._23_ReadChars.methodPtr);
  v18 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v18 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
            v15,
            v15->klass->vtable._10_ReadByte.methodPtr);
    v21 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v21 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
            v15,
            v15->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      do
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v28 = sub_1B64314(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v26, v27);
        System_Object___ctor((Il2CppObject *)v28, 0LL);
        if ( !v28 )
          sub_1B64324(v29);
        *(_DWORD *)(v28 + 16) = v23;
        *(_DWORD *)(v28 + 20) = v24;
        *(_DWORD *)(v28 + 24) = v25;
        v32 = WarBoardMessageHistoryManager_TypeInfo;
        if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v32 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
        if ( !infoList )
          sub_1B64324(0LL);
        items = infoList->fields._items;
        v35 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1B64324(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v28, v30, v31);
        }
        --v22;
      }
      while ( v22 );
    }
    v19 = 8;
  }
  klass = v15->klass;
  v39 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_34;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v41 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
  return (v19 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  WarBoardMessageHistoryManager_c *v17; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  WarBoardMessageHistoryManager_c *v25; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_49FD67C & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&sceneType);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v8);
    sub_1B640C8(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v10);
    sub_1B640C8(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v11);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v12);
    byte_49FD67C = 1;
  }
  v13 = sub_1B64314(
          WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&sceneType,
          *(_QWORD *)&idx);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_18;
  *(_DWORD *)(v13 + 16) = stageId;
  *(_DWORD *)(v13 + 20) = sceneType;
  *(_DWORD *)(v13 + 24) = idx;
  v17 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v17 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
  v19 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                        v15,
                                        v16);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_18;
  if ( System_Collections_Generic_List_object___Find(
         infoList,
         (System_Predicate_T__o *)v19,
         (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v22 = sub_1B64314(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v20, v21);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_18;
  *(_QWORD *)(v22 + 16) = *(_QWORD *)(v13 + 16);
  *(_DWORD *)(v22 + 24) = *(_DWORD *)(v13 + 24);
  v25 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v25 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v14 = (System_Collections_Generic_List_object__o *)v25->static_fields->infoList;
  if ( !v14
    || (items = v14->fields._items,
        v27 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_18:
    sub_1B64324(v14);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v22,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), v22, v23, v24);
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardMessageHistoryManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryWriter_o *v15; // x19
  WarBoardMessageHistoryManager_c *v16; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  WarBoardMessageHistoryManager_c *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_49FD67E & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_49FD67E = 1;
  }
  v7 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v7 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( !v7->static_fields->isModfiy )
    return 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 0;
  v10 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  }
  *((_BYTE *)v10[2].virtualMethodPointer + 8) = 0;
  FilePath = WarBoardMessageHistoryManager__GetFilePath(v10);
  v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v15 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v13, v14);
  System_IO_BinaryWriter___ctor_61613552(v15, v12, 0LL);
  v16 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v16 = WarBoardMessageHistoryManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1B64324(v16);
  if ( !v15 )
    sub_1B64324(v16);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v15->klass->vtable._22_Write.method)(
    v15,
    static_fields->SAVE_DATA_VERSION,
    v15->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v15->klass->vtable._8_Write.method)(
    v15,
    WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v15->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
    v15,
    (unsigned int)size,
    v15->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = WarBoardMessageHistoryManager_TypeInfo;
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v21 = WarBoardMessageHistoryManager_TypeInfo;
      }
      v22 = (System_Collections_Generic_List_object__o *)v21->static_fields->infoList;
      if ( !v22 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
      v24 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
        v15,
        LODWORD(Item[1].klass),
        v15->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
        v15,
        HIDWORD(v24[1].klass),
        v15->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
        v15,
        LODWORD(v24[1].monitor),
        v15->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v15->klass;
  v26 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_27;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v28 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v15, *(_QWORD *)(v28 + 8));
  return 1;
}


void __fastcall WarBoardMessageHistoryManager_HistoryInfo___ctor(
        WarBoardMessageHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMessageHistoryManager___c__DisplayClass10_0___SaveHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}


void __fastcall WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMessageHistoryManager___c__DisplayClass9_0___IsHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}