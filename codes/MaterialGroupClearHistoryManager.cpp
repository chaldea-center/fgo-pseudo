void MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2DBCF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&StringLiteral_6691/*"Fgo_20220404"*/);
    byte_4D2DBCF = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6691/*"Fgo_20220404"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6691/*"Fgo_20220404"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->infoList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void MaterialGroupClearHistoryManager___ctor(MaterialGroupClearHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  __int64 v2; // x1
  MaterialGroupClearHistoryManager_c *v3; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  MaterialGroupClearHistoryManager_c *v7; // x0

  if ( (byte_4D2DBC9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4D2DBC9 = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v3 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v3 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1C942F0(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v7 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4D2DBC7 & 1) == 0 )
  {
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4D2DBC7 = 1;
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

  if ( (byte_4D2DBC6 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2DBC6 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0);
  return System_String__Concat_64456008(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}


UserQuestEntity_o *MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  MaterialGroupClearHistoryManager_c *v12; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v14; // x19
  System_Predicate_object__o *v15; // x21

  if ( (byte_4D2DBCB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_UserQuestEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&System_Predicate_UserQuestEntity__TypeInfo);
    sub_1C94098(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__);
    sub_1C94098(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
    byte_4D2DBCB = 1;
  }
  v3 = sub_1C942E4(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 16) = groupEntities;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)groupEntities, v6, v7, v8, v9, v10, v11);
  v12 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v12);
  if ( !Quests )
    return 0;
  v14 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0;
  v15 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v3,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v14,
                                (System_Predicate_T__o *)v15,
                                (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v2; // x19
  __int64 v3; // x1
  MaterialGroupClearHistoryManager_c *v4; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *QuestClearDummyData; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2DBCA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4D2DBCA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v2 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v4->static_fields->infoList;
  if ( !infoList )
    sub_1C942F0(0, v3);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    infoList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v22.fields._current )
      sub_1C942F0(v6, v7);
    if ( !Master_object )
      sub_1C942F0(v6, v7);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v22.fields._current[1].klass,
                                            HIDWORD(v22.fields._current[1].klass),
                                            (int64_t)v22.fields._current[1].monitor,
                                            0);
    v15 = QuestClearDummyData;
    if ( !v2 )
      sub_1C942F0(QuestClearDummyData, QuestClearDummyData);
    items = v2->fields._items;
    v17 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v2->fields._version;
    if ( !items )
      sub_1C942F0(QuestClearDummyData, QuestClearDummyData);
    size = v2->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v2,
        QuestClearDummyData,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v2->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v15;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v15, v9, v10, v11, v12, v13, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v2;
}


void MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0

  if ( (byte_4D2DBC8 & 1) == 0 )
  {
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4D2DBC8 = 1;
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
  __int64 v9; // x1
  System_String_o *v10; // x20
  MaterialGroupClearHistoryManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  MaterialGroupClearHistoryManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  __int64 v18; // x24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  MaterialGroupClearHistoryManager_c *v28; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0

  if ( (byte_4D2DBCD & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    byte_4D2DBCD = 1;
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
  v7 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  v11 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v11 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v14 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._17_ReadInt64.methodPtr)(
                v7,
                v7->klass->vtable._17_ReadInt64.method);
        v19 = sub_1C942E4(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        if ( !v19 )
          sub_1C942F0(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_QWORD *)(v19 + 24) = v18;
        v28 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v28 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v28->static_fields->infoList;
        if ( !infoList )
          sub_1C942F0(0, v21);
        items = infoList->fields._items;
        v31 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C942F0(infoList, v21);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v19;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v35 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_34;
    }
    v37 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v37 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v7, *(_QWORD *)(v37 + 8));
  return (v12 | 8) == 8;
}


void MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_object__o *v9; // x21
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t current; // w1
  MaterialGroupClearHistoryManager_c *v20; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  MaterialGroupClearHistoryManager_c *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x0
  __int64 v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  MaterialGroupClearHistoryManager_c *v36; // x0
  Il2CppClass *klass; // x8
  _QWORD *v38; // x9
  __int64 monitor_low; // x10
  void **v40; // x8
  int32_t v41; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2DBCC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1C94098(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__);
    sub_1C94098(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
    byte_4D2DBCC = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0);
  if ( IncludedGroups )
  {
    v9 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v41 = phase;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        v9,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v43 = v42;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v43,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v10 = sub_1C942E4(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        if ( !v10 )
          sub_1C942F0(v11, v12);
        current = (int32_t)v43.fields._current;
        *(_QWORD *)(v10 + 16) = v43.fields._current;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 16), current, v13, v14, v15, v16, v17, v18);
        v20 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v20 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v20->static_fields->infoList;
        v22 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v22,
          (Il2CppObject *)v10,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0);
        if ( !infoList )
          sub_1C942F0(v23, v24);
        v26 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v22,
                (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v26 )
        {
          v27 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v27 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v28 = (System_Collections_Generic_List_object__o *)v27->static_fields->infoList;
          if ( !v28 )
            sub_1C942F0(0, v25);
          System_Collections_Generic_List_object___Remove(
            v28,
            v26,
            (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      phase = v41;
    }
  }
  v29 = sub_1C942E4(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0);
  if ( !v29 )
    goto LABEL_34;
  *(_DWORD *)(v29 + 16) = questId;
  *(_DWORD *)(v29 + 20) = phase;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v29 + 24) = NetworkManager__getTime(0);
  v36 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v36 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v36->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v38 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1C942F0(Master_object, v7);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v29,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v40[4] = (void *)v29;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v40 + 4), v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v10; // x1
  MaterialGroupClearHistoryManager_c *v11; // x0
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v15; // x1
  int32_t i; // w21
  MaterialGroupClearHistoryManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  Il2CppObject *Item; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0

  if ( (byte_4D2DBCE & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1C94098(&MyRoomStateMaterial_TypeInfo);
    byte_4D2DBCE = 1;
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
  v9 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65327072(v9, v8, 0);
  v11 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v11 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C942F0(v11, v10);
  if ( !v9 )
    sub_1C942F0(v11, v10);
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
      v17 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
        v17 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->infoList;
      if ( !v18 )
        sub_1C942F0(0, v15);
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               i,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v21 = Item;
      if ( !Item )
        sub_1C942F0(0, v20);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
        v9,
        LODWORD(Item[1].klass),
        v9->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v9->klass->vtable._17_Write.methodPtr)(
        v9,
        HIDWORD(v21[1].klass),
        v9->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v9->klass->vtable._19_Write.methodPtr)(
        v9,
        v21[1].monitor,
        v9->klass->vtable._19_Write.method);
    }
  }
  klass = v9->klass;
  v23 = *(unsigned __int16 *)&v9->klass->_2.rank;
  if ( *(_WORD *)&v9->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_33;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_33:
    v25 = sub_1C6A420(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4D2DBD0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_1C94098(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1C94098(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__);
    sub_1C94098(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
    byte_4D2DBD0 = 1;
  }
  v5 = sub_1C942E4(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = x,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)x, v8, v9, v10, v11, v12, v13),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v15 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0),
        !groupEntities) )
  {
    sub_1C942F0(v6, v7);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_386B460 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_1C942F0(this, y);
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
    sub_1C942F0(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}