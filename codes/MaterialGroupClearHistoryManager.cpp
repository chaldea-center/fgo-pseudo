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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17338 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6768/*"Fgo_20220404"*/, v12, v13);
    byte_4B17338 = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6768/*"Fgo_20220404"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6768/*"Fgo_20220404"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->infoList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialGroupClearHistoryManager_c *v7; // x0
  __int64 v8; // x1
  MaterialGroupClearHistoryManager_c *v9; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v12; // w9
  MaterialGroupClearHistoryManager_c *v13; // x0

  if ( (byte_4B17332 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v3,
      v4);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v5, v6);
    byte_4B17332 = 1;
  }
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
    v7 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->infoList,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v9 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v8);
      v9 = MaterialGroupClearHistoryManager_TypeInfo;
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
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v8);
    v13 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v13->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialGroupClearHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B17330 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v1, v2);
    byte_4B17330 = 1;
  }
  v3 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v3);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
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

  if ( (byte_4B1732F & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B1732F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  MaterialGroupClearHistoryManager_c *v25; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Predicate_object__o *v31; // x21

  if ( (byte_4B17334 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v5, v6);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_UserQuestEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v11,
      v12);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v13, v14);
    byte_4B17334 = 1;
  }
  v15 = sub_1BCAA2C(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, method, v2, v3);
  MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
    (MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *)v15,
    0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = groupEntities;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)groupEntities, v18, v19, v20, v21, v22, v23);
  v25 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v24);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v25);
  if ( !Quests )
    return 0LL;
  v27 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0LL;
  v31 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserQuestEntity__TypeInfo, v28, v29, v30);
  System_Predicate_object____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v27,
                                (System_Predicate_T__o *)v31,
                                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Master_object; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x19
  __int64 v26; // x1
  MaterialGroupClearHistoryManager_c *v27; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *QuestClearDummyData; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B17333 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, v1, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v19, v20);
    byte_4B17333 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v27 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v26);
    v27 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v27->static_fields->infoList;
  if ( !infoList )
    sub_1BCAA3C(0LL, v26);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    infoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v29 )
      break;
    if ( !v45.fields._current )
      sub_1BCAA3C(v29, v30);
    if ( !Master_object )
      sub_1BCAA3C(v29, v30);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v45.fields._current[1].klass,
                                            HIDWORD(v45.fields._current[1].klass),
                                            (int64_t)v45.fields._current[1].monitor,
                                            0LL);
    v38 = (int64_t)QuestClearDummyData;
    if ( !v25 )
      sub_1BCAA3C(QuestClearDummyData, QuestClearDummyData);
    items = v25->fields._items;
    v40 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v25->fields._version;
    if ( !items )
      sub_1BCAA3C(QuestClearDummyData, QuestClearDummyData);
    size = v25->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        QuestClearDummyData,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      v25->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v38;
      sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), v38, v32, v33, v34, v35, v36, v37);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v25;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialGroupClearHistoryManager_c *v3; // x0

  if ( (byte_4B17331 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v1, v2);
    byte_4B17331 = 1;
  }
  v3 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v15; // x0
  System_String_o *FilePath; // x19
  __int64 v17; // x1
  MaterialGroupClearHistoryManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x20
  MaterialGroupClearHistoryManager_c *v28; // x0
  int v29; // w21
  __int64 v30; // x1
  char v31; // w20
  MaterialGroupClearHistoryManager_c *v32; // x0
  int v33; // w20
  int32_t v34; // w22
  int32_t v35; // w23
  __int64 v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  MaterialGroupClearHistoryManager_c *v49; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0

  if ( (byte_4B17336 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v5,
      v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v11, v12);
    byte_4B17336 = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 1;
  v15 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v15);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v18 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v17);
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v18);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v23 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v20, v21, v22);
  System_IO_BinaryReader___ctor(v23, v19, 0LL);
  if ( !v23 )
    sub_1BCAA3C(v24, v25);
  v27 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                             v23,
                             v23->klass->vtable._23_ReadChars.methodPtr);
  v28 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v26);
    v28 = MaterialGroupClearHistoryManager_TypeInfo;
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
    v32 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v30);
      v32 = MaterialGroupClearHistoryManager_TypeInfo;
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
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._17_ReadInt64.method)(
                v23,
                v23->klass->vtable._18_ReadUInt64.methodPtr);
        v40 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_1BCAA2C(
                                                                          MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                          v37,
                                                                          v38,
                                                                          v39);
        MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        v40->fields.questId = v34;
        v40->fields.phase = v35;
        v40->fields.updatedAt = v36;
        v49 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v42);
          v49 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v49->static_fields->infoList;
        if ( !infoList )
          sub_1BCAA3C(0LL, v42);
        items = infoList->fields._items;
        v52 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
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
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v40, v43, v44, v45, v46, v47, v48);
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
void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  int32_t v4; // w23
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *Master_object; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  Il2CppObject *current; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  MaterialGroupClearHistoryManager_c *v59; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v61; // x23
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  Il2CppObject *v65; // x21
  MaterialGroupClearHistoryManager_c *v66; // x0
  System_Collections_Generic_List_object__o *v67; // x0
  MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *v68; // x21
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  MaterialGroupClearHistoryManager_c *v75; // x0
  Il2CppClass *klass; // x8
  _QWORD *v77; // x9
  __int64 monitor_low; // x10
  void **v79; // x8
  int32_t v80; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-80h] BYREF

  v4 = phase;
  if ( (byte_4B17335 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase, updatedAt);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v18,
      v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v22,
      v23);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v30, v31);
    sub_1BCA7E0(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
      v32,
      v33);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v34, v35);
    byte_4B17335 = 1;
  }
  memset(&v82, 0, sizeof(v82));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&phase);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0LL);
  if ( IncludedGroups )
  {
    v42 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v80 = v4;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v81,
        v42,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v82 = v81;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v82,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v46 = sub_1BCAA2C(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v43, v44, v45);
        MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
          (MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *)v46,
          0LL);
        if ( !v46 )
          sub_1BCAA3C(v47, v48);
        current = v82.fields._current;
        *(_QWORD *)(v46 + 16) = v82.fields._current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 16), (int64_t)current, v49, v50, v51, v52, v53, v54);
        v59 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v56);
          v59 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v59->static_fields->infoList;
        v61 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                              v56,
                                              v57,
                                              v58);
        System_Predicate_object____ctor(
          v61,
          (Il2CppObject *)v46,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0LL);
        if ( !infoList )
          sub_1BCAA3C(v62, v63);
        v65 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v61,
                (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v65 )
        {
          v66 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v64);
            v66 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v67 = (System_Collections_Generic_List_object__o *)v66->static_fields->infoList;
          if ( !v67 )
            sub_1BCAA3C(0LL, v64);
          System_Collections_Generic_List_object___Remove(
            v67,
            v65,
            (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v82,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      v4 = v80;
    }
  }
  v68 = (MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *)sub_1BCAA2C(
                                                                    MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo,
                                                                    v39,
                                                                    v40,
                                                                    v41);
  MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(v68, 0LL);
  if ( !v68 )
    goto LABEL_34;
  v68->fields.questId = questId;
  v68->fields.phase = v4;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  v68->fields.updatedAt = NetworkManager__getTime(0LL);
  v75 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v37);
    v75 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v75->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v77 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1BCAA3C(Master_object, v37);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v68,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v79[4] = v68;
    sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v68, v69, v70, v71, v72, v73, v74);
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
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
  __int64 v13; // x1
  __int64 v14; // x2
  MaterialGroupClearHistoryManager_c *v15; // x0
  ManagerConfig_c *v16; // x0
  MyRoomStateMaterial_c *v18; // x0
  System_String_o *String; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_IO_BinaryWriter_o *v27; // x19
  __int64 v28; // x1
  MaterialGroupClearHistoryManager_c *v29; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v33; // x1
  int32_t i; // w21
  MaterialGroupClearHistoryManager_c *v35; // x0
  System_Collections_Generic_List_object__o *v36; // x0
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0

  if ( (byte_4B17337 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v7,
      v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&MyRoomStateMaterial_TypeInfo, v13, v14);
    byte_4B17337 = 1;
  }
  v15 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
    v15 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( !v15->static_fields->isModfiy )
    return 0;
  v16 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( v16->static_fields->UseMock )
    return 0;
  v18 = MyRoomStateMaterial_TypeInfo;
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v1);
    v18 = MyRoomStateMaterial_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v18->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v20);
    MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
  }
  v21 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v20);
    v21 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  }
  *((_BYTE *)v21[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialGroupClearHistoryManager__GetFilePath(v21);
  v23 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v27 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v24, v25, v26);
  System_IO_BinaryWriter___ctor_62639712(v27, v23, 0LL);
  v29 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v28);
    v29 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v29->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BCAA3C(v29, v28);
  if ( !v27 )
    sub_1BCAA3C(v29, v28);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v27->klass->vtable._22_Write.method)(
    v27,
    static_fields->SAVE_DATA_VERSION,
    v27->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v27->klass->vtable._8_Write.method)(
    v27,
    MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v27->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
    v27,
    (unsigned int)size,
    v27->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v35 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v33);
        v35 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      v36 = (System_Collections_Generic_List_object__o *)v35->static_fields->infoList;
      if ( !v36 )
        sub_1BCAA3C(0LL, v33);
      Item = System_Collections_Generic_List_object___get_Item(
               v36,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v39 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v38);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
        v27,
        LODWORD(Item[1].klass),
        v27->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v27->klass->vtable._17_Write.method)(
        v27,
        HIDWORD(v39[1].klass),
        v27->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v27->klass->vtable._19_Write.method)(
        v27,
        v39[1].monitor,
        v27->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v27->klass;
  v41 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_33;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v43 = sub_1C1C7C0(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v43)(v27, *(_QWORD *)(v43 + 8));
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *groupEntities; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Predicate_object__o *v25; // x20

  if ( (byte_4B1733A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x, method);
    sub_1BCA7E0(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v8,
      v9);
    sub_1BCA7E0(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v10, v11);
    byte_4B1733A = 1;
  }
  v12 = sub_1BCAA2C(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, x, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = x,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)x, v15, v16, v17, v18, v19, v20),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_QuestScriptMaterialNextEntity__TypeInfo,
                                              v22,
                                              v23,
                                              v24),
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0LL),
        !groupEntities) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v25,
           (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_1BCAA3C(this, y);
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
    sub_1BCAA3C(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}