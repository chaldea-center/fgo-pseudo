void __fastcall QuestHintDialogOpenManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x19
  struct QuestHintDialogOpenManager_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x19
  struct QuestHintDialogOpenManager_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4C2318C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo, v10);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v11);
    sub_1C3B764(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v13);
    byte_4C2318C = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v14;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->questPhaseHintDialogOpenList,
    (int64_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v23->questHintDialogOpenList = v22;
  sub_1C3B708((PartyOrganizationUtility_o *)&v23->questHintDialogOpenList, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = (Il2CppObject *)sub_1C3B9B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v30, 0LL);
  v31 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v31->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&v31->questPhaseTempInfo, (int64_t)v30, v32, v33, v34, v35, v36, v37);
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearOldSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  QuestHintDialogOpenManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v5; // w9

  if ( (byte_4C23183 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4C23183 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1C3B9C0(v3, v1);
  v5 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v5;
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  QuestHintDialogOpenManager_c *v3; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4C23182 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__, v1);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4C23182 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v3->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1C3B9C0(v3, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v6 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteOldSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4C23180 & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4C23180 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
    System_IO_File__Delete(OldSaveFileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v4; // x0

  if ( (byte_4C2317F & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4C2317F = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v4 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v4);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C2317E & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, v1);
    sub_1C3B764(&DatFileName_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v3);
    byte_4C2317E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_63379872(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/[delegate]"*/, FileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C2317D & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, v1);
    sub_1C3B764(&DatFileName_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v3);
    byte_4C2317D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(43, 0LL);
  return System_String__Concat_63379872(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/[delegate]"*/, FileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4C23181 & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4C23181 = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestHintDialogOpenManager_c *v10; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  bool v14; // w21
  int v15; // w19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23187 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      *(_QWORD *)&questPhase);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v8);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v9);
    byte_4C23187 = 1;
  }
  v10 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v17, 0, sizeof(v17));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v10 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v10->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_22;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v10);
    v10 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = QuestHintDialogOpenManager_TypeInfo;
  }
  v10 = (QuestHintDialogOpenManager_c *)v10->static_fields->questPhaseHintDialogOpenList;
  if ( !v10 )
LABEL_22:
    sub_1C3B9C0(v10, *(_QWORD *)&questPhase);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)v10,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    v14 = v12;
    if ( !v12 )
      break;
    if ( !v17.fields._current )
      sub_1C3B9C0(v12, v13);
    if ( LODWORD(v17.fields._current[1].klass) == questId && HIDWORD(v17.fields._current[1].klass) == questPhase )
    {
      v15 = 5;
      goto LABEL_20;
    }
  }
  v15 = 6;
LABEL_20:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return v14 && v15 == 5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C2318B & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    byte_4C2318B = 1;
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
    sub_1C3B9C0(v5, *(_QWORD *)&questPhase);
  }
  return 0;
}


bool __fastcall QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ManagerConfig_c *v16; // x0
  char v17; // w22
  QuestHintDialogOpenManager_c *v19; // x0
  _BOOL8 OldData; // x0
  bool v21; // w20
  System_String_o *SaveFileName; // x19
  __int64 v23; // x1
  QuestHintDialogOpenManager_c *v24; // x0
  System_IO_Stream_o *v25; // x21
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x21
  QuestHintDialogOpenManager_c *v30; // x0
  int v31; // w23
  int v32; // w21
  int v33; // w23
  int v34; // w24
  int64_t v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  QuestHintDialogOpenManager_c *v44; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 v53; // x0
  QuestHintDialogOpenManager_c *v54; // x0
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  char v56; // w19
  char v57; // w22
  __int64 v58; // x19
  __int64 v59; // x0
  __int64 v60; // x1
  QuestHintDialogOpenManager_c *v61; // x0
  System_Collections_Generic_List_object__o *v62; // x20
  System_Predicate_object__o *v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x20
  __int64 v67; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  QuestHintDialogOpenManager_c *v75; // x0
  System_Collections_Generic_List_object__o *v76; // x0
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x8
  QuestHintDialogOpenManager_c *v81; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *v82; // x8
  System_Collections_Generic_List_Enumerator_int__o v83; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v84; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23184 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v4);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v9);
    sub_1C3B764(&ManagerConfig_TypeInfo, v10);
    sub_1C3B764(&System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo, v11);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v12);
    sub_1C3B764(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v13);
    sub_1C3B764(&Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__, v14);
    sub_1C3B764(&QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo, v15);
    byte_4C23184 = 1;
  }
  v16 = ManagerConfig_TypeInfo;
  memset(&v84, 0, sizeof(v84));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v16 = ManagerConfig_TypeInfo;
  }
  if ( v16->static_fields->UseMock )
    goto LABEL_6;
  v19 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldData = QuestHintDialogOpenManager__ReadOldData((const MethodInfo *)v19);
  v21 = OldData;
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)OldData);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v24 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v24);
    v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v26 = (System_IO_BinaryReader_o *)sub_1C3B9B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v26, v25, 0LL);
    if ( !v26 )
      sub_1C3B9C0(v27, v28);
    v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                               v26,
                               v26->klass->vtable._23_ReadChars.methodPtr);
    v30 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v30 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
    {
      v17 = 0;
      v31 = 5;
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
              v26,
              v26->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v32 >= 1 )
      {
        do
        {
          v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                  v26,
                  v26->klass->vtable._16_ReadUInt32.methodPtr);
          v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                  v26,
                  v26->klass->vtable._16_ReadUInt32.methodPtr);
          v35 = sub_1C3B9B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v35, 0LL);
          if ( !v35 )
            sub_1C3B9C0(v36, v37);
          *(_DWORD *)(v35 + 16) = v33;
          *(_DWORD *)(v35 + 20) = v34;
          v44 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v44 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v44->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1C3B9C0(0LL, v37);
          items = questPhaseHintDialogOpenList->fields._items;
          v47 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C3B9C0(questPhaseHintDialogOpenList, v37);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v35,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            v49 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v35;
            sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 4), v35, v38, v39, v40, v41, v42, v43);
          }
          --v32;
        }
        while ( v32 );
      }
      v31 = v21 ? 3 : 5;
      v17 = !v21;
    }
    klass = v26->klass;
    v51 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        p_offset += 4;
        if ( !v51 )
          goto LABEL_36;
      }
      v53 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v53 = sub_1C8D744(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v53)(v26, *(_QWORD *)(v53 + 8));
    if ( v31 != 3 )
      return v17 & 1;
  }
  if ( v21 )
  {
    v54 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v54 = QuestHintDialogOpenManager_TypeInfo;
    }
    questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v54->static_fields->questHintDialogOpenList;
    if ( !questHintDialogOpenList )
LABEL_79:
      sub_1C3B9C0(questHintDialogOpenList, v23);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v83,
      (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
      (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v84 = v83;
    v56 = 0;
LABEL_44:
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v84,
              (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v58 = sub_1C3B9B0(QuestHintDialogOpenManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v58, 0LL);
      if ( !v58 )
        sub_1C3B9C0(v59, v60);
      *(_DWORD *)(v58 + 16) = v84.fields._current;
      v61 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v61 = QuestHintDialogOpenManager_TypeInfo;
      }
      v62 = (System_Collections_Generic_List_object__o *)v61->static_fields->questPhaseHintDialogOpenList;
      v63 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
      System_Predicate_object____ctor(
        v63,
        (Il2CppObject *)v58,
        Method_QuestHintDialogOpenManager___c__DisplayClass12_0__ReadData_b__0__,
        0LL);
      if ( !v62 )
        sub_1C3B9C0(v64, v65);
      if ( !System_Collections_Generic_List_object___Find(
              v62,
              (System_Predicate_T__o *)v63,
              (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Find__) )
      {
        v66 = sub_1C3B9B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v66, 0LL);
        if ( !v66 )
          sub_1C3B9C0(v67, v68);
        *(_DWORD *)(v66 + 16) = *(_DWORD *)(v58 + 16);
        *(_DWORD *)(v66 + 20) = 1;
        v75 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v75 = QuestHintDialogOpenManager_TypeInfo;
        }
        v76 = (System_Collections_Generic_List_object__o *)v75->static_fields->questPhaseHintDialogOpenList;
        if ( !v76 )
          sub_1C3B9C0(0LL, v68);
        v77 = v76->fields._items;
        v78 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
        ++v76->fields._version;
        if ( !v77 )
          sub_1C3B9C0(v76, v68);
        v79 = v76->fields._size;
        if ( (unsigned int)v79 >= v77->max_length )
        {
          v56 = 1;
          System_Collections_Generic_List_object___AddWithResize(
            v76,
            (Il2CppObject *)v66,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &v77->obj.klass + v79;
          v56 = 1;
          v76->fields._size = v79 + 1;
          v80[4] = (Il2CppClass *)v66;
          sub_1C3B708((PartyOrganizationUtility_o *)(v80 + 4), v66, v69, v70, v71, v72, v73, v74);
        }
        goto LABEL_44;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v84,
      (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    v81 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__DeleteOldSaveData((const MethodInfo *)v81);
  }
  else
  {
    v57 = 0;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  v82 = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !v82 )
    goto LABEL_79;
  if ( v82->fields._size >= 1 )
  {
    if ( (v57 & 1) != 0 )
    {
      if ( !questHintDialogOpenList->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
      QuestHintDialogOpenManager__WriteData((const MethodInfo *)questHintDialogOpenList);
    }
LABEL_6:
    v17 = 1;
    return v17 & 1;
  }
  if ( !questHintDialogOpenList->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
  QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)questHintDialogOpenList);
  v17 = 0;
  return v17 & 1;
}


bool __fastcall QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  QuestHintDialogOpenManager_c *v5; // x0
  System_String_o *OldSaveFileName; // x19
  QuestHintDialogOpenManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x20
  QuestHintDialogOpenManager_c *v13; // x0
  bool v14; // w21
  int v15; // w20
  __int64 v16; // x1
  int32_t v17; // w21
  QuestHintDialogOpenManager_c *v18; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  QuestHintDialogOpenManager_c *v27; // x0

  if ( (byte_4C23185 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C3B764(&System_IDisposable_TypeInfo, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v4);
    byte_4C23185 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v5);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
  {
    v7 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v7);
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSaveFileName, 0LL);
    v9 = (System_IO_BinaryReader_o *)sub_1C3B9B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0LL);
    if ( !v9 )
      sub_1C3B9C0(v10, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                               v9,
                               v9->klass->vtable._23_ReadChars.methodPtr);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v13->static_fields->SAVE_DATA_VERSION, v12, 0LL) )
    {
      v14 = 0;
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
              v9,
              v9->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v15 >= 1 )
      {
        do
        {
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                  v9,
                  v9->klass->vtable._16_ReadUInt32.methodPtr);
          v18 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v18 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v18->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1C3B9C0(0LL, v16);
          items = questHintDialogOpenList->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1C3B9C0(questHintDialogOpenList, v16);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v17,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v17;
          }
          --v15;
        }
        while ( v15 );
      }
      v14 = 1;
    }
    klass = v9->klass;
    v24 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v26 = sub_1C8D744(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v9, *(_QWORD *)(v26 + 8));
  }
  else
  {
    v27 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v27);
    return 0;
  }
  return v14;
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4C2318A & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4C2318A = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v2->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C3B9C0(v2, v1);
  questPhaseTempInfo->fields = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestHintDialogOpenManager__SetQuestInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestHintDialogOpenManager_c *v12; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  QuestHintDialogOpenManager_c *v23; // x0
  const char *name; // x8
  _QWORD *v25; // x9
  __int64 namespaze_low; // x10
  const char *v27; // x8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C23188 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      *(_QWORD *)&questPhase);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v9);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v10);
    sub_1C3B764(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v11);
    byte_4C23188 = 1;
  }
  v12 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v29, 0, sizeof(v29));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v12 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v12->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_29;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v12);
    v12 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = QuestHintDialogOpenManager_TypeInfo;
  }
  v12 = (QuestHintDialogOpenManager_c *)v12->static_fields->questPhaseHintDialogOpenList;
  if ( !v12 )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)v12,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v29.fields._current )
      sub_1C3B9C0(v14, v15);
    if ( LODWORD(v29.fields._current[1].klass) == questId && HIDWORD(v29.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v16 = sub_1C3B9B0(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_29;
  *(_DWORD *)(v16 + 16) = questId;
  *(_DWORD *)(v16 + 20) = questPhase;
  v23 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v23 = QuestHintDialogOpenManager_TypeInfo;
  }
  v12 = (QuestHintDialogOpenManager_c *)v23->static_fields->questPhaseHintDialogOpenList;
  if ( !v12
    || (name = v12->_1.name,
        v25 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
        ++HIDWORD(v12->_1.namespaze),
        !name) )
  {
LABEL_29:
    sub_1C3B9C0(v12, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v12->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v12,
      (Il2CppObject *)v16,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &name[8 * namespaze_low];
    LODWORD(v12->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v27 + 4) = v16;
    sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 32), v16, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4C23189 & 1) == 0 )
  {
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    byte_4C23189 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1C3B9C0(v5, *(_QWORD *)&questPhase);
  questPhaseTempInfo->fields.questId = questId;
  questPhaseTempInfo->fields.questPhase = questPhase;
}


bool __fastcall QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  QuestHintDialogOpenManager_c *v8; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryWriter_o *v11; // x19
  __int64 v12; // x1
  QuestHintDialogOpenManager_c *v13; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x9
  int size; // w20
  __int64 v17; // x1
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x0
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0

  if ( (byte_4C23186 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C3B764(&System_IDisposable_TypeInfo, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__, v4);
    sub_1C3B764(&ManagerConfig_TypeInfo, v5);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v6);
    byte_4C23186 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v8 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v8);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v11 = (System_IO_BinaryWriter_o *)sub_1C3B9B0(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63607104(v11, v10, 0LL);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1C3B9C0(v13, v12);
    if ( !v11 )
      sub_1C3B9C0(v13, v12);
    size = questPhaseHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v11->klass->vtable._22_Write.method)(
      v11,
      static_fields->SAVE_DATA_VERSION,
      v11->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
      v11,
      (unsigned int)size,
      v11->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v19 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          v19 = QuestHintDialogOpenManager_TypeInfo;
        }
        v20 = (System_Collections_Generic_List_object__o *)v19->static_fields->questPhaseHintDialogOpenList;
        if ( !v20 )
          sub_1C3B9C0(0LL, v17);
        Item = System_Collections_Generic_List_object___get_Item(
                 v20,
                 i,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1C3B9C0(0LL, v22);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
          v11,
          LODWORD(Item[1].klass),
          v11->klass->vtable._18_Write.methodPtr);
        v24 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v24 )
          sub_1C3B9C0(0LL, v23);
        v25 = System_Collections_Generic_List_object___get_Item(
                v24,
                i,
                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v25 )
          sub_1C3B9C0(0LL, v26);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
          v11,
          HIDWORD(v25[1].klass),
          v11->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v11->klass;
    v28 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_25;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_25:
      v30 = sub_1C8D744(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v11, *(_QWORD *)(v30 + 8));
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == 1;
}