void MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C442D9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C37058(&StringLiteral_6684/*"Fgo_20220404"*/);
    byte_4C442D9 = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6684/*"Fgo_20220404"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6684/*"Fgo_20220404"*/,
    v1,
    v2);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void MaterialGroupClearHistoryManager___ctor(MaterialGroupClearHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  MaterialGroupClearHistoryManager_c *v2; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v5; // w9
  MaterialGroupClearHistoryManager_c *v6; // x0

  if ( (byte_4C442D3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4C442D3 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v2 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v2 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v2->static_fields->infoList;
    if ( !infoList )
      sub_1C372B4(v2);
    size = infoList->fields._size;
    v5 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v6 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v6 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v6->static_fields->isModfiy = 1;
}


void MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4C442D1 & 1) == 0 )
  {
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4C442D1 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C442D0 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C442D0 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


UserQuestEntity_o *MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  MaterialGroupClearHistoryManager_c *v7; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  System_Predicate_object__o *v10; // x21

  if ( (byte_4C442D5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UserQuestEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C37058(&System_Predicate_UserQuestEntity__TypeInfo);
    sub_1C37058(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__);
    sub_1C37058(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
    byte_4C442D5 = 1;
  }
  v3 = sub_1C372A4(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 16) = groupEntities;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)groupEntities, v5, v6);
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v7);
  if ( !Quests )
    return 0;
  v9 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0;
  v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v9,
                                (System_Predicate_T__o *)v10,
                                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v2; // x19
  MaterialGroupClearHistoryManager_c *v3; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v5; // x0
  Il2CppObject *QuestClearDummyData; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x1
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C442D4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4C442D4 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v2 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v3 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v3 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v3->static_fields->infoList;
  if ( !infoList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    infoList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v5 )
      break;
    if ( !v16.fields._current )
      sub_1C372B4(v5);
    if ( !Master_object )
      sub_1C372B4(v5);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v16.fields._current[1].klass,
                                            HIDWORD(v16.fields._current[1].klass),
                                            (int64_t)v16.fields._current[1].monitor,
                                            0);
    v9 = QuestClearDummyData;
    if ( !v2 )
      sub_1C372B4(QuestClearDummyData);
    items = v2->fields._items;
    v11 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v2->fields._version;
    if ( !items )
      sub_1C372B4(QuestClearDummyData);
    size = v2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v2,
        QuestClearDummyData,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v2->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v9;
      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v9, v7, v8);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v2;
}


void MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0

  if ( (byte_4C442D2 & 1) == 0 )
  {
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4C442D2 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v1);
}


bool MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  MaterialGroupClearHistoryManager_c *v3; // x0
  System_String_o *FilePath; // x19
  MaterialGroupClearHistoryManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  System_String_o *v9; // x20
  MaterialGroupClearHistoryManager_c *v10; // x0
  int v11; // w21
  char v12; // w20
  MaterialGroupClearHistoryManager_c *v13; // x0
  int v14; // w20
  int v15; // w22
  int v16; // w23
  __int64 v17; // x24
  __int64 v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  MaterialGroupClearHistoryManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0

  if ( (byte_4C442D7 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    byte_4C442D7 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v5 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v5);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                            v7,
                            v7->klass->vtable._22_ReadString.method);
  v10 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v10 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
  {
    v11 = 5;
  }
  else
  {
    v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v13 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v13 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v13->static_fields->isContinueDevice = v12 & 1;
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v14 >= 1 )
    {
      do
      {
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._17_ReadInt64.methodPtr)(
                v7,
                v7->klass->vtable._17_ReadInt64.method);
        v18 = sub_1C372A4(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0);
        if ( !v18 )
          sub_1C372B4(v19);
        *(_DWORD *)(v18 + 16) = v15;
        *(_DWORD *)(v18 + 20) = v16;
        *(_QWORD *)(v18 + 24) = v17;
        v22 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v22 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
        if ( !infoList )
          sub_1C372B4(0);
        items = infoList->fields._items;
        v25 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C372B4(infoList);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
        }
        --v14;
      }
      while ( v14 );
    }
    v11 = 8;
  }
  klass = v7->klass;
  v29 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_34;
    }
    v31 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v31 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v7, *(_QWORD *)(v31 + 8));
  return (v11 | 8) == 8;
}


void MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t current; // w1
  MaterialGroupClearHistoryManager_c *v14; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v16; // x23
  __int64 v17; // x0
  Il2CppObject *v18; // x21
  MaterialGroupClearHistoryManager_c *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x0
  __int64 v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MaterialGroupClearHistoryManager_c *v24; // x0
  Il2CppClass *klass; // x8
  _QWORD *v26; // x9
  __int64 monitor_low; // x10
  void **v28; // x8
  int32_t v29; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C442D6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1C37058(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__);
    sub_1C37058(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
    byte_4C442D6 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0);
  if ( IncludedGroups )
  {
    v8 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v29 = phase;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        v8,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v31 = v30;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v9 = sub_1C372A4(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        if ( !v9 )
          sub_1C372B4(v10);
        current = (int32_t)v31.fields._current;
        *(_QWORD *)(v9 + 16) = v31.fields._current;
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), current, v11, v12);
        v14 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v14 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
        v16 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v16,
          (Il2CppObject *)v9,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0);
        if ( !infoList )
          sub_1C372B4(v17);
        v18 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v16,
                (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v18 )
        {
          v19 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v19 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v20 = (System_Collections_Generic_List_object__o *)v19->static_fields->infoList;
          if ( !v20 )
            sub_1C372B4(0);
          System_Collections_Generic_List_object___Remove(
            v20,
            v18,
            (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      phase = v29;
    }
  }
  v21 = sub_1C372A4(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0);
  if ( !v21 )
    goto LABEL_34;
  *(_DWORD *)(v21 + 16) = questId;
  *(_DWORD *)(v21 + 20) = phase;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v21 + 24) = NetworkManager__getTime(0);
  v24 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v24 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v24->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v26 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1C372B4(Master_object);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v21,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v28[4] = (void *)v21;
    sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), v21, v22, v23);
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  MyRoomStateMaterial_c *v4; // x0
  System_String_o *String; // x0
  const MethodInfo *v6; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  MaterialGroupClearHistoryManager_c *v10; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  int32_t i; // w21
  MaterialGroupClearHistoryManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0

  if ( (byte_4C442D8 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C37058(&MyRoomStateMaterial_TypeInfo);
    byte_4C442D8 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
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
  v4 = MyRoomStateMaterial_TypeInfo;
  if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
    v4 = MyRoomStateMaterial_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0, 0);
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
    MyRoomStateMaterial__ClearMaterialFinishReadQuest(0);
  }
  v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  }
  *((_BYTE *)v6[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialGroupClearHistoryManager__GetFilePath(v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64472960(v9, v8, 0);
  v10 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v10 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C372B4(v10);
  if ( !v9 )
    sub_1C372B4(v10);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v9->klass->vtable._22_Write.methodPtr)(
    v9,
    static_fields->SAVE_DATA_VERSION,
    v9->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v9->klass->vtable._8_Write.methodPtr)(
    v9,
    MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v9->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
    v9,
    (unsigned int)size,
    v9->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v15 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v15 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_1C372B4(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v18 = Item;
      if ( !Item )
        sub_1C372B4(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
        v9,
        LODWORD(Item[1].klass),
        v9->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
        v9,
        HIDWORD(v18[1].klass),
        v9->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v9->klass->vtable._19_Write.methodPtr)(
        v9,
        v18[1].monitor,
        v9->klass->vtable._19_Write.method);
    }
  }
  klass = v9->klass;
  v20 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_33;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_33:
    v22 = sub_1C87870(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v9, *(_QWORD *)(v22 + 8));
  return 1;
}


void MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor(
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialGroupClearHistoryManager___c__DisplayClass10_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialGroupClearHistoryManager___c__DisplayClass10_0___GetMaterialFinishReadIncludedGroupQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass10_0_o *this,
        UserQuestEntity_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_4C442DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_1C37058(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C37058(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__);
    sub_1C37058(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
    byte_4C442DA = 1;
  }
  v5 = sub_1C372A4(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = x,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)x, v7, v8),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v10 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0),
        !groupEntities) )
  {
    sub_1C372B4(v6);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v10,
           (const MethodInfo_37A3650 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
}


void MaterialGroupClearHistoryManager___c__DisplayClass10_1___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialGroupClearHistoryManager___c__DisplayClass10_1___GetMaterialFinishReadIncludedGroupQuest_b__1(
        MaterialGroupClearHistoryManager___c__DisplayClass10_1_o *this,
        QuestScriptMaterialNextEntity_o *y,
        const MethodInfo *method)
{
  struct UserQuestEntity_o *x; // x8

  x = this->fields.x;
  if ( !x || !y )
    sub_1C372B4(this);
  return x->fields.questId == y->fields.questId;
}


void MaterialGroupClearHistoryManager___c__DisplayClass11_0___ctor(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialGroupClearHistoryManager___c__DisplayClass11_0___SetMaterialFinishReadQuest_b__0(
        MaterialGroupClearHistoryManager___c__DisplayClass11_0_o *this,
        MaterialGroupClearHistoryManager_MaterialHistoryInfo_o *x,
        const MethodInfo *method)
{
  struct QuestScriptMaterialNextEntity_o *groupEntity; // x8

  if ( !x || (groupEntity = this->fields.groupEntity) == 0 )
    sub_1C372B4(this);
  return x->fields.questId == groupEntity->fields.questId;
}