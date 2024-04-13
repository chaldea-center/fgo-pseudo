void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v21; // x0
  __int64 v22; // x1
  TutorialFlag_ImageId_array *v23; // x21
  CaldeaFolderTutorial_TutorialData_o *v24; // x22
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v26; // x21
  CaldeaFolderTutorial_TutorialData_o *v27; // x22
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v29; // x21
  CaldeaFolderTutorial_TutorialData_o *v30; // x22
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0

  if ( (byte_42EB615 & 1) == 0 )
  {
    sub_B5D5C4(&CaldeaFolderTutorial_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CaldeaFolderTutorial_TutorialData_TypeInfo, v16, v17, v18);
    byte_42EB615 = 1;
  }
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID = 9999;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID = 1002;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v21 = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_11;
  v23 = (TutorialFlag_ImageId_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v21 + 32) = 21;
  v24 = (CaldeaFolderTutorial_TutorialData_o *)sub_B5D694(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v24, v23, 129, 0LL);
  if ( !v19 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v19,
    CALDEA_GATE_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v24,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v21 = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_11;
  v26 = (TutorialFlag_ImageId_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v21 + 32) = 22;
  v27 = (CaldeaFolderTutorial_TutorialData_o *)sub_B5D694(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v27, v26, 130, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v19,
    CALDEA_WEEKLY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v27,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v21 = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v21 )
LABEL_11:
    sub_B5D69C(v21, v22);
  v29 = (TutorialFlag_ImageId_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
  {
LABEL_12:
    v38 = sub_B5D6C8(v21);
    sub_B5D668(v38, 0LL);
  }
  *(_DWORD *)(v21 + 32) = 33;
  v30 = (CaldeaFolderTutorial_TutorialData_o *)sub_B5D694(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v30, v29, 131, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v19,
    CALDEA_FRIEND_STORY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v30,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  static_fields->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->FolderTutorials,
    (System_Int32_array **)v19,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CaldeaFolderTutorial_c *v15; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *FolderTutorials; // x0
  float eval; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB613 & 1) == 0 )
  {
    sub_B5D5C4(&CaldeaFolderTutorial_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v12, v13, v14);
    byte_42EB613 = 1;
  }
  value = 0LL;
  v15 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v15 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v15->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_20;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(FolderTutorials, warId, &value, (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !value )
LABEL_20:
    sub_B5D69C(FolderTutorials, callback);
  eval = value->fields.eval;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(SLODWORD(eval), 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        *(TutorialFlag_ImageId_array **)&value->fields.viewpoint,
        LODWORD(value->fields.eval),
        callback,
        0LL,
        0LL,
        0LL);
      return 1;
    }
    goto LABEL_20;
  }
  IsTutorialAvailable = 1;
LABEL_15:
  ActionExtensions__Call(callback, 0LL);
  return IsTutorialAvailable;
}


void __fastcall CaldeaFolderTutorial__OnClickHelp(int32_t warId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  CaldeaFolderTutorial_c *v15; // x0
  CommonUI_o *FolderTutorials; // x0
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB614 & 1) == 0 )
  {
    sub_B5D5C4(&CaldeaFolderTutorial_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42EB614 = 1;
  }
  value = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v15 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v15 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (CommonUI_o *)v15->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        FolderTutorials,
        *(TutorialFlag_ImageId_array **)&value->fields.viewpoint,
        -1,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(FolderTutorials, v14);
  }
  EventID = WarMaster__getEventID(warId, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(EventID, 33, 0LL, 0LL);
}


void __fastcall CaldeaFolderTutorial_TutorialData___ctor(
        CaldeaFolderTutorial_TutorialData_o *this,
        TutorialFlag_ImageId_array *imgs,
        int32_t flg,
        const MethodInfo *method)
{
  CaldeaFolderTutorial_TutorialData_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_B5D560(v6);
  LODWORD(v6->monitor) = flg;
}