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

  if ( (byte_49BF104 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_0__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49BF104 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v14 = (CommonUI_o *)Instance;
      v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
    sub_1B4D1EC(multiGachaButton, method);
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
    sub_1B4D1EC(resultWindow, v3);
  }
}


void __fastcall BoxGachaResultEffectComponent__ContinueExeGacha(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BoxGachaResultEffectComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct CommonMessageManager_o *messageManager; // x8
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__Action__o *afterAutoReset; // x21
  System_Action_o *v10; // x20

  v4 = this;
  if ( (byte_49BF103 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__, v5);
    this = (BoxGachaResultEffectComponent_o *)sub_1B4CF90(&StringLiteral_5686/*"EXE_GACHA"*/, v6);
    byte_49BF103 = 1;
  }
  messageManager = v4->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager->fields.callbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&messageManager->fields.callbackFunc, 0, v2, v3);
  endVoiceAction = v4->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
  if ( !v4->fields.isBoxItemEmpty || v4->fields.isLastLimitBox )
  {
    this = (BoxGachaResultEffectComponent_o *)v4->fields.targetFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5686/*"EXE_GACHA"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(this, method);
  }
  afterAutoReset = v4->fields.afterAutoReset;
  v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)v4, Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__, 0LL);
  if ( !afterAutoReset )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Action_o *, _QWORD))afterAutoReset->fields.m_target)(
    afterAutoReset->fields.original_method_info,
    0LL,
    v10,
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
    sub_1B4D1EC(v4, v5);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_49BF0FB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isAfter);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__, v5);
    sub_1B4CF90(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_5369/*"END_MSG"*/, v7);
    byte_49BF0FB = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5369/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1B4D1EC(messageManager, v8);
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
    _9__75_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__75_0, v14, Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = _9__75_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v16, v17);
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

  if ( (byte_49BF108 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent_ExecuteGacha__, v3);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_0__, v4);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_1__, v5);
    sub_1B4CF90(&StringLiteral_5686/*"EXE_GACHA"*/, v6);
    byte_49BF108 = 1;
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
        v8 = (_QWORD *)sub_1B4CFA8(Method_BoxGachaResultEffectComponent_ExecuteGacha__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5686/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
      sub_1B4D1EC(messageManager, v11);
    }
    *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
    v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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

  if ( (byte_49BF109 & 1) == 0 )
  {
    sub_1B4CF90(&BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___, v3);
    byte_49BF109 = 1;
  }
  BoxGachaPlayedVoice = EventRewardSaveData__GetBoxGachaPlayedVoice(this->fields.currentEventId, 0LL);
  if ( !System_String__IsNullOrEmpty(BoxGachaPlayedVoice, 0LL) )
    return (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        BoxGachaPlayedVoice,
                                                                        (const MethodInfo_2F6BC9C *)Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
  v5 = (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)sub_1B4D1DC(BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
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
    sub_1B4D1EC(gameObject, v4);
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
    sub_1B4D1EC(0LL, method);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49BF0FA & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__, v3);
    sub_1B4CF90(&BoxGachaResultEffectComponent___c_TypeInfo, v4);
    byte_49BF0FA = 1;
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
    _9__74_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__74_0, v8, Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__74_0 = _9__74_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__74_0, (int32_t)_9__74_0, v10, v11);
  }
  if ( !endPerformanceAction )
    sub_1B4D1EC(v5, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
    endPerformanceAction->fields.original_method_info,
    _9__74_0,
    *(_QWORD *)&endPerformanceAction->fields.extra_arg,
    this->fields.performanceSlideOutSpeed);
  BoxGachaResultEffectComponent__EndAction(this, 0, v12);
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_49BF107 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__, method);
    byte_49BF107 = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B4CFA8(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
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

  if ( (byte_49BF0FC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, endCallBack);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49BF0FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55978636(
    v10,
    compensationMsgIds,
    (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
  if ( !v9 )
    sub_1B4D1EC(v11, v12);
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

  if ( (byte_49BF0FE & 1) == 0 )
  {
    sub_1B4CF90(&FSUtility_TypeInfo, method);
    sub_1B4CF90(&int_TypeInfo, v3);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v5);
    sub_1B4CF90(&StringLiteral_18500/*"ef_boxitem_start"*/, v6);
    byte_49BF0FE = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v9, v10, v11);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v14, v15, v16);
  gameObject = System_String__Format_61134828(v8, v12, prizeName, v17, 0LL);
  if ( !currentResultLabel )
    goto LABEL_12;
  UILabel__set_text(currentResultLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  gameObject = (System_String_o *)BoxGachaResultEffectComponent__getEffect(
                                    (System_String_o *)StringLiteral_18500/*"ef_boxitem_start"*/,
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
    sub_1B4D1EC(gameObject, v19);
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
  const MethodInfo *v3; // x3

  this->fields.afterAutoReset = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.afterAutoReset, (int32_t)callback, (int32_t)method, v3);
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
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v16; // w8
  System_String_o **v17; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  char v20; // w2
  const MethodInfo *v21; // x3

  v9 = isLastLimitBox;
  if ( (byte_49BF105 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, isLimit);
    sub_1B4CF90(&string_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_2979/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v11);
    sub_1B4CF90(&StringLiteral_2976/*"BOX_GACHA_AUTO_RESET_INFO"*/, v12);
    byte_49BF105 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1B4CF34((CGThumbnailListItem_o *)p_resetBoxMsg, (int32_t)Empty, isLastLimitBox, (const MethodInfo *)prizeName);
  v16 = *((unsigned __int8 *)p_resetBoxMsg + 87);
  *((_BYTE *)p_resetBoxMsg + 88) = v9;
  if ( v16 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v17 = (System_String_o **)&StringLiteral_2979/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v17 = (System_String_o **)&StringLiteral_2976/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v18 = LocalizationManager__Get(*v17, 0LL);
    v19 = System_String__Format(v18, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = v19;
    sub_1B4CF34((CGThumbnailListItem_o *)p_resetBoxMsg, (int32_t)v19, v20, v21);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.prizeName, (int32_t)name, currentNum, (const MethodInfo *)name);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onEnableBackBtn, (int32_t)onEnableBackBtn, (int32_t)method, v3);
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

  if ( (byte_49BF0F5 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isEnble);
    sub_1B4CF90(&StringLiteral_409/*"#4C4C4C"*/, v5);
    byte_49BF0F5 = 1;
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
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_409/*"#4C4C4C"*/, &v14, 0LL);
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
      sub_1B4D1EC(multiGachaBgSprite, v7);
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
  if ( (byte_49BF0F4 & 1) == 0 )
  {
    sub_1B4CF90(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_1B4CF90(&EventRewardRootComponent_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_20260/*"img_txt_getpresent_"*/, v18);
    this = (BoxGachaResultEffectComponent_o *)sub_1B4CF90(&StringLiteral_20026/*"img_gachatxt_"*/, v19);
    byte_49BF0F4 = 1;
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
  v28 = System_String__Concat_61093468((System_String_o *)StringLiteral_20026/*"img_gachatxt_"*/, v27, 0LL);
  v29 = System_Int32__ToString((int32_t)&v33, 0LL);
  v30 = System_String__Concat_61093468((System_String_o *)StringLiteral_20260/*"img_txt_getpresent_"*/, v29, 0LL);
  multiGachaTimeSprite = v15->fields.multiGachaTimeSprite;
  v32 = v30;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v28, 0LL);
  EventRewardRootComponent__setRewardInfoImg(v15->fields.multiInfoTxtSprite, v32, 0LL);
  this = (BoxGachaResultEffectComponent_o *)v15->fields.itemResourceComponent;
  if ( !this )
LABEL_17:
    sub_1B4D1EC(this, *(_QWORD *)&enableNum);
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

  if ( (byte_49BF101 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool__bool___, method);
    byte_49BF101 = 1;
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
    (const MethodInfo_2E57EC0 *)Method_ActionExtensions_Call_bool__bool___);
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

  if ( (byte_49BF10F & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_Action__Action___, method);
    sub_1B4CF90(&System_Action_TypeInfo, v3);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__, v4);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__, v5);
    byte_49BF10F = 1;
  }
  afterAutoReset = (System_Action_T1__T2__o *)this->fields.afterAutoReset;
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__,
    0LL);
  v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__,
    0LL);
  ActionExtensions__Call_object__object_(
    afterAutoReset,
    (Il2CppObject *)v7,
    (Il2CppObject *)v8,
    (const MethodInfo_2E580D0 *)Method_ActionExtensions_Call_Action__Action___);
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
    sub_1B4D1EC(resourcesPanel, v9);
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
    sub_1B4D1EC(0LL, method);
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

  if ( (byte_49BF110 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v4);
    byte_49BF110 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v7, v8, v9);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v12, v13, v14);
  v16 = System_String__Format_61134828(v6, v10, prizeName, v15, 0LL);
  if ( !currentResultLabel )
    sub_1B4D1EC(v16, v17);
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

  if ( (byte_49BF10E & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v4);
    sub_1B4CF90(&StringLiteral_5686/*"EXE_GACHA"*/, v5);
    byte_49BF10E = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v8, v9, v10);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v13, v14, v15);
  targetFSM = System_String__Format_61134828(v7, v11, prizeName, v16, 0LL);
  if ( !currentResultLabel
    || (UILabel__set_text(currentResultLabel, targetFSM, 0LL),
        (targetFSM = (System_String_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B4D1EC(targetFSM, v18);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)targetFSM, (System_String_o *)StringLiteral_5686/*"EXE_GACHA"*/, 0LL);
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

  if ( (byte_49BF111 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5686/*"EXE_GACHA"*/, method);
    byte_49BF111 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B4D1EC(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5686/*"EXE_GACHA"*/, 0LL);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v22; // [xsp+20h] [xbp-70h] BYREF
  __int128 v23; // [xsp+30h] [xbp-60h] BYREF
  __int128 v24[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_49BF10C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__, v3);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__, v4);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v5);
    byte_49BF10C = 1;
  }
  *((_QWORD *)&v22 + 1) = 0LL;
  v23 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v7 = (UITweener_o *)resourcesPanel;
  UITweener__Play_47527184((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v7, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v8 = (UITweener_o *)resourcesPanel;
  UITweener__Play_47527184((UITweener_o *)resourcesPanel, 1, 0LL);
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
  *(_QWORD *)&v22 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1B4CF34((CGThumbnailListItem_o *)&v22, v22, v11, v12);
  BYTE8(v22) = this->fields.isShortCut;
  v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__,
    0LL);
  *(_QWORD *)&v23 = v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&v23, (int32_t)v13, v14, v15);
  v16 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__,
    0LL);
  *((_QWORD *)&v23 + 1) = v16;
  sub_1B4CF34((CGThumbnailListItem_o *)((char *)&v23 + 8), (int32_t)v16, v17, v18);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1B4D1EC(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v24[0] = v22;
  v24[1] = v23;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v24,
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  System_String_o *v21; // x0

  if ( (byte_49BF10D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_49BF10D = 1;
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
    v12 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
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
                     (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (resourcesPanel & 1) != 0 )
    return;
  v16 = this->fields.playedVoiceData;
  if ( !v16
    || (resourcesPanel = (__int64)v16->fields.playedVoices) == 0
    || (targetVoiceId = (Il2CppObject *)this->fields.targetVoiceId,
        v17 = *(_QWORD *)(resourcesPanel + 16),
        v18 = Method_System_Collections_Generic_List_string__Add__,
        ++*(_DWORD *)(resourcesPanel + 28),
        !v17) )
  {
LABEL_23:
    sub_1B4D1EC(resourcesPanel, targetVoiceId);
  }
  v19 = *(int *)(resourcesPanel + 24);
  if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)resourcesPanel,
      targetVoiceId,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * v19;
    *(_DWORD *)(resourcesPanel + 24) = v19 + 1;
    *(_QWORD *)(v20 + 32) = targetVoiceId;
    sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 32), (int32_t)targetVoiceId, v14, v15);
  }
  v21 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0LL);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v21, 0LL);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v15; // x8
  System_String_o *v16; // x0
  struct System_Int32_array *rareIdxList; // x8

  v2 = this;
  if ( (byte_49BF10A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, method);
    this = (BoxGachaResultEffectComponent_o *)sub_1B4CF90(
                                                &Method_System_Collections_Generic_List_string__Contains__,
                                                v3);
    byte_49BF10A = 1;
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
                                              (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v11 = v2->fields.playedVoiceData;
    if ( v11 )
    {
      this = (BoxGachaResultEffectComponent_o *)v11->fields.playedVoices;
      if ( this )
      {
        method = (const MethodInfo *)v2->fields.targetVoiceId;
        v12 = *(_QWORD *)&this->fields.m_CachedPtr;
        v13 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v12 )
        {
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = v12 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v15 + 32) = method;
            sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 32), (int32_t)method, v9, v10);
          }
          v16 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)v2->fields.playedVoiceData, 0LL);
          EventRewardSaveData__SetBoxGachaPlayedVoice(v2->fields.currentEventId, v16, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BF10B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22043/*"openResultListWindow"*/, method);
    byte_49BF10B = 1;
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, method);
  if ( this->fields.isLongPress )
    BoxGachaResultEffectComponent__openResultListWindow(this, v3);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22043/*"openResultListWindow"*/,
      this->fields.openResultWindowTime,
      0LL);
}


void __fastcall BoxGachaResultEffectComponent__clearResultList(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o **p_closeCallBack; // x19
  __int64 v6; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v8; // x2

  p_closeCallBack = &this->fields.closeCallBack;
  this->fields.closeCallBack = callBack;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeCallBack, (int32_t)callBack, (int32_t)method, v3);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, *p_closeCallBack, v8);
      return;
    }
LABEL_6:
    sub_1B4D1EC(resultWindow, v6);
  }
  ActionExtensions__Call(*p_closeCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BoxGachaResultEffectComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CommonMessageManager_o *messageManager; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct CommonMessageManager_o *v12; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  struct System_Int32_array *rareIdxList; // x8
  __int64 v25[4]; // [xsp+0h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_49BF102 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v5);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Contains__, v7);
    this = (BoxGachaResultEffectComponent_o *)sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49BF102 = 1;
  }
  memset(&v25[1], 0, 24);
  messageManager = v4->fields.messageManager;
  if ( !messageManager )
    goto LABEL_22;
  messageManager->fields.touchCallbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&messageManager->fields.touchCallbackFunc, 0, v2, v3);
  v12 = v4->fields.messageManager;
  if ( !v12 )
    goto LABEL_22;
  v12->fields.longPressCallbackFunc = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&v12->fields.longPressCallbackFunc, 0, v10, v11);
  this = (BoxGachaResultEffectComponent_o *)v4->fields.info;
  if ( !this )
    goto LABEL_22;
  v25[0] = (__int64)BoxGachaTalkInfo__getAfterVoiceId((BoxGachaTalkInfo_o *)this, v4->fields.randomTalkIdx, 0LL);
  sub_1B4CF34((CGThumbnailListItem_o *)v25, v25[0], v13, v14);
  v15 = v25[0];
  v4->fields.targetVoiceId = (struct System_String_o *)v25[0];
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.targetVoiceId, v15, v16, v17);
  if ( !v4->fields.isLongPress )
    goto LABEL_11;
  playedVoiceData = v4->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_22;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v4->fields.targetVoiceId,
                                              (const MethodInfo_358056C *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0
    || v4->fields.isChangeMaxDrawPreviousLastDraw
    || !v4->fields.isUserCanDrawByTicket
    || v4->fields.isLimitResetEmpty )
  {
LABEL_11:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    v21 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v23 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v4,
      Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__,
      0LL);
    if ( v21 )
    {
      CommonUI__maskFadein(v21, DEFAULT_FADE_TIME, v23, 0LL);
      return;
    }
LABEL_22:
    sub_1B4D1EC(this, method);
  }
  if ( !v4->fields.isChangeMaxDraw )
  {
    rareIdxList = v4->fields.rareIdxList;
    if ( !rareIdxList )
      goto LABEL_22;
    if ( !*(_QWORD *)&rareIdxList->max_length )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  BoxGachaResultEffectComponent__ContinueExeGacha(v4, method);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CommonMessageManager_o *v13; // x22
  System_Action_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v31; // [xsp+20h] [xbp-70h] BYREF
  __int128 v32; // [xsp+30h] [xbp-60h] BYREF
  __int128 v33[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_49BF0F9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__, v3);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__, v4);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__, v5);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__, v6);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v7);
    byte_49BF0F9 = 1;
  }
  *((_QWORD *)&v31 + 1) = 0LL;
  v32 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v9 = this->fields.messageManager;
  v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__,
    0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.touchCallbackFunc = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&v9->fields.touchCallbackFunc, (int32_t)v10, v11, v12);
  v13 = this->fields.messageManager;
  v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__,
    0LL);
  if ( !v13 )
    goto LABEL_11;
  v13->fields.longPressCallbackFunc = v14;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->fields.longPressCallbackFunc, (int32_t)v14, v15, v16);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_11;
  *(_QWORD *)&v31 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1B4CF34((CGThumbnailListItem_o *)&v31, v31, v17, v18);
  v19 = v31;
  this->fields.targetVoiceId = (struct System_String_o *)v31;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.targetVoiceId, v19, v20, v21);
  BYTE8(v31) = this->fields.isShortCut;
  v22 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__,
    0LL);
  *(_QWORD *)&v32 = v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&v32, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__,
    0LL);
  *((_QWORD *)&v32 + 1) = v25;
  sub_1B4CF34((CGThumbnailListItem_o *)((char *)&v32 + 8), (int32_t)v25, v26, v27);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_11:
    sub_1B4D1EC(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v33[0] = v31;
  v33[1] = v32;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v33,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_49BF0F7 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, data);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v6);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__, v7);
    sub_1B4CF90(&BoxGachaResultEffectComponent_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_49BF0F7 = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B4CF34(
      (CGThumbnailListItem_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__, 0LL);
    if ( !v12 )
      sub_1B4D1EC(v15, v16);
    CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
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
  Il2CppObject *Object_object__49169892; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_49BF0F8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, parentTr);
    sub_1B4CF90(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    byte_49BF0F8 = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49169892 = AssetData__GetObject_object__49169892(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49169892,
                                     (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_49B5361 )
  {
    effectAssetData = (AssetData_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49B5361 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_49B5366 )
  {
    effectAssetData = (AssetData_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_49B5366 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B4D1EC(effectAssetData, parentTr);
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
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Int32_array *rareIdxList; // x8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *PlayedVoiceData; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  bool v61; // w8
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_String_o *v64; // x22
  System_String_o *v65; // x0
  System_String_o *v66; // x23
  System_String_o *v67; // x0
  System_String_o *v68; // x21
  System_String_o *v69; // x24
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_String_o *v72; // x20
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x1

  if ( (byte_49BF0F3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v30);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B4CF90(&StringLiteral_43/*"\n"*/, v32);
    sub_1B4CF90(&StringLiteral_15691/*"[k]"*/, v33);
    sub_1B4CF90(&StringLiteral_25176/*"＠"*/, v34);
    sub_1B4CF90(&StringLiteral_11237/*"SCRIPT_ACTION_CODE_TALK"*/, v35);
    byte_49BF0F3 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.resultIdList,
    (int32_t)resultIds,
    (int32_t)talkInfo,
    (const MethodInfo *)resultIds);
  this->fields.rareIdxList = rareIdxs;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.rareIdxList, (int32_t)rareIdxs, v36, v37);
  this->fields.resultNoList = baseNos;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.resultNoList, (int32_t)baseNos, v38, v39);
  this->fields.standFigure = currentFigure;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.standFigure, (int32_t)currentFigure, v40, v41);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v44, v45);
  this->fields.endVoiceAction = endVoice;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endVoiceAction, (int32_t)endVoice, v47, v48);
  PlayedVoiceData = BoxGachaResultEffectComponent__GetPlayedVoiceData(this, v49);
  this->fields.playedVoiceData = PlayedVoiceData;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playedVoiceData, (int32_t)PlayedVoiceData, v51, v52);
  this->fields.compensationMsgIds = messageIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.compensationMsgIds, (int32_t)messageIdList, v53, v54);
  this->fields.info = talkInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.info, (int32_t)talkInfo, v55, v56);
  this->fields.isUnSkippable = unskippable;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.isUnSkippable, (int32_t)unskippable, v57, v58);
  v61 = isResourceMultiBtnLongPress || this->fields.isLongPress;
  this->fields.isLongPress = v61;
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.endPerformanceAction, (int32_t)endPerformanceAction, v59, v60);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_28;
    displayName = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0LL);
  }
  this->fields.currentSvtName = displayName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.currentSvtName, (int32_t)displayName, v62, v63);
  Instance = (DataManager_o *)System_String__Concat_61131716(
                                (System_String_o *)StringLiteral_25176/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v43 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v64 = (System_String_o *)Instance;
  v65 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v66 = System_String__Concat_61093468(v65, (System_String_o *)StringLiteral_15691/*"[k]"*/, 0LL);
  v67 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v68 = System_String__Concat_61093468(v67, (System_String_o *)StringLiteral_15691/*"[k]"*/, 0LL);
  v69 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11237/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v69 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v69, (System_String_o *)Instance, 0LL) )
    v66 = System_String__Concat_61093468(v64, v66, 0LL);
  this->fields.befMsg = v66;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.befMsg, (int32_t)v66, v70, v71);
  v72 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11237/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v72 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v72, (System_String_o *)Instance, 0LL) )
    v68 = System_String__Concat_61093468(v64, v68, 0LL);
  this->fields.aftMsg = v68;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.aftMsg, (int32_t)v68, v73, v74);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1B4D1EC(Instance, v43);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v75);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_49BF0F6 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent_endloadEffect__, v3);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B4CF90(&StringLiteral_5766/*"Effect/BoxGacha"*/, v5);
    byte_49BF0F6 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5766/*"Effect/BoxGacha"*/, v6, 1, 0LL);
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

  if ( (byte_49BF100 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12045/*"START_ITEM_GET_EFFECT"*/, isResultWindowLongPress);
    sub_1B4CF90(&StringLiteral_5364/*"END_DISP"*/, v5);
    byte_49BF100 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM,
        this->fields.isLongPress = isResultWindowLongPress,
        !resultWindowTouchBlock) )
  {
    sub_1B4D1EC(resultWindowTouchBlock, isResultWindowLongPress);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v7 = (System_String_o **)&StringLiteral_12045/*"START_ITEM_GET_EFFECT"*/;
  else
    v7 = (System_String_o **)&StringLiteral_5364/*"END_DISP"*/;
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

  if ( (byte_49BF0FF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_49BF0FF = 1;
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
  callback = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    callback,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_openResultCallback__,
    0LL);
  if ( !resultWindow )
LABEL_8:
    sub_1B4D1EC(resourcesPanel, method);
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

  if ( (byte_49BF106 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_49BF106 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1B4D1EC(0LL, v8);
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

  if ( (byte_49BF0FD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BoxGachaResultEffectComponent__showResultList_b__77_0__, v3);
    sub_1B4CF90(&StringLiteral_22043/*"openResultListWindow"*/, v4);
    byte_49BF0FD = 1;
  }
  resultWindow = (UnityEngine_Behaviour_o *)this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_8;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(resultWindow, 0LL) )
  {
    v7 = this->fields.resultWindow;
    v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__showResultList_b__77_0__, 0LL);
    if ( v7 )
    {
      ResultListWindow__Close(v7, v8, v9);
      return;
    }
LABEL_8:
    sub_1B4D1EC(resultWindow, method);
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, v6);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22043/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(
        BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BF112 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_49BF112 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.playedVoices = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BF113 & 1) == 0 )
  {
    sub_1B4CF90(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_49BF113 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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