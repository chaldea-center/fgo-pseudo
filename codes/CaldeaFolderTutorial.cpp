void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v1; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v3; // x0
  __int64 v4; // x1
  TutorialFlag_ImageId_array *v5; // x21
  CaldeaFolderTutorial_TutorialData_o *v6; // x22
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v8; // x21
  CaldeaFolderTutorial_TutorialData_o *v9; // x22
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v11; // x21
  CaldeaFolderTutorial_TutorialData_o *v12; // x22
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x0

  if ( (byte_42B164E & 1) == 0 )
  {
    sub_B52984(&CaldeaFolderTutorial_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
    sub_B52984(&TutorialFlag_ImageId___TypeInfo);
    sub_B52984(&CaldeaFolderTutorial_TutorialData_TypeInfo);
    byte_42B164E = 1;
  }
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID = 9999;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID = 1002;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v1 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v1,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v3 = sub_B5299C(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_11;
  v5 = (TutorialFlag_ImageId_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v3 + 32) = 21;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)sub_B52A54(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v6, v5, 129, 0LL);
  if ( !v1 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v1,
    CALDEA_GATE_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v6,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v3 = sub_B5299C(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_11;
  v8 = (TutorialFlag_ImageId_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v3 + 32) = 22;
  v9 = (CaldeaFolderTutorial_TutorialData_o *)sub_B52A54(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v9, v8, 130, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v1,
    CALDEA_WEEKLY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v9,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v3 = sub_B5299C(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v3 )
LABEL_11:
    sub_B52A5C(v3, v4);
  v11 = (TutorialFlag_ImageId_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
  {
LABEL_12:
    v20 = sub_B52A88(v3);
    sub_B52A28(v20, 0LL);
  }
  *(_DWORD *)(v3 + 32) = 33;
  v12 = (CaldeaFolderTutorial_TutorialData_o *)sub_B52A54(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v12, v11, 131, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v1,
    CALDEA_FRIEND_STORY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v12,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  static_fields->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v1;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->FolderTutorials,
    (System_Int32_array **)v1,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  CaldeaFolderTutorial_c *v5; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *FolderTutorials; // x0
  float eval; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B164C & 1) == 0 )
  {
    sub_B52984(&CaldeaFolderTutorial_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B164C = 1;
  }
  value = 0LL;
  v5 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v5 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v5->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_20;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(FolderTutorials, warId, &value, (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !value )
LABEL_20:
    sub_B52A5C(FolderTutorials, callback);
  eval = value->fields.eval;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29217932(SLODWORD(eval), 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v3; // x1
  CaldeaFolderTutorial_c *v4; // x0
  CommonUI_o *FolderTutorials; // x0
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B164D & 1) == 0 )
  {
    sub_B52984(&CaldeaFolderTutorial_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B164D = 1;
  }
  value = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v4 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (CommonUI_o *)v4->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B52A5C(FolderTutorials, v3);
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
  sub_B52920(v6);
  LODWORD(v6->monitor) = flg;
}