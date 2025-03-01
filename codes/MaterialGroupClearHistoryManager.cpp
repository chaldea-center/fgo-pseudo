void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
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
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BFE934 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1);
    sub_1C2E12C(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v8);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_6809/*"Fgo_20220404"*/, v10);
    byte_4BFE934 = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6809/*"Fgo_20220404"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6809/*"Fgo_20220404"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v11;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
}


void __fastcall MaterialGroupClearHistoryManager___ctor(
        MaterialGroupClearHistoryManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialGroupClearHistoryManager_c *v4; // x0
  __int64 v5; // x1
  MaterialGroupClearHistoryManager_c *v6; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v9; // w9
  MaterialGroupClearHistoryManager_c *v10; // x0

  if ( (byte_4BFE92E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v2);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v3);
    byte_4BFE92E = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v6 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v6 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v6->static_fields->infoList;
    if ( !infoList )
      sub_1C2E388(v6, v5);
    size = infoList->fields._size;
    v9 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v10 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v10 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v10->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4BFE92C & 1) == 0 )
  {
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4BFE92C = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BFE92B & 1) == 0 )
  {
    sub_1C2E12C(&AndroidUtil_TypeInfo, v1);
    sub_1C2E12C(&DatFileName_TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_1102/*"/"*/, v3);
    byte_4BFE92B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_63246844(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  MaterialGroupClearHistoryManager_c *v17; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v19; // x19
  System_Predicate_object__o *v20; // x21

  if ( (byte_4BFE930 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v3);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v4);
    sub_1C2E12C(&System_Predicate_UserQuestEntity__TypeInfo, v5);
    sub_1C2E12C(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v6);
    sub_1C2E12C(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_4BFE930 = 1;
  }
  v8 = sub_1C2E378(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C2E388(v9, v10);
  *(_QWORD *)(v8 + 16) = groupEntities;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)groupEntities, v11, v12, v13, v14, v15, v16);
  v17 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v17);
  if ( !Quests )
    return 0LL;
  v19 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0LL;
  v20 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v8,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v19,
                                (System_Predicate_T__o *)v20,
                                (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x1
  MaterialGroupClearHistoryManager_c *v14; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *QuestClearDummyData; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BFE92F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserQuestMaster___, v1);
    sub_1C2E12C(&DataManager_TypeInfo, v2);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v3);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v4);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v6);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v9);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v10);
    byte_4BFE92F = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserQuestMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v14 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  if ( !infoList )
    sub_1C2E388(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    infoList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v16 )
      break;
    if ( !v32.fields._current )
      sub_1C2E388(v16, v17);
    if ( !Master_object )
      sub_1C2E388(v16, v17);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v32.fields._current[1].klass,
                                            HIDWORD(v32.fields._current[1].klass),
                                            (int64_t)v32.fields._current[1].monitor,
                                            0LL);
    v25 = (int64_t)QuestClearDummyData;
    if ( !v12 )
      sub_1C2E388(QuestClearDummyData, QuestClearDummyData);
    items = v12->fields._items;
    v27 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1C2E388(QuestClearDummyData, QuestClearDummyData);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        QuestClearDummyData,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v25;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 4), v25, v19, v20, v21, v22, v23, v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v12;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_4BFE92D & 1) == 0 )
  {
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4BFE92D = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  MaterialGroupClearHistoryManager_c *v9; // x0
  System_String_o *FilePath; // x19
  MaterialGroupClearHistoryManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  MaterialGroupClearHistoryManager_c *v17; // x0
  int v18; // w21
  char v19; // w20
  MaterialGroupClearHistoryManager_c *v20; // x0
  int v21; // w20
  int v22; // w22
  int v23; // w23
  __int64 v24; // x24
  int64_t v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  MaterialGroupClearHistoryManager_c *v34; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0

  if ( (byte_4BFE932 & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v2);
    sub_1C2E12C(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v3);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v4);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v6);
    byte_4BFE932 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v9);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v11 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v11);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v13 = (System_IO_BinaryReader_o *)sub_1C2E378(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  if ( !v13 )
    sub_1C2E388(v14, v15);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                             v13,
                             v13->klass->vtable._23_ReadChars.methodPtr);
  v17 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v17 = MaterialGroupClearHistoryManager_TypeInfo;
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
    v20 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v20 = MaterialGroupClearHistoryManager_TypeInfo;
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
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._17_ReadInt64.method)(
                v13,
                v13->klass->vtable._18_ReadUInt64.methodPtr);
        v25 = sub_1C2E378(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1C2E388(v26, v27);
        *(_DWORD *)(v25 + 16) = v22;
        *(_DWORD *)(v25 + 20) = v23;
        *(_QWORD *)(v25 + 24) = v24;
        v34 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v34 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v34->static_fields->infoList;
        if ( !infoList )
          sub_1C2E388(0LL, v27);
        items = infoList->fields._items;
        v37 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C2E388(infoList, v27);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v25,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v25;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v39 + 4), v25, v28, v29, v30, v31, v32, v33);
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
    v43 = sub_1C8010C(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v13, *(_QWORD *)(v43 + 8));
  return (v18 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  int32_t v4; // w23
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_object__o *v24; // x21
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *current; // x1
  MaterialGroupClearHistoryManager_c *v35; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v37; // x23
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *v41; // x21
  MaterialGroupClearHistoryManager_c *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x0
  int64_t v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  MaterialGroupClearHistoryManager_c *v51; // x0
  Il2CppClass *klass; // x8
  _QWORD *v53; // x9
  __int64 monitor_low; // x10
  void **v55; // x8
  int32_t v56; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  v4 = phase;
  if ( (byte_4BFE931 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__, v10);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v11);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v13);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v14);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v15);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16);
    sub_1C2E12C(&NetworkManager_TypeInfo, v17);
    sub_1C2E12C(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v18);
    sub_1C2E12C(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__, v19);
    sub_1C2E12C(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v20);
    byte_4BFE931 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0LL);
  if ( IncludedGroups )
  {
    v24 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v56 = v4;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v57,
        v24,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v58 = v57;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v58,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v25 = sub_1C2E378(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1C2E388(v26, v27);
        current = v58.fields._current;
        *(_QWORD *)(v25 + 16) = v58.fields._current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)current, v28, v29, v30, v31, v32, v33);
        v35 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v35 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v35->static_fields->infoList;
        v37 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v37,
          (Il2CppObject *)v25,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0LL);
        if ( !infoList )
          sub_1C2E388(v38, v39);
        v41 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v41 )
        {
          v42 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v42 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v43 = (System_Collections_Generic_List_object__o *)v42->static_fields->infoList;
          if ( !v43 )
            sub_1C2E388(0LL, v40);
          System_Collections_Generic_List_object___Remove(
            v43,
            v41,
            (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v58,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      v4 = v56;
    }
  }
  v44 = sub_1C2E378(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_34;
  *(_DWORD *)(v44 + 16) = questId;
  *(_DWORD *)(v44 + 20) = v4;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v44 + 24) = NetworkManager__getTime(0LL);
  v51 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v51 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v51->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v53 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1C2E388(Master_object, v22);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v44,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v55[4] = (void *)v44;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 4), v44, v45, v46, v47, v48, v49, v50);
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  MaterialGroupClearHistoryManager_c *v8; // x0
  ManagerConfig_c *v9; // x0
  MyRoomStateMaterial_c *v11; // x0
  System_String_o *String; // x0
  const MethodInfo *v13; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v15; // x20
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  MaterialGroupClearHistoryManager_c *v18; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v22; // x1
  int32_t i; // w21
  MaterialGroupClearHistoryManager_c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x0
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0

  if ( (byte_4BFE933 & 1) == 0 )
  {
    sub_1C2E12C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v2);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v3);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v4);
    sub_1C2E12C(&ManagerConfig_TypeInfo, v5);
    sub_1C2E12C(&MaterialGroupClearHistoryManager_TypeInfo, v6);
    sub_1C2E12C(&MyRoomStateMaterial_TypeInfo, v7);
    byte_4BFE933 = 1;
  }
  v8 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v8 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( !v8->static_fields->isModfiy )
    return 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = MyRoomStateMaterial_TypeInfo;
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
    v11 = MyRoomStateMaterial_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v11->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
    MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
  }
  v13 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v13 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  }
  *((_BYTE *)v13[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialGroupClearHistoryManager__GetFilePath(v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v16 = (System_IO_BinaryWriter_o *)sub_1C2E378(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63474076(v16, v15, 0LL);
  v18 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v18 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v18->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C2E388(v18, v17);
  if ( !v16 )
    sub_1C2E388(v18, v17);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    static_fields->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v24 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v24 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      v25 = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
      if ( !v25 )
        sub_1C2E388(0LL, v22);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v28 = Item;
      if ( !Item )
        sub_1C2E388(0LL, v27);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        HIDWORD(v28[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
        v16,
        v28[1].monitor,
        v16->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v16->klass;
  v30 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_33;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v32 = sub_1C8010C(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v16, *(_QWORD *)(v32 + 8));
  return 1;
}


void __fastcall MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_0___GetMaterialFinishReadIncludedGroupQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4BFE935 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x);
    sub_1C2E12C(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v5);
    sub_1C2E12C(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v6);
    sub_1C2E12C(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v7);
    byte_4BFE935 = 1;
  }
  v8 = sub_1C2E378(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = x,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)x, v11, v12, v13, v14, v15, v16),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v18 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v8,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0LL),
        !groupEntities) )
  {
    sub_1C2E388(v9, v10);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_366BED8 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_1___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass10_1___GetMaterialFinishReadIncludedGroupQuest_b__1(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        QuestScriptMaterialNextEntity_o *y,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *x; // x8

  x = this->fields.x;
  if ( !x || !y )
    sub_1C2E388(this, y);
  return x->fields.questId == y->fields.questId;
}


void __fastcall MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialGroupClearHistoryManager___c__DisplayClass11_0___SetMaterialFinishReadQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *x,
        const MethodInfo *method)
{
  struct QuestScriptMaterialNextEntity_o *groupEntity; // x8

  if ( !x || (groupEntity = this->fields.groupEntity) == 0LL )
    sub_1C2E388(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}