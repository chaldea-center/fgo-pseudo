void MyRoomParamsManager___cctor(const MethodInfo *method)
{
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v2; // x19
  struct MyRoomParamsManager_StaticFields *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x19
  struct MyRoomParamsManager_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct MyRoomParamsManager_StaticFields *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w1
  struct MyRoomParamsManager_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w1
  struct MyRoomParamsManager_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w1
  struct MyRoomParamsManager_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w1
  struct MyRoomParamsManager_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w1
  struct MyRoomParamsManager_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t v66; // w1
  struct MyRoomParamsManager_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct MyRoomParamsManager_StaticFields *v74; // x0
  int32_t v75; // w1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7

  if ( (byte_4CE9A17 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8061/*"IsListActive"*/);
    sub_1C7BAE8(&StringLiteral_8387/*"LastPlayedEventId"*/);
    sub_1C7BAE8(&StringLiteral_8389/*"LastPlayedTitle"*/);
    sub_1C7BAE8(&StringLiteral_8388/*"LastPlayedQuestId"*/);
    sub_1C7BAE8(&StringLiteral_5396/*"DummyFolderHistory"*/);
    sub_1C7BAE8(&StringLiteral_8393/*"LastSelectSubFolderId"*/);
    sub_1C7BAE8(&StringLiteral_8386/*"LastPlayMovedQuestId"*/);
    sub_1C7BAE8(&StringLiteral_8390/*"LastPlayedWarId"*/);
    byte_4CE9A17 = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v2 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v3 = MyRoomParamsManager_TypeInfo->static_fields;
  v3->DummyFolderHistory = v2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->DummyFolderHistory, (int32_t)v2, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = MyRoomParamsManager_TypeInfo->static_fields;
  v11->TmpDummyFolderHistory = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v11->TmpDummyFolderHistory, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&v18->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  v18->temporaryLastSelectSubFolderId = 0;
  v19 = StringLiteral_8388/*"LastPlayedQuestId"*/;
  v18->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8388/*"LastPlayedQuestId"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->SAVE_KEY_LAST_PLAY_QUEST_ID, v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_8390/*"LastPlayedWarId"*/;
  v27 = MyRoomParamsManager_TypeInfo->static_fields;
  v27->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8390/*"LastPlayedWarId"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v27->SAVE_KEY_LAST_PLAY_WAR_ID, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_8387/*"LastPlayedEventId"*/;
  v35 = MyRoomParamsManager_TypeInfo->static_fields;
  v35->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8387/*"LastPlayedEventId"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v35->SAVE_KEY_LAST_PLAY_EVENT_ID, v34, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_8389/*"LastPlayedTitle"*/;
  v43 = MyRoomParamsManager_TypeInfo->static_fields;
  v43->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8389/*"LastPlayedTitle"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v43->SAVE_KEY_LAST_PLAY_TITLE, v42, v44, v45, v46, v47, v48, v49);
  v50 = StringLiteral_8393/*"LastSelectSubFolderId"*/;
  v51 = MyRoomParamsManager_TypeInfo->static_fields;
  v51->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8393/*"LastSelectSubFolderId"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v51->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = StringLiteral_8061/*"IsListActive"*/;
  v59 = MyRoomParamsManager_TypeInfo->static_fields;
  v59->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8061/*"IsListActive"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->SAVE_KEY_IS_LIST_ACTIVE, v58, v60, v61, v62, v63, v64, v65);
  v66 = StringLiteral_5396/*"DummyFolderHistory"*/;
  v67 = MyRoomParamsManager_TypeInfo->static_fields;
  v67->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5396/*"DummyFolderHistory"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v67->SAVE_KEY_DUMMY_FOLDER_HISTORY, v66, v68, v69, v70, v71, v72, v73);
  v74 = MyRoomParamsManager_TypeInfo->static_fields;
  v75 = StringLiteral_8386/*"LastPlayMovedQuestId"*/;
  v74->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8386/*"LastPlayMovedQuestId"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v74->SAVE_KEY_LAST_MOVED_QUEST_ID, v75, v76, v77, v78, v79, v80, v81);
}


void MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4CE9A0C & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10653/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_1C7BAE8(&StringLiteral_10651/*"PhotoCampaignSelectImageLimit"*/);
    byte_4CE9A0C = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10651/*"PhotoCampaignSelectImageLimit"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10653/*"PhotoCampaignSelectedUsrSvtId"*/, 0);
  MyRoomParamsManager__InitParameter(v2);
}


void MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  MyRoomParamsManager_c *v7; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v10; // w20
  struct MyRoomParamsManager_StaticFields *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x20
  struct MyRoomParamsManager_StaticFields *v14; // x0
  __int64 v15; // x1
  MyRoomParamsManager_c *v16; // x0
  int32_t v17; // w20
  struct MyRoomParamsManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v20; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v22; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4CE9A0D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9A0D = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CE9A75 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A75 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v10 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CE9A76 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A76 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v11 = v7->static_fields;
  v11->_LastPlayWarId_k__BackingField = v10;
  v12 = v11->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CE9A77 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A77 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayEventId_k__BackingField = v12;
  v13 = StringLiteral_1/*""*/;
  if ( !byte_4CE9A78 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A78 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v7->static_fields;
  v14->_LastPlayTitle_k__BackingField = (struct System_String_o *)v13;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->_LastPlayTitle_k__BackingField, v13, v1, v2, v3, v4, v5, v6);
  v16 = MyRoomParamsManager_TypeInfo;
  v17 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CE9A79 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A79 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v18 = v16->static_fields;
  DummyFolderHistory = v18->DummyFolderHistory;
  v18->_LastSelectSubFolderId_k__BackingField = v17;
  if ( !DummyFolderHistory
    || (v20 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v20,
        (TmpDummyFolderHistory = v18->TmpDummyFolderHistory) == 0) )
  {
    sub_1C7BD40(v16, v15);
  }
  v22 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v22;
  DUMMY_PLAY_DEFAULT_VALUE = v18->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4CE9A7A )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A7A = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v16->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4CE9A7B )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A7B = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v16->static_fields->_IsListActive_k__BackingField = 0;
}


void MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A0E & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A0E = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->temporaryLastSelectSubFolderId = v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


// local variable allocation has failed, the output may be wrong!
void MyRoomParamsManager__LastDummyPlaySaveData(
        System_Collections_Generic_IEnumerable_int__o *history,
        int32_t questId,
        bool isSave,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v7; // x0
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  int v9; // w8
  MyRoomParamsManager_c *v10; // x0
  MyRoomParamsManager_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct MyRoomParamsManager_StaticFields *v21; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v23; // x0
  MyRoomParamsManager_c *v24; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v26; // x5

  if ( (byte_4CE9A11 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9A11 = 1;
  }
  if ( history )
  {
    v7 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v7->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_26;
    v9 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v9;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_3821FE4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4CE9A7A )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      byte_4CE9A7A = 1;
    }
    v10 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v10 = MyRoomParamsManager_TypeInfo;
    }
    v10->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v11 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v11 = MyRoomParamsManager_TypeInfo;
    }
    v12 = (System_Collections_Generic_IEnumerable_T__o *)v11->static_fields->TmpDummyFolderHistory;
    v13 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58857132(
      v13,
      v12,
      (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v13;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->DummyFolderHistory,
      (int32_t)v13,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v21->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v21->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v23 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, const MethodInfo *))TmpDummyFolderHistory->klass->vtable._3_ToString.methodPtr)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._3_ToString.method);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v23, 0);
      v24 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4CE9872 )
      {
        sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
        v24 = MyRoomParamsManager_TypeInfo;
        byte_4CE9872 = 1;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v24->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0);
      UnityEngine_PlayerPrefs__Save(0);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v26);
      return;
    }
LABEL_26:
    sub_1C7BD40(TmpDummyFolderHistory, *(_QWORD *)&questId);
  }
}


// local variable allocation has failed, the output may be wrong!
void MyRoomParamsManager__LastPlay_SaveData(
        int32_t questId,
        int32_t warId,
        int32_t eventId,
        System_String_o *title,
        bool isDummyDel,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  MyRoomParamsManager_c *v13; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v15; // x1
  MyRoomParamsManager_c *v16; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v20; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v22; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v24; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v26; // x0
  MyRoomParamsManager_c *v27; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  MyRoomParamsManager_c *v30; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  MyRoomParamsManager_c *v32; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  MyRoomParamsManager_c *v34; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  MyRoomParamsManager_c *v36; // x0
  System_String_o *v37; // x20
  struct MyRoomParamsManager_StaticFields *v38; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v40; // x0

  if ( (byte_4CE9A10 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A10 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4CE9A76 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A76 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4CE9A75 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A75 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4CE9A77 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A77 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4CE9A78 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A78 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (int32_t)title,
    eventId,
    (int32_t)title,
    (System_String_o *)isDummyDel,
    (int32_t)method,
    v6,
    v7);
  v16 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4CE9A79 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4CE9A79 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v18 = v16->static_fields;
  v18->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomParamsManager_TypeInfo;
      v18 = MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = v18->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_64;
    v20 = DummyFolderHistory->fields._version + 1;
    DummyFolderHistory->fields._size = 0;
    DummyFolderHistory->fields._version = v20;
    TmpDummyFolderHistory = v18->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_64;
    v22 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v22;
    DUMMY_PLAY_DEFAULT_VALUE = v18->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4CE9A7A )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      v16 = MyRoomParamsManager_TypeInfo;
      byte_4CE9A7A = 1;
    }
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomParamsManager_TypeInfo;
    }
    v24 = v16->static_fields;
    v16 = (MyRoomParamsManager_c *)v24->DummyFolderHistory;
    v24->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    if ( !v16 )
LABEL_64:
      sub_1C7BD40(v16, v15);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v24->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v26 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v16->_1.image + 45))(
                               v16,
                               *((_QWORD *)v16->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v26, 0);
    v27 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4CE9872 )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      v27 = MyRoomParamsManager_TypeInfo;
      byte_4CE9872 = 1;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v27->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v16->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4CE986E )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4CE986E = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_QUEST_ID, v16->static_fields->_LastPlayQuestId_k__BackingField, 0);
  v30 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4CE986F )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
    byte_4CE986F = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v30->static_fields->_LastPlayWarId_k__BackingField, 0);
  v32 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4CE9873 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_4CE9873 = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v32->static_fields->_LastPlayEventId_k__BackingField, 0);
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4CE9870 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4CE9870 = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v34->static_fields->_LastPlayTitle_k__BackingField, 0);
  v36 = MyRoomParamsManager_TypeInfo;
  v37 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4CE9871 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v36 = MyRoomParamsManager_TypeInfo;
    byte_4CE9871 = 1;
  }
  if ( !v36->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v36);
    v36 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v37, v36->static_fields->_LastSelectSubFolderId_k__BackingField, 0);
  v38 = MyRoomParamsManager_TypeInfo->static_fields;
  v16 = (MyRoomParamsManager_c *)v38->DummyFolderHistory;
  if ( !v16 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v38->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v40 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v16->_1.image + 45))(
                             v16,
                             *((_QWORD *)v16->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v40, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t Int; // w19
  MyRoomParamsManager_c *v3; // x0
  char v4; // w8

  if ( (byte_4CE9A13 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A13 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( Int == 1 )
  {
    if ( !byte_4CE9A7B )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      byte_4CE9A7B = 1;
    }
    v3 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v3 = MyRoomParamsManager_TypeInfo;
    }
    v4 = 1;
  }
  else
  {
    if ( !byte_4CE9A7B )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      byte_4CE9A7B = 1;
    }
    v3 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v3 = MyRoomParamsManager_TypeInfo;
    }
    v4 = 0;
  }
  v3->static_fields->_IsListActive_k__BackingField = v4;
}


void MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t Int; // w19
  MyRoomParamsManager_c *v3; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w1
  int32_t v7; // w19
  MyRoomParamsManager_c *v8; // x0
  struct MyRoomParamsManager_StaticFields *v9; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x0
  int32_t v11; // w1
  int32_t v12; // w19
  MyRoomParamsManager_c *v13; // x0
  struct MyRoomParamsManager_StaticFields *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *String; // x19
  MyRoomParamsManager_c *v22; // x0
  struct MyRoomParamsManager_StaticFields *v23; // x0
  int32_t v24; // w19
  MyRoomParamsManager_c *v25; // x0
  struct MyRoomParamsManager_StaticFields *v26; // x8
  Il2CppObject *v27; // x19
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  MyRoomParamsManager_c *v35; // x8
  Il2CppObject *v36; // x19
  struct MyRoomParamsManager_StaticFields *v37; // x0
  MyRoomParamsManager_c *v38; // x0
  int32_t v39; // w19
  MyRoomParamsManager_c *v40; // x0
  struct MyRoomParamsManager_StaticFields *v41; // x8
  int32_t v42; // w9

  if ( (byte_4CE9A0F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_JsonManager_Deserialize_List_int____);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9A0F = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v1->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0);
  if ( !byte_4CE9A75 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A75 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  SAVE_KEY_LAST_PLAY_WAR_ID = static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  LAST_PLAY_ID_DEFAULT_VALUE = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  static_fields->_LastPlayQuestId_k__BackingField = Int;
  v7 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_WAR_ID, LAST_PLAY_ID_DEFAULT_VALUE, 0);
  if ( !byte_4CE9A76 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A76 = 1;
  }
  v8 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v9 = v8->static_fields;
  SAVE_KEY_LAST_PLAY_EVENT_ID = v9->SAVE_KEY_LAST_PLAY_EVENT_ID;
  v11 = v9->LAST_PLAY_ID_DEFAULT_VALUE;
  v9->_LastPlayWarId_k__BackingField = v7;
  v12 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v11, 0);
  if ( !byte_4CE9A77 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A77 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v13->static_fields;
  v14->_LastPlayEventId_k__BackingField = v12;
  String = UnityEngine_PlayerPrefs__GetString(v14->SAVE_KEY_LAST_PLAY_TITLE, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !byte_4CE9A78 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A78 = 1;
  }
  v22 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v22 = MyRoomParamsManager_TypeInfo;
  }
  v23 = v22->static_fields;
  v23->_LastPlayTitle_k__BackingField = String;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v23->_LastPlayTitle_k__BackingField,
    (int32_t)String,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v24 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0);
  if ( !byte_4CE9A79 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A79 = 1;
  }
  v25 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v25 = MyRoomParamsManager_TypeInfo;
  }
  v26 = v25->static_fields;
  v26->_LastSelectSubFolderId_k__BackingField = v24;
  v27 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v26->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v27, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v28 = JsonManager__Deserialize_object_(v27, (const MethodInfo_31DEE64 *)Method_JsonManager_Deserialize_List_int____);
    v35 = MyRoomParamsManager_TypeInfo;
    v36 = v28;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v35 = MyRoomParamsManager_TypeInfo;
    }
    v37 = v35->static_fields;
    v37->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v36;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v37->DummyFolderHistory, (int32_t)v36, v29, v30, v31, v32, v33, v34);
  }
  v38 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v38 = MyRoomParamsManager_TypeInfo;
  }
  v39 = UnityEngine_PlayerPrefs__GetInt(
          v38->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v38->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0);
  if ( !byte_4CE9A7A )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A7A = 1;
  }
  v40 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v40 = MyRoomParamsManager_TypeInfo;
  }
  v41 = v40->static_fields;
  v42 = v41->LAST_PLAY_ID_DEFAULT_VALUE;
  v41->_LastPlayMovedQuestId_k__BackingField = v39;
  v41->temporaryLastSelectSubFolderId = v42;
}


void MyRoomParamsManager__Reboot(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A15 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A15 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4CE99B3 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99B3 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  if ( !byte_4CE99B5 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4CE99B5 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = -1;
}


void MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A14 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A14 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_IS_LIST_ACTIVE, value, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  WarEntity_o **v7; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x22
  int32_t id; // w21
  System_Func_object__bool__o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  MyRoomParamsManager___c_c *v12; // x8
  System_Func_object__int__o *_9__65_1; // x22
  Il2CppObject *v14; // x23
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  Il2CppObject *v23; // x0
  int monitor_high; // w20
  Il2CppObject *v25; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CE9A16 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1C7BAE8(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C7BAE8(&MyRoomControl_TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__65_1__);
    sub_1C7BAE8(&Method_MyRoomParamsManager___c__DisplayClass65_0__SetClearQuestWarEnableMyRoomBgChange_b__0__);
    sub_1C7BAE8(&MyRoomParamsManager___c__DisplayClass65_0_TypeInfo);
    sub_1C7BAE8(&MyRoomParamsManager___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5301/*"DisplayMyRoomBgWar"*/);
    sub_1C7BAE8(&StringLiteral_5300/*"DisplayMyRoomBgGroupId"*/);
    byte_4CE9A16 = 1;
  }
  v25 = 0;
  entity = 0;
  v3 = sub_1C7BD34(MyRoomParamsManager___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity )
    goto LABEL_60;
  v6 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
  if ( !v6 )
    goto LABEL_60;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &v25,
          (int32_t)Master_object,
          (const MethodInfo_342E348 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v3 || !v25 || !Master_object )
    goto LABEL_60;
  v7 = (WarEntity_o **)(v3 + 16);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          (Il2CppObject **)(v3 + 16),
          HIDWORD(v25[1].klass),
          (const MethodInfo_342E348 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    goto LABEL_60;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)Master_object->fields.list,
                                                              (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5300/*"DisplayMyRoomBgGroupId"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5300/*"DisplayMyRoomBgGroupId"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                  (System_String_o *)StringLiteral_5301/*"DisplayMyRoomBgWar"*/,
                                                                  0,
                                                                  0);
  if ( !*v7 )
    goto LABEL_60;
  id = (int)Master_object;
  if ( !WarEntity__HasFlag(*v7, 128, 0) )
    goto LABEL_36;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_60;
  if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 2 )
    goto LABEL_63;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_60;
  if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 32 )
  {
LABEL_63:
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4CE99B5 )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      byte_4CE99B5 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields.list[1].monitor) = 0;
  }
  else
  {
LABEL_36:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v7;
    if ( !*v7 )
      goto LABEL_60;
    if ( WarEntity__HasFlag((WarEntity_o *)Master_object, 128, 0) )
      goto LABEL_56;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    *(_QWORD *)(v3 + 24) = NetworkManager__getTime(0);
    v10 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v3,
      Method_MyRoomParamsManager___c__DisplayClass65_0__SetClearQuestWarEnableMyRoomBgChange_b__0__,
      0);
    v11 = System_Linq_Enumerable__Where_object_(
            v8,
            (System_Func_TSource__bool__o *)v10,
            (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    v12 = MyRoomParamsManager___c_TypeInfo;
    if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
      v12 = MyRoomParamsManager___c_TypeInfo;
    }
    _9__65_1 = (System_Func_object__int__o *)v12->static_fields->__9__65_1;
    if ( !_9__65_1 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MyRoomParamsManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__65_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_MyRoomAddEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__65_1,
        v14,
        Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__65_1__,
        0);
      static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
      static_fields->__9__65_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__65_1;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__65_1,
        (int32_t)_9__65_1,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 v11,
                                                                 (System_Func_TSource__TKey__o *)_9__65_1,
                                                                 (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    v23 = System_Linq_Enumerable__FirstOrDefault_object_(
            v22,
            (const MethodInfo_3197A00 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    if ( !v23 )
      goto LABEL_56;
    monitor_high = HIDWORD(v23[1].monitor);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4CE99B5 )
    {
      sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
      byte_4CE99B5 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
    }
    LODWORD(Master_object[2].fields.list[1].monitor) = monitor_high;
  }
  if ( !*v7 )
LABEL_60:
    sub_1C7BD40(Master_object, v5);
  id = (*v7)->fields.id;
LABEL_56:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__ClearBackGroundData(0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5301/*"DisplayMyRoomBgWar"*/, id, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A12 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A12 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->temporaryLastSelectSubFolderId = questId;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgGroupId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A08 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A08 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_DisplayMyRoomBgGroupId_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgGroupIdByLastClearQuest(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A0A & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A0A = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
}


bool MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A04 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A04 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_IsListActive_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE99FE & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FE = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A06 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A06 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE99FA & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FA = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A00 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A00 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE99FC & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FC = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CE9A02 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A02 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void MyRoomParamsManager__set_DisplayMyRoomBgGroupId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A09 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A09 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgGroupIdByLastClearQuest(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A0B & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A0B = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = value;
}


void MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A05 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A05 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_IsListActive_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayEventId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE99FF & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FF = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayEventId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayMovedQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A07 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A07 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayMovedQuestId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE99FB & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FB = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayQuestId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayTitle(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MyRoomParamsManager_c *v9; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4CE9A01 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A01 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE99FD & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE99FD = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastSelectSubFolderId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CE9A03 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager_TypeInfo);
    byte_4CE9A03 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}


void MyRoomParamsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CE9A18 & 1) == 0 )
  {
    sub_1C7BAE8(&MyRoomParamsManager___c_TypeInfo);
    byte_4CE9A18 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MyRoomParamsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomParamsManager___c_TypeInfo->static_fields->__9 = (struct MyRoomParamsManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MyRoomParamsManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomParamsManager___c___ctor(MyRoomParamsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyRoomParamsManager___c___SetClearQuestWarEnableMyRoomBgChange_b__65_1(
        MyRoomParamsManager___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return MyRoomAddEntity__GetSortPriority(entity, 0);
}


void MyRoomParamsManager___c__DisplayClass65_0___ctor(
        MyRoomParamsManager___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomParamsManager___c__DisplayClass65_0___SetClearQuestWarEnableMyRoomBgChange_b__0(
        MyRoomParamsManager___c__DisplayClass65_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !entity || (warEntity = this->fields.warEntity) == 0 )
    sub_1C7BD40(this, entity);
  return entity->fields.warId == warEntity->fields.id && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, 0);
}