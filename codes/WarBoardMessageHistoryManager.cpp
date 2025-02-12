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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB5A0C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v1);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6806/*"Fgo_20210908"*/, v10);
    byte_4BB5A0C = 1;
  }
  WarBoardMessageHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6806/*"Fgo_20210908"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields,
    StringLiteral_6806/*"Fgo_20210908"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  static_fields = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
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
  __int64 v5; // x1
  WarBoardMessageHistoryManager_c *v6; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v9; // w9
  WarBoardMessageHistoryManager_c *v10; // x0

  if ( (byte_4BB5A07 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v2);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v3);
    byte_4BB5A07 = 1;
  }
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v4 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v6 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v6 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = v6->static_fields->infoList;
    if ( !infoList )
      sub_1C13F80(v6, v5);
    size = infoList->fields._size;
    v9 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  *(_WORD *)&v10->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4BB5A05 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_4BB5A05 = 1;
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

  if ( (byte_4BB5A04 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, v1);
    sub_1C13D24(&DatFileName_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v3);
    byte_4BB5A04 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_62979204(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0

  if ( (byte_4BB5A06 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_4BB5A06 = 1;
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
  WarBoardMessageHistoryManager_c *v14; // x0
  System_Collections_Generic_List_object__o *infoList; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_4BB5A08 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&sceneType);
    sub_1C13D24(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v8);
    sub_1C13D24(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v9);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v10);
    byte_4BB5A08 = 1;
  }
  v11 = sub_1C13F70(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = stageId;
  *(_DWORD *)(v11 + 20) = sceneType;
  *(_DWORD *)(v11 + 24) = idx;
  v14 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v14 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  v16 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    0LL);
  if ( !infoList )
LABEL_8:
    sub_1C13F80(v12, v13);
  return System_Collections_Generic_List_object___Find(
           infoList,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
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
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  WarBoardMessageHistoryManager_c *v17; // x0
  int v18; // w21
  char v19; // w20
  WarBoardMessageHistoryManager_c *v20; // x0
  int v21; // w20
  int v22; // w22
  int v23; // w23
  int v24; // w24
  int64_t v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  WarBoardMessageHistoryManager_c *v34; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0

  if ( (byte_4BB5A0A & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C13D24(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_4BB5A0A = 1;
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
  v13 = (System_IO_BinaryReader_o *)sub_1C13F70(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                             v13,
                             v13->klass->vtable._23_ReadChars.methodPtr);
  v17 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v17 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
  {
    v18 = 5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
            v13,
            v13->klass->vtable._10_ReadByte.methodPtr);
    v20 = WarBoardMessageHistoryManager_TypeInfo;
    if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v20 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v20->static_fields->isContinueDevice = v19 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
            v13,
            v13->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      do
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = sub_1C13F70(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1C13F80(v26, v27);
        *(_DWORD *)(v25 + 16) = v22;
        *(_DWORD *)(v25 + 20) = v23;
        *(_DWORD *)(v25 + 24) = v24;
        v34 = WarBoardMessageHistoryManager_TypeInfo;
        if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v34 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v34->static_fields->infoList;
        if ( !infoList )
          sub_1C13F80(0LL, v27);
        items = infoList->fields._items;
        v37 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C13F80(infoList, v27);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v25,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v25;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v25, v28, v29, v30, v31, v32, v33);
        }
        --v21;
      }
      while ( v21 );
    }
    v18 = 8;
  }
  klass = v13->klass;
  v41 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_34;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v43 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
  return (v18 | 8) == 8;
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
  WarBoardMessageHistoryManager_c *v16; // x0
  System_Collections_Generic_List_object__o *infoList; // x20
  System_Predicate_object__o *v18; // x21
  int64_t v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  WarBoardMessageHistoryManager_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8

  if ( (byte_4BB5A09 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&sceneType);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v8);
    sub_1C13D24(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v9);
    sub_1C13D24(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v10);
    sub_1C13D24(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v11);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v12);
    byte_4BB5A09 = 1;
  }
  v13 = sub_1C13F70(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_18;
  *(_DWORD *)(v13 + 16) = stageId;
  *(_DWORD *)(v13 + 20) = sceneType;
  *(_DWORD *)(v13 + 24) = idx;
  v16 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v16 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
  v18 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_18;
  if ( System_Collections_Generic_List_object___Find(
         infoList,
         (System_Predicate_T__o *)v18,
         (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v19 = sub_1C13F70(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_18;
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v13 + 16);
  *(_DWORD *)(v19 + 24) = *(_DWORD *)(v13 + 24);
  v26 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v26 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v14 = (System_Collections_Generic_List_object__o *)v26->static_fields->infoList;
  if ( !v14
    || (items = v14->fields._items,
        v28 = Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__,
        ++v14->fields._version,
        !items) )
  {
LABEL_18:
    sub_1C13F80(v14, v15);
  }
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v19,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), v19, v20, v21, v22, v23, v24, v25);
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
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  WarBoardMessageHistoryManager_c *v15; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  WarBoardMessageHistoryManager_c *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_4BB5A0B & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__, v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_4BB5A0B = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1C13F70(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63206436(v13, v12, 0LL);
  v15 = WarBoardMessageHistoryManager_TypeInfo;
  if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v15 = WarBoardMessageHistoryManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C13F80(v15, v14);
  if ( !v13 )
    sub_1C13F80(v15, v14);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
    v13,
    static_fields->SAVE_DATA_VERSION,
    v13->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
    v13,
    WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v13->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
    v13,
    (unsigned int)size,
    v13->klass->vtable._18_Write.methodPtr);
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
        sub_1C13F80(0LL, v19);
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               i,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1C13F80(0LL, v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        HIDWORD(v25[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(v25[1].monitor),
        v13->klass->vtable._18_Write.methodPtr);
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
    v29 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}