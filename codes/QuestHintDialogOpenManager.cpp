void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x19
  struct QuestHintDialogOpenManager_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *v23; // x19
  struct QuestHintDialogOpenManager_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BDD725 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_6814/*"Fgo_20210622"*/);
    byte_4BDD725 = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6814/*"Fgo_20210622"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6814/*"Fgo_20210622"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v7;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->questPhaseHintDialogOpenList,
    (int64_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v16->questHintDialogOpenList = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->questHintDialogOpenList, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  v23 = (Il2CppObject *)sub_1C22084(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v23, 0LL);
  v24 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v24->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->questPhaseTempInfo, (int64_t)v23, v25, v26, v27, v28, v29, v30);
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearOldSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v4; // w9

  if ( (byte_4BDD71C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD71C = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v2->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1C22094(v2, v1);
  v4 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v4;
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4BDD71B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD71B = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v2->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1C22094(v2, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v5 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteOldSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4BDD719 & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD719 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
    System_IO_File__Delete(OldSaveFileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4BDD718 & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD718 = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v3);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDD717 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDD717 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDD716 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDD716 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(43, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v1; // x0

  if ( (byte_4BDD71A & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD71A = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v1);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  bool v9; // w21
  int v10; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDD720 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD720 = 1;
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
    sub_1C22094(v5, *(_QWORD *)&questPhase);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    v9 = v7;
    if ( !v7 )
      break;
    if ( !v12.fields._current )
      sub_1C22094(v7, v8);
    if ( LODWORD(v12.fields._current[1].klass) == questId && HIDWORD(v12.fields._current[1].klass) == questPhase )
    {
      v10 = 5;
      goto LABEL_20;
    }
  }
  v10 = 6;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return v9 && v10 == 5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4BDD724 & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD724 = 1;
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
    sub_1C22094(v5, *(_QWORD *)&questPhase);
  }
  return 0;
}


bool __fastcall QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
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
  int64_t v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  QuestHintDialogOpenManager_c *v29; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  QuestHintDialogOpenManager_c *v39; // x0
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  char v41; // w19
  char v42; // w22
  __int64 v43; // x19
  __int64 v44; // x0
  __int64 v45; // x1
  QuestHintDialogOpenManager_c *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x20
  System_Predicate_object__o *v48; // x21
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  QuestHintDialogOpenManager_c *v60; // x0
  System_Collections_Generic_List_object__o *v61; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x8
  QuestHintDialogOpenManager_c *v66; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *v67; // x8
  System_Collections_Generic_List_Enumerator_int__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v69; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDD71D & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    sub_1C21E38(&Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__);
    sub_1C21E38(&QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
    byte_4BDD71D = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  memset(&v69, 0, sizeof(v69));
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
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v9 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v11 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0LL);
    if ( !v11 )
      sub_1C22094(v12, v13);
    v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._22_ReadString.method)(
                               v11,
                               v11->klass->vtable._23_ReadChars.methodPtr);
    v15 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v15 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0LL) )
    {
      v2 = 0;
      v16 = 5;
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
              v11,
              v11->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v17 >= 1 )
      {
        do
        {
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                  v11,
                  v11->klass->vtable._16_ReadUInt32.methodPtr);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v11->klass->vtable._15_ReadInt32.method)(
                  v11,
                  v11->klass->vtable._16_ReadUInt32.methodPtr);
          v20 = sub_1C22084(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0LL);
          if ( !v20 )
            sub_1C22094(v21, v22);
          *(_DWORD *)(v20 + 16) = v18;
          *(_DWORD *)(v20 + 20) = v19;
          v29 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v29 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v29->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1C22094(0LL, v22);
          items = questPhaseHintDialogOpenList->fields._items;
          v32 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C22094(questPhaseHintDialogOpenList, v22);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v20,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v20;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), v20, v23, v24, v25, v26, v27, v28);
          }
          --v17;
        }
        while ( v17 );
      }
      v16 = v6 ? 3 : 5;
      v2 = !v6;
    }
    klass = v11->klass;
    v36 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_36;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v38 = sub_1C73E18(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v11, *(_QWORD *)(v38 + 8));
    if ( v16 != 3 )
      return v2 & 1;
  }
  if ( v6 )
  {
    v39 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v39 = QuestHintDialogOpenManager_TypeInfo;
    }
    questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v39->static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
LABEL_79:
      sub_1C22094(questHintDialogOpenList, v8);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
      (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v69 = v68;
    v41 = 0;
LABEL_44:
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v69,
              (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v43 = sub_1C22084(QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v43, 0LL);
      if ( !v43 )
        sub_1C22094(v44, v45);
      *(_DWORD *)(v43 + 16) = v69.fields._current;
      v46 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v46 = QuestHintDialogOpenManager_TypeInfo;
      }
      v47 = (System_Collections_Generic_List_object__o *)v46->static_fields->questPhaseHintDialogOpenList;
      v48 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
      System_Predicate_object____ctor(
        v48,
        (Il2CppObject *)v43,
        Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__,
        0LL);
      if ( !v47 )
        sub_1C22094(v49, v50);
      if ( !System_Collections_Generic_List_object___Find(
              v47,
              (System_Predicate_T__o *)v48,
              (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__) )
      {
        v51 = sub_1C22084(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v51, 0LL);
        if ( !v51 )
          sub_1C22094(v52, v53);
        *(_DWORD *)(v51 + 16) = *(_DWORD *)(v43 + 16);
        *(_DWORD *)(v51 + 20) = 1;
        v60 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v60 = QuestHintDialogOpenManager_TypeInfo;
        }
        v61 = (System_Collections_Generic_List_object__o *)v60->static_fields->questPhaseHintDialogOpenList;
        if ( !v61 )
          sub_1C22094(0LL, v53);
        v62 = v61->fields._items;
        v63 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
        ++v61->fields._version;
        if ( !v62 )
          sub_1C22094(v61, v53);
        v64 = v61->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          v41 = 1;
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)v51,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v41 = 1;
          v61->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v51;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 4), v51, v54, v55, v56, v57, v58, v59);
        }
        goto LABEL_44;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v69,
      (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v66 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v66);
  }
  else
  {
    v42 = 0;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  v67 = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !v67 )
    goto LABEL_79;
  if ( v67->fields._size >= 1 )
  {
    if ( (v42 & 1) != 0 )
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


bool __fastcall QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
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

  if ( (byte_4BDD71E & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD71E = 1;
  }
  v1 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
  {
    v3 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v3);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSaveFileName, 0LL);
    v5 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0LL);
    if ( !v5 )
      sub_1C22094(v6, v7);
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._22_ReadString.method)(
                              v5,
                              v5->klass->vtable._23_ReadChars.methodPtr);
    v9 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v9 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
              v5,
              v5->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v11 >= 1 )
      {
        do
        {
          v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v14 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v14 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v14->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1C22094(0LL, v12);
          items = questHintDialogOpenList->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C22094(questHintDialogOpenList, v12);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v13,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v13;
          }
          --v11;
        }
        while ( v11 );
      }
      v10 = 1;
    }
    klass = v5->klass;
    v20 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_27;
      }
      v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v22 = sub_1C73E18(v5, System_IDisposable_TypeInfo, 0LL);
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


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4BDD723 & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD723 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v2->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C22094(v2, v1);
  questPhaseTempInfo->fields = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestHintDialogOpenManager__SetQuestInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  QuestHintDialogOpenManager_c *v16; // x0
  const char *name; // x8
  _QWORD *v18; // x9
  __int64 namespaze_low; // x10
  const char *v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDD721 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
    byte_4BDD721 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)v5,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v7 )
      break;
    if ( !v22.fields._current )
      sub_1C22094(v7, v8);
    if ( LODWORD(v22.fields._current[1].klass) == questId && HIDWORD(v22.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v9 = sub_1C22084(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_29;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  v16 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
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
    sub_1C22094(v5, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v5->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v5,
      (Il2CppObject *)v9,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &name[8 * namespaze_low];
    LODWORD(v5->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v20 + 4) = v9;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 32), v9, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestHintDialogOpenManager__SetTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4BDD722 & 1) == 0 )
  {
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD722 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C22094(v5, *(_QWORD *)&questPhase);
  questPhaseTempInfo->fields.questId = questId;
  questPhaseTempInfo->fields.questPhase = questPhase;
}


bool __fastcall QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
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

  if ( (byte_4BDD71F & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    byte_4BDD71F = 1;
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
    v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v5 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63353968(v5, v4, 0LL);
    v7 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v7 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1C22094(v7, v6);
    if ( !v5 )
      sub_1C22094(v7, v6);
    size = questPhaseHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v5->klass->vtable._22_Write.method)(
      v5,
      static_fields->SAVE_DATA_VERSION,
      v5->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._17_Write.method)(
      v5,
      (unsigned int)size,
      v5->klass->vtable._18_Write.methodPtr);
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
          sub_1C22094(0LL, v11);
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 i,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1C22094(0LL, v16);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._17_Write.method)(
          v5,
          LODWORD(Item[1].klass),
          v5->klass->vtable._18_Write.methodPtr);
        v18 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v18 )
          sub_1C22094(0LL, v17);
        v19 = System_Collections_Generic_List_object___get_Item(
                v18,
                i,
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v19 )
          sub_1C22094(0LL, v20);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._17_Write.method)(
          v5,
          HIDWORD(v19[1].klass),
          v5->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v5->klass;
    v22 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_25;
      }
      v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_25:
      v24 = sub_1C73E18(v5, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v5, *(_QWORD *)(v24 + 8));
  }
  return 1;
}


void __fastcall QuestHintDialogOpenManager_QuestPhaseInfo___ctor(
        QuestHintDialogOpenManager_QuestPhaseInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager___c__DisplayClass12_0___ctor(
        QuestHintDialogOpenManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestHintDialogOpenManager___c__DisplayClass12_0___ReadData_b__0(
        QuestHintDialogOpenManager___c__DisplayClass12_0_o *this,
        QuestHintDialogOpenManager_QuestPhaseInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == 1;
}