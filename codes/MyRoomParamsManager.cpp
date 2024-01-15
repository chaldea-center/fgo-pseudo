void __fastcall MyRoomParamsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_int__o *v15; // x19
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_int__o *v27; // x19
  struct MyRoomParamsManager_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  MyRoomParamsManager_c *v35; // x8
  struct MyRoomParamsManager_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct MyRoomParamsManager_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct MyRoomParamsManager_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct MyRoomParamsManager_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct MyRoomParamsManager_StaticFields *v68; // x0
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct MyRoomParamsManager_StaticFields *v76; // x0
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct MyRoomParamsManager_StaticFields *v84; // x0
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct MyRoomParamsManager_StaticFields *v92; // x0
  System_Int32_array **v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7

  if ( (byte_40F9B2F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8136/*"IsListActive"*/, v7);
    sub_B16FFC(&StringLiteral_8448/*"LastPlayedEventId"*/, v8);
    sub_B16FFC(&StringLiteral_8450/*"LastPlayedTitle"*/, v9);
    sub_B16FFC(&StringLiteral_8449/*"LastPlayedQuestId"*/, v10);
    sub_B16FFC(&StringLiteral_5391/*"DummyFolderHistory"*/, v11);
    sub_B16FFC(&StringLiteral_8453/*"LastSelectSubFolderId"*/, v12);
    sub_B16FFC(&StringLiteral_8447/*"LastPlayMovedQuestId"*/, v13);
    sub_B16FFC(&StringLiteral_8451/*"LastPlayedWarId"*/, v14);
    byte_40F9B2F = 1;
  }
  MyRoomParamsManager_TypeInfo->static_fields->SETTING_PROLOG_PART1 = 11000;
  MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE = -1;
  MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v1,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  static_fields->DummyFolderHistory = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v27 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v28 = MyRoomParamsManager_TypeInfo->static_fields;
  v28->TmpDummyFolderHistory = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v28->TmpDummyFolderHistory,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = MyRoomParamsManager_TypeInfo;
  MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId = 0;
  v36 = v35->static_fields;
  v37 = (System_Int32_array **)StringLiteral_8449/*"LastPlayedQuestId"*/;
  v36->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8449/*"LastPlayedQuestId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v36->SAVE_KEY_LAST_PLAY_QUEST_ID, v37, v38, v39, v40, v41, v42, v43);
  v44 = MyRoomParamsManager_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_8451/*"LastPlayedWarId"*/;
  v44->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8451/*"LastPlayedWarId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v44->SAVE_KEY_LAST_PLAY_WAR_ID, v45, v46, v47, v48, v49, v50, v51);
  v52 = MyRoomParamsManager_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_8448/*"LastPlayedEventId"*/;
  v52->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8448/*"LastPlayedEventId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v52->SAVE_KEY_LAST_PLAY_EVENT_ID, v53, v54, v55, v56, v57, v58, v59);
  v60 = MyRoomParamsManager_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_8450/*"LastPlayedTitle"*/;
  v60->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8450/*"LastPlayedTitle"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v60->SAVE_KEY_LAST_PLAY_TITLE, v61, v62, v63, v64, v65, v66, v67);
  v68 = MyRoomParamsManager_TypeInfo->static_fields;
  v69 = (System_Int32_array **)StringLiteral_8453/*"LastSelectSubFolderId"*/;
  v68->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8453/*"LastSelectSubFolderId"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v68->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = MyRoomParamsManager_TypeInfo->static_fields;
  v77 = (System_Int32_array **)StringLiteral_8136/*"IsListActive"*/;
  v76->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8136/*"IsListActive"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v76->SAVE_KEY_IS_LIST_ACTIVE, v77, v78, v79, v80, v81, v82, v83);
  v84 = MyRoomParamsManager_TypeInfo->static_fields;
  v85 = (System_Int32_array **)StringLiteral_5391/*"DummyFolderHistory"*/;
  v84->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5391/*"DummyFolderHistory"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v84->SAVE_KEY_DUMMY_FOLDER_HISTORY, v85, v86, v87, v88, v89, v90, v91);
  v92 = MyRoomParamsManager_TypeInfo->static_fields;
  v93 = (System_Int32_array **)StringLiteral_8447/*"LastPlayMovedQuestId"*/;
  v92->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8447/*"LastPlayMovedQuestId"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v92->SAVE_KEY_LAST_MOVED_QUEST_ID, v93, v94, v95, v96, v97, v98, v99);
}


void __fastcall MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_40F9B26 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B26 = 1;
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
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  __int64 v21; // x1
  MyRoomParamsManager_c *v22; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20

  if ( (byte_40F9B27 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F9B27 = 1;
  }
  v10 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_40F9B8F )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_40F9B8F = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v12 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_40F9B90 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_40F9B90 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayWarId_k__BackingField = v12;
  v13 = v10->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_40F9B91 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_40F9B91 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayEventId_k__BackingField = v13;
  v14 = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( !byte_40F9B92 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    v10 = MyRoomParamsManager_TypeInfo;
    byte_40F9B92 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = (struct System_String_o *)v14;
  sub_B16F98(
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
  if ( !byte_40F9B93 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_40F9B93 = 1;
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
          (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__),
        (TmpDummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Clear(
    TmpDummyFolderHistory,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  v22 = MyRoomParamsManager_TypeInfo;
  DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_40F9B94 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v21);
    v22 = MyRoomParamsManager_TypeInfo;
    byte_40F9B94 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = MyRoomParamsManager_TypeInfo;
  }
  v22->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_40F9B95 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v21);
    v22 = MyRoomParamsManager_TypeInfo;
    byte_40F9B95 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = MyRoomParamsManager_TypeInfo;
  }
  v22->static_fields->_IsListActive_k__BackingField = 0;
}


void __fastcall MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0

  if ( (byte_40F9B28 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B28 = 1;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  MyRoomParamsManager_c *v13; // x0
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  System_Collections_Generic_List_int__o *v15; // x0
  MyRoomParamsManager_c *v16; // x0
  MyRoomParamsManager_c *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Collections_Generic_List_int__o *v19; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct MyRoomParamsManager_StaticFields *v27; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x0
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v30; // x0
  __int64 v31; // x1
  MyRoomParamsManager_c *v32; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v34; // x5

  if ( (byte_40F9B2B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F9B2B = 1;
  }
  if ( history )
  {
    v13 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v13 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v13->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_32;
    System_Collections_Generic_List_int___Clear(
      TmpDummyFolderHistory,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    v15 = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !v15 )
      goto LABEL_32;
    System_Collections_Generic_List_int___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    }
    if ( !byte_40F9B94 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId);
      byte_40F9B94 = 1;
    }
    v16 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v16 = MyRoomParamsManager_TypeInfo;
    }
    v16->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v17 = MyRoomParamsManager_TypeInfo;
    if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v17 = MyRoomParamsManager_TypeInfo;
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)v17->static_fields->TmpDummyFolderHistory;
    v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      isSave,
                                                      method,
                                                      v4);
    System_Collections_Generic_List_int____ctor_49346956(
      v19,
      v18,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v19;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->DummyFolderHistory,
      (System_Int32_array **)v19,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = MyRoomParamsManager_TypeInfo->static_fields;
    DummyFolderHistory = v27->DummyFolderHistory;
    if ( DummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v27->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v30 = (System_String_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_List_int__o *, Il2CppMethodPointer))DummyFolderHistory->klass->vtable._3_ToString.method)(
                                 DummyFolderHistory,
                                 DummyFolderHistory->klass->vtable._4_unknown.methodPtr);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v30, 0LL);
      v32 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_40F9B96 )
      {
        sub_B16FFC(&MyRoomParamsManager_TypeInfo, v31);
        v32 = MyRoomParamsManager_TypeInfo;
        byte_40F9B96 = 1;
      }
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v32->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v34);
      return;
    }
LABEL_32:
    sub_B170D4();
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
  System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x0
  __int64 v22; // x1
  MyRoomParamsManager_c *v23; // x0
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  struct MyRoomParamsManager_StaticFields *v25; // x8
  struct System_Collections_Generic_List_int__o *v26; // x0
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  MyRoomParamsManager_c *v30; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  __int64 v33; // x1
  MyRoomParamsManager_c *v34; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  __int64 v36; // x1
  MyRoomParamsManager_c *v37; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  __int64 v39; // x1
  MyRoomParamsManager_c *v40; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  __int64 v42; // x1
  MyRoomParamsManager_c *v43; // x0
  System_String_o *v44; // x20
  struct MyRoomParamsManager_StaticFields *v45; // x8
  struct System_Collections_Generic_List_int__o *v46; // x0
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v48; // x0

  if ( (byte_40F9B2A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, *(_QWORD *)&warId);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v13);
    byte_40F9B2A = 1;
  }
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  }
  if ( !byte_40F9B90 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    byte_40F9B90 = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( (BYTE3(MyRoomParamsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_40F9B8F )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_40F9B8F = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_40F9B91 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_40F9B91 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v14->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_40F9B92 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId);
    v14 = MyRoomParamsManager_TypeInfo;
    byte_40F9B92 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_B16F98(
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
  if ( !byte_40F9B93 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_40F9B93 = 1;
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
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    TmpDummyFolderHistory = MyRoomParamsManager_TypeInfo->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_79;
    System_Collections_Generic_List_int___Clear(
      TmpDummyFolderHistory,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    v23 = MyRoomParamsManager_TypeInfo;
    DUMMY_PLAY_DEFAULT_VALUE = MyRoomParamsManager_TypeInfo->static_fields->DUMMY_PLAY_DEFAULT_VALUE;
    if ( !byte_40F9B94 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v22);
      v23 = MyRoomParamsManager_TypeInfo;
      byte_40F9B94 = 1;
    }
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = MyRoomParamsManager_TypeInfo;
    }
    v23->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    v25 = v23->static_fields;
    v26 = v25->DummyFolderHistory;
    if ( !v26 )
LABEL_79:
      sub_B170D4();
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v25->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v28 = (System_String_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_List_int__o *, Il2CppMethodPointer))v26->klass->vtable._3_ToString.method)(
                               v26,
                               v26->klass->vtable._4_unknown.methodPtr);
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v28, 0LL);
    v30 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_40F9B96 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v29);
      v30 = MyRoomParamsManager_TypeInfo;
      byte_40F9B96 = 1;
    }
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v30->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0LL);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v17->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_40F9B97 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v16);
    v17 = MyRoomParamsManager_TypeInfo;
    byte_40F9B97 = 1;
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
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_40F6977 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v33);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_40F6977 = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v34->static_fields->_LastPlayWarId_k__BackingField, 0LL);
  v37 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_40F9B98 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v36);
    v37 = MyRoomParamsManager_TypeInfo;
    byte_40F9B98 = 1;
  }
  if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    SAVE_KEY_LAST_PLAY_EVENT_ID,
    v37->static_fields->_LastPlayEventId_k__BackingField,
    0LL);
  v40 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_40F9B99 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v39);
    v40 = MyRoomParamsManager_TypeInfo;
    byte_40F9B99 = 1;
  }
  if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v40);
    v40 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v40->static_fields->_LastPlayTitle_k__BackingField, 0LL);
  v43 = MyRoomParamsManager_TypeInfo;
  v44 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_40F9B9A )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v42);
    v43 = MyRoomParamsManager_TypeInfo;
    byte_40F9B9A = 1;
  }
  if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v43);
    v43 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v44, v43->static_fields->_LastSelectSubFolderId_k__BackingField, 0LL);
  v45 = MyRoomParamsManager_TypeInfo->static_fields;
  v46 = v45->DummyFolderHistory;
  if ( !v46 )
    goto LABEL_79;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v45->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v48 = (System_String_o *)((__int64 (__fastcall *)(struct System_Collections_Generic_List_int__o *, Il2CppMethodPointer))v46->klass->vtable._3_ToString.method)(
                             v46,
                             v46->klass->vtable._4_unknown.methodPtr);
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v48, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  MyRoomParamsManager_c *v2; // x0
  __int64 v3; // x1
  MyRoomParamsManager_c *v4; // x0
  char v5; // w8

  if ( (byte_40F9B2D & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B2D = 1;
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
    if ( !byte_40F9B95 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v3);
      byte_40F9B95 = 1;
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
    if ( !byte_40F9B95 )
    {
      sub_B16FFC(&MyRoomParamsManager_TypeInfo, v3);
      byte_40F9B95 = 1;
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

  if ( (byte_40F9B29 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_List_int____, v1);
    sub_B16FFC(&JsonManager_TypeInfo, v2);
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F9B29 = 1;
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
  if ( !byte_40F9B8F )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v6);
    byte_40F9B8F = 1;
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
  if ( !byte_40F9B90 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v9);
    byte_40F9B90 = 1;
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
  if ( !byte_40F9B91 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v12);
    byte_40F9B91 = 1;
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
  if ( !byte_40F9B92 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v15);
    byte_40F9B92 = 1;
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
  sub_B16F98(
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
  if ( !byte_40F9B93 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v25);
    byte_40F9B93 = 1;
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
            (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_List_int____);
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
    sub_B16F98((BattleServantConfConponent_o *)&v38->DummyFolderHistory, v37, v30, v31, v32, v33, v34, v35);
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
  if ( !byte_40F9B94 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v40);
    byte_40F9B94 = 1;
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

  if ( (byte_40F9B2E & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B2E = 1;
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

  if ( (byte_40F9B2C & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B2C = 1;
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

  if ( (byte_40F9B22 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B22 = 1;
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

  if ( (byte_40F9B1C & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B1C = 1;
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

  if ( (byte_40F9B24 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B24 = 1;
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

  if ( (byte_40F9B18 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B18 = 1;
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

  if ( (byte_40F9B1E & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B1E = 1;
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

  if ( (byte_40F9B1A & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B1A = 1;
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

  if ( (byte_40F9B20 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, v1);
    byte_40F9B20 = 1;
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

  if ( (byte_40F9B23 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B23 = 1;
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

  if ( (byte_40F9B1D & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B1D = 1;
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

  if ( (byte_40F9B25 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B25 = 1;
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

  if ( (byte_40F9B19 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B19 = 1;
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

  if ( (byte_40F9B1F & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B1F = 1;
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
  sub_B16F98(
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

  if ( (byte_40F9B1B & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B1B = 1;
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

  if ( (byte_40F9B21 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomParamsManager_TypeInfo, method);
    byte_40F9B21 = 1;
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