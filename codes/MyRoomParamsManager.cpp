void MyRoomParamsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_int__c *v1; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v3; // x19
  struct MyRoomParamsManager_StaticFields *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_int__o *v11; // x19
  struct MyRoomParamsManager_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  MissionNaviTransitionBoardItem_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w1
  struct MyRoomParamsManager_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  struct MyRoomParamsManager_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  int32_t v43; // w1
  struct MyRoomParamsManager_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v51; // w1
  struct MyRoomParamsManager_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  struct MyRoomParamsManager_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  int32_t v67; // w1
  struct MyRoomParamsManager_StaticFields *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct MyRoomParamsManager_StaticFields *v75; // x0
  int32_t v76; // w1
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7

  if ( (byte_593385C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8371/*"IsListActive"*/);
    sub_21FFC50(&StringLiteral_8699/*"LastPlayedEventId"*/);
    sub_21FFC50(&StringLiteral_8701/*"LastPlayedTitle"*/);
    sub_21FFC50(&StringLiteral_8700/*"LastPlayedQuestId"*/);
    sub_21FFC50(&StringLiteral_5572/*"DummyFolderHistory"*/);
    sub_21FFC50(&StringLiteral_8705/*"LastSelectSubFolderId"*/);
    sub_21FFC50(&StringLiteral_8698/*"LastPlayMovedQuestId"*/);
    sub_21FFC50(&StringLiteral_8702/*"LastPlayedWarId"*/);
    byte_593385C = 1;
  }
  v1 = System_Collections_Generic_List_int__TypeInfo;
  static_fields = MyRoomParamsManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SETTING_PROLOG_PART1 = -4294956296LL;
  static_fields->DUMMY_PLAY_DEFAULT_VALUE = -2;
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(v1);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v4 = MyRoomParamsManager_TypeInfo->static_fields;
  v4->DummyFolderHistory = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->DummyFolderHistory, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v12 = MyRoomParamsManager_TypeInfo->static_fields;
  v12->TmpDummyFolderHistory = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->TmpDummyFolderHistory,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_8700/*"LastPlayedQuestId"*/;
  v20 = (MissionNaviTransitionBoardItem_o *)MyRoomParamsManager_TypeInfo->static_fields;
  v20->fields.sortValueLast = StringLiteral_8700/*"LastPlayedQuestId"*/;
  v20 = (MissionNaviTransitionBoardItem_o *)((char *)v20 + 88);
  *(_QWORD *)&v20[-1].fields._IsNotDisplayQuestInfo_k__BackingField = -1;
  *(struct System_String_o **)((char *)&v20[-1].fields._ClosedMessage_k__BackingField + 4) = (struct System_String_o *)-1LL;
  *(struct System_Action_o **)((char *)&v20[-1].fields._NaviAction_k__BackingField + 4) = (struct System_Action_o *)-1LL;
  *(&v20[-1].fields._BoardType_k__BackingField + 1) = 0;
  sub_21FFBF4(v20, v19, v21, v22, v23, v24, v25, v26);
  v27 = StringLiteral_8702/*"LastPlayedWarId"*/;
  v28 = MyRoomParamsManager_TypeInfo->static_fields;
  v28->SAVE_KEY_LAST_PLAY_WAR_ID = (struct System_String_o *)StringLiteral_8702/*"LastPlayedWarId"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->SAVE_KEY_LAST_PLAY_WAR_ID, v27, v29, v30, v31, v32, v33, v34);
  v35 = StringLiteral_8699/*"LastPlayedEventId"*/;
  v36 = MyRoomParamsManager_TypeInfo->static_fields;
  v36->SAVE_KEY_LAST_PLAY_EVENT_ID = (struct System_String_o *)StringLiteral_8699/*"LastPlayedEventId"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v36->SAVE_KEY_LAST_PLAY_EVENT_ID, v35, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_8701/*"LastPlayedTitle"*/;
  v44 = MyRoomParamsManager_TypeInfo->static_fields;
  v44->SAVE_KEY_LAST_PLAY_TITLE = (struct System_String_o *)StringLiteral_8701/*"LastPlayedTitle"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v44->SAVE_KEY_LAST_PLAY_TITLE, v43, v45, v46, v47, v48, v49, v50);
  v51 = StringLiteral_8705/*"LastSelectSubFolderId"*/;
  v52 = MyRoomParamsManager_TypeInfo->static_fields;
  v52->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = (struct System_String_o *)StringLiteral_8705/*"LastSelectSubFolderId"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v52->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
    v51,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = StringLiteral_8371/*"IsListActive"*/;
  v60 = MyRoomParamsManager_TypeInfo->static_fields;
  v60->SAVE_KEY_IS_LIST_ACTIVE = (struct System_String_o *)StringLiteral_8371/*"IsListActive"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v60->SAVE_KEY_IS_LIST_ACTIVE, v59, v61, v62, v63, v64, v65, v66);
  v67 = StringLiteral_5572/*"DummyFolderHistory"*/;
  v68 = MyRoomParamsManager_TypeInfo->static_fields;
  v68->SAVE_KEY_DUMMY_FOLDER_HISTORY = (struct System_String_o *)StringLiteral_5572/*"DummyFolderHistory"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v68->SAVE_KEY_DUMMY_FOLDER_HISTORY,
    v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = MyRoomParamsManager_TypeInfo->static_fields;
  v76 = StringLiteral_8698/*"LastPlayMovedQuestId"*/;
  v75->SAVE_KEY_LAST_MOVED_QUEST_ID = (struct System_String_o *)StringLiteral_8698/*"LastPlayMovedQuestId"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v75->SAVE_KEY_LAST_MOVED_QUEST_ID, v76, v77, v78, v79, v80, v81, v82);
}


void MyRoomParamsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_593384C & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11042/*"PhotoCampaignSelectedUsrSvtId"*/);
    sub_21FFC50(&StringLiteral_11040/*"PhotoCampaignSelectImageLimit"*/);
    byte_593384C = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_DUMMY_FOLDER_HISTORY, 0);
  UnityEngine_PlayerPrefs__DeleteKey(MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11040/*"PhotoCampaignSelectImageLimit"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11042/*"PhotoCampaignSelectedUsrSvtId"*/, 0);
  MyRoomParamsManager__InitParameter(v4);
}


int32_t MyRoomParamsManager__GetMaxClearedWarId(
        System_Collections_Generic_List_MapControl_WarInfo__o *warAllInfos,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager___c_c *v4; // x0
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__85_0; // x20
  Il2CppObject *v7; // x21
  struct MyRoomParamsManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  MyRoomParamsManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct MyRoomParamsManager___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__85_1; // x20
  Il2CppObject *v22; // x21
  struct MyRoomParamsManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_int__o *v31; // x0

  if ( (byte_593385A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_21FFC50(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_21FFC50(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_21FFC50(&Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_0__);
    sub_21FFC50(&Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_1__);
    sub_21FFC50(&MyRoomParamsManager___c_TypeInfo);
    byte_593385A = 1;
  }
  v4 = MyRoomParamsManager___c_TypeInfo;
  if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, method, v2);
    v4 = MyRoomParamsManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__85_0 = (System_Func_object__bool__o *)static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MapControl_WarInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__85_0, v7, Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_0__, 0);
    v8 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v8->__9__85_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__85_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__85_0, (int32_t)_9__85_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warAllInfos,
          (System_Func_TSource__bool__o *)_9__85_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  v18 = MyRoomParamsManager___c_TypeInfo;
  v19 = v15;
  if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, v16, v17);
    v18 = MyRoomParamsManager___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__85_1 = (System_Func_object__int__o *)v20->__9__85_1;
  if ( !_9__85_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16, v17);
      v20 = MyRoomParamsManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__85_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__85_1, v22, Method_MyRoomParamsManager___c__GetMaxClearedWarId_b__85_1__, 0);
    v23 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v23->__9__85_1 = (struct System_Func_MapControl_WarInfo__int__o *)_9__85_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__85_1, (int32_t)_9__85_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__85_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
  v31 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v30,
                                                           0,
                                                           (const MethodInfo_3848CB8 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v31, 0);
}


int32_t MyRoomParamsManager__GetMaxNormalWarId(
        System_Collections_Generic_List_MapControl_WarInfo__o *warAllInfos,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager___c_c *v4; // x0
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__86_0; // x20
  Il2CppObject *v7; // x21
  struct MyRoomParamsManager___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  MyRoomParamsManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct MyRoomParamsManager___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__86_1; // x20
  Il2CppObject *v22; // x21
  struct MyRoomParamsManager___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_int__o *v31; // x0

  if ( (byte_593385B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
    sub_21FFC50(&System_Func_MapControl_WarInfo__int__TypeInfo);
    sub_21FFC50(&System_Func_MapControl_WarInfo__bool__TypeInfo);
    sub_21FFC50(&Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_0__);
    sub_21FFC50(&Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_1__);
    sub_21FFC50(&MyRoomParamsManager___c_TypeInfo);
    byte_593385B = 1;
  }
  v4 = MyRoomParamsManager___c_TypeInfo;
  if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, method, v2);
    v4 = MyRoomParamsManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__86_0 = (System_Func_object__bool__o *)static_fields->__9__86_0;
  if ( !_9__86_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__86_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MapControl_WarInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__86_0, v7, Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_0__, 0);
    v8 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v8->__9__86_0 = (struct System_Func_MapControl_WarInfo__bool__o *)_9__86_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__86_0, (int32_t)_9__86_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warAllInfos,
          (System_Func_TSource__bool__o *)_9__86_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_MapControl_WarInfo___);
  v18 = MyRoomParamsManager___c_TypeInfo;
  v19 = v15;
  if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, v16, v17);
    v18 = MyRoomParamsManager___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__86_1 = (System_Func_object__int__o *)v20->__9__86_1;
  if ( !_9__86_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v16, v17);
      v20 = MyRoomParamsManager___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__86_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MapControl_WarInfo__int__TypeInfo);
    System_Func_object__int____ctor(_9__86_1, v22, Method_MyRoomParamsManager___c__GetMaxNormalWarId_b__86_1__, 0);
    v23 = MyRoomParamsManager___c_TypeInfo->static_fields;
    v23->__9__86_1 = (struct System_Func_MapControl_WarInfo__int__o *)_9__86_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__86_1, (int32_t)_9__86_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__86_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_MapControl_WarInfo__int___);
  v31 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__DefaultIfEmpty_int_(
                                                           v30,
                                                           0,
                                                           (const MethodInfo_3848CB8 *)Method_System_Linq_Enumerable_DefaultIfEmpty_int___);
  return System_Linq_Enumerable__Max(v31, 0);
}


void MyRoomParamsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MyRoomParamsManager_c *v8; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w21
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  int v11; // w9
  int32_t v12; // w20
  struct MyRoomParamsManager_StaticFields *v13; // x8
  int v14; // w9
  int32_t v15; // w21
  struct System_String_o *v16; // x20
  int v17; // w9
  struct MyRoomParamsManager_StaticFields *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  MyRoomParamsManager_c *v21; // x0
  int32_t v22; // w20
  struct MyRoomParamsManager_StaticFields *v23; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v26; // w11
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  int v28; // w11
  int v29; // w10
  int v30; // w9

  if ( (byte_593384D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593384D = 1;
  }
  v8 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  LAST_PLAY_ID_DEFAULT_VALUE = v8->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_593385F )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
    byte_593385F = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (unsigned __int8)byte_5933860;
  v12 = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  static_fields->_LastPlayQuestId_k__BackingField = LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !v11 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
    byte_5933860 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v13 = v8->static_fields;
  v14 = (unsigned __int8)byte_5933861;
  v15 = v13->LAST_PLAY_ID_DEFAULT_VALUE;
  v13->_LastPlayWarId_k__BackingField = v12;
  if ( !v14 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
    byte_5933861 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v16 = (struct System_String_o *)StringLiteral_1/*""*/;
  v17 = (unsigned __int8)byte_5933862;
  v8->static_fields->_LastPlayEventId_k__BackingField = v15;
  if ( !v17 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v8 = MyRoomParamsManager_TypeInfo;
    byte_5933862 = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v1, v2);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v18 = v8->static_fields;
  v18->_LastPlayTitle_k__BackingField = v16;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v18->_LastPlayTitle_k__BackingField,
    (int32_t)v16,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = MyRoomParamsManager_TypeInfo;
  v22 = MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  if ( !byte_5933863 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_5933863 = 1;
  }
  if ( !*(&v21->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v21, v19, v20);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v23 = v21->static_fields;
  DummyFolderHistory = v23->DummyFolderHistory;
  v23->_LastSelectSubFolderId_k__BackingField = v22;
  if ( !DummyFolderHistory
    || (TmpDummyFolderHistory = v23->TmpDummyFolderHistory,
        v26 = DummyFolderHistory->fields._version + 1,
        DummyFolderHistory->fields._size = 0,
        DummyFolderHistory->fields._version = v26,
        !TmpDummyFolderHistory) )
  {
    sub_21FFECC(v21, v19);
  }
  DUMMY_PLAY_DEFAULT_VALUE = v23->DUMMY_PLAY_DEFAULT_VALUE;
  v28 = (unsigned __int8)byte_5933864;
  v29 = TmpDummyFolderHistory->fields._version + 1;
  TmpDummyFolderHistory->fields._size = 0;
  TmpDummyFolderHistory->fields._version = v29;
  if ( !v28 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_5933864 = 1;
  }
  if ( !*(&v21->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v21, v19, v20);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v30 = (unsigned __int8)byte_5933865;
  v21->static_fields->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
  if ( !v30 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v21 = MyRoomParamsManager_TypeInfo;
    byte_5933865 = 1;
  }
  if ( !*(&v21->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v21, v19, v20);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v21->static_fields->_IsListActive_k__BackingField = 0;
}


void MyRoomParamsManager__InitTemporaryParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_593384E & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593384E = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->temporaryLastSelectSubFolderId = v3->static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
}


bool MyRoomParamsManager__IsMaxClearedWarIdAtLeastMaxNormalWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  MyRoomParamsManager_c *v4; // x0
  int32_t MaxClearedWarId_k__BackingField; // w20

  if ( (byte_5933856 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933856 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
  if ( !byte_5933868 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933868 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  if ( v3->static_fields->_MaxClearedWarId_k__BackingField < 0 )
    return 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
  if ( !byte_5933868 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933868 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  MaxClearedWarId_k__BackingField = v4->static_fields->_MaxClearedWarId_k__BackingField;
  if ( !byte_5933869 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v4 = MyRoomParamsManager_TypeInfo;
    byte_5933869 = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  return MaxClearedWarId_k__BackingField >= v4->static_fields->_MaxNormalWarId_k__BackingField;
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
  const MethodInfo_4433344 *v10; // x2
  MyRoomParamsManager_c *v11; // x0
  MyRoomParamsManager_c *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Collections_Generic_List_int__o *v14; // x21
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct MyRoomParamsManager_StaticFields *v22; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x20
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  MyRoomParamsManager_c *v27; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  const MethodInfo *v29; // x5

  if ( (byte_5933851 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933851 = 1;
  }
  if ( history )
  {
    v7 = MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId, isSave);
      v7 = MyRoomParamsManager_TypeInfo;
    }
    TmpDummyFolderHistory = v7->static_fields->TmpDummyFolderHistory;
    if ( !TmpDummyFolderHistory )
      goto LABEL_26;
    v9 = TmpDummyFolderHistory->fields._version + 1;
    v10 = (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v9;
    System_Collections_Generic_List_int___AddRange(
      TmpDummyFolderHistory,
      (System_Collections_Generic_IEnumerable_T__o *)history,
      v10);
  }
  if ( questId )
  {
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId, isSave);
    if ( !byte_5933864 )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      byte_5933864 = 1;
    }
    v11 = MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId, isSave);
      v11 = MyRoomParamsManager_TypeInfo;
    }
    v11->static_fields->_LastPlayMovedQuestId_k__BackingField = questId;
  }
  if ( isSave )
  {
    v12 = MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&questId, isSave);
      v12 = MyRoomParamsManager_TypeInfo;
    }
    v13 = (System_Collections_Generic_IEnumerable_T__o *)v12->static_fields->TmpDummyFolderHistory;
    v14 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v14,
      v13,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
    static_fields = MyRoomParamsManager_TypeInfo->static_fields;
    static_fields->DummyFolderHistory = v14;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->DummyFolderHistory,
      (int32_t)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = MyRoomParamsManager_TypeInfo->static_fields;
    TmpDummyFolderHistory = v22->DummyFolderHistory;
    if ( TmpDummyFolderHistory )
    {
      SAVE_KEY_DUMMY_FOLDER_HISTORY = v22->SAVE_KEY_DUMMY_FOLDER_HISTORY;
      v24 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_List_int__o *, const MethodInfo *))TmpDummyFolderHistory->klass->vtable._3_ToString.methodPtr)(
                                 TmpDummyFolderHistory,
                                 TmpDummyFolderHistory->klass->vtable._3_ToString.method);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v24, 0);
      v27 = MyRoomParamsManager_TypeInfo;
      SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
      if ( !byte_59336B6 )
      {
        sub_21FFC50(&MyRoomParamsManager_TypeInfo);
        v27 = MyRoomParamsManager_TypeInfo;
        byte_59336B6 = 1;
      }
      if ( !*(&v27->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v27, v25, v26);
        v27 = MyRoomParamsManager_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(
        SAVE_KEY_LAST_MOVED_QUEST_ID,
        v27->static_fields->_LastPlayMovedQuestId_k__BackingField,
        0);
      UnityEngine_PlayerPrefs__Save(0);
      MyRoomParamsManager__LastPlay_SaveData(
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        v29);
      return;
    }
LABEL_26:
    sub_21FFECC(TmpDummyFolderHistory, *(_QWORD *)&questId);
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
  bool v6; // w6
  bool v7; // w7
  MyRoomParamsManager_c *v13; // x0
  int v14; // w9
  int v15; // w9
  int v16; // w9
  struct MyRoomParamsManager_StaticFields *static_fields; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  MyRoomParamsManager_c *v20; // x0
  int32_t temporaryLastSelectSubFolderId; // w21
  struct MyRoomParamsManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_int__o *DummyFolderHistory; // x10
  struct System_Collections_Generic_List_int__o *TmpDummyFolderHistory; // x9
  int v25; // w11
  int32_t DUMMY_PLAY_DEFAULT_VALUE; // w20
  int v27; // w11
  int v28; // w10
  struct MyRoomParamsManager_StaticFields *v29; // x8
  System_String_o *SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID; // x20
  System_String_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  MyRoomParamsManager_c *v34; // x0
  System_String_o *SAVE_KEY_LAST_MOVED_QUEST_ID; // x20
  System_String_o *SAVE_KEY_LAST_PLAY_QUEST_ID; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  MyRoomParamsManager_c *v39; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  MyRoomParamsManager_c *v43; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  MyRoomParamsManager_c *v47; // x0
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  MyRoomParamsManager_c *v51; // x0
  System_String_o *v52; // x20
  struct MyRoomParamsManager_StaticFields *v53; // x8
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x19
  System_String_o *v55; // x0

  if ( (byte_5933850 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933850 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
  if ( !byte_5933860 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933860 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v14 = (unsigned __int8)byte_593385F;
  v13->static_fields->_LastPlayWarId_k__BackingField = warId;
  if ( !v14 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_593385F = 1;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v15 = (unsigned __int8)byte_5933861;
  v13->static_fields->_LastPlayQuestId_k__BackingField = questId;
  if ( !v15 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_5933861 = 1;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v16 = (unsigned __int8)byte_5933862;
  v13->static_fields->_LastPlayEventId_k__BackingField = eventId;
  if ( !v16 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v13 = MyRoomParamsManager_TypeInfo;
    byte_5933862 = 1;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&warId, *(_QWORD *)&eventId);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = title;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
    (int32_t)title,
    *(System_String_o **)&eventId,
    title,
    isDummyDel,
    (int32_t)method,
    v6,
    v7);
  v20 = MyRoomParamsManager_TypeInfo;
  temporaryLastSelectSubFolderId = MyRoomParamsManager_TypeInfo->static_fields->temporaryLastSelectSubFolderId;
  if ( !byte_5933863 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v20 = MyRoomParamsManager_TypeInfo;
    byte_5933863 = 1;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  v22 = v20->static_fields;
  v22->_LastSelectSubFolderId_k__BackingField = temporaryLastSelectSubFolderId;
  if ( isDummyDel )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
      v20 = MyRoomParamsManager_TypeInfo;
      v22 = MyRoomParamsManager_TypeInfo->static_fields;
    }
    DummyFolderHistory = v22->DummyFolderHistory;
    if ( !DummyFolderHistory )
      goto LABEL_64;
    TmpDummyFolderHistory = v22->TmpDummyFolderHistory;
    v25 = DummyFolderHistory->fields._version + 1;
    DummyFolderHistory->fields._size = 0;
    DummyFolderHistory->fields._version = v25;
    if ( !TmpDummyFolderHistory )
      goto LABEL_64;
    DUMMY_PLAY_DEFAULT_VALUE = v22->DUMMY_PLAY_DEFAULT_VALUE;
    v27 = (unsigned __int8)byte_5933864;
    v28 = TmpDummyFolderHistory->fields._version + 1;
    TmpDummyFolderHistory->fields._size = 0;
    TmpDummyFolderHistory->fields._version = v28;
    if ( !v27 )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      v20 = MyRoomParamsManager_TypeInfo;
      byte_5933864 = 1;
    }
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18, v19);
      v20 = MyRoomParamsManager_TypeInfo;
    }
    v29 = v20->static_fields;
    v20 = (MyRoomParamsManager_c *)v29->DummyFolderHistory;
    v29->_LastPlayMovedQuestId_k__BackingField = DUMMY_PLAY_DEFAULT_VALUE;
    if ( !v20 )
LABEL_64:
      sub_21FFECC(v20, v18);
    SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID = v29->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
    v31 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v20->_1.image + 45))(
                               v20,
                               *((_QWORD *)v20->_1.image + 46));
    UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID, v31, 0);
    v34 = MyRoomParamsManager_TypeInfo;
    SAVE_KEY_LAST_MOVED_QUEST_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID;
    if ( !byte_59336B6 )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      v34 = MyRoomParamsManager_TypeInfo;
      byte_59336B6 = 1;
    }
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v32, v33);
      v34 = MyRoomParamsManager_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(
      SAVE_KEY_LAST_MOVED_QUEST_ID,
      v34->static_fields->_LastPlayMovedQuestId_k__BackingField,
      0);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  SAVE_KEY_LAST_PLAY_QUEST_ID = v20->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID;
  if ( !byte_59335D6 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v20 = MyRoomParamsManager_TypeInfo;
    byte_59335D6 = 1;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v18, v19);
    v20 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_QUEST_ID, v20->static_fields->_LastPlayQuestId_k__BackingField, 0);
  v39 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_WAR_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  if ( !byte_59335D7 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v39 = MyRoomParamsManager_TypeInfo;
    byte_59335D7 = 1;
  }
  if ( !*(&v39->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v39, v37, v38);
    v39 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_WAR_ID, v39->static_fields->_LastPlayWarId_k__BackingField, 0);
  v43 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_EVENT_ID = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_EVENT_ID;
  if ( !byte_59336B7 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v43 = MyRoomParamsManager_TypeInfo;
    byte_59336B7 = 1;
  }
  if ( !*(&v43->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v43, v41, v42);
    v43 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v43->static_fields->_LastPlayEventId_k__BackingField, 0);
  v47 = MyRoomParamsManager_TypeInfo;
  SAVE_KEY_LAST_PLAY_TITLE = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_PLAY_TITLE;
  if ( !byte_59335D8 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v47 = MyRoomParamsManager_TypeInfo;
    byte_59335D8 = 1;
  }
  if ( !*(&v47->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v47, v45, v46);
    v47 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_LAST_PLAY_TITLE, v47->static_fields->_LastPlayTitle_k__BackingField, 0);
  v51 = MyRoomParamsManager_TypeInfo;
  v52 = MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID;
  if ( !byte_59335D9 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v51 = MyRoomParamsManager_TypeInfo;
    byte_59335D9 = 1;
  }
  if ( !*(&v51->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v51, v49, v50);
    v51 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v52, v51->static_fields->_LastSelectSubFolderId_k__BackingField, 0);
  v53 = MyRoomParamsManager_TypeInfo->static_fields;
  v20 = (MyRoomParamsManager_c *)v53->DummyFolderHistory;
  if ( !v20 )
    goto LABEL_64;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v53->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v55 = (System_String_o *)(*((__int64 (__fastcall **)(MyRoomParamsManager_c *, _QWORD))v20->_1.image + 45))(
                             v20,
                             *((_QWORD *)v20->_1.image + 46));
  UnityEngine_PlayerPrefs__SetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v55, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomParamsManager__LoadIsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  bool v4; // zf
  __int64 v5; // x1
  __int64 v6; // x2
  int v7; // w8
  MyRoomParamsManager_c *v8; // x0
  char v9; // w20

  if ( (byte_5933853 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933853 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v4 = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_IS_LIST_ACTIVE, 0, 0) == 1;
  v7 = *(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1);
  if ( v4 )
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5, v6);
    if ( !byte_5933865 )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      byte_5933865 = 1;
    }
    v8 = MyRoomParamsManager_TypeInfo;
    v9 = 1;
  }
  else
  {
    if ( !v7 )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5, v6);
    if ( !byte_5933865 )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      byte_5933865 = 1;
    }
    v8 = MyRoomParamsManager_TypeInfo;
    v9 = 0;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v5, v6);
    v8 = MyRoomParamsManager_TypeInfo;
  }
  v8->static_fields->_IsListActive_k__BackingField = v9;
}


void MyRoomParamsManager__Load_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t Int; // w19
  MyRoomParamsManager_c *v7; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_WAR_ID; // x0
  int32_t LAST_PLAY_ID_DEFAULT_VALUE; // w1
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w19
  MyRoomParamsManager_c *v14; // x0
  struct MyRoomParamsManager_StaticFields *v15; // x8
  System_String_o *SAVE_KEY_LAST_PLAY_EVENT_ID; // x0
  int32_t v17; // w1
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w19
  MyRoomParamsManager_c *v21; // x0
  struct MyRoomParamsManager_StaticFields *v22; // x8
  System_String_o *v23; // x1
  System_String_o *SAVE_KEY_LAST_PLAY_TITLE; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *String; // x19
  MyRoomParamsManager_c *v33; // x0
  struct MyRoomParamsManager_StaticFields *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t v37; // w19
  MyRoomParamsManager_c *v38; // x0
  struct MyRoomParamsManager_StaticFields *v39; // x8
  System_String_o *v40; // x1
  System_String_o *SAVE_KEY_DUMMY_FOLDER_HISTORY; // x0
  Il2CppObject *v42; // x19
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  MyRoomParamsManager_c *v53; // x8
  Il2CppObject *v54; // x19
  struct MyRoomParamsManager_StaticFields *v55; // x0
  MyRoomParamsManager_c *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  int32_t v59; // w19
  MyRoomParamsManager_c *v60; // x0
  struct MyRoomParamsManager_StaticFields *v61; // x8
  int32_t v62; // w9

  if ( (byte_593384F & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_Deserialize_List_int____);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593384F = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(
          v3->static_fields->SAVE_KEY_LAST_PLAY_QUEST_ID,
          v3->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0);
  if ( !byte_593385F )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593385F = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v4, v5);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  SAVE_KEY_LAST_PLAY_WAR_ID = static_fields->SAVE_KEY_LAST_PLAY_WAR_ID;
  LAST_PLAY_ID_DEFAULT_VALUE = static_fields->LAST_PLAY_ID_DEFAULT_VALUE;
  static_fields->_LastPlayQuestId_k__BackingField = Int;
  v13 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_WAR_ID, LAST_PLAY_ID_DEFAULT_VALUE, 0);
  if ( !byte_5933860 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933860 = 1;
  }
  v14 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v11, v12);
    v14 = MyRoomParamsManager_TypeInfo;
  }
  v15 = v14->static_fields;
  SAVE_KEY_LAST_PLAY_EVENT_ID = v15->SAVE_KEY_LAST_PLAY_EVENT_ID;
  v17 = v15->LAST_PLAY_ID_DEFAULT_VALUE;
  v15->_LastPlayWarId_k__BackingField = v13;
  v20 = UnityEngine_PlayerPrefs__GetInt(SAVE_KEY_LAST_PLAY_EVENT_ID, v17, 0);
  if ( !byte_5933861 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933861 = 1;
  }
  v21 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v18, v19);
    v21 = MyRoomParamsManager_TypeInfo;
  }
  v22 = v21->static_fields;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
  SAVE_KEY_LAST_PLAY_TITLE = v22->SAVE_KEY_LAST_PLAY_TITLE;
  v22->_LastPlayEventId_k__BackingField = v20;
  String = UnityEngine_PlayerPrefs__GetString(SAVE_KEY_LAST_PLAY_TITLE, v23, 0);
  if ( !byte_5933862 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933862 = 1;
  }
  v33 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v25, v26);
    v33 = MyRoomParamsManager_TypeInfo;
  }
  v34 = v33->static_fields;
  v34->_LastPlayTitle_k__BackingField = String;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v34->_LastPlayTitle_k__BackingField,
    (int32_t)String,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v37 = UnityEngine_PlayerPrefs__GetInt(
          MyRoomParamsManager_TypeInfo->static_fields->SAVE_KEY_LAST_SELECT_SUB_FOLDER_ID,
          MyRoomParamsManager_TypeInfo->static_fields->LAST_PLAY_ID_DEFAULT_VALUE,
          0);
  if ( !byte_5933863 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933863 = 1;
  }
  v38 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v35, v36);
    v38 = MyRoomParamsManager_TypeInfo;
  }
  v39 = v38->static_fields;
  v40 = (System_String_o *)StringLiteral_1/*""*/;
  SAVE_KEY_DUMMY_FOLDER_HISTORY = v39->SAVE_KEY_DUMMY_FOLDER_HISTORY;
  v39->_LastSelectSubFolderId_k__BackingField = v37;
  v42 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(SAVE_KEY_DUMMY_FOLDER_HISTORY, v40, 0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)v42, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v43, v44);
    v45 = JsonManager__Deserialize_object_(v42, (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_List_int____);
    v53 = MyRoomParamsManager_TypeInfo;
    v54 = v45;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v46, v47);
      v53 = MyRoomParamsManager_TypeInfo;
    }
    v55 = v53->static_fields;
    v55->DummyFolderHistory = (struct System_Collections_Generic_List_int__o *)v54;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v55->DummyFolderHistory,
      (int32_t)v54,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v56 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v43, v44);
    v56 = MyRoomParamsManager_TypeInfo;
  }
  v59 = UnityEngine_PlayerPrefs__GetInt(
          v56->static_fields->SAVE_KEY_LAST_MOVED_QUEST_ID,
          v56->static_fields->DUMMY_PLAY_DEFAULT_VALUE,
          0);
  if ( !byte_5933864 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933864 = 1;
  }
  v60 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v57, v58);
    v60 = MyRoomParamsManager_TypeInfo;
  }
  v61 = v60->static_fields;
  v62 = v61->LAST_PLAY_ID_DEFAULT_VALUE;
  v61->_LastPlayMovedQuestId_k__BackingField = v59;
  v61->temporaryLastSelectSubFolderId = v62;
}


void MyRoomParamsManager__Reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  int v8; // w9

  if ( (byte_5933855 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933855 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
  if ( !byte_593377A )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593377A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v4 = (unsigned __int8)byte_593377B;
  v3->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = -1;
  if ( !v4 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_593377B = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v5 = (unsigned __int8)byte_593377E;
  v3->static_fields->_DisplayMyRoomBgWarId_k__BackingField = -1;
  if ( !v5 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_593377E = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_593377F;
  v3->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = -1;
  if ( !v6 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_593377F = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v7 = (unsigned __int8)byte_5933866;
  v3->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = -1;
  if ( !v7 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_5933866 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v8 = (unsigned __int8)byte_5933867;
  v3->static_fields->_MaxNormalWarId_k__BackingField = -1;
  if ( !v8 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v3 = MyRoomParamsManager_TypeInfo;
    byte_5933867 = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  v3->static_fields->_MaxClearedWarId_k__BackingField = -1;
}


void MyRoomParamsManager__SaveIsListActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933854 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933854 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_IS_LIST_ACTIVE, value, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  WarEntity_o **v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x24
  int32_t v23; // w22
  const MethodInfo *v24; // x2
  int32_t TypeFlag; // w0
  System_Func_object__bool__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  MyRoomParamsManager___c_c *v30; // x8
  struct MyRoomParamsManager___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__82_1; // x23
  Il2CppObject *v33; // x24
  struct MyRoomParamsManager___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  MyRoomParamsManager___c_c *v44; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x20
  struct MyRoomParamsManager___c_StaticFields *v46; // x9
  System_Func_object__int__o *_9__82_2; // x23
  Il2CppObject *v48; // x24
  struct MyRoomParamsManager___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  Il2CppObject *v57; // x0
  int monitor_high; // w20
  WarEntity_o *v59; // x8
  int32_t id; // w20
  WarEntity_o *v61; // x8
  MyRoomParamsManager_c *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  Il2CppObject *v65; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5933857 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SpotMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_21FFC50(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_21FFC50(&MyRoomControl_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_1__);
    sub_21FFC50(&Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_2__);
    sub_21FFC50(&Method_MyRoomParamsManager___c__DisplayClass82_0__SetClearQuestWarEnableMyRoomBgChange_b__0__);
    sub_21FFC50(&MyRoomParamsManager___c__DisplayClass82_0_TypeInfo);
    sub_21FFC50(&MyRoomParamsManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_5477/*"DisplayMyRoomBgWar"*/);
    sub_21FFC50(&StringLiteral_5476/*"DisplayMyRoomBgGroupId"*/);
    byte_5933857 = 1;
  }
  entity = 0;
  v65 = 0;
  v7 = sub_21FFEBC(MyRoomParamsManager___c__DisplayClass82_0_TypeInfo);
  MyRoomParamsManager___c__DisplayClass82_0___ctor((MyRoomParamsManager___c__DisplayClass82_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_75;
  *(_QWORD *)(v7 + 16) = 0;
  v16 = (WarEntity_o **)(v7 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), 0, v10, v11, v12, v13, v14, v15);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          questId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    goto LABEL_78;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !entity )
    goto LABEL_75;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
  if ( !v21 )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v21,
          &v65,
          (int32_t)Master_object,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    goto LABEL_78;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v65 || !Master_object )
    goto LABEL_75;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (Il2CppObject **)(v7 + 16),
          HIDWORD(v65[1].klass),
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
LABEL_78:
    if ( !*v16 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_object )
        goto LABEL_75;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v7 + 16),
              warId,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        return;
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    goto LABEL_75;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                               *((System_Collections_Generic_IEnumerable_TSource__o **)Master_object
                                                               + 5),
                                                               (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5476/*"DisplayMyRoomBgGroupId"*/, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5476/*"DisplayMyRoomBgGroupId"*/, 0);
  Master_object = (void *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5477/*"DisplayMyRoomBgWar"*/, 0, 0);
  if ( !*v16 )
    goto LABEL_75;
  v23 = (int)Master_object;
  Master_object = (void *)WarEntity__HasFlag(*v16, 128, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v24);
    *(_QWORD *)(v7 + 24) = NetworkManager__getTime(0);
    v26 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_MyRoomAddEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)v7,
      Method_MyRoomParamsManager___c__DisplayClass82_0__SetClearQuestWarEnableMyRoomBgChange_b__0__,
      0);
    v29 = System_Linq_Enumerable__Where_object_(
            v22,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    v30 = MyRoomParamsManager___c_TypeInfo;
    if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, v27, v28);
      v30 = MyRoomParamsManager___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__82_1 = (System_Func_object__int__o *)static_fields->__9__82_1;
    if ( !_9__82_1 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v27, v28);
        static_fields = MyRoomParamsManager___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__82_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MyRoomAddEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__82_1,
        v33,
        Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_1__,
        0);
      v34 = MyRoomParamsManager___c_TypeInfo->static_fields;
      v34->__9__82_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__82_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->__9__82_1, (int32_t)_9__82_1, v35, v36, v37, v38, v39, v40);
    }
    v41 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v29,
            (System_Func_TSource__TKey__o *)_9__82_1,
            (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    v44 = MyRoomParamsManager___c_TypeInfo;
    v45 = v41;
    if ( !*(&MyRoomParamsManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager___c_TypeInfo, v42, v43);
      v44 = MyRoomParamsManager___c_TypeInfo;
    }
    v46 = v44->static_fields;
    _9__82_2 = (System_Func_object__int__o *)v46->__9__82_2;
    if ( !_9__82_2 )
    {
      if ( !*(&v44->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v44, v42, v43);
        v46 = MyRoomParamsManager___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)v46->__9;
      _9__82_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MyRoomAddEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__82_2,
        v48,
        Method_MyRoomParamsManager___c__SetClearQuestWarEnableMyRoomBgChange_b__82_2__,
        0);
      v49 = MyRoomParamsManager___c_TypeInfo->static_fields;
      v49->__9__82_2 = (struct System_Func_MyRoomAddEntity__int__o *)_9__82_2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->__9__82_2, (int32_t)_9__82_2, v50, v51, v52, v53, v54, v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v45,
                                                                 (System_Func_TSource__TKey__o *)_9__82_2,
                                                                 (const MethodInfo_3867EF4 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    v57 = System_Linq_Enumerable__FirstOrDefault_object_(
            v56,
            (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomAddEntity___);
    if ( !v57 )
      goto LABEL_69;
    monitor_high = HIDWORD(v57[1].monitor);
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v9, v24);
    if ( !byte_593377E )
    {
      sub_21FFC50(&MyRoomParamsManager_TypeInfo);
      byte_593377E = 1;
    }
    Master_object = MyRoomParamsManager_TypeInfo;
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v9, v24);
      Master_object = MyRoomParamsManager_TypeInfo;
    }
    v59 = *v16;
    *(_DWORD *)(*((_QWORD *)Master_object + 23) + 68LL) = monitor_high;
    if ( v59 )
    {
      id = v59->fields.id;
      if ( !byte_593377F )
      {
        sub_21FFC50(&MyRoomParamsManager_TypeInfo);
        Master_object = MyRoomParamsManager_TypeInfo;
        byte_593377F = 1;
      }
      if ( !*((_DWORD *)Master_object + 57) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v9, v24);
        Master_object = MyRoomParamsManager_TypeInfo;
      }
      v61 = *v16;
      *(_DWORD *)(*((_QWORD *)Master_object + 23) + 72LL) = id;
      if ( v61 )
      {
        v23 = v61->fields.id;
        goto LABEL_69;
      }
    }
LABEL_75:
    sub_21FFECC(Master_object, v9);
  }
  if ( !*v16 )
    goto LABEL_75;
  v23 = (*v16)->fields.id;
  if ( !entity )
  {
    if ( !scriptId )
      goto LABEL_69;
LABEL_66:
    if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v9, v24);
    MyRoomParamsManager__SetDisplayMyRoomBgData(v23, 0, v24);
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
  v62 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v9, v24);
  MyRoomParamsManager__SetMaxClearedAndNormalWarId((const MethodInfo *)v62);
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v63, v64);
  MyRoomControl__ClearBackGroundData(0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5477/*"DisplayMyRoomBgWar"*/, v23, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomParamsManager__SetDisplayMyRoomBgData(int32_t warId, int32_t groupId, const MethodInfo *method)
{
  MyRoomParamsManager_c *v5; // x0
  int v6; // w9

  if ( (byte_5933859 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933859 = 1;
  }
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&groupId, method);
  if ( !byte_593377E )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593377E = 1;
  }
  v5 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, *(_QWORD *)&groupId, method);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  v6 = (unsigned __int8)byte_593377F;
  v5->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = groupId;
  if ( !v6 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    v5 = MyRoomParamsManager_TypeInfo;
    byte_593377F = 1;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&groupId, method);
    v5 = MyRoomParamsManager_TypeInfo;
  }
  v5->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = warId;
}


void MyRoomParamsManager__SetMaxClearedAndNormalWarId(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  System_Collections_Generic_List_MapControl_WarInfo__o *WarInfoAll_OrderReverse; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  int32_t MaxClearedWarId; // w20
  MyRoomParamsManager_c *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t MaxNormalWarId; // w19
  MyRoomParamsManager_c *v13; // x0

  if ( (byte_5933858 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5933858 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  WarInfoAll_OrderReverse = QuestTree__GetWarInfoAll_OrderReverse((QuestTree_o *)Instance, 0);
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v3, v4);
  MaxClearedWarId = MyRoomParamsManager__GetMaxClearedWarId(WarInfoAll_OrderReverse, v3);
  if ( !byte_5933867 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933867 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v6, v7);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  v9->static_fields->_MaxClearedWarId_k__BackingField = MaxClearedWarId;
  MaxNormalWarId = MyRoomParamsManager__GetMaxNormalWarId(WarInfoAll_OrderReverse, v6);
  if ( !byte_5933866 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933866 = 1;
  }
  v13 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v10, v11);
    v13 = MyRoomParamsManager_TypeInfo;
  }
  v13->static_fields->_MaxNormalWarId_k__BackingField = MaxNormalWarId;
}


void MyRoomParamsManager__SetTemporaryLastSelectSubFolderId(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933852 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933852 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->temporaryLastSelectSubFolderId = questId;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgGroupId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933840 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933840 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_DisplayMyRoomBgGroupId_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgGroupIdByLastClearQuest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933844 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933844 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933842 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933842 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_DisplayMyRoomBgWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_DisplayMyRoomBgWarIdByLastClearQuest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933846 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933846 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField;
}


bool MyRoomParamsManager__get_IsListActive(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_593383C & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383C = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_IsListActive_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933836 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933836 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayEventId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayMovedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_593383E & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383E = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayMovedQuestId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933832 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933832 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayQuestId_k__BackingField;
}


System_String_o *MyRoomParamsManager__get_LastPlayTitle(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933838 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933838 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayTitle_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastPlayWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933834 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933834 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastPlayWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_LastSelectSubFolderId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_593383A & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_LastSelectSubFolderId_k__BackingField;
}


int32_t MyRoomParamsManager__get_MaxClearedWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_593384A & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593384A = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_MaxClearedWarId_k__BackingField;
}


int32_t MyRoomParamsManager__get_MaxNormalWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MyRoomParamsManager_c *v3; // x0

  if ( (byte_5933848 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933848 = 1;
  }
  v3 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v1, v2);
    v3 = MyRoomParamsManager_TypeInfo;
  }
  return v3->static_fields->_MaxNormalWarId_k__BackingField;
}


void MyRoomParamsManager__set_DisplayMyRoomBgGroupId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933841 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933841 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgGroupIdByLastClearQuest(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933845 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933845 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933843 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933843 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_DisplayMyRoomBgWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_DisplayMyRoomBgWarIdByLastClearQuest(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933847 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933847 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField = value;
}


void MyRoomParamsManager__set_IsListActive(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_593383D & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383D = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_IsListActive_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayEventId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933837 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933837 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayEventId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayMovedQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_593383F & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383F = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayMovedQuestId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayQuestId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933833 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933833 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayQuestId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastPlayTitle(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MyRoomParamsManager_c *v9; // x0
  struct MyRoomParamsManager_StaticFields *static_fields; // x0

  if ( (byte_5933839 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933839 = 1;
  }
  v9 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v9 = MyRoomParamsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_LastPlayTitle_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_LastPlayTitle_k__BackingField,
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
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933835 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933835 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_LastSelectSubFolderId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_593383B & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593383B = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectSubFolderId_k__BackingField = value;
}


void MyRoomParamsManager__set_MaxClearedWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_593384B & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593384B = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_MaxClearedWarId_k__BackingField = value;
}


void MyRoomParamsManager__set_MaxNormalWarId(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomParamsManager_c *v4; // x0

  if ( (byte_5933849 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_5933849 = 1;
  }
  v4 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, method, v2);
    v4 = MyRoomParamsManager_TypeInfo;
  }
  v4->static_fields->_MaxNormalWarId_k__BackingField = value;
}


void MyRoomParamsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593386A & 1) == 0 )
  {
    sub_21FFC50(&MyRoomParamsManager___c_TypeInfo);
    byte_593386A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MyRoomParamsManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomParamsManager___c_TypeInfo->static_fields->__9 = (struct MyRoomParamsManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MyRoomParamsManager___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, warInfo);
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
    sub_21FFECC(this, 0);
  return warInfo->fields.warId;
}


bool MyRoomParamsManager___c___GetMaxNormalWarId_b__86_0(
        MyRoomParamsManager___c_o *this,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  int32_t Status; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  MyRoomParamsManager_c *v7; // x0

  if ( (byte_593386B & 1) == 0 )
  {
    this = (MyRoomParamsManager___c_o *)sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593386B = 1;
  }
  if ( !warInfo || (this = (MyRoomParamsManager___c_o *)MapControl_WarInfo__GetMine(warInfo, 0)) == 0 )
    sub_21FFECC(this, warInfo);
  if ( !WarEntity__HasFlag((WarEntity_o *)this, 128, 0) )
    goto LABEL_16;
  Status = MapControl_WarInfo__GetStatus(warInfo, 0);
  if ( Status == 1 )
    return Status;
  if ( MapControl_WarInfo__GetStatus(warInfo, 0) != 2 )
    goto LABEL_16;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5, v6);
  if ( !byte_593377D )
  {
    sub_21FFC50(&MyRoomParamsManager_TypeInfo);
    byte_593377D = 1;
  }
  v7 = MyRoomParamsManager_TypeInfo;
  if ( !*(&MyRoomParamsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo, v5, v6);
    v7 = MyRoomParamsManager_TypeInfo;
  }
  if ( v7->static_fields->_DisplayMyRoomBgWarIdByLastClearQuest_k__BackingField != warInfo->fields.warId )
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
    sub_21FFECC(this, 0);
  return warInfo->fields.warId;
}


int32_t MyRoomParamsManager___c___SetClearQuestWarEnableMyRoomBgChange_b__82_1(
        MyRoomParamsManager___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return MyRoomAddEntity__GetSortPriority(entity, 0);
}


int32_t MyRoomParamsManager___c___SetClearQuestWarEnableMyRoomBgChange_b__82_2(
        MyRoomParamsManager___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, entity);
  return entity->fields.warId == warEntity->fields.id && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, 0);
}