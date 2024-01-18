void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v9; // x0
  __int64 v10; // x1
  TutorialFlag_ImageId_array *v11; // x21
  CaldeaFolderTutorial_TutorialData_o *v12; // x22
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v14; // x21
  CaldeaFolderTutorial_TutorialData_o *v15; // x22
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  TutorialFlag_ImageId_array *v17; // x21
  CaldeaFolderTutorial_TutorialData_o *v18; // x22
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_418A05E & 1) == 0 )
  {
    sub_B2C35C(&CaldeaFolderTutorial_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v4);
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, v5);
    sub_B2C35C(&CaldeaFolderTutorial_TutorialData_TypeInfo, v6);
    byte_418A05E = 1;
  }
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID = 9999;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID = 1002;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v9 = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_11;
  v11 = (TutorialFlag_ImageId_array *)v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v9 + 32) = 21;
  v12 = (CaldeaFolderTutorial_TutorialData_o *)sub_B2C42C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v12, v11, 129, 0LL);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v7,
    CALDEA_GATE_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v12,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v9 = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_11;
  v14 = (TutorialFlag_ImageId_array *)v9;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v9 + 32) = 22;
  v15 = (CaldeaFolderTutorial_TutorialData_o *)sub_B2C42C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v15, v14, 130, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v7,
    CALDEA_WEEKLY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v15,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v9 = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v9 )
LABEL_11:
    sub_B2C434(v9, v10);
  v17 = (TutorialFlag_ImageId_array *)v9;
  if ( !*(_DWORD *)(v9 + 24) )
  {
LABEL_12:
    v26 = sub_B2C460(v9);
    sub_B2C400(v26, 0LL);
  }
  *(_DWORD *)(v9 + 32) = 33;
  v18 = (CaldeaFolderTutorial_TutorialData_o *)sub_B2C42C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  CaldeaFolderTutorial_TutorialData___ctor(v18, v17, 131, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v7,
    CALDEA_FRIEND_STORY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  static_fields->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->FolderTutorials,
    (System_Int32_array **)v7,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CaldeaFolderTutorial_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *FolderTutorials; // x0
  float eval; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A05C & 1) == 0 )
  {
    sub_B2C35C(&CaldeaFolderTutorial_TypeInfo, callback);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&TutorialFlag_TypeInfo, v7);
    byte_418A05C = 1;
  }
  value = 0LL;
  v8 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v8 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v8->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_20;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(FolderTutorials, warId, &value, (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !value )
LABEL_20:
    sub_B2C434(FolderTutorials, callback);
  eval = value->fields.eval;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(SLODWORD(eval), 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CaldeaFolderTutorial_c *v7; // x0
  CommonUI_o *FolderTutorials; // x0
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A05D & 1) == 0 )
  {
    sub_B2C35C(&CaldeaFolderTutorial_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A05D = 1;
  }
  value = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v7 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v7 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (CommonUI_o *)v7->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(FolderTutorials, v6);
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
  sub_B2C2F8(v6, imgs);
  LODWORD(v6->monitor) = flg;
}