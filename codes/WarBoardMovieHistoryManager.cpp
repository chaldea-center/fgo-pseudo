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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B174D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6770/*"Fgo_20220601"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15759/*"WarBoardStartMovie"*/, v14, v15);
    byte_4B174D7 = 1;
  }
  WarBoardMovieHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6770/*"Fgo_20220601"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields,
    StringLiteral_6770/*"Fgo_20220601"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_15759/*"WarBoardStartMovie"*/;
  static_fields = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  static_fields->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15759/*"WarBoardStartMovie"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SAVE_KEY_START_MOVIE, v16, v18, v19, v20, v21, v22, v23);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v28 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v28->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v27;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->infoList, (int64_t)v27, v29, v30, v31, v32, v33, v34);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  int64_t v14; // x19
  System_Collections_Generic_List_object__o *infoList; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  WarBoardMovieHistoryManager_c *v29; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8

  if ( (byte_4B174D4 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&phase, saveKey);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7, v8);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v9, v10);
    byte_4B174D4 = 1;
  }
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, *(_QWORD *)&phase);
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v14 = sub_1BCAA2C(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v11, v12, v13);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( !v14 )
      goto LABEL_16;
    *(_QWORD *)(v14 + 24) = saveKey;
    *(_DWORD *)(v14 + 16) = questId;
    *(_DWORD *)(v14 + 20) = phase;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)saveKey, v17, v18, v19, v20, v21, v22);
    v29 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v16);
      v29 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_object__o *)v29->static_fields->infoList;
    if ( !infoList
      || (items = infoList->fields._items,
          v31 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__,
          ++infoList->fields._version,
          !items) )
    {
LABEL_16:
      sub_1BCAA3C(infoList, v16);
    }
    size = infoList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        infoList,
        (Il2CppObject *)v14,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + size;
      infoList->fields._size = size + 1;
      v33[4] = (Il2CppClass *)v14;
      sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v14, v23, v24, v25, v26, v27, v28);
    }
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardMovieHistoryManager_c *v7; // x0
  __int64 v8; // x1
  WarBoardMovieHistoryManager_c *v9; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v12; // w9
  WarBoardMovieHistoryManager_c *v13; // x0

  if ( (byte_4B174D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v3, v4);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v5, v6);
    byte_4B174D2 = 1;
  }
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v7 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->infoList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v9 = WarBoardMovieHistoryManager_TypeInfo;
    if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v8);
      v9 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = v9->static_fields->infoList;
    if ( !infoList )
      sub_1BCAA3C(v9, v8);
    size = infoList->fields._size;
    v12 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v13 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v8);
    v13 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardMovieHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B174D0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v1, v2);
    byte_4B174D0 = 1;
  }
  v3 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v3);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  WarBoardMovieHistoryManager_c *v27; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v29; // x20

  if ( (byte_4B174D3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&phase,
      saveKey);
    sub_1BCA7E0(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v9, v10);
    sub_1BCA7E0(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v13, v14);
    byte_4B174D3 = 1;
  }
  v15 = sub_1BCAA2C(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&phase, saveKey, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 24) = saveKey;
  *(_DWORD *)(v15 + 16) = questId;
  *(_DWORD *)(v15 + 20) = phase;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)saveKey, v18, v19, v20, v21, v22, v23);
  v27 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v24);
    v27 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v27->static_fields->infoList;
  v29 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                        v24,
                                        v25,
                                        v26);
  System_Predicate_object____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v29,
           (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B174CF & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B174CF = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardMovieHistoryManager_c *v3; // x0

  if ( (byte_4B174D1 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v1, v2);
    byte_4B174D1 = 1;
  }
  v3 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ManagerConfig_c *v13; // x0
  WarBoardMovieHistoryManager_c *v15; // x0
  System_String_o *FilePath; // x19
  __int64 v17; // x1
  WarBoardMovieHistoryManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x20
  WarBoardMovieHistoryManager_c *v28; // x0
  int v29; // w21
  int v30; // w20
  int v31; // w22
  int v32; // w23
  int64_t v33; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  int64_t v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  WarBoardMovieHistoryManager_c *v53; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v60; // x9
  int32_t *p_offset; // x10
  __int64 v62; // x0

  if ( (byte_4B174D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v11, v12);
    byte_4B174D5 = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 1;
  v15 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v15);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v18 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v17);
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v18);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v23 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v20, v21, v22);
  System_IO_BinaryReader___ctor(v23, v19, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                             v23,
                             v23->klass->vtable._23_ReadChars.methodPtr);
  v28 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v26);
    v28 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v28->static_fields->SAVE_DATA_VERSION, v27, 0LL) )
  {
    v29 = 5;
  }
  else
  {
    v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
            v23,
            v23->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v30 >= 1 )
    {
      do
      {
        v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                v23,
                v23->klass->vtable._23_ReadChars.methodPtr);
        v37 = sub_1BCAA2C(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v34, v35, v36);
        System_Object___ctor((Il2CppObject *)v37, 0LL);
        if ( !v37 )
          sub_1BCAA3C(v38, v39);
        *(_QWORD *)(v37 + 24) = v33;
        *(_DWORD *)(v37 + 16) = v31;
        *(_DWORD *)(v37 + 20) = v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), v33, v40, v41, v42, v43, v44, v45);
        v53 = WarBoardMovieHistoryManager_TypeInfo;
        if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v46);
          v53 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v53->static_fields->infoList;
        if ( !infoList )
          sub_1BCAA3C(0LL, v46);
        items = infoList->fields._items;
        v56 = Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCAA3C(infoList, v46);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v58[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), v37, v47, v48, v49, v50, v51, v52);
        }
        --v30;
      }
      while ( v30 );
    }
    v29 = 8;
  }
  klass = v23->klass;
  v60 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      p_offset += 4;
      if ( !v60 )
        goto LABEL_32;
    }
    v62 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_32:
    v62 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v62)(v23, *(_QWORD *)(v62 + 8));
  return (v29 | 8) == 8;
}


bool __fastcall WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardMovieHistoryManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  const MethodInfo *v16; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  WarBoardMovieHistoryManager_c *v24; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v28; // x1
  int32_t i; // w21
  WarBoardMovieHistoryManager_c *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppObject *Item; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0

  if ( (byte_4B174D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardMovieHistoryManager_TypeInfo, v11, v12);
    byte_4B174D6 = 1;
  }
  v13 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v13 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( !v13->static_fields->isModfiy )
    return 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 0;
  v16 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v1);
    v16 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
  }
  *((_BYTE *)v16[2].virtualMethodPointer + 16) = 0;
  FilePath = WarBoardMovieHistoryManager__GetFilePath(v16);
  v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
  System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
  v24 = WarBoardMovieHistoryManager_TypeInfo;
  if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v23);
    v24 = WarBoardMovieHistoryManager_TypeInfo;
  }
  static_fields = v24->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BCAA3C(v24, v23);
  if ( !v22 )
    sub_1BCAA3C(v24, v23);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v22->klass->vtable._22_Write.method)(
    v22,
    static_fields->SAVE_DATA_VERSION,
    v22->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
    v22,
    (unsigned int)size,
    v22->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v30 = WarBoardMovieHistoryManager_TypeInfo;
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo, v28);
        v30 = WarBoardMovieHistoryManager_TypeInfo;
      }
      v31 = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
      if ( !v31 )
        sub_1BCAA3C(0LL, v28);
      Item = System_Collections_Generic_List_object___get_Item(
               v31,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
      v34 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v33);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        LODWORD(Item[1].klass),
        v22->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        HIDWORD(v34[1].klass),
        v22->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v22->klass->vtable._22_Write.method)(
        v22,
        v34[1].monitor,
        v22->klass[1]._1.image);
    }
  }
  klass = v22->klass;
  v36 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_27;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v38 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v38)(v22, *(_QWORD *)(v38 + 8));
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}