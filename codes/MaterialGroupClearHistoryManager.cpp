void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1D7D9 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__,
      v1);
    sub_1BCAFF8(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v4);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_6632/*"Fgo_20220404"*/, v6);
    byte_4B1D7D9 = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6632/*"Fgo_20220404"*/;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6632/*"Fgo_20220404"*/,
    v2,
    v3);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v7, v9, v10);
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

  if ( (byte_4B1D7D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___, v1);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__,
      v2);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v3);
    byte_4B1D7D3 = 1;
  }
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v6 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v6 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v6->static_fields->infoList;
    if ( !infoList )
      sub_1BCB254(v6, v5);
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

  if ( (byte_4B1D7D1 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4B1D7D1 = 1;
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

  if ( (byte_4B1D7D0 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, v1);
    sub_1BCAFF8(&DatFileName_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1D7D0 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_62488672(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  MaterialGroupClearHistoryManager_c *v13; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  System_Predicate_object__o *v16; // x21

  if ( (byte_4B1D7D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_UserQuestEntity___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Find__, v3);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v4);
    sub_1BCAFF8(&System_Predicate_UserQuestEntity__TypeInfo, v5);
    sub_1BCAFF8(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
      v6);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_4B1D7D5 = 1;
  }
  v8 = sub_1BCB244(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = groupEntities;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)groupEntities, v11, v12);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v13);
  if ( !Quests )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0LL;
  v16 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v15,
                                (System_Predicate_T__o *)v16,
                                (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1D7D4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserQuestMaster___, v1);
    sub_1BCAFF8(&DataManager_TypeInfo, v2);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__,
      v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity__Add__, v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_UserQuestEntity__TypeInfo, v9);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v10);
    byte_4B1D7D4 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v14 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v14->static_fields->infoList;
  if ( !infoList )
    sub_1BCB254(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    infoList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v16 )
      break;
    if ( !v28.fields._current )
      sub_1BCB254(v16, v17);
    if ( !Master_object )
      sub_1BCB254(v16, v17);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v28.fields._current[1].klass,
                                            HIDWORD(v28.fields._current[1].klass),
                                            (int64_t)v28.fields._current[1].monitor,
                                            0LL);
    v21 = QuestClearDummyData;
    if ( !v12 )
      sub_1BCB254(QuestClearDummyData, QuestClearDummyData);
    items = v12->fields._items;
    v23 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1BCB254(QuestClearDummyData, QuestClearDummyData);
    size = v12->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        QuestClearDummyData,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v21;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v19, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v12;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_4B1D7D2 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v1);
    byte_4B1D7D2 = 1;
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
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  MaterialGroupClearHistoryManager_c *v30; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B1D7D7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__, v3);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v4);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v5);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v6);
    byte_4B1D7D7 = 1;
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
  v13 = (System_IO_BinaryReader_o *)sub_1BCB244(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
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
        v25 = sub_1BCB244(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1BCB254(v26, v27);
        *(_DWORD *)(v25 + 16) = v22;
        *(_DWORD *)(v25 + 20) = v23;
        *(_QWORD *)(v25 + 24) = v24;
        v30 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v30 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
        if ( !infoList )
          sub_1BCB254(0LL, v27);
        items = infoList->fields._items;
        v33 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCB254(infoList, v27);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v25,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), v25, v28, v29);
        }
        --v21;
      }
      while ( v21 );
    }
    v18 = 8;
  }
  klass = v13->klass;
  v37 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v39 = sub_1C1B560(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v13, *(_QWORD *)(v39 + 8));
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t current; // w1
  MaterialGroupClearHistoryManager_c *v31; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  Il2CppObject *v37; // x21
  MaterialGroupClearHistoryManager_c *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x0
  __int64 v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  MaterialGroupClearHistoryManager_c *v43; // x0
  Il2CppClass *klass; // x8
  _QWORD *v45; // x9
  __int64 monitor_low; // x10
  void **v47; // x8
  int32_t v48; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  v4 = phase;
  if ( (byte_4B1D7D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___, *(_QWORD *)&phase);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__, v10);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
      v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__,
      v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__, v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__,
      v14);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v15);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo, v16);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
    sub_1BCAFF8(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo, v18);
    sub_1BCAFF8(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__, v19);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo, v20);
    byte_4B1D7D6 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
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
           (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v48 = v4;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v49,
        v24,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v50 = v49;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v50,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v25 = sub_1BCB244(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v25, 0LL);
        if ( !v25 )
          sub_1BCB254(v26, v27);
        current = (int32_t)v50.fields._current;
        *(_QWORD *)(v25 + 16) = v50.fields._current;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 16), current, v28, v29);
        v31 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v31 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v31->static_fields->infoList;
        v33 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v33,
          (Il2CppObject *)v25,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0LL);
        if ( !infoList )
          sub_1BCB254(v34, v35);
        v37 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v33,
                (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v37 )
        {
          v38 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v38 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v39 = (System_Collections_Generic_List_object__o *)v38->static_fields->infoList;
          if ( !v39 )
            sub_1BCB254(0LL, v36);
          System_Collections_Generic_List_object___Remove(
            v39,
            v37,
            (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v50,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      v4 = v48;
    }
  }
  v40 = sub_1BCB244(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
    goto LABEL_34;
  *(_DWORD *)(v40 + 16) = questId;
  *(_DWORD *)(v40 + 20) = v4;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v40 + 24) = NetworkManager__getTime(0LL);
  v43 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v43 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v43->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v45 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1BCB254(Master_object, v22);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v40,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v47[4] = (void *)v40;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v47 + 4), v40, v41, v42);
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

  if ( (byte_4B1D7D8 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v2);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__,
      v4);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v5);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v6);
    sub_1BCAFF8(&MyRoomStateMaterial_TypeInfo, v7);
    byte_4B1D7D8 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_1BCB244(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63360348(v16, v15, 0LL);
  v18 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v18 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v18->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BCB254(v18, v17);
  if ( !v16 )
    sub_1BCB254(v18, v17);
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
        sub_1BCB254(0LL, v22);
      Item = System_Collections_Generic_List_object___get_Item(
               v25,
               i,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v28 = Item;
      if ( !Item )
        sub_1BCB254(0LL, v27);
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
    v32 = sub_1C1B560(v16, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4B1D7DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__, x);
    sub_1BCAFF8(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo, v5);
    sub_1BCAFF8(
      &Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
      v6);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo, v7);
    byte_4B1D7DA = 1;
  }
  v8 = sub_1BCB244(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = x,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)x, v11, v12),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v14 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0LL),
        !groupEntities) )
  {
    sub_1BCB254(v9, v10);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v14,
           (const MethodInfo_36BA1FC *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_1BCB254(this, y);
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
    sub_1BCB254(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}