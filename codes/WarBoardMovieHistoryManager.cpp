void __fastcall WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B67EEA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v1);
    sub_1BE4ACC(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_6787/*"Fgo_20220601"*/, v10);
    sub_1BE4ACC(&StringLiteral_15799/*"WarBoardStartMovie"*/, v11);
    byte_4B67EEA = 1;
  }
  WarBoardMovieHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6787/*"Fgo_20220601"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields,
    StringLiteral_6787/*"Fgo_20220601"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_15799/*"WarBoardStartMovie"*/;
  static_fields = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  static_fields->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15799/*"WarBoardStartMovie"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_START_MOVIE, v12, v14, v15, v16, v17, v18, v19);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v21 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v21->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v20;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v21->infoList, (int64_t)v20, v22, v23, v24, v25, v26, v27);
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
  int64_t v9; // x19
  System_Collections_Generic_List_object__o *infoList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  WarBoardMovieHistoryManager_c *v24; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_4B67EE7 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&phase);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v8);
    byte_4B67EE7 = 1;
  }
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v9 = sub_1BE4D18(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9 )
      goto LABEL_16;
    *(_QWORD *)(v9 + 24) = saveKey;
    *(_DWORD *)(v9 + 16) = questId;
    *(_DWORD *)(v9 + 20) = phase;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)saveKey, v12, v13, v14, v15, v16, v17);
    v24 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v24 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
    if ( !infoList
      || (items = infoList->fields._items,
          v26 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__,
          ++infoList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1BE4D28(infoList, v11);
    }
    size = infoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        infoList,
        (Il2CppObject *)v9,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      v28 = &items->obj.klass + size;
      infoList->fields._size = size + 1;
      v28[4] = (Il2CppClass *)v9;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v9, v18, v19, v20, v21, v22, v23);
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
  __int64 v5; // x1
  WarBoardMovieHistoryManager_c *v6; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v9; // w9
  WarBoardMovieHistoryManager_c *v10; // x0

  if ( (byte_4B67EE5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v2);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_4B67EE5 = 1;
  }
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v4 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v6 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v6 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = v6->static_fields->infoList;
    if ( !infoList )
      sub_1BE4D28(v6, v5);
    size = infoList->fields._size;
    v9 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v10 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v10->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B67EE3 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_4B67EE3 = 1;
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  WarBoardMovieHistoryManager_c *v20; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v22; // x20

  if ( (byte_4B67EE6 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&phase);
    sub_1BE4ACC(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v7);
    sub_1BE4ACC(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v8);
    sub_1BE4ACC(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v9);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v10);
    byte_4B67EE6 = 1;
  }
  v11 = sub_1BE4D18(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 24) = saveKey;
  *(_DWORD *)(v11 + 16) = questId;
  *(_DWORD *)(v11 + 20) = phase;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)saveKey, v14, v15, v16, v17, v18, v19);
  v20 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v20 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v20->static_fields->infoList;
  v22 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1BE4D28(v12, v13);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v22,
           (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B67EE2 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, v1);
    sub_1BE4ACC(&DatFileName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B67EE2 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_62710068(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0

  if ( (byte_4B67EE4 & 1) == 0 )
  {
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_4B67EE4 = 1;
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
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  WarBoardMovieHistoryManager_c *v17; // x0
  int v18; // w21
  int v19; // w20
  int v20; // w22
  int v21; // w23
  int64_t v22; // x24
  int64_t v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  WarBoardMovieHistoryManager_c *v39; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0

  if ( (byte_4B67EE8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v4);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v5);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_4B67EE8 = 1;
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
  v13 = (System_IO_BinaryReader_o *)sub_1BE4D18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  if ( !v13 )
    sub_1BE4D28(v14, v15);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                             v13,
                             v13->klass->vtable._23_ReadChars.methodPtr);
  v17 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v17 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
  {
    v18 = 5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
            v13,
            v13->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v19 >= 1 )
    {
      do
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                v13,
                v13->klass->vtable._23_ReadChars.methodPtr);
        v23 = sub_1BE4D18(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v23, 0LL);
        if ( !v23 )
          sub_1BE4D28(v24, v25);
        *(_QWORD *)(v23 + 24) = v22;
        *(_DWORD *)(v23 + 16) = v20;
        *(_DWORD *)(v23 + 20) = v21;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 24), v22, v26, v27, v28, v29, v30, v31);
        v39 = WarBoardMovieHistoryManager_TypeInfo;
        if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v39 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v39->static_fields->infoList;
        if ( !infoList )
          sub_1BE4D28(0LL, v32);
        items = infoList->fields._items;
        v42 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BE4D28(infoList, v32);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v23,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v23;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), v23, v33, v34, v35, v36, v37, v38);
        }
        --v19;
      }
      while ( v19 );
    }
    v18 = 8;
  }
  klass = v13->klass;
  v46 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      p_offset += 4;
      if ( !v46 )
        goto LABEL_32;
    }
    v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v48 = sub_1C36AAC(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v48)(v13, *(_QWORD *)(v48 + 8));
  return (v18 | 8) == 8;
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
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  WarBoardMovieHistoryManager_c *v15; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  WarBoardMovieHistoryManager_c *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_4B67EE9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__, v4);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v5);
    sub_1BE4ACC(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_4B67EE9 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1BE4D18(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_62937300(v13, v12, 0LL);
  v15 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v15 = WarBoardMovieHistoryManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BE4D28(v15, v14);
  if ( !v13 )
    sub_1BE4D28(v15, v14);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
    v13,
    static_fields->SAVE_DATA_VERSION,
    v13->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
    v13,
    (unsigned int)size,
    v13->klass->vtable._18_Write.methodPtr);
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
        sub_1BE4D28(0LL, v19);
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               i,
               (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1BE4D28(0LL, v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        HIDWORD(v25[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v13->klass->vtable._22_Write.method)(
        v13,
        v25[1].monitor,
        v13->klass[1]._1.image);
    }
  }
  klass = v13->klass;
  v27 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v29 = sub_1C36AAC(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
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
    sub_1BE4D28(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}