void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD4ED & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1);
    sub_1B640C8(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v4);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6622/*"Fgo_20220404"*/, v6);
    byte_49FD4ED = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6622/*"Fgo_20220404"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6622/*"Fgo_20220404"*/,
    v2,
    v3);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12);
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
  MaterialGroupClearHistoryManager_c *v5; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9
  MaterialGroupClearHistoryManager_c *v9; // x0

  if ( (byte_49FD4E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v2);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v3);
    byte_49FD4E7 = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v5 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v5 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v5->static_fields->infoList;
    if ( !infoList )
      sub_1B64324(v5);
    size = infoList->fields._size;
    v8 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v9 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v9 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v9->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_49FD4E5 & 1) == 0 )
  {
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_49FD4E5 = 1;
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

  if ( (byte_49FD4E4 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD4E4 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  MaterialGroupClearHistoryManager_c *v13; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Predicate_object__o *v18; // x21

  if ( (byte_49FD4E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v4);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1B640C8(&System_Predicate_UserQuestEntity__TypeInfo, v6);
    sub_1B640C8(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v7);
    sub_1B640C8(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v8);
    byte_49FD4E9 = 1;
  }
  v9 = sub_1B64314(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = groupEntities;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)groupEntities, v11, v12);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v13);
  if ( !Quests )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0LL;
  v18 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserQuestEntity__TypeInfo, v16, v17);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v15,
                                (System_Predicate_T__o *)v18,
                                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  MaterialGroupClearHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v17; // x0
  Il2CppObject *QuestClearDummyData; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FD4E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestMaster___, v1);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v9);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v10);
    byte_49FD4E8 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserQuestEntity__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v15 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v15 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
  if ( !infoList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    infoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v17 )
      break;
    if ( !v28.fields._current )
      sub_1B64324(v17);
    if ( !Master_object )
      sub_1B64324(v17);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v28.fields._current[1].klass,
                                            HIDWORD(v28.fields._current[1].klass),
                                            (int64_t)v28.fields._current[1].monitor,
                                            0LL);
    v21 = QuestClearDummyData;
    if ( !v14 )
      sub_1B64324(QuestClearDummyData);
    items = v14->fields._items;
    v23 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v14->fields._version;
    if ( !items )
      sub_1B64324(QuestClearDummyData);
    size = v14->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        QuestClearDummyData,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v14->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v14;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_49FD4E6 & 1) == 0 )
  {
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_49FD4E6 = 1;
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  System_String_o *v17; // x20
  MaterialGroupClearHistoryManager_c *v18; // x0
  int v19; // w21
  char v20; // w20
  MaterialGroupClearHistoryManager_c *v21; // x0
  int v22; // w20
  int v23; // w22
  int v24; // w23
  __int64 v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  MaterialGroupClearHistoryManager_c *v32; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0

  if ( (byte_49FD4EB & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1B640C8(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v6);
    byte_49FD4EB = 1;
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
  v15 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v13, v14);
  System_IO_BinaryReader___ctor(v15, v12, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                             v15,
                             v15->klass->vtable._23_ReadChars.methodPtr);
  v18 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v18 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
            v15,
            v15->klass->vtable._10_ReadByte.methodPtr);
    v21 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v21 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
            v15,
            v15->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      do
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                v15,
                v15->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._17_ReadInt64.method)(
                v15,
                v15->klass->vtable._18_ReadUInt64.methodPtr);
        v28 = sub_1B64314(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v26, v27);
        System_Object___ctor((Il2CppObject *)v28, 0LL);
        if ( !v28 )
          sub_1B64324(v29);
        *(_DWORD *)(v28 + 16) = v23;
        *(_DWORD *)(v28 + 20) = v24;
        *(_QWORD *)(v28 + 24) = v25;
        v32 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v32 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
        if ( !infoList )
          sub_1B64324(0LL);
        items = infoList->fields._items;
        v35 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1B64324(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v28, v30, v31);
        }
        --v22;
      }
      while ( v22 );
    }
    v19 = 8;
  }
  klass = v15->klass;
  v39 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_34;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v41 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
  return (v19 | 8) == 8;
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
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t current; // w1
  __int64 v33; // x1
  __int64 v34; // x2
  MaterialGroupClearHistoryManager_c *v35; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v37; // x23
  __int64 v38; // x0
  Il2CppObject *v39; // x21
  MaterialGroupClearHistoryManager_c *v40; // x0
  System_Collections_Generic_List_object__o *v41; // x0
  __int64 v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  MaterialGroupClearHistoryManager_c *v45; // x0
  Il2CppClass *klass; // x8
  _QWORD *v47; // x9
  __int64 monitor_low; // x10
  void **v49; // x8
  int32_t v50; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  v4 = phase;
  if ( (byte_49FD4EA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__, v10);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v14);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v15);
    sub_1B640C8(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    sub_1B640C8(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v18);
    sub_1B640C8(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__, v19);
    sub_1B640C8(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v20);
    byte_49FD4EA = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0LL);
  if ( IncludedGroups )
  {
    v25 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v50 = v4;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        v25,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v52 = v51;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v52,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v28 = sub_1B64314(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v26, v27);
        System_Object___ctor((Il2CppObject *)v28, 0LL);
        if ( !v28 )
          sub_1B64324(v29);
        current = (int32_t)v52.fields._current;
        *(_QWORD *)(v28 + 16) = v52.fields._current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), current, v30, v31);
        v35 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v35 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v35->static_fields->infoList;
        v37 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo,
                                              v33,
                                              v34);
        System_Predicate_object____ctor(
          v37,
          (Il2CppObject *)v28,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0LL);
        if ( !infoList )
          sub_1B64324(v38);
        v39 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v39 )
        {
          v40 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v40 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v41 = (System_Collections_Generic_List_object__o *)v40->static_fields->infoList;
          if ( !v41 )
            sub_1B64324(0LL);
          System_Collections_Generic_List_object___Remove(
            v41,
            v39,
            (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v52,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      v4 = v50;
    }
  }
  v42 = sub_1B64314(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v23, v24);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_34;
  *(_DWORD *)(v42 + 16) = questId;
  *(_DWORD *)(v42 + 20) = v4;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v42 + 24) = NetworkManager__getTime(0LL);
  v45 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v45 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v45->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v47 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1B64324(Master_object);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v42,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v49[4] = (void *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), v42, v43, v44);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  MaterialGroupClearHistoryManager_c *v19; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  MaterialGroupClearHistoryManager_c *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0

  if ( (byte_49FD4EC & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v6);
    sub_1B640C8(&MyRoomStateMaterial_TypeInfo, v7);
    byte_49FD4EC = 1;
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
  v18 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_61613552(v18, v15, 0LL);
  v19 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v19 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1B64324(v19);
  if ( !v18 )
    sub_1B64324(v19);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    static_fields->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
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
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v27 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        LODWORD(Item[1].klass),
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        HIDWORD(v27[1].klass),
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v18->klass->vtable._19_Write.method)(
        v18,
        v27[1].monitor,
        v18->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v18->klass;
  v29 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_33;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v31 = sub_1BB60A8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v18, *(_QWORD *)(v31 + 8));
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *groupEntities; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Predicate_object__o *v15; // x20

  if ( (byte_49FD4EE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x);
    sub_1B640C8(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v5);
    sub_1B640C8(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v6);
    sub_1B640C8(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v7);
    byte_49FD4EE = 1;
  }
  v8 = sub_1B64314(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, x, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = x,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)x, v10, v11),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v15 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_QuestScriptMaterialNextEntity__TypeInfo,
                                              v13,
                                              v14),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v8,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0LL),
        !groupEntities) )
  {
    sub_1B64324(v9);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_34ADD00 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.questId == groupEntity->fields.questId;
}