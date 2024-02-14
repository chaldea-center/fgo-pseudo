void __fastcall BoxGachaResultEffectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421636D & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaResultEffectComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19559/*"img_gachatxt_{0:D2}"*/, v8);
    byte_421636D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19559/*"img_gachatxt_{0:D2}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19559/*"img_gachatxt_{0:D2}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


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
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  if ( (byte_4216368 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4216368 = 1;
  }
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_14;
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, 1, 0LL);
  multiGachaButton = (UICommonButton_o *)this->fields.endVoiceAction;
  if ( !multiGachaButton )
    goto LABEL_14;
  System_Action__Invoke((System_Action_o *)multiGachaButton, 0LL);
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v6);
  if ( !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox )
  {
    multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
    this->fields.isEndAfterMsg = 0;
    if ( multiGachaButton )
    {
      ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0LL);
      BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v7);
      multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel;
      if ( multiGachaButton )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)multiGachaButton, 0LL);
        multiGachaButton = (UICommonButton_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v9);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)multiGachaButton & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(multiGachaButton);
  }
  if ( !this->fields.isDispAutoResetDlg )
  {
    this->fields.isDispAutoResetDlg = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    resetBoxMsg = this->fields.resetBoxMsg;
    v12 = (CommonUI_o *)Instance;
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__,
      0LL);
    if ( !v12 )
      goto LABEL_14;
    v16.fields.y = -40.0;
    v16.fields.x = 0.0;
    CommonUI__OpenFullScreenMaskDialog(v12, resetBoxMsg, -1, v15, v16, -1, 0, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__EndAction(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  System_Action_o *endVoiceAction; // x0

  BoxGachaResultEffectComponent__EndMessage(this, isAfter, method);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    sub_B0D97C(0LL);
  System_Action__Invoke(endVoiceAction, 0LL);
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
  CommonMessageManager_o *messageManager; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v12; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x20
  Il2CppObject *v15; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4216360 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isAfter);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, v5);
    sub_B0D8A4(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5502/*"END_MSG"*/, v7);
    byte_4216360 = 1;
  }
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, method);
  messageManager = this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_21;
  CommonMessageManager__Quit(messageManager, 0LL);
  if ( !isAfter )
    goto LABEL_8;
  messageManager = (CommonMessageManager_o *)this->fields.resourcesPanel;
  if ( !messageManager )
    goto LABEL_21;
  messageManager = (CommonMessageManager_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)messageManager,
                                               0LL);
  if ( !messageManager )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageManager, 0, 0LL);
  if ( this->fields.isOpenCompensationDlg
    || (compensationMsgIds = this->fields.compensationMsgIds) == 0LL
    || !*(_QWORD *)&compensationMsgIds->max_length )
  {
LABEL_8:
    messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
    if ( messageManager )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5502/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B0D97C(messageManager);
  }
  v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__62_0 = static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(_9__62_0, v15, Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, 0LL);
    v16 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v16->__9__62_0 = _9__62_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__62_0, v10);
}


bool __fastcall BoxGachaResultEffectComponent__IsResultPanelActive(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *gameObject; // x0

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
    sub_B0D97C(gameObject);
  }
  return 0;
}


bool __fastcall BoxGachaResultEffectComponent__IsUnSkippable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Func_bool__o *isUnSkippable; // x0

  if ( (byte_4216366 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool__Invoke__, method);
    byte_4216366 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    LOBYTE(isUnSkippable) = System_Func_bool___Invoke(
                              isUnSkippable,
                              (const MethodInfo_26056C0 *)Method_System_Func_bool__Invoke__);
  return (char)isUnSkippable;
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_421636B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421636B = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__OnClickMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x2
  CommonMessageManager_o *messageManager; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  System_Action_o *v18; // x21

  if ( (byte_421636C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Action__float__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__, v4);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_5777/*"EXE_GACHA"*/, v7);
    byte_421636C = 1;
  }
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, method) && !this->fields.isEndAfterMsg )
  {
    if ( !this->fields.isOpenCompensationDlg )
    {
      compensationMsgIds = this->fields.compensationMsgIds;
      if ( compensationMsgIds )
      {
        if ( *(_QWORD *)&compensationMsgIds->max_length )
        {
          *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
          v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v15, v16);
          return;
        }
      }
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v10);
    messageManager = this->fields.messageManager;
    if ( messageManager )
    {
      CommonMessageManager__Quit(messageManager, 0LL);
      messageManager = (CommonMessageManager_o *)this->fields.endVoiceAction;
      if ( messageManager )
      {
        System_Action__Invoke((System_Action_o *)messageManager, 0LL);
        messageManager = (CommonMessageManager_o *)this->fields.resultWindow;
        if ( messageManager )
        {
          ResultListWindow__Close((ResultListWindow_o *)messageManager, 0LL);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0LL);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5777/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
              System_Action___ctor(
                v18,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__,
                0LL);
              if ( endPerformanceAction )
              {
                System_Action_string__float___Invoke(
                  (System_Action_string__float__o *)endPerformanceAction,
                  (System_String_o *)v18,
                  this->fields.performanceSlideOutSpeed,
                  (const MethodInfo_247D0F4 *)Method_System_Action_Action__float__Invoke__);
                return;
              }
            }
          }
        }
      }
    }
    sub_B0D97C(messageManager);
  }
}


void __fastcall BoxGachaResultEffectComponent__OpenCompensationItemDialog(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4216361 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, endCallBack);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4216361 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v10, v11);
  System_Collections_Generic_List_int____ctor_50000796(
    v12,
    compensationMsgIds,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v9 )
    sub_B0D97C(v13);
  CommonUI__OpenCompensationItemDialog(v9, v12, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.afterAutoReset = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.afterAutoReset,
    (System_Int32_array **)callback,
    (System_String_array **)method,
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v18; // w8
  __int64 *v19; // x8
  System_String_o *v20; // x0
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4216369 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isLimit);
    sub_B0D8A4(&string_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_2619/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v13);
    sub_B0D8A4(&StringLiteral_2616/*"BOX_GACHA_AUTO_RESET_INFO"*/, v14);
    byte_4216369 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_resetBoxMsg,
    (System_Int32_array **)Empty,
    (System_String_array **)isLastLimitBox,
    (System_String_array **)prizeName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v18 = *((unsigned __int8 *)p_resetBoxMsg + 83);
  *((_BYTE *)p_resetBoxMsg + 84) = isLastLimitBox;
  if ( v18 && !isLastLimitBox )
  {
    if ( isLimit )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2619/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2616/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    }
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    v21 = (System_Int32_array **)System_String__Format(v20, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = (struct System_String_o *)v21;
    sub_B0D840((BattleServantConfConponent_o *)p_resetBoxMsg, v21, v22, v23, v24, v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetBoxItemIsEmptyFlag(
        BoxGachaResultEffectComponent_o *this,
        bool isEmpty,
        const MethodInfo *method)
{
  this->fields.isBoxItemEmpty = isEmpty;
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, (const MethodInfo *)isEmpty);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetCurrentResultInfo(
        BoxGachaResultEffectComponent_o *this,
        int32_t boxNo,
        int32_t boxCurrentNum,
        System_String_o *prizeName,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *currentResultInfo; // x0
  UILabel_o *currentResultLabel; // x22
  System_String_o *v13; // x23
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421635A & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&boxNo);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2633/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v10);
    byte_421635A = 1;
  }
  currentResultInfo = this->fields.currentResultInfo;
  if ( !currentResultInfo )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(currentResultInfo, 1, 0LL);
  currentResultLabel = this->fields.currentResultLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2633/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v17 = boxNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = boxCurrentNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_43850968(
                                                    v13,
                                                    v14,
                                                    (Il2CppObject *)prizeName,
                                                    v15,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_9:
    sub_B0D97C(currentResultInfo);
  UILabel__set_text(currentResultLabel, (System_String_o *)currentResultInfo, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onEnableBackBtn,
    (System_Int32_array **)onEnableBackBtn,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetGachaButtonStatus(
        BoxGachaResultEffectComponent_o *this,
        bool isEnble,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *multiGachaButton; // x21
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421635B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isEnble);
    sub_B0D8A4(&StringLiteral_357/*"#4C4C4C"*/, v5);
    byte_421635B = 1;
  }
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_357/*"#4C4C4C"*/, &v12, 0LL);
    if ( isEnble )
    {
      white = UnityEngine_Color__get_white(0LL);
      r = white.fields.r;
      g = white.fields.g;
      b = white.fields.b;
      a = white.fields.a;
    }
    else
    {
      g = v12.fields.g;
      r = v12.fields.r;
      b = v12.fields.b;
      a = v12.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite
      || (v18.fields.r = r,
          v18.fields.g = g,
          v18.fields.b = b,
          v18.fields.a = a,
          UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL),
          (multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite) == 0LL) )
    {
LABEL_19:
      sub_B0D97C(multiGachaBgSprite);
    }
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__SetUserGachaResource(
        BoxGachaResultEffectComponent_o *this,
        int32_t enableNum,
        int32_t payValue,
        int32_t payTargetId,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v8; // w22
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BoxGachaItemComponent_o *enableBoxGachaInfo; // x0
  bool v14; // w8
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x4
  UISprite_o *multiGacha2DigitNumSprite; // x21
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v25; // x22
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  v8 = enableNum;
  v26 = eventId;
  if ( (byte_4216359 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_19765/*"img_txt_getpresent_"*/, v11);
    sub_B0D8A4(&StringLiteral_19558/*"img_gachatxt_"*/, v12);
    byte_4216359 = 1;
  }
  enableBoxGachaInfo = this->fields.enableBoxGachaInfo;
  v14 = v8 > 0;
  if ( !v8 )
    v8 = 1;
  this->fields.isCanDraw = v14;
  if ( !enableBoxGachaInfo )
    goto LABEL_14;
  BoxGachaItemComponent__Set(enableBoxGachaInfo, payTargetId, v8 * payValue, *(const MethodInfo **)&payTargetId);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(this, this->fields.isCanDraw, v15);
  multiGacha1DigitNumSprite = this->fields.multiGacha1DigitNumSprite;
  multiGacha2DigitNumSprite = this->fields.multiGacha2DigitNumSprite;
  multiGacha3DigitNumSprite = this->fields.multiGacha3DigitNumSprite;
  if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  }
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v8,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    v16);
  v20 = System_Int32__ToString((int32_t)&v26, 0LL);
  v21 = System_String__Concat_43849904((System_String_o *)StringLiteral_19558/*"img_gachatxt_"*/, v20, 0LL);
  v22 = System_Int32__ToString((int32_t)&v26, 0LL);
  v23 = System_String__Concat_43849904((System_String_o *)StringLiteral_19765/*"img_txt_getpresent_"*/, v22, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v25 = v23;
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v21, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v25, 0LL);
  enableBoxGachaInfo = (BoxGachaItemComponent_o *)this->fields.itemResourceComponent;
  if ( !enableBoxGachaInfo )
LABEL_14:
    sub_B0D97C(enableBoxGachaInfo);
  EventItemComponent__Set((EventItemComponent_o *)enableBoxGachaInfo, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *onEnableBackBtn; // x20
  bool v4; // w21
  bool IsUnSkippable; // w0

  if ( (byte_4216365 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool__bool___, method);
    byte_4216365 = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v4 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  IsUnSkippable = BoxGachaResultEffectComponent__IsUnSkippable(this, method);
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v4,
    !IsUnSkippable,
    (const MethodInfo_2D9671C *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Delegate_o *afterAutoReset; // x20
  System_Action_o *v6; // x21
  System_Delegate_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIPanel_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v16; // x1
  BoxGachaResultEffectComponent_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4216371 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__, v4);
    byte_4216371 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__,
    0LL);
  v7 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v6, 0LL);
  if ( v7 && (System_Action_c *)v7->klass != System_Action_TypeInfo )
  {
    v17 = (BoxGachaResultEffectComponent_o *)sub_B0DC70(v7);
    BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_1(v17, v18);
  }
  else
  {
    this->fields.afterAutoReset = (struct System_Action_o *)v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.afterAutoReset,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
    resourcesPanel = this->fields.resourcesPanel;
    if ( !resourcesPanel
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0LL),
          resourcesPanel = (struct UIPanel_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v16),
          !gameObject) )
    {
      sub_B0D97C(resourcesPanel);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resourcesPanel & 1) == 0, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_B0D97C(0LL);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___OnClickMultiGachaButton_b__80_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isEndAfterMsg )
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  this->fields.isActiveCompensationDlg = 0;
}


void __fastcall BoxGachaResultEffectComponent___OnClickMultiGachaButton_b__80_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4216372 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5777/*"EXE_GACHA"*/, method);
    byte_4216372 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5777/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v8; // x20
  UITweener_o *v9; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  const MethodInfo *v12; // x2
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v37; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v38; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_421636F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__, v4);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v6);
    byte_421636F = 1;
  }
  memset(&v37, 0, sizeof(v37));
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v8 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45237584((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v8, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v9 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45237584((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v9, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 1, 0LL);
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
  v37.fields.targetVoiceId = BoxGachaTalkInfo__getAfterVoiceId(
                               (BoxGachaTalkInfo_o *)resourcesPanel,
                               this->fields.randomTalkIdx,
                               v12);
  sub_B0D840(
    (BattleServantConfConponent_o *)&v37,
    (System_Int32_array **)v37.fields.targetVoiceId,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v37.fields.skipPerformance = this->fields.isShortCut;
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__,
    0LL);
  v37.fields.callBackStartPlay = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v37.fields.callBackStartPlay,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__,
    0LL);
  v37.fields.callBackEndPlay = v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v37.fields.callBackEndPlay,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !resourcesPanel )
LABEL_12:
    sub_B0D97C(resourcesPanel);
  v38 = v37;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)resourcesPanel,
    &v38,
    (const MethodInfo_2476348 *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_4216370 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v3);
    byte_4216370 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v6);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resourcesPanel & 1) == 0, 0LL);
  v10 = 0LL;
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, v7) )
  {
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_9:
    sub_B0D97C(resourcesPanel);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v10, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isActiveCompensationDlg; // w8

  isActiveCompensationDlg = this->fields.isActiveCompensationDlg;
  this->fields.isEndAfterMsg = 1;
  if ( !isActiveCompensationDlg )
    BoxGachaResultEffectComponent__CheckAutoResetEnable(this, method);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__61_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  BoxGachaResultEffectComponent___c_c *v9; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_3; // x21
  Il2CppObject *v12; // x22
  struct BoxGachaResultEffectComponent___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_421636E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Action__float__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, v4);
    sub_B0D8A4(&BoxGachaResultEffectComponent___c_TypeInfo, v5);
    byte_421636E = 1;
  }
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, method) )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v9 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
      v9 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__61_3 = static_fields->__9__61_3;
    if ( !_9__61_3 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__61_3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
      System_Action___ctor(_9__61_3, v12, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, 0LL);
      v13 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      v13->__9__61_3 = _9__61_3;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v13->__9__61_3,
        (System_Int32_array **)_9__61_3,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !endPerformanceAction )
      sub_B0D97C(v9);
    System_Action_string__float___Invoke(
      (System_Action_string__float__o *)endPerformanceAction,
      (System_String_o *)_9__61_3,
      this->fields.performanceSlideOutSpeed,
      (const MethodInfo_247D0F4 *)Method_System_Action_Action__float__Invoke__);
    BoxGachaResultEffectComponent__EndAction(this, 0, v20);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__61_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonMessageManager_o *messageManager; // x19
  System_String_o *befMsg; // x20
  _BOOL8 IsUnSkippable; // x0

  messageManager = this->fields.messageManager;
  befMsg = this->fields.befMsg;
  IsUnSkippable = BoxGachaResultEffectComponent__IsUnSkippable(this, method);
  if ( !messageManager )
    sub_B0D97C(IsUnSkippable);
  CommonMessageManager__SetMessageBlock(messageManager, befMsg, !IsUnSkippable, 0LL, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__61_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void __fastcall BoxGachaResultEffectComponent___endloadEffect_b__59_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( this->fields.isShortCut )
    BoxGachaResultEffectComponent__EndAction(this, 0, v5);
  else
    BoxGachaResultEffectComponent__dispMsgBefResultList(this, v4);
}


void __fastcall BoxGachaResultEffectComponent__clearResultList(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o **p_closeCallBack; // x19
  ResultListWindow_o *resultWindow; // x0

  this->fields.closeCallBack = callBack;
  p_closeCallBack = &this->fields.closeCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  resultWindow = (ResultListWindow_o *)*(p_closeCallBack - 26);
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close_32121200(resultWindow, *p_closeCallBack, 0LL);
      return;
    }
LABEL_6:
    sub_B0D97C(resultWindow);
  }
  ActionExtensions__Call(*p_closeCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Il2CppObject *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppClass *klass; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4216367 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v9);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, v10);
    this = (BoxGachaResultEffectComponent_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4216367 = 1;
  }
  klass = v8[2].klass;
  if ( !klass )
    goto LABEL_9;
  klass->vtable[19].method = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&klass->vtable[19].method, 0LL, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v18, v8, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(this);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v18, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  System_Action_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v44; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v45; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_421635F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__, v4);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__, v5);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__, v6);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v7);
    byte_421635F = 1;
  }
  memset(&v44, 0, sizeof(v44));
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                messageManager,
                                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v9 = this->fields.messageManager;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__,
    0LL);
  if ( !v9 )
    goto LABEL_10;
  v9->fields.touchCallbackFunc = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v9->fields.touchCallbackFunc,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  v44.fields.targetVoiceId = BoxGachaTalkInfo__getBeforeVoiceId(
                               (BoxGachaTalkInfo_o *)messageManager,
                               this->fields.randomTalkIdx,
                               v19);
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44,
    (System_Int32_array **)v44.fields.targetVoiceId,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v44.fields.skipPerformance = this->fields.isShortCut;
  v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__,
    0LL);
  v44.fields.callBackStartPlay = v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44.fields.callBackStartPlay,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__,
    0LL);
  v44.fields.callBackEndPlay = v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v44.fields.callBackEndPlay,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  messageManager = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !messageManager )
LABEL_10:
    sub_B0D97C(messageManager);
  v45 = v44;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)messageManager,
    &v45,
    (const MethodInfo_2476348 *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BoxGachaResultEffectComponent_c *v14; // x0
  struct BoxGachaResultEffectComponent_StaticFields *static_fields; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v19; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  __int64 v22; // x0

  if ( (byte_421635D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v10);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, v11);
    sub_B0D8A4(&BoxGachaResultEffectComponent_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_421635D = 1;
  }
  if ( data )
  {
    v14 = BoxGachaResultEffectComponent_TypeInfo;
    if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
      v14 = BoxGachaResultEffectComponent_TypeInfo;
    }
    static_fields = v14->static_fields;
    static_fields->effectAssetData = data;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->effectAssetData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v19 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
    v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, 0LL);
    if ( !Instance )
      sub_B0D97C(v22);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v21, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BoxGachaResultEffectComponent_c *v8; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *transform; // x19
  int v13; // s0
  UnityEngine_Transform_o *v16; // x19
  int v17; // s0

  if ( (byte_421635E & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, parentTr);
    sub_B0D8A4(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421635E = 1;
  }
  v8 = BoxGachaResultEffectComponent_TypeInfo;
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
    v8 = BoxGachaResultEffectComponent_TypeInfo;
  }
  effectAssetData = v8->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v11 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL),
        v16 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL),
        !v16) )
  {
LABEL_15:
    sub_B0D97C(effectAssetData);
  }
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  return v11;
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
        const MethodInfo *method)
{
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  DataManager_o *Instance; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct System_Int32_array *rareIdxList; // x8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_String_o *Name; // x1
  struct System_String_o **p_currentSvtName; // x0
  const MethodInfo *v98; // x2
  System_String_o *v99; // x22
  System_String_o *v100; // x0
  System_String_o *v101; // x23
  const MethodInfo *v102; // x2
  System_String_o *v103; // x0
  System_String_o *v104; // x21
  const MethodInfo *v105; // x2
  System_String_o *v106; // x24
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  const MethodInfo *v113; // x2
  System_String_o *v114; // x20
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  const MethodInfo *v121; // x1

  if ( (byte_4216358 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v30);
    sub_B0D8A4(&StringLiteral_15846/*"[k]"*/, v31);
    sub_B0D8A4(&StringLiteral_24048/*"＠"*/, v32);
    sub_B0D8A4(&StringLiteral_11624/*"SCRIPT_ACTION_CODE_TALK"*/, v33);
    byte_4216358 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultIdList,
    (System_Int32_array **)resultIds,
    (System_String_array **)talkInfo,
    (System_String_array **)resultIds,
    (System_Boolean_array **)rareIdxs,
    (System_Int32_array **)baseNos,
    (System_Int32_array *)displayName,
    (System_Int32_array *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rareIdxList,
    (System_Int32_array **)rareIdxs,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.resultNoList = baseNos;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resultNoList,
    (System_Int32_array **)baseNos,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.standFigure = currentFigure;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.standFigure,
    (System_Int32_array **)currentFigure,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.normalFace = face;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  this->fields.isShortCut = isShortCut;
  rareIdxList = this->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_28;
  if ( *(_QWORD *)&rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.playVoiceAction = playVoice;
  this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.endVoiceAction = endVoice;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endVoiceAction,
    (System_Int32_array **)endVoice,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.compensationMsgIds = messageIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.compensationMsgIds,
    (System_Int32_array **)messageIdList,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this->fields.info = talkInfo;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)talkInfo,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.isUnSkippable = unskippable;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isUnSkippable,
    (System_Int32_array **)unskippable,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endPerformanceAction,
    (System_Int32_array **)endPerformanceAction,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_28;
    Name = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
    this->fields.currentSvtName = Name;
    p_currentSvtName = &this->fields.currentSvtName;
  }
  else
  {
    this->fields.currentSvtName = displayName;
    p_currentSvtName = &this->fields.currentSvtName;
    Name = displayName;
  }
  sub_B0D840(
    (BattleServantConfConponent_o *)p_currentSvtName,
    (System_Int32_array **)Name,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  Instance = (DataManager_o *)System_String__Concat_43852188(
                                (System_String_o *)StringLiteral_24048/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                0LL);
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v99 = (System_String_o *)Instance;
  v100 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, v98);
  v101 = System_String__Concat_43849904(v100, (System_String_o *)StringLiteral_15846/*"[k]"*/, 0LL);
  v103 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v102);
  v104 = System_String__Concat_43849904(v103, (System_String_o *)StringLiteral_15846/*"[k]"*/, 0LL);
  v106 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, v105);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11624/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v106 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v106, (System_String_o *)Instance, 0LL) )
    v101 = System_String__Concat_43849904(v99, v101, 0LL);
  this->fields.befMsg = v101;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.befMsg,
    (System_Int32_array **)v101,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v114 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v113);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11624/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v114 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v114, (System_String_o *)Instance, 0LL) )
    v104 = System_String__Concat_43849904(v99, v104, 0LL);
  this->fields.aftMsg = v104;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aftMsg,
    (System_Int32_array **)v104,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B0D97C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v121);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetLoader_LoadEndDataHandler_o *v7; // x20

  if ( (byte_421635C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent_endloadEffect__, v4);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5849/*"Effect/BoxGacha"*/, v6);
    byte_421635C = 1;
  }
  v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
  AssetLoader_LoadEndDataHandler___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5849/*"Effect/BoxGacha"*/, v7, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  __int64 *v5; // x8

  if ( (byte_4216364 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12387/*"START_ITEM_GET_EFFECT"*/, method);
    sub_B0D8A4(&StringLiteral_5497/*"END_DISP"*/, v3);
    byte_4216364 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B0D97C(resultWindowTouchBlock);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v5 = &StringLiteral_12387/*"START_ITEM_GET_EFFECT"*/;
  else
    v5 = &StringLiteral_5497/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, (System_String_o *)*v5, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  System_Int32_array *resultNoList; // x23
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  _BOOL4 isDischargeGetEffectItem; // w27
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x26

  if ( (byte_4216363 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_4216363 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock )
    goto LABEL_6;
  UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 1, 0LL);
  resultWindow = this->fields.resultWindow;
  resultIdList = this->fields.resultIdList;
  rareIdxList = this->fields.rareIdxList;
  resultNoList = this->fields.resultNoList;
  currentBaseId = this->fields.currentBaseId;
  currentEventId = this->fields.currentEventId;
  isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_B0D97C(resultWindowTouchBlock);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v14,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x21
  UIStandFigureR_o *v8; // x0

  if ( (byte_421636A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_421636A = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v8 = this->fields.standFigure;
    if ( !v8 )
      sub_B0D97C(0LL);
    UIStandFigureR__SetFace(v8, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216362 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B0D8A4(&FSUtility_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v4);
    sub_B0D8A4(&StringLiteral_18223/*"ef_boxitem_start"*/, v5);
    sub_B0D8A4(&StringLiteral_21375/*"openResultListWindow"*/, v6);
    byte_4216362 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18223/*"ef_boxitem_start"*/, transform, v8);
  if ( !gameObject )
    goto LABEL_13;
  v10 = gameObject;
  v11 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v11 )
LABEL_13:
    sub_B0D97C(gameObject);
  v13.fields.z = 0.0;
  v13.fields.x = OffsetX + 200.0;
  v13.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v11, v13, 0LL);
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    v10,
    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21375/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211DDA & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_4211DDA = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BoxGachaResultEffectComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall BoxGachaResultEffectComponent___c___ctor(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___EndMessage_b__62_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoxGachaResultEffectComponent___c___dispMsgBefResultList_b__61_3(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}