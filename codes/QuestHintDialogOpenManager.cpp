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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_int__o *v34; // x19
  struct QuestHintDialogOpenManager_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *v45; // x19
  struct QuestHintDialogOpenManager_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B17366 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo, v12, v13);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_6764/*"Fgo_20210622"*/, v18, v19);
    byte_4B17366 = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6764/*"Fgo_20210622"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6764/*"Fgo_20210622"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->questPhaseHintDialogOpenList,
    (int64_t)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v34 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v31,
                                                    v32,
                                                    v33);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v35 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v35->questHintDialogOpenList = v34;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->questHintDialogOpenList, (int64_t)v34, v36, v37, v38, v39, v40, v41);
  v45 = (Il2CppObject *)sub_1BCAA2C(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v42, v43, v44);
  System_Object___ctor(v45, 0LL);
  v46 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v46->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&v46->questPhaseTempInfo, (int64_t)v45, v47, v48, v49, v50, v51, v52);
}


void __fastcall QuestHintDialogOpenManager___ctor(QuestHintDialogOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestHintDialogOpenManager__ClearOldSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *questHintDialogOpenList; // x8
  int v7; // w9

  if ( (byte_4B1735D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v1, v2);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v3, v4);
    byte_4B1735D = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v5->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1BCAA3C(v5, v1);
  v7 = questHintDialogOpenList->fields._version + 1;
  questHintDialogOpenList->fields._size = 0;
  questHintDialogOpenList->fields._version = v7;
}


void __fastcall QuestHintDialogOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  QuestHintDialogOpenManager_c *v5; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4B1735C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__, v1, v2);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v3, v4);
    byte_4B1735C = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v5->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1BCAA3C(v5, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v8 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  QuestHintDialogOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  __int64 v5; // x1
  QuestHintDialogOpenManager_c *v6; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4B1735A & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v1, v2);
    byte_4B1735A = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
  v6 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v5);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
    System_IO_File__Delete(OldSaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17359 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17359 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17358 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17358 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(43, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  QuestHintDialogOpenManager_c *v3; // x0

  if ( (byte_4B1735B & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v1, v2);
    byte_4B1735B = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  QuestHintDialogOpenManager__ReadData((const MethodInfo *)v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsQuestHintOpen(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v25; // x0
  __int64 v26; // x1
  QuestHintDialogOpenManager_c *v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4B17361 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questPhase, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__,
      v19,
      v20);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v21, v22);
    byte_4B17361 = 1;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_32;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !questHintDialogOpenList->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(questHintDialogOpenList, *(_QWORD *)&questPhase);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)questHintDialogOpenList);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !questHintDialogOpenList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(questHintDialogOpenList, *(_QWORD *)&questPhase);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = (QuestHintDialogOpenManager_c *)questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)questHintDialogOpenList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v31 = v29;
  do
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v25 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      if ( questPhase != 1 )
        return 0;
      v27 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
        v27 = QuestHintDialogOpenManager_TypeInfo;
      }
      questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v27->static_fields->questHintDialogOpenList;
      if ( questHintDialogOpenList )
      {
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v29,
          (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
          (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v30 = v29;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v30,
                  (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( LODWORD(v30.fields._current) == questId )
          {
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v30,
              (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
            return 1;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v30,
          (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        return 0;
      }
LABEL_32:
      sub_1BCAA3C(questHintDialogOpenList, *(_QWORD *)&questPhase);
    }
    if ( !v31.fields._current )
      sub_1BCAA3C(v25, v26);
  }
  while ( LODWORD(v31.fields._current[1].klass) != questId || HIDWORD(v31.fields._current[1].klass) != questPhase );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  QuestHintDialogOpenManager_c *v5; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4B17365 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase, method);
    byte_4B17365 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    goto LABEL_11;
  if ( questPhaseTempInfo->fields.questId == questId )
  {
    if ( v5->_2.cctor_finished )
      return questPhaseTempInfo->fields.questPhase == questPhase;
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&questPhase);
    questPhaseTempInfo = QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseTempInfo;
    if ( questPhaseTempInfo )
      return questPhaseTempInfo->fields.questPhase == questPhase;
LABEL_11:
    sub_1BCAA3C(v5, *(_QWORD *)&questPhase);
  }
  return 0;
}


bool __fastcall QuestHintDialogOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ManagerConfig_c *v13; // x0
  bool v14; // w21
  QuestHintDialogOpenManager_c *v15; // x0
  const MethodInfo *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  QuestHintDialogOpenManager_c *v19; // x0
  System_IO_Stream_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x20
  QuestHintDialogOpenManager_c *v29; // x0
  int v30; // w20
  int v31; // w22
  int v32; // w23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int64_t v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  QuestHintDialogOpenManager_c *v45; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 v54; // x0
  QuestHintDialogOpenManager_c *v55; // x0

  if ( (byte_4B1735E & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v11, v12);
    byte_4B1735E = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    return 1;
  v15 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  QuestHintDialogOpenManager__ReadOldData((const MethodInfo *)v15);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName(v16);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v19 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v18);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v19);
    v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
    System_IO_BinaryReader___ctor(v24, v20, 0LL);
    if ( !v24 )
      sub_1BCAA3C(v25, v26);
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                               v24,
                               v24->klass->vtable._23_ReadChars.methodPtr);
    v29 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v27);
      v29 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v29->static_fields->SAVE_DATA_VERSION, v28, 0LL) )
    {
      v14 = 0;
    }
    else
    {
      v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
              v24,
              v24->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v30 >= 1 )
      {
        do
        {
          v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                  v24,
                  v24->klass->vtable._16_ReadUInt32.methodPtr);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                  v24,
                  v24->klass->vtable._16_ReadUInt32.methodPtr);
          v36 = sub_1BCAA2C(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v33, v34, v35);
          System_Object___ctor((Il2CppObject *)v36, 0LL);
          if ( !v36 )
            sub_1BCAA3C(v37, v38);
          *(_DWORD *)(v36 + 16) = v31;
          *(_DWORD *)(v36 + 20) = v32;
          v45 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v38);
            v45 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v45->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1BCAA3C(0LL, v38);
          items = questPhaseHintDialogOpenList->fields._items;
          v48 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1BCAA3C(questPhaseHintDialogOpenList, v38);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v36,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v36;
            sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), v36, v39, v40, v41, v42, v43, v44);
          }
          --v30;
        }
        while ( v30 );
      }
      v14 = 1;
    }
    klass = v24->klass;
    v52 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        p_offset += 4;
        if ( !v52 )
          goto LABEL_32;
      }
      v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v54 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v54)(v24, *(_QWORD *)(v54 + 8));
  }
  else
  {
    v55 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v18);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v55);
    return 0;
  }
  return v14;
}


void __fastcall QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  QuestHintDialogOpenManager_c *v9; // x0
  System_String_o *OldSaveFileName; // x19
  __int64 v11; // x1
  QuestHintDialogOpenManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_IO_BinaryReader_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_String_o *v21; // x20
  QuestHintDialogOpenManager_c *v22; // x0
  int v23; // w20
  __int64 v24; // x1
  int32_t v25; // w21
  QuestHintDialogOpenManager_c *v26; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  QuestHintDialogOpenManager_c *v35; // x0

  if ( (byte_4B1735F & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v7, v8);
    byte_4B1735F = 1;
  }
  v9 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v9);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
  {
    v12 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v11);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v12);
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(OldSaveFileName, 0LL);
    v17 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v14, v15, v16);
    System_IO_BinaryReader___ctor(v17, v13, 0LL);
    if ( !v17 )
      sub_1BCAA3C(v18, v19);
    v21 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                               v17,
                               v17->klass->vtable._23_ReadChars.methodPtr);
    v22 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v20);
      v22 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( !System_String__op_Inequality(v22->static_fields->SAVE_DATA_VERSION, v21, 0LL) )
    {
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
              v17,
              v17->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v23 >= 1 )
      {
        do
        {
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                  v17,
                  v17->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v24);
            v26 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v26->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1BCAA3C(0LL, v24);
          items = questHintDialogOpenList->fields._items;
          v29 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1BCAA3C(questHintDialogOpenList, v24);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v25,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v25;
          }
          --v23;
        }
        while ( v23 );
      }
    }
    klass = v17->klass;
    v32 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_25;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_25:
      v34 = sub_1C1C7C0(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v17, *(_QWORD *)(v34 + 8));
  }
  else
  {
    v35 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v11);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v35);
  }
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  QuestHintDialogOpenManager_c *v3; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4B17364 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v1, v2);
    byte_4B17364 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v3->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1BCAA3C(v3, v1);
  questPhaseTempInfo->fields = 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestHintDialogOpenManager__SetQuestInfo(int32_t questId, int32_t questPhase, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  QuestHintDialogOpenManager_c *v19; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  int64_t v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  QuestHintDialogOpenManager_c *v33; // x0
  const char *name; // x8
  _QWORD *v35; // x9
  __int64 namespaze_low; // x10
  const char *v37; // x8
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B17362 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      *(_QWORD *)&questPhase,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__,
      v13,
      v14);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v17, v18);
    byte_4B17362 = 1;
  }
  v19 = QuestHintDialogOpenManager_TypeInfo;
  memset(&v39, 0, sizeof(v39));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v19 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v19->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_29;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&questPhase);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)v19);
    v19 = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&questPhase);
    v19 = QuestHintDialogOpenManager_TypeInfo;
  }
  v19 = (QuestHintDialogOpenManager_c *)v19->static_fields->questPhaseHintDialogOpenList;
  if ( !v19 )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v21 )
      break;
    if ( !v39.fields._current )
      sub_1BCAA3C(v21, v22);
    if ( LODWORD(v39.fields._current[1].klass) == questId && HIDWORD(v39.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v39,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v26 = sub_1BCAA2C(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v23, v24, v25);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_29;
  *(_DWORD *)(v26 + 16) = questId;
  *(_DWORD *)(v26 + 20) = questPhase;
  v33 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v33 = QuestHintDialogOpenManager_TypeInfo;
  }
  v19 = (QuestHintDialogOpenManager_c *)v33->static_fields->questPhaseHintDialogOpenList;
  if ( !v19
    || (name = v19->_1.name,
        v35 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__,
        ++HIDWORD(v19->_1.namespaze),
        !name) )
  {
LABEL_29:
    sub_1BCAA3C(v19, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v19->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v19,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &name[8 * namespaze_low];
    LODWORD(v19->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v37 + 4) = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 32), v26, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_4B17363 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase, method);
    byte_4B17363 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1BCAA3C(v5, *(_QWORD *)&questPhase);
  questPhaseTempInfo->fields.questId = questId;
  questPhaseTempInfo->fields.questPhase = questPhase;
}


bool __fastcall QuestHintDialogOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ManagerConfig_c *v13; // x0
  QuestHintDialogOpenManager_c *v14; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_IO_BinaryWriter_o *v20; // x19
  __int64 v21; // x1
  QuestHintDialogOpenManager_c *v22; // x0
  struct QuestHintDialogOpenManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x9
  int size; // w20
  __int64 v26; // x1
  int32_t i; // w21
  QuestHintDialogOpenManager_c *v28; // x0
  System_Collections_Generic_List_object__o *v29; // x0
  Il2CppObject *Item; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *v33; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B17360 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v11, v12);
    byte_4B17360 = 1;
  }
  v13 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( !v13->static_fields->UseMock )
  {
    v14 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v1);
    SaveFileName = QuestHintDialogOpenManager__GetSaveFileName((const MethodInfo *)v14);
    v16 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v20 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v17, v18, v19);
    System_IO_BinaryWriter___ctor_62639712(v20, v16, 0LL);
    v22 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v21);
      v22 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v22->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1BCAA3C(v22, v21);
    if ( !v20 )
      sub_1BCAA3C(v22, v21);
    size = questPhaseHintDialogOpenList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
      v20,
      static_fields->SAVE_DATA_VERSION,
      v20->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
      v20,
      (unsigned int)size,
      v20->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v28 = QuestHintDialogOpenManager_TypeInfo;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v26);
          v28 = QuestHintDialogOpenManager_TypeInfo;
        }
        v29 = (System_Collections_Generic_List_object__o *)v28->static_fields->questPhaseHintDialogOpenList;
        if ( !v29 )
          sub_1BCAA3C(0LL, v26);
        Item = System_Collections_Generic_List_object___get_Item(
                 v29,
                 i,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1BCAA3C(0LL, v31);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
          v20,
          LODWORD(Item[1].klass),
          v20->klass->vtable._18_Write.methodPtr);
        v33 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v33 )
          sub_1BCAA3C(0LL, v32);
        v34 = System_Collections_Generic_List_object___get_Item(
                v33,
                i,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v34 )
          sub_1BCAA3C(0LL, v35);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
          v20,
          HIDWORD(v34[1].klass),
          v20->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v20->klass;
    v37 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_25;
      }
      v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_25:
      v39 = sub_1C1C7C0(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
  }
  return 1;
}


void __fastcall QuestHintDialogOpenManager_QuestPhaseInfo___ctor(
        QuestHintDialogOpenManager_QuestPhaseInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}