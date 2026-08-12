void WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5971E4B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    sub_2213A60(&StringLiteral_6968/*"Fgo_20220601"*/);
    sub_2213A60(&StringLiteral_16205/*"WarBoardStartMovie"*/);
    byte_5971E4B = 1;
  }
  v7 = StringLiteral_6968/*"Fgo_20220601"*/;
  WarBoardMovieHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6968/*"Fgo_20220601"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_16205/*"WarBoardStartMovie"*/;
  static_fields = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  static_fields->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_16205/*"WarBoardStartMovie"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_START_MOVIE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo;
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v18 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v18->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->infoList, (int32_t)v17, v19, v20, v21, v22, v23, v24);
}


void WarBoardMovieHistoryManager___ctor(WarBoardMovieHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardMovieHistoryManager__AddHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Collections_Generic_List_object__o *infoList; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  WarBoardMovieHistoryManager_c *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_5971E48 & 1) == 0 )
  {
    sub_2213A60(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E48 = 1;
  }
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, *(_QWORD *)&phase);
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v7 = sub_2213CCC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( !v7 )
      goto LABEL_16;
    *(_QWORD *)(v7 + 24) = saveKey;
    *(_DWORD *)(v7 + 16) = questId;
    *(_DWORD *)(v7 + 20) = phase;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)saveKey, v10, v11, v12, v13, v14, v15);
    v22 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v9);
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
      sub_2213CDC(infoList, v9);
    }
    size = infoList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        infoList,
        (Il2CppObject *)v7,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      infoList->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v7;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v7, v16, v17, v18, v19, v20, v21);
    }
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  __int64 v3; // x1
  bool v4; // w8
  WarBoardMovieHistoryManager_c *v5; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_5971E46 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E46 = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v2 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v4 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v2->static_fields->infoList,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___);
  v5 = WarBoardMovieHistoryManager_TypeInfo;
  if ( v4 )
  {
    if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v3);
      v5 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = v5->static_fields->infoList;
    if ( !infoList )
      sub_2213CDC(v5, v3);
    size = infoList->fields._size;
    v8 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v8;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
      v5 = WarBoardMovieHistoryManager_TypeInfo;
    }
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3);
    v5 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v5->static_fields->isModfiy = 1;
}


void WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_5971E44 & 1) == 0 )
  {
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E44 = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v2);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  WarBoardMovieHistoryManager_c *v17; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_5971E47 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__);
    sub_2213A60(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_2213A60(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__);
    sub_2213A60(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E47 = 1;
  }
  v7 = sub_2213CCC(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 24) = saveKey;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = phase;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)saveKey, v10, v11, v12, v13, v14, v15);
  v17 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v16);
    v17 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
  v19 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    0);
  if ( !infoList )
LABEL_8:
    sub_2213CDC(v8, v9);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v19,
           (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0;
}


System_String_o *WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971E43 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971E43 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(39, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0

  if ( (byte_5971E45 & 1) == 0 )
  {
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E45 = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v2);
}


bool WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  bool v3; // w20
  WarBoardMovieHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19
  __int64 v6; // x1
  WarBoardMovieHistoryManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  WarBoardMovieHistoryManager_c *v14; // x0
  __int64 v15; // x1
  int v16; // w19
  int v17; // w21
  int v18; // w22
  __int64 v19; // x23
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  WarBoardMovieHistoryManager_c *v36; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v43; // x9
  int *p_offset; // x10
  __int64 v45; // x0
  System_IO_BinaryReader_o *v47; // [xsp+28h] [xbp-48h]

  if ( (byte_5971E49 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E49 = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v6);
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v7);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v9 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0);
  v47 = v9;
  if ( !v9 )
    sub_2213CDC(v10, v11);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                             v9,
                             v9->klass->vtable._22_ReadString.method);
  v14 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v12);
    v14 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
  {
    v3 = 0;
  }
  else
  {
    if ( !v47 )
      sub_2213CDC(0, v15);
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v47->klass->vtable._15_ReadInt32.methodPtr)(
            v47,
            v47->klass->vtable._15_ReadInt32.method);
    if ( v16 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v47->klass->vtable._15_ReadInt32.methodPtr)(
                v47,
                v47->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v47->klass->vtable._15_ReadInt32.methodPtr)(
                v47,
                v47->klass->vtable._15_ReadInt32.method);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v47->klass->vtable._22_ReadString.methodPtr)(
                v47,
                v47->klass->vtable._22_ReadString.method);
        v20 = sub_2213CCC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v20, 0);
        if ( !v20 )
          sub_2213CDC(v21, v22);
        *(_QWORD *)(v20 + 24) = v19;
        *(_DWORD *)(v20 + 16) = v17;
        *(_DWORD *)(v20 + 20) = v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 24), v19, v23, v24, v25, v26, v27, v28);
        v36 = WarBoardMovieHistoryManager_TypeInfo;
        if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v29);
          v36 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v36->static_fields->infoList;
        if ( !infoList
          || (items = infoList->fields._items,
              v39 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__,
              ++infoList->fields._version,
              !items) )
        {
          sub_2213CDC(infoList, v29);
        }
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v20,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v20;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), v20, v30, v31, v32, v33, v34, v35);
        }
        --v16;
      }
      while ( v16 );
    }
    v3 = 1;
  }
  if ( v47 )
  {
    klass = v47->klass;
    v43 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_35;
      }
      v45 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_35:
      v45 = sub_224BC3C(v47, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v45)(v47, *(_QWORD *)(v45 + 8));
  }
  return v3;
}


bool WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  ManagerConfig_c *v3; // x0
  const MethodInfo *v5; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  WarBoardMovieHistoryManager_c *v10; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w19
  __int64 v13; // x1
  int32_t i; // w20
  WarBoardMovieHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  __int64 v17; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  System_IO_BinaryWriter_o *v22; // [xsp+28h] [xbp-38h]

  if ( (byte_5971E4A & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&WarBoardMovieHistoryManager_TypeInfo);
    byte_5971E4A = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v2 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( !v2->static_fields->isModfiy )
    return 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v5 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  }
  *((_BYTE *)v5[2].virtualMethodPointer + 16) = 0;
  FilePath = WarBoardMovieHistoryManager__GetFilePath(v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v8, v7, 0);
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  v22 = v8;
  if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v9);
    v10 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = v10->static_fields->infoList;
  if ( !infoList )
    sub_2213CDC(v10, v9);
  if ( !v8 )
    sub_2213CDC(0, v9);
  size = infoList->fields._size;
  v22->klass->vtable._22_Write.methodPtr();
  v22->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v15 = WarBoardMovieHistoryManager_TypeInfo;
      if ( !*(&WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v13);
        v15 = WarBoardMovieHistoryManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_2213CDC(0, v13);
      if ( !System_Collections_Generic_List_object___get_Item(
              v16,
              i,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__) )
        sub_2213CDC(0, v17);
      if ( !v22 )
        sub_2213CDC(0, v17);
      v22->klass->vtable._17_Write.methodPtr();
      v22->klass->vtable._17_Write.methodPtr();
      v22->klass->vtable._22_Write.methodPtr();
    }
  }
  if ( v22 )
  {
    klass = v22->klass;
    v19 = *(unsigned __int16 *)&v22->klass->_2.rank;
    if ( *(_WORD *)&v22->klass->_2.rank )
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
      v21 = sub_224BC3C(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v22, *(_QWORD *)(v21 + 8));
  }
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
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0);
}