void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  TutorialFlag_ImageId_array *v13; // x21
  CaldeaFolderTutorial_TutorialData_o *v14; // x22
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  TutorialFlag_ImageId_array *v18; // x21
  CaldeaFolderTutorial_TutorialData_o *v19; // x22
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v21; // x1
  __int64 v22; // x2
  TutorialFlag_ImageId_array *v23; // x21
  CaldeaFolderTutorial_TutorialData_o *v24; // x22
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0

  if ( (byte_4215D59 & 1) == 0 )
  {
    sub_B0D8A4(&CaldeaFolderTutorial_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v5);
    sub_B0D8A4(&TutorialFlag_ImageId___TypeInfo, v6);
    sub_B0D8A4(&CaldeaFolderTutorial_TutorialData_TypeInfo, v7);
    byte_4215D59 = 1;
  }
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID = 9999;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID = 1002;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo,
                                                                                                  v1,
                                                                                                  v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v10 = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_11;
  v13 = (TutorialFlag_ImageId_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v10 + 32) = 21;
  v14 = (CaldeaFolderTutorial_TutorialData_o *)sub_B0D974(CaldeaFolderTutorial_TutorialData_TypeInfo, v11, v12);
  CaldeaFolderTutorial_TutorialData___ctor(v14, v13, 129, 0LL);
  if ( !v8 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v8,
    CALDEA_GATE_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v14,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v10 = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_11;
  v18 = (TutorialFlag_ImageId_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v10 + 32) = 22;
  v19 = (CaldeaFolderTutorial_TutorialData_o *)sub_B0D974(CaldeaFolderTutorial_TutorialData_TypeInfo, v16, v17);
  CaldeaFolderTutorial_TutorialData___ctor(v19, v18, 130, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v8,
    CALDEA_WEEKLY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v19,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v10 = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
LABEL_11:
    sub_B0D97C(v10);
  v23 = (TutorialFlag_ImageId_array *)v10;
  if ( !*(_DWORD *)(v10 + 24) )
  {
LABEL_12:
    v32 = sub_B0D9A8(v10);
    sub_B0D948(v32, 0LL);
  }
  *(_DWORD *)(v10 + 32) = 33;
  v24 = (CaldeaFolderTutorial_TutorialData_o *)sub_B0D974(CaldeaFolderTutorial_TutorialData_TypeInfo, v21, v22);
  CaldeaFolderTutorial_TutorialData___ctor(v24, v23, 131, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v8,
    CALDEA_FRIEND_STORY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v24,
    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  static_fields->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->FolderTutorials,
    (System_Int32_array **)v8,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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

  if ( (byte_4215D57 & 1) == 0 )
  {
    sub_B0D8A4(&CaldeaFolderTutorial_TypeInfo, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v7);
    byte_4215D57 = 1;
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
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(FolderTutorials, warId, &value, (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !value )
LABEL_20:
    sub_B0D97C(FolderTutorials);
  eval = value->fields.eval;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28088484(SLODWORD(eval), 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  CaldeaFolderTutorial_c *v6; // x0
  CommonUI_o *FolderTutorials; // x0
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4215D58 & 1) == 0 )
  {
    sub_B0D8A4(&CaldeaFolderTutorial_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4215D58 = 1;
  }
  value = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v6 = CaldeaFolderTutorial_TypeInfo;
  if ( (BYTE3(CaldeaFolderTutorial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v6 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (CommonUI_o *)v6->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B0D97C(FolderTutorials);
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
  sub_B0D840(v6, imgs);
  LODWORD(v6->monitor) = flg;
}