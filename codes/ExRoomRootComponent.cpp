void ExRoomRootComponent___ctor(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932D69 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomStateBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomStateBase__TypeInfo);
    byte_5932D69 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomStateBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomStateBase___ctor__);
  this->fields.listState = (struct System_Collections_Generic_List_ExRoomStateBase__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listState, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomRootComponent__Awake(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomRootComponent__ChangeState(ExRoomRootComponent_o *this, int32_t newState, const MethodInfo *method)
{
  System_String_o *v5; // x1

  if ( (byte_5932D64 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4527/*"ChangeStateCoroutine"*/);
    byte_5932D64 = 1;
  }
  v5 = (System_String_o *)StringLiteral_4527/*"ChangeStateCoroutine"*/;
  this->fields.prevState = this->fields.currentState;
  this->fields.currentState = newState;
  UnityEngine_MonoBehaviour__StartCoroutine((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


System_Collections_IEnumerator_o *ExRoomRootComponent__ChangeStateCoroutine(
        ExRoomRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932D65 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomRootComponent__ChangeStateCoroutine_d__75_TypeInfo);
    byte_5932D65 = 1;
  }
  v3 = sub_21FFEBC(ExRoomRootComponent__ChangeStateCoroutine_d__75_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *ExRoomRootComponent__GetBgmName(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_String_o *Value; // x19

  if ( (byte_5932D5E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6059/*"EX_ROOM_BGM_NAME"*/);
    byte_5932D5E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)Master_object, (System_String_o *)StringLiteral_6059/*"EX_ROOM_BGM_NAME"*/, 0);
  if ( System_String__IsNullOrEmpty(Value, 0) )
    return 0;
  else
    return Value;
}


// local variable allocation has failed, the output may be wrong!
ExRoomStateBase_o *ExRoomRootComponent__GetState(ExRoomRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listState; // x0

  if ( (byte_5932D66 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomStateBase__get_Item__);
    byte_5932D66 = 1;
  }
  listState = (System_Collections_Generic_List_object__o *)this->fields.listState;
  if ( !listState )
    sub_21FFECC(0, *(_QWORD *)&state);
  return (ExRoomStateBase_o *)System_Collections_Generic_List_object___get_Item(
                                listState,
                                state,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ExRoomStateBase__get_Item__);
}


int32_t ExRoomRootComponent__GetStateFromTransitionInfoExRoomType(
        ExRoomRootComponent_o *this,
        int32_t exRoomType,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( exRoomType == 3 )
    v3 = 3;
  else
    v3 = 1;
  if ( exRoomType == 2 )
    return 2;
  else
    return v3;
}


int32_t ExRoomRootComponent__GetTargetState(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ExRoomRootComponent_o *TerminalScene; // x0
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  struct ExRoomTopComponent_o *TopDisp_k__BackingField; // x8
  int32_t *p_AutoExRoomType_k__BackingField; // x8
  TerminalPramsManager_c *v7; // x0
  int32_t v8; // w8
  int32_t v9; // w9

  if ( (byte_5932D60 & 1) == 0 )
  {
    this = (ExRoomRootComponent_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932D60 = 1;
  }
  TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(this, method);
  if ( !TerminalScene )
    goto LABEL_21;
  if ( TerminalScene[3].fields._TopDisp_k__BackingField )
  {
    TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(TerminalScene, v3);
    if ( TerminalScene )
    {
      TopDisp_k__BackingField = TerminalScene[3].fields._TopDisp_k__BackingField;
      if ( TopDisp_k__BackingField )
      {
        p_AutoExRoomType_k__BackingField = (int32_t *)&TopDisp_k__BackingField->fields.shopBoard + 1;
        goto LABEL_15;
      }
    }
LABEL_21:
    sub_21FFECC(TerminalScene, v3);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v4);
  if ( !byte_5932DFF )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DFF = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3, v4);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_AutoExRoomType_k__BackingField = &v7->static_fields->_AutoExRoomType_k__BackingField;
LABEL_15:
  v8 = *p_AutoExRoomType_k__BackingField;
  if ( v8 == 3 )
    v9 = 3;
  else
    v9 = 1;
  if ( v8 == 2 )
    return 2;
  else
    return v9;
}


void ExRoomRootComponent__Init(
        ExRoomRootComponent_o *this,
        UnityEngine_GameObject_o *actionPanelObject,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  __int64 v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  _QWORD *v45; // x9
  struct System_Object_array *v46; // x8
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x22
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  _QWORD *v62; // x9
  struct System_Object_array *v63; // x8
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x22
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  _QWORD *v79; // x9
  struct System_Object_array *v80; // x8
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  const MethodInfo *v89; // x2
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_5932D5C & 1) == 0 )
  {
    sub_21FFC50(&ExRoomStateBase_TypeInfo);
    sub_21FFC50(&ExRoomStateQuest_TypeInfo);
    sub_21FFC50(&ExRoomStateShop_TypeInfo);
    sub_21FFC50(&ExRoomStateTop_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomStateBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomStateBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ExRoomStateBase__TypeInfo);
    byte_5932D5C = 1;
  }
  this->fields.actionPanel = actionPanelObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionPanel,
    (int32_t)actionPanelObject,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  ExRoomRootComponent__InitParam(this, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExRoomStateBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExRoomStateBase___ctor__);
  v15 = sub_21FFEBC(ExRoomStateBase_TypeInfo);
  *(_QWORD *)(v15 + 28) = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_QWORD *)(v15 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  if ( !v14 )
    goto LABEL_22;
  items = v14->fields._items;
  v29 = Method_System_Collections_Generic_List_ExRoomStateBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_22;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v15,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), v15, v22, v23, v24, v25, v26, v27);
  }
  v32 = sub_21FFEBC(ExRoomStateTop_TypeInfo);
  *(_QWORD *)(v32 + 28) = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)v32, 0);
  *(_QWORD *)(v32 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 16), (int32_t)this, v33, v34, v35, v36, v37, v38);
  v45 = Method_System_Collections_Generic_List_ExRoomStateBase__Add__;
  v46 = v14->fields._items;
  *(_QWORD *)(v32 + 32) = 0x7300000064LL;
  ++v14->fields._version;
  if ( !v46 )
    goto LABEL_22;
  v47 = v14->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v46->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v32,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v46->obj.klass + v47;
    v14->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), v32, v39, v40, v41, v42, v43, v44);
  }
  v49 = sub_21FFEBC(ExRoomStateQuest_TypeInfo);
  *(_QWORD *)(v49 + 28) = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)v49, 0);
  *(_QWORD *)(v49 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 16), (int32_t)this, v50, v51, v52, v53, v54, v55);
  v62 = Method_System_Collections_Generic_List_ExRoomStateBase__Add__;
  v63 = v14->fields._items;
  *(_QWORD *)(v49 + 32) = 0x7400000065LL;
  ++v14->fields._version;
  if ( !v63 )
    goto LABEL_22;
  v64 = v14->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v63->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v49,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v63->obj.klass + v64;
    v14->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v49;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 4), v49, v56, v57, v58, v59, v60, v61);
  }
  v66 = sub_21FFEBC(ExRoomStateShop_TypeInfo);
  *(_QWORD *)(v66 + 28) = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)v66, 0);
  *(_QWORD *)(v66 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)this, v67, v68, v69, v70, v71, v72);
  v79 = Method_System_Collections_Generic_List_ExRoomStateBase__Add__;
  v80 = v14->fields._items;
  *(_QWORD *)(v66 + 32) = 0x7500000066LL;
  ++v14->fields._version;
  if ( !v80 )
LABEL_22:
    sub_21FFECC(gameObject, v12);
  v81 = v14->fields._size;
  if ( (unsigned int)v81 >= LODWORD(v80->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v66,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = &v80->obj.klass + v81;
    v14->fields._size = v81 + 1;
    v82[4] = (Il2CppClass *)v66;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v82 + 4), v66, v73, v74, v75, v76, v77, v78);
  }
  this->fields.listState = (struct System_Collections_Generic_List_ExRoomStateBase__o *)v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listState, (int32_t)v14, v83, v84, v85, v86, v87, v88);
  started = ExRoomRootComponent__StartInitSetting(this, callback, v89);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void ExRoomRootComponent__InitAfter(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ScrPlayerStatus_o *TerminalScene; // x0
  const MethodInfo *v4; // x1
  struct UnityEngine_BoxCollider_o *masterMissionBtnColl; // x8
  ExRoomRootComponent_o *v6; // x0
  const MethodInfo *v7; // x1
  ExRoomRootComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  ExRoomRootComponent_o *v10; // x0
  const MethodInfo *v11; // x1
  struct UnityEngine_BoxCollider_o *v12; // x8
  QuestBoardListViewManager_o *m_CachedPtr; // x20
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  ExRoomRootComponent_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int32_t TargetState; // w20
  const MethodInfo *v22; // x2
  ExRoomRootComponent_o *v23; // x0
  const MethodInfo *v24; // x1
  ExRoomRootComponent_o *v25; // x0
  const MethodInfo *v26; // x1

  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(this, method);
  if ( !TerminalScene )
    goto LABEL_21;
  masterMissionBtnColl = TerminalScene->fields.masterMissionBtnColl;
  if ( !masterMissionBtnColl )
    goto LABEL_21;
  TerminalScene = (ScrPlayerStatus_o *)masterMissionBtnColl[5].monitor;
  if ( !TerminalScene )
    goto LABEL_21;
  ScrPlayerStatus__FrameOut(TerminalScene, 1, 0);
  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(v6, v7);
  if ( !TerminalScene )
    goto LABEL_21;
  TerminalScene = (ScrPlayerStatus_o *)TerminalScene->fields.masterMissionAlertNumLb;
  if ( !TerminalScene )
    goto LABEL_21;
  StandFigureSlideComponent__SlideOut((StandFigureSlideComponent_o *)TerminalScene, 0, 1, 0);
  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(v8, v9);
  if ( !TerminalScene )
    goto LABEL_21;
  TerminalScene = (ScrPlayerStatus_o *)TerminalScene->fields.masterMissionAlertNumLb;
  if ( !TerminalScene )
    goto LABEL_21;
  StandFigureSlideComponent__SetEnable((StandFigureSlideComponent_o *)TerminalScene, 0, 0);
  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(v10, v11);
  if ( !TerminalScene )
    goto LABEL_21;
  v12 = TerminalScene->fields.masterMissionBtnColl;
  if ( !v12 )
    goto LABEL_21;
  m_CachedPtr = (QuestBoardListViewManager_o *)v12[13].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_21;
  if ( m_CachedPtr->fields.initMode )
  {
    v14 = QuestBoardListViewManager__SetMode(m_CachedPtr, 4, 0, 0, 0, 0, 0);
  }
  else
  {
    QuestBoardListViewManager__SetOutPosition(m_CachedPtr, 0);
    QuestBoardListViewManager__InitListObject(m_CachedPtr, 0, 0);
  }
  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene((ExRoomRootComponent_o *)v14, v15);
  if ( !TerminalScene )
    goto LABEL_21;
  TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)TerminalScene, 0);
  MainMenuBar__setKind(5, 0);
  MainMenuBar__setButtonActive(0, 0);
  ExRoomRootComponent__SetFocusQuestId(this, v16);
  ExRoomRootComponent__SetFromOutsideMainMenuType(this, v17);
  TargetState = ExRoomRootComponent__GetTargetState(v18, v19);
  if ( TargetState == 2 )
    MainMenuBar__FrameOut(1, 0);
  TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__GetState(this, TargetState, v20);
  if ( !TerminalScene
    || (ExRoomStateBase__SetHeaderTitle((ExRoomStateBase_o *)TerminalScene, v4),
        ExRoomRootComponent__ChangeState(this, TargetState, v22),
        (TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(v23, v24)) == 0)
    || (TerminalSceneComponent__ClearTransitionInfo((TerminalSceneComponent_o *)TerminalScene, 0),
        (TerminalScene = (ScrPlayerStatus_o *)ExRoomRootComponent__get_TerminalScene(v25, v26)) == 0) )
  {
LABEL_21:
    sub_21FFECC(TerminalScene, v4);
  }
  TerminalSceneComponent__PlayExRoomBgm((TerminalSceneComponent_o *)TerminalScene, 0);
}


void ExRoomRootComponent__InitParam(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ExRoomRootComponent_o *v2; // x19
  struct System_Collections_Generic_List_ExRoomStateBase__o *listState; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_5932D61 & 1) == 0 )
  {
    this = (ExRoomRootComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ExRoomStateBase__Clear__);
    byte_5932D61 = 1;
  }
  listState = v2->fields.listState;
  *(_QWORD *)&v2->fields.prevState = 0;
  if ( !listState )
    sub_21FFECC(this, method);
  size = listState->fields._size;
  v5 = listState->fields._version + 1;
  listState->fields._size = 0;
  listState->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)listState->fields._items, 0, size, 0);
  v2->fields.exRoomFromOutsideMainMenuType = 0;
  v2->fields._FocusQuestId_k__BackingField = 0;
}


bool ExRoomRootComponent__IsDispQuestState(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *QuestDisp_k__BackingField; // x20

  if ( (byte_5932D67 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D67 = 1;
  }
  QuestDisp_k__BackingField = (UnityEngine_Object_o *)this->fields._QuestDisp_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  return !UnityEngine_Object__op_Equality(QuestDisp_k__BackingField, 0, 0) && this->fields.currentState == 2;
}


bool ExRoomRootComponent__IsDispState(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentState != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ExRoomRootComponent__IsFeatureOpen(bool withCheckOpen, const MethodInfo *method)
{
  bool v2; // w19
  __int64 v3; // x1
  __int64 v4; // x2
  int32_t Value; // w19

  v2 = withCheckOpen;
  if ( (byte_5932D5B & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    *(_QWORD *)&withCheckOpen = sub_21FFC50(&StringLiteral_6060/*"EX_ROOM_FEATURE_RELEASE_COMMON_ID"*/);
    byte_5932D5B = 1;
  }
  if ( v2 && !ExRoomRootComponent__IsOpen((const MethodInfo *)withCheckOpen) )
    return 0;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6060/*"EX_ROOM_FEATURE_RELEASE_COMMON_ID"*/, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v3, v4);
  return CondType__IsCommonRelease(Value, 0, 0);
}


bool ExRoomRootComponent__IsOpen(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t Value; // w19

  if ( (byte_5932D5A & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&StringLiteral_6062/*"EX_ROOM_RELEASE_COMMON_ID"*/);
    byte_5932D5A = 1;
  }
  if ( !ConstantMaster__IsFlag20260802(0) )
    return 0;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6062/*"EX_ROOM_RELEASE_COMMON_ID"*/, 0);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v1, v2);
  return CondType__IsCommonRelease(Value, 0, 0);
}


void ExRoomRootComponent__OnClickBack(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomStateBase_o *State; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5932D68 & 1) == 0 )
  {
    sub_21FFC50(&Method_ExRoomRootComponent_OnClickBack__);
    byte_5932D68 = 1;
  }
  State = ExRoomRootComponent__GetState(this, this->fields.currentState, v2);
  if ( !State )
    sub_21FFECC(0, v5);
  ((void (__fastcall *)(ExRoomStateBase_o *, const MethodInfo *))State->klass->vtable._7_OnClickBack.methodPtr)(
    State,
    State->klass->vtable._7_OnClickBack.method);
  v6 = Method_ExRoomRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_ExRoomRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_ExRoomRootComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
}


void ExRoomRootComponent__OnDestroy(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ExRoomRootComponent__Quit(this, 0, v2);
}


void ExRoomRootComponent__Quit(ExRoomRootComponent_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ExRoomBackground_o *background; // x0
  __int64 v6; // x2
  struct ExRoomResourceCatalogAssetBundle_o *ResourceCatalog_k__BackingField; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  if ( (byte_5932D62 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5932D62 = 1;
  }
  background = this->fields.background;
  if ( !background )
    goto LABEL_16;
  ExRoomBackground__ClearBackground(background, 0);
  background = (ExRoomBackground_o *)this->fields.servant;
  if ( !background )
    goto LABEL_16;
  ExRoomServant__ClearServant((ExRoomServant_o *)background, (const MethodInfo *)callback);
  ResourceCatalog_k__BackingField = this->fields._ResourceCatalog_k__BackingField;
  if ( ResourceCatalog_k__BackingField )
  {
    background = (ExRoomBackground_o *)ResourceCatalog_k__BackingField->fields.assetStorageLoadWrapper;
    if ( !background )
      goto LABEL_16;
    AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)background, 0);
    this->fields._ResourceCatalog_k__BackingField = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._ResourceCatalog_k__BackingField,
      0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( this->fields.shouldUnload )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, callback, v6);
    AtlasManager__ReleaseNotification(0);
    this->fields.shouldUnload = 0;
  }
  background = (ExRoomBackground_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !background )
LABEL_16:
    sub_21FFECC(background, callback);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)background, 0, 0);
  ExRoomRootComponent__InitParam(this, v14);
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ExRoomRootComponent__ResetFocusQuestId(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  this->fields._FocusQuestId_k__BackingField = 0;
}


void ExRoomRootComponent__ResetFromOutsideMainMenuType(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  this->fields.exRoomFromOutsideMainMenuType = 0;
}


void ExRoomRootComponent__ResetPlayedVoiceAndPlayVoice(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ExRoomServant_o *servant; // x0
  const MethodInfo *v4; // x3
  unsigned int v5; // w8
  int32_t v6; // w1

  servant = this->fields.servant;
  if ( !servant || (ExRoomServant__ResetPlayedVoice(servant, method), (servant = this->fields.servant) == 0) )
    sub_21FFECC(servant, method);
  v5 = this->fields.currentState - 1;
  if ( v5 > 2 )
    v6 = 0;
  else
    v6 = dword_ED0004[v5];
  ExRoomServant__PlayVoice(servant, v6, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomRootComponent__SetEnableUi(ExRoomRootComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *blockUi; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5932D63 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932D63 = 1;
  }
  blockUi = (UnityEngine_Object_o *)this->fields.blockUi;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( UnityEngine_Object__op_Inequality(blockUi, 0, 0) )
  {
    v7 = this->fields.blockUi;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, !isEnable, 0);
  }
}


void ExRoomRootComponent__SetFocusQuestId(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  ExRoomRootComponent_o *TerminalScene; // x0
  const MethodInfo *v4; // x1
  struct ExRoomTopComponent_o *TopDisp_k__BackingField; // x8

  TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(this, method);
  if ( !TerminalScene )
    goto LABEL_7;
  TopDisp_k__BackingField = TerminalScene[3].fields._TopDisp_k__BackingField;
  if ( TopDisp_k__BackingField )
  {
    TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(TerminalScene, v4);
    if ( TerminalScene )
    {
      TopDisp_k__BackingField = TerminalScene[3].fields._TopDisp_k__BackingField;
      if ( TopDisp_k__BackingField )
      {
        LODWORD(TopDisp_k__BackingField) = TopDisp_k__BackingField->fields.helpButtonSprite;
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_21FFECC(TerminalScene, v4);
  }
LABEL_6:
  this->fields._FocusQuestId_k__BackingField = (int)TopDisp_k__BackingField;
}


void ExRoomRootComponent__SetFromOutsideMainMenuType(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalPramsManager_c *v4; // x0
  struct ExRoomTopComponent_o *TopDisp_k__BackingField; // x8
  ExRoomRootComponent_o *TerminalScene; // x0
  const MethodInfo *v7; // x1

  if ( (byte_5932D5F & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932D5F = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
  if ( !byte_5932DFD )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DFD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsAutoExRoom_k__BackingField )
    goto LABEL_18;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( !byte_5932DFE )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932DFE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v2);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( !v4->static_fields->_IsAutoExRoomWin_k__BackingField )
  {
LABEL_18:
    TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene((ExRoomRootComponent_o *)v4, method);
    if ( TerminalScene )
    {
      TopDisp_k__BackingField = TerminalScene[3].fields._TopDisp_k__BackingField;
      if ( !TopDisp_k__BackingField )
        goto LABEL_23;
      TerminalScene = (ExRoomRootComponent_o *)ExRoomRootComponent__get_TerminalScene(TerminalScene, v7);
      if ( TerminalScene )
      {
        TopDisp_k__BackingField = TerminalScene[3].fields._TopDisp_k__BackingField;
        if ( TopDisp_k__BackingField )
        {
          LODWORD(TopDisp_k__BackingField) = HIDWORD(TopDisp_k__BackingField->fields.helpButtonSprite);
          goto LABEL_23;
        }
      }
    }
    sub_21FFECC(TerminalScene, v7);
  }
  LODWORD(TopDisp_k__BackingField) = 3;
LABEL_23:
  this->fields.exRoomFromOutsideMainMenuType = (int)TopDisp_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ExRoomRootComponent__SetHeaderTitle(
        ExRoomRootComponent_o *this,
        int32_t backKind,
        int32_t titleKind,
        const MethodInfo *method)
{
  TitleInfoControl_o *TerminalScene; // x0
  __int64 v7; // x1
  ExRoomRootComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  ExRoomRootComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  TerminalScene = (TitleInfoControl_o *)ExRoomRootComponent__get_TerminalScene(this, *(const MethodInfo **)&backKind);
  if ( !TerminalScene
    || (TerminalScene = (TitleInfoControl_o *)TerminalScene->fields.mEventAlphaAnimRoot) == 0
    || (TitleInfoControl__ResetEventInfoOnExRoom(TerminalScene, 0),
        (TerminalScene = (TitleInfoControl_o *)ExRoomRootComponent__get_TerminalScene(v8, v9)) == 0)
    || (TerminalScene = (TitleInfoControl_o *)TerminalScene->fields.mEventAlphaAnimRoot) == 0
    || (TitleInfoControl__setBackBtnSprite(TerminalScene, backKind, 1, 0),
        (TerminalScene = (TitleInfoControl_o *)ExRoomRootComponent__get_TerminalScene(v10, v11)) == 0)
    || (TerminalScene = (TitleInfoControl_o *)TerminalScene->fields.mEventAlphaAnimRoot) == 0 )
  {
    sub_21FFECC(TerminalScene, v7);
  }
  TitleInfoControl__setTitleImgFromBanner(TerminalScene, 0, 0, 1, titleKind, 0);
}


System_Collections_IEnumerator_o *ExRoomRootComponent__StartInitSetting(
        ExRoomRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932D5D & 1) == 0 )
  {
    sub_21FFC50(&ExRoomRootComponent__StartInitSetting_d__60_TypeInfo);
    byte_5932D5D = 1;
  }
  v5 = sub_21FFEBC(ExRoomRootComponent__StartInitSetting_d__60_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


UnityEngine_GameObject_o *ExRoomRootComponent__get_ActionPanel(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.actionPanel;
}


ExRoomBackground_o *ExRoomRootComponent__get_Background(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.background;
}


int32_t ExRoomRootComponent__get_CurrentState(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentState;
}


int32_t ExRoomRootComponent__get_FocusQuestId(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._FocusQuestId_k__BackingField;
}


bool ExRoomRootComponent__get_IsDirectFromBattle(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.exRoomFromOutsideMainMenuType == 3;
}


bool ExRoomRootComponent__get_IsDirectFromMasterMissionButton(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.exRoomFromOutsideMainMenuType == 2;
}


bool ExRoomRootComponent__get_IsDirectFromShopButton(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.exRoomFromOutsideMainMenuType == 1;
}


UnityEngine_GameObject_o *ExRoomRootComponent__get_NoticeNumberPrefab(
        ExRoomRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.noticeNumberPrefab;
}


int32_t ExRoomRootComponent__get_PrevState(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.prevState;
}


ExRoomQuestComponent_o *ExRoomRootComponent__get_QuestDisp(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._QuestDisp_k__BackingField;
}


ExRoomResourceCatalogAssetBundle_o *ExRoomRootComponent__get_ResourceCatalog(
        ExRoomRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._ResourceCatalog_k__BackingField;
}


ExRoomServant_o *ExRoomRootComponent__get_Servant(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.servant;
}


ExRoomShopComponent_o *ExRoomRootComponent__get_ShopDisp(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._ShopDisp_k__BackingField;
}


TerminalSceneComponent_o *ExRoomRootComponent__get_TerminalScene(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0

  if ( (byte_5932D59 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5932D59 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  return v3->static_fields->mInstance;
}


ExRoomTopComponent_o *ExRoomRootComponent__get_TopDisp(ExRoomRootComponent_o *this, const MethodInfo *method)
{
  return this->fields._TopDisp_k__BackingField;
}


void ExRoomRootComponent__set_FocusQuestId(ExRoomRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._FocusQuestId_k__BackingField = value;
}


void ExRoomRootComponent__set_QuestDisp(
        ExRoomRootComponent_o *this,
        ExRoomQuestComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestDisp_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestDisp_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomRootComponent__set_ResourceCatalog(
        ExRoomRootComponent_o *this,
        ExRoomResourceCatalogAssetBundle_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ResourceCatalog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ResourceCatalog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomRootComponent__set_ShopDisp(
        ExRoomRootComponent_o *this,
        ExRoomShopComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ShopDisp_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ShopDisp_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomRootComponent__set_TopDisp(
        ExRoomRootComponent_o *this,
        ExRoomTopComponent_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TopDisp_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TopDisp_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomRootComponent__ChangeStateCoroutine_d__75___ctor(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ExRoomRootComponent__ChangeStateCoroutine_d__75__MoveNext(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct ExRoomRootComponent_o *_4__this; // x20
  ExRoomStateBase_o *currentStateBase; // x0
  struct ExRoomRootComponent___c__DisplayClass75_0_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  struct ExRoomRootComponent___c__DisplayClass75_0_o *v15; // x8
  struct ExRoomRootComponent___c__DisplayClass75_0_o *v16; // x20
  Il2CppObject *v17; // x22
  struct ExRoomRootComponent___c__DisplayClass75_0_o **p__8__1; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2
  struct ExRoomRootComponent___c__DisplayClass75_0_o *v26; // x22
  const MethodInfo *v27; // x2
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  ExRoomStateBase_c *klass; // x8
  Il2CppObject *v35; // x20
  System_Func_bool__o *v36; // x21
  UnityEngine_WaitWhile_o *v37; // x20
  Il2CppObject **v38; // x19
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct ExRoomRootComponent___c__DisplayClass75_0_o *_8__1; // x8
  Il2CppObject *v46; // x20
  System_Func_bool__o *v47; // x21
  UnityEngine_WaitWhile_o *v48; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int v56; // w8
  TerminalSceneComponent_o *TerminalScene; // x20
  Il2CppObject *v58; // x22
  System_Action_o *v59; // x21
  System_Func_bool__o *v60; // x21
  UnityEngine_WaitWhile_o *v61; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7

  if ( (byte_5932D6B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__0__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__1__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__2__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__3__);
    sub_21FFC50(&ExRoomRootComponent___c__DisplayClass75_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_5932D6B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  currentStateBase = 0;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      _8__1 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( _8__1 )
      {
        currentStateBase = _8__1->fields.currentStateBase;
        if ( currentStateBase )
        {
          ExRoomStateBase__OnEnterSequence(currentStateBase, method);
          v46 = (Il2CppObject *)this->fields.__8__1;
          v47 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v47,
            v46,
            Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__3__,
            0);
          v48 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
          UnityEngine_WaitWhile___ctor(v48, v47, 0);
          this->fields.__2__current = (Il2CppObject *)v48;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v48, v50, v51, v52, v53, v54, v55);
          v56 = 3;
LABEL_33:
          *((_DWORD *)p__2__current - 2) = v56;
          LOBYTE(currentStateBase) = 1;
          return (char)currentStateBase;
        }
      }
      goto LABEL_35;
    }
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      ExRoomRootComponent__SetEnableUi(_4__this, 1, v2);
      LOBYTE(currentStateBase) = 0;
    }
  }
  else if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v7 = this->fields.__8__1;
        currentStateBase = ExRoomRootComponent__GetState(_4__this, _4__this->fields.currentState, v2);
        if ( v7 )
        {
          v7->fields.currentStateBase = currentStateBase;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v7->fields.currentStateBase,
            (int32_t)currentStateBase,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13);
          v15 = this->fields.__8__1;
          if ( v15 )
          {
            v15->fields.isWaitTutorial = 1;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v14);
            if ( !byte_5932E00 )
            {
              sub_21FFC50(&TerminalPramsManager_TypeInfo);
              byte_5932E00 = 1;
            }
            currentStateBase = (ExRoomStateBase_o *)TerminalPramsManager_TypeInfo;
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method, v14);
              currentStateBase = (ExRoomStateBase_o *)TerminalPramsManager_TypeInfo;
            }
            if ( *(_BYTE *)(*(_QWORD *)&currentStateBase[4].fields._OnEndEnter_k__BackingField + 788LL) )
            {
              v16 = this->fields.__8__1;
              if ( v16 )
              {
                v16->fields.isWaitTutorial = 0;
LABEL_32:
                v60 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
                System_Func_bool____ctor(
                  v60,
                  (Il2CppObject *)v16,
                  Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__2__,
                  0);
                v61 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
                UnityEngine_WaitWhile___ctor(v61, v60, 0);
                this->fields.__2__current = (Il2CppObject *)v61;
                p__2__current = &this->fields.__2__current;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)p__2__current,
                  (int32_t)v61,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67);
                v56 = 2;
                goto LABEL_33;
              }
            }
            else
            {
              TerminalScene = ExRoomRootComponent__get_TerminalScene((ExRoomRootComponent_o *)currentStateBase, method);
              v58 = (Il2CppObject *)this->fields.__8__1;
              v59 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v59,
                v58,
                Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__1__,
                0);
              if ( TerminalScene )
              {
                TerminalSceneComponent__CheckRewardPopupChain(TerminalScene, v59, 0, 0, 0, 0);
                v16 = this->fields.__8__1;
                goto LABEL_32;
              }
            }
          }
        }
      }
LABEL_35:
      sub_21FFECC(currentStateBase, method);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v17 = (Il2CppObject *)sub_21FFEBC(ExRoomRootComponent___c__DisplayClass75_0_TypeInfo);
    System_Object___ctor(v17, 0);
    this->fields.__8__1 = (struct ExRoomRootComponent___c__DisplayClass75_0_o *)v17;
    p__8__1 = &this->fields.__8__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v17, v19, v20, v21, v22, v23, v24);
    if ( !_4__this )
      goto LABEL_35;
    ExRoomRootComponent__SetEnableUi(_4__this, 0, v25);
    v26 = *p__8__1;
    currentStateBase = ExRoomRootComponent__GetState(_4__this, _4__this->fields.prevState, v27);
    if ( !v26 )
      goto LABEL_35;
    v26->fields.prevStateBase = currentStateBase;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v26->fields,
      (int32_t)currentStateBase,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !*p__8__1 )
      goto LABEL_35;
    currentStateBase = (*p__8__1)->fields.prevStateBase;
    if ( !currentStateBase )
      goto LABEL_35;
    klass = currentStateBase->klass;
    currentStateBase->fields._OnEndExit_k__BackingField = 0;
    ((void (__fastcall *)(ExRoomStateBase_o *, const MethodInfo *))klass->vtable._6_OnExit.methodPtr)(
      currentStateBase,
      klass->vtable._6_OnExit.method);
    v35 = (Il2CppObject *)this->fields.__8__1;
    v36 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v36, v35, Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__0__, 0);
    v37 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v37, v36, 0);
    this->fields.__2__current = (Il2CppObject *)v37;
    v38 = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v38, (int32_t)v37, v39, v40, v41, v42, v43, v44);
    LOBYTE(currentStateBase) = 1;
    *((_DWORD *)v38 - 2) = 1;
  }
  return (char)currentStateBase;
}


Il2CppObject *ExRoomRootComponent__ChangeStateCoroutine_d__75__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ExRoomRootComponent__ChangeStateCoroutine_d__75__System_Collections_IEnumerator_Reset(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ExRoomRootComponent__ChangeStateCoroutine_d__75_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ExRoomRootComponent__ChangeStateCoroutine_d__75__System_Collections_IEnumerator_get_Current(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ExRoomRootComponent__ChangeStateCoroutine_d__75__System_IDisposable_Dispose(
        ExRoomRootComponent__ChangeStateCoroutine_d__75_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomRootComponent__StartInitSetting_d__60___ctor(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ExRoomRootComponent__StartInitSetting_d__60__MoveNext(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w27
  struct System_Action_o *callback; // x8
  struct ExRoomRootComponent_o *_4__this; // x21
  __int64 v6; // x20
  void *Master_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct ExRoomRootComponent_o *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  _DWORD *v18; // x22
  ExRoomBackground_o *background; // x23
  int32_t v20; // w24
  System_Action_o *v21; // x25
  int32_t v22; // w25
  System_Action_c *v23; // x0
  int32_t v24; // w22
  int32_t v25; // w24
  char *v26; // t2
  ExRoomServant_o *servant; // x23
  System_Action_o *v28; // x26
  const MethodInfo *v29; // x5
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Component_o **p_TopDisp_k__BackingField; // x22
  UnityEngine_Object_o *TopDisp_k__BackingField; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  UnityEngine_Component_o **p_QuestDisp_k__BackingField; // x22
  UnityEngine_Object_o *QuestDisp_k__BackingField; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  UnityEngine_Component_o **p_ShopDisp_k__BackingField; // x22
  UnityEngine_Object_o *ShopDisp_k__BackingField; // x23
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct ExRoomResourceCatalogAssetBundle_o *v60; // x8
  MissionNaviTransitionBoardItem_o *p_ResourceCatalog_k__BackingField; // x21
  struct ExRoomResourceCatalogAssetBundle_o *ResourceCatalog_k__BackingField; // t1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Action_c *v69; // x0
  System_Action_o *v70; // x22
  __int64 v71; // x1
  __int64 v72; // x2
  ExRoomResourceCatalogAssetBundle_o *v73; // x22
  const MethodInfo *v74; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_Action_c *v81; // x0
  ExRoomResourceCatalogAssetBundle_o *klass; // x21
  System_Action_o *v83; // x22
  const MethodInfo *v84; // x2
  System_Func_bool__o *v85; // x21
  UnityEngine_WaitWhile_o *v86; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7

  if ( (byte_5932D6C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GuideMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ExRoomResourceCatalogAssetBundle_TypeInfo);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__0__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__1__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__2__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__3__);
    sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__4__);
    sub_21FFC50(&ExRoomRootComponent___c__DisplayClass60_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_5932D6C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_21FFEBC(ExRoomRootComponent___c__DisplayClass60_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( v6 )
    {
      v15 = this->fields.__4__this;
      *(_QWORD *)(v6 + 24) = v15;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v15, v9, v10, v11, v12, v13, v14);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GuideMaster___);
      if ( Master_object )
      {
        Master_object = GuideMaster__getGuideData((GuideMaster_o *)Master_object, 4, 0);
        *(_DWORD *)(v6 + 16) = 1;
        if ( _4__this )
        {
          v18 = Master_object;
          if ( Master_object )
          {
            background = _4__this->fields.background;
            v20 = *((_DWORD *)Master_object + 9);
            v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v6,
              Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__0__,
              0);
            if ( background )
            {
              ExRoomBackground__SetBackground(background, v20, v21, 0);
              v22 = v18[6];
              v23 = System_Action_TypeInfo;
              v26 = (char *)(v18 + 7);
              v24 = v18[7];
              v25 = *((_DWORD *)v26 + 1);
              servant = _4__this->fields.servant;
              ++*(_DWORD *)(v6 + 16);
              v28 = (System_Action_o *)sub_21FFEBC(v23);
              System_Action___ctor(
                v28,
                (Il2CppObject *)v6,
                Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__1__,
                0);
              if ( servant )
              {
                ExRoomServant__SetServant(servant, v22, v25, v24, v28, v29);
                p_TopDisp_k__BackingField = (UnityEngine_Component_o **)&_4__this->fields._TopDisp_k__BackingField;
                TopDisp_k__BackingField = (UnityEngine_Object_o *)_4__this->fields._TopDisp_k__BackingField;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
                if ( UnityEngine_Object__op_Inequality(TopDisp_k__BackingField, 0, 0) )
                {
                  BasicHelper__Destroy(*p_TopDisp_k__BackingField, 0);
                  *p_TopDisp_k__BackingField = 0;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._TopDisp_k__BackingField,
                    0,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    v41);
                }
                p_QuestDisp_k__BackingField = (UnityEngine_Component_o **)&_4__this->fields._QuestDisp_k__BackingField;
                QuestDisp_k__BackingField = (UnityEngine_Object_o *)_4__this->fields._QuestDisp_k__BackingField;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
                if ( UnityEngine_Object__op_Inequality(QuestDisp_k__BackingField, 0, 0) )
                {
                  BasicHelper__Destroy(*p_QuestDisp_k__BackingField, 0);
                  *p_QuestDisp_k__BackingField = 0;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._QuestDisp_k__BackingField,
                    0,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50,
                    v51);
                }
                p_ShopDisp_k__BackingField = (UnityEngine_Component_o **)&_4__this->fields._ShopDisp_k__BackingField;
                ShopDisp_k__BackingField = (UnityEngine_Object_o *)_4__this->fields._ShopDisp_k__BackingField;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
                if ( UnityEngine_Object__op_Inequality(ShopDisp_k__BackingField, 0, 0) )
                {
                  BasicHelper__Destroy(*p_ShopDisp_k__BackingField, 0);
                  *p_ShopDisp_k__BackingField = 0;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._ShopDisp_k__BackingField,
                    0,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58,
                    v59);
                }
                ResourceCatalog_k__BackingField = _4__this->fields._ResourceCatalog_k__BackingField;
                p_ResourceCatalog_k__BackingField = (MissionNaviTransitionBoardItem_o *)&_4__this->fields._ResourceCatalog_k__BackingField;
                v60 = ResourceCatalog_k__BackingField;
                if ( ResourceCatalog_k__BackingField )
                {
                  Master_object = v60->fields.assetStorageLoadWrapper;
                  if ( !Master_object )
                    goto LABEL_35;
                  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)Master_object, 0);
                  p_ResourceCatalog_k__BackingField->klass = 0;
                  sub_21FFBF4(p_ResourceCatalog_k__BackingField, 0, v63, v64, v65, v66, v67, v68);
                }
                v69 = System_Action_TypeInfo;
                ++*(_DWORD *)(v6 + 16);
                v70 = (System_Action_o *)sub_21FFEBC(v69);
                System_Action___ctor(
                  v70,
                  (Il2CppObject *)v6,
                  Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__2__,
                  0);
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71, v72);
                AtlasManager__LoadNotification(v70, 0);
                v73 = (ExRoomResourceCatalogAssetBundle_o *)sub_21FFEBC(ExRoomResourceCatalogAssetBundle_TypeInfo);
                ExRoomResourceCatalogAssetBundle___ctor(v73, v74);
                p_ResourceCatalog_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v73;
                sub_21FFBF4(p_ResourceCatalog_k__BackingField, (int32_t)v73, v75, v76, v77, v78, v79, v80);
                v81 = System_Action_TypeInfo;
                klass = (ExRoomResourceCatalogAssetBundle_o *)p_ResourceCatalog_k__BackingField->klass;
                ++*(_DWORD *)(v6 + 16);
                v83 = (System_Action_o *)sub_21FFEBC(v81);
                System_Action___ctor(
                  v83,
                  (Il2CppObject *)v6,
                  Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__3__,
                  0);
                if ( klass )
                {
                  ExRoomResourceCatalogAssetBundle__LoadAsset(klass, v83, v84);
                  v85 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
                  System_Func_bool____ctor(
                    v85,
                    (Il2CppObject *)v6,
                    Method_ExRoomRootComponent___c__DisplayClass60_0__StartInitSetting_b__4__,
                    0);
                  v86 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
                  UnityEngine_WaitWhile___ctor(v86, v85, 0);
                  this->fields.__2__current = (Il2CppObject *)v86;
                  p__2__current = &this->fields.__2__current;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)p__2__current,
                    (int32_t)v86,
                    v88,
                    v89,
                    v90,
                    v91,
                    v92,
                    v93);
                  *((_DWORD *)p__2__current - 2) = 1;
                  return _1__state == 0;
                }
              }
            }
          }
        }
      }
    }
LABEL_35:
    sub_21FFECC(Master_object, v8);
  }
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
  }
  return _1__state == 0;
}


Il2CppObject *ExRoomRootComponent__StartInitSetting_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ExRoomRootComponent__StartInitSetting_d__60__System_Collections_IEnumerator_Reset(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ExRoomRootComponent__StartInitSetting_d__60_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ExRoomRootComponent__StartInitSetting_d__60__System_Collections_IEnumerator_get_Current(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ExRoomRootComponent__StartInitSetting_d__60__System_IDisposable_Dispose(
        ExRoomRootComponent__StartInitSetting_d__60_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomRootComponent___c__DisplayClass60_0___ctor(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomRootComponent___c__DisplayClass60_0___StartInitSetting_b__0(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  --this->fields.loadingCount;
}


void ExRoomRootComponent___c__DisplayClass60_0___StartInitSetting_b__1(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  --this->fields.loadingCount;
}


void ExRoomRootComponent___c__DisplayClass60_0___StartInitSetting_b__2(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  struct ExRoomRootComponent_o *_4__this; // x8
  int32_t loadingCount; // w9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(this, method);
  loadingCount = this->fields.loadingCount;
  _4__this->fields.shouldUnload = 1;
  this->fields.loadingCount = loadingCount - 1;
}


void ExRoomRootComponent___c__DisplayClass60_0___StartInitSetting_b__3(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  struct ExRoomRootComponent_o *_4__this; // x20
  ExRoomRootComponent___c__DisplayClass60_0_o *v3; // x19
  ExRoomResourceCatalogAssetBundle_o *ResourceCatalog_k__BackingField; // x21
  const MethodInfo *v5; // x2
  ExRoomTopComponent_o *TopPanelPrefab; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ExRoomRootComponent_o *v13; // x20
  ExRoomResourceCatalogAssetBundle_o *v14; // x21
  const MethodInfo *v15; // x2
  ExRoomQuestComponent_o *QuestPanelPrefab; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct ExRoomRootComponent_o *v23; // x20
  ExRoomResourceCatalogAssetBundle_o *v24; // x21
  const MethodInfo *v25; // x2
  ExRoomShopComponent_o *ShopPanelPrefab; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  ResourceCatalog_k__BackingField = _4__this->fields._ResourceCatalog_k__BackingField;
  this = (ExRoomRootComponent___c__DisplayClass60_0_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this->fields.__4__this,
                                                          0);
  if ( !ResourceCatalog_k__BackingField )
    goto LABEL_8;
  TopPanelPrefab = ExRoomResourceCatalogAssetBundle__CreateTopPanelPrefab(
                     ResourceCatalog_k__BackingField,
                     (UnityEngine_GameObject_o *)this,
                     v5);
  _4__this->fields._TopDisp_k__BackingField = TopPanelPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields._TopDisp_k__BackingField,
    (int32_t)TopPanelPrefab,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_8;
  v14 = v13->fields._ResourceCatalog_k__BackingField;
  this = (ExRoomRootComponent___c__DisplayClass60_0_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)v3->fields.__4__this,
                                                          0);
  if ( !v14
    || (QuestPanelPrefab = ExRoomResourceCatalogAssetBundle__CreateQuestPanelPrefab(
                             v14,
                             (UnityEngine_GameObject_o *)this,
                             v15),
        v13->fields._QuestDisp_k__BackingField = QuestPanelPrefab,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v13->fields._QuestDisp_k__BackingField,
          (int32_t)QuestPanelPrefab,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (v23 = v3->fields.__4__this) == 0)
    || (v24 = v23->fields._ResourceCatalog_k__BackingField,
        this = (ExRoomRootComponent___c__DisplayClass60_0_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)v3->fields.__4__this,
                                                                0),
        !v24) )
  {
LABEL_8:
    sub_21FFECC(this, method);
  }
  ShopPanelPrefab = ExRoomResourceCatalogAssetBundle__CreateShopPanelPrefab(v24, (UnityEngine_GameObject_o *)this, v25);
  v23->fields._ShopDisp_k__BackingField = ShopPanelPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v23->fields._ShopDisp_k__BackingField,
    (int32_t)ShopPanelPrefab,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  --v3->fields.loadingCount;
}


bool ExRoomRootComponent___c__DisplayClass60_0___StartInitSetting_b__4(
        ExRoomRootComponent___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadingCount > 0;
}


void ExRoomRootComponent___c__DisplayClass75_0___ctor(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExRoomRootComponent___c__DisplayClass75_0___ChangeStateCoroutine_b__0(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ExRoomStateBase_o *prevStateBase; // x8

  prevStateBase = this->fields.prevStateBase;
  if ( !prevStateBase )
    sub_21FFECC(this, method);
  return !prevStateBase->fields._OnEndExit_k__BackingField;
}


void ExRoomRootComponent___c__DisplayClass75_0___ChangeStateCoroutine_b__1(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  ExRoomRootComponent___c__DisplayClass75_0_o *v2; // x19
  struct ExRoomStateBase_o *currentStateBase; // x8
  int32_t tutorialOpenType; // w20
  System_Action_o *_9__4; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v2 = this;
  if ( (byte_5932D6A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (ExRoomRootComponent___c__DisplayClass75_0_o *)sub_21FFC50(&Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__4__);
    byte_5932D6A = 1;
  }
  currentStateBase = v2->fields.currentStateBase;
  if ( !currentStateBase )
    sub_21FFECC(this, method);
  tutorialOpenType = currentStateBase->fields.tutorialOpenType;
  if ( tutorialOpenType )
  {
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_ExRoomRootComponent___c__DisplayClass75_0__ChangeStateCoroutine_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v6, v7, v8, v9, v10, v11);
    }
    EventTutorialMaster__CheckTutorial(0, tutorialOpenType, _9__4, 0, 0, 0, 0, 0);
  }
  else
  {
    v2->fields.isWaitTutorial = 0;
  }
}


bool ExRoomRootComponent___c__DisplayClass75_0___ChangeStateCoroutine_b__2(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isWaitTutorial;
}


bool ExRoomRootComponent___c__DisplayClass75_0___ChangeStateCoroutine_b__3(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ExRoomStateBase_o *currentStateBase; // x8

  currentStateBase = this->fields.currentStateBase;
  if ( !currentStateBase )
    sub_21FFECC(this, method);
  return !currentStateBase->fields._OnEndEnter_k__BackingField;
}


void ExRoomRootComponent___c__DisplayClass75_0___ChangeStateCoroutine_b__4(
        ExRoomRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  this->fields.isWaitTutorial = 0;
}