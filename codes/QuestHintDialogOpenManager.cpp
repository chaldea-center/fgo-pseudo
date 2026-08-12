void QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_object__o *v8; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_int__o *v16; // x19
  struct QuestHintDialogOpenManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x19
  struct QuestHintDialogOpenManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5971C12 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_2213A60(&StringLiteral_6963/*"Fgo_20210622"*/);
    byte_5971C12 = 1;
  }
  v7 = StringLiteral_6963/*"Fgo_20210622"*/;
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6963/*"Fgo_20210622"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->questPhaseHintDialogOpenList,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v17->questHintDialogOpenList = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->questHintDialogOpenList,
    (int32_t)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (Il2CppObject *)sub_2213CCC(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v24, 0);
  v25 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v25->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->questPhaseTempInfo, (int32_t)v24, v26, v27, v28, v29, v30, v31);
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

  if ( (byte_5971C09 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C09 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v2->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_2213CDC(v2, v1);
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

  if ( (byte_5971C08 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C08 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v2->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_2213CDC(v2, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v5 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0);
}


void QuestHintDialogOpenManager__DeleteOldSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_5971C06 & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C06 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(OldSaveFileName, 0) )
    System_IO_File__Delete(OldSaveFileName, 0);
}


void QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  QuestHintDialogOpenManager_c *v5; // x0

  if ( (byte_5971C05 & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C05 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v4);
  QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v5);
}


System_String_o *QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971C04 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971C04 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(33, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


System_String_o *QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971C03 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971C03 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(43, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_5971C07 & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C07 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool QuestHintDialogOpenManager__IsQuestHintOpen(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  bool v9; // w21
  __int64 v11; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v12; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971C0D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C0D = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v13, 0, sizeof(v13));
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v5->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_20;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v5->static_fields->questPhaseHintDialogOpenList;
  if ( !v5 )
LABEL_20:
    sub_2213CDC(v5, *(_QWORD *)&questPhase);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v11 = 0;
  v12 = &v13;
  do
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    v9 = v7;
    if ( !v7 )
      break;
    if ( !v13.fields._current )
      sub_2213CDC(v7, v8);
  }
  while ( *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&word_10) != questId
       || *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_14) != questPhase );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_5971C11 & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C11 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    goto LABEL_11;
  if ( questPhaseTempInfo->fields.questId == questId )
  {
    if ( *(&v5->_2.cctor_finished + 1) )
      return questPhaseTempInfo->fields.questPhase == questPhase;
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    questPhaseTempInfo = QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseTempInfo;
    if ( questPhaseTempInfo )
      return questPhaseTempInfo->fields.questPhase == questPhase;
LABEL_11:
    sub_2213CDC(v5, *(_QWORD *)&questPhase);
  }
  return 0;
}


bool QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  int v3; // w8
  char v4; // w21
  QuestHintDialogOpenManager_c *v6; // x0
  _BOOL8 OldData; // x0
  bool v8; // w19
  System_String_o *SaveFileName; // x20
  __int64 v10; // x1
  QuestHintDialogOpenManager_c *v11; // x0
  System_IO_Stream_o *v12; // x21
  System_IO_BinaryReader_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x20
  QuestHintDialogOpenManager_c *v18; // x0
  int v19; // w22
  int v20; // w20
  __int64 v21; // x1
  int v22; // w22
  int v23; // w23
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  QuestHintDialogOpenManager_c *v33; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int64 *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  QuestHintDialogOpenManager_c *v44; // x0
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  char v46; // w19
  char v47; // w22
  __int64 v48; // x19
  __int64 v49; // x0
  __int64 v50; // x1
  QuestHintDialogOpenManager_c *v51; // x0
  System_Collections_Generic_List_object__o *v52; // x20
  System_Predicate_object__o *v53; // x21
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x20
  __int64 v57; // x0
  __int64 v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  QuestHintDialogOpenManager_c *v65; // x0
  System_Collections_Generic_List_object__o *v66; // x0
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x8
  __int64 v71; // x1
  QuestHintDialogOpenManager_c *v72; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *v73; // x8
  System_Collections_Generic_List_Enumerator_int__o v74; // [xsp+8h] [xbp-A8h] BYREF
  int v75; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+30h] [xbp-80h] BYREF
  System_IO_BinaryReader_o *v77; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5971C0A & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_2213A60(&Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__);
    sub_2213A60(&QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
    byte_5971C0A = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  v77 = 0;
  memset(&v76, 0, sizeof(v76));
  v3 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v75 = 0;
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    goto LABEL_6;
  v6 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  OldData = QuestHintDialogOpenManager__ReadOldData((const MethodInfo *)v6);
  v8 = OldData;
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)OldData);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v11 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v11);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v13 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v13, v12, 0);
    v77 = v13;
    v74.fields._list = 0;
    *(_QWORD *)&v74.fields._index = &v77;
    if ( !v13 )
      sub_2213CDC(v14, v15);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v13->klass->vtable._22_ReadString.methodPtr)(
                               v13,
                               v13->klass->vtable._22_ReadString.method);
    v18 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v16);
      v18 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0) )
    {
      v4 = 0;
      v19 = 5;
    }
    else
    {
      if ( !v77 )
        sub_2213CDC(0, v10);
      v20 = ((__int64 (*)(void))v77->klass->vtable._15_ReadInt32.methodPtr)();
      if ( v20 >= 1 )
      {
        do
        {
          if ( !v77 )
            sub_2213CDC(0, v10);
          v22 = ((__int64 (*)(void))v77->klass->vtable._15_ReadInt32.methodPtr)();
          if ( !v77 )
            sub_2213CDC(0, v21);
          v23 = ((__int64 (*)(void))v77->klass->vtable._15_ReadInt32.methodPtr)();
          v24 = sub_2213CCC(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v24, 0);
          if ( !v24 )
            sub_2213CDC(v25, v26);
          v33 = QuestHintDialogOpenManager_TypeInfo;
          *(_DWORD *)(v24 + 16) = v22;
          *(_DWORD *)(v24 + 20) = v23;
          if ( !*(&v33->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v33, v26);
            v33 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v33->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList
            || (items = questPhaseHintDialogOpenList->fields._items,
                v36 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
                ++questPhaseHintDialogOpenList->fields._version,
                !items) )
          {
            sub_2213CDC(questPhaseHintDialogOpenList, v26);
          }
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v24,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v24;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), v24, v27, v28, v29, v30, v31, v32);
          }
          --v20;
        }
        while ( v20 );
      }
      if ( v8 )
        v19 = 3;
      else
        v19 = 5;
      v4 = !v8;
    }
    v39 = **(__int64 ***)&v74.fields._index;
    if ( **(_QWORD **)&v74.fields._index )
    {
      v40 = *v39;
      v41 = *(unsigned __int16 *)(*v39 + 302);
      if ( *(_WORD *)(*v39 + 302) )
      {
        v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_40;
        }
        v43 = v40 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_40:
        v43 = sub_224BC3C(**(_QWORD **)&v74.fields._index, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    }
    if ( v74.fields._list )
      sub_2213CD4(v74.fields._list);
    if ( v19 != 3 )
      return v4 & 1;
  }
  if ( v8 )
  {
    v44 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
      v44 = QuestHintDialogOpenManager_TypeInfo;
    }
    questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v44->static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
LABEL_86:
      sub_2213CDC(questHintDialogOpenList, v10);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v74,
      (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
      (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v76 = v74;
    v46 = 0;
    v74.fields._list = 0;
    *(_QWORD *)&v74.fields._index = &v76;
LABEL_50:
    v47 = v46;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v76,
              (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v48 = sub_2213CCC(QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v48, 0);
      if ( !v48 )
        sub_2213CDC(v49, v50);
      v51 = QuestHintDialogOpenManager_TypeInfo;
      *(_DWORD *)(v48 + 16) = v76.fields._current;
      if ( !*(&v51->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v51, v50);
        v51 = QuestHintDialogOpenManager_TypeInfo;
      }
      v52 = (System_Collections_Generic_List_object__o *)v51->static_fields->questPhaseHintDialogOpenList;
      v53 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
      System_Predicate_object____ctor(
        v53,
        (Il2CppObject *)v48,
        Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__,
        0);
      if ( !v52 )
        sub_2213CDC(v54, v55);
      if ( !System_Collections_Generic_List_object___Find(
              v52,
              (System_Predicate_T__o *)v53,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__) )
      {
        v56 = sub_2213CCC(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v56, 0);
        if ( !v56 )
          sub_2213CDC(v57, v58);
        v65 = QuestHintDialogOpenManager_TypeInfo;
        *(_DWORD *)(v56 + 16) = *(_DWORD *)(v48 + 16);
        *(_DWORD *)(v56 + 20) = 1;
        if ( !*(&v65->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v65, v58);
          v65 = QuestHintDialogOpenManager_TypeInfo;
        }
        v66 = (System_Collections_Generic_List_object__o *)v65->static_fields->questPhaseHintDialogOpenList;
        if ( !v66
          || (v67 = v66->fields._items,
              v68 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
              ++v66->fields._version,
              !v67) )
        {
          sub_2213CDC(v66, v58);
        }
        v69 = v66->fields._size;
        if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
        {
          v46 = 1;
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            (Il2CppObject *)v56,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          v46 = 1;
          v66->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v56;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 4), v56, v59, v60, v61, v62, v63, v64);
        }
        goto LABEL_50;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v76,
      (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v72 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v71);
    QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v72);
  }
  else
  {
    v47 = 0;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  v73 = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !v73 )
    goto LABEL_86;
  if ( v73->fields._size >= 1 )
  {
    if ( (v47 & 1) != 0 )
    {
      if ( !*(&questHintDialogOpenList->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(questHintDialogOpenList, v10);
      QuestHintDialogOpenManager__WriteData((const MethodInfo *)questHintDialogOpenList);
    }
LABEL_6:
    v4 = 1;
    return v4 & 1;
  }
  if ( !*(&questHintDialogOpenList->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(questHintDialogOpenList, v10);
  QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)questHintDialogOpenList);
  v4 = 0;
  return v4 & 1;
}


bool QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *OldSaveFileName; // x19
  __int64 v4; // x1
  QuestHintDialogOpenManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x19
  QuestHintDialogOpenManager_c *v12; // x0
  __int64 v13; // x1
  bool v14; // w19
  int v15; // w19
  __int64 v16; // x1
  int32_t v17; // w20
  QuestHintDialogOpenManager_c *v18; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 v26; // x0
  QuestHintDialogOpenManager_c *v27; // x0
  System_IO_BinaryReader_o *v29; // [xsp+28h] [xbp-28h]

  if ( (byte_5971C0B & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C0B = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(OldSaveFileName, 0) )
  {
    v5 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v4);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSaveFileName, 0);
    v7 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    v29 = v7;
    if ( !v7 )
      sub_2213CDC(v8, v9);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                               v7,
                               v7->klass->vtable._22_ReadString.method);
    v12 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v10);
      v12 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
    {
      v14 = 0;
    }
    else
    {
      if ( !v29 )
        sub_2213CDC(0, v13);
      v15 = ((__int64 (*)(void))v29->klass->vtable._15_ReadInt32.methodPtr)();
      if ( v15 >= 1 )
      {
        do
        {
          v17 = ((__int64 (*)(void))v29->klass->vtable._15_ReadInt32.methodPtr)();
          v18 = QuestHintDialogOpenManager_TypeInfo;
          if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v16);
            v18 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v18->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList
            || (items = questHintDialogOpenList->fields._items,
                v21 = Method_System_Collections_Generic_List_int__Add__,
                ++questHintDialogOpenList->fields._version,
                !items) )
          {
            sub_2213CDC(questHintDialogOpenList, v16);
          }
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v17,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size] = v17;
          }
          --v15;
        }
        while ( v15 );
      }
      v14 = 1;
    }
    if ( v29 )
    {
      klass = v29->klass;
      v24 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v24;
          p_offset += 4;
          if ( !v24 )
            goto LABEL_29;
        }
        v26 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_29:
        v26 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v29, *(_QWORD *)(v26 + 8));
    }
  }
  else
  {
    v27 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v4);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v27);
    return 0;
  }
  return v14;
}


void QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_5971C10 & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C10 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v2->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_2213CDC(v2, v1);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  QuestHintDialogOpenManager_c *v16; // x0
  const char *name; // x8
  _QWORD *v18; // x9
  __int64 namespaze_low; // x10
  const char *v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5971C0E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    byte_5971C0E = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v5->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_29;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v5);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v5->static_fields->questPhaseHintDialogOpenList;
  if ( !v5 )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v22 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v22.fields._current )
      sub_2213CDC(v7, v8);
    if ( LODWORD(v22.fields._current[1].klass) == questId && HIDWORD(v22.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v9 = sub_2213CCC(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_29;
  v16 = QuestHintDialogOpenManager_TypeInfo;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  if ( !*(&v16->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v16, *(_QWORD *)&questPhase);
    v16 = QuestHintDialogOpenManager_TypeInfo;
  }
  v5 = (QuestHintDialogOpenManager_c *)v16->static_fields->questPhaseHintDialogOpenList;
  if ( !v5
    || (name = v5->_1.name,
        v18 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
        ++HIDWORD(v5->_1.namespaze),
        !name) )
  {
LABEL_29:
    sub_2213CDC(v5, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v5->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &name[8 * namespaze_low];
    LODWORD(v5->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v20 + 4) = v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), v9, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestHintDialogOpenManager__SetTemporarilyInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_5971C0F & 1) == 0 )
  {
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C0F = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_2213CDC(v5, *(_QWORD *)&questPhase);
  questPhaseTempInfo->fields.questId = questId;
  questPhaseTempInfo->fields.questPhase = questPhase;
}


bool QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  QuestHintDialogOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  QuestHintDialogOpenManager_c *v8; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x9
  int size; // w19
  __int64 v11; // x1
  int32_t i; // w20
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
  int *p_offset; // x10
  __int64 v24; // x0
  System_IO_BinaryWriter_o *v26; // [xsp+28h] [xbp-38h]

  if ( (byte_5971C0C & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&QuestHintDialogOpenManager_TypeInfo);
    byte_5971C0C = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v3 = QuestHintDialogOpenManager_TypeInfo;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v3);
    v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v6 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_76953012(v6, v5, 0);
    v8 = QuestHintDialogOpenManager_TypeInfo;
    v26 = v6;
    if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v7);
      v8 = QuestHintDialogOpenManager_TypeInfo;
    }
    questPhaseHintDialogOpenList = v8->static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_2213CDC(v8, v7);
    if ( !v6 )
      sub_2213CDC(0, v7);
    size = questPhaseHintDialogOpenList->fields._size;
    v26->klass->vtable._22_Write.methodPtr();
    v26->klass->vtable._17_Write.methodPtr();
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v13 = QuestHintDialogOpenManager_TypeInfo;
        if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v11);
          v13 = QuestHintDialogOpenManager_TypeInfo;
        }
        v14 = (System_Collections_Generic_List_object__o *)v13->static_fields->questPhaseHintDialogOpenList;
        if ( !v14 )
          sub_2213CDC(0, v11);
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 i,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_2213CDC(0, v16);
        if ( !v26 )
          sub_2213CDC(Item, v16);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v26->klass->vtable._17_Write.methodPtr)(
          v26,
          LODWORD(Item[1].klass),
          v26->klass->vtable._17_Write.method);
        v18 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v18 )
          sub_2213CDC(0, v17);
        v19 = System_Collections_Generic_List_object___get_Item(
                v18,
                i,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v19 )
          sub_2213CDC(0, v20);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v26->klass->vtable._17_Write.methodPtr)(
          v26,
          HIDWORD(v19[1].klass),
          v26->klass->vtable._17_Write.method);
      }
    }
    if ( v26 )
    {
      klass = v26->klass;
      v22 = *(unsigned __int16 *)&v26->klass->_2.rank;
      if ( *(_WORD *)&v26->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_27;
        }
        v24 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_27:
        v24 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v26, *(_QWORD *)(v24 + 8));
    }
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
    sub_2213CDC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == 1;
}