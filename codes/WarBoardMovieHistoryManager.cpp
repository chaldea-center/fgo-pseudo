void __fastcall WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FD688 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v4);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6624/*"Fgo_20220601"*/, v6);
    sub_1B640C8(&StringLiteral_15524/*"WarBoardStartMovie"*/, v7);
    byte_49FD688 = 1;
  }
  WarBoardMovieHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6624/*"Fgo_20220601"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields,
    StringLiteral_6624/*"Fgo_20220601"*/,
    v2,
    v3);
  v8 = StringLiteral_15524/*"WarBoardStartMovie"*/;
  static_fields = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  static_fields->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15524/*"WarBoardStartMovie"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SAVE_KEY_START_MOVIE, v8, v10, v11);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v15 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v15->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->infoList, (int32_t)v14, v16, v17);
}


void __fastcall WarBoardMovieHistoryManager___ctor(WarBoardMovieHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMovieHistoryManager__AddHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  System_Collections_Generic_List_object__o *infoList; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  WarBoardMovieHistoryManager_c *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_49FD685 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&phase);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v8);
    byte_49FD685 = 1;
  }
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v11 = sub_1B64314(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v9, v10);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( !v11 )
      goto LABEL_16;
    *(_QWORD *)(v11 + 24) = saveKey;
    *(_DWORD *)(v11 + 16) = questId;
    *(_DWORD *)(v11 + 20) = phase;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)saveKey, v13, v14);
    v17 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v17 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
    if ( !infoList
      || (items = infoList->fields._items,
          v19 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__,
          ++infoList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1B64324(infoList);
    }
    size = infoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        infoList,
        (Il2CppObject *)v11,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      infoList->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), v11, v15, v16);
    }
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WarBoardMovieHistoryManager_c *v4; // x0
  WarBoardMovieHistoryManager_c *v5; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9
  WarBoardMovieHistoryManager_c *v9; // x0

  if ( (byte_49FD683 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v2);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_49FD683 = 1;
  }
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v4 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v5 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v5 = WarBoardMovieHistoryManager_TypeInfo;
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
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v9 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v9->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_49FD681 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_49FD681 = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMovieHistoryManager__ExistsHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  WarBoardMovieHistoryManager_c *v17; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_49FD684 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&phase);
    sub_1B640C8(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v8);
    sub_1B640C8(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v9);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v10);
    byte_49FD684 = 1;
  }
  v11 = sub_1B64314(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&phase, saveKey);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = saveKey;
  *(_DWORD *)(v11 + 16) = questId;
  *(_DWORD *)(v11 + 20) = phase;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)saveKey, v13, v14);
  v17 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v17 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
  v19 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                        v15,
                                        v16);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1B64324(v12);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v19,
           (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD680 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD680 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0

  if ( (byte_49FD682 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_49FD682 = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  WarBoardMovieHistoryManager_c *v9; // x0
  System_String_o *FilePath; // x19
  WarBoardMovieHistoryManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  System_String_o *v17; // x20
  WarBoardMovieHistoryManager_c *v18; // x0
  int v19; // w21
  int v20; // w20
  int v21; // w22
  int v22; // w23
  __int64 v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x21
  __int64 v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  WarBoardMovieHistoryManager_c *v32; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0

  if ( (byte_49FD686 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_49FD686 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v9);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v11 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v11);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v15 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v13, v14);
  System_IO_BinaryReader___ctor(v15, v12, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                             v15,
                             v15->klass->vtable._23_ReadChars.methodPtr);
  v18 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v18 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
            v15,
            v15->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v20 >= 1 )
    {
      do
      {
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                v15,
                v15->klass->vtable._23_ReadChars.methodPtr);
        v26 = sub_1B64314(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v24, v25);
        System_Object___ctor((Il2CppObject *)v26, 0LL);
        if ( !v26 )
          sub_1B64324(v27);
        *(_QWORD *)(v26 + 24) = v23;
        *(_DWORD *)(v26 + 16) = v21;
        *(_DWORD *)(v26 + 20) = v22;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 24), v23, v28, v29);
        v32 = WarBoardMovieHistoryManager_TypeInfo;
        if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v32 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
        if ( !infoList )
          sub_1B64324(0LL);
        items = infoList->fields._items;
        v35 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1B64324(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v26,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v26;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v26, v30, v31);
        }
        --v20;
      }
      while ( v20 );
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
        goto LABEL_32;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v41 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
  return (v19 | 8) == 8;
}


bool __fastcall WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardMovieHistoryManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryWriter_o *v15; // x19
  WarBoardMovieHistoryManager_c *v16; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  WarBoardMovieHistoryManager_c *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0

  if ( (byte_49FD687 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_49FD687 = 1;
  }
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v7 = WarBoardMovieHistoryManager_TypeInfo;
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
  v10 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v10 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  }
  *((_BYTE *)v10[2].virtualMethodPointer + 16) = 0;
  FilePath = WarBoardMovieHistoryManager__GetFilePath(v10);
  v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v15 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v13, v14);
  System_IO_BinaryWriter___ctor_61613552(v15, v12, 0LL);
  v16 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v16 = WarBoardMovieHistoryManager_TypeInfo;
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
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
    v15,
    (unsigned int)size,
    v15->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = WarBoardMovieHistoryManager_TypeInfo;
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v21 = WarBoardMovieHistoryManager_TypeInfo;
      }
      v22 = (System_Collections_Generic_List_object__o *)v21->static_fields->infoList;
      if ( !v22 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v15->klass->vtable._22_Write.method)(
        v15,
        v24[1].monitor,
        v15->klass[1]._1.image);
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


void __fastcall WarBoardMovieHistoryManager_HistoryInfo___ctor(
        WarBoardMovieHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMovieHistoryManager___c__DisplayClass9_0___ExistsHistory_b__0(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMovieHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}