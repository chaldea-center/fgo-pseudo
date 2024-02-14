void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  System_Collections_Generic_List_int__o *v13; // x19
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_int__o *v23; // x19
  struct MyRoomParamsManager_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  MyRoomParamsManager_c *v31; // x8
  struct MyRoomParamsManager_StaticFields *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct MyRoomParamsManager_StaticFields *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct MyRoomParamsManager_StaticFields *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct MyRoomParamsManager_StaticFields *v56; // x0
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct MyRoomParamsManager_StaticFields *v64; // x0
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct MyRoomParamsManager_StaticFields *v72; // x0
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct MyRoomParamsManager_StaticFields *v80; // x0
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct MyRoomParamsManager_StaticFields *v88; // x0
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7

  if ( (byte_4213E18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v3);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_8186/*"IsListActive"*/, v5);
    sub_B0D8A4(&StringLiteral_8498/*"LastPlayedEventId"*/, v6);
    sub_B0D8A4(&StringLiteral_8500/*"LastPlayedTitle"*/, v7);
    sub_B0D8A4(&StringLiteral_8499/*"LastPlayedQuestId"*/, v8);
    sub_B0D8A4(&StringLiteral_5426/*"DummyFolderHistory"*/, v9);
    sub_B0D8A4(&StringLiteral_8503/*"LastSelectSubFolderId"*/, v10);
    sub_B0D8A4(&StringLiteral_8497/*"LastPlayMovedQuestId"*/, v11);
    sub_B0D8A4(&StringLiteral_8501/*"LastPlayedWarId"*/, v12);
    byte_4213E18 = 1;
  }
  MyRoomParamsManager_TypeInfo->static_fields->SETTING_PROLOG_PART1 = 11000;
  MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE = -1;
  MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v1, v2);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  static_fields->DummyFolderHistory = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v21, v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = MyRoomParamsManager_TypeInfo->static_fields;
  v24->TmpDummyFolderHistory = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v24->TmpDummyFolderHistory,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = MyRoomParamsManager_TypeInfo;
  MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId = 0;
  v32 = v31->static_fields;
  v33 = (System_Int32_array **)StringLiteral_8499/*"LastPlayedQuestId"*/;
  v32->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8499/*"LastPlayedQuestId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v32->SAVE_KEY_LAST_PLAY_QUEST_ID, v33, v34, v35, v36, v37, v38, v39);
  v40 = MyRoomParamsManager_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_8501/*"LastPlayedWarId"*/;
  v40->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8501/*"LastPlayedWarId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v40->SAVE_KEY_LAST_PLAY_WAR_ID, v41, v42, v43, v44, v45, v46, v47);
  v48 = MyRoomParamsManager_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_8498/*"LastPlayedEventId"*/;
  v48->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8498/*"LastPlayedEventId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v48->SAVE_KEY_LAST_PLAY_EVENT_ID, v49, v50, v51, v52, v53, v54, v55);
  v56 = MyRoomParamsManager_TypeInfo->static_fields;
  v57 = (System_Int32_array **)StringLiteral_8500/*"LastPlayedTitle"*/;
  v56->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8500/*"LastPlayedTitle"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v56->SAVE_KEY_LAST_PLAY_TITLE, v57, v58, v59, v60, v61, v62, v63);
  v64 = MyRoomParamsManager_TypeInfo->static_fields;
  v65 = (System_Int32_array **)StringLiteral_8503/*"LastSelectSubFolderId"*/;
  v64->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8503/*"LastSelectSubFolderId"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v64->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = MyRoomParamsManager_TypeInfo->static_fields;
  v73 = (System_Int32_array **)StringLiteral_8186/*"IsListActive"*/;
  v72->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8186/*"IsListActive"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v72->SAVE_KEY_IS_LIST_ACTIVE, v73, v74, v75, v76, v77, v78, v79);
  v80 = MyRoomParamsManager_TypeInfo->static_fields;
  v81 = (System_Int32_array **)StringLiteral_5426/*"DummyFolderHistory"*/;
  v80->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5426/*"DummyFolderHistory"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v80->SAVE_KEY_DUMMY_FOLDER_HISTORY, v81, v82, v83, v84, v85, v86, v87);
  v88 = MyRoomParamsManager_TypeInfo->static_fields;
  v89 = (System_Int32_array **)StringLiteral_8497/*"LastPlayMovedQuestId"*/;
  v88->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8497/*"LastPlayMovedQuestId"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v88->SAVE_KEY_LAST_MOVED_QUEST_ID, v89, v90, v91, v92, v93, v94, v95);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4213E0F & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E0F = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(
    MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0LL);
  MyRoomParamsManager__InitParameter(v3);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  MyRoomParamsManager_c *v10; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  int32_t v12; // w20
  int32_t v13; // w20
  System_Int32_array **v14; // x20
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v16; // x1
  MyRoomParamsManager_c *v17; // x0
  int32_t v18; // w20
  System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  __int64 v20; // x1
  MyRoomParamsManager_c *v21; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4213E10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4213E10 = 1;
  }
  v10 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4213E79 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4213E79 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v12 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4213E7A )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4213E7A = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayWarId_k__BackingField = v12;
  v13 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4213E7B )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4213E7B = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayEventId_k__BackingField = v13;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_4213E7C )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4213E7C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    v14,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = MyRoomParamsManager_TypeInfo;
  v18 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4213E7D )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4213E7D = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v17->static_fields->_LastSelectSubFolderId_k__BackingField = v18;
  DummyFolderHistory = v17->static_fields->DummyFolderHistory;
  if ( !DummyFolderHistory
    || (System_Collections_Generic_List_int___Clear(
          DummyFolderHistory,
          (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__),
        (DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory) == 0LL) )
  {
    sub_B0D97C(DummyFolderHistory);
  }
  System_Collections_Generic_List_int___Clear(
    DummyFolderHistory,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  v21 = MyRoomParamsManager_TypeInfo;
  DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4213E7E )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v20);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_4213E7E = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v21->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4213E7F )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v20);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_4213E7F = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v21->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E11 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E11 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  v2->static_fields->temporaryLastSelectSubFolderId = v2->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomParamsManager__LastDummyPlaySaveData(
        System_Collections_Generic_IEnumerable_int__o *history,
        int32_t questId,
        bool isSave,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  MyRoomParamsManager_c *v12; // x0
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  MyRoomParamsManager_c *v14; // x0
  MyRoomParamsManager_c *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x20
  System_Collections_Generic_List_int__o *v17; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct MyRoomParamsManager_StaticFields *v25; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  MyRoomParamsManager_c *v29; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v31; // x5

  if ( (byte_4213E14 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4213E14 = 1;
  }
  if ( history )
  {
    v12 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v12 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v12->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___Clear(
      TmpDummyFolderHistory,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    TmpDummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4213E7E )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      byte_4213E7E = 1;
    }
    v14 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v14 = MyRoomParamsManager_TypeInfo;
    }
    v14->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v15 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v15 = MyRoomParamsManager_TypeInfo;
    }
    v16 = (System_Collections_Generic_IEnumerable_T__o *)v15->static_fields->TmpDummyFolderHistory;
    v17 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      isSave);
    System_Collections_Generic_List_int____ctor_50000796(
      v17,
      v16,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v17;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
      (System_Int32_array **)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v25->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v25->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v27 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v27, 0LL);
      v29 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4213E80 )
      {
        sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v28);
        v29 = MyRoomParamsManager_TypeInfo;
        byte_4213E80 = 1;
      }
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v29->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v31);
      return;
    }
LABEL_32:
    sub_B0D97C(TmpDummyFolderHistory);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomParamsManager__LastPlay_SaveData(
        int32_t questId,
        int32_t warId,
        int32_t eventId,
        System_String_o *title,
        bool isDummyDel,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  MyRoomParamsManager_c *v14; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v16; // x1
  MyRoomParamsManager_c *v17; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields **p_static_fields; // x8
  System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  __int64 v21; // x1
  MyRoomParamsManager_c *v22; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v24; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v26; // x0
  __int64 v27; // x1
  MyRoomParamsManager_c *v28; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  __int64 v31; // x1
  MyRoomParamsManager_c *v32; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  __int64 v34; // x1
  MyRoomParamsManager_c *v35; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  __int64 v37; // x1
  MyRoomParamsManager_c *v38; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  __int64 v40; // x1
  MyRoomParamsManager_c *v41; // x0
  System_String_o *v42; // x20
  struct MyRoomParamsManager_StaticFields *v43; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v45; // x0

  if ( (byte_4213E13 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v13);
    byte_4213E13 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_4213E7A )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    byte_4213E7A = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4213E79 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4213E79 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4213E7B )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4213E7B = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4213E7C )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4213E7C = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (System_Int32_array **)title,
    *(System_String_array ***)&eventId,
    (System_String_array **)title,
    (System_Boolean_array **)isDummyDel,
    (System_Int32_array **)method,
    v6,
    v7);
  v17 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4213E7D )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4213E7D = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  p_static_fields = &v17->static_fields;
  v17->static_fields->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      p_static_fields = &MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = (*p_static_fields)->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      DummyFolderHistory,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      DummyFolderHistory,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    v22 = MyRoomParamsManager_TypeInfo;
    DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4213E7E )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v21);
      v22 = MyRoomParamsManager_TypeInfo;
      byte_4213E7E = 1;
    }
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = MyRoomParamsManager_TypeInfo;
    }
    v22->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    v24 = v22->static_fields;
    DummyFolderHistory = v24->DummyFolderHistory;
    if ( !DummyFolderHistory )
LABEL_79:
      sub_B0D97C(DummyFolderHistory);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v24->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v26 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                               DummyFolderHistory,
                               DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v26, 0LL);
    v28 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4213E80 )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v27);
      v28 = MyRoomParamsManager_TypeInfo;
      byte_4213E80 = 1;
    }
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v28->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v17->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4213E81 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4213E81 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_QUEST_ID,
    v17->static_fields->_LastPlayQuestId_k__BackingField,
    0LL);
  v32 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_421277F )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v31);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_421277F = 1;
  }
  if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v32->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v35 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4213E82 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v34);
    v35 = MyRoomParamsManager_TypeInfo;
    byte_4213E82 = 1;
  }
  if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_EVENT_ID,
    v35->static_fields->_LastPlayEventId_k__BackingField,
    0LL);
  v38 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4213E83 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v37);
    v38 = MyRoomParamsManager_TypeInfo;
    byte_4213E83 = 1;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v38->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v41 = MyRoomParamsManager_TypeInfo;
  v42 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4213E84 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v40);
    v41 = MyRoomParamsManager_TypeInfo;
    byte_4213E84 = 1;
  }
  if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v41);
    v41 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v42, v41->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v43 = MyRoomParamsManager_TypeInfo->static_fields;
  DummyFolderHistory = v43->DummyFolderHistory;
  if ( !DummyFolderHistory )
    goto LABEL_79;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v43->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v45 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                             DummyFolderHistory,
                             DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v45, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  char v5; // w8

  if ( (byte_4213E16 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E16 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0LL) == 1 )
  {
    if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4213E7F )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v3);
      byte_4213E7F = 1;
    }
    v4 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v4 = MyRoomParamsManager_TypeInfo;
    }
    v5 = 1;
  }
  else
  {
    if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4213E7F )
    {
      sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v3);
      byte_4213E7F = 1;
    }
    v4 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v4 = MyRoomParamsManager_TypeInfo;
    }
    v5 = 0;
  }
  v4->static_fields->_IsListActive_k__BackingField = v5;
}


void __fastcall MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomParamsManager_c *v5; // x0
  __int64 v6; // x1
  int32_t Int; // w19
  MyRoomParamsManager_c *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w19
  MyRoomParamsManager_c *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w19
  MyRoomParamsManager_c *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **String; // x19
  MyRoomParamsManager_c *v23; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v25; // x1
  int32_t v26; // w19
  MyRoomParamsManager_c *v27; // x0
  Il2CppObject *v28; // x19
  TerminalPramsManager_ClearData_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  MyRoomParamsManager_c *v36; // x8
  System_Int32_array **v37; // x19
  struct MyRoomParamsManager_StaticFields *v38; // x0
  MyRoomParamsManager_c *v39; // x0
  __int64 v40; // x1
  int32_t v41; // w19
  MyRoomParamsManager_c *v42; // x0

  if ( (byte_4213E12 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_Deserialize_List_int____, v1);
    sub_B0D8A4(&JsonManager_TypeInfo, v2);
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213E12 = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v5->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v5->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4213E79 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v6);
    byte_4213E79 = 1;
  }
  v8 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v8->static_fields->_LastPlayQuestId_k__BackingField = Int;
  v10 = UnityEngine_PlayerPrefs__GetInt(
          v8->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID,
          v8->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4213E7A )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v9);
    byte_4213E7A = 1;
  }
  v11 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayWarId_k__BackingField = v10;
  v13 = UnityEngine_PlayerPrefs__GetInt(
          v11->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID,
          v11->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4213E7B )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v12);
    byte_4213E7B = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayEventId_k__BackingField = v13;
  String = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString(
                                    v14->static_fields->SAVE_KEY_LAST_PLAY_TITLE,
                                    (System_String_o *)StringLiteral_1/*""*/,
                                    0LL);
  if ( !byte_4213E7C )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v15);
    byte_4213E7C = 1;
  }
  v23 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v23 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v23->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)String;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    String,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4213E7D )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v25);
    byte_4213E7D = 1;
  }
  v27 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v27 = MyRoomParamsManager_TypeInfo;
  }
  v27->static_fields->_LastSelectSubFolderId_k__BackingField = v26;
  v28 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v27->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v28, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v29 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            v28,
            (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_List_int____);
    v36 = MyRoomParamsManager_TypeInfo;
    v37 = (System_Int32_array **)v29;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v36 = MyRoomParamsManager_TypeInfo;
    }
    v38 = v36->static_fields;
    v38->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v37;
    sub_B0D840((BattleServantConfConponent_o *)&v38->DummyFolderHistory, v37, v30, v31, v32, v33, v34, v35);
  }
  v39 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v39 = MyRoomParamsManager_TypeInfo;
  }
  v41 = UnityEngine_PlayerPrefs__GetInt(
          v39->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v39->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4213E7E )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v40);
    byte_4213E7E = 1;
  }
  v42 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v42 = MyRoomParamsManager_TypeInfo;
  }
  v42->static_fields->_LastPlayMovedQuestId_k__BackingField = v41;
  v42->static_fields->temporaryLastSelectSubFolderId = v42->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E17 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E17 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_IS_LIST_ACTIVE, value, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E15 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E15 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->temporaryLastSelectSubFolderId = questId;
}


bool __fastcall MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E0B & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E0B = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_IsListActive_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E05 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E05 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E0D & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E0D = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E01 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E01 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *__fastcall MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E07 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E07 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E03 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E03 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4213E09 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, v1);
    byte_4213E09 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void __fastcall MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E0C & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E0C = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_IsListActive_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayEventId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E06 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E06 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayEventId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayMovedQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E0E & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E0E = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayMovedQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E02 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E02 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayTitle(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MyRoomParamsManager_c *v9; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4213E08 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E08 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E04 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E04 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayWarId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastSelectSubFolderId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4213E0A & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomParamsManager_TypeInfo, method);
    byte_4213E0A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}