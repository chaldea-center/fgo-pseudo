void WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C44484 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C37058(&StringLiteral_6685/*"Fgo_20220427"*/);
    byte_4C44484 = 1;
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6685/*"Fgo_20220427"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields,
    StringLiteral_6685/*"Fgo_20220427"*/,
    v1,
    v2);
  *(_WORD *)&WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  static_fields = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  WarBoardMessageHistoryManager_c *v2; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v5; // w9
  WarBoardMessageHistoryManager_c *v6; // x0

  if ( (byte_4C4447F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C4447F = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v1 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v2 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v2 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = v2->static_fields->infoList;
    if ( !infoList )
      sub_1C372B4(v2);
    size = infoList->fields._size;
    v5 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v6 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v6 = WarBoardMessageHistoryManager_TypeInfo;
  }
  *(_WORD *)&v6->static_fields->isModfiy = 1;
}


void WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4C4447D & 1) == 0 )
  {
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C4447D = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C4447C & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C4447C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0

  if ( (byte_4C4447E & 1) == 0 )
  {
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C4447E = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v1);
}


bool WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  WarBoardMessageHistoryManager_c *v9; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4C44480 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_1C37058(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C37058(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__);
    sub_1C37058(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C44480 = 1;
  }
  v7 = sub_1C372A4(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_DWORD *)(v7 + 16) = stageId;
  *(_DWORD *)(v7 + 20) = sceneType;
  *(_DWORD *)(v7 + 24) = idx;
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v9 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v9->static_fields->infoList;
  v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    0);
  if ( !infoList )
LABEL_8:
    sub_1C372B4(v8);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v11,
           (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0;
}


bool WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  WarBoardMessageHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19
  WarBoardMessageHistoryManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  System_String_o *v9; // x20
  WarBoardMessageHistoryManager_c *v10; // x0
  int v11; // w21
  char v12; // w20
  WarBoardMessageHistoryManager_c *v13; // x0
  int v14; // w20
  int v15; // w22
  int v16; // w23
  int v17; // w24
  __int64 v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  WarBoardMessageHistoryManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0

  if ( (byte_4C44482 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C44482 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v5 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v5);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                            v7,
                            v7->klass->vtable._22_ReadString.method);
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
  {
    v11 = 5;
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v13 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v13 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v13->static_fields->isContinueDevice = v12 & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v14 >= 1 )
    {
      do
      {
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = sub_1C372A4(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        if ( !v18 )
          sub_1C372B4(v19);
        *(_DWORD *)(v18 + 16) = v15;
        *(_DWORD *)(v18 + 20) = v16;
        *(_DWORD *)(v18 + 24) = v17;
        v22 = WarBoardMessageHistoryManager_TypeInfo;
        if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v22 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
        if ( !infoList )
          sub_1C372B4(0);
        items = infoList->fields._items;
        v25 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C372B4(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
        }
        --v14;
      }
      while ( v14 );
    }
    v11 = 8;
  }
  klass = v7->klass;
  v29 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v31 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v7, *(_QWORD *)(v31 + 8));
  return (v11 | 8) == 8;
}


void WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *v8; // x0
  WarBoardMessageHistoryManager_c *v9; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v11; // x21
  __int64 v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  WarBoardMessageHistoryManager_c *v15; // x0
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_4C44481 & 1) == 0 )
  {
    sub_1C37058(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_1C37058(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C37058(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__);
    sub_1C37058(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C44481 = 1;
  }
  v7 = sub_1C372A4(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_DWORD *)(v7 + 16) = stageId;
  *(_DWORD *)(v7 + 20) = sceneType;
  *(_DWORD *)(v7 + 24) = idx;
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v9 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v9->static_fields->infoList;
  v11 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    0);
  if ( !infoList )
    goto LABEL_18;
  if ( System_Collections_Generic_List_object___Find(
         infoList,
         (System_Predicate_T__o *)v11,
         (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v12 = sub_1C372A4(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(v12 + 24) = *(_DWORD *)(v7 + 24);
  v15 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v15 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v8 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
  if ( !v8
    || (items = v8->fields._items,
        v17 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C372B4(v8);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v12,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v12;
    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), v12, v13, v14);
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  WarBoardMessageHistoryManager_c *v8; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  WarBoardMessageHistoryManager_c *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0

  if ( (byte_4C44483 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C44483 = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v1 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( !v1->static_fields->isModfiy )
    return 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v4 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  }
  *((_BYTE *)v4[2].virtualMethodPointer + 8) = 0;
  FilePath = WarBoardMessageHistoryManager__GetFilePath(v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v7, v6, 0);
  v8 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v8 = WarBoardMessageHistoryManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C372B4(v8);
  if ( !v7 )
    sub_1C372B4(v8);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
    v7,
    WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v7->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v13 = WarBoardMessageHistoryManager_TypeInfo;
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v13 = WarBoardMessageHistoryManager_TypeInfo;
      }
      v14 = (System_Collections_Generic_List_object__o *)v13->static_fields->infoList;
      if ( !v14 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
      v16 = Item;
      if ( !Item )
        sub_1C372B4(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v16[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v16[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  klass = v7->klass;
  v18 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_27;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v20 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v20)(v7, *(_QWORD *)(v20 + 8));
  return 1;
}


void WarBoardMessageHistoryManager_HistoryInfo___ctor(
        WarBoardMessageHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardMessageHistoryManager___c__DisplayClass10_0___SaveHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}


void WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardMessageHistoryManager___c__DisplayClass9_0___IsHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}