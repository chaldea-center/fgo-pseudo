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

  if ( (byte_4BE06F0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE06F0 = 1;
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
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v5);
  if ( this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox )
  {
    if ( !this->fields.isDispAutoResetDlg )
    {
      this->fields.isDispAutoResetDlg = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v12 = (CommonUI_o *)Instance;
      v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_0__,
        0LL);
      if ( !v12 )
        goto LABEL_17;
      v14.fields.x = 0.0;
      v14.fields.y = -40.0;
      CommonUI__OpenFullScreenMaskDialog(v12, resetBoxMsg, -1, v13, v14, -1, 0, 0LL);
    }
    return;
  }
  multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
  this->fields.isEndAfterMsg = 0;
  if ( !multiGachaButton
    || (ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0LL),
        BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v6),
        (multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel) == 0LL) )
  {
LABEL_17:
    sub_1C22094(multiGachaButton, method);
  }
  multiGachaButton = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)multiGachaButton,
                                           0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v8 = (UnityEngine_GameObject_o *)multiGachaButton;
  if ( isUnSkippable )
  {
    multiGachaButton = (UICommonButton_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                             isUnSkippable->fields.original_method_info,
                                             *(_QWORD *)&isUnSkippable->fields.extra_arg);
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
  UnityEngine_GameObject__SetActive(v8, v9 & 1, 0LL);
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
    sub_1C22094(resultWindow, v3);
  }
}


void __fastcall BoxGachaResultEffectComponent__ContinueExeGacha(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BoxGachaResultEffectComponent_o *v8; // x19
  struct CommonMessageManager_o *messageManager; // x8
  struct System_Action_o *endVoiceAction; // x8
  struct System_Action_Action__Action__o *afterAutoReset; // x21
  System_Action_o *v12; // x20

  v8 = this;
  if ( (byte_4BE06EF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C21E38(&StringLiteral_5910/*"EXE_GACHA"*/);
    byte_4BE06EF = 1;
  }
  messageManager = v8->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager->fields.callbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&messageManager->fields.callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  endVoiceAction = v8->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
  if ( !v8->fields.isBoxItemEmpty || v8->fields.isLastLimitBox )
  {
    this = (BoxGachaResultEffectComponent_o *)v8->fields.targetFSM;
    if ( this )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5910/*"EXE_GACHA"*/, 0LL);
      return;
    }
LABEL_11:
    sub_1C22094(this, method);
  }
  afterAutoReset = v8->fields.afterAutoReset;
  v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v8, Method_BoxGachaResultEffectComponent__ContinueExeGacha_b__86_0__, 0LL);
  if ( !afterAutoReset )
    goto LABEL_11;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Action_o *, _QWORD))afterAutoReset->fields.m_target)(
    afterAutoReset->fields.original_method_info,
    0LL,
    v12,
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
    sub_1C22094(v4, v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endVoiceAction->fields.m_target)(
    endVoiceAction->fields.original_method_info,
    *(_QWORD *)&endVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__EndMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CommonMessageManager_o *messageManager; // x0
  const MethodInfo *v7; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v9; // x0
  System_Action_o *_9__75_0; // x20
  Il2CppObject *v11; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BE06E7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__);
    sub_1C21E38(&BoxGachaResultEffectComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_5593/*"END_MSG"*/);
    byte_4BE06E7 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5593/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1C22094(messageManager, v5);
  }
  v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__75_0 = v9->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__75_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__75_0, v11, Method_BoxGachaResultEffectComponent___c__EndMessage_b__75_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = _9__75_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
      (int64_t)_9__75_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__75_0, v7);
}


void __fastcall BoxGachaResultEffectComponent__ExecuteGacha(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BE06F4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent_ExecuteGacha__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_0__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_1__);
    sub_1C21E38(&StringLiteral_5910/*"EXE_GACHA"*/);
    byte_4BE06F4 = 1;
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
      v4 = Method_BoxGachaResultEffectComponent_ExecuteGacha__;
      if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_ExecuteGacha__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_BoxGachaResultEffectComponent_ExecuteGacha__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
      BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v6);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5910/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(
                v11,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_1__,
                0LL);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
                  endPerformanceAction->fields.original_method_info,
                  v11,
                  *(_QWORD *)&endPerformanceAction->fields.extra_arg,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
      sub_1C22094(messageManager, v7);
    }
    *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__ExecuteGacha_b__98_0__, 0LL);
    BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v12, v13);
  }
}


BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *__fastcall BoxGachaResultEffectComponent__GetPlayedVoiceData(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *BoxGachaPlayedVoice; // x19
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4BE06F5 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
    byte_4BE06F5 = 1;
  }
  BoxGachaPlayedVoice = EventRewardSaveData__GetBoxGachaPlayedVoice(this->fields.currentEventId, 0LL);
  if ( !System_String__IsNullOrEmpty(BoxGachaPlayedVoice, 0LL) )
    return (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        BoxGachaPlayedVoice,
                                                                        (const MethodInfo_30186B0 *)Method_UnityEngine_JsonUtility_FromJson_BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___);
  v4 = (BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *)sub_1C22084(BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_TypeInfo);
  BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(v4, v5);
  return v4;
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
    sub_1C22094(gameObject, v4);
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
    sub_1C22094(0LL, method);
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
  BoxGachaResultEffectComponent___c_c *v3; // x0
  struct System_Action_Action__float__o *endPerformanceAction; // x23
  System_Action_o *_9__74_0; // x20
  Il2CppObject *v6; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BE06E6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__);
    sub_1C21E38(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4BE06E6 = 1;
  }
  this->fields.isShortCut = 1;
  v3 = BoxGachaResultEffectComponent___c_TypeInfo;
  endPerformanceAction = this->fields.endPerformanceAction;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v3 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__74_0 = v3->static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__74_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__74_0, v6, Method_BoxGachaResultEffectComponent___c__MsgBefSkip_b__74_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__74_0 = _9__74_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__74_0, (int64_t)_9__74_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !endPerformanceAction )
    sub_1C22094(v3, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
    endPerformanceAction->fields.original_method_info,
    _9__74_0,
    *(_QWORD *)&endPerformanceAction->fields.extra_arg,
    this->fields.performanceSlideOutSpeed);
  BoxGachaResultEffectComponent__EndAction(this, 0, v14);
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BE06F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    byte_4BE06F3 = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
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
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BE06E8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE06E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v7 = (CommonUI_o *)Instance;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v8,
    compensationMsgIds,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  if ( !v7 )
    sub_1C22094(v9, v10);
  CommonUI__OpenCompensationItemDialog(v7, v8, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__PreOpenResultWindowAction(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x22
  Il2CppObject *prizeName; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Transform_o *v18; // x19
  float OffsetX; // s0
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE06EA & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_1C21E38(&StringLiteral_19135/*"ef_boxitem_start"*/);
    byte_4BE06EA = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v5, v6, v7);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v10, v11, v12);
  gameObject = System_String__Format_63129916(v4, v8, prizeName, v13, 0LL);
  if ( !currentResultLabel )
    goto LABEL_12;
  UILabel__set_text(currentResultLabel, gameObject, 0LL);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  gameObject = (System_String_o *)BoxGachaResultEffectComponent__getEffect(
                                    (System_String_o *)StringLiteral_19135/*"ef_boxitem_start"*/,
                                    transform,
                                    v17);
  if ( !gameObject )
    goto LABEL_12;
  v18 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v18 )
LABEL_12:
    sub_1C22094(gameObject, v15);
  v22.fields.x = OffsetX + 200.0;
  v22.fields.z = 0.0;
  v22.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v18, v22, 0LL);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.afterAutoReset = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.afterAutoReset,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetAutoResetMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isLimit,
        bool isLastLimitBox,
        System_String_o *prizeName,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool v12; // w23
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v16; // w8
  System_String_o **v17; // x8
  System_String_o *v18; // x0
  System_String_o *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v12 = isLastLimitBox;
  if ( (byte_4BE06F1 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_3132/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/);
    sub_1C21E38(&StringLiteral_3129/*"BOX_GACHA_AUTO_RESET_INFO"*/);
    byte_4BE06F1 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)p_resetBoxMsg,
    (int64_t)Empty,
    isLastLimitBox,
    (int32_t)prizeName,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v16 = *((unsigned __int8 *)p_resetBoxMsg + 87);
  *((_BYTE *)p_resetBoxMsg + 88) = v12;
  if ( v16 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v17 = (System_String_o **)&StringLiteral_3132/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v17 = (System_String_o **)&StringLiteral_3129/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v18 = LocalizationManager__Get(*v17, 0LL);
    v19 = System_String__Format(v18, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = v19;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_resetBoxMsg, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall BoxGachaResultEffectComponent__SetBoxItemIsEmptyFlag(
        BoxGachaResultEffectComponent_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  this->fields.isBoxItemEmpty = isEmpty;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetCurrentResultInfo(
        BoxGachaResultEffectComponent_o *this,
        int32_t boxNumber,
        int32_t currentNum,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.boxNo = boxNumber;
  this->fields.boxCurrentNum = currentNum;
  this->fields.prizeName = name;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.prizeName,
    (int64_t)name,
    *(int64_t *)&currentNum,
    (int32_t)name,
    (System_String_o *)method,
    v5,
    v6,
    v7);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onEnableBackBtn,
    (int64_t)onEnableBackBtn,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BoxGachaResultEffectComponent__SetGachaButtonStatus(
        BoxGachaResultEffectComponent_o *this,
        bool isEnble,
        const MethodInfo *method)
{
  UnityEngine_Object_o *multiGachaButton; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *multiGachaLongPressSkipObj; // x21
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BE06E1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_438/*"#4C4C4C"*/);
    byte_4BE06E1 = 1;
  }
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_438/*"#4C4C4C"*/, &v13, 0LL);
    a = 1.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    if ( !isEnble )
    {
      g = v13.fields.g;
      r = v13.fields.r;
      b = v13.fields.b;
      a = v13.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_21;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0LL);
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
      sub_1C22094(multiGachaBgSprite, v6);
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
  if ( (byte_4BE06E0 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaUtility_TypeInfo);
    sub_1C21E38(&EventRewardRootComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_20917/*"img_txt_getpresent_"*/);
    this = (BoxGachaResultEffectComponent_o *)sub_1C21E38(&StringLiteral_20685/*"img_gachatxt_"*/);
    byte_4BE06E0 = 1;
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
    0LL);
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
    0LL);
  v24 = System_Int32__ToString((int32_t)&v30, 0LL);
  v25 = System_String__Concat_63115476((System_String_o *)StringLiteral_20685/*"img_gachatxt_"*/, v24, 0LL);
  v26 = System_Int32__ToString((int32_t)&v30, 0LL);
  v27 = System_String__Concat_63115476((System_String_o *)StringLiteral_20917/*"img_txt_getpresent_"*/, v26, 0LL);
  multiGachaTimeSprite = v15->fields.multiGachaTimeSprite;
  v29 = v27;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v25, 0LL);
  EventRewardRootComponent__setRewardInfoImg(v15->fields.multiInfoTxtSprite, v29, 0LL);
  this = (BoxGachaResultEffectComponent_o *)v15->fields.itemResourceComponent;
  if ( !this )
LABEL_17:
    sub_1C22094(this, *(_QWORD *)&enableNum);
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

  if ( (byte_4BE06ED & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool__bool___);
    byte_4BE06ED = 1;
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
    (const MethodInfo_2F027F4 *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_0(
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

  if ( (byte_4BE06FB & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_Action__Action___);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__);
    byte_4BE06FB = 1;
  }
  afterAutoReset = (System_Action_T1__T2__o *)this->fields.afterAutoReset;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_1__,
    0LL);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__87_2__,
    0LL);
  ActionExtensions__Call_object__object_(
    afterAutoReset,
    (Il2CppObject *)v4,
    (Il2CppObject *)v5,
    (const MethodInfo_2F02954 *)Method_ActionExtensions_Call_Action__Action___);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v9 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v10 = 1;
    if ( resourcesPanel )
      goto LABEL_6;
LABEL_8:
    sub_1C22094(resourcesPanel, v6);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v10 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v9 )
    goto LABEL_8;
LABEL_6:
  UnityEngine_GameObject__SetActive(v9, v10 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1C22094(0LL, method);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__87_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x22
  Il2CppObject *prizeName; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BE06FC & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    byte_4BE06FC = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v5, v6, v7);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v10, v11, v12);
  v14 = System_String__Format_63129916(v4, v8, prizeName, v13, 0LL);
  if ( !currentResultLabel )
    sub_1C22094(v14, v15);
  UILabel__set_text(currentResultLabel, v14, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___ContinueExeGacha_b__86_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *currentResultLabel; // x20
  System_String_o *v4; // x21
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x22
  Il2CppObject *prizeName; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *targetFSM; // x0
  __int64 v15; // x1
  int32_t boxCurrentNum; // [xsp+8h] [xbp-38h] BYREF
  int32_t boxNo; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BE06FA & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    sub_1C21E38(&StringLiteral_5910/*"EXE_GACHA"*/);
    byte_4BE06FA = 1;
  }
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3146/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  boxNo = this->fields.boxNo;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxNo, v5, v6, v7);
  prizeName = (Il2CppObject *)this->fields.prizeName;
  boxCurrentNum = this->fields.boxCurrentNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &boxCurrentNum, v10, v11, v12);
  targetFSM = System_String__Format_63129916(v4, v8, prizeName, v13, 0LL);
  if ( !currentResultLabel
    || (UILabel__set_text(currentResultLabel, targetFSM, 0LL),
        (targetFSM = (System_String_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1C22094(targetFSM, v15);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)targetFSM, (System_String_o *)StringLiteral_5910/*"EXE_GACHA"*/, 0LL);
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

  if ( (byte_4BE06FD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5910/*"EXE_GACHA"*/);
    byte_4BE06FD = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5910/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__85_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v4; // x20
  UITweener_o *v5; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Action_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v31; // [xsp+20h] [xbp-70h] BYREF
  __int128 v32; // [xsp+30h] [xbp-60h] BYREF
  __int128 v33[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4BE06F8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4BE06F8 = 1;
  }
  *((_QWORD *)&v31 + 1) = 0LL;
  v32 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v4 = (UITweener_o *)resourcesPanel;
  UITweener__Play_48139976((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v4, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v4, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v5 = (UITweener_o *)resourcesPanel;
  UITweener__Play_48139976((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v5, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v5, 1, 0LL);
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
  *(_QWORD *)&v31 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1C21DDC((PartyOrganizationUtility_o *)&v31, v31, v8, v9, v10, v11, v12, v13);
  BYTE8(v31) = this->fields.isShortCut;
  v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_1__,
    0LL);
  *(_QWORD *)&v32 = v14;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_2__,
    0LL);
  *((_QWORD *)&v32 + 1) = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)&v32 + 8), (int64_t)v21, v22, v23, v24, v25, v26, v27);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1C22094(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v33[0] = v31;
  v33[1] = v32;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v33,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__85_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *targetVoiceId; // x1
  __int64 resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v6; // x20
  char v7; // w8
  struct System_Func_bool__o *v8; // x8
  System_Action_o *v9; // x20
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  System_String_o *v22; // x0

  if ( (byte_4BE06F9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BE06F9 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (__int64)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_23;
  resourcesPanel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v6 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( isUnSkippable )
  {
    resourcesPanel = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                       isUnSkippable->fields.original_method_info,
                       *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v7 = resourcesPanel ^ 1;
    if ( !v6 )
      goto LABEL_23;
  }
  else
  {
    v7 = 1;
    if ( !resourcesPanel )
      goto LABEL_23;
  }
  UnityEngine_GameObject__SetActive(v6, v7 & 1, 0LL);
  v8 = this->fields.isUnSkippable;
  if ( v8
    && (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
          v8->fields.original_method_info,
          *(_QWORD *)&v8->fields.extra_arg) & 1) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (__int64)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_23;
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v9, 0LL);
  playedVoiceData = this->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_23;
  resourcesPanel = (__int64)playedVoiceData->fields.playedVoices;
  if ( !resourcesPanel )
    goto LABEL_23;
  resourcesPanel = System_Collections_Generic_List_object___Contains(
                     (System_Collections_Generic_List_object__o *)resourcesPanel,
                     (Il2CppObject *)this->fields.targetVoiceId,
                     (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( (resourcesPanel & 1) != 0 )
    return;
  v17 = this->fields.playedVoiceData;
  if ( !v17
    || (resourcesPanel = (__int64)v17->fields.playedVoices) == 0
    || (targetVoiceId = (Il2CppObject *)this->fields.targetVoiceId,
        v18 = *(_QWORD *)(resourcesPanel + 16),
        v19 = Method_System_Collections_Generic_List_string__Add__,
        ++*(_DWORD *)(resourcesPanel + 28),
        !v18) )
  {
LABEL_23:
    sub_1C22094(resourcesPanel, targetVoiceId);
  }
  v20 = *(int *)(resourcesPanel + 24);
  if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)resourcesPanel,
      targetVoiceId,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = v18 + 8 * v20;
    *(_DWORD *)(resourcesPanel + 24) = v20 + 1;
    *(_QWORD *)(v21 + 32) = targetVoiceId;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)targetVoiceId, v11, v12, v13, v14, v15, v16);
  }
  v22 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.playedVoiceData, 0LL);
  EventRewardSaveData__SetBoxGachaPlayedVoice(this->fields.currentEventId, v22, 0LL);
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
  CommonMessageManager_o *messageManager; // x20
  struct System_Func_bool__o *isUnSkippable; // x8
  System_String_o *befMsg; // x21
  char v6; // w8
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v18; // x8
  System_String_o *v19; // x0
  struct System_Int32_array *rareIdxList; // x8

  v2 = this;
  if ( (byte_4BE06F6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BE06F6 = 1;
  }
  messageManager = v2->fields.messageManager;
  isUnSkippable = v2->fields.isUnSkippable;
  befMsg = v2->fields.befMsg;
  if ( isUnSkippable )
  {
    this = (BoxGachaResultEffectComponent_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
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
  CommonMessageManager__SetMessageBlock(messageManager, befMsg, v6 & 1, 0LL, 0LL);
  playedVoiceData = v2->fields.playedVoiceData;
  if ( !playedVoiceData )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)playedVoiceData->fields.playedVoices;
  if ( !this )
    goto LABEL_23;
  this = (BoxGachaResultEffectComponent_o *)System_Collections_Generic_List_object___Contains(
                                              (System_Collections_Generic_List_object__o *)this,
                                              (Il2CppObject *)v2->fields.targetVoiceId,
                                              (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v2->fields.playedVoiceData;
    if ( v14 )
    {
      this = (BoxGachaResultEffectComponent_o *)v14->fields.playedVoices;
      if ( this )
      {
        method = (const MethodInfo *)v2->fields.targetVoiceId;
        v15 = *(_QWORD *)&this->fields.m_CachedPtr;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v15 )
        {
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v15 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)method,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = v15 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v18 + 32) = method;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)method, v8, v9, v10, v11, v12, v13);
          }
          v19 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)v2->fields.playedVoiceData, 0LL);
          EventRewardSaveData__SetBoxGachaPlayedVoice(v2->fields.currentEventId, v19, 0LL);
          return;
        }
      }
    }
LABEL_23:
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BE06F7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22726/*"openResultListWindow"*/);
    byte_4BE06F7 = 1;
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, method);
  if ( this->fields.isLongPress )
    BoxGachaResultEffectComponent__openResultListWindow(this, v3);
  else
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22726/*"openResultListWindow"*/,
      this->fields.openResultWindowTime,
      0LL);
}


void __fastcall BoxGachaResultEffectComponent__clearResultList(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o **p_closeCallBack; // x19
  __int64 v10; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v12; // x2

  p_closeCallBack = &this->fields.closeCallBack;
  this->fields.closeCallBack = callBack;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeCallBack,
    (int64_t)callBack,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close(resultWindow, *p_closeCallBack, v12);
      return;
    }
LABEL_6:
    sub_1C22094(resultWindow, v10);
  }
  ActionExtensions__Call(*p_closeCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BoxGachaResultEffectComponent_o *v8; // x19
  struct CommonMessageManager_o *messageManager; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct CommonMessageManager_o *v16; // x8
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *playedVoiceData; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v32; // x8
  CommonUI_o *v33; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v35; // x21
  struct System_Int32_array *rareIdxList; // x8
  int64_t v37[4]; // [xsp+0h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_4BE06EE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    this = (BoxGachaResultEffectComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE06EE = 1;
  }
  memset(&v37[1], 0, 24);
  messageManager = v8->fields.messageManager;
  if ( !messageManager )
    goto LABEL_22;
  messageManager->fields.touchCallbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&messageManager->fields.touchCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = v8->fields.messageManager;
  if ( !v16 )
    goto LABEL_22;
  v16->fields.longPressCallbackFunc = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.longPressCallbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
  this = (BoxGachaResultEffectComponent_o *)v8->fields.info;
  if ( !this )
    goto LABEL_22;
  v37[0] = (int64_t)BoxGachaTalkInfo__getAfterVoiceId((BoxGachaTalkInfo_o *)this, v8->fields.randomTalkIdx, 0LL);
  sub_1C21DDC((PartyOrganizationUtility_o *)v37, v37[0], v17, v18, v19, v20, v21, v22);
  v23 = v37[0];
  v8->fields.targetVoiceId = (struct System_String_o *)v37[0];
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.targetVoiceId, v23, v24, v25, v26, v27, v28, v29);
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
                                              (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( ((unsigned __int8)this & 1) == 0
    || v8->fields.isChangeMaxDrawPreviousLastDraw
    || !v8->fields.isUserCanDrawByTicket
    || v8->fields.isLimitResetEmpty )
  {
LABEL_11:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v32 = AvalonSceneManager_TypeInfo;
    v33 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v32 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v32->static_fields->DEFAULT_FADE_TIME;
    v35 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v8,
      Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__85_0__,
      0LL);
    if ( v33 )
    {
      CommonUI__maskFadein(v33, DEFAULT_FADE_TIME, v35, 0LL);
      return;
    }
LABEL_22:
    sub_1C22094(this, method);
  }
  if ( !v8->fields.isChangeMaxDraw )
  {
    rareIdxList = v8->fields.rareIdxList;
    if ( !rareIdxList )
      goto LABEL_22;
    if ( !*(_QWORD *)&rareIdxList->max_length )
      goto LABEL_18;
    goto LABEL_11;
  }
LABEL_18:
  BoxGachaResultEffectComponent__ContinueExeGacha(v8, method);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v4; // x22
  System_Action_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct CommonMessageManager_o *v12; // x22
  System_Action_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Action_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Action_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v50; // [xsp+20h] [xbp-70h] BYREF
  __int128 v51; // [xsp+30h] [xbp-60h] BYREF
  __int128 v52[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4BE06E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4BE06E5 = 1;
  }
  *((_QWORD *)&v50 + 1) = 0LL;
  v51 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v4 = this->fields.messageManager;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_0__,
    0LL);
  if ( !v4 )
    goto LABEL_11;
  v4->fields.touchCallbackFunc = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v4->fields.touchCallbackFunc, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = this->fields.messageManager;
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_1__,
    0LL);
  if ( !v12 )
    goto LABEL_11;
  v12->fields.longPressCallbackFunc = v13;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v12->fields.longPressCallbackFunc,
    (int64_t)v13,
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
                      0LL);
  sub_1C21DDC((PartyOrganizationUtility_o *)&v50, v50, v20, v21, v22, v23, v24, v25);
  v26 = v50;
  this->fields.targetVoiceId = (struct System_String_o *)v50;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetVoiceId, v26, v27, v28, v29, v30, v31, v32);
  BYTE8(v50) = this->fields.isShortCut;
  v33 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_2__,
    0LL);
  *(_QWORD *)&v51 = v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v51, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__73_3__,
    0LL);
  *((_QWORD *)&v51 + 1) = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)((char *)&v51 + 8), (int64_t)v40, v41, v42, v43, v44, v45, v46);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_11:
    sub_1C22094(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v52[0] = v50;
  v52[1] = v51;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v52,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4BE06E3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__);
    sub_1C21E38(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE06E3 = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int64_t)data,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__71_0__, 0LL);
    if ( !v12 )
      sub_1C22094(v15, v16);
    CommonUI__maskFadein(v12, DEFAULT_FADE_TIME, v14, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__49880776; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4BE06E4 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE06E4 = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              effectAssetData,
                              name,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49880776,
                                     (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BD6BB1 )
  {
    effectAssetData = (AssetData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4BD6BB6 )
  {
    effectAssetData = (AssetData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C22094(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v7;
}


bool __fastcall BoxGachaResultEffectComponent__get_IsAutoReset(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox;
}


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
  System_String_o *Name; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Int32_array *rareIdxList; // x8
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x1
  struct BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *PlayedVoiceData; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  bool v94; // w8
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_String_o *v101; // x22
  System_String_o *v102; // x0
  System_String_o *v103; // x23
  System_String_o *v104; // x0
  System_String_o *v105; // x21
  System_String_o *v106; // x24
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  System_String_o *v113; // x20
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  const MethodInfo *v120; // x1

  Name = displayName;
  if ( (byte_4BE06DF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_16271/*"[k]"*/);
    sub_1C21E38(&StringLiteral_25919/*"＠"*/);
    sub_1C21E38(&StringLiteral_11687/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4BE06DF = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.resultIdList,
    (int64_t)resultIds,
    (int64_t)talkInfo,
    (int32_t)resultIds,
    (System_String_o *)rareIdxs,
    (BattleSetupInfo_o *)baseNos,
    (FollowerInfo_o *)displayName,
    (PartyListViewItem_o *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rareIdxList, (int64_t)rareIdxs, v29, v30, v31, v32, v33, v34);
  this->fields.resultNoList = baseNos;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resultNoList, (int64_t)baseNos, v35, v36, v37, v38, v39, v40);
  this->fields.standFigure = currentFigure;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.standFigure,
    (int64_t)currentFigure,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAction,
    (int64_t)playVoice,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.endVoiceAction = endVoice;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endVoiceAction,
    (int64_t)endVoice,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  PlayedVoiceData = BoxGachaResultEffectComponent__GetPlayedVoiceData(this, v62);
  this->fields.playedVoiceData = PlayedVoiceData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playedVoiceData,
    (int64_t)PlayedVoiceData,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.compensationMsgIds = messageIdList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.compensationMsgIds,
    (int64_t)messageIdList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.info = talkInfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.info, (int64_t)talkInfo, v76, v77, v78, v79, v80, v81);
  this->fields.isUnSkippable = unskippable;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.isUnSkippable,
    (int64_t)unskippable,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v94 = isResourceMultiBtnLongPress || this->fields.isLongPress;
  this->fields.isLongPress = v94;
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endPerformanceAction,
    (int64_t)endPerformanceAction,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  if ( System_String__IsNullOrEmpty(Name, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_28;
    Name = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0, 0LL);
  }
  this->fields.currentSvtName = Name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.currentSvtName, (int64_t)Name, v95, v96, v97, v98, v99, v100);
  Instance = (DataManager_o *)System_String__Concat_63126736(
                                (System_String_o *)StringLiteral_25919/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v48 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v101 = (System_String_o *)Instance;
  v102 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v103 = System_String__Concat_63115476(v102, (System_String_o *)StringLiteral_16271/*"[k]"*/, 0LL);
  v104 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v105 = System_String__Concat_63115476(v104, (System_String_o *)StringLiteral_16271/*"[k]"*/, 0LL);
  v106 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v106 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v106, (System_String_o *)Instance, 0LL) )
    v103 = System_String__Concat_63115476(v101, v103, 0LL);
  this->fields.befMsg = v103;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.befMsg, (int64_t)v103, v107, v108, v109, v110, v111, v112);
  v113 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v113 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v113, (System_String_o *)Instance, 0LL) )
    v105 = System_String__Concat_63115476(v101, v105, 0LL);
  this->fields.aftMsg = v105;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.aftMsg, (int64_t)v105, v114, v115, v116, v117, v118, v119);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1C22094(Instance, v48);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v120);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4BE06E2 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent_endloadEffect__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&StringLiteral_5990/*"Effect/BoxGacha"*/);
    byte_4BE06E2 = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5990/*"Effect/BoxGacha"*/, v3, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        bool isResultWindowLongPress,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v6; // x8

  if ( (byte_4BE06EC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12480/*"START_ITEM_GET_EFFECT"*/);
    sub_1C21E38(&StringLiteral_5588/*"END_DISP"*/);
    byte_4BE06EC = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM,
        this->fields.isLongPress = isResultWindowLongPress,
        !resultWindowTouchBlock) )
  {
    sub_1C22094(resultWindowTouchBlock, isResultWindowLongPress);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v6 = (System_String_o **)&StringLiteral_12480/*"START_ITEM_GET_EFFECT"*/;
  else
    v6 = (System_String_o **)&StringLiteral_5588/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v6, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
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

  if ( (byte_4BE06EB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent_openResultCallback__);
    byte_4BE06EB = 1;
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
  callback = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    callback,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_openResultCallback__,
    0LL);
  if ( !resultWindow )
LABEL_8:
    sub_1C22094(resourcesPanel, method);
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


void __fastcall BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x21
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0

  if ( (byte_4BE06F2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE06F2 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1C22094(0LL, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *resultWindow; // x0
  const MethodInfo *v4; // x1
  ResultListWindow_o *v5; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4BE06E9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BoxGachaResultEffectComponent__showResultList_b__77_0__);
    sub_1C21E38(&StringLiteral_22726/*"openResultListWindow"*/);
    byte_4BE06E9 = 1;
  }
  resultWindow = (UnityEngine_Behaviour_o *)this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_8;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(resultWindow, 0LL) )
  {
    v5 = this->fields.resultWindow;
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__showResultList_b__77_0__, 0LL);
    if ( v5 )
    {
      ResultListWindow__Close(v5, v6, v7);
      return;
    }
LABEL_8:
    sub_1C22094(resultWindow, method);
  }
  BoxGachaResultEffectComponent__PreOpenResultWindowAction(this, v4);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22726/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData___ctor(
        BoxGachaResultEffectComponent_BoxGachaPlayedVoiceData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE06FE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BE06FE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.playedVoices = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE06FF & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4BE06FF = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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