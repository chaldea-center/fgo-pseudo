void BoxGachaResultEffectComponent___ctor(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.openResultWindowTime = 0.1;
  this->fields.performanceSlideOutSpeed = 3.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BoxGachaResultEffectComponent__CheckAutoResetEnable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UICommonButton_o *multiGachaButton; // x0
  struct System_Action_o *endVoiceAction; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v8; // x19
  char v9; // w8
  Il2CppObject *Instance; // x21
  System_String_o *resetBoxMsg; // x20
  System_Action_o *v12; // x22
  UnityEngine_Vector2_o v13; // 0:s0.4,4:s1.4

  if ( (byte_596A807 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A807 = 1;
  }
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_17;
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, 1, 0);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_17;
  ((void (__fastcall *)(intptr_t, intptr_t))endVoiceAction->fields.invoke_impl)(
    endVoiceAction->fields.method_code,
    endVoiceAction->fields.method);
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v5);
  if ( this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox )
  {
    if ( !this->fields.isDispAutoResetDlg )
    {
      this->fields.isDispAutoResetDlg = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_0__,
        0);
      if ( !Instance )
        goto LABEL_17;
      v13.fields.x = 0.0;
      v13.fields.y = -40.0;
      CommonUI__OpenFullScreenMaskDialog((CommonUI_o *)Instance, resetBoxMsg, -1, v12, v13, -1, 0, 0);
    }
    return;
  }
  multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
  this->fields.isEndAfterMsg = 0;
  if ( !multiGachaButton
    || (ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0),
        BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v6),
        (multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel) == 0) )
  {
LABEL_17:
    sub_2213CDC(multiGachaButton, method);
  }
  multiGachaButton = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)multiGachaButton,
                                           0);
  isUnSkippable = this->fields.isUnSkippable;
  v8 = (UnityEngine_GameObject_o *)multiGachaButton;
  if ( isUnSkippable )
  {
    multiGachaButton = (UICommonButton_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
                                             isUnSkippable->fields.method_code,
                                             isUnSkippable->fields.method);
    v9 = (unsigned __int8)multiGachaButton ^ 1;
    if ( !v8 )
      goto LABEL_17;
  }
  else
  {
    v9 = 1;
    if ( !multiGachaButton )
      goto LABEL_17;
  }
  UnityEngine_GameObject__SetActive(v8, v9 & 1, 0);
}


void BoxGachaResultEffectComponent__CloseResultWindow(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v5; // x2

  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, 0, v5);
      return;
    }
LABEL_6:
    sub_2213CDC(resultWindow, v3);
  }
}


void BoxGachaResultEffectComponent__ContinueExeGacha(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BoxGachaResultEffectComponent_o *v8; // x19
  struct CommonMessageManager_o *messageManager; // x8
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__Action__o *afterAutoReset; // x21
  System_Action_o *v12; // x20

  v8 = this;
  if ( (byte_596A806 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__87_0__);
    this = (BoxGachaResultEffectComponent_o *)sub_2213A60(&StringLiteral_6019/*"EXE_GACHA"*/);
    byte_596A806 = 1;
  }
  messageManager = v8->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&messageManager->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  endVoiceAction = v8->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_11;
  ((void (__fastcall *)(intptr_t, intptr_t))endVoiceAction->fields.invoke_impl)(
    endVoiceAction->fields.method_code,
    endVoiceAction->fields.method);
  if ( !v8->fields.isBoxItemEmpty || v8->fields.isLastLimitBox )
  {
    this = (BoxGachaResultEffectComponent_o *)v8->fields.targetFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_6019/*"EXE_GACHA"*/, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(this, method);
  }
  afterAutoReset = v8->fields.afterAutoReset;
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v8, Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__87_0__, 0);
  if ( !afterAutoReset )
    goto LABEL_11;
  ((void (__fastcall *)(intptr_t, _QWORD, System_Action_o *, intptr_t))afterAutoReset->fields.invoke_impl)(
    afterAutoReset->fields.method_code,
    0,
    v12,
    afterAutoReset->fields.method);
}


void BoxGachaResultEffectComponent__EndAction(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_Action_o *endVoiceAction; // x8

  BoxGachaResultEffectComponent__EndMessage(this, isAfter, method);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    sub_2213CDC(v4, v5);
  ((void (__fastcall *)(intptr_t, intptr_t))endVoiceAction->fields.invoke_impl)(
    endVoiceAction->fields.method_code,
    endVoiceAction->fields.method);
}


void BoxGachaResultEffectComponent__EndMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CommonMessageManager_o *messageManager; // x0
  const MethodInfo *v7; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v9; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__76_0; // x20
  Il2CppObject *v12; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596A7FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__76_0__);
    sub_2213A60(&BoxGachaResultEffectComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_5646/*"END_MSG"*/);
    byte_596A7FE = 1;
  }
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, method);
  messageManager = this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_19;
  CommonMessageManager__Quit(messageManager, 0);
  if ( !isAfter )
    goto LABEL_8;
  messageManager = (CommonMessageManager_o *)this->fields.resourcesPanel;
  if ( !messageManager )
    goto LABEL_19;
  messageManager = (CommonMessageManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)messageManager,
                                               0);
  if ( !messageManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageManager, 0, 0);
  if ( this->fields.isOpenCompensationDlg
    || (compensationMsgIds = this->fields.compensationMsgIds) == 0
    || !compensationMsgIds->max_length )
  {
LABEL_8:
    messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
    if ( messageManager )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5646/*"END_MSG"*/, 0);
      return;
    }
LABEL_19:
    sub_2213CDC(messageManager, v5);
  }
  v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !*(&BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo, v5, v7);
    v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__76_0 = static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v5, v7);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__76_0, v12, Method_BoxGachaResultEffectComponent___c__EndMessage_b__76_0__, 0);
    v13 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v13->__9__76_0 = _9__76_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__76_0, (int32_t)_9__76_0, v14, v15, v16, v17, v18, v19);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__76_0, v7);
}


void BoxGachaResultEffectComponent__ExecuteGacha(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__float__o *endPerformanceAction; // x21
  System_Action_o *v11; // x20
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_596A80B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent_ExecuteGacha__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_0__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_1__);
    sub_2213A60(&StringLiteral_6019/*"EXE_GACHA"*/);
    byte_596A80B = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( (!isUnSkippable
     || (((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
           isUnSkippable->fields.method_code,
           isUnSkippable->fields.method)
       & 1) == 0)
    && !this->fields.isEndAfterMsg
    && !this->fields.isNeedOpenGetExchangeTicketTutorial )
  {
    if ( this->fields.isOpenCompensationDlg
      || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.compensationMsgIds, 0) )
    {
      v4 = Method_BoxGachaResultEffectComponent_ExecuteGacha__;
      if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_ExecuteGacha__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_BoxGachaResultEffectComponent_ExecuteGacha__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
      BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v6);
      messageManager = this->fields.messageManager;
      if ( messageManager )
      {
        CommonMessageManager__Quit(messageManager, 0);
        endVoiceAction = this->fields.endVoiceAction;
        if ( endVoiceAction )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))endVoiceAction->fields.invoke_impl)(
            endVoiceAction->fields.method_code,
            endVoiceAction->fields.method);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_6019/*"EXE_GACHA"*/, 0);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(
                v11,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_1__,
                0);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(intptr_t, System_Action_o *, intptr_t, float))endPerformanceAction->fields.invoke_impl)(
                  endPerformanceAction->fields.method_code,
                  v11,
                  endPerformanceAction->fields.method,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
      sub_2213CDC(messageManager, v7);
    }
    *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_0__, 0);
    BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v12, v13);
  }
}


BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *BoxGachaResultEffectComponent__GetPlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *BoxGachaPlayedVoice; // x19
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_596A80C & 1) == 0 )
  {
    sub_2213A60(&BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
    sub_2213A60(&Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
    byte_596A80C = 1;
  }
  BoxGachaPlayedVoice = EventRewardSaveData__GetBoxGachaPlayedVoice(this->fields.currentEventId, method);
  if ( !System_String__IsNullOrEmpty(BoxGachaPlayedVoice, 0) )
    return (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        BoxGachaPlayedVoice,
                                                                        (const MethodInfo_38D4A70 *)Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
  v4 = (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)sub_2213CCC(BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(v4, v5);
  return v4;
}


bool BoxGachaResultEffectComponent__IsResultPanelActive(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    gameObject = (ScriptMessageCommonManager_o *)this->fields.messageManager;
    if ( gameObject )
      return ScriptMessageCommonManager__IsRootActive(gameObject, 0);
LABEL_6:
    sub_2213CDC(gameObject, v4);
  }
  return 0;
}


bool BoxGachaResultEffectComponent__IsUnSkippable(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    return ((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
             isUnSkippable->fields.method_code,
             isUnSkippable->fields.method);
  else
    return 0;
}


void BoxGachaResultEffectComponent__LongPressMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_o *multiGachaButton; // x0
  const MethodInfo *v4; // x1

  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    sub_2213CDC(0, method);
  if ( (((__int64 (__fastcall *)(struct UICommonButton_o *, const MethodInfo *))multiGachaButton->klass->vtable._4_get_isEnabled.methodPtr)(
          multiGachaButton,
          multiGachaButton->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
  {
    this->fields.isLongPress = 1;
    BoxGachaResultEffectComponent__ExecuteGacha(this, v4);
  }
}


void BoxGachaResultEffectComponent__MsgBefSkip(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BoxGachaResultEffectComponent___c_c *v4; // x0
  struct System_Action_Action__float__o *endPerformanceAction; // x23
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__75_0; // x20
  Il2CppObject *v8; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2

  if ( (byte_596A7FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__75_0__);
    sub_2213A60(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_596A7FD = 1;
  }
  v4 = BoxGachaResultEffectComponent___c_TypeInfo;
  endPerformanceAction = this->fields.endPerformanceAction;
  this->fields.isShortCut = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__75_0 = static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__75_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__75_0, v8, Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__75_0__, 0);
    v9 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v9->__9__75_0 = _9__75_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__75_0, (int32_t)_9__75_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !endPerformanceAction )
    sub_2213CDC(v4, method);
  ((void (__fastcall *)(intptr_t, System_Action_o *, intptr_t, float))endPerformanceAction->fields.invoke_impl)(
    endPerformanceAction->fields.method_code,
    _9__75_0,
    endPerformanceAction->fields.method,
    this->fields.performanceSlideOutSpeed);
  BoxGachaResultEffectComponent__EndAction(this, 0, v16);
}


void BoxGachaResultEffectComponent__OnClickBackBtn(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596A80A & 1) == 0 )
  {
    sub_2213A60(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    byte_596A80A = 1;
  }
  if ( !this->fields.isNeedOpenGetExchangeTicketTutorial )
  {
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
    v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
    if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  }
}


void BoxGachaResultEffectComponent__OnClickMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isLongPress = 0;
  BoxGachaResultEffectComponent__ExecuteGacha(this, method);
}


void BoxGachaResultEffectComponent__OpenCompensationItemDialog(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596A7FF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v7 = (CommonUI_o *)Instance;
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v8,
    compensationMsgIds,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  if ( !v7 )
    sub_2213CDC(v9, v10);
  CommonUI__OpenCompensationItemDialog(v7, v8, endCallBack, 0);
}


void BoxGachaResultEffectComponent__PreOpenResultWindowAction(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *currentResultLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x22
  Il2CppObject *prizeName; // x23
  Il2CppObject *v8; // x0
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x19
  float OffsetX; // s0
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A801 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_2213A60(&StringLiteral_19674/*"ef_boxitem_start"*/);
    byte_596A801 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &boxNo);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &boxCurrentNum);
  gameObject = System_String__Format_75697948(v5, v6, prizeName, v8, 0);
  if ( !currentResultLabel )
    goto LABEL_12;
  UILabel__set_text(currentResultLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  gameObject = (System_String_o *)BoxGachaResultEffectComponent__getEffect(
                                    (System_String_o *)StringLiteral_19674/*"ef_boxitem_start"*/,
                                    transform,
                                    v12);
  if ( !gameObject )
    goto LABEL_12;
  v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v13, v14);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
  if ( !v15 )
LABEL_12:
    sub_2213CDC(gameObject, v10);
  v19.fields.z = 0.0;
  v19.fields.x = OffsetX + 196.0;
  v19.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v15, v19, 0);
}


void BoxGachaResultEffectComponent__SavePlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x1
  const MethodInfo *v4; // x2

  v3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v3, v4);
}


void BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_Action__Action__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.afterAutoReset = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.afterAutoReset,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__SetAutoResetMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isLimit,
        bool isLastLimitBox,
        System_String_o *prizeName,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  bool v12; // w23
  struct System_String_o **v13; // x8
  struct System_String_o *v14; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w8
  System_String_o **v19; // x8
  System_String_o *v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v12 = isLastLimitBox;
  if ( (byte_596A808 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3106/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/);
    sub_2213A60(&StringLiteral_3103/*"BOX_GACHA_AUTO_RESET_INFO"*/);
    byte_596A808 = 1;
  }
  v13 = *(struct System_String_o ***)(qword_5984390 + 184);
  v14 = *v13;
  this->fields.resetBoxMsg = *v13;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_resetBoxMsg,
    (int32_t)v14,
    (System_String_o *)isLastLimitBox,
    prizeName,
    (int32_t)method,
    v5,
    v6,
    v7);
  v18 = *((unsigned __int8 *)p_resetBoxMsg + 88);
  *((_BYTE *)p_resetBoxMsg + 89) = v12;
  if ( v18 && !isLastLimitBox )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v19 = (System_String_o **)&StringLiteral_3106/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    if ( !isLimit )
      v19 = (System_String_o **)&StringLiteral_3103/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v20 = LocalizationManager__Get(*v19, 0);
    v21 = System_String__Format(v20, (Il2CppObject *)prizeName, 0);
    *p_resetBoxMsg = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_resetBoxMsg, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
}


void BoxGachaResultEffectComponent__SetBoxItemIsEmptyFlag(
        BoxGachaResultEffectComponent_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  this->fields.isBoxItemEmpty = isEmpty;
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__SetCurrentResultInfo(
        BoxGachaResultEffectComponent_o *this,
        int32_t boxNumber,
        int32_t currentNum,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.boxNo = boxNumber;
  this->fields.boxCurrentNum = currentNum;
  this->fields.prizeName = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.prizeName,
    (int32_t)name,
    *(System_String_o **)&currentNum,
    name,
    (int32_t)method,
    v5,
    v6,
    v7);
}


void BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onEnableBackBtn,
    (int32_t)onEnableBackBtn,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__SetGachaButtonStatus(
        BoxGachaResultEffectComponent_o *this,
        bool isEnble,
        const MethodInfo *method)
{
  UnityEngine_Object_o *multiGachaButton; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // kr08_8
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *multiGachaLongPressSkipObj; // x21
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A7F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_434/*"#4C4C4C"*/);
    byte_596A7F8 = 1;
  }
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  *(_QWORD *)&v13.fields.r = 0;
  *(_QWORD *)&v13.fields.b = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnble, method);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0, 0) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_434/*"#4C4C4C"*/, &v13, 0);
    v8 = __PAIR64__(1.0, 1.0);
    v9 = __PAIR64__(1.0, 1.0);
    if ( !isEnble )
    {
      v8 = *(_QWORD *)&v13.fields.r;
      v9 = *(_QWORD *)&v13.fields.b;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v14.fields.r = v8;
    *(_QWORD *)&v14.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v15.fields.r = v8;
    *(_QWORD *)&v15.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v16.fields.r = v8;
    *(_QWORD *)&v16.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v17.fields.r = v8;
    *(_QWORD *)&v17.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v18.fields.r = v8;
    *(_QWORD *)&v18.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v19.fields.r = v8;
    *(_QWORD *)&v19.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0);
    multiGachaLongPressSkipObj = (UnityEngine_Object_o *)this->fields.multiGachaLongPressSkipObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    if ( UnityEngine_Object__op_Inequality(multiGachaLongPressSkipObj, 0, 0) )
    {
      multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaLongPressSkipObj;
      if ( multiGachaBgSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multiGachaBgSprite, isEnble, 0);
        return;
      }
LABEL_21:
      sub_2213CDC(multiGachaBgSprite, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__SetUserGachaResource(
        BoxGachaResultEffectComponent_o *this,
        int32_t enableNum,
        int32_t enableUserDrawNum,
        bool isChangeMax,
        BoxGachaEntity_o *boxGachaEntity,
        UserBoxGachaEntity_o *userBoxGachaEntity,
        int32_t eventId,
        bool isBoxGachaItemEmpty,
        bool isLimitResetLastBox,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v15; // x20
  bool v16; // w26
  int32_t resetNum; // w8
  bool v18; // w8
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UISprite_o *multiGacha1DigitNumSprite; // x22
  UISprite_o *multiGacha2DigitNumSprite; // x23
  UISprite_o *multiGacha3DigitNumSprite; // x24
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v33; // x22
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF

  v15 = this;
  v16 = isChangeMax;
  v34 = eventId;
  if ( (byte_596A7F7 & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21666/*"img_txt_getpresent_"*/);
    this = (BoxGachaResultEffectComponent_o *)sub_2213A60(&StringLiteral_21395/*"img_gachatxt_"*/);
    byte_596A7F7 = 1;
  }
  v15->fields.isChangeMaxDraw = v16;
  v15->fields.isCanDraw = enableNum > 0;
  v15->fields.isUserCanDrawByTicket = enableUserDrawNum > 0;
  v15->fields.isLimitResetEmpty = isBoxGachaItemEmpty && isLimitResetLastBox;
  if ( userBoxGachaEntity )
  {
    resetNum = userBoxGachaEntity->fields.resetNum;
    if ( !boxGachaEntity )
      goto LABEL_17;
  }
  else
  {
    resetNum = -1;
    if ( !boxGachaEntity )
      goto LABEL_17;
  }
  this = (BoxGachaResultEffectComponent_o *)v15->fields.enableBoxGachaInfo;
  v18 = resetNum == boxGachaEntity->fields.changeMaxDrawAtOnceResetNum - 1 && isBoxGachaItemEmpty;
  if ( (unsigned int)enableNum <= 1 )
    v19 = 1;
  else
    v19 = enableNum;
  v15->fields.isChangeMaxDrawPreviousLastDraw = v18;
  if ( !this )
    goto LABEL_17;
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)this,
    boxGachaEntity->fields.payTargetId,
    boxGachaEntity->fields.payValue * v19,
    0);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(v15, v15->fields.isCanDraw, v20);
  multiGacha1DigitNumSprite = v15->fields.multiGacha1DigitNumSprite;
  multiGacha2DigitNumSprite = v15->fields.multiGacha2DigitNumSprite;
  multiGacha3DigitNumSprite = v15->fields.multiGacha3DigitNumSprite;
  if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v21, v22);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v19,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    0);
  v26 = System_Int32__ToString((int32_t)&v34, 0);
  v27 = System_String__Concat_75651716((System_String_o *)StringLiteral_21395/*"img_gachatxt_"*/, v26, 0);
  v28 = System_Int32__ToString((int32_t)&v34, 0);
  v29 = System_String__Concat_75651716((System_String_o *)StringLiteral_21666/*"img_txt_getpresent_"*/, v28, 0);
  multiGachaTimeSprite = v15->fields.multiGachaTimeSprite;
  v33 = v29;
  if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v30, v31);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v27, 0);
  EventRewardRootComponent__setRewardInfoImg(v15->fields.multiInfoTxtSprite, v33, 0);
  this = (BoxGachaResultEffectComponent_o *)v15->fields.itemResourceComponent;
  if ( !this )
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)this, boxGachaEntity->fields.payTargetId, 0);
}


void BoxGachaResultEffectComponent__Update(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( !UnityEngine_Input__get_touchCount(0) )
    this->fields.isLongPress = 0;
}


void BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *onEnableBackBtn; // x20
  bool v4; // w21
  struct System_Func_bool__o *isUnSkippable; // x8
  bool v6; // w2

  if ( (byte_596A804 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool__bool___);
    byte_596A804 = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v4 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  isUnSkippable = this->fields.isUnSkippable;
  v6 = (!isUnSkippable
     || (((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
           isUnSkippable->fields.method_code,
           isUnSkippable->fields.method)
       & 1) == 0)
    && !this->fields.isNeedOpenGetExchangeTicketTutorial;
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v4,
    v6,
    (const MethodInfo_370009C *)Method_ActionExtensions_Call_bool__bool___);
}


void BoxGachaResultEffectComponent___CheckAutoResetEnable_b__88_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *afterAutoReset; // x20
  System_Action_o *v4; // x21
  System_Action_o *v5; // x22
  __int64 v6; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v9; // x19
  char v10; // w8

  if ( (byte_596A813 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_Action__Action___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_1__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_2__);
    byte_596A813 = 1;
  }
  afterAutoReset = (System_Action_T1__T2__o *)this->fields.afterAutoReset;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_1__,
    0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_2__,
    0);
  ActionExtensions__Call_object__object_(
    afterAutoReset,
    (Il2CppObject *)v4,
    (Il2CppObject *)v5,
    (const MethodInfo_37002AC *)Method_ActionExtensions_Call_Action__Action___);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0);
  isUnSkippable = this->fields.isUnSkippable;
  v9 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v10 = 1;
    if ( resourcesPanel )
      goto LABEL_6;
LABEL_8:
    sub_2213CDC(resourcesPanel, v6);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
                                                isUnSkippable->fields.method_code,
                                                isUnSkippable->fields.method);
  v10 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v9 )
    goto LABEL_8;
LABEL_6:
  UnityEngine_GameObject__SetActive(v9, v10 & 1, 0);
}


void BoxGachaResultEffectComponent___CheckAutoResetEnable_b__88_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  if ( !messageManager )
    sub_2213CDC(0, method);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0);
}


void BoxGachaResultEffectComponent___CheckAutoResetEnable_b__88_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UILabel_o *currentResultLabel; // x19
  System_String_o *v6; // x21
  Il2CppObject *v7; // x22
  int32_t boxCurrentNum; // w8
  Il2CppObject *prizeName; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A814 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    byte_596A814 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &boxNo);
  boxCurrentNum = this->fields.boxCurrentNum;
  prizeName = (Il2CppObject *)this->fields.prizeName;
  v13 = boxCurrentNum;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
  v11 = System_String__Format_75697948(v6, v7, prizeName, v10, 0);
  if ( !currentResultLabel )
    sub_2213CDC(v11, v12);
  UILabel__set_text(currentResultLabel, v11, 0);
}


void BoxGachaResultEffectComponent___ContinueExeGacha_b__87_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *currentResultLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x22
  Il2CppObject *prizeName; // x23
  Il2CppObject *v8; // x0
  System_String_o *targetFSM; // x0
  __int64 v10; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596A812 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_2213A60(&StringLiteral_6019/*"EXE_GACHA"*/);
    byte_596A812 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3120/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &boxNo);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &boxCurrentNum);
  targetFSM = System_String__Format_75697948(v5, v6, prizeName, v8, 0);
  if ( !currentResultLabel
    || (UILabel__set_text(currentResultLabel, targetFSM, 0), (targetFSM = (System_String_o *)this->fields.targetFSM) == 0) )
  {
    sub_2213CDC(targetFSM, v10);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)targetFSM, (System_String_o *)StringLiteral_6019/*"EXE_GACHA"*/, 0);
}


void BoxGachaResultEffectComponent___ExecuteGacha_b__99_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isEndAfterMsg )
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  this->fields.isActiveCompensationDlg = 0;
}


void BoxGachaResultEffectComponent___ExecuteGacha_b__99_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_596A815 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6019/*"EXE_GACHA"*/);
    byte_596A815 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_6019/*"EXE_GACHA"*/, 0);
}


void BoxGachaResultEffectComponent___dispMsgAftResultList_b__86_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v4; // x20
  UITweener_o *v5; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_o *v21; // x20
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  intptr_t method_code; // x0
  intptr_t v30; // x2
  __int128 v31; // [xsp+0h] [xbp-70h] BYREF
  __int128 v32; // [xsp+10h] [xbp-60h] BYREF
  _OWORD v33[2]; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596A80F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_1__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_2__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_596A80F = 1;
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  v31 = 0u;
  v32 = 0u;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v4 = (UITweener_o *)resourcesPanel;
  UITweener__Play_56518140((UITweener_o *)resourcesPanel, 1, 0);
  UITweener__ResetToBeginning(v4, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v4, 1, 0);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v5 = (UITweener_o *)resourcesPanel;
  UITweener__Play_56518140((UITweener_o *)resourcesPanel, 1, 0);
  UITweener__ResetToBeginning(v5, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5, 1, 0);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  CommonMessageManager__Init((CommonMessageManager_o *)resourcesPanel, 0);
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_12;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.multiGachaButton, 0);
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, enabled, 0);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.info;
  if ( !resourcesPanel )
    goto LABEL_12;
  *(_QWORD *)&v31 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31, v31, v8, v9, v10, v11, v12, v13);
  BYTE8(v31) = this->fields.isShortCut;
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_1__,
    0);
  *(_QWORD *)&v32 = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_2__,
    0);
  *((_QWORD *)&v32 + 1) = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)&v32 + 8), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_2213CDC(resourcesPanel, method);
  method_code = playVoiceAction->fields.method_code;
  v30 = playVoiceAction->fields.method;
  v33[0] = v31;
  v33[1] = v32;
  ((void (__fastcall *)(intptr_t, _OWORD *, intptr_t))playVoiceAction->fields.invoke_impl)(method_code, v33, v30);
}


void BoxGachaResultEffectComponent___dispMsgAftResultList_b__86_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  unsigned __int64 targetVoiceId; // x1
  __int64 resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v6; // x20
  struct System_Func_bool__o *v7; // x8
  System_Action_o *v8; // x20
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2

  if ( (byte_596A810 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    byte_596A810 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (__int64)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_25;
  resourcesPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0);
  isUnSkippable = this->fields.isUnSkippable;
  v6 = (UnityEngine_GameObject_o *)resourcesPanel;
  targetVoiceId = (!isUnSkippable
                || (resourcesPanel = ((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
                                       isUnSkippable->fields.method_code,
                                       isUnSkippable->fields.method),
                    (resourcesPanel & 1) == 0))
               && !this->fields.isNeedOpenGetExchangeTicketTutorial;
  if ( !v6 )
    goto LABEL_25;
  if ( (UnityEngine_GameObject__SetActive(v6, targetVoiceId, 0), (v7 = this->fields.isUnSkippable) != 0)
    && (((__int64 (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method)
      & 1) != 0
    || this->fields.isNeedOpenGetExchangeTicketTutorial )
  {
    v8 = 0;
  }
  else
  {
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0);
  }
  resourcesPanel = (__int64)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_25;
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v8, 0);
  playedVoiceData = this->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_25;
  resourcesPanel = (__int64)playedVoiceData->fields.playedVoices;
  if ( !resourcesPanel )
    goto LABEL_25;
  resourcesPanel = System_Collections_Generic_List_object___Contains(
                     (System_Collections_Generic_List_object__o *)resourcesPanel,
                     (Il2CppObject *)this->fields.targetVoiceId,
                     (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (resourcesPanel & 1) != 0 )
    return;
  v16 = this->fields.playedVoiceData;
  if ( !v16
    || (resourcesPanel = (__int64)v16->fields.playedVoices) == 0
    || (v17 = *(_QWORD *)(resourcesPanel + 16),
        targetVoiceId = (unsigned __int64)this->fields.targetVoiceId,
        v18 = Method_System_Collections_Generic_List_string__Add__,
        ++*(_DWORD *)(resourcesPanel + 28),
        !v17) )
  {
LABEL_25:
    sub_2213CDC(resourcesPanel, targetVoiceId);
  }
  v19 = *(int *)(resourcesPanel + 24);
  if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)resourcesPanel,
      (Il2CppObject *)targetVoiceId,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * v19;
    *(_DWORD *)(resourcesPanel + 24) = v19 + 1;
    *(_QWORD *)(v20 + 32) = targetVoiceId;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), targetVoiceId, v10, v11, v12, v13, v14, v15);
  }
  v21 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v21, v22);
}


void BoxGachaResultEffectComponent___dispMsgAftResultList_b__86_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isLongPress; // w8
  int32_t currentEventId; // w20
  System_Action_o *v5; // x21

  if ( (byte_596A811 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    sub_2213A60(&StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/);
    byte_596A811 = 1;
  }
  isLongPress = this->fields.isLongPress;
  this->fields.isEndAfterMsg = 1;
  if ( !isLongPress
    || this->fields.isChangeMaxDrawPreviousLastDraw
    || !this->fields.isUserCanDrawByTicket
    || this->fields.isLimitResetEmpty
    || this->fields.isNeedOpenGetExchangeTicketTutorial )
  {
    if ( this->fields.isNeedOpenGetExchangeTicketTutorial )
    {
      currentEventId = this->fields.currentEventId;
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0);
      EventTutorialMaster__CheckTutorial(currentEventId, 103, v5, 0, 0, 0, 0, 0);
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/, 1, 0);
      this->fields.isNeedOpenGetExchangeTicketTutorial = 0;
    }
    else if ( !this->fields.isActiveCompensationDlg )
    {
      BoxGachaResultEffectComponent__CheckAutoResetEnable(this, method);
    }
  }
  else
  {
    BoxGachaResultEffectComponent__ContinueExeGacha(this, method);
  }
}


void BoxGachaResultEffectComponent___dispMsgBefResultList_b__74_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
          isUnSkippable->fields.method_code,
          isUnSkippable->fields.method)
      & 1) == 0 )
  {
    BoxGachaResultEffectComponent__MsgBefSkip(this, method);
  }
}


void BoxGachaResultEffectComponent___dispMsgBefResultList_b__74_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
          isUnSkippable->fields.method_code,
          isUnSkippable->fields.method)
      & 1) == 0 )
  {
    this->fields.isLongPress = 1;
    BoxGachaResultEffectComponent__MsgBefSkip(this, method);
  }
}


void BoxGachaResultEffectComponent___dispMsgBefResultList_b__74_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  struct System_Func_bool__o *isUnSkippable; // x8
  CommonMessageManager_o *messageManager; // x20
  System_String_o *befMsg; // x21
  char v6; // w8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v14; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v18; // x8
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  struct System_Int32_array *rareIdxList; // x8

  v2 = this;
  if ( (byte_596A80D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    this = (BoxGachaResultEffectComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    byte_596A80D = 1;
  }
  isUnSkippable = v2->fields.isUnSkippable;
  messageManager = v2->fields.messageManager;
  befMsg = v2->fields.befMsg;
  if ( isUnSkippable )
  {
    this = (BoxGachaResultEffectComponent_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))isUnSkippable->fields.invoke_impl)(
                                                isUnSkippable->fields.method_code,
                                                isUnSkippable->fields.method);
    v6 = (unsigned __int8)this ^ 1;
    if ( !messageManager )
      goto LABEL_23;
  }
  else
  {
    v6 = 1;
    if ( !messageManager )
      goto LABEL_23;
  }
  CommonMessageManager__SetMessageBlock(messageManager, befMsg, v6 & 1, 0, 0);
  playedVoiceData = v2->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v2->fields.targetVoiceId,
                                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v2->fields.playedVoiceData;
    if ( v14 )
    {
      this = (BoxGachaResultEffectComponent_o *)v14->fields.playedVoices;
      if ( this )
      {
        m_CachedPtr = this->fields.m_CachedPtr;
        method = (const MethodInfo *)v2->fields.targetVoiceId;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( m_CachedPtr )
        {
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v18 + 32) = method;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), (int32_t)method, v8, v9, v10, v11, v12, v13);
          }
          v19 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)v2->fields.playedVoiceData, 0);
          EventRewardSaveData__SetBoxGachaPlayedVoice(v2->fields.currentEventId, v19, v20);
          return;
        }
      }
    }
LABEL_23:
    sub_2213CDC(this, method);
  }
  if ( v2->fields.isChangeMaxDraw )
    goto LABEL_26;
  rareIdxList = v2->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_23;
  if ( !rareIdxList->max_length )
  {
LABEL_26:
    if ( v2->fields.isLongPress )
      BoxGachaResultEffectComponent__MsgBefSkip(v2, method);
  }
}


void BoxGachaResultEffectComponent___dispMsgBefResultList_b__74_3(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void BoxGachaResultEffectComponent___endloadEffect_b__72_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( this->fields.isShortCut )
    BoxGachaResultEffectComponent__EndAction(this, 0, v6);
  else
    BoxGachaResultEffectComponent__dispMsgBefResultList(this, v5);
}


void BoxGachaResultEffectComponent___showResultList_b__78_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_596A80E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23613/*"openResultListWindow"*/);
    byte_596A80E = 1;
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, method);
  if ( this->fields.isLongPress )
    BoxGachaResultEffectComponent__openResultListWindow(this, v3);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_23613/*"openResultListWindow"*/,
      this->fields.openResultWindowTime,
      0);
}


void BoxGachaResultEffectComponent__clearResultList(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v11; // x2

  this->fields.closeCallBack = callBack;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallBack,
    (int32_t)callBack,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, this->fields.closeCallBack, v11);
      return;
    }
LABEL_6:
    sub_2213CDC(resultWindow, v9);
  }
  ActionExtensions__Call(this->fields.closeCallBack, 0);
}


void BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BoxGachaResultEffectComponent_o *v8; // x19
  struct CommonMessageManager_o *messageManager; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct CommonMessageManager_o *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  AvalonSceneManager_c *v34; // x8
  CommonUI_o *v35; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21
  struct System_Int32_array *rareIdxList; // x8
  _OWORD v39[2]; // [xsp+0h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_596A805 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BoxGachaResultEffectComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A805 = 1;
  }
  messageManager = v8->fields.messageManager;
  memset(v39, 0, sizeof(v39));
  if ( !messageManager )
    goto LABEL_22;
  messageManager->fields.touchCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&messageManager->fields.touchCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
  v16 = v8->fields.messageManager;
  if ( !v16 )
    goto LABEL_22;
  v16->fields.longPressCallbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.longPressCallbackFunc, 0, v10, v11, v12, v13, v14, v15);
  this = (BoxGachaResultEffectComponent_o *)v8->fields.info;
  if ( !this )
    goto LABEL_22;
  *(_QWORD *)&v39[0] = BoxGachaTalkInfo__getAfterVoiceId((BoxGachaTalkInfo_o *)this, v8->fields.randomTalkIdx, 0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v39, v39[0], v17, v18, v19, v20, v21, v22);
  v23 = v39[0];
  v8->fields.targetVoiceId = *(struct System_String_o **)&v39[0];
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.targetVoiceId, v23, v24, v25, v26, v27, v28, v29);
  if ( !v8->fields.isLongPress )
    goto LABEL_11;
  playedVoiceData = v8->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v8->fields.targetVoiceId,
                                              (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0
    || v8->fields.isChangeMaxDrawPreviousLastDraw
    || !v8->fields.isUserCanDrawByTicket
    || v8->fields.isLimitResetEmpty )
  {
LABEL_11:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v34 = AvalonSceneManager_TypeInfo;
    v35 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v32, v33);
      v34 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
    v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v8,
      Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_0__,
      0);
    if ( v35 )
    {
      CommonUI__maskFadein(v35, DEFAULT_FADE_TIME, v37, 0);
      return;
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
  if ( !v8->fields.isChangeMaxDraw )
  {
    rareIdxList = v8->fields.rareIdxList;
    if ( !rareIdxList )
      goto LABEL_22;
    if ( !rareIdxList->max_length )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  BoxGachaResultEffectComponent__ContinueExeGacha(v8, method);
}


void BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v4; // x22
  System_Action_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct CommonMessageManager_o *v12; // x22
  System_Action_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Action_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Action_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  intptr_t method_code; // x0
  intptr_t v49; // x2
  __int128 v50; // [xsp+0h] [xbp-70h] BYREF
  __int128 v51; // [xsp+10h] [xbp-60h] BYREF
  _OWORD v52[2]; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596A7FC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_0__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_1__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_2__);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_3__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_596A7FC = 1;
  }
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  v50 = 0u;
  v51 = 0u;
  if ( !messageManager )
    goto LABEL_11;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0);
  v4 = this->fields.messageManager;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_0__,
    0);
  if ( !v4 )
    goto LABEL_11;
  v4->fields.touchCallbackFunc = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.touchCallbackFunc, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.messageManager;
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_1__,
    0);
  if ( !v12 )
    goto LABEL_11;
  v12->fields.longPressCallbackFunc = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.longPressCallbackFunc,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_11;
  *(_QWORD *)&v50 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v50, v50, v20, v21, v22, v23, v24, v25);
  v26 = v50;
  this->fields.targetVoiceId = (struct System_String_o *)v50;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetVoiceId, v26, v27, v28, v29, v30, v31, v32);
  BYTE8(v50) = this->fields.isShortCut;
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_2__,
    0);
  *(_QWORD *)&v51 = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v51, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_3__,
    0);
  *((_QWORD *)&v51 + 1) = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)&v51 + 8), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_11:
    sub_2213CDC(messageManager, method);
  method_code = playVoiceAction->fields.method_code;
  v49 = playVoiceAction->fields.method;
  v52[0] = v50;
  v52[1] = v51;
  ((void (__fastcall *)(intptr_t, _OWORD *, intptr_t))playVoiceAction->fields.invoke_impl)(method_code, v52, v49);
}


void BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_596A7FA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__endloadEffect_b__72_0__);
    sub_2213A60(&BoxGachaResultEffectComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7FA = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AvalonSceneManager_TypeInfo;
    v14 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11, v12);
      v13 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__72_0__, 0);
    if ( !v14 )
      sub_2213CDC(v17, v18);
    CommonUI__maskFadein(v14, DEFAULT_FADE_TIME, v16, 0);
  }
}


UnityEngine_GameObject_o *BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x19
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_596A7FB & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&BoxGachaResultEffectComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7FB = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58532980,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v9 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE0 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v10 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v11 )
LABEL_15:
    sub_2213CDC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v9;
}


bool BoxGachaResultEffectComponent__get_IsAutoReset(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  return this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox;
}


void BoxGachaResultEffectComponent__init(
        BoxGachaResultEffectComponent_o *this,
        int32_t svtId,
        BoxGachaTalkInfo_o *talkInfo,
        System_Int32_array *resultIds,
        System_Int32_array *rareIdxs,
        System_Int32_array *baseNos,
        System_String_o *displayName,
        UIStandFigureR_o *currentFigure,
        int32_t face,
        int32_t baseId,
        int32_t eventId,
        bool isShortCut,
        bool isDischargeGetEffectItem,
        System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoice,
        System_Action_o *endVoice,
        System_Int32_array *messageIdList,
        System_Func_bool__o *unskippable,
        System_Action_Action__float__o *endPerformanceAction,
        int32_t randomTalkIdx,
        bool isResourceMultiBtnLongPress,
        const MethodInfo *method)
{
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  DataManager_o *Instance; // x0
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Int32_array *rareIdxList; // x8
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  const MethodInfo *v61; // x1
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *PlayedVoiceData; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  bool v93; // w8
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct System_String_o *Name; // x0
  int32_t v101; // w1
  struct System_String_o **p_currentSvtName; // x0
  System_String_o *v103; // x22
  System_String_o *v104; // x0
  System_String_o *v105; // x23
  System_String_o *v106; // x0
  System_String_o *v107; // x21
  __int64 v108; // x1
  __int64 v109; // x2
  System_String_o *v110; // x24
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  __int64 v117; // x1
  __int64 v118; // x2
  System_String_o *v119; // x20
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int32_t currentEventId; // w0
  const MethodInfo *v127; // x1

  if ( (byte_596A7F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_16620/*"[k]"*/);
    sub_2213A60(&StringLiteral_26986/*"＠"*/);
    sub_2213A60(&StringLiteral_12002/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_596A7F6 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultIdList,
    (int32_t)resultIds,
    (System_String_o *)talkInfo,
    (System_String_o *)resultIds,
    (int32_t)rareIdxs,
    (int32_t)baseNos,
    (bool)displayName,
    (bool)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rareIdxList,
    (int32_t)rareIdxs,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.resultNoList = baseNos;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultNoList,
    (int32_t)baseNos,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.standFigure = currentFigure;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigure,
    (int32_t)currentFigure,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  rareIdxList = this->fields.rareIdxList;
  this->fields.normalFace = face;
  this->fields.isShortCut = isShortCut;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  if ( !rareIdxList )
    goto LABEL_29;
  if ( rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
  this->fields.playVoiceAction = playVoice;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAction,
    (int32_t)playVoice,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.endVoiceAction = endVoice;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endVoiceAction,
    (int32_t)endVoice,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  PlayedVoiceData = BoxGachaResultEffectComponent__GetPlayedVoiceData(this, v61);
  this->fields.playedVoiceData = PlayedVoiceData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedVoiceData,
    (int32_t)PlayedVoiceData,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.compensationMsgIds = messageIdList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.compensationMsgIds,
    (int32_t)messageIdList,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.info = talkInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.info, (int32_t)talkInfo, v75, v76, v77, v78, v79, v80);
  this->fields.isUnSkippable = unskippable;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isUnSkippable,
    (int32_t)unskippable,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v93 = isResourceMultiBtnLongPress || this->fields.isLongPress;
  this->fields.isLongPress = v93;
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endPerformanceAction,
    (int32_t)endPerformanceAction,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  if ( System_String__IsNullOrEmpty(displayName, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_29;
    Name = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0, 0);
    v101 = (int)Name;
    this->fields.currentSvtName = Name;
    p_currentSvtName = &this->fields.currentSvtName;
  }
  else
  {
    v101 = (int)displayName;
    this->fields.currentSvtName = displayName;
    p_currentSvtName = &this->fields.currentSvtName;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_currentSvtName, v101, v94, v95, v96, v97, v98, v99);
  Instance = (DataManager_o *)System_String__Concat_75694928(
                                (System_String_o *)StringLiteral_26986/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0);
  v47 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_29;
  v103 = (System_String_o *)Instance;
  v104 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0);
  v105 = System_String__Concat_75651716(v104, (System_String_o *)StringLiteral_16620/*"[k]"*/, 0);
  v106 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  v107 = System_String__Concat_75651716(v106, (System_String_o *)StringLiteral_16620/*"[k]"*/, 0);
  v110 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108, v109);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  if ( !v110 )
    goto LABEL_29;
  if ( !System_String__StartsWith(v110, (System_String_o *)Instance, 0) )
    v105 = System_String__Concat_75651716(v103, v105, 0);
  this->fields.befMsg = v105;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.befMsg,
    (int32_t)v105,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v119 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117, v118);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  if ( !v119 )
    goto LABEL_29;
  if ( !System_String__StartsWith(v119, (System_String_o *)Instance, 0) )
    v107 = System_String__Concat_75651716(v103, v107, 0);
  this->fields.aftMsg = v107;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aftMsg,
    (int32_t)v107,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_29:
    sub_2213CDC(Instance, v47);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  currentEventId = this->fields.currentEventId;
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  this->fields.isNeedOpenGetExchangeTicketTutorial = EventTutorialMaster__IsTutorialAvailable(
                                                       currentEventId,
                                                       103,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0);
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v127);
}


void BoxGachaResultEffectComponent__loadBoxGachaEffect(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596A7F9 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent_endloadEffect__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&StringLiteral_6122/*"Effect/BoxGacha"*/);
    byte_596A7F9 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_6122/*"Effect/BoxGacha"*/, v3, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        bool isResultWindowLongPress,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  _BOOL4 isDischargeGetEffectItem; // w8
  __int64 *v7; // x8

  if ( (byte_596A803 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12847/*"START_ITEM_GET_EFFECT"*/);
    sub_2213A60(&StringLiteral_5641/*"END_DISP"*/);
    byte_596A803 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0);
  isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
  resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM;
  this->fields.isLongPress = isResultWindowLongPress;
  if ( !isDischargeGetEffectItem )
  {
    if ( resultWindowTouchBlock )
    {
      v7 = &StringLiteral_5641/*"END_DISP"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(resultWindowTouchBlock, isResultWindowLongPress);
  }
  if ( !resultWindowTouchBlock )
    goto LABEL_10;
  v7 = &StringLiteral_12847/*"START_ITEM_GET_EFFECT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, (System_String_o *)*v7, 0);
}


void BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resourcesPanel; // x0
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultNoList; // x23
  _BOOL4 isDischargeGetEffectItem; // w27
  _BOOL4 isLongPress; // w28
  System_Action_bool__o *callback; // x26
  const MethodInfo *v13; // [xsp+8h] [xbp-68h]

  if ( (byte_596A802 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent_openResultCallback__);
    byte_596A802 = 1;
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0);
  if ( !resourcesPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resourcesPanel, 0, 0);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resultWindowTouchBlock;
  if ( !resourcesPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resourcesPanel, 1, 0);
  resultIdList = this->fields.resultIdList;
  rareIdxList = this->fields.rareIdxList;
  currentBaseId = this->fields.currentBaseId;
  currentEventId = this->fields.currentEventId;
  resultWindow = this->fields.resultWindow;
  resultNoList = this->fields.resultNoList;
  isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
  isLongPress = this->fields.isLongPress;
  callback = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    callback,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_openResultCallback__,
    0);
  if ( !resultWindow )
LABEL_8:
    sub_2213CDC(resourcesPanel, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    isLongPress,
    callback,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x21
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0

  if ( (byte_596A809 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A809 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type, method);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_2213CDC(0, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0);
  }
}


void BoxGachaResultEffectComponent__showResultList(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *resultWindow; // x0
  const MethodInfo *v4; // x1
  ResultListWindow_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_596A800 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaResultEffectComponent__showResultList_b__78_0__);
    sub_2213A60(&StringLiteral_23613/*"openResultListWindow"*/);
    byte_596A800 = 1;
  }
  resultWindow = (UnityEngine_Behaviour_o *)this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_8;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(resultWindow, 0) )
  {
    v5 = this->fields.resultWindow;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__showResultList_b__78_0__, 0);
    if ( v5 )
    {
      ResultListWindow__Close(v5, v6, v7);
      return;
    }
LABEL_8:
    sub_2213CDC(resultWindow, method);
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, v4);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23613/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0);
}


void BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(
        BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A816 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596A816 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.playedVoices = (struct System_Collections_Generic_List_string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A817 & 1) == 0 )
  {
    sub_2213A60(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_596A817 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BoxGachaResultEffectComponent___c___ctor(BoxGachaResultEffectComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoxGachaResultEffectComponent___c___EndMessage_b__76_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void BoxGachaResultEffectComponent___c___MsgBefSkip_b__75_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}