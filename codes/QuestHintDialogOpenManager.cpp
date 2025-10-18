void QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_int__o *v7; // x19
  struct QuestHintDialogOpenManager_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x19
  struct QuestHintDialogOpenManager_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C44308 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C37058(&StringLiteral_6680/*"Fgo_20210622"*/);
    byte_4C44308 = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6680/*"Fgo_20210622"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)QuestHintDialogOpenManager_TypeInfo->static_fields, StringLiteral_6680/*"Fgo_20210622"*/, v1, v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->questPhaseHintDialogOpenList, (int32_t)v3, v5, v6);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v8->questHintDialogOpenList = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->questHintDialogOpenList, (int32_t)v7, v9, v10);
  v11 = (Il2CppObject *)sub_1C372A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v11, 0);
  v12 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v12->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->questPhaseTempInfo, (int32_t)v11, v13, v14);
}


void QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestHintDialogOpenManager__ClearOldSaveDataList(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v3; // w9

  if ( (byte_4C442FF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C442FF = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v1->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1C372B4(v1);
  v3 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v3;
}


void QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C442FE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C442FE = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v1->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1C372B4(v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v4 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v4;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0);
}


void QuestHintDialogOpenManager__DeleteOldSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4C442FC & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C442FC = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(OldSaveFileName, 0) )
    System_IO_File__Delete(OldSaveFileName, 0);
}


void QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4C442FB & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C442FB = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v3);
}


System_String_o *QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C442FA & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C442FA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C442F9 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C442F9 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(43, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4C442FD & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C442FD = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v1);
}


bool QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  bool v8; // w21
  int v9; // w19
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C44303 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44303 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v11, 0, sizeof(v11));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v5->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_22;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v5->static_fields->questPhaseHintDialogOpenList;
  if ( !v5 )
LABEL_22:
    sub_1C372B4(v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    v8 = v7;
    if ( !v7 )
      break;
    if ( !v11.fields._current )
      sub_1C372B4(v7);
    if ( *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&word_10) == questId
      && *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&dword_14) == questPhase )
    {
      v9 = 5;
      goto LABEL_20;
    }
  }
  v9 = 6;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return v8 && v9 == 5;
}


bool QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C44307 & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44307 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    goto LABEL_11;
  if ( questPhaseTempInfo->fields.questId == questId )
  {
    if ( v5->_2.cctor_finished )
      return questPhaseTempInfo->fields.questPhase == questPhase;
    j_il2cpp_runtime_class_init_0(v5);
    questPhaseTempInfo = QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseTempInfo;
    if ( questPhaseTempInfo )
      return questPhaseTempInfo->fields.questPhase == questPhase;
LABEL_11:
    sub_1C372B4(v5);
  }
  return 0;
}


bool QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  char v2; // w22
  QuestHintDialogOpenManager_c *v4; // x0
  _BOOL8 OldData; // x0
  bool v6; // w20
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v8; // x0
  System_IO_Stream_o *v9; // x21
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  System_String_o *v12; // x21
  QuestHintDialogOpenManager_c *v13; // x0
  int v14; // w23
  int v15; // w21
  int v16; // w23
  int v17; // w24
  __int64 v18; // x22
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  QuestHintDialogOpenManager_c *v22; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  QuestHintDialogOpenManager_c *v32; // x0
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  char v34; // w19
  char v35; // w22
  __int64 v36; // x19
  __int64 v37; // x0
  QuestHintDialogOpenManager_c *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x20
  System_Predicate_object__o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x20
  __int64 v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  QuestHintDialogOpenManager_c *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x0
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x8
  QuestHintDialogOpenManager_c *v52; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *v53; // x8
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C44300 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C37058(&Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__);
    sub_1C37058(&QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
    byte_4C44300 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  memset(&v55, 0, sizeof(v55));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    goto LABEL_6;
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldData = QuestHintDialogOpenManager__ReadOldData((const MethodInfo *)v4);
  v6 = OldData;
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)OldData);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v8 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v8);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v10 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v10, v9, 0);
    if ( !v10 )
      sub_1C372B4(v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._22_ReadString.methodPtr)(
                               v10,
                               v10->klass->vtable._22_ReadString.method);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v13->static_fields->SAVE_DATA_VERSION, v12, 0) )
    {
      v2 = 0;
      v14 = 5;
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._15_ReadInt32.methodPtr)(
              v10,
              v10->klass->vtable._15_ReadInt32.method);
      if ( v15 >= 1 )
      {
        do
        {
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._15_ReadInt32.methodPtr)(
                  v10,
                  v10->klass->vtable._15_ReadInt32.method);
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._15_ReadInt32.methodPtr)(
                  v10,
                  v10->klass->vtable._15_ReadInt32.method);
          v18 = sub_1C372A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0);
          if ( !v18 )
            sub_1C372B4(v19);
          *(_DWORD *)(v18 + 16) = v16;
          *(_DWORD *)(v18 + 20) = v17;
          v22 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v22 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v22->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1C372B4(0);
          items = questPhaseHintDialogOpenList->fields._items;
          v25 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C372B4(questPhaseHintDialogOpenList);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v18,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v18;
            sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
          }
          --v15;
        }
        while ( v15 );
      }
      v14 = v6 ? 3 : 5;
      v2 = !v6;
    }
    klass = v10->klass;
    v29 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_36;
      }
      v31 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_36:
      v31 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v10, *(_QWORD *)(v31 + 8));
    if ( v14 != 3 )
      return v2 & 1;
  }
  if ( v6 )
  {
    v32 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v32 = QuestHintDialogOpenManager_TypeInfo;
    }
    questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v32->static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
LABEL_79:
      sub_1C372B4(questHintDialogOpenList);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
      (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v55 = v54;
    v34 = 0;
LABEL_44:
    v35 = v34;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v55,
              (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v36 = sub_1C372A4(QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v36, 0);
      if ( !v36 )
        sub_1C372B4(v37);
      *(_DWORD *)(v36 + 16) = v55.fields._current;
      v38 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v38 = QuestHintDialogOpenManager_TypeInfo;
      }
      v39 = (System_Collections_Generic_List_object__o *)v38->static_fields->questPhaseHintDialogOpenList;
      v40 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
      System_Predicate_object____ctor(
        v40,
        (Il2CppObject *)v36,
        Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__,
        0);
      if ( !v39 )
        sub_1C372B4(v41);
      if ( !System_Collections_Generic_List_object___Find(
              v39,
              (System_Predicate_T__o *)v40,
              (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__) )
      {
        v42 = sub_1C372A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v42, 0);
        if ( !v42 )
          sub_1C372B4(v43);
        *(_DWORD *)(v42 + 16) = *(_DWORD *)(v36 + 16);
        *(_DWORD *)(v42 + 20) = 1;
        v46 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v46 = QuestHintDialogOpenManager_TypeInfo;
        }
        v47 = (System_Collections_Generic_List_object__o *)v46->static_fields->questPhaseHintDialogOpenList;
        if ( !v47 )
          sub_1C372B4(0);
        v48 = v47->fields._items;
        v49 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
        ++v47->fields._version;
        if ( !v48 )
          sub_1C372B4(v47);
        v50 = v47->fields._size;
        if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
        {
          v34 = 1;
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)v42,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &v48->obj.klass + v50;
          v34 = 1;
          v47->fields._size = v50 + 1;
          v51[4] = (Il2CppClass *)v42;
          sub_1C36FFC((CGThumbnailListItem_o *)(v51 + 4), v42, v44, v45);
        }
        goto LABEL_44;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v55,
      (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v52 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v52);
  }
  else
  {
    v35 = 0;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  v53 = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !v53 )
    goto LABEL_79;
  if ( v53->fields._size >= 1 )
  {
    if ( (v35 & 1) != 0 )
    {
      if ( !questHintDialogOpenList->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
      QuestHintDialogOpenManager__WriteData((const MethodInfo *)questHintDialogOpenList);
    }
LABEL_6:
    v2 = 1;
    return v2 & 1;
  }
  if ( !questHintDialogOpenList->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
  QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)questHintDialogOpenList);
  v2 = 0;
  return v2 & 1;
}


bool QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *OldSaveFileName; // x19
  QuestHintDialogOpenManager_c *v3; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x19
  __int64 v6; // x0
  System_String_o *v7; // x20
  QuestHintDialogOpenManager_c *v8; // x0
  bool v9; // w21
  int v10; // w20
  int32_t v11; // w21
  QuestHintDialogOpenManager_c *v12; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  QuestHintDialogOpenManager_c *v21; // x0

  if ( (byte_4C44301 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44301 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(OldSaveFileName, 0) )
  {
    v3 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v3);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSaveFileName, 0);
    v5 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0);
    if ( !v5 )
      sub_1C372B4(v6);
    v7 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._22_ReadString.methodPtr)(
                              v5,
                              v5->klass->vtable._22_ReadString.method);
    v8 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v8 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v8->static_fields->SAVE_DATA_VERSION, v7, 0) )
    {
      v9 = 0;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
              v5,
              v5->klass->vtable._15_ReadInt32.method);
      if ( v10 >= 1 )
      {
        do
        {
          v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                  v5,
                  v5->klass->vtable._15_ReadInt32.method);
          v12 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v12 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v12->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1C372B4(0);
          items = questHintDialogOpenList->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C372B4(questHintDialogOpenList);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v11,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size] = v11;
          }
          --v10;
        }
        while ( v10 );
      }
      v9 = 1;
    }
    klass = v5->klass;
    v18 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_27;
      }
      v20 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_27:
      v20 = sub_1C87870(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v20)(v5, *(_QWORD *)(v20 + 8));
  }
  else
  {
    v21 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v21);
    return 0;
  }
  return v9;
}


void QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C44306 & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44306 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v1 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v1->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C372B4(v1);
  questPhaseTempInfo->fields = 0;
}


void QuestHintDialogOpenManager__SetQuestInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  QuestHintDialogOpenManager_c *v11; // x0
  const char *name; // x8
  _QWORD *v13; // x9
  __int64 namespaze_low; // x10
  const char *v15; // x8
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C44304 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    byte_4C44304 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v5->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_29;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v5->static_fields->questPhaseHintDialogOpenList;
  if ( !v5 )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v17.fields._current )
      sub_1C372B4(v7);
    if ( LODWORD(v17.fields._current[1].klass) == questId && HIDWORD(v17.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v8 = sub_1C372A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_29;
  *(_DWORD *)(v8 + 16) = questId;
  *(_DWORD *)(v8 + 20) = questPhase;
  v11 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v11 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v11->static_fields->questPhaseHintDialogOpenList;
  if ( !v5
    || (name = v5->_1.name,
        v13 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
        ++HIDWORD(v5->_1.namespaze),
        !name) )
  {
LABEL_29:
    sub_1C372B4(v5);
  }
  namespaze_low = SLODWORD(v5->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &name[8 * namespaze_low];
    LODWORD(v5->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v15 + 4) = v8;
    sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), v8, v9, v10);
  }
}


void QuestHintDialogOpenManager__SetTemporarilyInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C44305 & 1) == 0 )
  {
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44305 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C372B4(v5);
  questPhaseTempInfo->fields.questId = questId;
  questPhaseTempInfo->fields.questPhase = questPhase;
}


bool QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryWriter_o *v5; // x19
  QuestHintDialogOpenManager_c *v6; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x9
  int size; // w20
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *v14; // x0
  Il2CppObject *v15; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0

  if ( (byte_4C44302 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C44302 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v2 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v2);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v5 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_64472960(v5, v4, 0);
    v6 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v6 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1C372B4(v6);
    if ( !v5 )
      sub_1C372B4(v6);
    size = questPhaseHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v5->klass->vtable._22_Write.methodPtr)(
      v5,
      static_fields->SAVE_DATA_VERSION,
      v5->klass->vtable._22_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
      v5,
      (unsigned int)size,
      v5->klass->vtable._17_Write.method);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v11 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v11 = QuestHintDialogOpenManager_TypeInfo;
        }
        v12 = (System_Collections_Generic_List_object__o *)v11->static_fields->questPhaseHintDialogOpenList;
        if ( !v12 )
          sub_1C372B4(0);
        Item = System_Collections_Generic_List_object___get_Item(
                 v12,
                 i,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1C372B4(0);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
          v5,
          LODWORD(Item[1].klass),
          v5->klass->vtable._17_Write.method);
        v14 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v14 )
          sub_1C372B4(0);
        v15 = System_Collections_Generic_List_object___get_Item(
                v14,
                i,
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v15 )
          sub_1C372B4(0);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
          v5,
          HIDWORD(v15[1].klass),
          v5->klass->vtable._17_Write.method);
      }
    }
    klass = v5->klass;
    v17 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_25;
      }
      v19 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_25:
      v19 = sub_1C87870(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v19)(v5, *(_QWORD *)(v19 + 8));
  }
  return 1;
}


void QuestHintDialogOpenManager_QuestPhaseInfo___ctor(
        QuestHintDialogOpenManager_QuestPhaseInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestHintDialogOpenManager___c__DisplayClass12_0___ctor(
        QuestHintDialogOpenManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestHintDialogOpenManager___c__DisplayClass12_0___ReadData_b__0(
        QuestHintDialogOpenManager___c__DisplayClass12_0_o *this,
        QuestHintDialogOpenManager_QuestPhaseInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == 1;
}