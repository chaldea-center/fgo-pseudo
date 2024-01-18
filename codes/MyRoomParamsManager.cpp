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
  System_Collections_Generic_List_int__o *v12; // x19
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x19
  struct MyRoomParamsManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  MyRoomParamsManager_c *v28; // x8
  struct MyRoomParamsManager_StaticFields *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct MyRoomParamsManager_StaticFields *v37; // x0
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct MyRoomParamsManager_StaticFields *v45; // x0
  System_Int32_array **v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct MyRoomParamsManager_StaticFields *v53; // x0
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct MyRoomParamsManager_StaticFields *v61; // x0
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct MyRoomParamsManager_StaticFields *v69; // x0
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct MyRoomParamsManager_StaticFields *v77; // x0
  System_Int32_array **v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct MyRoomParamsManager_StaticFields *v85; // x0
  System_Int32_array **v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7

  if ( (byte_41874CB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v2);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_8165/*"IsListActive"*/, v4);
    sub_B2C35C(&StringLiteral_8477/*"LastPlayedEventId"*/, v5);
    sub_B2C35C(&StringLiteral_8479/*"LastPlayedTitle"*/, v6);
    sub_B2C35C(&StringLiteral_8478/*"LastPlayedQuestId"*/, v7);
    sub_B2C35C(&StringLiteral_5410/*"DummyFolderHistory"*/, v8);
    sub_B2C35C(&StringLiteral_8482/*"LastSelectSubFolderId"*/, v9);
    sub_B2C35C(&StringLiteral_8476/*"LastPlayMovedQuestId"*/, v10);
    sub_B2C35C(&StringLiteral_8480/*"LastPlayedWarId"*/, v11);
    byte_41874CB = 1;
  }
  MyRoomParamsManager_TypeInfo->static_fields->SETTING_PROLOG_PART1 = 11000;
  MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE = -1;
  MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  static_fields->DummyFolderHistory = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = MyRoomParamsManager_TypeInfo->static_fields;
  v21->TmpDummyFolderHistory = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v21->TmpDummyFolderHistory,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = MyRoomParamsManager_TypeInfo;
  MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId = 0;
  v29 = v28->static_fields;
  v30 = (System_Int32_array **)StringLiteral_8478/*"LastPlayedQuestId"*/;
  v29->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8478/*"LastPlayedQuestId"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v29->SAVE_KEY_LAST_PLAY_QUEST_ID, v30, v31, v32, v33, v34, v35, v36);
  v37 = MyRoomParamsManager_TypeInfo->static_fields;
  v38 = (System_Int32_array **)StringLiteral_8480/*"LastPlayedWarId"*/;
  v37->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8480/*"LastPlayedWarId"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v37->SAVE_KEY_LAST_PLAY_WAR_ID, v38, v39, v40, v41, v42, v43, v44);
  v45 = MyRoomParamsManager_TypeInfo->static_fields;
  v46 = (System_Int32_array **)StringLiteral_8477/*"LastPlayedEventId"*/;
  v45->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8477/*"LastPlayedEventId"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v45->SAVE_KEY_LAST_PLAY_EVENT_ID, v46, v47, v48, v49, v50, v51, v52);
  v53 = MyRoomParamsManager_TypeInfo->static_fields;
  v54 = (System_Int32_array **)StringLiteral_8479/*"LastPlayedTitle"*/;
  v53->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8479/*"LastPlayedTitle"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v53->SAVE_KEY_LAST_PLAY_TITLE, v54, v55, v56, v57, v58, v59, v60);
  v61 = MyRoomParamsManager_TypeInfo->static_fields;
  v62 = (System_Int32_array **)StringLiteral_8482/*"LastSelectSubFolderId"*/;
  v61->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8482/*"LastSelectSubFolderId"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v61->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = MyRoomParamsManager_TypeInfo->static_fields;
  v70 = (System_Int32_array **)StringLiteral_8165/*"IsListActive"*/;
  v69->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8165/*"IsListActive"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v69->SAVE_KEY_IS_LIST_ACTIVE, v70, v71, v72, v73, v74, v75, v76);
  v77 = MyRoomParamsManager_TypeInfo->static_fields;
  v78 = (System_Int32_array **)StringLiteral_5410/*"DummyFolderHistory"*/;
  v77->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5410/*"DummyFolderHistory"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v77->SAVE_KEY_DUMMY_FOLDER_HISTORY, v78, v79, v80, v81, v82, v83, v84);
  v85 = MyRoomParamsManager_TypeInfo->static_fields;
  v86 = (System_Int32_array **)StringLiteral_8476/*"LastPlayMovedQuestId"*/;
  v85->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8476/*"LastPlayMovedQuestId"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v85->SAVE_KEY_LAST_MOVED_QUEST_ID, v86, v87, v88, v89, v90, v91, v92);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_41874C2 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874C2 = 1;
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

  if ( (byte_41874C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_41874C3 = 1;
  }
  v10 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_418752B )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_418752B = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v12 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_418752C )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_418752C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayWarId_k__BackingField = v12;
  v13 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_418752D )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_418752D = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayEventId_k__BackingField = v13;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_418752E )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_418752E = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)v14;
  sub_B2C2F8(
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
  if ( !byte_418752F )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_418752F = 1;
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
          (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__),
        (DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory) == 0LL) )
  {
    sub_B2C434(DummyFolderHistory, v16);
  }
  System_Collections_Generic_List_int___Clear(
    DummyFolderHistory,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  v21 = MyRoomParamsManager_TypeInfo;
  DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4187530 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v20);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_4187530 = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v21->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4187531 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v20);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_4187531 = 1;
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

  if ( (byte_41874C4 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874C4 = 1;
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

  if ( (byte_41874C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41874C7 = 1;
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
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    TmpDummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_4187530 )
    {
      sub_B2C35C(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      byte_4187530 = 1;
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
    v17 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v17,
      v16,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v17;
    sub_B2C2F8(
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
      if ( !byte_4187532 )
      {
        sub_B2C35C(&MyRoomParamsManager_TypeInfo, v28);
        v29 = MyRoomParamsManager_TypeInfo;
        byte_4187532 = 1;
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
    sub_B2C434(TmpDummyFolderHistory, *(_QWORD *)&questId);
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
  MyRoomParamsManager_c *v21; // x0
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

  if ( (byte_41874C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v13);
    byte_41874C6 = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_418752C )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    byte_418752C = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_418752B )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_418752B = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_418752D )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_418752D = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_418752E )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_418752E = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_B2C2F8(
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
  if ( !byte_418752F )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_418752F = 1;
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
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    DummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      DummyFolderHistory,
      (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    v21 = MyRoomParamsManager_TypeInfo;
    DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_4187530 )
    {
      sub_B2C35C(&MyRoomParamsManager_TypeInfo, v16);
      v21 = MyRoomParamsManager_TypeInfo;
      byte_4187530 = 1;
    }
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = MyRoomParamsManager_TypeInfo;
    }
    v21->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    v23 = v21->static_fields;
    DummyFolderHistory = v23->DummyFolderHistory;
    if ( !DummyFolderHistory )
LABEL_79:
      sub_B2C434(DummyFolderHistory, v16);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v23->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v25 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                               DummyFolderHistory,
                               DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v25, 0LL);
    v27 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4187532 )
    {
      sub_B2C35C(&MyRoomParamsManager_TypeInfo, v26);
      v27 = MyRoomParamsManager_TypeInfo;
      byte_4187532 = 1;
    }
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v27->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v17->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_4187533 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_4187533 = 1;
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
  v31 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4185D96 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v30);
    v31 = MyRoomParamsManager_TypeInfo;
    byte_4185D96 = 1;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v31->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4187534 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v33);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4187534 = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
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
  if ( !byte_4187535 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v36);
    v37 = MyRoomParamsManager_TypeInfo;
    byte_4187535 = 1;
  }
  if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v37->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v40 = MyRoomParamsManager_TypeInfo;
  v41 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4187536 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v39);
    v40 = MyRoomParamsManager_TypeInfo;
    byte_4187536 = 1;
  }
  if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v40);
    v40 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v41, v40->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v42 = MyRoomParamsManager_TypeInfo->static_fields;
  DummyFolderHistory = v42->DummyFolderHistory;
  if ( !DummyFolderHistory )
    goto LABEL_79;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v42->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v44 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                             DummyFolderHistory,
                             DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v44, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  char v5; // w8

  if ( (byte_41874C9 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874C9 = 1;
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
    if ( !byte_4187531 )
    {
      sub_B2C35C(&MyRoomParamsManager_TypeInfo, v3);
      byte_4187531 = 1;
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
    if ( !byte_4187531 )
    {
      sub_B2C35C(&MyRoomParamsManager_TypeInfo, v3);
      byte_4187531 = 1;
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

  if ( (byte_41874C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_List_int____, v1);
    sub_B2C35C(&JsonManager_TypeInfo, v2);
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_41874C5 = 1;
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
  if ( !byte_418752B )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v6);
    byte_418752B = 1;
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
  if ( !byte_418752C )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v9);
    byte_418752C = 1;
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
  if ( !byte_418752D )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v12);
    byte_418752D = 1;
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
  if ( !byte_418752E )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v15);
    byte_418752E = 1;
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
  sub_B2C2F8(
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
  if ( !byte_418752F )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v25);
    byte_418752F = 1;
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
            (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_List_int____);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&v38->DummyFolderHistory, v37, v30, v31, v32, v33, v34, v35);
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
  if ( !byte_4187530 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v40);
    byte_4187530 = 1;
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

  if ( (byte_41874CA & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874CA = 1;
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

  if ( (byte_41874C8 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874C8 = 1;
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

  if ( (byte_41874BE & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874BE = 1;
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

  if ( (byte_41874B8 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874B8 = 1;
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

  if ( (byte_41874C0 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874C0 = 1;
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

  if ( (byte_41874B4 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874B4 = 1;
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

  if ( (byte_41874BA & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874BA = 1;
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

  if ( (byte_41874B6 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874B6 = 1;
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

  if ( (byte_41874BC & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, v1);
    byte_41874BC = 1;
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

  if ( (byte_41874BF & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874BF = 1;
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

  if ( (byte_41874B9 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874B9 = 1;
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

  if ( (byte_41874C1 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874C1 = 1;
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

  if ( (byte_41874B5 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874B5 = 1;
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

  if ( (byte_41874BB & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874BB = 1;
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
  sub_B2C2F8(
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

  if ( (byte_41874B7 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874B7 = 1;
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

  if ( (byte_41874BD & 1) == 0 )
  {
    sub_B2C35C(&MyRoomParamsManager_TypeInfo, method);
    byte_41874BD = 1;
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