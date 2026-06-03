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

  if ( (byte_4E7293C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_8137/*"IsListActive"*/);
    sub_1D0F0B4(&StringLiteral_8464/*"LastPlayedEventId"*/);
    sub_1D0F0B4(&StringLiteral_8466/*"LastPlayedTitle"*/);
    sub_1D0F0B4(&StringLiteral_8465/*"LastPlayedQuestId"*/);
    sub_1D0F0B4(&StringLiteral_5440/*"DummyFolderHistory"*/);
    sub_1D0F0B4(&StringLiteral_8470/*"LastSelectSubFolderId"*/);
    sub_1D0F0B4(&StringLiteral_8463/*"LastPlayMovedQuestId"*/);
    sub_1D0F0B4(&StringLiteral_8467/*"LastPlayedWarId"*/);
    byte_4E7293C = 1;
  }
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v2 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v2,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v3 = MyRoomParamsManager_TypeInfo->static_fields;
  v3->DummyFolderHistory = v2;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v3->DummyFolderHistory, (int32_t)v2, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = MyRoomParamsManager_TypeInfo->static_fields;
  v11->TmpDummyFolderHistory = v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v11->TmpDummyFolderHistory, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&v18->_MaxNormalWarId_k__BackingField = -1;
  *(_QWORD *)&v18->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = -1;
  *(_QWORD *)&v18->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  v18->temporaryLastSelectSubFolderId = 0;
  v19 = StringLiteral_8465/*"LastPlayedQuestId"*/;
  v18->SAVE_KEY_LAST_PLAY_QUEST_ID = (struct System_String_o *)StringLiteral_8465/*"LastPlayedQuestId"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->SAVE_KEY_LAST_PLAY_QUEST_ID, v19, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_8467/*"LastPlayedWarId"*/;
  v27 = MyRoomParamsManager_TypeInfo->static_fields;
  v27->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8467/*"LastPlayedWarId"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v27->SAVE_KEY_LAST_PLAY_WAR_ID, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_8464/*"LastPlayedEventId"*/;
  v35 = MyRoomParamsManager_TypeInfo->static_fields;
  v35->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8464/*"LastPlayedEventId"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v35->SAVE_KEY_LAST_PLAY_EVENT_ID, v34, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_8466/*"LastPlayedTitle"*/;
  v43 = MyRoomParamsManager_TypeInfo->static_fields;
  v43->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8466/*"LastPlayedTitle"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v43->SAVE_KEY_LAST_PLAY_TITLE, v42, v44, v45, v46, v47, v48, v49);
  v50 = StringLiteral_8470/*"LastSelectSubFolderId"*/;
  v51 = MyRoomParamsManager_TypeInfo->static_fields;
  v51->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8470/*"LastSelectSubFolderId"*/;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&v51->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v50,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = StringLiteral_8137/*"IsListActive"*/;
  v59 = MyRoomParamsManager_TypeInfo->static_fields;
  v59->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8137/*"IsListActive"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v59->SAVE_KEY_IS_LIST_ACTIVE, v58, v60, v61, v62, v63, v64, v65);
  v66 = StringLiteral_5440/*"DummyFolderHistory"*/;
  v67 = MyRoomParamsManager_TypeInfo->static_fields;
  v67->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5440/*"DummyFolderHistory"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v67->SAVE_KEY_DUMMY_FOLDER_HISTORY, v66, v68, v69, v70, v71, v72, v73);
  v74 = MyRoomParamsManager_TypeInfo->static_fields;
  v75 = StringLiteral_8463/*"LastPlayMovedQuestId"*/;
  v74->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8463/*"LastPlayMovedQuestId"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v74->SAVE_KEY_LAST_MOVED_QUEST_ID, v75, v76, v77, v78, v79, v80, v81);
}


void MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  const MethodInfo *v2; // x0

  if ( (byte_4E7292C & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_10764/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_1D0F0B4(&StringLiteral_10762/*"PhotoCampaignSelectImageLimit"*/);
    byte_4E7292C = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10762/*"PhotoCampaignSelectImageLimit"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10764/*"PhotoCampaignSelectedUsrSvtId"*/, 0);
  MyRoomParamsManager__InitParameter(v2);
}


int32_t MyRoomParamsManager__GetMaxClearedWarId(
        System_Collections_Generic_List_MapControl_WarInfo__o *warAllInfos,
        const MethodInfo *method)
{
  MyRoomParamsManager___c_c *v3; // x0
  System_Func_object__bool__o *_9__85_0; // x20
  Il2CppObject *v5; // x21
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  MyRoomParamsManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__85_1; // x20
  Il2CppObject *v17; // x21
  struct MyRoomParamsManager___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_int__o *v26; // x0

  if ( (byte_4E7293A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_0__);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_1__);
    sub_1D0F0B4(&MyRoomParamsManager___c_TypeInfo);
    byte_4E7293A = 1;
  }
  v3 = MyRoomParamsManager___c_TypeInfo;
  if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
    v3 = MyRoomParamsManager___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v3->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MyRoomParamsManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MapControl_WarInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__85_0, v5, Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_0__, 0);
    static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__85_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v7, v8, v9, v10, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warAllInfos,
          (System_Func_TSource__bool__o *)_9__85_0,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  v14 = MyRoomParamsManager___c_TypeInfo;
  v15 = v13;
  if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
    v14 = MyRoomParamsManager___c_TypeInfo;
  }
  _9__85_1 = (System_Func_object__int__o *)v14->static_fields->__9__85_1;
  if ( !_9__85_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomParamsManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__85_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__85_1, v17, Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_1__, 0);
    v18 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v18->__9__85_1 = (struct System_Func_MapControl_WarInfo__int__o *)_9__85_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->__9__85_1, (int32_t)_9__85_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__85_1,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
  v26 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v25,
                                                           0,
                                                           (const MethodInfo_3272500 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v26, 0);
}


int32_t MyRoomParamsManager__GetMaxNormalWarId(
        System_Collections_Generic_List_MapControl_WarInfo__o *warAllInfos,
        const MethodInfo *method)
{
  MyRoomParamsManager___c_c *v3; // x0
  System_Func_object__bool__o *_9__86_0; // x20
  Il2CppObject *v5; // x21
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  MyRoomParamsManager___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__86_1; // x20
  Il2CppObject *v17; // x21
  struct MyRoomParamsManager___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_int__o *v26; // x0

  if ( (byte_4E7293B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_0__);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_1__);
    sub_1D0F0B4(&MyRoomParamsManager___c_TypeInfo);
    byte_4E7293B = 1;
  }
  v3 = MyRoomParamsManager___c_TypeInfo;
  if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
    v3 = MyRoomParamsManager___c_TypeInfo;
  }
  _9__86_0 = (System_Func_object__bool__o *)v3->static_fields->__9__86_0;
  if ( !_9__86_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MyRoomParamsManager___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__86_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MapControl_WarInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__86_0, v5, Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_0__, 0);
    static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
    static_fields->__9__86_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__86_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__86_0, (int32_t)_9__86_0, v7, v8, v9, v10, v11, v12);
  }
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warAllInfos,
          (System_Func_TSource__bool__o *)_9__86_0,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  v14 = MyRoomParamsManager___c_TypeInfo;
  v15 = v13;
  if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
    v14 = MyRoomParamsManager___c_TypeInfo;
  }
  _9__86_1 = (System_Func_object__int__o *)v14->static_fields->__9__86_1;
  if ( !_9__86_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MyRoomParamsManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__86_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__86_1, v17, Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_1__, 0);
    v18 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v18->__9__86_1 = (struct System_Func_MapControl_WarInfo__int__o *)_9__86_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v18->__9__86_1, (int32_t)_9__86_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TResult__o *)_9__86_1,
                                                               (const MethodInfo_3285DC8 *)Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
  v26 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v25,
                                                           0,
                                                           (const MethodInfo_3272500 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v26, 0);
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

  if ( (byte_4E7292D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7292D = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v7->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4E7299D )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4E7299D = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  v10 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4E7299E )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4E7299E = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v11 = v7->static_fields;
  v11->_LastPlayWarId_k__BackingField = v10;
  v12 = v11->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4E7299F )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4E7299F = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayEventId_k__BackingField = v12;
  v13 = StringLiteral_1/*""*/;
  if ( !byte_4E729A0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
    byte_4E729A0 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v14 = v7->static_fields;
  v14->_LastPlayTitle_k__BackingField = (struct System_String_o *)v13;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v14->_LastPlayTitle_k__BackingField, v13, v1, v2, v3, v4, v5, v6);
  v16 = MyRoomParamsManager_TypeInfo;
  v17 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_4E729A1 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4E729A1 = 1;
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
    sub_1D0F30C(v16, v15);
  }
  v22 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v22;
  DUMMY_PLAY_DEFAULT_VALUE = v18->DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4E729A2 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4E729A2 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  v16->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !byte_4E729A3 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4E729A3 = 1;
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

  if ( (byte_4E7292E & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7292E = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->temporaryLastSelectSubFolderId = v1->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


bool MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  MyRoomParamsManager_c *v2; // x0
  int32_t MaxClearedWarId_k__BackingField; // w20

  if ( (byte_4E72936 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72936 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E729A6 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A6 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  if ( v1->static_fields->_MaxClearedWarId_k__BackingField < 0 )
    return 0;
  if ( !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4E729A6 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A6 = 1;
  }
  v2 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  MaxClearedWarId_k__BackingField = v2->static_fields->_MaxClearedWarId_k__BackingField;
  if ( !byte_4E729A7 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v2 = MyRoomParamsManager_TypeInfo;
    byte_4E729A7 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = MyRoomParamsManager_TypeInfo;
  }
  return MaxClearedWarId_k__BackingField >= v2->static_fields->_MaxNormalWarId_k__BackingField;
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

  if ( (byte_4E72931 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor___80319440);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E72931 = 1;
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
      (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( questId )
  {
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4E729A2 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      byte_4E729A2 = 1;
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
    v13 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_60026048(
      v13,
      v12,
      (const MethodInfo_393ECC0 *)Method_System_Collections_Generic_List_int___ctor___80319440);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v13;
    sub_1D0F058(
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
      if ( !byte_4E72789 )
      {
        sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
        v24 = MyRoomParamsManager_TypeInfo;
        byte_4E72789 = 1;
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
    sub_1D0F30C(TmpDummyFolderHistory, *(_QWORD *)&questId);
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

  if ( (byte_4E72930 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72930 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E7299E )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7299E = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !byte_4E7299D )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4E7299D = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !byte_4E7299F )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4E7299F = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !byte_4E729A0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_4E729A0 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_1D0F058(
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
  if ( !byte_4E729A1 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4E729A1 = 1;
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
    if ( !byte_4E729A2 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      v16 = MyRoomParamsManager_TypeInfo;
      byte_4E729A2 = 1;
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
      sub_1D0F30C(v16, v15);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v24->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v26 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v16->_1.image + 45))(
                               v16,
                               *((_QWORD *)v16->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v26, 0);
    v27 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_4E72789 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      v27 = MyRoomParamsManager_TypeInfo;
      byte_4E72789 = 1;
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
  if ( !byte_4E72699 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v16 = MyRoomParamsManager_TypeInfo;
    byte_4E72699 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_QUEST_ID, v16->static_fields->_LastPlayQuestId_k__BackingField, 0);
  v30 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_4E7269A )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v30 = MyRoomParamsManager_TypeInfo;
    byte_4E7269A = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v30->static_fields->_LastPlayWarId_k__BackingField, 0);
  v32 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_4E7278A )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v32 = MyRoomParamsManager_TypeInfo;
    byte_4E7278A = 1;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v32->static_fields->_LastPlayEventId_k__BackingField, 0);
  v34 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_4E7269B )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
    byte_4E7269B = 1;
  }
  if ( !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v34->static_fields->_LastPlayTitle_k__BackingField, 0);
  v36 = MyRoomParamsManager_TypeInfo;
  v37 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_4E7269C )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v36 = MyRoomParamsManager_TypeInfo;
    byte_4E7269C = 1;
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

  if ( (byte_4E72933 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72933 = 1;
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
    if ( !byte_4E729A3 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      byte_4E729A3 = 1;
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
    if ( !byte_4E729A3 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      byte_4E729A3 = 1;
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

  if ( (byte_4E7292F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_JsonManager_Deserialize_List_int____);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7292F = 1;
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
  if ( !byte_4E7299D )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7299D = 1;
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
  if ( !byte_4E7299E )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7299E = 1;
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
  if ( !byte_4E7299F )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7299F = 1;
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
  if ( !byte_4E729A0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A0 = 1;
  }
  v22 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v22 = MyRoomParamsManager_TypeInfo;
  }
  v23 = v22->static_fields;
  v23->_LastPlayTitle_k__BackingField = String;
  sub_1D0F058(
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
  if ( !byte_4E729A1 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A1 = 1;
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
    v28 = JsonManager__Deserialize_object_(v27, (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_List_int____);
    v35 = MyRoomParamsManager_TypeInfo;
    v36 = v28;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v35 = MyRoomParamsManager_TypeInfo;
    }
    v37 = v35->static_fields;
    v37->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v36;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v37->DummyFolderHistory, (int32_t)v36, v29, v30, v31, v32, v33, v34);
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
  if ( !byte_4E729A2 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A2 = 1;
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

  if ( (byte_4E72935 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72935 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E7284D )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7284D = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  if ( !byte_4E7284E )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4E7284E = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgWarId_k__BackingField = -1;
  if ( !byte_4E72851 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4E72851 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = -1;
  if ( !byte_4E72852 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4E72852 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = -1;
  if ( !byte_4E729A4 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4E729A4 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_MaxNormalWarId_k__BackingField = -1;
  if ( !byte_4E729A5 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4E729A5 = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_MaxClearedWarId_k__BackingField = -1;
}


void MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72934 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72934 = 1;
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


void MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(
        int32_t warId,
        int32_t questId,
        int32_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x23
  void *Master_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  WarEntity_o **v16; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x24
  int32_t v19; // w22
  const MethodInfo *v20; // x2
  int32_t TypeFlag; // w0
  System_Func_object__bool__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  MyRoomParamsManager___c_c *v24; // x8
  System_Func_object__int__o *_9__82_1; // x23
  Il2CppObject *v26; // x24
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  MyRoomParamsManager___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x20
  System_Func_object__int__o *_9__82_2; // x23
  Il2CppObject *v38; // x24
  struct MyRoomParamsManager___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  Il2CppObject *v47; // x0
  int monitor_high; // w20
  int32_t id; // w20
  MyRoomParamsManager_c *v50; // x0
  Il2CppObject *v51; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4E72937 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__getEntityList__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1D0F0B4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1D0F0B4(&MyRoomControl_TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_1__);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_2__);
    sub_1D0F0B4(&Method_MyRoomParamsManager___c__DisplayClass82_0__SetClearQuestWarEnableMyRoomBgChange_b__0__);
    sub_1D0F0B4(&MyRoomParamsManager___c__DisplayClass82_0_TypeInfo);
    sub_1D0F0B4(&MyRoomParamsManager___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_5345/*"DisplayMyRoomBgWar"*/);
    sub_1D0F0B4(&StringLiteral_5344/*"DisplayMyRoomBgGroupId"*/);
    byte_4E72937 = 1;
  }
  entity = 0;
  v51 = 0;
  v7 = sub_1D0F300(MyRoomParamsManager___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_75;
  *(_QWORD *)(v7 + 16) = 0;
  v16 = (WarEntity_o **)(v7 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), 0, v10, v11, v12, v13, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          questId,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_78;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity )
    goto LABEL_75;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
  if ( !v17 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v17,
          &v51,
          (int32_t)Master_object,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_78;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v51 || !Master_object )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v7 + 16),
          HIDWORD(v51[1].klass),
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_78:
    if ( !*v16 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_75;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v7 + 16),
              warId,
              (const MethodInfo_3535BC8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        return;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    goto LABEL_75;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               *((System_Collections_Generic_IEnumerable_TSource__o **)Master_object
                                                               + 5),
                                                               (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5344/*"DisplayMyRoomBgGroupId"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5344/*"DisplayMyRoomBgGroupId"*/, 0);
  Master_object = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5345/*"DisplayMyRoomBgWar"*/, 0, 0);
  if ( !*v16 )
    goto LABEL_75;
  v19 = (int)Master_object;
  Master_object = (void *)WarEntity__HasFlag(*v16, 128, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    *(_QWORD *)(v7 + 24) = NetworkManager__getTime(0);
    v22 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v7,
      Method_MyRoomParamsManager___c__DisplayClass82_0__SetClearQuestWarEnableMyRoomBgChange_b__0__,
      0);
    v23 = System_Linq_Enumerable__Where_object_(
            v18,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    v24 = MyRoomParamsManager___c_TypeInfo;
    if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
      v24 = MyRoomParamsManager___c_TypeInfo;
    }
    _9__82_1 = (System_Func_object__int__o *)v24->static_fields->__9__82_1;
    if ( !_9__82_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = MyRoomParamsManager___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__82_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__82_1,
        v26,
        Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_1__,
        0);
      static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
      static_fields->__9__82_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__82_1;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__82_1,
        (int32_t)_9__82_1,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v23,
            (System_Func_TSource__TKey__o *)_9__82_1,
            (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    v35 = MyRoomParamsManager___c_TypeInfo;
    v36 = v34;
    if ( !MyRoomParamsManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo);
      v35 = MyRoomParamsManager___c_TypeInfo;
    }
    _9__82_2 = (System_Func_object__int__o *)v35->static_fields->__9__82_2;
    if ( !_9__82_2 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = MyRoomParamsManager___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__82_2 = (System_Func_object__int__o *)sub_1D0F300(System_Func_MyRoomAddEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__82_2,
        v38,
        Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_2__,
        0);
      v39 = MyRoomParamsManager___c_TypeInfo->static_fields;
      v39->__9__82_2 = (struct System_Func_MyRoomAddEntity__int__o *)_9__82_2;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)&v39->__9__82_2, (int32_t)_9__82_2, v40, v41, v42, v43, v44, v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TKey__o *)_9__82_2,
                                                                 (const MethodInfo_328F338 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    v47 = System_Linq_Enumerable__FirstOrDefault_object_(
            v46,
            (const MethodInfo_3277A14 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    if ( !v47 )
      goto LABEL_69;
    monitor_high = HIDWORD(v47[1].monitor);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4E72851 )
    {
      sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
      byte_4E72851 = 1;
    }
    Master_object = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      Master_object = MyRoomParamsManager_TypeInfo;
    }
    *(_DWORD *)(*((_QWORD *)Master_object + 23) + 68LL) = monitor_high;
    if ( *v16 )
    {
      id = (*v16)->fields.id;
      if ( !byte_4E72852 )
      {
        sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
        Master_object = MyRoomParamsManager_TypeInfo;
        byte_4E72852 = 1;
      }
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = MyRoomParamsManager_TypeInfo;
      }
      *(_DWORD *)(*((_QWORD *)Master_object + 23) + 72LL) = id;
      if ( *v16 )
      {
        v19 = (*v16)->fields.id;
        goto LABEL_69;
      }
    }
LABEL_75:
    sub_1D0F30C(Master_object, v9);
  }
  if ( !*v16 )
    goto LABEL_75;
  v19 = (*v16)->fields.id;
  if ( !entity )
  {
    if ( !scriptId )
      goto LABEL_69;
LABEL_66:
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    MyRoomParamsManager__SetDisplayMyRoomBgData(v19, 0, v20);
    goto LABEL_69;
  }
  if ( QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0) == 2 )
    goto LABEL_66;
  Master_object = entity;
  if ( !entity )
    goto LABEL_75;
  TypeFlag = QuestEntity__GetTypeFlag((QuestEntity_o *)entity, 0);
  if ( scriptId || TypeFlag == 32 )
    goto LABEL_66;
LABEL_69:
  v50 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetMaxClearedAndNormalWarId((const MethodInfo *)v50);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__ClearBackGroundData(0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5345/*"DisplayMyRoomBgWar"*/, v19, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__SetDisplayMyRoomBgData(int32_t warId, int32_t groupId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v5; // x0

  if ( (byte_4E72939 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72939 = 1;
  }
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E72851 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72851 = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  v5->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = groupId;
  if ( !byte_4E72852 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
    byte_4E72852 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  v5->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = warId;
}


void MyRoomParamsManager__SetMaxClearedAndNormalWarId(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x19
  const MethodInfo *v5; // x1
  int32_t MaxClearedWarId; // w20
  MyRoomParamsManager_c *v7; // x0
  int32_t MaxNormalWarId; // w19
  MyRoomParamsManager_c *v9; // x0

  if ( (byte_4E72938 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E72938 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3BACB74 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v2);
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)Instance, 0);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MaxClearedWarId = MyRoomParamsManager__GetMaxClearedWarId(WarInfoAll_OrderReverse, v3);
  if ( !byte_4E729A5 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A5 = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  v7->static_fields->_MaxClearedWarId_k__BackingField = MaxClearedWarId;
  MaxNormalWarId = MyRoomParamsManager__GetMaxNormalWarId(WarInfoAll_OrderReverse, v5);
  if ( !byte_4E729A4 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E729A4 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  v9->static_fields->_MaxNormalWarId_k__BackingField = MaxNormalWarId;
}


void MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72932 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72932 = 1;
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

  if ( (byte_4E72920 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72920 = 1;
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

  if ( (byte_4E72924 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72924 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4E72922 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72922 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_DisplayMyRoomBgWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgWarIdByLastClearQuest(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4E72926 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72926 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField;
}


bool MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4E7291C & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291C = 1;
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

  if ( (byte_4E72916 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72916 = 1;
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

  if ( (byte_4E7291E & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291E = 1;
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

  if ( (byte_4E72912 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72912 = 1;
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

  if ( (byte_4E72918 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72918 = 1;
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

  if ( (byte_4E72914 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72914 = 1;
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

  if ( (byte_4E7291A & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291A = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectSubFolderId_k__BackingField;
}


int32_t MyRoomParamsManager__get_MaxClearedWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4E7292A & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7292A = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_MaxClearedWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_MaxNormalWarId(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0

  if ( (byte_4E72928 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72928 = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  return v1->static_fields->_MaxNormalWarId_k__BackingField;
}


void MyRoomParamsManager__set_DisplayMyRoomBgGroupId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72921 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72921 = 1;
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

  if ( (byte_4E72925 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72925 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72923 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72923 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_DisplayMyRoomBgWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgWarIdByLastClearQuest(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72927 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72927 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = value;
}


void MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E7291D & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291D = 1;
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

  if ( (byte_4E72917 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72917 = 1;
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

  if ( (byte_4E7291F & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291F = 1;
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

  if ( (byte_4E72913 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72913 = 1;
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

  if ( (byte_4E72919 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72919 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_1D0F058(
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

  if ( (byte_4E72915 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72915 = 1;
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

  if ( (byte_4E7291B & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7291B = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}


void MyRoomParamsManager__set_MaxClearedWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E7292B & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7292B = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_MaxClearedWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_MaxNormalWarId(int32_t value, const MethodInfo *method)
{
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_4E72929 & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72929 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_MaxNormalWarId_k__BackingField = value;
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

  if ( (byte_4E7293D & 1) == 0 )
  {
    sub_1D0F0B4(&MyRoomParamsManager___c_TypeInfo);
    byte_4E7293D = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(MyRoomParamsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomParamsManager___c_TypeInfo->static_fields->__9 = (struct MyRoomParamsManager___c_o *)v1;
  sub_1D0F058(
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


bool MyRoomParamsManager___c___GetMaxClearedWarId_b__85_0(
        MyRoomParamsManager___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  int32_t Status; // w0

  if ( !warInfo || (this = (MyRoomParamsManager___c_o *)MapControl_WarInfo__GetMine(warInfo, 0)) == 0 )
    sub_1D0F30C(this, warInfo);
  if ( !WarEntity__HasFlag((WarEntity_o *)this, 128, 0) )
    return 0;
  Status = MapControl_WarInfo__GetStatus(warInfo, 0);
  return MapControl_WarInfo__IsClearedWarStatus(Status, 0);
}


int32_t MyRoomParamsManager___c___GetMaxClearedWarId_b__85_1(
        MyRoomParamsManager___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_1D0F30C(this, 0);
  return warInfo->fields.warId;
}


bool MyRoomParamsManager___c___GetMaxNormalWarId_b__86_0(
        MyRoomParamsManager___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  int32_t Status; // w0
  MyRoomParamsManager_c *v5; // x0

  if ( (byte_4E7293E & 1) == 0 )
  {
    this = (MyRoomParamsManager___c_o *)sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E7293E = 1;
  }
  if ( !warInfo || (this = (MyRoomParamsManager___c_o *)MapControl_WarInfo__GetMine(warInfo, 0)) == 0 )
    sub_1D0F30C(this, warInfo);
  if ( !WarEntity__HasFlag((WarEntity_o *)this, 128, 0) )
    goto LABEL_16;
  Status = MapControl_WarInfo__GetStatus(warInfo, 0);
  if ( Status == 1 )
    return Status;
  if ( MapControl_WarInfo__GetStatus(warInfo, 0) != 2 )
    goto LABEL_16;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4E72850 )
  {
    sub_1D0F0B4(&MyRoomParamsManager_TypeInfo);
    byte_4E72850 = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  if ( v5->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField != warInfo->fields.warId )
  {
LABEL_16:
    LOBYTE(Status) = 0;
    return Status;
  }
  LOBYTE(Status) = 1;
  return Status;
}


int32_t MyRoomParamsManager___c___GetMaxNormalWarId_b__86_1(
        MyRoomParamsManager___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  if ( !warInfo )
    sub_1D0F30C(this, 0);
  return warInfo->fields.warId;
}


int32_t MyRoomParamsManager___c___SetClearQuestWarEnableMyRoomBgChange_b__82_1(
        MyRoomParamsManager___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return MyRoomAddEntity__GetSortPriority(entity, 0);
}


int32_t MyRoomParamsManager___c___SetClearQuestWarEnableMyRoomBgChange_b__82_2(
        MyRoomParamsManager___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1D0F30C(this, 0);
  return entity->fields.priority;
}


void MyRoomParamsManager___c__DisplayClass82_0___ctor(
        MyRoomParamsManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomParamsManager___c__DisplayClass82_0___SetClearQuestWarEnableMyRoomBgChange_b__0(
        MyRoomParamsManager___c__DisplayClass82_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !entity || (warEntity = this->fields.warEntity) == 0 )
    sub_1D0F30C(this, entity);
  return entity->fields.warId == warEntity->fields.id && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, 0);
}