void WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C28785 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6679/*"Fgo_20220427"*/);
    byte_4C28785 = 1;
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6679/*"Fgo_20220427"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields,
    StringLiteral_6679/*"Fgo_20220427"*/,
    v1,
    v2);
  *(_WORD *)&WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  static_fields = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  __int64 v2; // x1
  WarBoardMessageHistoryManager_c *v3; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  WarBoardMessageHistoryManager_c *v7; // x0

  if ( (byte_4C28780 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C28780 = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v1 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v3 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v3 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1C2D6EC(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v7 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v7 = WarBoardMessageHistoryManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4C2877E & 1) == 0 )
  {
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C2877E = 1;
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

  if ( (byte_4C2877D & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C2877D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0

  if ( (byte_4C2877F & 1) == 0 )
  {
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C2877F = 1;
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
  __int64 v9; // x1
  WarBoardMessageHistoryManager_c *v10; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4C28781 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_1C2D490(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C2D490(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__);
    sub_1C2D490(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C28781 = 1;
  }
  v7 = sub_1C2D6DC(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_DWORD *)(v7 + 16) = stageId;
  *(_DWORD *)(v7 + 20) = sceneType;
  *(_DWORD *)(v7 + 24) = idx;
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v10->static_fields->infoList;
  v12 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    0);
  if ( !infoList )
LABEL_8:
    sub_1C2D6EC(v8, v9);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0;
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
  __int64 v9; // x1
  System_String_o *v10; // x20
  WarBoardMessageHistoryManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  WarBoardMessageHistoryManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  int v18; // w24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  WarBoardMessageHistoryManager_c *v24; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0

  if ( (byte_4C28783 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryReader_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C28783 = 1;
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
  v7 = (System_IO_BinaryReader_o *)sub_1C2D6DC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  v11 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v11 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v14 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v14 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v19 = sub_1C2D6DC(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        if ( !v19 )
          sub_1C2D6EC(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_DWORD *)(v19 + 24) = v18;
        v24 = WarBoardMessageHistoryManager_TypeInfo;
        if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v24 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
        if ( !infoList )
          sub_1C2D6EC(0, v21);
        items = infoList->fields._items;
        v27 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C2D6EC(infoList, v21);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v19;
          sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), v19, v22, v23);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v31 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_34;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v33 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v7, *(_QWORD *)(v33 + 8));
  return (v12 | 8) == 8;
}


void WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  WarBoardMessageHistoryManager_c *v10; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v12; // x21
  __int64 v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  WarBoardMessageHistoryManager_c *v16; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8

  if ( (byte_4C28782 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_1C2D490(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_1C2D490(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__);
    sub_1C2D490(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C28782 = 1;
  }
  v7 = sub_1C2D6DC(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_DWORD *)(v7 + 16) = stageId;
  *(_DWORD *)(v7 + 20) = sceneType;
  *(_DWORD *)(v7 + 24) = idx;
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v10->static_fields->infoList;
  v12 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    0);
  if ( !infoList )
    goto LABEL_18;
  if ( System_Collections_Generic_List_object___Find(
         infoList,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v13 = sub_1C2D6DC(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_18;
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(v7 + 16);
  *(_DWORD *)(v13 + 24) = *(_DWORD *)(v7 + 24);
  v16 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v16 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v8 = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
  if ( !v8
    || (items = v8->fields._items,
        v18 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C2D6EC(v8, v9);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), v13, v14, v15);
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
  __int64 v8; // x1
  WarBoardMessageHistoryManager_c *v9; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  WarBoardMessageHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4C28784 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryWriter_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4C28784 = 1;
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
  v7 = (System_IO_BinaryWriter_o *)sub_1C2D6DC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64369912(v7, v6, 0);
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v9 = WarBoardMessageHistoryManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C2D6EC(v9, v8);
  if ( !v7 )
    sub_1C2D6EC(v9, v8);
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
      v15 = WarBoardMessageHistoryManager_TypeInfo;
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v15 = WarBoardMessageHistoryManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_1C2D6EC(0, v13);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C2D6EC(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v19[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  klass = v7->klass;
  v21 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v23 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}