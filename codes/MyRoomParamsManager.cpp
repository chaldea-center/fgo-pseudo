void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
{
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v2; // x19
  struct MyRoomParamsManager_StaticFields *v3; // x0
  System_Collections_Generic_List_int__o *v4; // x19
  struct MyRoomParamsManager_StaticFields *v5; // x0
  struct MyRoomParamsManager_StaticFields *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  struct MyRoomParamsManager_StaticFields *v9; // x0
  __int64 v10; // x1
  struct MyRoomParamsManager_StaticFields *v11; // x0
  __int64 v12; // x1
  struct MyRoomParamsManager_StaticFields *v13; // x0
  __int64 v14; // x1
  struct MyRoomParamsManager_StaticFields *v15; // x0
  __int64 v16; // x1
  struct MyRoomParamsManager_StaticFields *v17; // x0
  __int64 v18; // x1
  struct MyRoomParamsManager_StaticFields *v19; // x0
  struct MyRoomParamsManager_StaticFields *v20; // x0
  __int64 v21; // x1

  if ( (byte_4BD7CFF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8192/*"IsListActive"*/);
    sub_1C21E38(&StringLiteral_8514/*"LastPlayedEventId"*/);
    sub_1C21E38(&StringLiteral_8516/*"LastPlayedTitle"*/);
    sub_1C21E38(&StringLiteral_8515/*"LastPlayedQuestId"*/);
    sub_1C21E38(&StringLiteral_5526/*"DummyFolderHistory"*/);
    sub_1C21E38(&StringLiteral_8520/*"LastSelectSubFolderId"*/);
    sub_1C21E38(&StringLiteral_8513/*"LastPlayMovedQuestId"*/);
    sub_1C21E38(&StringLiteral_8517/*"LastPlayedWarId"*/);
    byte_4BD7CFF = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v2 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v3 = MyRoomParamsManager_TypeInfo->static_fields;
  v3->DummyFolderHistory = v2;
  sub_1C21DDC(&v3->DummyFolderHistory, v2);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = MyRoomParamsManager_TypeInfo->static_fields;
  v5->TmpDummyFolderHistory = v4;
  sub_1C21DDC(&v5->TmpDummyFolderHistory, v4);
  v6 = MyRoomParamsManager_TypeInfo->static_fields;
  v6->temporaryLastSelectSubFolderId = 0;
  v7 = StringLiteral_8515/*"LastPlayedQuestId"*/;
  v6->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8515/*"LastPlayedQuestId"*/;
  sub_1C21DDC(&v6->SAVE_KEY_LAST_PLAY_QUEST_ID, v7);
  v8 = StringLiteral_8517/*"LastPlayedWarId"*/;
  v9 = MyRoomParamsManager_TypeInfo->static_fields;
  v9->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8517/*"LastPlayedWarId"*/;
  sub_1C21DDC(&v9->SAVE_KEY_LAST_PLAY_WAR_ID, v8);
  v10 = StringLiteral_8514/*"LastPlayedEventId"*/;
  v11 = MyRoomParamsManager_TypeInfo->static_fields;
  v11->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8514/*"LastPlayedEventId"*/;
  sub_1C21DDC(&v11->SAVE_KEY_LAST_PLAY_EVENT_ID, v10);
  v12 = StringLiteral_8516/*"LastPlayedTitle"*/;
  v13 = MyRoomParamsManager_TypeInfo->static_fields;
  v13->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8516/*"LastPlayedTitle"*/;
  sub_1C21DDC(&v13->SAVE_KEY_LAST_PLAY_TITLE, v12);
  v14 = StringLiteral_8520/*"LastSelectSubFolderId"*/;
  v15 = MyRoomParamsManager_TypeInfo->static_fields;
  v15->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8520/*"LastSelectSubFolderId"*/;
  sub_1C21DDC(&v15->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v14);
  v16 = StringLiteral_8192/*"IsListActive"*/;
  v17 = MyRoomParamsManager_TypeInfo->static_fields;
  v17->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8192/*"IsListActive"*/;
  sub_1C21DDC(&v17->SAVE_KEY_IS_LIST_ACTIVE, v16);
  v18 = StringLiteral_5526/*"DummyFolderHistory"*/;
  v19 = MyRoomParamsManager_TypeInfo->static_fields;
  v19->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5526/*"DummyFolderHistory"*/;
  sub_1C21DDC(&v19->SAVE_KEY_DUMMY_FOLDER_HISTORY, v18);
  v20 = MyRoomParamsManager_TypeInfo->static_fields;
  v21 = StringLiteral_8513/*"LastPlayMovedQuestId"*/;
  v20->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8513/*"LastPlayMovedQuestId"*/;
  sub_1C21DDC(&v20->SAVE_KEY_LAST_MOVED_QUEST_ID, v21);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4BD7CF6 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10822/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_1C21E38(&StringLiteral_10820/*"PhotoCampaignSelectImageLimit"*/);
    byte_4BD7CF6 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10820/*"PhotoCampaignSelectImageLimit"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10822/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
  MyRoomParamsManager__InitParameter(v2);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v4; // w20
  struct MyRoomParamsManager_StaticFields *v5; // x8
  int32_t v6; // w20
  struct System_String_o *v7; // x20
  struct MyRoomParamsManager_StaticFields *v8; // x0
  __int64 v9; // x1
  MyRoomParamsManager_c *v10; // x0
  int32_t v11; // w20
  struct MyRoomParamsManager_StaticFields *v12; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v14; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v16; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4BD7CF7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7CF7 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4BD7D56 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D56 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v4 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4BD7D57 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D57 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v5 = v1->static_fields;
  v5->_LastPlayWarId_k__BackingField = v4;
  v6 = v5->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4BD7D58 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D58 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_LastPlayEventId_k__BackingField = v6;
  v7 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BD7D59 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D59 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v8 = v1->static_fields;
  v8->_LastPlayTitle_k__BackingField = v7;
  sub_1C21DDC(&v8->_LastPlayTitle_k__BackingField, v7);
  v10 = MyRoomParamsManager_TypeInfo;
  v11 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4BD7D5A )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D5A = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v12 = v10->static_fields;
  DummyFolderHistory = v12->DummyFolderHistory;
  v12->_LastSelectSubFolderId_k__BackingField = v11;
  if ( !DummyFolderHistory
    || (v14 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v14,
        (TmpDummyFolderHistory = v12->TmpDummyFolderHistory) == 0LL) )
  {
    sub_1C22094(v10, v9);
  }
  v16 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v16;
  DUMMY_PLAY_DEFAULT_VALUE = v12->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4BD7D5B )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D5B = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4BD7D5C )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D5C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CF8 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF8 = 1;
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
void __fastcall MyRoomParamsManager__LastDummyPlaySaveData(
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
  struct MyRoomParamsManager_StaticFields *v15; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v17; // x0
  MyRoomParamsManager_c *v18; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v20; // x5

  if ( (byte_4BD7CFB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7CFB = 1;
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
      (const MethodInfo_363229C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4BD7D5B )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7D5B = 1;
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
    v13 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56826212(
      v13,
      v12,
      (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v13;
    sub_1C21DDC(&static_fields->DummyFolderHistory, v13);
    v15 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v15->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v15->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v17, 0LL);
      v18 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4BD7A91 )
      {
        sub_1C21E38(&MyRoomParamsManager_TypeInfo);
        v18 = MyRoomParamsManager_TypeInfo;
        byte_4BD7A91 = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v18->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v20);
      return;
    }
LABEL_26:
    sub_1C22094(TmpDummyFolderHistory, *(_QWORD *)&questId);
  }
}


void __fastcall MyRoomParamsManager__LastPlay_SaveData(
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

  if ( (byte_4BD7CFA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CFA = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4BD7D57 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D57 = 1;
  }
  v11 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4BD7D56 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D56 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4BD7D58 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D58 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  v11->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4BD7D59 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v11 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D59 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1C21DDC(&static_fields->_LastPlayTitle_k__BackingField, title);
  v14 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4BD7D5A )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4BD7D5A = 1;
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
    if ( !byte_4BD7D5B )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      v14 = MyRoomParamsManager_TypeInfo;
      byte_4BD7D5B = 1;
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
      sub_1C22094(v14, v13);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v22->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v24 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v14->_1.image + 45))(
                               v14,
                               *((_QWORD *)v14->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v24, 0LL);
    v25 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4BD7A91 )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      v25 = MyRoomParamsManager_TypeInfo;
      byte_4BD7A91 = 1;
    }
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v25->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v14->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4BD7A8D )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_4BD7A8D = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_QUEST_ID,
    v14->static_fields->_LastPlayQuestId_k__BackingField,
    0LL);
  v28 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4BD7A8E )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v28 = MyRoomParamsManager_TypeInfo;
    byte_4BD7A8E = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v28->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v30 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4BD7A92 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
    byte_4BD7A92 = 1;
  }
  if ( !v30->_2.cctor_finished )
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
  if ( !byte_4BD7A8F )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_4BD7A8F = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v32->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v34 = MyRoomParamsManager_TypeInfo;
  v35 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4BD7A90 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4BD7A90 = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v35, v34->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v36 = MyRoomParamsManager_TypeInfo->static_fields;
  v14 = (MyRoomParamsManager_c *)v36->DummyFolderHistory;
  if ( !v14 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v36->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v38 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v14->_1.image + 45))(
                             v14,
                             *((_QWORD *)v14->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v38, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t Int; // w19
  MyRoomParamsManager_c *v3; // x0
  char v4; // w8

  if ( (byte_4BD7CFD & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CFD = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( Int == 1 )
  {
    if ( !byte_4BD7D5C )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7D5C = 1;
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
    if ( !byte_4BD7D5C )
    {
      sub_1C21E38(&MyRoomParamsManager_TypeInfo);
      byte_4BD7D5C = 1;
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


void __fastcall MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
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
  System_String_o *String; // x19
  MyRoomParamsManager_c *v16; // x0
  struct MyRoomParamsManager_StaticFields *v17; // x0
  int32_t v18; // w19
  MyRoomParamsManager_c *v19; // x0
  struct MyRoomParamsManager_StaticFields *v20; // x8
  Il2CppObject *v21; // x19
  Il2CppObject *v22; // x0
  MyRoomParamsManager_c *v23; // x8
  Il2CppObject *v24; // x19
  struct MyRoomParamsManager_StaticFields *v25; // x0
  MyRoomParamsManager_c *v26; // x0
  int32_t v27; // w19
  MyRoomParamsManager_c *v28; // x0
  struct MyRoomParamsManager_StaticFields *v29; // x8
  int32_t v30; // w9

  if ( (byte_4BD7CF9 & 1) == 0 )
  {
    sub_1C21E38(&Method_JsonManager_Deserialize_List_int____);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7CF9 = 1;
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
          0LL);
  if ( !byte_4BD7D56 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D56 = 1;
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
  v7 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_WAR_ID, LAST_PLAY_ID_DEFAULT_VALUE, 0LL);
  if ( !byte_4BD7D57 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D57 = 1;
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
  v12 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v11, 0LL);
  if ( !byte_4BD7D58 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D58 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v13->static_fields;
  v14->_LastPlayEventId_k__BackingField = v12;
  String = UnityEngine_PlayerPrefs__GetString(v14->SAVE_KEY_LAST_PLAY_TITLE, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !byte_4BD7D59 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D59 = 1;
  }
  v16 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v17 = v16->static_fields;
  v17->_LastPlayTitle_k__BackingField = String;
  sub_1C21DDC(&v17->_LastPlayTitle_k__BackingField, String);
  v18 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4BD7D5A )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D5A = 1;
  }
  v19 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v19 = MyRoomParamsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_LastSelectSubFolderId_k__BackingField = v18;
  v21 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v20->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v21, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v22 = JsonManager__Deserialize_object_(v21, (const MethodInfo_30176B4 *)Method_JsonManager_Deserialize_List_int____);
    v23 = MyRoomParamsManager_TypeInfo;
    v24 = v22;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v23 = MyRoomParamsManager_TypeInfo;
    }
    v25 = v23->static_fields;
    v25->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v24;
    sub_1C21DDC(&v25->DummyFolderHistory, v24);
  }
  v26 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v26 = MyRoomParamsManager_TypeInfo;
  }
  v27 = UnityEngine_PlayerPrefs__GetInt(
          v26->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v26->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4BD7D5B )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7D5B = 1;
  }
  v28 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v28 = MyRoomParamsManager_TypeInfo;
  }
  v29 = v28->static_fields;
  v30 = v29->LAST_PLAY_ID_DEFAULT_VALUE;
  v29->_LastPlayMovedQuestId_k__BackingField = v27;
  v29->temporaryLastSelectSubFolderId = v30;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CFE & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CFE = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4BD7CFC & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CFC = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->temporaryLastSelectSubFolderId = questId;
}


bool __fastcall MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CF2 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF2 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_IsListActive_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CEC & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CEC = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CF4 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF4 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CE8 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CE8 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *__fastcall MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CEE & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CEE = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CEA & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CEA = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4BD7CF0 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF0 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void __fastcall MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CF3 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF3 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_IsListActive_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayEventId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CED & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CED = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayEventId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayMovedQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CF5 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF5 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayMovedQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayQuestId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CE9 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CE9 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayTitle(System_String_o *value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4BD7CEF & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CEF = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1C21DDC(&static_fields->_LastPlayTitle_k__BackingField, value);
}


void __fastcall MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CEB & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CEB = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayWarId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastSelectSubFolderId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4BD7CF1 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomParamsManager_TypeInfo);
    byte_4BD7CF1 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}