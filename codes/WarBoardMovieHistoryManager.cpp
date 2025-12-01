void WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CC88F3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6680/*"Fgo_20220601"*/);
    sub_1C713B0(&StringLiteral_15597/*"WarBoardStartMovie"*/);
    byte_4CC88F3 = 1;
  }
  WarBoardMovieHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6680/*"Fgo_20220601"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields,
    StringLiteral_6680/*"Fgo_20220601"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_15597/*"WarBoardStartMovie"*/;
  static_fields = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  static_fields->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15597/*"WarBoardStartMovie"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->SAVE_KEY_START_MOVIE, v7, v9, v10, v11, v12, v13, v14);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v16 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v16->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->infoList, (int32_t)v15, v17, v18, v19, v20, v21, v22);
}


void WarBoardMovieHistoryManager___ctor(WarBoardMovieHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMovieHistoryManager__AddHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *infoList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  WarBoardMovieHistoryManager_c *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4CC88F0 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88F0 = 1;
  }
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v7 = sub_1C715FC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v7, 0);
    if ( !v7 )
      goto LABEL_16;
    *(_QWORD *)(v7 + 24) = saveKey;
    *(_DWORD *)(v7 + 16) = questId;
    *(_DWORD *)(v7 + 20) = phase;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)saveKey, v10, v11, v12, v13, v14, v15);
    v22 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v22 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
    if ( !infoList
      || (items = infoList->fields._items,
          v24 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__,
          ++infoList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1C71608(infoList, v9);
    }
    size = infoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        infoList,
        (Il2CppObject *)v7,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      infoList->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 4), v7, v16, v17, v18, v19, v20, v21);
    }
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  __int64 v2; // x1
  WarBoardMovieHistoryManager_c *v3; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  WarBoardMovieHistoryManager_c *v7; // x0

  if ( (byte_4CC88EE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88EE = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v1 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v3 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v3 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1C71608(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v7 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 1;
}


void WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4CC88EC & 1) == 0 )
  {
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88EC = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


bool WarBoardMovieHistoryManager__ExistsHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  WarBoardMovieHistoryManager_c *v16; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4CC88EF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__);
    sub_1C713B0(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_1C713B0(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__);
    sub_1C713B0(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88EF = 1;
  }
  v7 = sub_1C715FC(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor((WarBoardMovieHistoryManager___c__DisplayClass9_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 24) = saveKey;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = phase;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)saveKey, v10, v11, v12, v13, v14, v15);
  v16 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v16 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
  v18 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    0);
  if ( !infoList )
LABEL_8:
    sub_1C71608(v8, v9);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0;
}


System_String_o *WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CC88EB & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    sub_1C713B0(&DatFileName_TypeInfo);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    byte_4CC88EB = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0);
  return System_String__Concat_64069988(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


void WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0

  if ( (byte_4CC88ED & 1) == 0 )
  {
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88ED = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v1);
}


bool WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  WarBoardMovieHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19
  WarBoardMovieHistoryManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  WarBoardMovieHistoryManager_c *v11; // x0
  int v12; // w21
  int v13; // w20
  int v14; // w22
  int v15; // w23
  __int64 v16; // x24
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  WarBoardMovieHistoryManager_c *v33; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 v42; // x0

  if ( (byte_4CC88F1 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryReader_TypeInfo);
    sub_1C713B0(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88F1 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v5 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v5);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C715FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  v11 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v11 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v13 >= 1 )
    {
      do
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                v7,
                v7->klass->vtable._22_ReadString.method);
        v17 = sub_1C715FC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v17, 0);
        if ( !v17 )
          sub_1C71608(v18, v19);
        *(_QWORD *)(v17 + 24) = v16;
        *(_DWORD *)(v17 + 16) = v14;
        *(_DWORD *)(v17 + 20) = v15;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v17 + 24), v16, v20, v21, v22, v23, v24, v25);
        v33 = WarBoardMovieHistoryManager_TypeInfo;
        if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v33 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v33->static_fields->infoList;
        if ( !infoList )
          sub_1C71608(0, v26);
        items = infoList->fields._items;
        v36 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C71608(infoList, v26);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v17,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v17;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), v17, v27, v28, v29, v30, v31, v32);
        }
        --v13;
      }
      while ( v13 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v40 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_32;
    }
    v42 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_32:
    v42 = sub_1C47738(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v7, *(_QWORD *)(v42 + 8));
  return (v12 | 8) == 8;
}


bool WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  WarBoardMovieHistoryManager_c *v9; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  WarBoardMovieHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4CC88F2 & 1) == 0 )
  {
    sub_1C713B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&WarBoardMovieHistoryManager_TypeInfo);
    byte_4CC88F2 = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v1 = WarBoardMovieHistoryManager_TypeInfo;
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
  v4 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v4 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  }
  *((_BYTE *)v4[2].virtualMethodPointer + 16) = 0;
  FilePath = WarBoardMovieHistoryManager__GetFilePath(v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C715FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64941052(v7, v6, 0);
  v9 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v9 = WarBoardMovieHistoryManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C71608(v9, v8);
  if ( !v7 )
    sub_1C71608(v9, v8);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v15 = WarBoardMovieHistoryManager_TypeInfo;
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v15 = WarBoardMovieHistoryManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_1C71608(0, v13);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C71608(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
        v7,
        v19[1].monitor,
        v7->klass->vtable._22_Write.method);
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
    v23 = sub_1C47738(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
  return 1;
}


void WarBoardMovieHistoryManager_HistoryInfo___ctor(
        WarBoardMovieHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardMovieHistoryManager___c__DisplayClass9_0___ExistsHistory_b__0(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMovieHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0);
}