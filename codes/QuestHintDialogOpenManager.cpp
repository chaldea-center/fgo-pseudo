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

  if ( (byte_4C580D1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C3E564(&StringLiteral_6680/*"Fgo_20210622"*/);
    byte_4C580D1 = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6680/*"Fgo_20210622"*/;
  sub_1C3E508((CGThumbnailListItem_o *)QuestHintDialogOpenManager_TypeInfo->static_fields, StringLiteral_6680/*"Fgo_20210622"*/, v1, v2);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->questPhaseHintDialogOpenList, (int32_t)v3, v5, v6);
  v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v8->questHintDialogOpenList = v7;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->questHintDialogOpenList, (int32_t)v7, v9, v10);
  v11 = (Il2CppObject *)sub_1C3E7B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v11, 0);
  v12 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v12->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->questPhaseTempInfo, (int32_t)v11, v13, v14);
}


void QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestHintDialogOpenManager__ClearOldSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v4; // w9

  if ( (byte_4C580C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580C8 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v2->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1C3E7C0(v2, v1);
  v4 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v4;
}


void QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4C580C7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580C7 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v2->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1C3E7C0(v2, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v5 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0);
}


void QuestHintDialogOpenManager__DeleteOldSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4C580C5 & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580C5 = 1;
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

  if ( (byte_4C580C4 & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580C4 = 1;
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

  if ( (byte_4C580C3 & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C580C3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


System_String_o *QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C580C2 & 1) == 0 )
  {
    sub_1C3E564(&AndroidUtil_TypeInfo);
    sub_1C3E564(&DatFileName_TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C580C2 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(43, 0);
  return System_String__Concat_63674716(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4C580C6 & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580C6 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v1);
}


// local variable allocation has failed, the output may be wrong!
bool QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  bool v9; // w21
  int v10; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C580CC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580CC = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v12, 0, sizeof(v12));
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
    sub_1C3E7C0(v5, *(_QWORD *)&questPhase);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    v9 = v7;
    if ( !v7 )
      break;
    if ( !v12.fields._current )
      sub_1C3E7C0(v7, v8);
    if ( *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&word_10) == questId
      && *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&dword_14) == questPhase )
    {
      v10 = 5;
      goto LABEL_20;
    }
  }
  v10 = 6;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return v9 && v10 == 5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C580D0 & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580D0 = 1;
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
    sub_1C3E7C0(v5, *(_QWORD *)&questPhase);
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
  __int64 v8; // x1
  QuestHintDialogOpenManager_c *v9; // x0
  System_IO_Stream_o *v10; // x21
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  QuestHintDialogOpenManager_c *v15; // x0
  int v16; // w23
  int v17; // w21
  int v18; // w23
  int v19; // w24
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  QuestHintDialogOpenManager_c *v25; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  QuestHintDialogOpenManager_c *v35; // x0
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  char v37; // w19
  char v38; // w22
  __int64 v39; // x19
  __int64 v40; // x0
  __int64 v41; // x1
  QuestHintDialogOpenManager_c *v42; // x0
  System_Collections_Generic_List_object__o *v43; // x20
  System_Predicate_object__o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x20
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  QuestHintDialogOpenManager_c *v52; // x0
  System_Collections_Generic_List_object__o *v53; // x0
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x8
  QuestHintDialogOpenManager_c *v58; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *v59; // x8
  System_Collections_Generic_List_Enumerator_int__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C580C9 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C3E564(&Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__);
    sub_1C3E564(&QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
    byte_4C580C9 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  memset(&v61, 0, sizeof(v61));
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
    v9 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    if ( !v11 )
      sub_1C3E7C0(v12, v13);
    v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v15 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v15 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0) )
    {
      v2 = 0;
      v16 = 5;
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
              v11,
              v11->klass->vtable._15_ReadInt32.method);
      if ( v17 >= 1 )
      {
        do
        {
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
                  v11,
                  v11->klass->vtable._15_ReadInt32.method);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._15_ReadInt32.methodPtr)(
                  v11,
                  v11->klass->vtable._15_ReadInt32.method);
          v20 = sub_1C3E7B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0);
          if ( !v20 )
            sub_1C3E7C0(v21, v22);
          *(_DWORD *)(v20 + 16) = v18;
          *(_DWORD *)(v20 + 20) = v19;
          v25 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v25 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v25->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1C3E7C0(0, v22);
          items = questPhaseHintDialogOpenList->fields._items;
          v28 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C3E7C0(questPhaseHintDialogOpenList, v22);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v20,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v20;
            sub_1C3E508((CGThumbnailListItem_o *)(v30 + 4), v20, v23, v24);
          }
          --v17;
        }
        while ( v17 );
      }
      v16 = v6 ? 3 : 5;
      v2 = !v6;
    }
    klass = v11->klass;
    v32 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_36;
      }
      v34 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_36:
      v34 = sub_1C8ED7C(v11, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v11, *(_QWORD *)(v34 + 8));
    if ( v16 != 3 )
      return v2 & 1;
  }
  if ( v6 )
  {
    v35 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v35 = QuestHintDialogOpenManager_TypeInfo;
    }
    questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v35->static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
LABEL_79:
      sub_1C3E7C0(questHintDialogOpenList, v8);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v60,
      (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
      (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v61 = v60;
    v37 = 0;
LABEL_44:
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v61,
              (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v39 = sub_1C3E7B0(QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v39, 0);
      if ( !v39 )
        sub_1C3E7C0(v40, v41);
      *(_DWORD *)(v39 + 16) = v61.fields._current;
      v42 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v42 = QuestHintDialogOpenManager_TypeInfo;
      }
      v43 = (System_Collections_Generic_List_object__o *)v42->static_fields->questPhaseHintDialogOpenList;
      v44 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
      System_Predicate_object____ctor(
        v44,
        (Il2CppObject *)v39,
        Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__,
        0);
      if ( !v43 )
        sub_1C3E7C0(v45, v46);
      if ( !System_Collections_Generic_List_object___Find(
              v43,
              (System_Predicate_T__o *)v44,
              (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__) )
      {
        v47 = sub_1C3E7B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v47, 0);
        if ( !v47 )
          sub_1C3E7C0(v48, v49);
        *(_DWORD *)(v47 + 16) = *(_DWORD *)(v39 + 16);
        *(_DWORD *)(v47 + 20) = 1;
        v52 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v52 = QuestHintDialogOpenManager_TypeInfo;
        }
        v53 = (System_Collections_Generic_List_object__o *)v52->static_fields->questPhaseHintDialogOpenList;
        if ( !v53 )
          sub_1C3E7C0(0, v49);
        v54 = v53->fields._items;
        v55 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
        ++v53->fields._version;
        if ( !v54 )
          sub_1C3E7C0(v53, v49);
        v56 = v53->fields._size;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          v37 = 1;
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)v47,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v37 = 1;
          v53->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v47;
          sub_1C3E508((CGThumbnailListItem_o *)(v57 + 4), v47, v50, v51);
        }
        goto LABEL_44;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v61,
      (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v58 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v58);
  }
  else
  {
    v38 = 0;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  v59 = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !v59 )
    goto LABEL_79;
  if ( v59->fields._size >= 1 )
  {
    if ( (v38 & 1) != 0 )
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
  __int64 v7; // x1
  System_String_o *v8; // x20
  QuestHintDialogOpenManager_c *v9; // x0
  bool v10; // w21
  int v11; // w20
  __int64 v12; // x1
  int32_t v13; // w21
  QuestHintDialogOpenManager_c *v14; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  QuestHintDialogOpenManager_c *v23; // x0

  if ( (byte_4C580CA & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryReader_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580CA = 1;
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
    v5 = (System_IO_BinaryReader_o *)sub_1C3E7B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0);
    if ( !v5 )
      sub_1C3E7C0(v6, v7);
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._22_ReadString.methodPtr)(
                              v5,
                              v5->klass->vtable._22_ReadString.method);
    v9 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v9 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0) )
    {
      v10 = 0;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
              v5,
              v5->klass->vtable._15_ReadInt32.method);
      if ( v11 >= 1 )
      {
        do
        {
          v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v5->klass->vtable._15_ReadInt32.methodPtr)(
                  v5,
                  v5->klass->vtable._15_ReadInt32.method);
          v14 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v14 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v14->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1C3E7C0(0, v12);
          items = questHintDialogOpenList->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C3E7C0(questHintDialogOpenList, v12);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v13,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size] = v13;
          }
          --v11;
        }
        while ( v11 );
      }
      v10 = 1;
    }
    klass = v5->klass;
    v20 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_27;
      }
      v22 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_27:
      v22 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v5, *(_QWORD *)(v22 + 8));
  }
  else
  {
    v23 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v23);
    return 0;
  }
  return v10;
}


void QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C580CF & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580CF = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v2->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C3E7C0(v2, v1);
  questPhaseTempInfo->fields = 0;
}


// local variable allocation has failed, the output may be wrong!
void QuestHintDialogOpenManager__SetQuestInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestHintDialogOpenManager_c *v12; // x0
  const char *name; // x8
  _QWORD *v14; // x9
  __int64 namespaze_low; // x10
  const char *v16; // x8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C580CD & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    byte_4C580CD = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v18, 0, sizeof(v18));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v18.fields._current )
      sub_1C3E7C0(v7, v8);
    if ( LODWORD(v18.fields._current[1].klass) == questId && HIDWORD(v18.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v9 = sub_1C3E7B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_29;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  v12 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v12 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v12->static_fields->questPhaseHintDialogOpenList;
  if ( !v5
    || (name = v5->_1.name,
        v14 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
        ++HIDWORD(v5->_1.namespaze),
        !name) )
  {
LABEL_29:
    sub_1C3E7C0(v5, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v5->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &name[8 * namespaze_low];
    LODWORD(v5->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v16 + 4) = v9;
    sub_1C3E508((CGThumbnailListItem_o *)(v16 + 32), v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestHintDialogOpenManager__SetTemporarilyInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C580CE & 1) == 0 )
  {
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580CE = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C3E7C0(v5, *(_QWORD *)&questPhase);
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
  __int64 v6; // x1
  QuestHintDialogOpenManager_c *v7; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x9
  int size; // w20
  __int64 v11; // x1
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v13; // x0
  System_Collections_Generic_List_object__o *v14; // x0
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x0
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4C580CB & 1) == 0 )
  {
    sub_1C3E564(&System_IO_BinaryWriter_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&QuestHintDialogOpenManager_TypeInfo);
    byte_4C580CB = 1;
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
    v5 = (System_IO_BinaryWriter_o *)sub_1C3E7B0(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_64547772(v5, v4, 0);
    v7 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v7 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1C3E7C0(v7, v6);
    if ( !v5 )
      sub_1C3E7C0(v7, v6);
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
        v13 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v13 = QuestHintDialogOpenManager_TypeInfo;
        }
        v14 = (System_Collections_Generic_List_object__o *)v13->static_fields->questPhaseHintDialogOpenList;
        if ( !v14 )
          sub_1C3E7C0(0, v11);
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 i,
                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1C3E7C0(0, v16);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
          v5,
          LODWORD(Item[1].klass),
          v5->klass->vtable._17_Write.method);
        v18 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v18 )
          sub_1C3E7C0(0, v17);
        v19 = System_Collections_Generic_List_object___get_Item(
                v18,
                i,
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v19 )
          sub_1C3E7C0(0, v20);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
          v5,
          HIDWORD(v19[1].klass),
          v5->klass->vtable._17_Write.method);
      }
    }
    klass = v5->klass;
    v22 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_25;
      }
      v24 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_25:
      v24 = sub_1C8ED7C(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v5, *(_QWORD *)(v24 + 8));
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
    sub_1C3E7C0(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == 1;
}