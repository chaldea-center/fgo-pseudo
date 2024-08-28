void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
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
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v13; // x19
  struct MyRoomParamsManager_StaticFields *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x19
  struct MyRoomParamsManager_StaticFields *v16; // x0
  struct MyRoomParamsManager_StaticFields *v17; // x0
  struct MyRoomParamsManager_StaticFields *v18; // x0
  struct MyRoomParamsManager_StaticFields *v19; // x0
  struct MyRoomParamsManager_StaticFields *v20; // x0
  struct MyRoomParamsManager_StaticFields *v21; // x0
  struct MyRoomParamsManager_StaticFields *v22; // x0
  struct MyRoomParamsManager_StaticFields *v23; // x0
  struct MyRoomParamsManager_StaticFields *v24; // x0

  if ( (byte_4A1B403 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v2);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_7988/*"IsListActive"*/, v4);
    sub_1B715CC(&StringLiteral_8306/*"LastPlayedEventId"*/, v5);
    sub_1B715CC(&StringLiteral_8308/*"LastPlayedTitle"*/, v6);
    sub_1B715CC(&StringLiteral_8307/*"LastPlayedQuestId"*/, v7);
    sub_1B715CC(&StringLiteral_5393/*"DummyFolderHistory"*/, v8);
    sub_1B715CC(&StringLiteral_8312/*"LastSelectSubFolderId"*/, v9);
    sub_1B715CC(&StringLiteral_8305/*"LastPlayMovedQuestId"*/, v10);
    sub_1B715CC(&StringLiteral_8309/*"LastPlayedWarId"*/, v11);
    byte_4A1B403 = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v13 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = MyRoomParamsManager_TypeInfo->static_fields;
  v14->DummyFolderHistory = v13;
  sub_1B71570(&v14->DummyFolderHistory);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = MyRoomParamsManager_TypeInfo->static_fields;
  v16->TmpDummyFolderHistory = v15;
  sub_1B71570(&v16->TmpDummyFolderHistory);
  v17 = MyRoomParamsManager_TypeInfo->static_fields;
  v17->temporaryLastSelectSubFolderId = 0;
  v17->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8307/*"LastPlayedQuestId"*/;
  sub_1B71570(&v17->SAVE_KEY_LAST_PLAY_QUEST_ID);
  v18 = MyRoomParamsManager_TypeInfo->static_fields;
  v18->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8309/*"LastPlayedWarId"*/;
  sub_1B71570(&v18->SAVE_KEY_LAST_PLAY_WAR_ID);
  v19 = MyRoomParamsManager_TypeInfo->static_fields;
  v19->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8306/*"LastPlayedEventId"*/;
  sub_1B71570(&v19->SAVE_KEY_LAST_PLAY_EVENT_ID);
  v20 = MyRoomParamsManager_TypeInfo->static_fields;
  v20->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8308/*"LastPlayedTitle"*/;
  sub_1B71570(&v20->SAVE_KEY_LAST_PLAY_TITLE);
  v21 = MyRoomParamsManager_TypeInfo->static_fields;
  v21->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8312/*"LastSelectSubFolderId"*/;
  sub_1B71570(&v21->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID);
  v22 = MyRoomParamsManager_TypeInfo->static_fields;
  v22->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_7988/*"IsListActive"*/;
  sub_1B71570(&v22->SAVE_KEY_IS_LIST_ACTIVE);
  v23 = MyRoomParamsManager_TypeInfo->static_fields;
  v23->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5393/*"DummyFolderHistory"*/;
  sub_1B71570(&v23->SAVE_KEY_DUMMY_FOLDER_HISTORY);
  v24 = MyRoomParamsManager_TypeInfo->static_fields;
  v24->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8305/*"LastPlayMovedQuestId"*/;
  sub_1B71570(&v24->SAVE_KEY_LAST_MOVED_QUEST_ID);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4A1B3FA & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_10579/*"PhotoCampaignSelectedUsrSvtId"*/, v2);
    sub_1B715CC(&StringLiteral_10577/*"PhotoCampaignSelectImageLimit"*/, v3);
    byte_4A1B3FA = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(
    MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10577/*"PhotoCampaignSelectImageLimit"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10579/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
  MyRoomParamsManager__InitParameter(v5);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v7; // w20
  struct MyRoomParamsManager_StaticFields *v8; // x8
  int32_t v9; // w20
  struct System_String_o *v10; // x20
  struct MyRoomParamsManager_StaticFields *v11; // x0
  __int64 v12; // x1
  MyRoomParamsManager_c *v13; // x0
  int32_t v14; // w20
  struct MyRoomParamsManager_StaticFields *v15; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v17; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v19; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4A1B3FB & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1/*""*/, v3);
    byte_4A1B3FB = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v4->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A1B459 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    v4 = MyRoomParamsManager_TypeInfo;
    byte_4A1B459 = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v7 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A1B45A )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    v4 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45A = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v8 = v4->static_fields;
  v8->_LastPlayWarId_k__BackingField = v7;
  v9 = v8->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A1B45B )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    v4 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45B = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayEventId_k__BackingField = v9;
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A1B45C )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    v4 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45C = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v11 = v4->static_fields;
  v11->_LastPlayTitle_k__BackingField = v10;
  sub_1B71570(&v11->_LastPlayTitle_k__BackingField);
  v13 = MyRoomParamsManager_TypeInfo;
  v14 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A1B45D )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v12);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45D = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v15 = v13->static_fields;
  DummyFolderHistory = v15->DummyFolderHistory;
  v15->_LastSelectSubFolderId_k__BackingField = v14;
  if ( !DummyFolderHistory
    || (v17 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v17,
        (TmpDummyFolderHistory = v15->TmpDummyFolderHistory) == 0LL) )
  {
    sub_1B71828(v13, v12);
  }
  v19 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v19;
  DUMMY_PLAY_DEFAULT_VALUE = v15->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4A1B45E )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v12);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45E = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4A1B45F )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v12);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45F = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4A1B3FC & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3FC = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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
  int v14; // w8
  MyRoomParamsManager_c *v15; // x0
  MyRoomParamsManager_c *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  struct MyRoomParamsManager_StaticFields *v20; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  MyRoomParamsManager_c *v24; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v26; // x5

  if ( (byte_4A1B3FF & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor___75798152, v8);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_1/*""*/, v11);
    byte_4A1B3FF = 1;
  }
  if ( history )
  {
    v12 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v12 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v12->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_26;
    v14 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v14;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_34B3448 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4A1B45E )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      byte_4A1B45E = 1;
    }
    v15 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v15 = MyRoomParamsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v16 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v16 = MyRoomParamsManager_TypeInfo;
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)v16->static_fields->TmpDummyFolderHistory;
    v18 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_55257872(
      v18,
      v17,
      (const MethodInfo_34B2B10 *)Method_System_Collections_Generic_List_int___ctor___75798152);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v18;
    sub_1B71570(&static_fields->DummyFolderHistory);
    v20 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v20->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v20->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v22 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v22, 0LL);
      v24 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4A1B3BC )
      {
        sub_1B715CC(&MyRoomParamsManager_TypeInfo, v23);
        v24 = MyRoomParamsManager_TypeInfo;
        byte_4A1B3BC = 1;
      }
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v24->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
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
    sub_1B71828(TmpDummyFolderHistory, *(_QWORD *)&questId);
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
  __int64 v11; // x1
  MyRoomParamsManager_c *v12; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v14; // x1
  MyRoomParamsManager_c *v15; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v19; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v21; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v23; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  MyRoomParamsManager_c *v27; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  __int64 v30; // x1
  MyRoomParamsManager_c *v31; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  __int64 v33; // x1
  MyRoomParamsManager_c *v34; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  __int64 v36; // x1
  MyRoomParamsManager_c *v37; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  __int64 v39; // x1
  MyRoomParamsManager_c *v40; // x0
  System_String_o *v41; // x20
  struct MyRoomParamsManager_StaticFields *v42; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v44; // x0

  if ( (byte_4A1B3FE & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v11);
    byte_4A1B3FE = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4A1B45A )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    byte_4A1B45A = 1;
  }
  v12 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4A1B459 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A1B459 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4A1B45B )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45B = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4A1B45C )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45C = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1B71570(&static_fields->_LastPlayTitle_k__BackingField);
  v15 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4A1B45D )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A1B45D = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  v17 = v15->static_fields;
  v17->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MyRoomParamsManager_TypeInfo;
      v17 = MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = v17->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_64;
    v19 = DummyFolderHistory->fields._version + 1;
    DummyFolderHistory->fields._size = 0;
    DummyFolderHistory->fields._version = v19;
    TmpDummyFolderHistory = v17->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_64;
    v21 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v21;
    DUMMY_PLAY_DEFAULT_VALUE = v17->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4A1B45E )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, v14);
      v15 = MyRoomParamsManager_TypeInfo;
      byte_4A1B45E = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = MyRoomParamsManager_TypeInfo;
    }
    v23 = v15->static_fields;
    v15 = (MyRoomParamsManager_c *)v23->DummyFolderHistory;
    v23->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    if ( !v15 )
LABEL_64:
      sub_1B71828(v15, v14);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v23->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v25 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v15->_1.image + 45))(
                               v15,
                               *((_QWORD *)v15->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v25, 0LL);
    v27 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4A1B3BC )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, v26);
      v27 = MyRoomParamsManager_TypeInfo;
      byte_4A1B3BC = 1;
    }
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v27->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v15->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4A1B25D )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A1B25D = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_QUEST_ID,
    v15->static_fields->_LastPlayQuestId_k__BackingField,
    0LL);
  v31 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4A1B25E )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v30);
    v31 = MyRoomParamsManager_TypeInfo;
    byte_4A1B25E = 1;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v31->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4A1B3BD )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v33);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4A1B3BD = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_EVENT_ID,
    v34->static_fields->_LastPlayEventId_k__BackingField,
    0LL);
  v37 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4A1B25F )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v36);
    v37 = MyRoomParamsManager_TypeInfo;
    byte_4A1B25F = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v37->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v40 = MyRoomParamsManager_TypeInfo;
  v41 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4A1B260 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v39);
    v40 = MyRoomParamsManager_TypeInfo;
    byte_4A1B260 = 1;
  }
  if ( !v40->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v40);
    v40 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v41, v40->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v42 = MyRoomParamsManager_TypeInfo->static_fields;
  v15 = (MyRoomParamsManager_c *)v42->DummyFolderHistory;
  if ( !v15 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v42->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v44 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v15->_1.image + 45))(
                             v15,
                             *((_QWORD *)v15->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v44, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  __int64 v3; // x1
  int32_t Int; // w19
  MyRoomParamsManager_c *v5; // x0
  char v6; // w8

  if ( (byte_4A1B401 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B401 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( Int == 1 )
  {
    if ( !byte_4A1B45F )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, v3);
      byte_4A1B45F = 1;
    }
    v5 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v5 = MyRoomParamsManager_TypeInfo;
    }
    v6 = 1;
  }
  else
  {
    if ( !byte_4A1B45F )
    {
      sub_1B715CC(&MyRoomParamsManager_TypeInfo, v3);
      byte_4A1B45F = 1;
    }
    v5 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v5 = MyRoomParamsManager_TypeInfo;
    }
    v6 = 0;
  }
  v5->static_fields->_IsListActive_k__BackingField = v6;
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
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w1
  __int64 v12; // x1
  int32_t v13; // w19
  MyRoomParamsManager_c *v14; // x0
  struct MyRoomParamsManager_StaticFields *v15; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x0
  int32_t v17; // w1
  __int64 v18; // x1
  int32_t v19; // w19
  MyRoomParamsManager_c *v20; // x0
  struct MyRoomParamsManager_StaticFields *v21; // x8
  __int64 v22; // x1
  System_String_o *String; // x19
  MyRoomParamsManager_c *v24; // x0
  struct MyRoomParamsManager_StaticFields *v25; // x0
  __int64 v26; // x1
  int32_t v27; // w19
  MyRoomParamsManager_c *v28; // x0
  struct MyRoomParamsManager_StaticFields *v29; // x8
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x0
  MyRoomParamsManager_c *v32; // x8
  Il2CppObject *v33; // x19
  struct MyRoomParamsManager_StaticFields *v34; // x0
  MyRoomParamsManager_c *v35; // x0
  __int64 v36; // x1
  int32_t v37; // w19
  MyRoomParamsManager_c *v38; // x0
  struct MyRoomParamsManager_StaticFields *v39; // x8
  int32_t v40; // w9

  if ( (byte_4A1B3FD & 1) == 0 )
  {
    sub_1B715CC(&Method_JsonManager_Deserialize_List_int____, v1);
    sub_1B715CC(&JsonManager_TypeInfo, v2);
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_1/*""*/, v4);
    byte_4A1B3FD = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v5->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v5->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4A1B459 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v6);
    byte_4A1B459 = 1;
  }
  v8 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  SAVE_KEY_LAST_PLAY_WAR_ID = static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  LAST_PLAY_ID_DEFAULT_VALUE = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  static_fields->_LastPlayQuestId_k__BackingField = Int;
  v13 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_WAR_ID, LAST_PLAY_ID_DEFAULT_VALUE, 0LL);
  if ( !byte_4A1B45A )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v12);
    byte_4A1B45A = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v15 = v14->static_fields;
  SAVE_KEY_LAST_PLAY_EVENT_ID = v15->SAVE_KEY_LAST_PLAY_EVENT_ID;
  v17 = v15->LAST_PLAY_ID_DEFAULT_VALUE;
  v15->_LastPlayWarId_k__BackingField = v13;
  v19 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v17, 0LL);
  if ( !byte_4A1B45B )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v18);
    byte_4A1B45B = 1;
  }
  v20 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  v21 = v20->static_fields;
  v21->_LastPlayEventId_k__BackingField = v19;
  String = UnityEngine_PlayerPrefs__GetString(v21->SAVE_KEY_LAST_PLAY_TITLE, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !byte_4A1B45C )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v22);
    byte_4A1B45C = 1;
  }
  v24 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v24 = MyRoomParamsManager_TypeInfo;
  }
  v25 = v24->static_fields;
  v25->_LastPlayTitle_k__BackingField = String;
  sub_1B71570(&v25->_LastPlayTitle_k__BackingField);
  v27 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4A1B45D )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v26);
    byte_4A1B45D = 1;
  }
  v28 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v28 = MyRoomParamsManager_TypeInfo;
  }
  v29 = v28->static_fields;
  v29->_LastSelectSubFolderId_k__BackingField = v27;
  v30 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v29->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v30, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v31 = JsonManager__Deserialize_object_(v30, (const MethodInfo_2EC1840 *)Method_JsonManager_Deserialize_List_int____);
    v32 = MyRoomParamsManager_TypeInfo;
    v33 = v31;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v32 = MyRoomParamsManager_TypeInfo;
    }
    v34 = v32->static_fields;
    v34->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v33;
    sub_1B71570(&v34->DummyFolderHistory);
  }
  v35 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v35 = MyRoomParamsManager_TypeInfo;
  }
  v37 = UnityEngine_PlayerPrefs__GetInt(
          v35->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v35->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4A1B45E )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v36);
    byte_4A1B45E = 1;
  }
  v38 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v38 = MyRoomParamsManager_TypeInfo;
  }
  v39 = v38->static_fields;
  v40 = v39->LAST_PLAY_ID_DEFAULT_VALUE;
  v39->_LastPlayMovedQuestId_k__BackingField = v37;
  v39->temporaryLastSelectSubFolderId = v40;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A1B402 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B402 = 1;
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

  if ( (byte_4A1B400 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B400 = 1;
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
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4A1B3F6 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3F6 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3F0 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3F0 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3F8 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3F8 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3EC & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3EC = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3F2 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3F2 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3EE & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3EE = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A1B3F4 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A1B3F4 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return v2->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void __fastcall MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A1B3F7 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3F7 = 1;
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

  if ( (byte_4A1B3F1 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3F1 = 1;
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

  if ( (byte_4A1B3F9 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3F9 = 1;
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

  if ( (byte_4A1B3ED & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3ED = 1;
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

  if ( (byte_4A1B3F3 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3F3 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1B71570(&static_fields->_LastPlayTitle_k__BackingField);
}


void __fastcall MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A1B3EF & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3EF = 1;
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

  if ( (byte_4A1B3F5 & 1) == 0 )
  {
    sub_1B715CC(&MyRoomParamsManager_TypeInfo, method);
    byte_4A1B3F5 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}