void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  TutorialFlag_ImageId_array *v18; // x21
  CaldeaFolderTutorial_TutorialData_o *v19; // x22
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  TutorialFlag_ImageId_array *v24; // x21
  CaldeaFolderTutorial_TutorialData_o *v25; // x22
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  TutorialFlag_ImageId_array *v30; // x21
  CaldeaFolderTutorial_TutorialData_o *v31; // x22
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FB552 & 1) == 0 )
  {
    sub_B16FFC(&CaldeaFolderTutorial_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v7);
    sub_B16FFC(&TutorialFlag_ImageId___TypeInfo, v8);
    sub_B16FFC(&CaldeaFolderTutorial_TutorialData_TypeInfo, v9);
    byte_40FB552 = 1;
  }
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID = 9999;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID = 1002;
  CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo,
                                                                                                   v1,
                                                                                                   v2,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v13 = sub_B17014(TutorialFlag_ImageId___TypeInfo, 1LL, v12);
  if ( !v13 )
    goto LABEL_11;
  v18 = (TutorialFlag_ImageId_array *)v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = 21;
  v19 = (CaldeaFolderTutorial_TutorialData_o *)sub_B170CC(
                                                 CaldeaFolderTutorial_TutorialData_TypeInfo,
                                                 v14,
                                                 v15,
                                                 v16,
                                                 v17);
  CaldeaFolderTutorial_TutorialData___ctor(v19, v18, 129, 0LL);
  if ( !v10 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v10,
    CALDEA_GATE_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v19,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v13 = sub_B17014(TutorialFlag_ImageId___TypeInfo, 1LL, v21);
  if ( !v13 )
    goto LABEL_11;
  v24 = (TutorialFlag_ImageId_array *)v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = 22;
  v25 = (CaldeaFolderTutorial_TutorialData_o *)sub_B170CC(
                                                 CaldeaFolderTutorial_TutorialData_TypeInfo,
                                                 v14,
                                                 v15,
                                                 v22,
                                                 v23);
  CaldeaFolderTutorial_TutorialData___ctor(v25, v24, 130, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v10,
    CALDEA_WEEKLY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v25,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v13 = sub_B17014(TutorialFlag_ImageId___TypeInfo, 1LL, v27);
  if ( !v13 )
LABEL_11:
    sub_B170D4();
  v30 = (TutorialFlag_ImageId_array *)v13;
  if ( !*(_DWORD *)(v13 + 24) )
  {
LABEL_12:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  *(_DWORD *)(v13 + 32) = 33;
  v31 = (CaldeaFolderTutorial_TutorialData_o *)sub_B170CC(
                                                 CaldeaFolderTutorial_TutorialData_TypeInfo,
                                                 v14,
                                                 v15,
                                                 v28,
                                                 v29);
  CaldeaFolderTutorial_TutorialData___ctor(v31, v30, 131, 0LL);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v10,
    CALDEA_FRIEND_STORY_WAR_ID,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v31,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  static_fields->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->FolderTutorials,
    (System_Int32_array **)v10,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  CommonUI_o *Instance; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB550 & 1) == 0 )
  {
    sub_B16FFC(&CaldeaFolderTutorial_TypeInfo, callback);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&TutorialFlag_TypeInfo, v7);
    byte_40FB550 = 1;
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
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          FolderTutorials,
          warId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !value )
LABEL_20:
    sub_B170D4();
  eval = value->fields.eval;
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28023340(SLODWORD(eval), 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && Instance )
    {
      CommonUI__OpenTutorialImageDialog(
        Instance,
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *FolderTutorials; // x0
  CommonUI_o *Instance; // x0
  int32_t EventID; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB551 & 1) == 0 )
  {
    sub_B16FFC(&CaldeaFolderTutorial_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    byte_40FB551 = 1;
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
  FolderTutorials = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_16;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         FolderTutorials,
         warId,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && Instance )
    {
      CommonUI__OpenTutorialImageDialog(
        Instance,
        *(TutorialFlag_ImageId_array **)&value->fields.viewpoint,
        -1,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_B16F98((BattleServantConfConponent_o *)v6, (System_Int32_array **)imgs, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = flg;
}