void __fastcall MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AutomatedAction_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E8732 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff, (_DWORD)method, v3);
    byte_42E8732 = 1;
  }
  Instance = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AutomatedAction__SetBackGroundUntouchable(Instance, onoff, 0LL);
}


void __fastcall MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.afterVoiceCallback,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  else
  {
    ActionExtensions__Call(callback, 0LL);
  }
}


void __fastcall MissionActionManager__TerminateMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *afterVoiceCallback; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_42E8734 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8734 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v6, v7, v8, v9, v10, v11);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v13, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v17; // x19

  if ( (byte_42E8733 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8733 = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.afterVoiceCallback, 0LL, v10, v11, v12, v13, v14, v15);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v17, 0LL);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_0(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  MissionActionManager_o *v27; // x0
  bool v28; // w1
  const MethodInfo *v29; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8735 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, skip, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_MissionActionManager_doMissionAction__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15, v16);
    this = (MissionActionManager_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42E8735 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, v4, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v23, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B5D69C(myFSM, v25);
  }
  v26 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v26
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[v26 - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    v27 = (MissionActionManager_o *)sub_B5D990(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v27, v28, v29);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_1(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v25; // x1
  __int64 v26; // x9
  MissionActionManager_o *v27; // x0
  const MethodInfo *v28; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_42E8736 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, skip, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_MissionActionManager_doMissionAction__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    this = (MissionActionManager_o *)sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v17, v18, v19);
    byte_42E8736 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, v4, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v23, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_B5D69C(myFSM, v25);
  }
  v26 = *(&TerminalSceneComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&myFSM->klass->_2.bitflags2 + 1) >= (unsigned int)v26
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[v26 - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_18327136(myFSM, 0LL);
  }
  else
  {
    v27 = (MissionActionManager_o *)sub_B5D990(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v27, v28);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E8737 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E8737 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !v8 )
      sub_B5D69C(0LL, v9);
    MissionNotifyManager__EndPause(v8, 0LL);
    this->fields.isStopMissionNotify = 0;
  }
  MissionActionManager__doMissionAction(this, method);
}


void __fastcall MissionActionManager__addMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  DataManager_o *Instance; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v55; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 *v61; // x8
  System_Collections_Generic_List_Enumerator_T__o *v62; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v63; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v64; // x21
  Il2CppObject *v65; // x22
  EventMissionActionInfo_o *v66; // x21
  __int64 v67; // x0
  __int64 v68; // x1
  BattleServantConfConponent_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E872E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, missionID, progressType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&EventMissionActionInfo_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v43, v44, v45);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    byte_42E872E = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_24;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v55 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityListFromIDnType;
    v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v56,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v78,
      v55,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v78,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v78.fields.current;
      v58 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27154404(v58, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v56 )
        sub_B5D69C(v59, v60);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v56,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v61 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v62 = &v78;
    goto LABEL_19;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(Instance, v53);
  }
  v63 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v63 )
    return;
  v64 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v63;
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    v64,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v77,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v65 = v77.fields.current;
    v66 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
    EventMissionActionInfo___ctor(v66, (EventMissionActionEntity_o *)v65, 0LL);
    if ( !v56 )
      sub_B5D69C(v67, v68);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v56,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
  }
  v61 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
  v62 = &v77;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    v62,
    (const MethodInfo_201EFCC *)*v61);
  if ( !v56 )
    goto LABEL_24;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (BattleServantConfConponent_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v56,
    eventMissionActionList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (BattleServantConfConponent_c *)v56;
  sub_B5D560(p_eventMissionActionList, (System_Int32_array **)v56, v71, v72, v73, v74, v75, v76);
}


bool __fastcall MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  System_Collections_Generic_List_EventMissionActionAddEntity__o *v45; // x21
  MissionActionManager___c_c *v46; // x0
  struct MissionActionManager___c_StaticFields *v47; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_0; // x19
  Il2CppObject *v49; // x20
  struct MissionActionManager___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 *v57; // x8
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v58; // x0
  System_Predicate_T__o *v59; // x1
  DataManager_o *v60; // x19
  MissionActionManager___c_c *v61; // x8
  struct MissionActionManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__8_1; // x20
  Il2CppObject *v64; // x21
  struct MissionActionManager___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7

  if ( (byte_42E8730 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, progressType, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Predicate_EventMissionActionEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_EventMissionActionEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_MissionActionManager___c__checkScroll_b__8_0__, v33, v34, v35);
    sub_B5D5C4(&Method_MissionActionManager___c__checkScroll_b__8_1__, v36, v37, v38);
    sub_B5D5C4(&MissionActionManager___c_TypeInfo, v39, v40, v41);
    byte_42E8730 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType || (v45 = EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v60 = Instance;
        v61 = MissionActionManager___c_TypeInfo;
        if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
          v61 = MissionActionManager___c_TypeInfo;
        }
        static_fields = v61->static_fields;
        _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v61);
            static_fields = MissionActionManager___c_TypeInfo->static_fields;
          }
          v64 = (Il2CppObject *)static_fields->__9;
          _9__8_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventMissionActionEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__8_1,
            v64,
            Method_MissionActionManager___c__checkScroll_b__8_1__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_EventMissionActionEntity___ctor__);
          v65 = MissionActionManager___c_TypeInfo->static_fields;
          v65->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v65->__9__8_1,
            (System_Int32_array **)_9__8_1,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
        }
        if ( v60 )
        {
          v57 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v58 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v60;
          v59 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
                   v58,
                   v59,
                   (const MethodInfo_305784C *)*v57);
        }
      }
    }
LABEL_29:
    sub_B5D69C(Instance, v43);
  }
  v46 = MissionActionManager___c_TypeInfo;
  if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
    v46 = MissionActionManager___c_TypeInfo;
  }
  v47 = v46->static_fields;
  _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v47->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v47 = MissionActionManager___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)v47->__9;
    _9__8_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventMissionActionAddEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__8_0,
      v49,
      Method_MissionActionManager___c__checkScroll_b__8_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
    v50 = MissionActionManager___c_TypeInfo->static_fields;
    v50->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v58 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)v45;
  v59 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(v58, v59, (const MethodInfo_305784C *)*v57);
}


void __fastcall MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 optionId; // x20
  System_Action_c **v5; // x23
  UnityEngine_Object_c **v6; // x26
  __int64 *v7; // x27
  ScriptManager_c **v8; // x28
  EventMissionActionInfo_o *v10; // x25
  __int64 eventMissionActionList; // x0
  __int64 v12; // x9
  __int64 v13; // x8
  UnityEngine_Object_c *v14; // x0
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v15; // x8
  EventMissionActionInfo_o *v16; // x8
  __int64 v17; // x9
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v18; // x8
  EventMissionActionInfo_o *v19; // x8
  ScriptManager_c **v20; // x22
  UnityEngine_Object_c **v21; // x28
  __int64 *v22; // x26
  System_String_array *v23; // x25
  System_Action_c **v24; // x27
  System_Action_o *v25; // x23
  __int64 v26; // x9
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v79; // x19
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  struct System_String_array *vals; // x21
  const MethodInfo *v87; // x2
  int max_length; // w8
  int v89; // w22
  __int64 v90; // x9
  System_String_o *ValMessage; // x20
  ScriptManager_CallbackFunc_o *v92; // x0
  __int64 *v93; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v95; // x21
  System_Action_o *v96; // x22
  struct System_Collections_Generic_List_EventMissionActionInfo__o *v97; // x8
  WebViewManager_o *v98; // x0
  System_String_array *v99; // x20
  CommonUI_o *v100; // x21
  System_Action_o *v101; // x22
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v108; // x9
  System_Int32_array **v109; // x1
  ScriptManager_CallbackFunc_o *v110; // x21
  ScriptManager_c *v111; // x0
  __int64 v112; // x8
  UnityEngine_Object_c *v113; // x0
  UnityEngine_Object_o *v114; // x20
  __int64 v115; // x8
  CompleteMissionListViewManager_o *v116; // x20
  int32_t v117; // w21
  System_Action_o *v118; // x22
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v120; // w21
  System_Action_o *v121; // x22
  System_String_array *VoiceIds; // x21
  System_Action_o *v123; // x22
  System_Action_o *v124; // x23
  __int64 v125; // x9
  int32_t ValID; // w0
  const MethodInfo *v127; // x3
  __int64 v128; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v130; // w22
  System_Action_o *v131; // x23
  MasterMissionComponent_o *v132; // x20
  System_String_array *v133; // x21
  System_Action_o *v134; // x22
  __int64 v135; // x0

  v5 = &System_Action_TypeInfo;
  v6 = &UnityEngine_Object_TypeInfo;
  v7 = &Method_MissionActionManager_doMissionAction__;
  v8 = &ScriptManager_TypeInfo;
  while ( 2 )
  {
    if ( (byte_42E8731 & 1) == 0 )
    {
      sub_B5D5C4(v5, (_DWORD)method, (_DWORD)v2, v3);
      sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v27, v28, v29);
      sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v30, v31, v32);
      sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v33, v34, v35);
      sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v36, v37, v38);
      sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v39, v40, v41);
      sub_B5D5C4(&Method_MissionActionManager__doMissionAction_b__9_0__, v42, v43, v44);
      sub_B5D5C4(&Method_MissionActionManager__doMissionAction_b__9_1__, v45, v46, v47);
      sub_B5D5C4(&Method_MissionActionManager__doMissionAction_b__9_2__, v48, v49, v50);
      sub_B5D5C4(&Method_MissionActionManager__doMissionAction_b__9_3__, v51, v52, v53);
      sub_B5D5C4(&Method_MissionActionManager_VoiceEnds__, v54, v55, v56);
      sub_B5D5C4(v7, v57, v58, v59);
      sub_B5D5C4(v6, v60, v61, v62);
      sub_B5D5C4(v8, v63, v64, v65);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v66, v67, v68);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v69, v70, v71);
      sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, v72, v73, v74);
      sub_B5D5C4(&StringLiteral_1/*""*/, v75, v76, v77);
      byte_42E8731 = 1;
    }
    eventMissionActionList = (__int64)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_129;
    if ( *(int *)(eventMissionActionList + 24) <= 0 )
    {
      MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        (MissionActionManager_o *)eventMissionActionList,
        0,
        v2);
      if ( !this->fields.isVoicePlaying )
      {
LABEL_49:
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3((*v6)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v6)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v6);
        if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
        {
          v79 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( (BYTE3((*v6)->vtable._0_Equals.methodPtr) & 4) != 0 && !(*v6)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v6);
          UnityEngine_Object__Destroy_35620236(v79, 0LL);
        }
      }
      return;
    }
    v10 = *(EventMissionActionInfo_o **)(*(_QWORD *)(eventMissionActionList + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventMissionActionList,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
    if ( !v10 )
      goto LABEL_129;
    switch ( v10->fields.missionActionType )
    {
      case 1:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            return;
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
          if ( !eventMissionActionList )
            goto LABEL_129;
          MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v10, 0LL);
          v92 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
          v93 = &Method_MissionActionManager__doMissionAction_b__9_1__;
LABEL_94:
          v110 = v92;
          ScriptManager_CallbackFunc___ctor(v92, (Il2CppObject *)this, *v93, 0LL);
          v111 = *v8;
          if ( (BYTE3((*v8)->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v111);
          ScriptManager__PlayScenario(ValMessage, v110, 0, 0LL);
          return;
        }
        this->fields.isVoicePlaying = 0;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v90 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v90
          && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v90 - 8) == EventRewardRootComponent_TypeInfo )
        {
          EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
          ValMessage = EventMissionActionInfo__getValMessage(v10, 0LL);
          v92 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
          v93 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          goto LABEL_94;
        }
        goto LABEL_130;
      case 2:
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v95 = EventMissionActionInfo__getValMessage(v10, 0LL);
        v96 = (System_Action_o *)sub_B5D694(*v5);
        System_Action___ctor(v96, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
        if ( !Instance )
          goto LABEL_129;
        CommonUI__OpenNotificationDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v95,
          v96,
          150,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0LL,
          0LL);
        return;
      case 3:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) != 0 )
        {
          v97 = this->fields.eventMissionActionList;
          if ( !v97 )
            goto LABEL_129;
          optionId = v97->fields._size < 1 ? 0LL : (__int64)v97->fields._items->m_Items[0];
          ValID = EventMissionActionInfo__getValID(v10, 0LL);
          MissionActionManager__addMissionAction(this, ValID, 3, v127);
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_129;
          eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
          if ( !eventMissionActionList )
            goto LABEL_129;
          v128 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
          if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) >= (unsigned int)v128
            && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v128 - 8) == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v130 = EventMissionActionInfo__getValID(v10, 0LL);
            v131 = (System_Action_o *)sub_B5D694(*v5);
            System_Action___ctor(v131, (Il2CppObject *)this, *v7, 0LL);
            if ( !missionItemListViewManager )
              goto LABEL_129;
            EventMissionItemListViewManager__setNextMissionInfo(
              missionItemListViewManager,
              v10,
              (EventMissionActionInfo_o *)optionId,
              v130,
              v131,
              0LL);
            return;
          }
LABEL_130:
          sub_B5D990(eventMissionActionList);
          goto LABEL_131;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v112 = eventMissionActionList;
        v113 = *v6;
        v114 = *(UnityEngine_Object_o **)(v112 + 1240);
        if ( (BYTE3((*v6)->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v113);
        if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            v115 = *(_QWORD *)(eventMissionActionList + 1240);
            if ( v115 )
            {
              v116 = *(CompleteMissionListViewManager_o **)(v115 + 64);
              v117 = EventMissionActionInfo__getValID(v10, 0LL);
              v118 = (System_Action_o *)sub_B5D694(*v5);
              System_Action___ctor(v118, (Il2CppObject *)this, *v7, 0LL);
              if ( v116 )
              {
                CompleteMissionListViewManager__setNextMissionInfo(v116, v117, v118, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
        {
          eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( eventMissionActionList )
          {
            eventMissionActionList = *(_QWORD *)(eventMissionActionList + 1248);
            if ( eventMissionActionList )
            {
              listViewManager = MasterMissionComponent__get_listViewManager(
                                  (MasterMissionComponent_o *)eventMissionActionList,
                                  0LL);
              v120 = EventMissionActionInfo__getValID(v10, 0LL);
              v121 = (System_Action_o *)sub_B5D694(*v5);
              System_Action___ctor(v121, (Il2CppObject *)this, *v7, 0LL);
              if ( listViewManager )
              {
                MasterMissionListViewManager__setNextMissionInfo(listViewManager, v120, v121, 0LL);
                return;
              }
            }
          }
          goto LABEL_129;
        }
        return;
      case 4:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          continue;
        optionId = (unsigned int)v10->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_57;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v12 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v12
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v12 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1260) )
          continue;
LABEL_57:
        optionId = sub_B5D694(TerminalTransitionInfo_TypeInfo);
        TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)optionId, 0LL);
        if ( !optionId )
          goto LABEL_129;
        *(_DWORD *)(optionId + 16) = v10->fields.missionId;
        vals = v10->fields.vals;
        *(_DWORD *)(optionId + 48) = v10->fields.optionId;
        *(_QWORD *)(optionId + 32) = vals;
        sub_B5D560(
          (BattleServantConfConponent_o *)(optionId + 32),
          (System_Int32_array **)vals,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        if ( !vals )
          goto LABEL_129;
        max_length = vals->max_length;
        if ( max_length < 1 )
          goto LABEL_86;
        v89 = 0;
        while ( 2 )
        {
          if ( v89 >= (unsigned int)max_length )
            goto LABEL_132;
          eventMissionActionList = System_Int32__Parse(vals->m_Items[v89], 0LL);
          if ( (_DWORD)eventMissionActionList != 800 )
          {
            max_length = vals->max_length;
            v89 += 2;
            if ( v89 >= max_length )
              goto LABEL_86;
            continue;
          }
          break;
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v108 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v108
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v108 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        v109 = *(System_Int32_array ***)(eventMissionActionList + 1544);
        *(_QWORD *)(optionId + 40) = v109;
        sub_B5D560((BattleServantConfConponent_o *)(optionId + 40), v109, v102, v103, v104, v105, v106, v107);
LABEL_86:
        MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
          (MissionActionManager_o *)eventMissionActionList,
          0,
          v87);
        this->fields.isGoneTerminal = 1;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        AvalonSceneManager__transitionScene(
          (AvalonSceneManager_o *)eventMissionActionList,
          34,
          1,
          (Il2CppObject *)optionId,
          0LL);
        if ( !this->fields.isVoicePlaying )
          goto LABEL_49;
        return;
      case 5:
        optionId = (unsigned int)v10->fields.optionId;
        if ( !(_DWORD)optionId )
          goto LABEL_33;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = *(_QWORD *)(eventMissionActionList + 24);
        if ( !eventMissionActionList )
          goto LABEL_129;
        method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
        v17 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)eventMissionActionList + 300LL) < (unsigned int)v17
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)eventMissionActionList + 200LL) + 8 * v17 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_130;
        }
        if ( (_DWORD)optionId != *(_DWORD *)(eventMissionActionList + 1260) )
          continue;
LABEL_33:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   72,
                                   0LL);
        if ( (eventMissionActionList & 1) == 0 )
          continue;
        v18 = this->fields.eventMissionActionList;
        this->fields.isVoicePlaying = 1;
        if ( !v18 )
          goto LABEL_129;
        if ( v18->fields._size >= 1 )
        {
          v19 = v18->fields._items->m_Items[0];
          if ( v19 )
          {
            if ( v19->fields.missionActionType == 8 )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( eventMissionActionList )
              {
                optionId = *(_QWORD *)(eventMissionActionList + 24);
                VoiceIds = EventMissionActionInfo__getVoiceIds(v10, 0LL);
                v123 = (System_Action_o *)sub_B5D694(*v5);
                System_Action___ctor(v123, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                v124 = (System_Action_o *)sub_B5D694(*v5);
                System_Action___ctor(v124, (Il2CppObject *)this, *v7, 0LL);
                if ( optionId )
                {
                  v125 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) >= (unsigned int)v125
                    && *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v125 - 8) == EventRewardRootComponent_TypeInfo )
                  {
                    EventRewardRootComponent__playEventMissionSvtVoice_19132652(
                      (EventRewardRootComponent_o *)optionId,
                      VoiceIds,
                      v123,
                      v124,
                      0LL);
                    return;
                  }
LABEL_131:
                  eventMissionActionList = sub_B5D990(optionId);
LABEL_132:
                  v135 = sub_B5D6C8(eventMissionActionList);
                  sub_B5D668(v135, 0LL);
                }
              }
LABEL_129:
              sub_B5D69C(eventMissionActionList, method);
            }
          }
        }
        v20 = v8;
        v21 = v6;
        v22 = v7;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 24);
        v23 = EventMissionActionInfo__getVoiceIds(v10, 0LL);
        v24 = v5;
        v25 = (System_Action_o *)sub_B5D694(*v5);
        System_Action___ctor(v25, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
        if ( !optionId )
          goto LABEL_129;
        v26 = *(&EventRewardRootComponent_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)optionId + 300LL) < (unsigned int)v26
          || *(EventRewardRootComponent_c **)(*(_QWORD *)(*(_QWORD *)optionId + 200LL) + 8 * v26 - 8) != EventRewardRootComponent_TypeInfo )
        {
          goto LABEL_131;
        }
        EventRewardRootComponent__playEventMissionSvtVoice((EventRewardRootComponent_o *)optionId, v23, v25, 0LL);
        v5 = v24;
        v7 = v22;
        v6 = v21;
        v8 = v20;
        continue;
      case 6:
        v98 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v99 = v10->fields.vals;
        v100 = (CommonUI_o *)v98;
        v101 = (System_Action_o *)sub_B5D694(*v5);
        System_Action___ctor(v101, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
        if ( !v100 )
          goto LABEL_129;
        CommonUI__OpenImageDialogWithAssets(v100, v99, v101, 0LL, 0LL, 0LL);
        return;
      case 7:
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        v13 = eventMissionActionList;
        v14 = *v6;
        optionId = *(_QWORD *)(v13 + 1240);
        if ( (BYTE3((*v6)->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v14);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
          continue;
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        eventMissionActionList = AvalonSceneManager__checkNowScene(
                                   (AvalonSceneManager_o *)eventMissionActionList,
                                   34,
                                   0LL);
        if ( (eventMissionActionList & 1) == 0 )
          continue;
        v15 = this->fields.eventMissionActionList;
        if ( !v15 )
          goto LABEL_129;
        if ( v15->fields._size >= 1 )
        {
          v16 = v15->fields._items->m_Items[0];
          if ( v16 )
          {
            if ( v16->fields.missionActionType == 8 )
            {
              eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !eventMissionActionList )
                goto LABEL_129;
              v132 = *(MasterMissionComponent_o **)(eventMissionActionList + 1248);
              v133 = EventMissionActionInfo__getVoiceIds(v10, 0LL);
              v134 = (System_Action_o *)sub_B5D694(*v5);
              System_Action___ctor(v134, (Il2CppObject *)this, *v7, 0LL);
              if ( !v132 )
                goto LABEL_129;
              MasterMissionComponent__playEventMissionSvtVoice_25295040(v132, v133, v134, 0LL);
              return;
            }
          }
        }
        eventMissionActionList = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !eventMissionActionList )
          goto LABEL_129;
        optionId = *(_QWORD *)(eventMissionActionList + 1248);
        eventMissionActionList = (__int64)EventMissionActionInfo__getVoiceIds(v10, 0LL);
        if ( !optionId )
          goto LABEL_129;
        MasterMissionComponent__playEventMissionSvtVoice(
          (MasterMissionComponent_o *)optionId,
          (System_String_array *)eventMissionActionList,
          0LL);
        continue;
      case 8:
        continue;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__setMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  DataManager_o *Instance; // x0
  __int64 v66; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SafeActionListFromIDnType; // x0
  Il2CppObject *current; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x24
  EventMissionActionInfo_o *v70; // x25
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityListFromIDnType; // x0
  Il2CppObject *v75; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x20
  EventMissionActionInfo_o *v77; // x21
  __int64 v78; // x0
  __int64 v79; // x1
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+10h] [xbp-B0h] BYREF
  int v81[2]; // [xsp+28h] [xbp-98h]
  int v82; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42E872D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, missionID, progressType, restricted);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&EventMissionActionInfo_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    byte_42E872D = 1;
  }
  memset(&v84, 0, sizeof(v84));
  memset(&v83, 0, sizeof(v83));
  v82 = 0;
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v57;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventMissionActionList,
    (System_Int32_array **)v57,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_32:
    sub_B5D69C(Instance, v66);
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType((EventMissionActionAddMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionAddMaster__GetEntityListFromIDnType((EventMissionActionAddMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_16;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v80,
      SafeActionListFromIDnType,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v84 = v80;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v84,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v84.fields.current;
      v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v70 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27154404(v70, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v69 )
        sub_B5D69C(v71, v72);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v69,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v81[0] = 232;
    v82 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v84,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__);
    v82 = 0;
    goto LABEL_30;
  }
LABEL_16:
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_32;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getSafeActionListFromIDnType((EventMissionActionMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionActionMaster__getEntityListFromIDnType((EventMissionActionMaster_o *)Instance, missionID, progressType, 0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_30;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v83,
      EntityListFromIDnType,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v83,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v75 = v83.fields.current;
      v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_eventMissionActionList;
      v77 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v77, (EventMissionActionEntity_o *)v75, 0LL);
      if ( !v76 )
        sub_B5D69C(v78, v79);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v76,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionInfo__Add__);
    }
    v81[0] = 232;
    ++v82;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v83,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__);
    if ( v82 )
    {
      if ( v81[v82 - 1] == 232 )
        --v82;
    }
  }
LABEL_30:
  this->fields.isVoicePlaying = 0;
  MissionActionManager__doMissionAction(this, v73);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__setStatusMissionNotify(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        bool restricted,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_List_EventMissionActionAddEntity__o *Instance; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v56; // x23
  MissionActionManager___c_c *v57; // x0
  struct MissionActionManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_0; // x24
  Il2CppObject *v60; // x25
  struct MissionActionManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_List_MapControl_SpotRoadInfo__o *v68; // x20
  MissionActionManager___c_c *v69; // x0
  struct MissionActionManager___c_StaticFields *v70; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__7_1; // x21
  Il2CppObject *v72; // x22
  struct MissionActionManager___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7

  if ( (byte_42E872F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, missionID, progressType, restricted);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Predicate_EventMissionActionEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Predicate_EventMissionActionAddEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Predicate_EventMissionActionEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v45, v46, v47);
    sub_B5D5C4(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v48, v49, v50);
    sub_B5D5C4(&MissionActionManager___c_TypeInfo, v51, v52, v53);
    byte_42E872F = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = restricted
           ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
               (EventMissionActionAddMaster_o *)Instance,
               missionID,
               progressType,
               0LL)
           : EventMissionActionAddMaster__GetEntityListFromIDnType(
               (EventMissionActionAddMaster_o *)Instance,
               missionID,
               progressType,
               0LL);
  v56 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance;
  if ( !Instance )
    goto LABEL_42;
  if ( Instance->fields._size >= 1 )
  {
    v57 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v57 = MissionActionManager___c_TypeInfo;
    }
    static_fields = v57->static_fields;
    _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        static_fields = MissionActionManager___c_TypeInfo->static_fields;
      }
      v60 = (Il2CppObject *)static_fields->__9;
      _9__7_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventMissionActionAddEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_0,
        v60,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_EventMissionActionAddEntity___ctor__);
      v61 = MissionActionManager___c_TypeInfo->static_fields;
      v61->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v61->__9__7_0,
        (System_Int32_array **)_9__7_0,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v56,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      goto LABEL_40;
    }
  }
  if ( (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL
    || (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL
    || (!restricted
      ? (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                                        (EventMissionActionMaster_o *)Instance,
                                                                                        missionID,
                                                                                        progressType,
                                                                                        0LL))
      : (Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                                        (EventMissionActionMaster_o *)Instance,
                                                                                        missionID,
                                                                                        progressType,
                                                                                        0LL)),
        (v68 = (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)Instance) == 0LL) )
  {
LABEL_42:
    sub_B5D69C(Instance, v55);
  }
  if ( Instance->fields._size >= 1 )
  {
    v69 = MissionActionManager___c_TypeInfo;
    if ( (BYTE3(MissionActionManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo);
      v69 = MissionActionManager___c_TypeInfo;
    }
    v70 = v69->static_fields;
    _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v70->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v70 = MissionActionManager___c_TypeInfo->static_fields;
      }
      v72 = (Il2CppObject *)v70->__9;
      _9__7_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventMissionActionEntity__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__7_1,
        v72,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_EventMissionActionEntity___ctor__);
      v73 = MissionActionManager___c_TypeInfo->static_fields;
      v73->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v73->__9__7_1,
        (System_Int32_array **)_9__7_1,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           v68,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_305784C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (System_Collections_Generic_List_EventMissionActionAddEntity__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
LABEL_40:
        this->fields.isStopMissionNotify = 1;
        return;
      }
      goto LABEL_42;
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MissionActionManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F4F & 1) == 0 )
  {
    sub_B5D5C4(&MissionActionManager___c_TypeInfo, v1, v2, v3);
    byte_42E5F4F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MissionActionManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MissionActionManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MissionActionManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MissionActionManager___c___ctor(MissionActionManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.missionActionType == 6;
}