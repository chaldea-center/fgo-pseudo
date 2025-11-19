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
  Il2CppObject *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v12; // x21
  System_Action_o *v13; // x22
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4

  if ( (byte_4CB07C9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB07C9 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v12 = (CommonUI_o *)Instance;
      v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_0__,
        0);
      if ( !v12 )
        goto LABEL_17;
      v14.fields.x = 0.0;
      v14.fields.y = -40.0;
      CommonUI__OpenFullScreenMaskDialog(v12, resetBoxMsg, -1, v13, v14, -1, 0, 0);
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
    sub_1C6BC60(multiGachaButton, method);
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
    sub_1C6BC60(resultWindow, v3);
  }
}


void BoxGachaResultEffectComponent__ContinueExeGacha(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  struct CommonMessageManager_o *messageManager; // x8
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__Action__o *afterAutoReset; // x21
  System_Action_o *v6; // x20

  v2 = this;
  if ( (byte_4CB07C8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__87_0__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_5778/*"EXE_GACHA"*/);
    byte_4CB07C8 = 1;
  }
  messageManager = v2->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager->fields.callbackFunc = 0;
  this = (BoxGachaResultEffectComponent_o *)sub_1C6B9AC(&messageManager->fields.callbackFunc, 0);
  endVoiceAction = v2->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_11;
  ((void (__fastcall *)(intptr_t, intptr_t))endVoiceAction->fields.invoke_impl)(
    endVoiceAction->fields.method_code,
    endVoiceAction->fields.method);
  if ( !v2->fields.isBoxItemEmpty || v2->fields.isLastLimitBox )
  {
    this = (BoxGachaResultEffectComponent_o *)v2->fields.targetFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5778/*"EXE_GACHA"*/, 0);
      return;
    }
LABEL_11:
    sub_1C6BC60(this, method);
  }
  afterAutoReset = v2->fields.afterAutoReset;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v2, Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__87_0__, 0);
  if ( !afterAutoReset )
    goto LABEL_11;
  ((void (__fastcall *)(intptr_t, _QWORD, System_Action_o *, intptr_t))afterAutoReset->fields.invoke_impl)(
    afterAutoReset->fields.method_code,
    0,
    v6,
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
    sub_1C6BC60(v4, v5);
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
  System_Action_o *_9__76_0; // x20
  Il2CppObject *v11; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4CB07C0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__76_0__);
    sub_1C6BA08(&BoxGachaResultEffectComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_5435/*"END_MSG"*/);
    byte_4CB07C0 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5435/*"END_MSG"*/, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(messageManager, v5);
  }
  v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__76_0 = v9->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__76_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__76_0, v11, Method_BoxGachaResultEffectComponent___c__EndMessage_b__76_0__, 0);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = _9__76_0;
    sub_1C6B9AC(&static_fields->__9__76_0, _9__76_0);
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

  if ( (byte_4CB07CD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_ExecuteGacha__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_0__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__99_1__);
    sub_1C6BA08(&StringLiteral_5778/*"EXE_GACHA"*/);
    byte_4CB07CD = 1;
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
        v4 = (_QWORD *)sub_1C6BA20(Method_BoxGachaResultEffectComponent_ExecuteGacha__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5778/*"EXE_GACHA"*/, 0);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
      sub_1C6BC60(messageManager, v7);
    }
    *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
    v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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

  if ( (byte_4CB07CE & 1) == 0 )
  {
    sub_1C6BA08(&BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
    byte_4CB07CE = 1;
  }
  BoxGachaPlayedVoice = EventRewardSaveData__GetBoxGachaPlayedVoice(this->fields.currentEventId, 0);
  if ( !System_String__IsNullOrEmpty(BoxGachaPlayedVoice, 0) )
    return (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        BoxGachaPlayedVoice,
                                                                        (const MethodInfo_31ABEC4 *)Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
  v4 = (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)sub_1C6BC54(BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
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
    sub_1C6BC60(gameObject, v4);
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
    sub_1C6BC60(0, method);
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
  BoxGachaResultEffectComponent___c_c *v3; // x0
  struct System_Action_Action__float__o *endPerformanceAction; // x23
  System_Action_o *_9__75_0; // x20
  Il2CppObject *v6; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB07BF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__75_0__);
    sub_1C6BA08(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4CB07BF = 1;
  }
  this->fields.isShortCut = 1;
  v3 = BoxGachaResultEffectComponent___c_TypeInfo;
  endPerformanceAction = this->fields.endPerformanceAction;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v3 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__75_0 = v3->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__75_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__75_0, v6, Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__75_0__, 0);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = _9__75_0;
    v3 = (BoxGachaResultEffectComponent___c_c *)sub_1C6B9AC(&static_fields->__9__75_0, _9__75_0);
  }
  if ( !endPerformanceAction )
    sub_1C6BC60(v3, method);
  ((void (__fastcall *)(intptr_t, System_Action_o *, intptr_t, float))endPerformanceAction->fields.invoke_impl)(
    endPerformanceAction->fields.method_code,
    _9__75_0,
    endPerformanceAction->fields.method,
    this->fields.performanceSlideOutSpeed);
  BoxGachaResultEffectComponent__EndAction(this, 0, v8);
}


void BoxGachaResultEffectComponent__OnClickBackBtn(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4CB07CC & 1) == 0 )
  {
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    byte_4CB07CC = 1;
  }
  if ( !this->fields.isNeedOpenGetExchangeTicketTutorial )
  {
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
    v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
    if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C6BA20(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
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

  if ( (byte_4CB07C1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB07C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v7 = (CommonUI_o *)Instance;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58602020(
    v8,
    compensationMsgIds,
    (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
  if ( !v7 )
    sub_1C6BC60(v9, v10);
  CommonUI__OpenCompensationItemDialog(v7, v8, endCallBack, 0);
}


void BoxGachaResultEffectComponent__PreOpenResultWindowAction(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x22
  Il2CppObject *prizeName; // x23
  Il2CppObject *v7; // x0
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Transform_o *v12; // x19
  float OffsetX; // s0
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB07C3 & 1) == 0 )
  {
    sub_1C6BA08(&FSUtility_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_1C6BA08(&StringLiteral_18846/*"ef_boxitem_start"*/);
    byte_4CB07C3 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum);
  gameObject = System_String__Format_64008168(v4, v5, prizeName, v7, 0);
  if ( !currentResultLabel )
    goto LABEL_12;
  UILabel__set_text(currentResultLabel, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  gameObject = (System_String_o *)BoxGachaResultEffectComponent__getEffect(
                                    (System_String_o *)StringLiteral_18846/*"ef_boxitem_start"*/,
                                    transform,
                                    v11);
  if ( !gameObject )
    goto LABEL_12;
  v12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0);
  if ( !v12 )
LABEL_12:
    sub_1C6BC60(gameObject, v9);
  v16.fields.x = OffsetX + 196.0;
  v16.fields.z = 0.0;
  v16.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v12, v16, 0);
}


void BoxGachaResultEffectComponent__SavePlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x1

  v3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v3, 0);
}


void BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_Action__Action__o *callback,
        const MethodInfo *method)
{
  this->fields.afterAutoReset = callback;
  sub_1C6B9AC(&this->fields.afterAutoReset, callback);
}


void BoxGachaResultEffectComponent__SetAutoResetMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isLimit,
        bool isLastLimitBox,
        System_String_o *prizeName,
        const MethodInfo *method)
{
  bool v9; // w23
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v13; // w8
  System_String_o **v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x1

  v9 = isLastLimitBox;
  if ( (byte_4CB07CA & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_2976/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/);
    sub_1C6BA08(&StringLiteral_2973/*"BOX_GACHA_AUTO_RESET_INFO"*/);
    byte_4CB07CA = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1C6B9AC(p_resetBoxMsg, Empty);
  v13 = *((unsigned __int8 *)p_resetBoxMsg + 88);
  *((_BYTE *)p_resetBoxMsg + 89) = v9;
  if ( v13 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v14 = (System_String_o **)&StringLiteral_2976/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v14 = (System_String_o **)&StringLiteral_2973/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v15 = LocalizationManager__Get(*v14, 0);
    v16 = System_String__Format(v15, (Il2CppObject *)prizeName, 0);
    *p_resetBoxMsg = v16;
    sub_1C6B9AC(p_resetBoxMsg, v16);
  }
}


void BoxGachaResultEffectComponent__SetBoxItemIsEmptyFlag(
        BoxGachaResultEffectComponent_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  this->fields.isBoxItemEmpty = isEmpty;
}


void BoxGachaResultEffectComponent__SetCurrentResultInfo(
        BoxGachaResultEffectComponent_o *this,
        int32_t boxNumber,
        int32_t currentNum,
        System_String_o *name,
        const MethodInfo *method)
{
  this->fields.boxNo = boxNumber;
  this->fields.boxCurrentNum = currentNum;
  this->fields.prizeName = name;
  sub_1C6B9AC(&this->fields.prizeName, name);
}


void BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1C6B9AC(&this->fields.onEnableBackBtn, onEnableBackBtn);
}


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
  UnityEngine_Object_o *multiGachaLongPressSkipObj; // x21
  UnityEngine_Color_o v11; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB07BA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_408/*"#4C4C4C"*/);
    byte_4CB07BA = 1;
  }
  *(_QWORD *)&v11.fields.r = 0;
  *(_QWORD *)&v11.fields.b = 0;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0, 0) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_408/*"#4C4C4C"*/, &v11, 0);
    v8 = __PAIR64__(1.0, 1.0);
    v9 = __PAIR64__(1.0, 1.0);
    if ( !isEnble )
    {
      v8 = *(_QWORD *)&v11.fields.r;
      v9 = *(_QWORD *)&v11.fields.b;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v12.fields.r = v8;
    *(_QWORD *)&v12.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v12, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v13.fields.r = v8;
    *(_QWORD *)&v13.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v13, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v14.fields.r = v8;
    *(_QWORD *)&v14.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v15.fields.r = v8;
    *(_QWORD *)&v15.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v16.fields.r = v8;
    *(_QWORD *)&v16.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    *(_QWORD *)&v17.fields.r = v8;
    *(_QWORD *)&v17.fields.b = v9;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0);
    multiGachaLongPressSkipObj = (UnityEngine_Object_o *)this->fields.multiGachaLongPressSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(multiGachaLongPressSkipObj, 0, 0) )
    {
      multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaLongPressSkipObj;
      if ( multiGachaBgSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multiGachaBgSprite, isEnble, 0);
        return;
      }
LABEL_21:
      sub_1C6BC60(multiGachaBgSprite, v6);
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
  UISprite_o *multiGacha2DigitNumSprite; // x22
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v29; // x22
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  v15 = this;
  v16 = isChangeMax;
  v30 = eventId;
  if ( (byte_4CB07B9 & 1) == 0 )
  {
    sub_1C6BA08(&BoxGachaUtility_TypeInfo);
    sub_1C6BA08(&EventRewardRootComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_20734/*"img_txt_getpresent_"*/);
    this = (BoxGachaResultEffectComponent_o *)sub_1C6BA08(&StringLiteral_20478/*"img_gachatxt_"*/);
    byte_4CB07B9 = 1;
  }
  v15->fields.isCanDraw = enableNum > 0;
  v15->fields.isChangeMaxDraw = v16;
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
  if ( enableNum )
    v19 = enableNum;
  else
    v19 = 1;
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
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v19,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    0);
  v24 = System_Int32__ToString((int32_t)&v30, 0);
  v25 = System_String__Concat_63966792((System_String_o *)StringLiteral_20478/*"img_gachatxt_"*/, v24, 0);
  v26 = System_Int32__ToString((int32_t)&v30, 0);
  v27 = System_String__Concat_63966792((System_String_o *)StringLiteral_20734/*"img_txt_getpresent_"*/, v26, 0);
  multiGachaTimeSprite = v15->fields.multiGachaTimeSprite;
  v29 = v27;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v25, 0);
  EventRewardRootComponent__setRewardInfoImg(v15->fields.multiInfoTxtSprite, v29, 0);
  this = (BoxGachaResultEffectComponent_o *)v15->fields.itemResourceComponent;
  if ( !this )
LABEL_17:
    sub_1C6BC60(this, *(_QWORD *)&enableNum);
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
  System_Action_T1__T2__o *onEnableBackBtn; // x19
  _BOOL4 v4; // w21
  struct System_Func_bool__o *isUnSkippable; // x8
  bool v6; // w2

  if ( (byte_4CB07C6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_bool__bool___);
    byte_4CB07C6 = 1;
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
    (const MethodInfo_3086148 *)Method_ActionExtensions_Call_bool__bool___);
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

  if ( (byte_4CB07D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_Action__Action___);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_1__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_2__);
    byte_4CB07D5 = 1;
  }
  afterAutoReset = (System_Action_T1__T2__o *)this->fields.afterAutoReset;
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_1__,
    0);
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__88_2__,
    0);
  ActionExtensions__Call_object__object_(
    afterAutoReset,
    (Il2CppObject *)v4,
    (Il2CppObject *)v5,
    (const MethodInfo_3086358 *)Method_ActionExtensions_Call_Action__Action___);
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
    sub_1C6BC60(resourcesPanel, v6);
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

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1C6BC60(0, method);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0);
}


void BoxGachaResultEffectComponent___CheckAutoResetEnable_b__88_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x22
  Il2CppObject *prizeName; // x23
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB07D6 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    byte_4CB07D6 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum);
  v8 = System_String__Format_64008168(v4, v5, prizeName, v7, 0);
  if ( !currentResultLabel )
    sub_1C6BC60(v8, v9);
  UILabel__set_text(currentResultLabel, v8, 0);
}


void BoxGachaResultEffectComponent___ContinueExeGacha_b__87_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x22
  Il2CppObject *prizeName; // x23
  Il2CppObject *v7; // x0
  System_String_o *targetFSM; // x0
  __int64 v9; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB07D4 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_1C6BA08(&StringLiteral_5778/*"EXE_GACHA"*/);
    byte_4CB07D4 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0);
  boxNo = this->fields.boxNo;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum);
  targetFSM = System_String__Format_64008168(v4, v5, prizeName, v7, 0);
  if ( !currentResultLabel
    || (UILabel__set_text(currentResultLabel, targetFSM, 0), (targetFSM = (System_String_o *)this->fields.targetFSM) == 0) )
  {
    sub_1C6BC60(targetFSM, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)targetFSM, (System_String_o *)StringLiteral_5778/*"EXE_GACHA"*/, 0);
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

  if ( (byte_4CB07D7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5778/*"EXE_GACHA"*/);
    byte_4CB07D7 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C6BC60(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5778/*"EXE_GACHA"*/, 0);
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
  System_Action_o *v8; // x20
  System_Action_o *v9; // x20
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  void (__fastcall *invoke_impl)(intptr_t, _OWORD *, intptr_t); // x9
  intptr_t method_code; // x0
  __int128 v13; // [xsp+20h] [xbp-70h] BYREF
  __int128 v14; // [xsp+30h] [xbp-60h] BYREF
  _OWORD v15[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4CB07D1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_1__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_2__);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4CB07D1 = 1;
  }
  *((_QWORD *)&v13 + 1) = 0;
  v14 = 0u;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v4 = (UITweener_o *)resourcesPanel;
  UITweener__Play_49754572((UITweener_o *)resourcesPanel, 1, 0);
  UITweener__ResetToBeginning(v4, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v4, 1, 0);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v5 = (UITweener_o *)resourcesPanel;
  UITweener__Play_49754572((UITweener_o *)resourcesPanel, 1, 0);
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
  *(_QWORD *)&v13 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0);
  sub_1C6B9AC(&v13, v13);
  BYTE8(v13) = this->fields.isShortCut;
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_1__,
    0);
  *(_QWORD *)&v14 = v8;
  sub_1C6B9AC(&v14, v8);
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_2__,
    0);
  *((_QWORD *)&v14 + 1) = v9;
  resourcesPanel = (UnityEngine_Component_o *)sub_1C6B9AC((char *)&v14 + 8, v9);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1C6BC60(resourcesPanel, method);
  invoke_impl = (void (__fastcall *)(intptr_t, _OWORD *, intptr_t))playVoiceAction->fields.invoke_impl;
  method_code = playVoiceAction->fields.method_code;
  v15[0] = v13;
  v15[1] = v14;
  invoke_impl(method_code, v15, playVoiceAction->fields.method);
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
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 v14; // x8
  System_String_o *v15; // x0

  if ( (byte_4CB07D2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CB07D2 = 1;
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
    v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
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
                     (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (resourcesPanel & 1) != 0 )
    return;
  v10 = this->fields.playedVoiceData;
  if ( !v10
    || (resourcesPanel = (__int64)v10->fields.playedVoices) == 0
    || (targetVoiceId = (unsigned __int64)this->fields.targetVoiceId,
        v11 = *(_QWORD *)(resourcesPanel + 16),
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++*(_DWORD *)(resourcesPanel + 28),
        !v11) )
  {
LABEL_25:
    sub_1C6BC60(resourcesPanel, targetVoiceId);
  }
  v13 = *(int *)(resourcesPanel + 24);
  if ( (unsigned int)v13 >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)resourcesPanel,
      (Il2CppObject *)targetVoiceId,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = v11 + 8 * v13;
    *(_DWORD *)(resourcesPanel + 24) = v13 + 1;
    *(_QWORD *)(v14 + 32) = targetVoiceId;
    sub_1C6B9AC(v14 + 32, targetVoiceId);
  }
  v15 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v15, 0);
}


void BoxGachaResultEffectComponent___dispMsgAftResultList_b__86_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isLongPress; // w8
  int32_t currentEventId; // w20
  System_Action_o *v5; // x21

  if ( (byte_4CB07D3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    sub_1C6BA08(&StringLiteral_22640/*"overwriteFirstTimeDispItemGet"*/);
    byte_4CB07D3 = 1;
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
      v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0);
      EventTutorialMaster__CheckTutorial(currentEventId, 103, v5, 0, 0, 0, 0, 0);
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_22640/*"overwriteFirstTimeDispItemGet"*/, 1, 0);
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
  CommonMessageManager_o *messageManager; // x20
  struct System_Func_bool__o *isUnSkippable; // x8
  System_String_o *befMsg; // x21
  char v6; // w8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v8; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v12; // x8
  System_String_o *v13; // x0
  struct System_Int32_array *rareIdxList; // x8

  v2 = this;
  if ( (byte_4CB07CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CB07CF = 1;
  }
  messageManager = v2->fields.messageManager;
  isUnSkippable = v2->fields.isUnSkippable;
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
                                              (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = v2->fields.playedVoiceData;
    if ( v8 )
    {
      this = (BoxGachaResultEffectComponent_o *)v8->fields.playedVoices;
      if ( this )
      {
        method = (const MethodInfo *)v2->fields.targetVoiceId;
        m_CachedPtr = this->fields.m_CachedPtr;
        v10 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( m_CachedPtr )
        {
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
          }
          else
          {
            v12 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v12 + 32) = method;
            sub_1C6B9AC(v12 + 32, method);
          }
          v13 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)v2->fields.playedVoiceData, 0);
          EventRewardSaveData__SetBoxGachaPlayedVoice(v2->fields.currentEventId, v13, 0);
          return;
        }
      }
    }
LABEL_23:
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(0, v4);
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

  if ( (byte_4CB07D0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22566/*"openResultListWindow"*/);
    byte_4CB07D0 = 1;
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, method);
  if ( this->fields.isLongPress )
    BoxGachaResultEffectComponent__openResultListWindow(this, v3);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22566/*"openResultListWindow"*/,
      this->fields.openResultWindowTime,
      0);
}


void BoxGachaResultEffectComponent__clearResultList(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_Action_o **p_closeCallBack; // x19
  __int64 v5; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v7; // x2

  p_closeCallBack = &this->fields.closeCallBack;
  this->fields.closeCallBack = callBack;
  sub_1C6B9AC(&this->fields.closeCallBack, callBack);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, *p_closeCallBack, v7);
      return;
    }
LABEL_6:
    sub_1C6BC60(resultWindow, v5);
  }
  ActionExtensions__Call(*p_closeCallBack, 0);
}


void BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  struct CommonMessageManager_o *messageManager; // x8
  struct CommonMessageManager_o *v4; // x8
  __int64 v5; // x1
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  struct System_Int32_array *rareIdxList; // x8
  _QWORD v13[4]; // [xsp+0h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4CB07C7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_0__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB07C7 = 1;
  }
  memset(&v13[1], 0, 24);
  messageManager = v2->fields.messageManager;
  if ( !messageManager )
    goto LABEL_22;
  messageManager->fields.touchCallbackFunc = 0;
  this = (BoxGachaResultEffectComponent_o *)sub_1C6B9AC(&messageManager->fields.touchCallbackFunc, 0);
  v4 = v2->fields.messageManager;
  if ( !v4 )
    goto LABEL_22;
  v4->fields.longPressCallbackFunc = 0;
  sub_1C6B9AC(&v4->fields.longPressCallbackFunc, 0);
  this = (BoxGachaResultEffectComponent_o *)v2->fields.info;
  if ( !this )
    goto LABEL_22;
  v13[0] = BoxGachaTalkInfo__getAfterVoiceId((BoxGachaTalkInfo_o *)this, v2->fields.randomTalkIdx, 0);
  sub_1C6B9AC(v13, v13[0]);
  v5 = v13[0];
  v2->fields.targetVoiceId = (struct System_String_o *)v13[0];
  this = (BoxGachaResultEffectComponent_o *)sub_1C6B9AC(&v2->fields.targetVoiceId, v5);
  if ( !v2->fields.isLongPress )
    goto LABEL_11;
  playedVoiceData = v2->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v2->fields.targetVoiceId,
                                              (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0
    || v2->fields.isChangeMaxDrawPreviousLastDraw
    || !v2->fields.isUserCanDrawByTicket
    || v2->fields.isLimitResetEmpty )
  {
LABEL_11:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    v9 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)v2,
      Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__86_0__,
      0);
    if ( v9 )
    {
      CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, v11, 0);
      return;
    }
LABEL_22:
    sub_1C6BC60(this, method);
  }
  if ( !v2->fields.isChangeMaxDraw )
  {
    rareIdxList = v2->fields.rareIdxList;
    if ( !rareIdxList )
      goto LABEL_22;
    if ( !rareIdxList->max_length )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  BoxGachaResultEffectComponent__ContinueExeGacha(v2, method);
}


void BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v4; // x22
  System_Action_o *v5; // x20
  struct CommonMessageManager_o *v6; // x22
  System_Action_o *v7; // x20
  __int64 v8; // x1
  System_Action_o *v9; // x20
  System_Action_o *v10; // x20
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  void (__fastcall *invoke_impl)(intptr_t, _OWORD *, intptr_t); // x9
  intptr_t method_code; // x0
  __int128 v14; // [xsp+20h] [xbp-70h] BYREF
  __int128 v15; // [xsp+30h] [xbp-60h] BYREF
  _OWORD v16[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4CB07BE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_0__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_1__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_2__);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_3__);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4CB07BE = 1;
  }
  *((_QWORD *)&v14 + 1) = 0;
  v15 = 0u;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0);
  v4 = this->fields.messageManager;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_0__,
    0);
  if ( !v4 )
    goto LABEL_11;
  v4->fields.touchCallbackFunc = v5;
  sub_1C6B9AC(&v4->fields.touchCallbackFunc, v5);
  v6 = this->fields.messageManager;
  v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_1__,
    0);
  if ( !v6 )
    goto LABEL_11;
  v6->fields.longPressCallbackFunc = v7;
  sub_1C6B9AC(&v6->fields.longPressCallbackFunc, v7);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_11;
  *(_QWORD *)&v14 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0);
  sub_1C6B9AC(&v14, v14);
  v8 = v14;
  this->fields.targetVoiceId = (struct System_String_o *)v14;
  sub_1C6B9AC(&this->fields.targetVoiceId, v8);
  BYTE8(v14) = this->fields.isShortCut;
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_2__,
    0);
  *(_QWORD *)&v15 = v9;
  sub_1C6B9AC(&v15, v9);
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__74_3__,
    0);
  *((_QWORD *)&v15 + 1) = v10;
  messageManager = (UnityEngine_Component_o *)sub_1C6B9AC((char *)&v15 + 8, v10);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_11:
    sub_1C6BC60(messageManager, method);
  invoke_impl = (void (__fastcall *)(intptr_t, _OWORD *, intptr_t))playVoiceAction->fields.invoke_impl;
  method_code = playVoiceAction->fields.method_code;
  v16[0] = v14;
  v16[1] = v15;
  invoke_impl(method_code, v16, playVoiceAction->fields.method);
}


void BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4CB07BC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AvalonSceneManager_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__endloadEffect_b__72_0__);
    sub_1C6BA08(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB07BC = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1C6B9AC(BoxGachaResultEffectComponent_TypeInfo->static_fields, data);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__72_0__, 0);
    if ( !v7 )
      sub_1C6BC60(v10, v11);
    CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, v9, 0);
  }
}


UnityEngine_GameObject_o *BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51495936; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4CB07BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject____78568200);
    sub_1C6BA08(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB07BD = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51495936 = AssetData__GetObject_object__51495936(
                              effectAssetData,
                              name,
                              (const MethodInfo_311C400 *)Method_AssetData_GetObject_GameObject____78568200);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51495936,
                                     (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC09 )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CAFC0E )
  {
    effectAssetData = (AssetData_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C6BC60(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
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
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  struct System_Int32_array *rareIdxList; // x8
  const MethodInfo *v32; // x1
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *PlayedVoiceData; // x0
  bool v34; // w8
  System_String_o *v35; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x23
  System_String_o *v38; // x0
  System_String_o *v39; // x21
  System_String_o *v40; // x24
  System_String_o *v41; // x20
  const MethodInfo *v42; // x1

  if ( (byte_4CB07B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_15981/*"[k]"*/);
    sub_1C6BA08(&StringLiteral_25696/*"＠"*/);
    sub_1C6BA08(&StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4CB07B8 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1C6B9AC(&this->fields.resultIdList, resultIds);
  this->fields.rareIdxList = rareIdxs;
  sub_1C6B9AC(&this->fields.rareIdxList, rareIdxs);
  this->fields.resultNoList = baseNos;
  sub_1C6B9AC(&this->fields.resultNoList, baseNos);
  this->fields.standFigure = currentFigure;
  Instance = (DataManager_o *)sub_1C6B9AC(&this->fields.standFigure, currentFigure);
  this->fields.isShortCut = isShortCut;
  this->fields.normalFace = face;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  rareIdxList = this->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_28;
  if ( rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
  this->fields.playVoiceAction = playVoice;
  sub_1C6B9AC(&this->fields.playVoiceAction, playVoice);
  this->fields.endVoiceAction = endVoice;
  sub_1C6B9AC(&this->fields.endVoiceAction, endVoice);
  PlayedVoiceData = BoxGachaResultEffectComponent__GetPlayedVoiceData(this, v32);
  this->fields.playedVoiceData = PlayedVoiceData;
  sub_1C6B9AC(&this->fields.playedVoiceData, PlayedVoiceData);
  this->fields.compensationMsgIds = messageIdList;
  sub_1C6B9AC(&this->fields.compensationMsgIds, messageIdList);
  this->fields.info = talkInfo;
  sub_1C6B9AC(&this->fields.info, talkInfo);
  this->fields.isUnSkippable = unskippable;
  sub_1C6B9AC(&this->fields.isUnSkippable, unskippable);
  v34 = isResourceMultiBtnLongPress || this->fields.isLongPress;
  this->fields.isLongPress = v34;
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1C6B9AC(&this->fields.endPerformanceAction, endPerformanceAction);
  if ( System_String__IsNullOrEmpty(displayName, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_28;
    displayName = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0);
  }
  this->fields.currentSvtName = displayName;
  sub_1C6B9AC(&this->fields.currentSvtName, displayName);
  Instance = (DataManager_o *)System_String__Concat_64005056(
                                (System_String_o *)StringLiteral_25696/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0);
  v30 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v35 = (System_String_o *)Instance;
  v36 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0);
  v37 = System_String__Concat_63966792(v36, (System_String_o *)StringLiteral_15981/*"[k]"*/, 0);
  v38 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  v39 = System_String__Concat_63966792(v38, (System_String_o *)StringLiteral_15981/*"[k]"*/, 0);
  v40 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  if ( !v40 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v40, (System_String_o *)Instance, 0) )
    v37 = System_String__Concat_63966792(v35, v37, 0);
  this->fields.befMsg = v37;
  sub_1C6B9AC(&this->fields.befMsg, v37);
  v41 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11493/*"SCRIPT_ACTION_CODE_TALK"*/, 0);
  if ( !v41 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v41, (System_String_o *)Instance, 0) )
    v39 = System_String__Concat_63966792(v35, v39, 0);
  this->fields.aftMsg = v39;
  sub_1C6B9AC(&this->fields.aftMsg, v39);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0)) == 0 )
  {
LABEL_28:
    sub_1C6BC60(Instance, v30);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  this->fields.isNeedOpenGetExchangeTicketTutorial = EventTutorialMaster__IsTutorialAvailable(
                                                       this->fields.currentEventId,
                                                       103,
                                                       0,
                                                       0,
                                                       0,
                                                       0,
                                                       0);
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v42);
}


void BoxGachaResultEffectComponent__loadBoxGachaEffect(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4CB07BB & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_endloadEffect__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&StringLiteral_5862/*"Effect/BoxGacha"*/);
    byte_4CB07BB = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5862/*"Effect/BoxGacha"*/, v3, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        bool isResultWindowLongPress,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v6; // x8

  if ( (byte_4CB07C5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12328/*"START_ITEM_GET_EFFECT"*/);
    sub_1C6BA08(&StringLiteral_5430/*"END_DISP"*/);
    byte_4CB07C5 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0),
        resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM,
        this->fields.isLongPress = isResultWindowLongPress,
        !resultWindowTouchBlock) )
  {
    sub_1C6BC60(resultWindowTouchBlock, isResultWindowLongPress);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v6 = (System_String_o **)&StringLiteral_12328/*"START_ITEM_GET_EFFECT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_5430/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v6, 0);
}


void BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resourcesPanel; // x0
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  System_Int32_array *resultNoList; // x23
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  _BOOL4 isDischargeGetEffectItem; // w27
  _BOOL4 isLongPress; // w28
  System_Action_bool__o *callback; // x26
  const MethodInfo *v13; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB07C4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent_openResultCallback__);
    byte_4CB07C4 = 1;
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
  resultWindow = this->fields.resultWindow;
  resultIdList = this->fields.resultIdList;
  rareIdxList = this->fields.rareIdxList;
  resultNoList = this->fields.resultNoList;
  currentBaseId = this->fields.currentBaseId;
  currentEventId = this->fields.currentEventId;
  isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
  isLongPress = this->fields.isLongPress;
  callback = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    callback,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_openResultCallback__,
    0);
  if ( !resultWindow )
LABEL_8:
    sub_1C6BC60(resourcesPanel, method);
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


void BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x21
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0

  if ( (byte_4CB07CB & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB07CB = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1C6BC60(0, v8);
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

  if ( (byte_4CB07C2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BoxGachaResultEffectComponent__showResultList_b__78_0__);
    sub_1C6BA08(&StringLiteral_22566/*"openResultListWindow"*/);
    byte_4CB07C2 = 1;
  }
  resultWindow = (UnityEngine_Behaviour_o *)this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_8;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(resultWindow, 0) )
  {
    v5 = this->fields.resultWindow;
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__showResultList_b__78_0__, 0);
    if ( v5 )
    {
      ResultListWindow__Close(v5, v6, v7);
      return;
    }
LABEL_8:
    sub_1C6BC60(resultWindow, method);
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, v4);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22566/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0);
}


void BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(
        BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4CB07D8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB07D8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.playedVoices = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C6B9AC(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB07D9 & 1) == 0 )
  {
    sub_1C6BA08(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4CB07D9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v1;
  sub_1C6B9AC(BoxGachaResultEffectComponent___c_TypeInfo->static_fields, v1);
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