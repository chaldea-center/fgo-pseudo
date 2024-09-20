void __fastcall MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_Collections_Generic_List_object__o *v3; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C272 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6648/*"Fgo_20220404"*/);
    byte_4A5C272 = 1;
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6648/*"Fgo_20220404"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    StringLiteral_6648/*"Fgo_20220404"*/,
    v1,
    v2);
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void __fastcall MaterialGroupClearHistoryManager___ctor(
        MaterialGroupClearHistoryManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  __int64 v2; // x1
  MaterialGroupClearHistoryManager_c *v3; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  MaterialGroupClearHistoryManager_c *v7; // x0

  if ( (byte_4A5C26C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4A5C26C = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v1 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___) )
  {
    v3 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v3 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1B8880C(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v7 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4A5C26A & 1) == 0 )
  {
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4A5C26A = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C269 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C269 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(37, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


UserQuestEntity_o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  MaterialGroupClearHistoryManager_c *v8; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v10; // x19
  System_Predicate_object__o *v11; // x21

  if ( (byte_4A5C26E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UserQuestEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&System_Predicate_UserQuestEntity__TypeInfo);
    sub_1B885B0(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__);
    sub_1B885B0(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
    byte_4A5C26E = 1;
  }
  v3 = sub_1B887FC(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 16) = groupEntities;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)groupEntities, v6, v7);
  v8 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v8);
  if ( !Quests )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0LL;
  v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0LL);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v10,
                                (System_Predicate_T__o *)v11,
                                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *__fastcall MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
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
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5C26D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4A5C26D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v2 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v4 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v4->static_fields->infoList;
  if ( !infoList )
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    infoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v18.fields._current )
      sub_1B8880C(v6, v7);
    if ( !Master_object )
      sub_1B8880C(v6, v7);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v18.fields._current[1].klass,
                                            HIDWORD(v18.fields._current[1].klass),
                                            (int64_t)v18.fields._current[1].monitor,
                                            0LL);
    v11 = QuestClearDummyData;
    if ( !v2 )
      sub_1B8880C(QuestClearDummyData, QuestClearDummyData);
    items = v2->fields._items;
    v13 = Method_System_Collections_Generic_List_UserQuestEntity__Add__;
    ++v2->fields._version;
    if ( !items )
      sub_1B8880C(QuestClearDummyData, QuestClearDummyData);
    size = v2->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v2,
        QuestClearDummyData,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v2->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v2;
}


void __fastcall MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  MaterialGroupClearHistoryManager_c *v1; // x0

  if ( (byte_4A5C26B & 1) == 0 )
  {
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_4A5C26B = 1;
  }
  v1 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
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
  MaterialGroupClearHistoryManager_c *v24; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0

  if ( (byte_4A5C270 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    byte_4A5C270 = 1;
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
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v5 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v5);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  v11 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v11 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._9_ReadBoolean.method)(
            v7,
            v7->klass->vtable._10_ReadByte.methodPtr);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      v14 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
            v7,
            v7->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                v7,
                v7->klass->vtable._16_ReadUInt32.methodPtr);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                v7,
                v7->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._17_ReadInt64.method)(
                v7,
                v7->klass->vtable._18_ReadUInt64.methodPtr);
        v19 = sub_1B887FC(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0LL);
        if ( !v19 )
          sub_1B8880C(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_QWORD *)(v19 + 24) = v18;
        v24 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v24 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
        if ( !infoList )
          sub_1B8880C(0LL, v21);
        items = infoList->fields._items;
        v27 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1B8880C(infoList, v21);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v19, v22, v23);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v31 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_34;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v33 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v7, *(_QWORD *)(v33 + 8));
  return (v12 | 8) == 8;
}


void __fastcall MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
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
  int32_t current; // w1
  MaterialGroupClearHistoryManager_c *v16; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  MaterialGroupClearHistoryManager_c *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x0
  __int64 v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  MaterialGroupClearHistoryManager_c *v28; // x0
  Il2CppClass *klass; // x8
  _QWORD *v30; // x9
  __int64 monitor_low; // x10
  void **v32; // x8
  int32_t v33; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5C26F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_1B885B0(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__);
    sub_1B885B0(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
    byte_4A5C26F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0LL);
  if ( IncludedGroups )
  {
    v9 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v33 = phase;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v34,
        v9,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v35 = v34;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v35,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v10 = sub_1B887FC(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        if ( !v10 )
          sub_1B8880C(v11, v12);
        current = (int32_t)v35.fields._current;
        *(_QWORD *)(v10 + 16) = v35.fields._current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), current, v13, v14);
        v16 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
          v16 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v16->static_fields->infoList;
        v18 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v10,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0LL);
        if ( !infoList )
          sub_1B8880C(v19, v20);
        v22 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v22 )
        {
          v23 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
            v23 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v24 = (System_Collections_Generic_List_object__o *)v23->static_fields->infoList;
          if ( !v24 )
            sub_1B8880C(0LL, v21);
          System_Collections_Generic_List_object___Remove(
            v24,
            v22,
            (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      phase = v33;
    }
  }
  v25 = sub_1B887FC(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_34;
  *(_DWORD *)(v25 + 16) = questId;
  *(_DWORD *)(v25 + 20) = phase;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v25 + 24) = NetworkManager__getTime(0LL);
  v28 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v28 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v28->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v30 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_1B8880C(Master_object, v7);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v25,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v32[4] = (void *)v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), v25, v26, v27);
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
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

  if ( (byte_4A5C271 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_1B885B0(&MyRoomStateMaterial_TypeInfo);
    byte_4A5C271 = 1;
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
  String = UnityEngine_PlayerPrefs__GetString(v4->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0LL, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
    MyRoomStateMaterial__ClearMaterialFinishReadQuest(0LL);
  }
  v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v6 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  }
  *((_BYTE *)v6[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialGroupClearHistoryManager__GetFilePath(v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v9 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v9, v8, 0LL);
  v11 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
    v11 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1B8880C(v11, v10);
  if ( !v9 )
    sub_1B8880C(v11, v10);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v9->klass->vtable._22_Write.method)(
    v9,
    static_fields->SAVE_DATA_VERSION,
    v9->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v9->klass->vtable._8_Write.method)(
    v9,
    MaterialGroupClearHistoryManager_TypeInfo->static_fields->isContinueDevice,
    v9->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
    v9,
    (unsigned int)size,
    v9->klass->vtable._18_Write.methodPtr);
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
        sub_1B8880C(0LL, v15);
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
      v21 = Item;
      if ( !Item )
        sub_1B8880C(0LL, v20);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        LODWORD(Item[1].klass),
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        HIDWORD(v21[1].klass),
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, Il2CppMethodPointer))v9->klass->vtable._19_Write.method)(
        v9,
        v21[1].monitor,
        v9->klass->vtable._20_Write.methodPtr);
    }
  }
  klass = v9->klass;
  v23 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_33;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v25 = sub_1BDA590(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4A5C273 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_1B885B0(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_1B885B0(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__);
    sub_1B885B0(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
    byte_4A5C273 = 1;
  }
  v5 = sub_1B887FC(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = x,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)x, v8, v9),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0LL),
        !groupEntities) )
  {
    sub_1B8880C(v6, v7);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v11,
           (const MethodInfo_34FDE60 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_1B8880C(this, y);
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
    sub_1B8880C(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}