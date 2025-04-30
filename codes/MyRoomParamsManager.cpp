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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x19
  struct MyRoomParamsManager_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct MyRoomParamsManager_StaticFields *v21; // x0
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  struct MyRoomParamsManager_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  struct MyRoomParamsManager_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  struct MyRoomParamsManager_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  struct MyRoomParamsManager_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  struct MyRoomParamsManager_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct MyRoomParamsManager_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct MyRoomParamsManager_StaticFields *v49; // x0
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3

  if ( (byte_4A49A9E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v2);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_7891/*"IsListActive"*/, v4);
    sub_1B863B8(&StringLiteral_8209/*"LastPlayedEventId"*/, v5);
    sub_1B863B8(&StringLiteral_8211/*"LastPlayedTitle"*/, v6);
    sub_1B863B8(&StringLiteral_8210/*"LastPlayedQuestId"*/, v7);
    sub_1B863B8(&StringLiteral_5355/*"DummyFolderHistory"*/, v8);
    sub_1B863B8(&StringLiteral_8215/*"LastSelectSubFolderId"*/, v9);
    sub_1B863B8(&StringLiteral_8208/*"LastPlayMovedQuestId"*/, v10);
    sub_1B863B8(&StringLiteral_8212/*"LastPlayedWarId"*/, v11);
    byte_4A49A9E = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v13 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = MyRoomParamsManager_TypeInfo->static_fields;
  v14->DummyFolderHistory = v13;
  sub_1B8635C((CGThumbnailListItem_o *)&v14->DummyFolderHistory, (int32_t)v13, v15, v16);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v18 = MyRoomParamsManager_TypeInfo->static_fields;
  v18->TmpDummyFolderHistory = v17;
  sub_1B8635C((CGThumbnailListItem_o *)&v18->TmpDummyFolderHistory, (int32_t)v17, v19, v20);
  v21 = MyRoomParamsManager_TypeInfo->static_fields;
  v21->temporaryLastSelectSubFolderId = 0;
  v22 = StringLiteral_8210/*"LastPlayedQuestId"*/;
  v21->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8210/*"LastPlayedQuestId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v21->SAVE_KEY_LAST_PLAY_QUEST_ID, v22, v23, v24);
  v25 = StringLiteral_8212/*"LastPlayedWarId"*/;
  v26 = MyRoomParamsManager_TypeInfo->static_fields;
  v26->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8212/*"LastPlayedWarId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->SAVE_KEY_LAST_PLAY_WAR_ID, v25, v27, v28);
  v29 = StringLiteral_8209/*"LastPlayedEventId"*/;
  v30 = MyRoomParamsManager_TypeInfo->static_fields;
  v30->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8209/*"LastPlayedEventId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v30->SAVE_KEY_LAST_PLAY_EVENT_ID, v29, v31, v32);
  v33 = StringLiteral_8211/*"LastPlayedTitle"*/;
  v34 = MyRoomParamsManager_TypeInfo->static_fields;
  v34->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8211/*"LastPlayedTitle"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v34->SAVE_KEY_LAST_PLAY_TITLE, v33, v35, v36);
  v37 = StringLiteral_8215/*"LastSelectSubFolderId"*/;
  v38 = MyRoomParamsManager_TypeInfo->static_fields;
  v38->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8215/*"LastSelectSubFolderId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v38->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v37, v39, v40);
  v41 = StringLiteral_7891/*"IsListActive"*/;
  v42 = MyRoomParamsManager_TypeInfo->static_fields;
  v42->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_7891/*"IsListActive"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v42->SAVE_KEY_IS_LIST_ACTIVE, v41, v43, v44);
  v45 = StringLiteral_5355/*"DummyFolderHistory"*/;
  v46 = MyRoomParamsManager_TypeInfo->static_fields;
  v46->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5355/*"DummyFolderHistory"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v46->SAVE_KEY_DUMMY_FOLDER_HISTORY, v45, v47, v48);
  v49 = MyRoomParamsManager_TypeInfo->static_fields;
  v50 = StringLiteral_8208/*"LastPlayMovedQuestId"*/;
  v49->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8208/*"LastPlayMovedQuestId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v49->SAVE_KEY_LAST_MOVED_QUEST_ID, v50, v51, v52);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4A49A94 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_10456/*"PhotoCampaignSelectedUsrSvtId"*/, v2);
    sub_1B863B8(&StringLiteral_10454/*"PhotoCampaignSelectImageLimit"*/, v3);
    byte_4A49A94 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10454/*"PhotoCampaignSelectImageLimit"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10456/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
  MyRoomParamsManager__InitParameter(v5);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomParamsManager_c *v6; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v9; // w20
  struct MyRoomParamsManager_StaticFields *v10; // x8
  int32_t v11; // w20
  struct System_String_o *v12; // x20
  struct MyRoomParamsManager_StaticFields *v13; // x0
  __int64 v14; // x1
  MyRoomParamsManager_c *v15; // x0
  int32_t v16; // w20
  struct MyRoomParamsManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v19; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v21; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4A49A95 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A49A95 = 1;
  }
  v6 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v6 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v6->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A49AF8 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    v6 = MyRoomParamsManager_TypeInfo;
    byte_4A49AF8 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v9 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A49AF9 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    v6 = MyRoomParamsManager_TypeInfo;
    byte_4A49AF9 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MyRoomParamsManager_TypeInfo;
  }
  v10 = v6->static_fields;
  v10->_LastPlayWarId_k__BackingField = v9;
  v11 = v10->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A49AFA )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    v6 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFA = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MyRoomParamsManager_TypeInfo;
  }
  v6->static_fields->_LastPlayEventId_k__BackingField = v11;
  v12 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A49AFB )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    v6 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFB = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MyRoomParamsManager_TypeInfo;
  }
  v13 = v6->static_fields;
  v13->_LastPlayTitle_k__BackingField = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&v13->_LastPlayTitle_k__BackingField, (int32_t)v12, v2, v3);
  v15 = MyRoomParamsManager_TypeInfo;
  v16 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4A49AFC )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFC = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  v17 = v15->static_fields;
  DummyFolderHistory = v17->DummyFolderHistory;
  v17->_LastSelectSubFolderId_k__BackingField = v16;
  if ( !DummyFolderHistory
    || (v19 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v19,
        (TmpDummyFolderHistory = v17->TmpDummyFolderHistory) == 0LL) )
  {
    sub_1B86614(v15, v14);
  }
  v21 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v21;
  DUMMY_PLAY_DEFAULT_VALUE = v17->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4A49AFD )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFD = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  v15->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4A49AFE )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFE = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = MyRoomParamsManager_TypeInfo;
  }
  v15->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_4A49A96 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A96 = 1;
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct MyRoomParamsManager_StaticFields *v22; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  MyRoomParamsManager_c *v26; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v28; // x5

  if ( (byte_4A49A99 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor___76036632, v8);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A49A99 = 1;
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
      (const MethodInfo_35DFB40 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4A49AFD )
    {
      sub_1B863B8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      byte_4A49AFD = 1;
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
    v18 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_56488456(
      v18,
      v17,
      (const MethodInfo_35DF208 *)Method_System_Collections_Generic_List_int___ctor___76036632);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v18;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->DummyFolderHistory, (int32_t)v18, v20, v21);
    v22 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v22->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v22->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v24 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v24, 0LL);
      v26 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4A498FD )
      {
        sub_1B863B8(&MyRoomParamsManager_TypeInfo, v25);
        v26 = MyRoomParamsManager_TypeInfo;
        byte_4A498FD = 1;
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v26->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v28);
      return;
    }
LABEL_26:
    sub_1B86614(TmpDummyFolderHistory, *(_QWORD *)&questId);
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

  if ( (byte_4A49A98 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v11);
    byte_4A49A98 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4A49AF9 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    byte_4A49AF9 = 1;
  }
  v12 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4A49AF8 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A49AF8 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4A49AFA )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFA = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  v12->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4A49AFB )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v12 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFB = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (int32_t)title,
    eventId,
    (const MethodInfo *)title);
  v15 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4A49AFC )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A49AFC = 1;
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
    if ( !byte_4A49AFD )
    {
      sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
      v15 = MyRoomParamsManager_TypeInfo;
      byte_4A49AFD = 1;
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
      sub_1B86614(v15, v14);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v23->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v25 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v15->_1.image + 45))(
                               v15,
                               *((_QWORD *)v15->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v25, 0LL);
    v27 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4A498FD )
    {
      sub_1B863B8(&MyRoomParamsManager_TypeInfo, v26);
      v27 = MyRoomParamsManager_TypeInfo;
      byte_4A498FD = 1;
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
  if ( !byte_4A498F9 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v14);
    v15 = MyRoomParamsManager_TypeInfo;
    byte_4A498F9 = 1;
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
  if ( !byte_4A498FA )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v30);
    v31 = MyRoomParamsManager_TypeInfo;
    byte_4A498FA = 1;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v31->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4A498FE )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v33);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4A498FE = 1;
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
  if ( !byte_4A498FB )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v36);
    v37 = MyRoomParamsManager_TypeInfo;
    byte_4A498FB = 1;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v37->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v40 = MyRoomParamsManager_TypeInfo;
  v41 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4A498FC )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v39);
    v40 = MyRoomParamsManager_TypeInfo;
    byte_4A498FC = 1;
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

  if ( (byte_4A49A9B & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A9B = 1;
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
    if ( !byte_4A49AFE )
    {
      sub_1B863B8(&MyRoomParamsManager_TypeInfo, v3);
      byte_4A49AFE = 1;
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
    if ( !byte_4A49AFE )
    {
      sub_1B863B8(&MyRoomParamsManager_TypeInfo, v3);
      byte_4A49AFE = 1;
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
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_String_o *String; // x19
  MyRoomParamsManager_c *v26; // x0
  struct MyRoomParamsManager_StaticFields *v27; // x0
  __int64 v28; // x1
  int32_t v29; // w19
  MyRoomParamsManager_c *v30; // x0
  struct MyRoomParamsManager_StaticFields *v31; // x8
  Il2CppObject *v32; // x19
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  MyRoomParamsManager_c *v36; // x8
  Il2CppObject *v37; // x19
  struct MyRoomParamsManager_StaticFields *v38; // x0
  MyRoomParamsManager_c *v39; // x0
  __int64 v40; // x1
  int32_t v41; // w19
  MyRoomParamsManager_c *v42; // x0
  struct MyRoomParamsManager_StaticFields *v43; // x8
  int32_t v44; // w9

  if ( (byte_4A49A97 & 1) == 0 )
  {
    sub_1B863B8(&Method_JsonManager_Deserialize_List_int____, v1);
    sub_1B863B8(&JsonManager_TypeInfo, v2);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A49A97 = 1;
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
  if ( !byte_4A49AF8 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v6);
    byte_4A49AF8 = 1;
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
  if ( !byte_4A49AF9 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v12);
    byte_4A49AF9 = 1;
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
  if ( !byte_4A49AFA )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v18);
    byte_4A49AFA = 1;
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
  if ( !byte_4A49AFB )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v22);
    byte_4A49AFB = 1;
  }
  v26 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v26 = MyRoomParamsManager_TypeInfo;
  }
  v27 = v26->static_fields;
  v27->_LastPlayTitle_k__BackingField = String;
  sub_1B8635C((CGThumbnailListItem_o *)&v27->_LastPlayTitle_k__BackingField, (int32_t)String, v23, v24);
  v29 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4A49AFC )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v28);
    byte_4A49AFC = 1;
  }
  v30 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  v31 = v30->static_fields;
  v31->_LastSelectSubFolderId_k__BackingField = v29;
  v32 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v31->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v32, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v33 = JsonManager__Deserialize_object_(v32, (const MethodInfo_2FD86EC *)Method_JsonManager_Deserialize_List_int____);
    v36 = MyRoomParamsManager_TypeInfo;
    v37 = v33;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v36 = MyRoomParamsManager_TypeInfo;
    }
    v38 = v36->static_fields;
    v38->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v37;
    sub_1B8635C((CGThumbnailListItem_o *)&v38->DummyFolderHistory, (int32_t)v37, v34, v35);
  }
  v39 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v39 = MyRoomParamsManager_TypeInfo;
  }
  v41 = UnityEngine_PlayerPrefs__GetInt(
          v39->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v39->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4A49AFD )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v40);
    byte_4A49AFD = 1;
  }
  v42 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v42 = MyRoomParamsManager_TypeInfo;
  }
  v43 = v42->static_fields;
  v44 = v43->LAST_PLAY_ID_DEFAULT_VALUE;
  v43->_LastPlayMovedQuestId_k__BackingField = v41;
  v43->temporaryLastSelectSubFolderId = v44;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A49A9C & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A9C = 1;
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


void __fastcall MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(int32_t questId, const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  WarEntity_o **v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  int32_t Int; // w21
  int32_t MasterName_k__BackingField_high; // w22
  System_Func_object__bool__o *v27; // x24
  Il2CppObject *v28; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A49A9D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyRoomAddMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_SpotMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    sub_1B863B8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__getEntityList__, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___, v12);
    sub_1B863B8(&System_Func_MyRoomAddEntity__bool__TypeInfo, v13);
    sub_1B863B8(&MyRoomControl_TypeInfo, v14);
    sub_1B863B8(&Method_MyRoomParamsManager___c__DisplayClass56_0__SetClearQuestWarEnableMyRoomBgChange_b__0__, v15);
    sub_1B863B8(&MyRoomParamsManager___c__DisplayClass56_0_TypeInfo, v16);
    sub_1B863B8(&StringLiteral_5264/*"DisplayMyRoomBgWar"*/, v17);
    sub_1B863B8(&StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, v18);
    byte_4A49A9D = 1;
  }
  entity = 0LL;
  v28 = 0LL;
  v19 = sub_1B86604(MyRoomParamsManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_38;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          questId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity )
    goto LABEL_38;
  v22 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
  if ( !v22 )
    goto LABEL_38;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v22,
          &v28,
          (int32_t)Master_object,
          (const MethodInfo_32142CC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v19 || !v28 || !Master_object )
    goto LABEL_38;
  v23 = (WarEntity_o **)(v19 + 16);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          (Il2CppObject **)(v19 + 16),
          HIDWORD(v28[1].klass),
          (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    goto LABEL_38;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Master_object->fields.list,
                                                               (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5264/*"DisplayMyRoomBgWar"*/, 0, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetInt(
                                                                  (System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/,
                                                                  -1,
                                                                  0LL);
  if ( !*v23 )
    goto LABEL_38;
  MasterName_k__BackingField_high = (int)Master_object;
  if ( WarEntity__HasFlag(*v23, 128, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_38;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL);
    if ( (_DWORD)Master_object == 2 )
      goto LABEL_41;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_38;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0LL);
    if ( (_DWORD)Master_object == 32 )
    {
LABEL_41:
      if ( *v23 )
      {
        Int = (*v23)->fields.id;
        MasterName_k__BackingField_high = 0;
        goto LABEL_34;
      }
LABEL_38:
      sub_1B86614(Master_object, v21);
    }
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v23;
  if ( !*v23 )
    goto LABEL_38;
  if ( !WarEntity__HasFlag((WarEntity_o *)Master_object, 128, 0LL) )
  {
    v27 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v19,
      Method_MyRoomParamsManager___c__DisplayClass56_0__SetClearQuestWarEnableMyRoomBgChange_b__0__,
      0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Linq_Enumerable__FirstOrDefault_object__49893388(
                                                                    v24,
                                                                    (System_Func_TSource__bool__o *)v27,
                                                                    (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    if ( Master_object )
    {
      if ( *v23 )
      {
        MasterName_k__BackingField_high = HIDWORD(Master_object->fields._MasterName_k__BackingField);
        Int = (*v23)->fields.id;
        goto LABEL_34;
      }
      goto LABEL_38;
    }
  }
LABEL_34:
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__ClearBackGroundData(0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5264/*"DisplayMyRoomBgWar"*/, Int, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, MasterName_k__BackingField_high, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A49A9A & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A9A = 1;
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

  if ( (byte_4A49A90 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A90 = 1;
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

  if ( (byte_4A49A8A & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A8A = 1;
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

  if ( (byte_4A49A92 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A92 = 1;
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

  if ( (byte_4A49A86 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A86 = 1;
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

  if ( (byte_4A49A8C & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A8C = 1;
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

  if ( (byte_4A49A88 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A88 = 1;
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

  if ( (byte_4A49A8E & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v1);
    byte_4A49A8E = 1;
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

  if ( (byte_4A49A91 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A91 = 1;
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

  if ( (byte_4A49A8B & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A8B = 1;
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

  if ( (byte_4A49A93 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A93 = 1;
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

  if ( (byte_4A49A87 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A87 = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomParamsManager_c *v5; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4A49A8D & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A8D = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->_LastPlayTitle_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4A49A89 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A89 = 1;
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

  if ( (byte_4A49A8F & 1) == 0 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, method);
    byte_4A49A8F = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager___c__DisplayClass56_0___ctor(
        MyRoomParamsManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomParamsManager___c__DisplayClass56_0___SetClearQuestWarEnableMyRoomBgChange_b__0(
        MyRoomParamsManager___c__DisplayClass56_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !entity || (warEntity = this->fields.warEntity) == 0LL )
    sub_1B86614(this, entity);
  return entity->fields.warId == warEntity->fields.id;
}