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

  if ( (byte_4B3832C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BD3458(&System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo, v10);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v11);
    sub_1BD3458(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v12);
    sub_1BD3458(&StringLiteral_6777/*"Fgo_20210622"*/, v13);
    byte_4B3832C = 1;
  }
  QuestHintDialogOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6777/*"Fgo_20210622"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestHintDialogOpenManager_TypeInfo->static_fields,
    StringLiteral_6777/*"Fgo_20210622"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo___ctor__);
  static_fields = QuestHintDialogOpenManager_TypeInfo->static_fields;
  static_fields->questPhaseHintDialogOpenList = (struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *)v14;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->questPhaseHintDialogOpenList,
    (int64_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  v23 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v23->questHintDialogOpenList = v22;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v23->questHintDialogOpenList, (int64_t)v22, v24, v25, v26, v27, v28, v29);
  v30 = (Il2CppObject *)sub_1BD36A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
  System_Object___ctor(v30, 0LL);
  v31 = QuestHintDialogOpenManager_TypeInfo->static_fields;
  v31->questPhaseTempInfo = (struct QuestHintDialogOpenManager_QuestPhaseInfo_o *)v30;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v31->questPhaseTempInfo, (int64_t)v30, v32, v33, v34, v35, v36, v37);
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

  if ( (byte_4B38323 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4B38323 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = v3->static_fields->questHintDialogOpenList;
  if ( !questHintDialogOpenList )
    sub_1BD36B4(v3, v1);
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

  if ( (byte_4B38322 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Clear__, v1);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v2);
    byte_4B38322 = 1;
  }
  v3 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v3 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = v3->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    sub_1BD36B4(v3, v1);
  size = questPhaseHintDialogOpenList->fields._size;
  v6 = questPhaseHintDialogOpenList->fields._version + 1;
  questPhaseHintDialogOpenList->fields._size = 0;
  questPhaseHintDialogOpenList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questPhaseHintDialogOpenList->fields._items, 0, size, 0LL);
}


void __fastcall QuestHintDialogOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v4; // x0
  System_String_o *OldSaveFileName; // x19

  if ( (byte_4B38320 & 1) == 0 )
  {
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4B38320 = 1;
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
  OldSaveFileName = QuestHintDialogOpenManager__GetOldSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(OldSaveFileName, 0LL) )
    System_IO_File__Delete(OldSaveFileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetOldSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B3831F & 1) == 0 )
  {
    sub_1BD3458(&AndroidUtil_TypeInfo, v1);
    sub_1BD3458(&DatFileName_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_1120/*"/"*/, v3);
    byte_4B3831F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(33, 0LL);
  return System_String__Concat_62536508(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall QuestHintDialogOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B3831E & 1) == 0 )
  {
    sub_1BD3458(&AndroidUtil_TypeInfo, v1);
    sub_1BD3458(&DatFileName_TypeInfo, v2);
    sub_1BD3458(&StringLiteral_1120/*"/"*/, v3);
    byte_4B3831E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(43, 0LL);
  return System_String__Concat_62536508(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall QuestHintDialogOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0

  if ( (byte_4B38321 & 1) == 0 )
  {
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4B38321 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  QuestHintDialogOpenManager_c *questHintDialogOpenList; // x0
  struct System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__o *questPhaseHintDialogOpenList; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  QuestHintDialogOpenManager_c *v18; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4B38327 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, *(_QWORD *)&questPhase);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v7);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v12);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v13);
    byte_4B38327 = 1;
  }
  questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  memset(&v21, 0, sizeof(v21));
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseHintDialogOpenList = questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !questPhaseHintDialogOpenList )
    goto LABEL_32;
  if ( !questPhaseHintDialogOpenList->fields._size )
  {
    if ( !questHintDialogOpenList->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
    QuestHintDialogOpenManager__ReadData((const MethodInfo *)questHintDialogOpenList);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  if ( !questHintDialogOpenList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(questHintDialogOpenList);
    questHintDialogOpenList = QuestHintDialogOpenManager_TypeInfo;
  }
  questHintDialogOpenList = (QuestHintDialogOpenManager_c *)questHintDialogOpenList->static_fields->questPhaseHintDialogOpenList;
  if ( !questHintDialogOpenList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)questHintDialogOpenList,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v22 = v20;
  do
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v16 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      if ( questPhase != 1 )
        return 0;
      v18 = QuestHintDialogOpenManager_TypeInfo;
      if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        v18 = QuestHintDialogOpenManager_TypeInfo;
      }
      questHintDialogOpenList = (QuestHintDialogOpenManager_c *)v18->static_fields->questHintDialogOpenList;
      if ( questHintDialogOpenList )
      {
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v20,
          (System_Collections_Generic_List_int__o *)questHintDialogOpenList,
          (const MethodInfo_35A4840 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v21 = v20;
        while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                  (System_Collections_Generic_List_Enumerator_int__o *)&v21,
                  (const MethodInfo_3331D84 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
        {
          if ( LODWORD(v21.fields._current) == questId )
          {
            System_Collections_Generic_List_Enumerator_int___Dispose(
              (System_Collections_Generic_List_Enumerator_int__o *)&v21,
              (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
            return 1;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          (System_Collections_Generic_List_Enumerator_int__o *)&v21,
          (const MethodInfo_3331D80 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        return 0;
      }
LABEL_32:
      sub_1BD36B4(questHintDialogOpenList, *(_QWORD *)&questPhase);
    }
    if ( !v22.fields._current )
      sub_1BD36B4(v16, v17);
  }
  while ( LODWORD(v22.fields._current[1].klass) != questId || HIDWORD(v22.fields._current[1].klass) != questPhase );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
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

  if ( (byte_4B3832B & 1) == 0 )
  {
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    byte_4B3832B = 1;
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
    sub_1BD36B4(v5, *(_QWORD *)&questPhase);
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
  ManagerConfig_c *v7; // x0
  bool v8; // w21
  QuestHintDialogOpenManager_c *v9; // x0
  const MethodInfo *v10; // x0
  System_String_o *SaveFileName; // x19
  QuestHintDialogOpenManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  QuestHintDialogOpenManager_c *v18; // x0
  int v19; // w20
  int v20; // w22
  int v21; // w23
  int64_t v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  QuestHintDialogOpenManager_c *v31; // x0
  System_Collections_Generic_List_object__o *questPhaseHintDialogOpenList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  QuestHintDialogOpenManager_c *v41; // x0

  if ( (byte_4B38324 & 1) == 0 )
  {
    sub_1BD3458(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BD3458(&System_IDisposable_TypeInfo, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v3);
    sub_1BD3458(&ManagerConfig_TypeInfo, v4);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v5);
    sub_1BD3458(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v6);
    byte_4B38324 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ReadOldData((const MethodInfo *)v9);
  SaveFileName = QuestHintDialogOpenManager__GetSaveFileName(v10);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v12 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v12);
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_1BD36A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v14, v13, 0LL);
    if ( !v14 )
      sub_1BD36B4(v15, v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v18 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v18 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v8 = 0;
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v19 >= 1 )
      {
        do
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = sub_1BD36A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v22, 0LL);
          if ( !v22 )
            sub_1BD36B4(v23, v24);
          *(_DWORD *)(v22 + 16) = v20;
          *(_DWORD *)(v22 + 20) = v21;
          v31 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v31 = QuestHintDialogOpenManager_TypeInfo;
          }
          questPhaseHintDialogOpenList = (System_Collections_Generic_List_object__o *)v31->static_fields->questPhaseHintDialogOpenList;
          if ( !questPhaseHintDialogOpenList )
            sub_1BD36B4(0LL, v24);
          items = questPhaseHintDialogOpenList->fields._items;
          v34 = Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__;
          ++questPhaseHintDialogOpenList->fields._version;
          if ( !items )
            sub_1BD36B4(questPhaseHintDialogOpenList, v24);
          size = questPhaseHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              questPhaseHintDialogOpenList,
              (Il2CppObject *)v22,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            questPhaseHintDialogOpenList->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v22;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 4), v22, v25, v26, v27, v28, v29, v30);
          }
          --v19;
        }
        while ( v19 );
      }
      v8 = 1;
    }
    klass = v14->klass;
    v38 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_32;
      }
      v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v40 = sub_1C25438(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
  }
  else
  {
    v41 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearSaveDataList((const MethodInfo *)v41);
    return 0;
  }
  return v8;
}


void __fastcall QuestHintDialogOpenManager__ReadOldData(const MethodInfo *method)
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
  int v14; // w20
  __int64 v15; // x1
  int32_t v16; // w21
  QuestHintDialogOpenManager_c *v17; // x0
  System_Collections_Generic_List_int__o *questHintDialogOpenList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  QuestHintDialogOpenManager_c *v26; // x0

  if ( (byte_4B38325 & 1) == 0 )
  {
    sub_1BD3458(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BD3458(&System_IDisposable_TypeInfo, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v4);
    byte_4B38325 = 1;
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
    v9 = (System_IO_BinaryReader_o *)sub_1BD36A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0LL);
    if ( !v9 )
      sub_1BD36B4(v10, v11);
    v12 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._22_ReadString.method)(
                               v9,
                               v9->klass->vtable._23_ReadChars.methodPtr);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    if ( !System_String__op_Inequality(v13->static_fields->SAVE_DATA_VERSION, v12, 0LL) )
    {
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
              v9,
              v9->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v14 >= 1 )
      {
        do
        {
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v9->klass->vtable._15_ReadInt32.method)(
                  v9,
                  v9->klass->vtable._16_ReadUInt32.methodPtr);
          v17 = QuestHintDialogOpenManager_TypeInfo;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v17 = QuestHintDialogOpenManager_TypeInfo;
          }
          questHintDialogOpenList = v17->static_fields->questHintDialogOpenList;
          if ( !questHintDialogOpenList )
            sub_1BD36B4(0LL, v15);
          items = questHintDialogOpenList->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++questHintDialogOpenList->fields._version;
          if ( !items )
            sub_1BD36B4(questHintDialogOpenList, v15);
          size = questHintDialogOpenList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              questHintDialogOpenList,
              v16,
              *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            questHintDialogOpenList->fields._size = size + 1;
            items->m_Items[size + 1] = v16;
          }
          --v14;
        }
        while ( v14 );
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
          goto LABEL_25;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_25:
      v25 = sub_1C25438(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
  }
  else
  {
    v26 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    QuestHintDialogOpenManager__ClearOldSaveDataList((const MethodInfo *)v26);
  }
}


void __fastcall QuestHintDialogOpenManager__ResetTemporarilyId(const MethodInfo *method)
{
  __int64 v1; // x1
  QuestHintDialogOpenManager_c *v2; // x0
  struct QuestHintDialogOpenManager_QuestPhaseInfo_o *questPhaseTempInfo; // x8

  if ( (byte_4B3832A & 1) == 0 )
  {
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v1);
    byte_4B3832A = 1;
  }
  v2 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v2 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v2->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1BD36B4(v2, v1);
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

  if ( (byte_4B38328 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__,
      *(_QWORD *)&questPhase);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__,
      v5);
    sub_1BD3458(
      &Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__get_Current__,
      v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v9);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v10);
    sub_1BD3458(&QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo, v11);
    byte_4B38328 = 1;
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
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v29.fields._current )
      sub_1BD36B4(v14, v15);
    if ( LODWORD(v29.fields._current[1].klass) == questId && HIDWORD(v29.fields._current[1].klass) == questPhase )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v29,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
      return;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_QuestHintDialogOpenManager_QuestPhaseInfo__Dispose__);
  v16 = sub_1BD36A4(QuestHintDialogOpenManager_QuestPhaseInfo_TypeInfo);
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
    sub_1BD36B4(v12, *(_QWORD *)&questPhase);
  }
  namespaze_low = SLODWORD(v12->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)v12,
      (Il2CppObject *)v16,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &name[8 * namespaze_low];
    LODWORD(v12->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v27 + 4) = v16;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v27 + 32), v16, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4B38329 & 1) == 0 )
  {
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, *(_QWORD *)&questPhase);
    byte_4B38329 = 1;
  }
  v5 = QuestHintDialogOpenManager_TypeInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
    v5 = QuestHintDialogOpenManager_TypeInfo;
  }
  questPhaseTempInfo = v5->static_fields->questPhaseTempInfo;
  if ( !questPhaseTempInfo )
    sub_1BD36B4(v5, *(_QWORD *)&questPhase);
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

  if ( (byte_4B38326 & 1) == 0 )
  {
    sub_1BD3458(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BD3458(&System_IDisposable_TypeInfo, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Count__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__, v4);
    sub_1BD3458(&ManagerConfig_TypeInfo, v5);
    sub_1BD3458(&QuestHintDialogOpenManager_TypeInfo, v6);
    byte_4B38326 = 1;
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
    v11 = (System_IO_BinaryWriter_o *)sub_1BD36A4(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_62763740(v11, v10, 0LL);
    v13 = QuestHintDialogOpenManager_TypeInfo;
    if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      v13 = QuestHintDialogOpenManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    questPhaseHintDialogOpenList = static_fields->questPhaseHintDialogOpenList;
    if ( !questPhaseHintDialogOpenList )
      sub_1BD36B4(v13, v12);
    if ( !v11 )
      sub_1BD36B4(v13, v12);
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
          sub_1BD36B4(0LL, v17);
        Item = System_Collections_Generic_List_object___get_Item(
                 v20,
                 i,
                 (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !Item )
          sub_1BD36B4(0LL, v22);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
          v11,
          LODWORD(Item[1].klass),
          v11->klass->vtable._18_Write.methodPtr);
        v24 = (System_Collections_Generic_List_object__o *)QuestHintDialogOpenManager_TypeInfo->static_fields->questPhaseHintDialogOpenList;
        if ( !v24 )
          sub_1BD36B4(0LL, v23);
        v25 = System_Collections_Generic_List_object___get_Item(
                v24,
                i,
                (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_QuestHintDialogOpenManager_QuestPhaseInfo__get_Item__);
        if ( !v25 )
          sub_1BD36B4(0LL, v26);
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
      v30 = sub_1C25438(v11, System_IDisposable_TypeInfo, 0LL);
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