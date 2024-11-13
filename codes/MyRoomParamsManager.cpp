void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
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
  __int64 v22; // x1
  __int64 v23; // x2
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v25; // x19
  struct MyRoomParamsManager_StaticFields *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_int__o *v30; // x19
  struct MyRoomParamsManager_StaticFields *v31; // x0
  struct MyRoomParamsManager_StaticFields *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  struct MyRoomParamsManager_StaticFields *v35; // x0
  __int64 v36; // x1
  struct MyRoomParamsManager_StaticFields *v37; // x0
  __int64 v38; // x1
  struct MyRoomParamsManager_StaticFields *v39; // x0
  __int64 v40; // x1
  struct MyRoomParamsManager_StaticFields *v41; // x0
  __int64 v42; // x1
  struct MyRoomParamsManager_StaticFields *v43; // x0
  __int64 v44; // x1
  struct MyRoomParamsManager_StaticFields *v45; // x0
  struct MyRoomParamsManager_StaticFields *v46; // x0
  __int64 v47; // x1

  if ( (byte_4B11A65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v4, v5);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_8140/*"IsListActive"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8461/*"LastPlayedEventId"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8463/*"LastPlayedTitle"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8462/*"LastPlayedQuestId"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5488/*"DummyFolderHistory"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_8467/*"LastSelectSubFolderId"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8460/*"LastPlayMovedQuestId"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8464/*"LastPlayedWarId"*/, v22, v23);
    byte_4B11A65 = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(System_Collections_Generic_List_int__TypeInfo, v1, v2, v3);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v26 = MyRoomParamsManager_TypeInfo->static_fields;
  v26->DummyFolderHistory = v25;
  sub_1BCA784(&v26->DummyFolderHistory, v25);
  v30 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = MyRoomParamsManager_TypeInfo->static_fields;
  v31->TmpDummyFolderHistory = v30;
  sub_1BCA784(&v31->TmpDummyFolderHistory, v30);
  v32 = MyRoomParamsManager_TypeInfo->static_fields;
  v32->temporaryLastSelectSubFolderId = 0;
  v33 = StringLiteral_8462/*"LastPlayedQuestId"*/;
  v32->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8462/*"LastPlayedQuestId"*/;
  sub_1BCA784(&v32->SAVE_KEY_LAST_PLAY_QUEST_ID, v33);
  v34 = StringLiteral_8464/*"LastPlayedWarId"*/;
  v35 = MyRoomParamsManager_TypeInfo->static_fields;
  v35->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8464/*"LastPlayedWarId"*/;
  sub_1BCA784(&v35->SAVE_KEY_LAST_PLAY_WAR_ID, v34);
  v36 = StringLiteral_8461/*"LastPlayedEventId"*/;
  v37 = MyRoomParamsManager_TypeInfo->static_fields;
  v37->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8461/*"LastPlayedEventId"*/;
  sub_1BCA784(&v37->SAVE_KEY_LAST_PLAY_EVENT_ID, v36);
  v38 = StringLiteral_8463/*"LastPlayedTitle"*/;
  v39 = MyRoomParamsManager_TypeInfo->static_fields;
  v39->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8463/*"LastPlayedTitle"*/;
  sub_1BCA784(&v39->SAVE_KEY_LAST_PLAY_TITLE, v38);
  v40 = StringLiteral_8467/*"LastSelectSubFolderId"*/;
  v41 = MyRoomParamsManager_TypeInfo->static_fields;
  v41->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8467/*"LastSelectSubFolderId"*/;
  sub_1BCA784(&v41->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v40);
  v42 = StringLiteral_8140/*"IsListActive"*/;
  v43 = MyRoomParamsManager_TypeInfo->static_fields;
  v43->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8140/*"IsListActive"*/;
  sub_1BCA784(&v43->SAVE_KEY_IS_LIST_ACTIVE, v42);
  v44 = StringLiteral_5488/*"DummyFolderHistory"*/;
  v45 = MyRoomParamsManager_TypeInfo->static_fields;
  v45->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5488/*"DummyFolderHistory"*/;
  sub_1BCA784(&v45->SAVE_KEY_DUMMY_FOLDER_HISTORY, v44);
  v46 = MyRoomParamsManager_TypeInfo->static_fields;
  v47 = StringLiteral_8460/*"LastPlayMovedQuestId"*/;
  v46->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8460/*"LastPlayMovedQuestId"*/;
  sub_1BCA784(&v46->SAVE_KEY_LAST_MOVED_QUEST_ID, v47);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MyRoomParamsManager_c *v7; // x0
  const MethodInfo *v8; // x0

  if ( (byte_4B11A5C & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_10750/*"PhotoCampaignSelectedUsrSvtId"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_10748/*"PhotoCampaignSelectImageLimit"*/, v5, v6);
    byte_4B11A5C = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v7->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(
    MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10748/*"PhotoCampaignSelectImageLimit"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10750/*"PhotoCampaignSelectedUsrSvtId"*/, 0LL);
  MyRoomParamsManager__InitParameter(v8);
}


void __fastcall MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MyRoomParamsManager_c *v7; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int32_t v10; // w20
  struct MyRoomParamsManager_StaticFields *v11; // x8
  int32_t v12; // w20
  struct System_String_o *v13; // x20
  struct MyRoomParamsManager_StaticFields *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  MyRoomParamsManager_c *v17; // x0
  int32_t v18; // w20
  struct MyRoomParamsManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v21; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v23; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_4B11A5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v1, v2);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B11A5D = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4B11ABC )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABC = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v10 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4B11ABD )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABD = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v11 = v7->static_fields;
  v11->_LastPlayWarId_k__BackingField = v10;
  v12 = v11->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4B11ABE )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABE = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayEventId_k__BackingField = v12;
  v13 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B11ABF )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABF = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v7->static_fields;
  v14->_LastPlayTitle_k__BackingField = v13;
  sub_1BCA784(&v14->_LastPlayTitle_k__BackingField, v13);
  v17 = MyRoomParamsManager_TypeInfo;
  v18 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4B11AC0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4B11AC0 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v19 = v17->static_fields;
  DummyFolderHistory = v19->DummyFolderHistory;
  v19->_LastSelectSubFolderId_k__BackingField = v18;
  if ( !DummyFolderHistory
    || (v21 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v21,
        (TmpDummyFolderHistory = v19->TmpDummyFolderHistory) == 0LL) )
  {
    sub_1BCAA3C(v17, v15);
  }
  v23 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v23;
  DUMMY_PLAY_DEFAULT_VALUE = v19->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4B11AC1 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4B11AC1 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v17->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4B11AC2 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4B11AC2 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v17->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A5E & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A5E = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->temporaryLastSelectSubFolderId = v3->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomParamsManager__LastDummyPlaySaveData(
        System_Collections_Generic_IEnumerable_int__o *history,
        int32_t questId,
        bool isSave,
        const MethodInfo *method)
{
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
  MyRoomParamsManager_c *v17; // x0
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  int v19; // w8
  MyRoomParamsManager_c *v20; // x0
  MyRoomParamsManager_c *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Collections_Generic_List_int__o *v23; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  struct MyRoomParamsManager_StaticFields *v25; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  MyRoomParamsManager_c *v30; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v32; // x5

  if ( (byte_4B11A61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId, isSave);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B11A61 = 1;
  }
  if ( history )
  {
    v17 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      v17 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v17->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_26;
    v19 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v19;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
    if ( !byte_4B11AC1 )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId, isSave);
      byte_4B11AC1 = 1;
    }
    v20 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      v20 = MyRoomParamsManager_TypeInfo;
    }
    v20->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v21 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      v21 = MyRoomParamsManager_TypeInfo;
    }
    v22 = (System_Collections_Generic_IEnumerable_T__o *)v21->static_fields->TmpDummyFolderHistory;
    v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      isSave,
                                                      method);
    System_Collections_Generic_List_int____ctor_56116492(
      v23,
      v22,
      (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v23;
    sub_1BCA784(&static_fields->DummyFolderHistory, v23);
    v25 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v25->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v25->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v27 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))TmpDummyFolderHistory->klass->vtable._3_ToString.method)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v27, 0LL);
      v30 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_4B11852 )
      {
        sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v28, v29);
        v30 = MyRoomParamsManager_TypeInfo;
        byte_4B11852 = 1;
      }
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30, v28);
        v30 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v30->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v32);
      return;
    }
LABEL_26:
    sub_1BCAA3C(TmpDummyFolderHistory, *(_QWORD *)&questId);
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
  __int64 v12; // x2
  MyRoomParamsManager_c *v13; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  MyRoomParamsManager_c *v17; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x9
  int v21; // w10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v23; // w10
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v25; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  MyRoomParamsManager_c *v30; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  MyRoomParamsManager_c *v35; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  MyRoomParamsManager_c *v39; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  MyRoomParamsManager_c *v43; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  MyRoomParamsManager_c *v47; // x0
  System_String_o *v48; // x20
  struct MyRoomParamsManager_StaticFields *v49; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v51; // x0

  if ( (byte_4B11A60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v11, v12);
    byte_4B11A60 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
  if ( !byte_4B11ABD )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    byte_4B11ABD = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4B11ABC )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABC = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4B11ABE )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABE = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4B11ABF )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4B11ABF = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1BCA784(&static_fields->_LastPlayTitle_k__BackingField, title);
  v17 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_4B11AC0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4B11AC0 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      v17 = MyRoomParamsManager_TypeInfo;
      v19 = MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = v19->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_64;
    v21 = DummyFolderHistory->fields._version + 1;
    DummyFolderHistory->fields._size = 0;
    DummyFolderHistory->fields._version = v21;
    TmpDummyFolderHistory = v19->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_64;
    v23 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v23;
    DUMMY_PLAY_DEFAULT_VALUE = v19->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4B11AC1 )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
      v17 = MyRoomParamsManager_TypeInfo;
      byte_4B11AC1 = 1;
    }
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      v17 = MyRoomParamsManager_TypeInfo;
    }
    v25 = v17->static_fields;
    v17 = (MyRoomParamsManager_c *)v25->DummyFolderHistory;
    v25->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    if ( !v17 )
LABEL_64:
      sub_1BCAA3C(v17, v15);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v25->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v27 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v17->_1.image + 45))(
                               v17,
                               *((_QWORD *)v17->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v27, 0LL);
    v30 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4B11852 )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v28, v29);
      v30 = MyRoomParamsManager_TypeInfo;
      byte_4B11852 = 1;
    }
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v28);
      v30 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v30->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v17->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4B1175E )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v15, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4B1175E = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v15);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_QUEST_ID,
    v17->static_fields->_LastPlayQuestId_k__BackingField,
    0LL);
  v35 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4B1175F )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v33, v34);
    v35 = MyRoomParamsManager_TypeInfo;
    byte_4B1175F = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35, v33);
    v35 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v35->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v39 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4B11853 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v37, v38);
    v39 = MyRoomParamsManager_TypeInfo;
    byte_4B11853 = 1;
  }
  if ( !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39, v37);
    v39 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_EVENT_ID,
    v39->static_fields->_LastPlayEventId_k__BackingField,
    0LL);
  v43 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4B11760 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v41, v42);
    v43 = MyRoomParamsManager_TypeInfo;
    byte_4B11760 = 1;
  }
  if ( !v43->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v43, v41);
    v43 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v43->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v47 = MyRoomParamsManager_TypeInfo;
  v48 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4B11761 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v45, v46);
    v47 = MyRoomParamsManager_TypeInfo;
    byte_4B11761 = 1;
  }
  if ( !v47->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v47, v45);
    v47 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v48, v47->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v49 = MyRoomParamsManager_TypeInfo->static_fields;
  v17 = (MyRoomParamsManager_c *)v49->DummyFolderHistory;
  if ( !v17 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v49->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v51 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v17->_1.image + 45))(
                             v17,
                             *((_QWORD *)v17->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v51, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t Int; // w19
  MyRoomParamsManager_c *v7; // x0
  char v8; // w8

  if ( (byte_4B11A63 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A63 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v4);
  if ( Int == 1 )
  {
    if ( !byte_4B11AC2 )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v4, v5);
      byte_4B11AC2 = 1;
    }
    v7 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v4);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    v8 = 1;
  }
  else
  {
    if ( !byte_4B11AC2 )
    {
      sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v4, v5);
      byte_4B11AC2 = 1;
    }
    v7 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v4);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    v8 = 0;
  }
  v7->static_fields->_IsListActive_k__BackingField = v8;
}


void __fastcall MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  MyRoomParamsManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t Int; // w19
  MyRoomParamsManager_c *v13; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w1
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w19
  MyRoomParamsManager_c *v20; // x0
  struct MyRoomParamsManager_StaticFields *v21; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x0
  int32_t v23; // w1
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w19
  MyRoomParamsManager_c *v27; // x0
  struct MyRoomParamsManager_StaticFields *v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  System_String_o *String; // x19
  MyRoomParamsManager_c *v32; // x0
  struct MyRoomParamsManager_StaticFields *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t v36; // w19
  MyRoomParamsManager_c *v37; // x0
  struct MyRoomParamsManager_StaticFields *v38; // x8
  Il2CppObject *v39; // x19
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  MyRoomParamsManager_c *v43; // x8
  Il2CppObject *v44; // x19
  struct MyRoomParamsManager_StaticFields *v45; // x0
  MyRoomParamsManager_c *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t v49; // w19
  MyRoomParamsManager_c *v50; // x0
  struct MyRoomParamsManager_StaticFields *v51; // x8
  int32_t v52; // w9

  if ( (byte_4B11A5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_Deserialize_List_int____, v1, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B11A5F = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v9->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v9->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4B11ABC )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v10, v11);
    byte_4B11ABC = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v10);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  SAVE_KEY_LAST_PLAY_WAR_ID = static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  LAST_PLAY_ID_DEFAULT_VALUE = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  static_fields->_LastPlayQuestId_k__BackingField = Int;
  v19 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_WAR_ID, LAST_PLAY_ID_DEFAULT_VALUE, 0LL);
  if ( !byte_4B11ABD )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v17, v18);
    byte_4B11ABD = 1;
  }
  v20 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v17);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  v21 = v20->static_fields;
  SAVE_KEY_LAST_PLAY_EVENT_ID = v21->SAVE_KEY_LAST_PLAY_EVENT_ID;
  v23 = v21->LAST_PLAY_ID_DEFAULT_VALUE;
  v21->_LastPlayWarId_k__BackingField = v19;
  v26 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v23, 0LL);
  if ( !byte_4B11ABE )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v24, v25);
    byte_4B11ABE = 1;
  }
  v27 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v24);
    v27 = MyRoomParamsManager_TypeInfo;
  }
  v28 = v27->static_fields;
  v28->_LastPlayEventId_k__BackingField = v26;
  String = UnityEngine_PlayerPrefs__GetString(v28->SAVE_KEY_LAST_PLAY_TITLE, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !byte_4B11ABF )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v29, v30);
    byte_4B11ABF = 1;
  }
  v32 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v29);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  v33 = v32->static_fields;
  v33->_LastPlayTitle_k__BackingField = String;
  sub_1BCA784(&v33->_LastPlayTitle_k__BackingField, String);
  v36 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0LL);
  if ( !byte_4B11AC0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v34, v35);
    byte_4B11AC0 = 1;
  }
  v37 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v34);
    v37 = MyRoomParamsManager_TypeInfo;
  }
  v38 = v37->static_fields;
  v38->_LastSelectSubFolderId_k__BackingField = v36;
  v39 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                          v38->SAVE_KEY_DUMMY_FOLDER_HISTORY,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v39, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v40);
    v41 = JsonManager__Deserialize_object_(v39, (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_List_int____);
    v43 = MyRoomParamsManager_TypeInfo;
    v44 = v41;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v42);
      v43 = MyRoomParamsManager_TypeInfo;
    }
    v45 = v43->static_fields;
    v45->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v44;
    sub_1BCA784(&v45->DummyFolderHistory, v44);
  }
  v46 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v40);
    v46 = MyRoomParamsManager_TypeInfo;
  }
  v49 = UnityEngine_PlayerPrefs__GetInt(
          v46->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v46->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0LL);
  if ( !byte_4B11AC1 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v47, v48);
    byte_4B11AC1 = 1;
  }
  v50 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v47);
    v50 = MyRoomParamsManager_TypeInfo;
  }
  v51 = v50->static_fields;
  v52 = v51->LAST_PLAY_ID_DEFAULT_VALUE;
  v51->_LastPlayMovedQuestId_k__BackingField = v49;
  v51->temporaryLastSelectSubFolderId = v52;
}


void __fastcall MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A64 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A64 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_IS_LIST_ACTIVE, value, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A62 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A62 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->temporaryLastSelectSubFolderId = questId;
}


bool __fastcall MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A58 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A58 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_IsListActive_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A52 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A52 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A5A & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A5A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A4E & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A4E = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *__fastcall MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A54 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A54 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A50 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A50 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t __fastcall MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4B11A56 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, v1, v2);
    byte_4B11A56 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastSelectSubFolderId_k__BackingField;
}


void __fastcall MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A59 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A59 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_IsListActive_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A53 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A53 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayEventId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayMovedQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A5B & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A5B = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayMovedQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A4F & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A4F = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayQuestId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastPlayTitle(System_String_o *value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_4B11A55 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A55 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1BCA784(&static_fields->_LastPlayTitle_k__BackingField, value);
}


void __fastcall MyRoomParamsManager__set_LastPlayWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A51 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A51 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayWarId_k__BackingField = value;
}


void __fastcall MyRoomParamsManager__set_LastSelectSubFolderId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_4B11A57 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomParamsManager_TypeInfo, method, v2);
    byte_4B11A57 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}