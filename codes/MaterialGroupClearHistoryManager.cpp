void MaterialGroupClearHistoryManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct MaterialGroupClearHistoryManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939B00 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6955/*"Fgo_20220404"*/);
    byte_5939B00 = 1;
  }
  v7 = StringLiteral_6955/*"Fgo_20220404"*/;
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6955/*"Fgo_20220404"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MaterialGroupClearHistoryManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo;
  *(_WORD *)&MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo___ctor__);
  static_fields = MaterialGroupClearHistoryManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->infoList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void MaterialGroupClearHistoryManager___ctor(MaterialGroupClearHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialGroupClearHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  __int64 v3; // x1
  bool v4; // w8
  MaterialGroupClearHistoryManager_c *v5; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_5939AFA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Clear__);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_5939AFA = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
    v2 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  v4 = System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v2->static_fields->infoList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_MaterialGroupClearHistoryManager_MaterialHistoryInfo___);
  v5 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( v4 )
  {
    if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v3);
      v5 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    infoList = v5->static_fields->infoList;
    if ( !infoList )
      sub_21FFECC(v5, v3);
    size = infoList->fields._size;
    v8 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v8;
    if ( size >= 1 )
    {
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
      v5 = MaterialGroupClearHistoryManager_TypeInfo;
    }
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3);
    v5 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  *(_WORD *)&v5->static_fields->isModfiy = 1;
}


void MaterialGroupClearHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_5939AF8 & 1) == 0 )
  {
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_5939AF8 = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *MaterialGroupClearHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939AF7 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939AF7 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(37, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


UserQuestEntity_o *MaterialGroupClearHistoryManager__GetMaterialFinishReadIncludedGroupQuest(
        System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *groupEntities,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  MaterialGroupClearHistoryManager_c *v13; // x0
  System_Collections_Generic_List_UserQuestEntity__o *Quests; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  System_Predicate_object__o *v16; // x21

  if ( (byte_5939AFC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_UserQuestEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserQuestEntity__Find__);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&System_Predicate_UserQuestEntity__TypeInfo);
    sub_21FFC50(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__);
    sub_21FFC50(&MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
    byte_5939AFC = 1;
  }
  v3 = sub_21FFEBC(MaterialGroupClearHistoryManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 16) = groupEntities;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)groupEntities, v6, v7, v8, v9, v10, v11);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v12);
  Quests = MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests((const MethodInfo *)v13);
  if ( !Quests )
    return 0;
  v15 = (System_Collections_Generic_List_object__o *)Quests;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Quests,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_UserQuestEntity___) )
    return 0;
  v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserQuestEntity__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v3,
    Method_MaterialGroupClearHistoryManager___c__DisplayClass10_0__GetMaterialFinishReadIncludedGroupQuest_b__0__,
    0);
  return (UserQuestEntity_o *)System_Collections_Generic_List_object___Find(
                                v15,
                                (System_Predicate_T__o *)v16,
                                (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_UserQuestEntity__Find__);
}


System_Collections_Generic_List_UserQuestEntity__o *MaterialGroupClearHistoryManager__GetMaterialFinishReadQuests(
        const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w8
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x1
  MaterialGroupClearHistoryManager_c *v6; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *QuestClearDummyData; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5939AFB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserQuestEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserQuestEntity__TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_5939AFB = 1;
  }
  v2 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v24, 0, sizeof(v24));
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserQuestEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserQuestEntity___ctor__);
  v6 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v5);
    v6 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v6->static_fields->infoList;
  if ( !infoList )
    sub_21FFECC(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    infoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v24.fields._current )
      sub_21FFECC(v8, v9);
    if ( !Master_object )
      sub_21FFECC(v8, v9);
    QuestClearDummyData = (Il2CppObject *)UserQuestMaster__CreateQuestClearDummyData(
                                            (UserQuestMaster_o *)Master_object,
                                            (int32_t)v24.fields._current[1].klass,
                                            HIDWORD(v24.fields._current[1].klass),
                                            (int64_t)v24.fields._current[1].monitor,
                                            0);
    v17 = QuestClearDummyData;
    if ( !v4
      || (items = v4->fields._items,
          v19 = Method_System_Collections_Generic_List_UserQuestEntity__Add__,
          ++v4->fields._version,
          !items) )
    {
      sub_21FFECC(QuestClearDummyData, QuestClearDummyData);
    }
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        QuestClearDummyData,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v17;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Dispose__);
  return (System_Collections_Generic_List_UserQuestEntity__o *)v4;
}


void MaterialGroupClearHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0

  if ( (byte_5939AF9 & 1) == 0 )
  {
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    byte_5939AF9 = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  MaterialGroupClearHistoryManager__ReadData((const MethodInfo *)v2);
}


bool MaterialGroupClearHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  bool v3; // w20
  MaterialGroupClearHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19
  __int64 v6; // x1
  MaterialGroupClearHistoryManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  MaterialGroupClearHistoryManager_c *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  char v17; // w19
  MaterialGroupClearHistoryManager_c *v18; // x0
  int v19; // w19
  int v20; // w21
  int v21; // w22
  __int64 v22; // x23
  __int64 v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  MaterialGroupClearHistoryManager_c *v32; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int *p_offset; // x10
  __int64 v41; // x0
  System_IO_BinaryReader_o *v43; // [xsp+28h] [xbp-48h]

  if ( (byte_5939AFE & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    byte_5939AFE = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
  FilePath = MaterialGroupClearHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v7 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v6);
  MaterialGroupClearHistoryManager__ClearSaveData((const MethodInfo *)v7);
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v9 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v9, v8, 0);
  v43 = v9;
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                             v9,
                             v9->klass->vtable._22_ReadString.method);
  v14 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v12);
    v14 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
  {
    v3 = 0;
  }
  else
  {
    if ( !v43 )
      sub_21FFECC(0, v15);
    v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._9_ReadBoolean.methodPtr)(
            v43,
            v43->klass->vtable._9_ReadBoolean.method);
    v18 = MaterialGroupClearHistoryManager_TypeInfo;
    if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v16);
      v18 = MaterialGroupClearHistoryManager_TypeInfo;
    }
    v18->static_fields->isContinueDevice = v17 & 1;
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
            v43,
            v43->klass->vtable._15_ReadInt32.method);
    if ( v19 >= 1 )
    {
      do
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                v43,
                v43->klass->vtable._15_ReadInt32.method);
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._15_ReadInt32.methodPtr)(
                v43,
                v43->klass->vtable._15_ReadInt32.method);
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v43->klass->vtable._17_ReadInt64.methodPtr)(
                v43,
                v43->klass->vtable._17_ReadInt64.method);
        v23 = sub_21FFEBC(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v23, 0);
        if ( !v23 )
          sub_21FFECC(v24, v25);
        v32 = MaterialGroupClearHistoryManager_TypeInfo;
        *(_DWORD *)(v23 + 16) = v20;
        *(_DWORD *)(v23 + 20) = v21;
        *(_QWORD *)(v23 + 24) = v22;
        if ( !*(&v32->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v32, v25);
          v32 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v32->static_fields->infoList;
        if ( !infoList
          || (items = infoList->fields._items,
              v35 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
              ++infoList->fields._version,
              !items) )
        {
          sub_21FFECC(infoList, v25);
        }
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v23,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v23;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), v23, v26, v27, v28, v29, v30, v31);
        }
        --v19;
      }
      while ( v19 );
    }
    v3 = 1;
  }
  if ( v43 )
  {
    klass = v43->klass;
    v39 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        p_offset += 4;
        if ( !v39 )
          goto LABEL_37;
      }
      v41 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_37:
      v41 = sub_2237E2C(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v43, *(_QWORD *)(v41 + 8));
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
void MaterialGroupClearHistoryManager__SetMaterialFinishReadQuest(
        int32_t questId,
        int32_t phase,
        int64_t updatedAt,
        const MethodInfo *method)
{
  int32_t v4; // w22
  int v6; // w8
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_QuestScriptMaterialNextEntity__o *IncludedGroups; // x0
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t current; // w1
  __int64 v21; // x1
  MaterialGroupClearHistoryManager_c *v22; // x0
  System_Collections_Generic_List_object__o *infoList; // x22
  System_Predicate_object__o *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  MaterialGroupClearHistoryManager_c *v29; // x0
  System_Collections_Generic_List_object__o *v30; // x0
  __int64 v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int64_t Time; // x8
  MaterialGroupClearHistoryManager_c *v39; // x0
  Il2CppClass *klass; // x8
  _QWORD *v41; // x9
  __int64 monitor_low; // x10
  void **v43; // x8
  int32_t v44; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  v4 = phase;
  if ( (byte_5939AFD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
    sub_21FFC50(&Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__);
    sub_21FFC50(&MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
    byte_5939AFD = 1;
  }
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v46, 0, sizeof(v46));
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&phase);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestScriptMaterialNextMaster___);
  if ( !Master_object )
    goto LABEL_34;
  IncludedGroups = QuestScriptMaterialNextMaster__GetIncludedGroups(
                     (QuestScriptMaterialNextMaster_o *)Master_object,
                     questId,
                     0);
  if ( IncludedGroups )
  {
    v10 = (System_Collections_Generic_List_object__o *)IncludedGroups;
    if ( System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)IncludedGroups,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialNextEntity___) )
    {
      v44 = v4;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v45,
        v10,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__GetEnumerator__);
      v46 = v45;
      v45.fields._list = 0;
      *(_QWORD *)&v45.fields._index = &v46;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v46,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__MoveNext__) )
      {
        v11 = sub_21FFEBC(MaterialGroupClearHistoryManager___c__DisplayClass11_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        if ( !v11 )
          sub_21FFECC(v12, v13);
        current = (int32_t)v46.fields._current;
        *(_QWORD *)(v11 + 16) = v46.fields._current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), current, v14, v15, v16, v17, v18, v19);
        v22 = MaterialGroupClearHistoryManager_TypeInfo;
        if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v21);
          v22 = MaterialGroupClearHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v22->static_fields->infoList;
        v24 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_MaterialGroupClearHistoryManager_MaterialHistoryInfo__TypeInfo);
        System_Predicate_object____ctor(
          v24,
          (Il2CppObject *)v11,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass11_0__SetMaterialFinishReadQuest_b__0__,
          0);
        if ( !infoList )
          sub_21FFECC(v25, v26);
        v28 = System_Collections_Generic_List_object___Find(
                infoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Find__);
        if ( v28 )
        {
          v29 = MaterialGroupClearHistoryManager_TypeInfo;
          if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v27);
            v29 = MaterialGroupClearHistoryManager_TypeInfo;
          }
          v30 = (System_Collections_Generic_List_object__o *)v29->static_fields->infoList;
          if ( !v30 )
            sub_21FFECC(0, v27);
          System_Collections_Generic_List_object___Remove(
            v30,
            v28,
            (const MethodInfo_445101C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v46,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialNextEntity__Dispose__);
      v4 = v44;
    }
  }
  v31 = sub_21FFEBC(MaterialGroupClearHistoryManager_MaterialHistoryInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0);
  if ( !v31 )
    goto LABEL_34;
  *(_DWORD *)(v31 + 16) = questId;
  *(_DWORD *)(v31 + 20) = v4;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  Time = NetworkManager__getTime(0);
  v39 = MaterialGroupClearHistoryManager_TypeInfo;
  *(_QWORD *)(v31 + 24) = Time;
  if ( !*(&v39->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v39, v8);
    v39 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  Master_object = (Il2CppObject *)v39->static_fields->infoList;
  if ( !Master_object
    || (klass = Master_object[1].klass,
        v41 = Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__Add__,
        ++HIDWORD(Master_object[1].monitor),
        !klass) )
  {
LABEL_34:
    sub_21FFECC(Master_object, v8);
  }
  monitor_low = SLODWORD(Master_object[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Master_object,
      (Il2CppObject *)v31,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &klass->_1.image + monitor_low;
    LODWORD(Master_object[1].monitor) = monitor_low + 1;
    v43[4] = (void *)v31;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), v31, v32, v33, v34, v35, v36, v37);
  }
  MaterialGroupClearHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool MaterialGroupClearHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialGroupClearHistoryManager_c *v2; // x0
  ManagerConfig_c *v3; // x0
  MyRoomStateMaterial_c *v5; // x0
  System_String_o *String; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryWriter_o *v11; // x19
  __int64 v12; // x1
  MaterialGroupClearHistoryManager_c *v13; // x0
  struct System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__o *infoList; // x9
  int size; // w19
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t i; // w20
  MaterialGroupClearHistoryManager_c *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x0
  __int64 v21; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v23; // x9
  int *p_offset; // x10
  __int64 v25; // x0
  System_IO_BinaryWriter_o *v26; // [xsp+28h] [xbp-38h]

  if ( (byte_5939AFF & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&MaterialGroupClearHistoryManager_TypeInfo);
    sub_21FFC50(&MyRoomStateMaterial_TypeInfo);
    byte_5939AFF = 1;
  }
  v2 = MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v1);
    v2 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  if ( !v2->static_fields->isModfiy )
    return 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = MyRoomStateMaterial_TypeInfo;
  if ( !*(&MyRoomStateMaterial_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v1);
    v5 = MyRoomStateMaterial_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(v5->static_fields->SAVE_MARETIAL_FINISH_READ_QUEST_LIST, 0, 0);
  if ( !System_String__IsNullOrEmpty(String, 0) )
  {
    if ( !*(&MyRoomStateMaterial_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v7);
    MyRoomStateMaterial__ClearMaterialFinishReadQuest(0);
  }
  v8 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v7);
    v8 = (const MethodInfo *)MaterialGroupClearHistoryManager_TypeInfo;
  }
  *((_BYTE *)v8[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialGroupClearHistoryManager__GetFilePath(v8);
  v10 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v11 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76739708(v11, v10, 0);
  v13 = MaterialGroupClearHistoryManager_TypeInfo;
  v26 = v11;
  if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v12);
    v13 = MaterialGroupClearHistoryManager_TypeInfo;
  }
  infoList = v13->static_fields->infoList;
  if ( !infoList )
    sub_21FFECC(v13, v12);
  if ( !v11 )
    sub_21FFECC(0, v12);
  size = infoList->fields._size;
  v26->klass->vtable._22_Write.methodPtr();
  v26->klass->vtable._8_Write.methodPtr();
  if ( !v26 )
    sub_21FFECC(0, v16);
  v26->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v19 = MaterialGroupClearHistoryManager_TypeInfo;
      if ( !*(&MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo, v17);
        v19 = MaterialGroupClearHistoryManager_TypeInfo;
      }
      v20 = (System_Collections_Generic_List_object__o *)v19->static_fields->infoList;
      if ( !v20 )
        sub_21FFECC(0, v17);
      if ( !System_Collections_Generic_List_object___get_Item(
              v20,
              i,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialGroupClearHistoryManager_MaterialHistoryInfo__get_Item__) )
        sub_21FFECC(0, v21);
      v26->klass->vtable._17_Write.methodPtr();
      v26->klass->vtable._17_Write.methodPtr();
      v26->klass->vtable._19_Write.methodPtr();
    }
  }
  klass = v26->klass;
  v23 = *(unsigned __int16 *)&v26->klass->_2.rank;
  if ( *(_WORD *)&v26->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_34;
    }
    v25 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v25 = sub_2237E2C(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v26, *(_QWORD *)(v25 + 8));
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *groupEntities; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_5939B01 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
    sub_21FFC50(&System_Predicate_QuestScriptMaterialNextEntity__TypeInfo);
    sub_21FFC50(&Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__);
    sub_21FFC50(&MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
    byte_5939B01 = 1;
  }
  v5 = sub_21FFEBC(MaterialGroupClearHistoryManager___c__DisplayClass10_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = x,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)x, v8, v9, v10, v11, v12, v13),
        groupEntities = (System_Collections_Generic_List_object__o *)this->fields.groupEntities,
        v15 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_QuestScriptMaterialNextEntity__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_MaterialGroupClearHistoryManager___c__DisplayClass10_1__GetMaterialFinishReadIncludedGroupQuest_b__1__,
          0),
        !groupEntities) )
  {
    sub_21FFECC(v6, v7);
  }
  return System_Collections_Generic_List_object___Exists(
           groupEntities,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_4450164 *)Method_System_Collections_Generic_List_QuestScriptMaterialNextEntity__Exists__);
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
    sub_21FFECC(this, y);
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
    sub_21FFECC(this, x);
  return x->fields.questId == groupEntity->fields.questId;
}