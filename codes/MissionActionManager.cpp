void __fastcall MissionActionManager___ctor(MissionActionManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
        MissionActionManager_o *this,
        bool onoff,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B19C9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, onoff, method);
    byte_4B19C9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, onoff, 0LL);
}


void __fastcall MissionActionManager__SetCallbackAfterVoice(
        MissionActionManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( this->fields.isVoicePlaying && this->fields.isGoneTerminal )
  {
    this->fields.afterVoiceCallback = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback,
      (int64_t)callback,
      (int64_t)method,
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
  __int64 v2; // x2
  System_Action_o *afterVoiceCallback; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x19

  if ( (byte_4B19CA0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19CA0 = 1;
  }
  afterVoiceCallback = this->fields.afterVoiceCallback;
  if ( afterVoiceCallback )
  {
    ActionExtensions__Call(afterVoiceCallback, 0LL);
    this->fields.afterVoiceCallback = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback, 0LL, v5, v6, v7, v8, v9, v10);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244(v14, 0LL);
  }
}


void __fastcall MissionActionManager__VoiceEnds(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_EventMissionActionInfo__o *eventMissionActionList; // x8
  System_Action_o *afterVoiceCallback; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x19

  if ( (byte_4B19C9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19C9F = 1;
  }
  eventMissionActionList = this->fields.eventMissionActionList;
  if ( eventMissionActionList && eventMissionActionList->fields._size <= 0 )
  {
    afterVoiceCallback = this->fields.afterVoiceCallback;
    if ( afterVoiceCallback )
    {
      ActionExtensions__Call(afterVoiceCallback, 0LL);
      this->fields.afterVoiceCallback = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterVoiceCallback, 0LL, v8, v9, v10, v11, v12, v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      UnityEngine_Object__Destroy_70154244(v17, 0LL);
    }
  }
  else
  {
    this->fields.isVoicePlaying = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager___doMissionAction_b__9_0(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  EventRewardRootComponent_o *myFSM; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v25; // x0
  bool v26; // w1
  const MethodInfo *v27; // x2

  v3 = (Il2CppObject *)this;
  if ( (byte_4B19CA1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, skip, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionActionManager_doMissionAction__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    this = (MissionActionManager_o *)sub_1BCA7E0(
                                       &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                       v12,
                                       v13);
    byte_4B19CA1 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v19
    || (CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL),
        (myFSM = (EventRewardRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (EventRewardRootComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1BCAA3C(myFSM, v23);
  }
  methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (EventRewardRootComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardRootComponent_TypeInfo )
  {
    EventRewardRootComponent__playBGM(myFSM, 0LL);
  }
  else
  {
    sub_1BCACFC(myFSM);
    MissionActionManager___doMissionAction_b__9_1(v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager___doMissionAction_b__9_1(
        MissionActionManager_o *this,
        bool skip,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  TerminalSceneComponent_o *myFSM; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  MissionActionManager_o *v25; // x0
  const MethodInfo *v26; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_4B19CA2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, skip, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_MissionActionManager_doMissionAction__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    this = (MissionActionManager_o *)sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v12, v13);
    byte_4B19CA2 = 1;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(this, 1, method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v21, v3, Method_MissionActionManager_doMissionAction__, 0LL);
  if ( !v19
    || (CommonUI__maskFadein(v19, DEFAULT_FADE_TIME, v21, 0LL),
        (myFSM = (TerminalSceneComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL)
    || (myFSM = (TerminalSceneComponent_o *)myFSM->fields.myFSM) == 0LL )
  {
    sub_1BCAA3C(myFSM, v23);
  }
  methodPtr_low = LOBYTE(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(myFSM->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (TerminalSceneComponent_c *)myFSM->klass->_2.typeHierarchy[methodPtr_low - 1] == TerminalSceneComponent_TypeInfo )
  {
    TerminalSceneComponent__playBgm_42940932(myFSM, 0LL);
  }
  else
  {
    sub_1BCACFC(myFSM);
    MissionActionManager___doMissionAction_b__9_2(v25, v26);
  }
}


void __fastcall MissionActionManager___doMissionAction_b__9_3(MissionActionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNotifyManager_o *Instance; // x0
  int32_t mPauseCount; // w8
  int32_t v6; // w8

  if ( (byte_4B19CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B19CA3 = 1;
  }
  if ( this->fields.isStopMissionNotify )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, method);
    mPauseCount = Instance->fields.mPauseCount;
    if ( mPauseCount )
    {
      v6 = mPauseCount - 1;
      Instance->fields.mPauseCount = v6;
      if ( !v6 )
        MissionNotifyManager__CancelPause(Instance, method);
    }
    this->fields.isStopMissionNotify = 0;
  }
  MissionActionManager__doMissionAction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionActionManager__addMissionAction(
        MissionActionManager_o *this,
        int32_t missionID,
        int32_t progressType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *Instance; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_List_object__o *v43; // x22
  System_Collections_Generic_List_object__o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *current; // x22
  EventMissionActionInfo_o *v49; // x21
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  const MethodInfo_3316D18 *v62; // x1
  System_Collections_Generic_List_Enumerator_object__o *v63; // x0
  System_Collections_Generic_List_EventMissionActionEntity__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Collections_Generic_List_object__o *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  Il2CppObject *v72; // x22
  EventMissionActionInfo_o *v73; // x21
  __int64 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  PartyOrganizationUtility_o *p_eventMissionActionList; // x19
  System_Collections_Generic_IEnumerable_T__o *eventMissionActionList; // t1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B19C9A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventMissionActionAddMaster___,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&EventMissionActionInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    byte_4B19C9A = 1;
  }
  memset(&v96, 0, sizeof(v96));
  memset(&v95, 0, sizeof(v95));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_32;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( EntityListFromIDnType )
  {
    v43 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType;
    v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                         v40,
                                                         v41,
                                                         v42);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v94,
      v43,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v96 = v94;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v96,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v96.fields._current;
      v49 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v45, v46, v47);
      EventMissionActionInfo___ctor_42814600(v49, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v44 )
        sub_1BCAA3C(v50, v51);
      items = v44->fields._items;
      v59 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v44->fields._version;
      if ( !items )
        sub_1BCAA3C(v50, v51);
      size = v44->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v49,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v61 = &items->obj.klass + size;
        v44->fields._size = size + 1;
        v61[4] = (Il2CppClass *)v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v49, v52, v53, v54, v55, v56, v57);
      }
    }
    v62 = (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v63 = &v96;
    goto LABEL_25;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___)) == 0LL )
  {
LABEL_32:
    sub_1BCAA3C(Instance, v38);
  }
  v64 = EventMissionActionMaster__getEntityListFromIDnType(
          (EventMissionActionMaster_o *)Instance,
          missionID,
          progressType,
          0LL);
  if ( !v64 )
    return;
  v68 = (System_Collections_Generic_List_object__o *)v64;
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       v65,
                                                       v66,
                                                       v67);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    v68,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
  v95 = v94;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v95,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
  {
    v72 = v95.fields._current;
    v73 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v69, v70, v71);
    EventMissionActionInfo___ctor(v73, (EventMissionActionEntity_o *)v72, 0LL);
    if ( !v44 )
      sub_1BCAA3C(v74, v75);
    v82 = v44->fields._items;
    v83 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
    ++v44->fields._version;
    if ( !v82 )
      sub_1BCAA3C(v74, v75);
    v84 = v44->fields._size;
    if ( (unsigned int)v84 >= v82->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v44,
        (Il2CppObject *)v73,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v82->obj.klass + v84;
      v44->fields._size = v84 + 1;
      v85[4] = (Il2CppClass *)v73;
      sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v73, v76, v77, v78, v79, v80, v81);
    }
  }
  v63 = &v95;
  v62 = (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(v63, v62);
  if ( !v44 )
    goto LABEL_32;
  eventMissionActionList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.eventMissionActionList;
  p_eventMissionActionList = (PartyOrganizationUtility_o *)&this->fields.eventMissionActionList;
  System_Collections_Generic_List_object___AddRange(
    v44,
    eventMissionActionList,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_EventMissionActionInfo__AddRange__);
  p_eventMissionActionList->klass = (PartyOrganizationUtility_c *)v44;
  sub_1BCA784(p_eventMissionActionList, (int64_t)v44, v88, v89, v90, v91, v92, v93);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MissionActionManager__checkScroll(int32_t missionID, int32_t progressType, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionActionAddEntity__o *EntityListFromIDnType; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x21
  MissionActionManager___c_c *v32; // x0
  System_Predicate_object__o *_9__8_0; // x19
  Il2CppObject *v34; // x20
  struct MissionActionManager___c_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x0
  System_Predicate_T__o *v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  MissionActionManager___c_c *v47; // x8
  DataManager_o *v48; // x19
  System_Predicate_object__o *_9__8_1; // x20
  Il2CppObject *v50; // x21
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B19C9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, *(_QWORD *)&progressType, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Predicate_EventMissionActionEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_MissionActionManager___c__checkScroll_b__8_0__, v19, v20);
    sub_1BCA7E0(&Method_MissionActionManager___c__checkScroll_b__8_1__, v21, v22);
    sub_1BCA7E0(&MissionActionManager___c_TypeInfo, v23, v24);
    byte_4B19C9C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_25;
  EntityListFromIDnType = EventMissionActionAddMaster__GetEntityListFromIDnType(
                            (EventMissionActionAddMaster_o *)Instance,
                            missionID,
                            progressType,
                            0LL);
  if ( !EntityListFromIDnType
    || (v31 = (System_Collections_Generic_List_object__o *)EntityListFromIDnType, EntityListFromIDnType->fields._size < 1) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)EventMissionActionMaster__getEntityListFromIDnType(
                                      (EventMissionActionMaster_o *)Instance,
                                      missionID,
                                      progressType,
                                      0LL);
        v47 = MissionActionManager___c_TypeInfo;
        v48 = Instance;
        if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v26);
          v47 = MissionActionManager___c_TypeInfo;
        }
        _9__8_1 = (System_Predicate_object__o *)v47->static_fields->__9__8_1;
        if ( !_9__8_1 )
        {
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47, v26);
            v47 = MissionActionManager___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v47->static_fields->__9;
          _9__8_1 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                    System_Predicate_EventMissionActionEntity__TypeInfo,
                                                    v26,
                                                    v45,
                                                    v46);
          System_Predicate_object____ctor(_9__8_1, v50, Method_MissionActionManager___c__checkScroll_b__8_1__, 0LL);
          static_fields = MissionActionManager___c_TypeInfo->static_fields;
          static_fields->__9__8_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__8_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__8_1,
            (int64_t)_9__8_1,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
        }
        if ( v48 )
        {
          v42 = &Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__;
          v43 = (System_Collections_Generic_List_object__o *)v48;
          v44 = (System_Predicate_T__o *)_9__8_1;
          return System_Collections_Generic_List_object___Exists(v43, v44, (const MethodInfo_35A2288 *)*v42);
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(Instance, v26);
  }
  v32 = MissionActionManager___c_TypeInfo;
  if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v28);
    v32 = MissionActionManager___c_TypeInfo;
  }
  _9__8_0 = (System_Predicate_object__o *)v32->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v28);
      v32 = MissionActionManager___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__8_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                              v28,
                                              v29,
                                              v30);
    System_Predicate_object____ctor(_9__8_0, v34, Method_MissionActionManager___c__checkScroll_b__8_0__, 0LL);
    v35 = MissionActionManager___c_TypeInfo->static_fields;
    v35->__9__8_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v35->__9__8_0, (int64_t)_9__8_0, v36, v37, v38, v39, v40, v41);
  }
  v42 = &Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__;
  v43 = v31;
  v44 = (System_Predicate_T__o *)_9__8_0;
  return System_Collections_Generic_List_object___Exists(v43, v44, (const MethodInfo_35A2288 *)*v42);
}


void __fastcall MissionActionManager__doMissionAction(MissionActionManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventRewardRootComponent_o *optionId; // x23
  System_Action_c **v4; // x28
  UnityEngine_Object_c **v5; // x24
  __int64 *v6; // x26
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_object__o *eventMissionActionList; // x0
  EventMissionActionInfo_o *v43; // x25
  __int64 v44; // x3
  __int64 v45; // x9
  __int64 v46; // x9
  Il2CppObject *v47; // x0
  Il2CppObject *Item; // x0
  UnityEngine_Object_c **v49; // x20
  __int64 *v50; // x24
  System_String_array *v51; // x25
  System_Action_c **v52; // x26
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x28
  __int64 v57; // x9
  __int64 v58; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v60; // x1
  UnityEngine_Object_o *v61; // x19
  __int64 methodPtr_low; // x9
  System_String_o *ValMessage; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  ScriptManager_CallbackFunc_o *v67; // x0
  __int64 *v68; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Action_o *v74; // x22
  EventMissionActionInfo_o *v75; // x20
  Il2CppObject *v76; // x0
  System_String_array *v77; // x20
  CommonUI_o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Action_o *v82; // x22
  __int64 v83; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t vals; // x21
  int32_t v91; // w8
  const MethodInfo *v92; // x2
  int v93; // w8
  int v94; // w22
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  ScriptManager_CallbackFunc_o *v98; // x21
  __int64 v99; // x1
  UnityEngine_Object_o *syncRoot; // x20
  Il2CppObject *v101; // x8
  CompleteMissionListViewManager_o *monitor; // x20
  int32_t ValID; // w21
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Action_o *v107; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x9
  int64_t v115; // x1
  MasterMissionListViewManager_o *listViewManager; // x20
  int32_t v117; // w21
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x3
  System_Action_o *v121; // x22
  int32_t v122; // w0
  const MethodInfo *v123; // x3
  __int64 v124; // x9
  EventMissionItemListViewManager_o *missionItemListViewManager; // x21
  int32_t v126; // w22
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  System_Action_o *v130; // x23
  EventRewardRootComponent_o *v131; // x20
  System_String_array *VoiceIds; // x21
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x3
  System_Action_o *v136; // x23
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  System_Action_o *v140; // x24
  __int64 v141; // x9
  MasterMissionComponent_o *klass; // x20
  System_String_array *v143; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  System_Action_o *v147; // x22
  MissionActionManager_o *v148; // x0
  int32_t v149; // w1
  int32_t v150; // w2
  const MethodInfo *v151; // x3

  v4 = &System_Action_TypeInfo;
  v5 = &UnityEngine_Object_TypeInfo;
  v6 = &Method_MissionActionManager_doMissionAction__;
  while ( 2 )
  {
    if ( (byte_4B19C9D & 1) == 0 )
    {
      sub_1BCA7E0(v4, method, v2);
      sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v8, v9);
      sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v10, v11);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__, v12, v13);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Count__, v14, v15);
      sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__, v16, v17);
      sub_1BCA7E0(&Method_MissionActionManager__doMissionAction_b__9_0__, v18, v19);
      sub_1BCA7E0(&Method_MissionActionManager__doMissionAction_b__9_1__, v20, v21);
      sub_1BCA7E0(&Method_MissionActionManager__doMissionAction_b__9_2__, v22, v23);
      sub_1BCA7E0(&Method_MissionActionManager__doMissionAction_b__9_3__, v24, v25);
      sub_1BCA7E0(&Method_MissionActionManager_VoiceEnds__, v26, v27);
      sub_1BCA7E0(v6, v28, v29);
      sub_1BCA7E0(v5, v30, v31);
      sub_1BCA7E0(&ScriptManager_TypeInfo, v32, v33);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v34, v35);
      sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v36, v37);
      sub_1BCA7E0(&TerminalTransitionInfo_TypeInfo, v38, v39);
      sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
      byte_4B19C9D = 1;
    }
    eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
    if ( !eventMissionActionList )
      goto LABEL_126;
    if ( eventMissionActionList->fields._size > 0 )
    {
      eventMissionActionList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              eventMissionActionList,
                                                                              0,
                                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
      if ( !this->fields.eventMissionActionList )
        goto LABEL_126;
      v43 = (EventMissionActionInfo_o *)eventMissionActionList;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList,
        0,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_EventMissionActionInfo__RemoveAt__);
      if ( !v43 )
        goto LABEL_126;
      switch ( v43->fields.missionActionType )
      {
        case 1:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            this->fields.isVoicePlaying = 0;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
            if ( !eventMissionActionList )
              goto LABEL_126;
            methodPtr_low = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
              || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardRootComponent_TypeInfo )
            {
LABEL_127:
              sub_1BCACFC(eventMissionActionList);
LABEL_128:
              sub_1BCACFC(optionId);
LABEL_129:
              sub_1BCAA44(eventMissionActionList, method);
            }
            EventRewardRootComponent__stopSvtVoice((EventRewardRootComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v43, 0LL);
            v67 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v64, v65, v66);
            v68 = &Method_MissionActionManager__doMissionAction_b__9_0__;
          }
          else
          {
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
              return;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !eventMissionActionList )
              goto LABEL_126;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList[34].klass;
            if ( !eventMissionActionList )
              goto LABEL_126;
            MasterMissionComponent__stopSvtVoice((MasterMissionComponent_o *)eventMissionActionList, 0LL);
            ValMessage = EventMissionActionInfo__getValMessage(v43, 0LL);
            v67 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, v95, v96, v97);
            v68 = &Method_MissionActionManager__doMissionAction_b__9_1__;
          }
          v98 = v67;
          ScriptManager_CallbackFunc___ctor(v67, (Il2CppObject *)this, *v68, 0LL);
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v99);
          ScriptManager__PlayScenario(ValMessage, v98, 0, 0LL);
          return;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v70 = EventMissionActionInfo__getValMessage(v43, 0LL);
          v74 = (System_Action_o *)sub_1BCAA2C(*v4, v71, v72, v73);
          System_Action___ctor(v74, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_2__, 0LL);
          if ( !Instance )
            goto LABEL_126;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            (System_String_o *)StringLiteral_1/*""*/,
            v70,
            v74,
            150,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0LL,
            0.0,
            0LL);
          return;
        case 3:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
          {
            eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( eventMissionActionList )
            {
              syncRoot = (UnityEngine_Object_o *)eventMissionActionList[33].fields._syncRoot;
              if ( !(*v5)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v5, method);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0LL, 0LL) )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  v101 = eventMissionActionList[33].fields._syncRoot;
                  if ( v101 )
                  {
                    monitor = (CompleteMissionListViewManager_o *)v101[4].monitor;
                    ValID = EventMissionActionInfo__getValID(v43, 0LL);
                    v107 = (System_Action_o *)sub_1BCAA2C(*v4, v104, v105, v106);
                    System_Action___ctor(v107, (Il2CppObject *)this, *v6, 0LL);
                    if ( monitor )
                    {
                      CompleteMissionListViewManager__setNextMissionInfo(monitor, ValID, v107, 0LL);
                      return;
                    }
                  }
                }
              }
              else
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
                    return;
                  eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( eventMissionActionList )
                  {
                    eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList[34].klass;
                    if ( eventMissionActionList )
                    {
                      listViewManager = MasterMissionComponent__get_listViewManager(
                                          (MasterMissionComponent_o *)eventMissionActionList,
                                          0LL);
                      v117 = EventMissionActionInfo__getValID(v43, 0LL);
                      v121 = (System_Action_o *)sub_1BCAA2C(*v4, v118, v119, v120);
                      System_Action___ctor(v121, (Il2CppObject *)this, *v6, 0LL);
                      if ( listViewManager )
                      {
                        MasterMissionListViewManager__setNextMissionInfo(listViewManager, v117, v121, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_126;
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v75 = eventMissionActionList->fields._size < 1
              ? 0LL
              : (EventMissionActionInfo_o *)System_Collections_Generic_List_object___get_Item(
                                              eventMissionActionList,
                                              0,
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
          v122 = EventMissionActionInfo__getValID(v43, 0LL);
          MissionActionManager__addMissionAction(this, v122, 3, v123);
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v124 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v124
            && (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v124 - 1] == EventRewardRootComponent_TypeInfo )
          {
            missionItemListViewManager = EventRewardRootComponent__get_missionItemListViewManager(
                                           (EventRewardRootComponent_o *)eventMissionActionList,
                                           0LL);
            v126 = EventMissionActionInfo__getValID(v43, 0LL);
            v130 = (System_Action_o *)sub_1BCAA2C(*v4, v127, v128, v129);
            System_Action___ctor(v130, (Il2CppObject *)this, *v6, 0LL);
            if ( missionItemListViewManager )
            {
              EventMissionItemListViewManager__setNextMissionInfo(missionItemListViewManager, v43, v75, v126, v130, 0LL);
              return;
            }
            goto LABEL_126;
          }
          goto LABEL_127;
        case 4:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          optionId = (EventRewardRootComponent_o *)(unsigned int)v43->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_74;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v45 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v45
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v45 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != eventMissionActionList[32].fields._version )
            continue;
LABEL_74:
          v83 = sub_1BCAA2C(TerminalTransitionInfo_TypeInfo, method, v2, v44);
          TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v83, 0LL);
          if ( !v83 )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
          *(_DWORD *)(v83 + 16) = v43->fields.missionId;
          vals = (int64_t)v43->fields.vals;
          v91 = v43->fields.optionId;
          *(_QWORD *)(v83 + 32) = vals;
          *(_DWORD *)(v83 + 48) = v91;
          sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 32), vals, v84, v85, v86, v87, v88, v89);
          if ( !vals )
            goto LABEL_126;
          v93 = *(_DWORD *)(vals + 24);
          if ( v93 < 1 )
            goto LABEL_103;
          v94 = 0;
          while ( 2 )
          {
            if ( v94 >= (unsigned int)v93 )
              goto LABEL_129;
            eventMissionActionList = (System_Collections_Generic_List_object__o *)System_Int32__Parse(
                                                                                    *(System_String_o **)(vals + 8LL * v94 + 32),
                                                                                    0LL);
            if ( (_DWORD)eventMissionActionList != 800 )
            {
              v93 = *(_DWORD *)(vals + 24);
              v94 += 2;
              if ( v94 >= v93 )
                goto LABEL_103;
              continue;
            }
            break;
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          v114 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v114
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v114 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          v115 = (int64_t)eventMissionActionList[39].monitor;
          *(_QWORD *)(v83 + 40) = v115;
          sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 40), v115, v108, v109, v110, v111, v112, v113);
LABEL_103:
          MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
            (MissionActionManager_o *)eventMissionActionList,
            0,
            v92);
          this->fields.isGoneTerminal = 1;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventMissionActionList,
            34,
            1,
            (Il2CppObject *)v83,
            0LL);
          goto LABEL_50;
        case 5:
          optionId = (EventRewardRootComponent_o *)(unsigned int)v43->fields.optionId;
          if ( !(_DWORD)optionId )
            goto LABEL_24;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)eventMissionActionList->fields._syncRoot;
          if ( !eventMissionActionList )
            goto LABEL_126;
          method = (const MethodInfo *)EventRewardRootComponent_TypeInfo;
          v46 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(eventMissionActionList->klass->vtable._0_Equals.methodPtr) < (unsigned int)v46
            || (EventRewardRootComponent_c *)eventMissionActionList->klass->_2.typeHierarchy[v46 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_127;
          }
          if ( (_DWORD)optionId != eventMissionActionList[32].fields._version )
            continue;
LABEL_24:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 72, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          this->fields.isVoicePlaying = 1;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( eventMissionActionList->fields._size >= 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     eventMissionActionList,
                     0,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( Item )
            {
              if ( HIDWORD(Item[1].monitor) == 8 )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( eventMissionActionList )
                {
                  v131 = (EventRewardRootComponent_o *)eventMissionActionList->fields._syncRoot;
                  VoiceIds = EventMissionActionInfo__getVoiceIds(v43, 0LL);
                  v136 = (System_Action_o *)sub_1BCAA2C(*v4, v133, v134, v135);
                  System_Action___ctor(v136, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
                  v140 = (System_Action_o *)sub_1BCAA2C(*v4, v137, v138, v139);
                  System_Action___ctor(v140, (Il2CppObject *)this, *v6, 0LL);
                  if ( v131 )
                  {
                    v141 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( LOBYTE(v131->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v141
                      && (EventRewardRootComponent_c *)v131->klass->_2.typeHierarchy[v141 - 1] == EventRewardRootComponent_TypeInfo )
                    {
                      EventRewardRootComponent__playEventMissionSvtVoice_31026136(v131, VoiceIds, v136, v140, 0LL);
                    }
                    else
                    {
                      sub_1BCACFC(v131);
                      MissionActionManager__addMissionAction(v148, v149, v150, v151);
                    }
                    return;
                  }
                }
LABEL_126:
                sub_1BCAA3C(eventMissionActionList, method);
              }
            }
          }
          v49 = v5;
          v50 = v6;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList->fields._syncRoot;
          v51 = EventMissionActionInfo__getVoiceIds(v43, 0LL);
          v52 = v4;
          v56 = (System_Action_o *)sub_1BCAA2C(*v4, v53, v54, v55);
          System_Action___ctor(v56, (Il2CppObject *)this, Method_MissionActionManager_VoiceEnds__, 0LL);
          if ( !optionId )
            goto LABEL_126;
          v57 = LOBYTE(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(optionId->klass->vtable._0_Equals.methodPtr) < (unsigned int)v57
            || (EventRewardRootComponent_c *)optionId->klass->_2.typeHierarchy[v57 - 1] != EventRewardRootComponent_TypeInfo )
          {
            goto LABEL_128;
          }
          EventRewardRootComponent__playEventMissionSvtVoice(optionId, v51, v56, 0LL);
          v4 = v52;
          v6 = v50;
          v5 = v49;
          continue;
        case 6:
          v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v77 = v43->fields.vals;
          v78 = (CommonUI_o *)v76;
          v82 = (System_Action_o *)sub_1BCAA2C(*v4, v79, v80, v81);
          System_Action___ctor(v82, (Il2CppObject *)this, Method_MissionActionManager__doMissionAction_b__9_3__, 0LL);
          if ( !v78 )
            goto LABEL_126;
          CommonUI__OpenImageDialogWithAssets(v78, v77, v82, 0LL, 0LL, 0LL);
          return;
        case 7:
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList[33].fields._syncRoot;
          if ( !(*v5)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v5, method);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)optionId, 0LL, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( !AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)eventMissionActionList, 34, 0LL) )
            continue;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)this->fields.eventMissionActionList;
          if ( !eventMissionActionList )
            goto LABEL_126;
          if ( eventMissionActionList->fields._size >= 1 )
          {
            v47 = System_Collections_Generic_List_object___get_Item(
                    eventMissionActionList,
                    0,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionActionInfo__get_Item__);
            if ( v47 )
            {
              if ( HIDWORD(v47[1].monitor) == 8 )
              {
                eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( eventMissionActionList )
                {
                  klass = (MasterMissionComponent_o *)eventMissionActionList[34].klass;
                  v143 = EventMissionActionInfo__getVoiceIds(v43, 0LL);
                  v147 = (System_Action_o *)sub_1BCAA2C(*v4, v144, v145, v146);
                  System_Action___ctor(v147, (Il2CppObject *)this, *v6, 0LL);
                  if ( klass )
                  {
                    MasterMissionComponent__playEventMissionSvtVoice_43931500(klass, v143, v147, 0LL);
                    return;
                  }
                }
                goto LABEL_126;
              }
            }
          }
          eventMissionActionList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !eventMissionActionList )
            goto LABEL_126;
          optionId = (EventRewardRootComponent_o *)eventMissionActionList[34].klass;
          eventMissionActionList = (System_Collections_Generic_List_object__o *)EventMissionActionInfo__getVoiceIds(
                                                                                  v43,
                                                                                  0LL);
          if ( !optionId )
            goto LABEL_126;
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
    break;
  }
  MissionActionManager__SetBackGroundUntouchableWhileMissionAction(
    (MissionActionManager_o *)eventMissionActionList,
    0,
    v2);
LABEL_50:
  if ( !this->fields.isVoicePlaying )
  {
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5, v58);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v61 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5, v60);
      UnityEngine_Object__Destroy_70154244(v61, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_object__o *v41; // x24
  struct System_Collections_Generic_List_EventMissionActionInfo__o **p_eventMissionActionList; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  System_Collections_Generic_List_object__o *SafeActionListFromIDnType; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *v56; // x24
  EventMissionActionInfo_o *v57; // x25
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  __int64 *v70; // x8
  System_Collections_Generic_List_Enumerator_object__o *v71; // x0
  System_Collections_Generic_List_object__o *EntityListFromIDnType; // x0
  const MethodInfo *v73; // x1
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  Il2CppObject *v77; // x23
  System_Collections_Generic_List_object__o *v78; // x21
  EventMissionActionInfo_o *v79; // x22
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+0h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B19C99 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventMissionActionAddMaster___,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__get_Current__, v21, v22);
    sub_1BCA7E0(&EventMissionActionInfo_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionActionInfo__TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B19C99 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  memset(&v93, 0, sizeof(v93));
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionActionInfo__TypeInfo,
                                                       *(_QWORD *)&missionID,
                                                       *(_QWORD *)&progressType,
                                                       restricted);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionActionInfo___ctor__);
  this->fields.eventMissionActionList = (struct System_Collections_Generic_List_EventMissionActionInfo__o *)v41;
  p_eventMissionActionList = &this->fields.eventMissionActionList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventMissionActionList,
    (int64_t)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___)) == 0LL )
  {
LABEL_39:
    sub_1BCAA3C(Instance, v50);
  }
  if ( restricted )
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  else
  {
    SafeActionListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionAddMaster__GetEntityListFromIDnType(
                                                                               (EventMissionActionAddMaster_o *)Instance,
                                                                               missionID,
                                                                               progressType,
                                                                               0LL);
    if ( !SafeActionListFromIDnType )
      goto LABEL_20;
  }
  if ( SafeActionListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v92,
      SafeActionListFromIDnType,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__GetEnumerator__);
    v94 = v92;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v94,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__MoveNext__) )
    {
      current = v94.fields._current;
      v56 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v57 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v52, v53, v54);
      EventMissionActionInfo___ctor_42814600(v57, (EventMissionActionAddEntity_o *)current, 0LL);
      if ( !v56 )
        sub_1BCAA3C(v58, v59);
      items = v56->fields._items;
      v67 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v56->fields._version;
      if ( !items )
        sub_1BCAA3C(v58, v59);
      size = v56->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v57,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + size;
        v56->fields._size = size + 1;
        v69[4] = (Il2CppClass *)v57;
        sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v57, v60, v61, v62, v63, v64, v65);
      }
    }
    v70 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionAddEntity__Dispose__;
    v71 = &v94;
    goto LABEL_35;
  }
LABEL_20:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( restricted )
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getSafeActionListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  else
  {
    EntityListFromIDnType = (System_Collections_Generic_List_object__o *)EventMissionActionMaster__getEntityListFromIDnType(
                                                                           (EventMissionActionMaster_o *)Instance,
                                                                           missionID,
                                                                           progressType,
                                                                           0LL);
    if ( !EntityListFromIDnType )
      goto LABEL_36;
  }
  if ( EntityListFromIDnType->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v93,
      EntityListFromIDnType,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionActionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v93,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__MoveNext__) )
    {
      v77 = v93.fields._current;
      v78 = (System_Collections_Generic_List_object__o *)*p_eventMissionActionList;
      v79 = (EventMissionActionInfo_o *)sub_1BCAA2C(EventMissionActionInfo_TypeInfo, v74, v75, v76);
      EventMissionActionInfo___ctor(v79, (EventMissionActionEntity_o *)v77, 0LL);
      if ( !v78 )
        sub_1BCAA3C(v80, v81);
      v88 = v78->fields._items;
      v89 = Method_System_Collections_Generic_List_EventMissionActionInfo__Add__;
      ++v78->fields._version;
      if ( !v88 )
        sub_1BCAA3C(v80, v81);
      v90 = v78->fields._size;
      if ( (unsigned int)v90 >= v88->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v78,
          (Il2CppObject *)v79,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v88->obj.klass + v90;
        v78->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v79;
        sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v79, v82, v83, v84, v85, v86, v87);
      }
    }
    v70 = &Method_System_Collections_Generic_List_Enumerator_EventMissionActionEntity__Dispose__;
    v71 = &v93;
LABEL_35:
    System_Collections_Generic_List_Enumerator_object___Dispose(v71, (const MethodInfo_3316D18 *)*v70);
  }
LABEL_36:
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x23
  MissionActionManager___c_c *v38; // x0
  System_Predicate_object__o *_9__7_0; // x24
  Il2CppObject *v40; // x25
  struct MissionActionManager___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *v50; // x20
  MissionActionManager___c_c *v51; // x0
  System_Predicate_object__o *_9__7_1; // x21
  Il2CppObject *v53; // x22
  struct MissionActionManager___c_StaticFields *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7

  if ( (byte_4B19C9B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventMissionActionAddMaster___,
      *(_QWORD *)&missionID,
      *(_QWORD *)&progressType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionAddEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionActionEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Predicate_EventMissionActionEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Predicate_EventMissionActionAddEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__, v27, v28);
    sub_1BCA7E0(&Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__, v29, v30);
    sub_1BCA7E0(&MissionActionManager___c_TypeInfo, v31, v32);
    byte_4B19C9B = 1;
  }
  this->fields.isStopMissionNotify = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionAddMaster__GetSafeActionListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL)
                            : EventMissionActionAddMaster__GetEntityListFromIDnType(
                                (EventMissionActionAddMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL));
  v37 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v38 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v34);
      v38 = MissionActionManager___c_TypeInfo;
    }
    _9__7_0 = (System_Predicate_object__o *)v38->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38, v34);
        v38 = MissionActionManager___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__7_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_EventMissionActionAddEntity__TypeInfo,
                                                v34,
                                                v35,
                                                v36);
      System_Predicate_object____ctor(
        _9__7_0,
        v40,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_0__,
        0LL);
      static_fields = MissionActionManager___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Predicate_EventMissionActionAddEntity__o *)_9__7_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v37,
           (System_Predicate_T__o *)_9__7_0,
           (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_EventMissionActionAddEntity__Exists__) )
    {
      this->fields.isStopMissionNotify = 1;
      return;
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)(restricted
                            ? EventMissionActionMaster__getSafeActionListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL)
                            : EventMissionActionMaster__getEntityListFromIDnType(
                                (EventMissionActionMaster_o *)Instance,
                                missionID,
                                progressType,
                                0LL));
  v50 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !Instance )
    goto LABEL_35;
  if ( SLODWORD(Instance[1].monitor) >= 1 )
  {
    v51 = MissionActionManager___c_TypeInfo;
    if ( !MissionActionManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MissionActionManager___c_TypeInfo, v34);
      v51 = MissionActionManager___c_TypeInfo;
    }
    _9__7_1 = (System_Predicate_object__o *)v51->static_fields->__9__7_1;
    if ( !_9__7_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v34);
        v51 = MissionActionManager___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v51->static_fields->__9;
      _9__7_1 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_EventMissionActionEntity__TypeInfo,
                                                v34,
                                                v48,
                                                v49);
      System_Predicate_object____ctor(
        _9__7_1,
        v53,
        Method_MissionActionManager___c__setStatusMissionNotify_b__7_1__,
        0LL);
      v54 = MissionActionManager___c_TypeInfo->static_fields;
      v54->__9__7_1 = (struct System_Predicate_EventMissionActionEntity__o *)_9__7_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v54->__9__7_1, (int64_t)_9__7_1, v55, v56, v57, v58, v59, v60);
    }
    if ( System_Collections_Generic_List_object___Exists(
           v50,
           (System_Predicate_T__o *)_9__7_1,
           (const MethodInfo_35A2288 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Exists__) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( Instance )
      {
        ++LODWORD(Instance[3].monitor);
        this->fields.isStopMissionNotify = 1;
        return;
      }
LABEL_35:
      sub_1BCAA3C(Instance, v34);
    }
  }
}


void __fastcall MissionActionManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionActionManager___c_TypeInfo, v1, v2);
    byte_4B19CA4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MissionActionManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MissionActionManager___c_TypeInfo->static_fields->__9 = (struct MissionActionManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MissionActionManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___checkScroll_b__8_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.missionActionType == 3;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_0(
        MissionActionManager___c_o *this,
        EventMissionActionAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.missionActionType == 6;
}


bool __fastcall MissionActionManager___c___setStatusMissionNotify_b__7_1(
        MissionActionManager___c_o *this,
        EventMissionActionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.missionActionType == 6;
}