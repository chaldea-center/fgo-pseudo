void MyRoomParamsManager___cctor(const MethodInfo *method)
{
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v2; // x19
  struct MyRoomParamsManager_StaticFields *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_int__o *v6; // x19
  struct MyRoomParamsManager_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MyRoomParamsManager_StaticFields *v10; // x0
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct MyRoomParamsManager_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct MyRoomParamsManager_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  struct MyRoomParamsManager_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  struct MyRoomParamsManager_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  struct MyRoomParamsManager_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct MyRoomParamsManager_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct MyRoomParamsManager_StaticFields *v38; // x0
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4CB173E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8038/*"IsListActive"*/);
    sub_1C6BA08(&StringLiteral_8360/*"LastPlayedEventId"*/);
    sub_1C6BA08(&StringLiteral_8362/*"LastPlayedTitle"*/);
    sub_1C6BA08(&StringLiteral_8361/*"LastPlayedQuestId"*/);
    sub_1C6BA08(&StringLiteral_5380/*"DummyFolderHistory"*/);
    sub_1C6BA08(&StringLiteral_8366/*"LastSelectSubFolderId"*/);
    sub_1C6BA08(&StringLiteral_8359/*"LastPlayMovedQuestId"*/);
    sub_1C6BA08(&StringLiteral_8363/*"LastPlayedWarId"*/);
    byte_4CB173E = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v2 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v3 = MyRoomParamsManager_TypeInfo->static_fields;
  v3->DummyFolderHistory = v2;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v3->DummyFolderHistory, (int32_t)v2, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = MyRoomParamsManager_TypeInfo->static_fields;
  v7->TmpDummyFolderHistory = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->TmpDummyFolderHistory, (int32_t)v6, v8, v9);
  v10 = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&v10->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  v10->temporaryLastSelectSubFolderId = 0;
  v11 = StringLiteral_8361/*"LastPlayedQuestId"*/;
  v10->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8361/*"LastPlayedQuestId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->SAVE_KEY_LAST_PLAY_QUEST_ID, v11, v12, v13);
  v14 = StringLiteral_8363/*"LastPlayedWarId"*/;
  v15 = MyRoomParamsManager_TypeInfo->static_fields;
  v15->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8363/*"LastPlayedWarId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->SAVE_KEY_LAST_PLAY_WAR_ID, v14, v16, v17);
  v18 = StringLiteral_8360/*"LastPlayedEventId"*/;
  v19 = MyRoomParamsManager_TypeInfo->static_fields;
  v19->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8360/*"LastPlayedEventId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->SAVE_KEY_LAST_PLAY_EVENT_ID, v18, v20, v21);
  v22 = StringLiteral_8362/*"LastPlayedTitle"*/;
  v23 = MyRoomParamsManager_TypeInfo->static_fields;
  v23->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8362/*"LastPlayedTitle"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v23->SAVE_KEY_LAST_PLAY_TITLE, v22, v24, v25);
  v26 = StringLiteral_8366/*"LastSelectSubFolderId"*/;
  v27 = MyRoomParamsManager_TypeInfo->static_fields;
  v27->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8366/*"LastSelectSubFolderId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v27->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v26, v28, v29);
  v30 = StringLiteral_8038/*"IsListActive"*/;
  v31 = MyRoomParamsManager_TypeInfo->static_fields;
  v31->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8038/*"IsListActive"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v31->SAVE_KEY_IS_LIST_ACTIVE, v30, v32, v33);
  v34 = StringLiteral_5380/*"DummyFolderHistory"*/;
  v35 = MyRoomParamsManager_TypeInfo->static_fields;
  v35->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5380/*"DummyFolderHistory"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v35->SAVE_KEY_DUMMY_FOLDER_HISTORY, v34, v36, v37);
  v38 = MyRoomParamsManager_TypeInfo->static_fields;
  v39 = StringLiteral_8359/*"LastPlayMovedQuestId"*/;
  v38->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8359/*"LastPlayMovedQuestId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v38->SAVE_KEY_LAST_MOVED_QUEST_ID, v39, v40, v41);
}


void MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4CB1733 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10615/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_1C6BA08(&StringLiteral_10613/*"PhotoCampaignSelectImageLimit"*/);
    byte_4CB1733 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10613/*"PhotoCampaignSelectImageLimit"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10615/*"PhotoCampaignSelectedUsrSvtId"*/, 0);
  MyRoomParamsManager__InitParameter(v2);
}


void MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  MyRoomParamsManager_c *v3; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v6; // w20
  struct MyRoomParamsManager_StaticFields *v7; // x8
  int32_t v8; // w20
  __int64 v9; // x20
  struct MyRoomParamsManager_StaticFields *v10; // x0
  __int64 v11; // x1
  MyRoomParamsManager_c *v12; // x0
  int32_t v13; // w20
  struct MyRoomParamsManager_StaticFields *v14; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v16; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v18; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4CB1734 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1734 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v3->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CB1799 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_4CB1799 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v6 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CB179A )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_4CB179A = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v7 = v3->static_fields;
  v7->_LastPlayWarId_k__BackingField = v6;
  v8 = v7->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CB179B )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_4CB179B = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayEventId_k__BackingField = v8;
  v9 = StringLiteral_1/*""*/;
  if ( !byte_4CB179C )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_4CB179C = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v10 = v3->static_fields;
  v10->_LastPlayTitle_k__BackingField = (struct System_String_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->_LastPlayTitle_k__BackingField, v9, v1, v2);
  v12 = MyRoomParamsManager_TypeInfo;
  v13 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4CB179D )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4CB179D = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v12->static_fields;
  DummyFolderHistory = v14->DummyFolderHistory;
  v14->_LastSelectSubFolderId_k__BackingField = v13;
  if ( !DummyFolderHistory
    || (v16 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v16,
        (TmpDummyFolderHistory = v14->TmpDummyFolderHistory) == 0) )
  {
    sub_1C6BC60(v12, v11);
  }
  v18 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v18;
  DUMMY_PLAY_DEFAULT_VALUE = v14->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4CB179E )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4CB179E = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4CB179F )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4CB179F = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_IsListActive_k__BackingField = 0;
}


void MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CB1735 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1735 = 1;
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
  const MethodInfo *v16; // x3
  struct MyRoomParamsManager_StaticFields *v17; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v19; // x0
  MyRoomParamsManager_c *v20; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v22; // x5

  if ( (byte_4CB1738 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1738 = 1;
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
      (const MethodInfo_37E3B5C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4CB179E )
    {
      sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
      byte_4CB179E = 1;
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
    v13 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58602020(
      v13,
      v12,
      (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v13;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->DummyFolderHistory, (int32_t)v13, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v17->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v17->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v19 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, const MethodInfo *))TmpDummyFolderHistory->klass->vtable._3_ToString.methodPtr)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._3_ToString.method);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v19, 0);
      v20 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4CB14C0 )
      {
        sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
        v20 = MyRoomParamsManager_TypeInfo;
        byte_4CB14C0 = 1;
      }
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v20->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0);
      UnityEngine_PlayerPrefs__Save(0);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v22);
      return;
    }
LABEL_26:
    sub_1C6BC60(TmpDummyFolderHistory, *(_QWORD *)&questId);
  }
}


void MyRoomParamsManager__LastPlay_SaveData(
        int32_t questId,
        int32_t warId,
        int32_t eventId,
        System_String_o *title,
        bool isDummyDel,
        const MethodInfo *method)
{
  MyRoomParamsManager_c *v11; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v13; // x1
  MyRoomParamsManager_c *v14; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields *v16; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v18; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v20; // w10
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

  if ( (byte_4CB1737 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1737 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4CB179A )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179A = 1;
  }
  v11 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4CB1799 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4CB1799 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4CB179B )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4CB179B = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4CB179C )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4CB179C = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (int32_t)title,
    eventId,
    (const MethodInfo *)title);
  v14 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4CB179D )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4CB179D = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v16 = v14->static_fields;
  v16->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomParamsManager_TypeInfo;
      v16 = MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = v16->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_64;
    v18 = DummyFolderHistory->fields._version + 1;
    DummyFolderHistory->fields._size = 0;
    DummyFolderHistory->fields._version = v18;
    TmpDummyFolderHistory = v16->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_64;
    v20 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v20;
    DUMMY_PLAY_DEFAULT_VALUE = v16->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4CB179E )
    {
      sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
      v14 = MyRoomParamsManager_TypeInfo;
      byte_4CB179E = 1;
    }
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomParamsManager_TypeInfo;
    }
    v22 = v14->static_fields;
    v14 = (MyRoomParamsManager_c *)v22->DummyFolderHistory;
    v22->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    if ( !v14 )
LABEL_64:
      sub_1C6BC60(v14, v13);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v22->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v24 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v14->_1.image + 45))(
                               v14,
                               *((_QWORD *)v14->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v24, 0);
    v25 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4CB14C0 )
    {
      sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
      v25 = MyRoomParamsManager_TypeInfo;
      byte_4CB14C0 = 1;
    }
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v25->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v14->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4CB14BC )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4CB14BC = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_QUEST_ID, v14->static_fields->_LastPlayQuestId_k__BackingField, 0);
  v28 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4CB14BD )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v28 = MyRoomParamsManager_TypeInfo;
    byte_4CB14BD = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v28->static_fields->_LastPlayWarId_k__BackingField, 0);
  v30 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4CB14C1 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
    byte_4CB14C1 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v30->static_fields->_LastPlayEventId_k__BackingField, 0);
  v32 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4CB14BE )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_4CB14BE = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v32->static_fields->_LastPlayTitle_k__BackingField, 0);
  v34 = MyRoomParamsManager_TypeInfo;
  v35 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4CB14BF )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4CB14BF = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v35, v34->static_fields->_LastSelectSubFolderId_k__BackingField, 0);
  v36 = MyRoomParamsManager_TypeInfo->static_fields;
  v14 = (MyRoomParamsManager_c *)v36->DummyFolderHistory;
  if ( !v14 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v36->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v38 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v14->_1.image + 45))(
                             v14,
                             *((_QWORD *)v14->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v38, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t Int; // w19
  MyRoomParamsManager_c *v3; // x0
  char v4; // w8

  if ( (byte_4CB173A & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB173A = 1;
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
    if ( !byte_4CB179F )
    {
      sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
      byte_4CB179F = 1;
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
    if ( !byte_4CB179F )
    {
      sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
      byte_4CB179F = 1;
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
  const MethodInfo *v16; // x3
  System_String_o *String; // x19
  MyRoomParamsManager_c *v18; // x0
  struct MyRoomParamsManager_StaticFields *v19; // x0
  int32_t v20; // w19
  MyRoomParamsManager_c *v21; // x0
  struct MyRoomParamsManager_StaticFields *v22; // x8
  Il2CppObject *v23; // x19
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  MyRoomParamsManager_c *v27; // x8
  Il2CppObject *v28; // x19
  struct MyRoomParamsManager_StaticFields *v29; // x0
  MyRoomParamsManager_c *v30; // x0
  int32_t v31; // w19
  MyRoomParamsManager_c *v32; // x0
  struct MyRoomParamsManager_StaticFields *v33; // x8
  int32_t v34; // w9

  if ( (byte_4CB1736 & 1) == 0 )
  {
    sub_1C6BA08(&Method_JsonManager_Deserialize_List_int____);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1736 = 1;
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
  if ( !byte_4CB1799 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1799 = 1;
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
  if ( !byte_4CB179A )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179A = 1;
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
  if ( !byte_4CB179B )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179B = 1;
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
  if ( !byte_4CB179C )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179C = 1;
  }
  v18 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v18 = MyRoomParamsManager_TypeInfo;
  }
  v19 = v18->static_fields;
  v19->_LastPlayTitle_k__BackingField = String;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v19->_LastPlayTitle_k__BackingField, (int32_t)String, v15, v16);
  v20 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0);
  if ( !byte_4CB179D )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179D = 1;
  }
  v21 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v22 = v21->static_fields;
  v22->_LastSelectSubFolderId_k__BackingField = v20;
  v23 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v22->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v23, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v24 = JsonManager__Deserialize_object_(v23, (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_List_int____);
    v27 = MyRoomParamsManager_TypeInfo;
    v28 = v24;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v27 = MyRoomParamsManager_TypeInfo;
    }
    v29 = v27->static_fields;
    v29->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v28;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v29->DummyFolderHistory, (int32_t)v28, v25, v26);
  }
  v30 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  v31 = UnityEngine_PlayerPrefs__GetInt(
          v30->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v30->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0);
  if ( !byte_4CB179E )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB179E = 1;
  }
  v32 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  v33 = v32->static_fields;
  v34 = v33->LAST_PLAY_ID_DEFAULT_VALUE;
  v33->_LastPlayMovedQuestId_k__BackingField = v31;
  v33->temporaryLastSelectSubFolderId = v34;
}


void MyRoomParamsManager__Reboot(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4CB173C & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB173C = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4CB16DD )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB16DD = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  if ( !byte_4CB16DF )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4CB16DF = 1;
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

  if ( (byte_4CB173B & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB173B = 1;
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
  __int64 v3; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  WarEntity_o **v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x22
  int32_t id; // w21
  System_Func_object__bool__o *v10; // x23
  Il2CppObject *v11; // x0
  int monitor_high; // w19
  Il2CppObject *v13; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB173D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C6BA08(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C6BA08(&MyRoomControl_TypeInfo);
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    sub_1C6BA08(&Method_MyRoomParamsManager___c__DisplayClass65_0__SetClearQuestWarEnableMyRoomBgChange_b__0__);
    sub_1C6BA08(&MyRoomParamsManager___c__DisplayClass65_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_5286/*"DisplayMyRoomBgWar"*/);
    sub_1C6BA08(&StringLiteral_5285/*"DisplayMyRoomBgGroupId"*/);
    byte_4CB173D = 1;
  }
  entity = 0;
  v13 = 0;
  v3 = sub_1C6BC54(MyRoomParamsManager___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_52;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity )
    goto LABEL_52;
  v6 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
  if ( !v6 )
    goto LABEL_52;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v6,
          &v13,
          (int32_t)Master_object,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v3 || !v13 || !Master_object )
    goto LABEL_52;
  v7 = (WarEntity_o **)(v3 + 16);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          (Il2CppObject **)(v3 + 16),
          HIDWORD(v13[1].klass),
          (const MethodInfo_33F9128 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    goto LABEL_52;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)Master_object->fields.list,
                                                              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5285/*"DisplayMyRoomBgGroupId"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5285/*"DisplayMyRoomBgGroupId"*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                  (System_String_o *)StringLiteral_5286/*"DisplayMyRoomBgWar"*/,
                                                                  0,
                                                                  0);
  if ( !*v7 )
    goto LABEL_52;
  id = (int)Master_object;
  if ( WarEntity__HasFlag(*v7, 128, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_52;
    if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 2 )
      goto LABEL_55;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_52;
    if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 32 )
    {
LABEL_55:
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4CB16DF )
      {
        sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
        byte_4CB16DF = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
      }
      LODWORD(Master_object[2].fields.list[1].monitor) = 0;
      goto LABEL_46;
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v7;
  if ( !*v7 )
    goto LABEL_52;
  if ( !WarEntity__HasFlag((WarEntity_o *)Master_object, 128, 0) )
  {
    v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v3,
      Method_MyRoomParamsManager___c__DisplayClass65_0__SetClearQuestWarEnableMyRoomBgChange_b__0__,
      0);
    v11 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            v8,
            (System_Func_TSource__bool__o *)v10,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    if ( v11 )
    {
      monitor_high = HIDWORD(v11[1].monitor);
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4CB16DF )
      {
        sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
        byte_4CB16DF = 1;
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)MyRoomParamsManager_TypeInfo;
      }
      LODWORD(Master_object[2].fields.list[1].monitor) = monitor_high;
LABEL_46:
      if ( *v7 )
      {
        id = (*v7)->fields.id;
        goto LABEL_48;
      }
LABEL_52:
      sub_1C6BC60(Master_object, v5);
    }
  }
LABEL_48:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__ClearBackGroundData(0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5286/*"DisplayMyRoomBgWar"*/, id, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CB1739 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1739 = 1;
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

  if ( (byte_4CB172F & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172F = 1;
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

  if ( (byte_4CB1731 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1731 = 1;
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

  if ( (byte_4CB172B & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172B = 1;
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

  if ( (byte_4CB1725 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1725 = 1;
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

  if ( (byte_4CB172D & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172D = 1;
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

  if ( (byte_4CB1721 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1721 = 1;
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

  if ( (byte_4CB1727 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1727 = 1;
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

  if ( (byte_4CB1723 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1723 = 1;
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

  if ( (byte_4CB1729 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1729 = 1;
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

  if ( (byte_4CB1730 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1730 = 1;
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

  if ( (byte_4CB1732 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1732 = 1;
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

  if ( (byte_4CB172C & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172C = 1;
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

  if ( (byte_4CB1726 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1726 = 1;
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

  if ( (byte_4CB172E & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172E = 1;
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

  if ( (byte_4CB1722 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1722 = 1;
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
  const MethodInfo *v3; // x3
  MyRoomParamsManager_c *v5; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4CB1728 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1728 = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_LastPlayTitle_k__BackingField, (int32_t)value, v2, v3);
}


void MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4CB1724 & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB1724 = 1;
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

  if ( (byte_4CB172A & 1) == 0 )
  {
    sub_1C6BA08(&MyRoomParamsManager_TypeInfo);
    byte_4CB172A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
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
    sub_1C6BC60(this, entity);
  return entity->fields.warId == warEntity->fields.id;
}