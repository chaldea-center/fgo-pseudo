void __fastcall WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
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
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B174CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6769/*"Fgo_20220427"*/, v12, v13);
    byte_4B174CE = 1;
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6769/*"Fgo_20220427"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields,
    StringLiteral_6769/*"Fgo_20220427"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  static_fields = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  WarBoardMessageHistoryManager_c *v7; // x0
  __int64 v8; // x1
  WarBoardMessageHistoryManager_c *v9; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v12; // w9
  WarBoardMessageHistoryManager_c *v13; // x0

  if ( (byte_4B174C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v3, v4);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v5, v6);
    byte_4B174C9 = 1;
  }
  v7 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
    v7 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->infoList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v9 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v8);
      v9 = WarBoardMessageHistoryManager_TypeInfo;
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
  v13 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v8);
    v13 = WarBoardMessageHistoryManager_TypeInfo;
  }
  *(_WORD *)&v13->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardMessageHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B174C7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v1, v2);
    byte_4B174C7 = 1;
  }
  v3 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v3);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
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

  if ( (byte_4B174C6 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B174C6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardMessageHistoryManager_c *v3; // x0

  if ( (byte_4B174C8 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v1, v2);
    byte_4B174C8 = 1;
  }
  v3 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
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
  __int64 v18; // x2
  __int64 v19; // x3
  WarBoardMessageHistoryManager_c *v20; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v22; // x20

  if ( (byte_4B174CA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&sceneType,
      *(_QWORD *)&idx);
    sub_1BCA7E0(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v9, v10);
    sub_1BCA7E0(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v11, v12);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v13, v14);
    byte_4B174CA = 1;
  }
  v15 = sub_1BCAA2C(
          WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo,
          *(_QWORD *)&sceneType,
          *(_QWORD *)&idx,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 16) = stageId;
  *(_DWORD *)(v15 + 20) = sceneType;
  *(_DWORD *)(v15 + 24) = idx;
  v20 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v17);
    v20 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v20->static_fields->infoList;
  v22 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                        v17,
                                        v18,
                                        v19);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v22,
           (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
}


bool __fastcall WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v15; // x0
  System_String_o *FilePath; // x19
  __int64 v17; // x1
  WarBoardMessageHistoryManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x20
  WarBoardMessageHistoryManager_c *v28; // x0
  int v29; // w21
  __int64 v30; // x1
  char v31; // w20
  WarBoardMessageHistoryManager_c *v32; // x0
  int v33; // w20
  int v34; // w22
  int v35; // w23
  int v36; // w24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  WarBoardMessageHistoryManager_c *v49; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0

  if ( (byte_4B174CC & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v11, v12);
    byte_4B174CC = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 1;
  v15 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v15);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v18 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v17);
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v18);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v23 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v20, v21, v22);
  System_IO_BinaryReader___ctor(v23, v19, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                             v23,
                             v23->klass->vtable._23_ReadChars.methodPtr);
  v28 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v26);
    v28 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v28->static_fields->SAVE_DATA_VERSION, v27, 0LL) )
  {
    v29 = 5;
  }
  else
  {
    v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._9_ReadBoolean.method)(
            v23,
            v23->klass->vtable._10_ReadByte.methodPtr);
    v32 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v30);
      v32 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v32->static_fields->isContinueDevice = v31 & 1;
    v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
            v23,
            v23->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v33 >= 1 )
    {
      do
      {
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
                v23,
                v23->klass->vtable._16_ReadUInt32.methodPtr);
        v40 = sub_1BCAA2C(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v37, v38, v39);
        System_Object___ctor((Il2CppObject *)v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        *(_DWORD *)(v40 + 16) = v34;
        *(_DWORD *)(v40 + 20) = v35;
        *(_DWORD *)(v40 + 24) = v36;
        v49 = WarBoardMessageHistoryManager_TypeInfo;
        if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v42);
          v49 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v49->static_fields->infoList;
        if ( !infoList )
          sub_1BCAA3C(0LL, v42);
        items = infoList->fields._items;
        v52 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCAA3C(infoList, v42);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v40,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
        }
        --v33;
      }
      while ( v33 );
    }
    v29 = 8;
  }
  klass = v23->klass;
  v56 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      p_offset += 4;
      if ( !v56 )
        goto LABEL_34;
    }
    v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v58 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v23, *(_QWORD *)(v58 + 8));
  return (v29 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  System_Collections_Generic_List_object__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  WarBoardMessageHistoryManager_c *v24; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  int64_t v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  WarBoardMessageHistoryManager_c *v37; // x0
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8

  if ( (byte_4B174CB & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&sceneType, *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v9, v10);
    sub_1BCA7E0(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v17, v18);
    byte_4B174CB = 1;
  }
  v19 = sub_1BCAA2C(
          WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&sceneType,
          *(_QWORD *)&idx,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_18;
  *(_DWORD *)(v19 + 16) = stageId;
  *(_DWORD *)(v19 + 20) = sceneType;
  *(_DWORD *)(v19 + 24) = idx;
  v24 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v21);
    v24 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
  v26 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                        v21,
                                        v22,
                                        v23);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_18;
  if ( System_Collections_Generic_List_object___Find(
         infoList,
         (System_Predicate_T__o *)v26,
         (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v30 = sub_1BCAA2C(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v27, v28, v29);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_18;
  *(_QWORD *)(v30 + 16) = *(_QWORD *)(v19 + 16);
  *(_DWORD *)(v30 + 24) = *(_DWORD *)(v19 + 24);
  v37 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v21);
    v37 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v20 = (System_Collections_Generic_List_object__o *)v37->static_fields->infoList;
  if ( !v20
    || (items = v20->fields._items,
        v39 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__,
        ++v20->fields._version,
        !items) )
  {
LABEL_18:
    sub_1BCAA3C(v20, v21);
  }
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v30,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v41[4] = (Il2CppClass *)v30;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), v30, v31, v32, v33, v34, v35, v36);
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  const MethodInfo *v16; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  WarBoardMessageHistoryManager_c *v24; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v28; // x1
  int32_t i; // w21
  WarBoardMessageHistoryManager_c *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x0
  Il2CppObject *Item; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0

  if ( (byte_4B174CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardMessageHistoryManager_TypeInfo, v11, v12);
    byte_4B174CD = 1;
  }
  v13 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
    v13 = WarBoardMessageHistoryManager_TypeInfo;
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
  v16 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v1);
    v16 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
  }
  *((_BYTE *)v16[2].virtualMethodPointer + 8) = 0;
  FilePath = WarBoardMessageHistoryManager__GetFilePath(v16);
  v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
  System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
  v24 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v23);
    v24 = WarBoardMessageHistoryManager_TypeInfo;
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
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v22->klass->vtable._8_Write.method)(
    v22,
    WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v22->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
    v22,
    (unsigned int)size,
    v22->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v30 = WarBoardMessageHistoryManager_TypeInfo;
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo, v28);
        v30 = WarBoardMessageHistoryManager_TypeInfo;
      }
      v31 = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
      if ( !v31 )
        sub_1BCAA3C(0LL, v28);
      Item = System_Collections_Generic_List_object___get_Item(
               v31,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
        v22,
        LODWORD(v34[1].monitor),
        v22->klass->vtable._18_Write.methodPtr);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}