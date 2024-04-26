void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v1; // x19
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_List_int__o *v9; // x19
  struct MyRoomParamsManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  MyRoomParamsManager_c *v17; // x8
  struct MyRoomParamsManager_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct MyRoomParamsManager_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct MyRoomParamsManager_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct MyRoomParamsManager_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct MyRoomParamsManager_StaticFields *v50; // x0
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct MyRoomParamsManager_StaticFields *v58; // x0
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct MyRoomParamsManager_StaticFields *v66; // x0
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct MyRoomParamsManager_StaticFields *v74; // x0
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_4351C6C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&StringLiteral_8264/*"IsListActive"*/);
    sub_B70694(&StringLiteral_8577/*"LastPlayedEventId"*/);
    sub_B70694(&StringLiteral_8579/*"LastPlayedTitle"*/);
    sub_B70694(&StringLiteral_8578/*"LastPlayedQuestId"*/);
    sub_B70694(&StringLiteral_5498/*"DummyFolderHistory"*/);
    sub_B70694(&StringLiteral_8582/*"LastSelectSubFolderId"*/);
    sub_B70694(&StringLiteral_8576/*"LastPlayMovedQuestId"*/);
    sub_B70694(&StringLiteral_8580/*"LastPlayedWarId"*/);
    byte_4351C6C = 1;
  }
  MyRoomParamsManager_TypeInfo->static_fields->SETTING_PROLOG_PART1 = 11000;
  MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE = -1;
  MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v1 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v1,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  static_fields->DummyFolderHistory = v1;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
    (System_Int32_array **)v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = MyRoomParamsManager_TypeInfo->static_fields;
  v10->TmpDummyFolderHistory = v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->TmpDummyFolderHistory,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = MyRoomParamsManager_TypeInfo;
  MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId = 0;
  v18 = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_8578/*"LastPlayedQuestId"*/;
  v18->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8578/*"LastPlayedQuestId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v18->SAVE_KEY_LAST_PLAY_QUEST_ID, v19, v20, v21, v22, v23, v24, v25);
  v26 = MyRoomParamsManager_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_8580/*"LastPlayedWarId"*/;
  v26->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8580/*"LastPlayedWarId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v26->SAVE_KEY_LAST_PLAY_WAR_ID, v27, v28, v29, v30, v31, v32, v33);
  v34 = MyRoomParamsManager_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_8577/*"LastPlayedEventId"*/;
  v34->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8577/*"LastPlayedEventId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v34->SAVE_KEY_LAST_PLAY_EVENT_ID, v35, v36, v37, v38, v39, v40, v41);
  v42 = MyRoomParamsManager_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_8579/*"LastPlayedTitle"*/;
  v42->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8579/*"LastPlayedTitle"*/;
  sub_B70630((BattleServantConfConponent_o *)&v42->SAVE_KEY_LAST_PLAY_TITLE, v43, v44, v45, v46, v47, v48, v49);
  v50 = MyRoomParamsManager_TypeInfo->static_fields;
  v51 = (System_Int32_array **)StringLiteral_8582/*"LastSelectSubFolderId"*/;
  v50->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8582/*"LastSelectSubFolderId"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v50->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = MyRoomParamsManager_TypeInfo->static_fields;
  v59 = (System_Int32_array **)StringLiteral_8264/*"IsListActive"*/;
  v58->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8264/*"IsListActive"*/;
  sub_B70630((BattleServantConfConponent_o *)&v58->SAVE_KEY_IS_LIST_ACTIVE, v59, v60, v61, v62, v63, v64, v65);
  v66 = MyRoomParamsManager_TypeInfo->static_fields;
  v67 = (System_Int32_array **)StringLiteral_5498/*"DummyFolderHistory"*/;
  v66->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5498/*"DummyFolderHistory"*/;
  sub_B70630((BattleServantConfConponent_o *)&v66->SAVE_KEY_DUMMY_FOLDER_HISTORY, v67, v68, v69, v70, v71, v72, v73);
  v74 = MyRoomParamsManager_TypeInfo->static_fields;
  v75 = (System_Int32_array **)StringLiteral_8576/*"LastPlayMovedQuestId"*/;
  v74->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8576/*"LastPlayMovedQuestId"*/;
  sub_B70630((BattleServantConfConponent_o *)&v74->SAVE_KEY_LAST_MOVED_QUEST_ID, v75, v76, v77, v78, v79, v80, v81);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4351C63 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&StringLiteral_10790/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_B70694(&StringLiteral_10788/*"PhotoCampaignSelectImageLimit"*/);
    byte_4351C63 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(
    MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10788/*"PhotoCampaignSelectImageLimit"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10790/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
  MyRoomParamsManager__InitParameter(v2);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  MyRoomParamsManager_c *v7; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  int32_t v9; // w20
  int32_t v10; // w20
  System_Int32_array **v11; // x20
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v13; // x1
  MyRoomParamsManager_c *v14; // x0
  int32_t v15; // w20
  System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  MyRoomParamsManager_c *v17; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4351C64 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351C64 = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4351CCF )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4351CCF = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v9 = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4351CD0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4351CD0 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayWarId_k__BackingField = v9;
  v10 = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4351CD1 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4351CD1 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayEventId_k__BackingField = v10;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_4351CD2 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4351CD2 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    v11,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v14 = MyRoomParamsManager_TypeInfo;
  v15 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4351CD3 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4351CD3 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastSelectSubFolderId_k__BackingField = v15;
  DummyFolderHistory = v14->static_fields->DummyFolderHistory;
  if ( !DummyFolderHistory
    || (System_Collections_Generic_List_int___Clear(
          DummyFolderHistory,
          (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__),
        (DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory) == 0LL) )
  {
    sub_B7076C(DummyFolderHistory, v13);
  }
  System_Collections_Generic_List_int___Clear(
    DummyFolderHistory,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  v17 = MyRoomParamsManager_TypeInfo;
  DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4351CD4 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4351CD4 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v17->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4351CD5 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4351CD5 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v17->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C65 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C65 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->temporaryLastSelectSubFolderId = v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomParamsManager__LastDummyPlaySaveData(
        System_Collections_Generic_IEnumerable_int__o *history,
        int32_t questId,
        bool isSave,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v7; // x0
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  MyRoomParamsManager_c *v9; // x0
  MyRoomParamsManager_c *v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Collections_Generic_List_int__o *v12; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MyRoomParamsManager_StaticFields *v20; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v22; // x0
  MyRoomParamsManager_c *v23; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v25; // x5

  if ( (byte_4351C68 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351C68 = 1;
  }
  if ( history )
  {
    v7 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v7->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___Clear(
      TmpDummyFolderHistory,
      (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    TmpDummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4351CD4 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_4351CD4 = 1;
    }
    v9 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v9 = MyRoomParamsManager_TypeInfo;
    }
    v9->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v10 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v10 = MyRoomParamsManager_TypeInfo;
    }
    v11 = (System_Collections_Generic_IEnumerable_T__o *)v10->static_fields->TmpDummyFolderHistory;
    v12 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_51074676(
      v12,
      v11,
      (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v12;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
      (System_Int32_array **)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v20->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v20->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v22 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v22, 0LL);
      v23 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4351CD6 )
      {
        sub_B70694(&MyRoomParamsManager_TypeInfo);
        v23 = MyRoomParamsManager_TypeInfo;
        byte_4351CD6 = 1;
      }
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v23->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v25);
      return;
    }
LABEL_32:
    sub_B7076C(TmpDummyFolderHistory, *(_QWORD *)&questId);
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
  MyRoomParamsManager_c *v13; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v15; // x1
  MyRoomParamsManager_c *v16; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields **p_static_fields; // x8
  System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  MyRoomParamsManager_c *v20; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v22; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v24; // x0
  MyRoomParamsManager_c *v25; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  MyRoomParamsManager_c *v28; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  MyRoomParamsManager_c *v30; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  MyRoomParamsManager_c *v32; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  MyRoomParamsManager_c *v34; // x0
  System_String_o *v35; // x20
  struct MyRoomParamsManager_StaticFields *v36; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v38; // x0

  if ( (byte_4351C67 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C67 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_4351CD0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD0 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4351CCF )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4351CCF = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4351CD1 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4351CD1 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4351CD2 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4351CD2 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (System_Int32_array **)title,
    *(System_String_array ***)&eventId,
    (System_String_array **)title,
    (System_Boolean_array **)isDummyDel,
    (System_Int32_array **)method,
    v6,
    v7);
  v16 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4351CD3 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4351CD3 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  p_static_fields = &v16->static_fields;
  v16->static_fields->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      p_static_fields = &MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = (*p_static_fields)->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      DummyFolderHistory,
      (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      DummyFolderHistory,
      (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    v20 = MyRoomParamsManager_TypeInfo;
    DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4351CD4 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      v20 = MyRoomParamsManager_TypeInfo;
      byte_4351CD4 = 1;
    }
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = MyRoomParamsManager_TypeInfo;
    }
    v20->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    v22 = v20->static_fields;
    DummyFolderHistory = v22->DummyFolderHistory;
    if ( !DummyFolderHistory )
LABEL_79:
      sub_B7076C(DummyFolderHistory, v15);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v22->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v24 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                               DummyFolderHistory,
                               DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v24, 0LL);
    v25 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4351CD6 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      v25 = MyRoomParamsManager_TypeInfo;
      byte_4351CD6 = 1;
    }
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v25->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v16->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4351CD7 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4351CD7 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_QUEST_ID,
    v16->static_fields->_LastPlayQuestId_k__BackingField,
    0LL);
  v28 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_434F41D )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v28 = MyRoomParamsManager_TypeInfo;
    byte_434F41D = 1;
  }
  if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v28->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v30 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4351CD8 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
    byte_4351CD8 = 1;
  }
  if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_EVENT_ID,
    v30->static_fields->_LastPlayEventId_k__BackingField,
    0LL);
  v32 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4351CD9 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_4351CD9 = 1;
  }
  if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v32->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v34 = MyRoomParamsManager_TypeInfo;
  v35 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4351CDA )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4351CDA = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v35, v34->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v36 = MyRoomParamsManager_TypeInfo->static_fields;
  DummyFolderHistory = v36->DummyFolderHistory;
  if ( !DummyFolderHistory )
    goto LABEL_79;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v36->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v38 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                             DummyFolderHistory,
                             DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v38, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  MyRoomParamsManager_c *v2; // x0
  char v3; // w8

  if ( (byte_4351C6A & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C6A = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  if ( UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0LL) == 1 )
  {
    if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4351CD5 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_4351CD5 = 1;
    }
    v2 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v2 = MyRoomParamsManager_TypeInfo;
    }
    v3 = 1;
  }
  else
  {
    if ( (WORD1(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4351CD5 )
    {
      sub_B70694(&MyRoomParamsManager_TypeInfo);
      byte_4351CD5 = 1;
    }
    v2 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v2 = MyRoomParamsManager_TypeInfo;
    }
    v3 = 0;
  }
  v2->static_fields->_IsListActive_k__BackingField = v3;
}


void __fastcall MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t Int; // w19
  MyRoomParamsManager_c *v3; // x0
  int32_t v4; // w19
  MyRoomParamsManager_c *v5; // x0
  int32_t v6; // w19
  MyRoomParamsManager_c *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **String; // x19
  MyRoomParamsManager_c *v15; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  int32_t v17; // w19
  MyRoomParamsManager_c *v18; // x0
  Il2CppObject *v19; // x19
  TerminalPramsManager_ClearData_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  MyRoomParamsManager_c *v27; // x8
  System_Int32_array **v28; // x19
  struct MyRoomParamsManager_StaticFields *v29; // x0
  MyRoomParamsManager_c *v30; // x0
  int32_t v31; // w19
  MyRoomParamsManager_c *v32; // x0

  if ( (byte_4351C66 & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_Deserialize_List_int____);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351C66 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v1->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4351CCF )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CCF = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayQuestId_k__BackingField = Int;
  v4 = UnityEngine_PlayerPrefs__GetInt(
         v3->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID,
         v3->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
         0LL);
  if ( !byte_4351CD0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD0 = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayWarId_k__BackingField = v4;
  v6 = UnityEngine_PlayerPrefs__GetInt(
         v5->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID,
         v5->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
         0LL);
  if ( !byte_4351CD1 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD1 = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayEventId_k__BackingField = v6;
  String = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString(
                                    v7->static_fields->SAVE_KEY_LAST_PLAY_TITLE,
                                    (System_String_o *)StringLiteral_1/*""*/,
                                    0LL);
  if ( !byte_4351CD2 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD2 = 1;
  }
  v15 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)String;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->_LastPlayTitle_k__BackingField,
    String,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v17 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4351CD3 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD3 = 1;
  }
  v18 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v18 = MyRoomParamsManager_TypeInfo;
  }
  v18->static_fields->_LastSelectSubFolderId_k__BackingField = v17;
  v19 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v18->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v19, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            v19,
            (const MethodInfo_1D504B8 *)Method_JsonManager_Deserialize_List_int____);
    v27 = MyRoomParamsManager_TypeInfo;
    v28 = (System_Int32_array **)v20;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v27 = MyRoomParamsManager_TypeInfo;
    }
    v29 = v27->static_fields;
    v29->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v28;
    sub_B70630((BattleServantConfConponent_o *)&v29->DummyFolderHistory, v28, v21, v22, v23, v24, v25, v26);
  }
  v30 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  v31 = UnityEngine_PlayerPrefs__GetInt(
          v30->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v30->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4351CD4 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351CD4 = 1;
  }
  v32 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  v32->static_fields->_LastPlayMovedQuestId_k__BackingField = v31;
  v32->static_fields->temporaryLastSelectSubFolderId = v32->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4351C6B & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C6B = 1;
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

  if ( (byte_4351C69 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C69 = 1;
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
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C5F & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5F = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_IsListActive_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C59 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C59 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C61 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C61 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C55 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C55 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *__fastcall MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C5B & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5B = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C57 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C57 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4351C5D & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5D = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void __fastcall MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4351C60 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C60 = 1;
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

  if ( (byte_4351C5A & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5A = 1;
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

  if ( (byte_4351C62 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C62 = 1;
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

  if ( (byte_4351C56 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C56 = 1;
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

  if ( (byte_4351C5C & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5C = 1;
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
  sub_B70630(
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

  if ( (byte_4351C58 & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C58 = 1;
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

  if ( (byte_4351C5E & 1) == 0 )
  {
    sub_B70694(&MyRoomParamsManager_TypeInfo);
    byte_4351C5E = 1;
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