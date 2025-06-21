void __fastcall BoxGachaResultEffectComponent___ctor(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.openResultWindowTime = 0.1;
  this->fields.performanceSlideOutSpeed = 3.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__CheckAutoResetEnable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UICommonButton_o *multiGachaButton; // x0
  struct System_Action_o *endVoiceAction; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v10; // x19
  char v11; // w8
  Il2CppObject *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v14; // x21
  System_Action_o *v15; // x22
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_4B16B4A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_0__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B16B4A = 1;
  }
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_17;
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, 1, 0LL);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v7);
  if ( this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox )
  {
    if ( !this->fields.isDispAutoResetDlg )
    {
      this->fields.isDispAutoResetDlg = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v14 = (CommonUI_o *)Instance;
      v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_0__,
        0LL);
      if ( !v14 )
        goto LABEL_17;
      v16.fields.x = 0.0;
      v16.fields.y = -40.0;
      CommonUI__OpenFullScreenMaskDialog(v14, resetBoxMsg, -1, v15, v16, -1, 0, 0LL);
    }
    return;
  }
  multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
  this->fields.isEndAfterMsg = 0;
  if ( !multiGachaButton
    || (ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0LL),
        BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v8),
        (multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel) == 0LL) )
  {
LABEL_17:
    sub_1BCB254(multiGachaButton, method);
  }
  multiGachaButton = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)multiGachaButton,
                                           0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v10 = (UnityEngine_GameObject_o *)multiGachaButton;
  if ( isUnSkippable )
  {
    multiGachaButton = (UICommonButton_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                             isUnSkippable->fields.original_method_info,
                                             *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v11 = (unsigned __int8)multiGachaButton ^ 1;
    if ( !v10 )
      goto LABEL_17;
  }
  else
  {
    v11 = 1;
    if ( !multiGachaButton )
      goto LABEL_17;
  }
  UnityEngine_GameObject__SetActive(v10, v11 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__CloseResultWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v5; // x2

  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, 0LL, v5);
      return;
    }
LABEL_6:
    sub_1BCB254(resultWindow, v3);
  }
}


void __fastcall BoxGachaResultEffectComponent__ContinueExeGacha(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct CommonMessageManager_o *messageManager; // x8
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__Action__o *afterAutoReset; // x21
  System_Action_o *v8; // x20

  v2 = this;
  if ( (byte_4B16B49 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__, v3);
    this = (BoxGachaResultEffectComponent_o *)sub_1BCAFF8(&StringLiteral_5742/*"EXE_GACHA"*/, v4);
    byte_4B16B49 = 1;
  }
  messageManager = v2->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager->fields.callbackFunc = 0LL;
  this = (BoxGachaResultEffectComponent_o *)sub_1BCAF9C(&messageManager->fields.callbackFunc);
  endVoiceAction = v2->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
  if ( !v2->fields.isBoxItemEmpty || v2->fields.isLastLimitBox )
  {
    this = (BoxGachaResultEffectComponent_o *)v2->fields.targetFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5742/*"EXE_GACHA"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1BCB254(this, method);
  }
  afterAutoReset = v2->fields.afterAutoReset;
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)v2, Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__, 0LL);
  if ( !afterAutoReset )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Action_o *, _QWORD))afterAutoReset->fields.m_target)(
    afterAutoReset->fields.original_method_info,
    0LL,
    v8,
    *(_QWORD *)&afterAutoReset->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__EndAction(
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
    sub_1BCB254(v4, v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__EndMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonMessageManager_o *messageManager; // x0
  const MethodInfo *v10; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v12; // x0
  System_Action_o *_9__75_0; // x20
  Il2CppObject *v14; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B16B41 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isAfter);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__, v5);
    sub_1BCAFF8(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_5400/*"END_MSG"*/, v7);
    byte_4B16B41 = 1;
  }
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, method);
  messageManager = this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_19;
  CommonMessageManager__Quit(messageManager, 0LL);
  if ( !isAfter )
    goto LABEL_8;
  messageManager = (CommonMessageManager_o *)this->fields.resourcesPanel;
  if ( !messageManager )
    goto LABEL_19;
  messageManager = (CommonMessageManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)messageManager,
                                               0LL);
  if ( !messageManager )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageManager, 0, 0LL);
  if ( this->fields.isOpenCompensationDlg
    || (compensationMsgIds = this->fields.compensationMsgIds) == 0LL
    || !*(_QWORD *)&compensationMsgIds->max_length )
  {
LABEL_8:
    messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
    if ( messageManager )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5400/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1BCB254(messageManager, v8);
  }
  v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__75_0 = v12->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__75_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(_9__75_0, v14, Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = _9__75_0;
    sub_1BCAF9C(&static_fields->__9__75_0);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__75_0, v10);
}


void __fastcall BoxGachaResultEffectComponent__ExecuteGacha(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Func_bool__o *isUnSkippable; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__float__o *endPerformanceAction; // x21
  System_Action_o *v15; // x20
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_4B16B4E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent_ExecuteGacha__, v3);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_0__, v4);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_1__, v5);
    sub_1BCAFF8(&StringLiteral_5742/*"EXE_GACHA"*/, v6);
    byte_4B16B4E = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( (!isUnSkippable
     || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
           isUnSkippable->fields.original_method_info,
           *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0)
    && !this->fields.isEndAfterMsg )
  {
    if ( this->fields.isOpenCompensationDlg
      || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.compensationMsgIds, 0LL) )
    {
      v8 = Method_BoxGachaResultEffectComponent_ExecuteGacha__;
      if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_ExecuteGacha__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCB010(Method_BoxGachaResultEffectComponent_ExecuteGacha__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0LL);
      BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v10);
      messageManager = this->fields.messageManager;
      if ( messageManager )
      {
        CommonMessageManager__Quit(messageManager, 0LL);
        endVoiceAction = this->fields.endVoiceAction;
        if ( endVoiceAction )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
            endVoiceAction->fields.original_method_info,
            *(_QWORD *)&endVoiceAction->fields.extra_arg);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0LL);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5742/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
              System_Action___ctor(
                v15,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_1__,
                0LL);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
                  endPerformanceAction->fields.original_method_info,
                  v15,
                  *(_QWORD *)&endPerformanceAction->fields.extra_arg,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
      sub_1BCB254(messageManager, v11);
    }
    *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
    v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_0__, 0LL);
    BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v16, v17);
  }
}


BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *__fastcall BoxGachaResultEffectComponent__GetPlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *BoxGachaPlayedVoice; // x19
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_4B16B4F & 1) == 0 )
  {
    sub_1BCAFF8(&BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___, v3);
    byte_4B16B4F = 1;
  }
  BoxGachaPlayedVoice = EventRewardSaveData__GetBoxGachaPlayedVoice(this->fields.currentEventId, 0LL);
  if ( !System_String__IsNullOrEmpty(BoxGachaPlayedVoice, 0LL) )
    return (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        BoxGachaPlayedVoice,
                                                                        (const MethodInfo_3087540 *)Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
  v5 = (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)sub_1BCB244(BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(v5, v6);
  return v5;
}


bool __fastcall BoxGachaResultEffectComponent__IsResultPanelActive(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = (ScriptMessageCommonManager_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
  if ( !gameObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = (ScriptMessageCommonManager_o *)this->fields.messageManager;
    if ( gameObject )
      return ScriptMessageCommonManager__IsRootActive(gameObject, 0LL);
LABEL_6:
    sub_1BCB254(gameObject, v4);
  }
  return 0;
}


bool __fastcall BoxGachaResultEffectComponent__IsUnSkippable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
             isUnSkippable->fields.original_method_info,
             *(_QWORD *)&isUnSkippable->fields.extra_arg);
  else
    return 0;
}


void __fastcall BoxGachaResultEffectComponent__LongPressMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_o *multiGachaButton; // x0
  const MethodInfo *v4; // x1

  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    sub_1BCB254(0LL, method);
  if ( (((__int64 (__fastcall *)(struct UICommonButton_o *, Il2CppMethodPointer))multiGachaButton->klass->vtable._4_get_isEnabled.method)(
          multiGachaButton,
          multiGachaButton->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    this->fields.isLongPress = 1;
    BoxGachaResultEffectComponent__ExecuteGacha(this, v4);
  }
}


void __fastcall BoxGachaResultEffectComponent__MsgBefSkip(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BoxGachaResultEffectComponent___c_c *v5; // x0
  struct System_Action_Action__float__o *endPerformanceAction; // x23
  System_Action_o *_9__74_0; // x20
  Il2CppObject *v8; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B16B40 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__, v3);
    sub_1BCAFF8(&BoxGachaResultEffectComponent___c_TypeInfo, v4);
    byte_4B16B40 = 1;
  }
  this->fields.isShortCut = 1;
  v5 = BoxGachaResultEffectComponent___c_TypeInfo;
  endPerformanceAction = this->fields.endPerformanceAction;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v5 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__74_0 = v5->static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__74_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(_9__74_0, v8, Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__74_0 = _9__74_0;
    v5 = (BoxGachaResultEffectComponent___c_c *)sub_1BCAF9C(&static_fields->__9__74_0);
  }
  if ( !endPerformanceAction )
    sub_1BCB254(v5, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
    endPerformanceAction->fields.original_method_info,
    _9__74_0,
    *(_QWORD *)&endPerformanceAction->fields.extra_arg,
    this->fields.performanceSlideOutSpeed);
  BoxGachaResultEffectComponent__EndAction(this, 0, v10);
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B16B4D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__, method);
    byte_4B16B4D = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCB010(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__OnClickMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isLongPress = 0;
  BoxGachaResultEffectComponent__ExecuteGacha(this, method);
}


void __fastcall BoxGachaResultEffectComponent__OpenCompensationItemDialog(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v9; // x20
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B16B42 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, endCallBack);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B16B42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v10,
    compensationMsgIds,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
  if ( !v9 )
    sub_1BCB254(v11, v12);
  CommonUI__OpenCompensationItemDialog(v9, v10, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__PreOpenResultWindowAction(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *currentResultLabel; // x20
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x22
  Il2CppObject *prizeName; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Transform_o *v22; // x19
  float OffsetX; // s0
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B16B44 & 1) == 0 )
  {
    sub_1BCAFF8(&FSUtility_TypeInfo, method);
    sub_1BCAFF8(&int_TypeInfo, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v5);
    sub_1BCAFF8(&StringLiteral_18648/*"ef_boxitem_start"*/, v6);
    byte_4B16B44 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v9, v10, v11);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v14, v15, v16);
  gameObject = System_String__Format_62491784(v8, v12, prizeName, v17, 0LL);
  if ( !currentResultLabel )
    goto LABEL_12;
  UILabel__set_text(currentResultLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  gameObject = (System_String_o *)BoxGachaResultEffectComponent__getEffect(
                                    (System_String_o *)StringLiteral_18648/*"ef_boxitem_start"*/,
                                    transform,
                                    v21);
  if ( !gameObject )
    goto LABEL_12;
  v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v22 )
LABEL_12:
    sub_1BCB254(gameObject, v19);
  v26.fields.x = OffsetX + 200.0;
  v26.fields.z = 0.0;
  v26.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v22, v26, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SavePlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x1

  v3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0LL);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v3, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_Action__Action__o *callback,
        const MethodInfo *method)
{
  this->fields.afterAutoReset = callback;
  sub_1BCAF9C(&this->fields.afterAutoReset);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetAutoResetMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isLimit,
        bool isLastLimitBox,
        System_String_o *prizeName,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v14; // w8
  System_String_o **v15; // x8
  System_String_o *v16; // x0

  v9 = isLastLimitBox;
  if ( (byte_4B16B4B & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, isLimit);
    sub_1BCAFF8(&string_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_2965/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v11);
    sub_1BCAFF8(&StringLiteral_2962/*"BOX_GACHA_AUTO_RESET_INFO"*/, v12);
    byte_4B16B4B = 1;
  }
  this->fields.resetBoxMsg = string_TypeInfo->static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1BCAF9C(p_resetBoxMsg);
  v14 = *((unsigned __int8 *)p_resetBoxMsg + 87);
  *((_BYTE *)p_resetBoxMsg + 88) = v9;
  if ( v14 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v15 = (System_String_o **)&StringLiteral_2965/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v15 = (System_String_o **)&StringLiteral_2962/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v16 = LocalizationManager__Get(*v15, 0LL);
    *p_resetBoxMsg = System_String__Format(v16, (Il2CppObject *)prizeName, 0LL);
    sub_1BCAF9C(p_resetBoxMsg);
  }
}


void __fastcall BoxGachaResultEffectComponent__SetBoxItemIsEmptyFlag(
        BoxGachaResultEffectComponent_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  this->fields.isBoxItemEmpty = isEmpty;
}


void __fastcall BoxGachaResultEffectComponent__SetCurrentResultInfo(
        BoxGachaResultEffectComponent_o *this,
        int32_t boxNumber,
        int32_t currentNum,
        System_String_o *name,
        const MethodInfo *method)
{
  this->fields.boxNo = boxNumber;
  this->fields.boxCurrentNum = currentNum;
  this->fields.prizeName = name;
  sub_1BCAF9C(&this->fields.prizeName);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1BCAF9C(&this->fields.onEnableBackBtn);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetGachaButtonStatus(
        BoxGachaResultEffectComponent_o *this,
        bool isEnble,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *multiGachaButton; // x21
  __int64 v7; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *multiGachaLongPressSkipObj; // x21
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B16B3B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, isEnble);
    sub_1BCAFF8(&StringLiteral_407/*"#4C4C4C"*/, v5);
    byte_4B16B3B = 1;
  }
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_407/*"#4C4C4C"*/, &v14, 0LL);
    a = 1.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    if ( !isEnble )
    {
      g = v14.fields.g;
      r = v14.fields.r;
      b = v14.fields.b;
      a = v14.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v20, 0LL);
    multiGachaLongPressSkipObj = (UnityEngine_Object_o *)this->fields.multiGachaLongPressSkipObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(multiGachaLongPressSkipObj, 0LL, 0LL) )
    {
      multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaLongPressSkipObj;
      if ( multiGachaBgSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)multiGachaBgSprite, isEnble, 0LL);
        return;
      }
LABEL_21:
      sub_1BCB254(multiGachaBgSprite, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetUserGachaResource(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t resetNum; // w8
  bool v21; // w8
  int32_t v22; // w21
  const MethodInfo *v23; // x2
  UISprite_o *multiGacha2DigitNumSprite; // x22
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v32; // x22
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  v15 = this;
  v16 = isChangeMax;
  v33 = eventId;
  if ( (byte_4B16B3A & 1) == 0 )
  {
    sub_1BCAFF8(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_1BCAFF8(&EventRewardRootComponent_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_20483/*"img_txt_getpresent_"*/, v18);
    this = (BoxGachaResultEffectComponent_o *)sub_1BCAFF8(&StringLiteral_20227/*"img_gachatxt_"*/, v19);
    byte_4B16B3A = 1;
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
  v21 = resetNum == boxGachaEntity->fields.changeMaxDrawAtOnceResetNum - 1 && isBoxGachaItemEmpty;
  if ( enableNum )
    v22 = enableNum;
  else
    v22 = 1;
  v15->fields.isChangeMaxDrawPreviousLastDraw = v21;
  if ( !this )
    goto LABEL_17;
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)this,
    boxGachaEntity->fields.payTargetId,
    boxGachaEntity->fields.payValue * v22,
    0LL);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(v15, v15->fields.isCanDraw, v23);
  multiGacha1DigitNumSprite = v15->fields.multiGacha1DigitNumSprite;
  multiGacha2DigitNumSprite = v15->fields.multiGacha2DigitNumSprite;
  multiGacha3DigitNumSprite = v15->fields.multiGacha3DigitNumSprite;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v22,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    0LL);
  v27 = System_Int32__ToString((int32_t)&v33, 0LL);
  v28 = System_String__Concat_62450424((System_String_o *)StringLiteral_20227/*"img_gachatxt_"*/, v27, 0LL);
  v29 = System_Int32__ToString((int32_t)&v33, 0LL);
  v30 = System_String__Concat_62450424((System_String_o *)StringLiteral_20483/*"img_txt_getpresent_"*/, v29, 0LL);
  multiGachaTimeSprite = v15->fields.multiGachaTimeSprite;
  v32 = v30;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v28, 0LL);
  EventRewardRootComponent__setRewardInfoImg(v15->fields.multiInfoTxtSprite, v32, 0LL);
  this = (BoxGachaResultEffectComponent_o *)v15->fields.itemResourceComponent;
  if ( !this )
LABEL_17:
    sub_1BCB254(this, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)this, boxGachaEntity->fields.payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__Update(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  if ( !UnityEngine_Input__get_touchCount(0LL) )
    this->fields.isLongPress = 0;
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *onEnableBackBtn; // x19
  bool v4; // w20
  struct System_Func_bool__o *isUnSkippable; // x8
  char v6; // w8

  if ( (byte_4B16B47 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool__bool___, method);
    byte_4B16B47 = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v4 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    v6 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
           isUnSkippable->fields.original_method_info,
           *(_QWORD *)&isUnSkippable->fields.extra_arg) ^ 1;
  else
    v6 = 1;
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v4,
    v6 & 1,
    (const MethodInfo_2F6A2D0 *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_T1__T2__o *afterAutoReset; // x20
  System_Action_o *v7; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v12; // x19
  char v13; // w8

  if ( (byte_4B16B55 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_Action__Action___, method);
    sub_1BCAFF8(&System_Action_TypeInfo, v3);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__, v4);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__, v5);
    byte_4B16B55 = 1;
  }
  afterAutoReset = (System_Action_T1__T2__o *)this->fields.afterAutoReset;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__,
    0LL);
  v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__,
    0LL);
  ActionExtensions__Call_object__object_(
    afterAutoReset,
    (Il2CppObject *)v7,
    (Il2CppObject *)v8,
    (const MethodInfo_2F6A4E0 *)Method_ActionExtensions_Call_Action__Action___);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v12 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v13 = 1;
    if ( resourcesPanel )
      goto LABEL_6;
LABEL_8:
    sub_1BCB254(resourcesPanel, v9);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v13 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v12 )
    goto LABEL_8;
LABEL_6:
  UnityEngine_GameObject__SetActive(v12, v13 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1BCB254(0LL, method);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *currentResultLabel; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x22
  Il2CppObject *prizeName; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16B56 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v4);
    byte_4B16B56 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v7, v8, v9);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v12, v13, v14);
  v16 = System_String__Format_62491784(v6, v10, prizeName, v15, 0LL);
  if ( !currentResultLabel )
    sub_1BCB254(v16, v17);
  UILabel__set_text(currentResultLabel, v16, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___ContinueExeGacha_b__86_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *currentResultLabel; // x20
  System_String_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x22
  Il2CppObject *prizeName; // x23
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *targetFSM; // x0
  __int64 v18; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B16B54 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v4);
    sub_1BCAFF8(&StringLiteral_5742/*"EXE_GACHA"*/, v5);
    byte_4B16B54 = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v8, v9, v10);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v13, v14, v15);
  targetFSM = System_String__Format_62491784(v7, v11, prizeName, v16, 0LL);
  if ( !currentResultLabel
    || (UILabel__set_text(currentResultLabel, targetFSM, 0LL),
        (targetFSM = (System_String_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1BCB254(targetFSM, v18);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)targetFSM, (System_String_o *)StringLiteral_5742/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___ExecuteGacha_b__98_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isEndAfterMsg )
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  this->fields.isActiveCompensationDlg = 0;
}


void __fastcall BoxGachaResultEffectComponent___ExecuteGacha_b__98_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4B16B57 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5742/*"EXE_GACHA"*/, method);
    byte_4B16B57 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BCB254(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5742/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__85_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v7; // x20
  UITweener_o *v8; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  System_Action_o *v11; // x20
  System_Action_o *v12; // x20
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v16; // [xsp+20h] [xbp-70h] BYREF
  __int128 v17; // [xsp+30h] [xbp-60h] BYREF
  __int128 v18[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B16B52 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__, v3);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__, v4);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v5);
    byte_4B16B52 = 1;
  }
  *((_QWORD *)&v16 + 1) = 0LL;
  v17 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v7 = (UITweener_o *)resourcesPanel;
  UITweener__Play_48645196((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v7, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v8 = (UITweener_o *)resourcesPanel;
  UITweener__Play_48645196((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v8, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  CommonMessageManager__Init((CommonMessageManager_o *)resourcesPanel, 0LL);
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_12;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.multiGachaButton, 0LL);
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, enabled, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.info;
  if ( !resourcesPanel )
    goto LABEL_12;
  *(_QWORD *)&v16 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1BCAF9C(&v16);
  BYTE8(v16) = this->fields.isShortCut;
  v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__,
    0LL);
  *(_QWORD *)&v17 = v11;
  sub_1BCAF9C(&v17);
  v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__,
    0LL);
  *((_QWORD *)&v17 + 1) = v12;
  resourcesPanel = (UnityEngine_Component_o *)sub_1BCAF9C((char *)&v17 + 8);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1BCB254(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v18[0] = v16;
  v18[1] = v17;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v18,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__85_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *targetVoiceId; // x1
  __int64 resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v9; // x20
  char v10; // w8
  struct System_Func_bool__o *v11; // x8
  System_Action_o *v12; // x20
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  __int64 v18; // x8
  System_String_o *v19; // x0

  if ( (byte_4B16B53 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_4B16B53 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (__int64)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_23;
  resourcesPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v9 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( isUnSkippable )
  {
    resourcesPanel = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                       isUnSkippable->fields.original_method_info,
                       *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v10 = resourcesPanel ^ 1;
    if ( !v9 )
      goto LABEL_23;
  }
  else
  {
    v10 = 1;
    if ( !resourcesPanel )
      goto LABEL_23;
  }
  UnityEngine_GameObject__SetActive(v9, v10 & 1, 0LL);
  v11 = this->fields.isUnSkippable;
  if ( v11
    && (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
          v11->fields.original_method_info,
          *(_QWORD *)&v11->fields.extra_arg) & 1) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (__int64)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_23;
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v12, 0LL);
  playedVoiceData = this->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_23;
  resourcesPanel = (__int64)playedVoiceData->fields.playedVoices;
  if ( !resourcesPanel )
    goto LABEL_23;
  resourcesPanel = System_Collections_Generic_List_object___Contains(
                     (System_Collections_Generic_List_object__o *)resourcesPanel,
                     (Il2CppObject *)this->fields.targetVoiceId,
                     (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (resourcesPanel & 1) != 0 )
    return;
  v14 = this->fields.playedVoiceData;
  if ( !v14
    || (resourcesPanel = (__int64)v14->fields.playedVoices) == 0
    || (targetVoiceId = (Il2CppObject *)this->fields.targetVoiceId,
        v15 = *(_QWORD *)(resourcesPanel + 16),
        v16 = Method_System_Collections_Generic_List_string__Add__,
        ++*(_DWORD *)(resourcesPanel + 28),
        !v15) )
  {
LABEL_23:
    sub_1BCB254(resourcesPanel, targetVoiceId);
  }
  v17 = *(int *)(resourcesPanel + 24);
  if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)resourcesPanel,
      targetVoiceId,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = v15 + 8 * v17;
    *(_DWORD *)(resourcesPanel + 24) = v17 + 1;
    *(_QWORD *)(v18 + 32) = targetVoiceId;
    sub_1BCAF9C(v18 + 32);
  }
  v19 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0LL);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v19, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__85_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isLongPress; // w8

  isLongPress = this->fields.isLongPress;
  this->fields.isEndAfterMsg = 1;
  if ( !isLongPress
    || this->fields.isChangeMaxDrawPreviousLastDraw
    || !this->fields.isUserCanDrawByTicket
    || this->fields.isLimitResetEmpty )
  {
    if ( !this->fields.isActiveCompensationDlg )
      BoxGachaResultEffectComponent__CheckAutoResetEnable(this, method);
  }
  else
  {
    BoxGachaResultEffectComponent__ContinueExeGacha(this, method);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__73_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
          isUnSkippable->fields.original_method_info,
          *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0 )
  {
    BoxGachaResultEffectComponent__MsgBefSkip(this, method);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__73_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8

  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
          isUnSkippable->fields.original_method_info,
          *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0 )
  {
    this->fields.isLongPress = 1;
    BoxGachaResultEffectComponent__MsgBefSkip(this, method);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__73_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  CommonMessageManager_o *messageManager; // x20
  struct System_Func_bool__o *isUnSkippable; // x8
  System_String_o *befMsg; // x21
  char v7; // w8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v13; // x8
  System_String_o *v14; // x0
  struct System_Int32_array *rareIdxList; // x8

  v2 = this;
  if ( (byte_4B16B50 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, method);
    this = (BoxGachaResultEffectComponent_o *)sub_1BCAFF8(
                                                &Method_System_Collections_Generic_List_string__Contains__,
                                                v3);
    byte_4B16B50 = 1;
  }
  messageManager = v2->fields.messageManager;
  isUnSkippable = v2->fields.isUnSkippable;
  befMsg = v2->fields.befMsg;
  if ( isUnSkippable )
  {
    this = (BoxGachaResultEffectComponent_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v7 = (unsigned __int8)this ^ 1;
    if ( !messageManager )
      goto LABEL_23;
  }
  else
  {
    v7 = 1;
    if ( !messageManager )
      goto LABEL_23;
  }
  CommonMessageManager__SetMessageBlock(messageManager, befMsg, v7 & 1, 0LL, 0LL);
  playedVoiceData = v2->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v2->fields.targetVoiceId,
                                              (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = v2->fields.playedVoiceData;
    if ( v9 )
    {
      this = (BoxGachaResultEffectComponent_o *)v9->fields.playedVoices;
      if ( this )
      {
        method = (const MethodInfo *)v2->fields.targetVoiceId;
        v10 = *(_QWORD *)&this->fields.m_CachedPtr;
        v11 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v10 )
        {
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = v10 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v13 + 32) = method;
            sub_1BCAF9C(v13 + 32);
          }
          v14 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)v2->fields.playedVoiceData, 0LL);
          EventRewardSaveData__SetBoxGachaPlayedVoice(v2->fields.currentEventId, v14, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_1BCB254(this, method);
  }
  if ( v2->fields.isChangeMaxDraw )
    goto LABEL_26;
  rareIdxList = v2->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_23;
  if ( !*(_QWORD *)&rareIdxList->max_length )
  {
LABEL_26:
    if ( v2->fields.isLongPress )
      BoxGachaResultEffectComponent__MsgBefSkip(v2, method);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__73_3(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void __fastcall BoxGachaResultEffectComponent___endloadEffect_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( this->fields.isShortCut )
    BoxGachaResultEffectComponent__EndAction(this, 0, v6);
  else
    BoxGachaResultEffectComponent__dispMsgBefResultList(this, v5);
}


void __fastcall BoxGachaResultEffectComponent___showResultList_b__77_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B16B51 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22277/*"openResultListWindow"*/, method);
    byte_4B16B51 = 1;
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, method);
  if ( this->fields.isLongPress )
    BoxGachaResultEffectComponent__openResultListWindow(this, v3);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22277/*"openResultListWindow"*/,
      this->fields.openResultWindowTime,
      0LL);
}


void __fastcall BoxGachaResultEffectComponent__clearResultList(
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
  sub_1BCAF9C(&this->fields.closeCallBack);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, *p_closeCallBack, v7);
      return;
    }
LABEL_6:
    sub_1BCB254(resultWindow, v5);
  }
  ActionExtensions__Call(*p_closeCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  BoxGachaResultEffectComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CommonMessageManager_o *messageManager; // x8
  struct CommonMessageManager_o *v8; // x8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  struct System_Int32_array *rareIdxList; // x8
  __int64 v16[4]; // [xsp+0h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4B16B48 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    this = (BoxGachaResultEffectComponent_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B16B48 = 1;
  }
  memset(&v16[1], 0, 24);
  messageManager = v2->fields.messageManager;
  if ( !messageManager )
    goto LABEL_22;
  messageManager->fields.touchCallbackFunc = 0LL;
  this = (BoxGachaResultEffectComponent_o *)sub_1BCAF9C(&messageManager->fields.touchCallbackFunc);
  v8 = v2->fields.messageManager;
  if ( !v8 )
    goto LABEL_22;
  v8->fields.longPressCallbackFunc = 0LL;
  sub_1BCAF9C(&v8->fields.longPressCallbackFunc);
  this = (BoxGachaResultEffectComponent_o *)v2->fields.info;
  if ( !this )
    goto LABEL_22;
  v16[0] = (__int64)BoxGachaTalkInfo__getAfterVoiceId((BoxGachaTalkInfo_o *)this, v2->fields.randomTalkIdx, 0LL);
  sub_1BCAF9C(v16);
  v2->fields.targetVoiceId = (struct System_String_o *)v16[0];
  this = (BoxGachaResultEffectComponent_o *)sub_1BCAF9C(&v2->fields.targetVoiceId);
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
                                              (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0
    || v2->fields.isChangeMaxDrawPreviousLastDraw
    || !v2->fields.isUserCanDrawByTicket
    || v2->fields.isLimitResetEmpty )
  {
LABEL_11:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v2,
      Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__,
      0LL);
    if ( v12 )
    {
      CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_22:
    sub_1BCB254(this, method);
  }
  if ( !v2->fields.isChangeMaxDraw )
  {
    rareIdxList = v2->fields.rareIdxList;
    if ( !rareIdxList )
      goto LABEL_22;
    if ( !*(_QWORD *)&rareIdxList->max_length )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  BoxGachaResultEffectComponent__ContinueExeGacha(v2, method);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v9; // x22
  System_Action_o *v10; // x20
  struct CommonMessageManager_o *v11; // x22
  System_Action_o *v12; // x20
  System_Action_o *v13; // x20
  System_Action_o *v14; // x20
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v18; // [xsp+20h] [xbp-70h] BYREF
  __int128 v19; // [xsp+30h] [xbp-60h] BYREF
  __int128 v20[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B16B3F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__, v3);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__, v4);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__, v5);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__, v6);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v7);
    byte_4B16B3F = 1;
  }
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v9 = this->fields.messageManager;
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__,
    0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.touchCallbackFunc = v10;
  sub_1BCAF9C(&v9->fields.touchCallbackFunc);
  v11 = this->fields.messageManager;
  v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__,
    0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.longPressCallbackFunc = v12;
  sub_1BCAF9C(&v11->fields.longPressCallbackFunc);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_11;
  *(_QWORD *)&v18 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1BCAF9C(&v18);
  this->fields.targetVoiceId = (struct System_String_o *)v18;
  sub_1BCAF9C(&this->fields.targetVoiceId);
  BYTE8(v18) = this->fields.isShortCut;
  v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__,
    0LL);
  *(_QWORD *)&v19 = v13;
  sub_1BCAF9C(&v19);
  v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__,
    0LL);
  *((_QWORD *)&v19 + 1) = v14;
  messageManager = (UnityEngine_Component_o *)sub_1BCAF9C((char *)&v19 + 8);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_11:
    sub_1BCB254(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v20[0] = v18;
  v20[1] = v19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v20,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B16B3D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, data);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__, v6);
    sub_1BCAFF8(&BoxGachaResultEffectComponent_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B16B3D = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCAF9C(BoxGachaResultEffectComponent_TypeInfo->static_fields);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__, 0LL);
    if ( !v11 )
      sub_1BCB254(v14, v15);
    CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__50315216; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B16B3E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, parentTr);
    sub_1BCAFF8(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B16B3E = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              effectAssetData,
                              name,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__50315216,
                                     (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v10 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v11 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B16191 )
  {
    effectAssetData = (AssetData_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B16191 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B16196 )
  {
    effectAssetData = (AssetData_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4B16196 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1BCB254(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v10;
}


bool __fastcall BoxGachaResultEffectComponent__get_IsAutoReset(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__init(
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  struct System_Int32_array *rareIdxList; // x8
  const MethodInfo *v39; // x1
  bool v40; // w8
  System_String_o *v41; // x22
  System_String_o *v42; // x0
  System_String_o *v43; // x23
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  System_String_o *v46; // x24
  System_String_o *v47; // x20
  const MethodInfo *v48; // x1

  if ( (byte_4B16B39 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v30);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v32);
    sub_1BCAFF8(&StringLiteral_15853/*"[k]"*/, v33);
    sub_1BCAFF8(&StringLiteral_25363/*"＠"*/, v34);
    sub_1BCAFF8(&StringLiteral_11390/*"SCRIPT_ACTION_CODE_TALK"*/, v35);
    byte_4B16B39 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1BCAF9C(&this->fields.resultIdList);
  this->fields.rareIdxList = rareIdxs;
  sub_1BCAF9C(&this->fields.rareIdxList);
  this->fields.resultNoList = baseNos;
  sub_1BCAF9C(&this->fields.resultNoList);
  this->fields.standFigure = currentFigure;
  Instance = (DataManager_o *)sub_1BCAF9C(&this->fields.standFigure);
  this->fields.isShortCut = isShortCut;
  this->fields.normalFace = face;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  rareIdxList = this->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_28;
  if ( *(_QWORD *)&rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
  this->fields.playVoiceAction = playVoice;
  sub_1BCAF9C(&this->fields.playVoiceAction);
  this->fields.endVoiceAction = endVoice;
  sub_1BCAF9C(&this->fields.endVoiceAction);
  this->fields.playedVoiceData = BoxGachaResultEffectComponent__GetPlayedVoiceData(this, v39);
  sub_1BCAF9C(&this->fields.playedVoiceData);
  this->fields.compensationMsgIds = messageIdList;
  sub_1BCAF9C(&this->fields.compensationMsgIds);
  this->fields.info = talkInfo;
  sub_1BCAF9C(&this->fields.info);
  this->fields.isUnSkippable = unskippable;
  sub_1BCAF9C(&this->fields.isUnSkippable);
  v40 = isResourceMultiBtnLongPress || this->fields.isLongPress;
  this->fields.isLongPress = v40;
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1BCAF9C(&this->fields.endPerformanceAction);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_28;
    displayName = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0LL);
  }
  this->fields.currentSvtName = displayName;
  sub_1BCAF9C(&this->fields.currentSvtName);
  Instance = (DataManager_o *)System_String__Concat_62488672(
                                (System_String_o *)StringLiteral_25363/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v37 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v41 = (System_String_o *)Instance;
  v42 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v43 = System_String__Concat_62450424(v42, (System_String_o *)StringLiteral_15853/*"[k]"*/, 0LL);
  v44 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v45 = System_String__Concat_62450424(v44, (System_String_o *)StringLiteral_15853/*"[k]"*/, 0LL);
  v46 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11390/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v46 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v46, (System_String_o *)Instance, 0LL) )
    v43 = System_String__Concat_62450424(v41, v43, 0LL);
  this->fields.befMsg = v43;
  sub_1BCAF9C(&this->fields.befMsg);
  v47 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11390/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v47 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v47, (System_String_o *)Instance, 0LL) )
    v45 = System_String__Concat_62450424(v41, v45, 0LL);
  this->fields.aftMsg = v45;
  sub_1BCAF9C(&this->fields.aftMsg);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1BCB254(Instance, v37);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v48);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4B16B3C & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent_endloadEffect__, v3);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_5822/*"Effect/BoxGacha"*/, v5);
    byte_4B16B3C = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5822/*"Effect/BoxGacha"*/, v6, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        bool isResultWindowLongPress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v7; // x8

  if ( (byte_4B16B46 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12224/*"START_ITEM_GET_EFFECT"*/, isResultWindowLongPress);
    sub_1BCAFF8(&StringLiteral_5395/*"END_DISP"*/, v5);
    byte_4B16B46 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM,
        this->fields.isLongPress = isResultWindowLongPress,
        !resultWindowTouchBlock) )
  {
    sub_1BCB254(resultWindowTouchBlock, isResultWindowLongPress);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v7 = (System_String_o **)&StringLiteral_12224/*"START_ITEM_GET_EFFECT"*/;
  else
    v7 = (System_String_o **)&StringLiteral_5395/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v7, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  const MethodInfo *v14; // [xsp+8h] [xbp-68h]

  if ( (byte_4B16B45 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_4B16B45 = 1;
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  if ( !resourcesPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resourcesPanel, 0, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resultWindowTouchBlock;
  if ( !resourcesPanel )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resourcesPanel, 1, 0LL);
  resultWindow = this->fields.resultWindow;
  resultIdList = this->fields.resultIdList;
  rareIdxList = this->fields.rareIdxList;
  resultNoList = this->fields.resultNoList;
  currentBaseId = this->fields.currentBaseId;
  currentEventId = this->fields.currentEventId;
  isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
  isLongPress = this->fields.isLongPress;
  callback = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    callback,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_openResultCallback__,
    0LL);
  if ( !resultWindow )
LABEL_8:
    sub_1BCB254(resourcesPanel, method);
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
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x21
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0

  if ( (byte_4B16B4C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_4B16B4C = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1BCB254(0LL, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Behaviour_o *resultWindow; // x0
  const MethodInfo *v6; // x1
  ResultListWindow_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4B16B43 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BoxGachaResultEffectComponent__showResultList_b__77_0__, v3);
    sub_1BCAFF8(&StringLiteral_22277/*"openResultListWindow"*/, v4);
    byte_4B16B43 = 1;
  }
  resultWindow = (UnityEngine_Behaviour_o *)this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_8;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(resultWindow, 0LL) )
  {
    v7 = this->fields.resultWindow;
    v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__showResultList_b__77_0__, 0LL);
    if ( v7 )
    {
      ResultListWindow__Close(v7, v8, v9);
      return;
    }
LABEL_8:
    sub_1BCB254(resultWindow, method);
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, v6);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22277/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(
        BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4B16B58 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4B16B58 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.playedVoices = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1BCAF9C(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B16B59 & 1) == 0 )
  {
    sub_1BCAFF8(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_4B16B59 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v2;
  sub_1BCAF9C(BoxGachaResultEffectComponent___c_TypeInfo->static_fields);
}


void __fastcall BoxGachaResultEffectComponent___c___ctor(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___EndMessage_b__75_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoxGachaResultEffectComponent___c___MsgBefSkip_b__74_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}