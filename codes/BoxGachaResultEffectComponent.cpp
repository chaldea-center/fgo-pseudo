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

  if ( (byte_41896FE & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19497/*"img_gachatxt_{0:D2}"*/, v8);
    byte_41896FE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19497/*"img_gachatxt_{0:D2}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19497/*"img_gachatxt_{0:D2}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  System_Action_o *v13; // x22
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4

  if ( (byte_41896F9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_41896F9 = 1;
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
    sub_B2C434(multiGachaButton, method);
  }
  if ( !this->fields.isDispAutoResetDlg )
  {
    this->fields.isDispAutoResetDlg = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    resetBoxMsg = this->fields.resetBoxMsg;
    v12 = (CommonUI_o *)Instance;
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__,
      0LL);
    if ( !v12 )
      goto LABEL_14;
    v14.fields.y = -40.0;
    v14.fields.x = 0.0;
    CommonUI__OpenFullScreenMaskDialog(v12, resetBoxMsg, -1, v13, v14, -1, 0, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__EndAction(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_Action_o *endVoiceAction; // x0

  BoxGachaResultEffectComponent__EndMessage(this, isAfter, method);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    sub_B2C434(0LL, v4);
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
  __int64 v8; // x1
  CommonMessageManager_o *messageManager; // x0
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

  if ( (byte_41896F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isAfter);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, v5);
    sub_B2C35C(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_5486/*"END_MSG"*/, v7);
    byte_41896F1 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5486/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B2C434(messageManager, v8);
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
    _9__62_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__62_0, v15, Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, 0LL);
    v16 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v16->__9__62_0 = _9__62_0;
    sub_B2C2F8(
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
    sub_B2C434(gameObject, v4);
  }
  return 0;
}


bool __fastcall BoxGachaResultEffectComponent__IsUnSkippable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Func_bool__o *isUnSkippable; // x0

  if ( (byte_41896F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool__Invoke__, method);
    byte_41896F7 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    LOBYTE(isUnSkippable) = System_Func_bool___Invoke(
                              isUnSkippable,
                              (const MethodInfo_26FE90C *)Method_System_Func_bool__Invoke__);
  return (char)isUnSkippable;
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_41896FC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41896FC = 1;
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
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  System_Action_o *v15; // x21

  if ( (byte_41896FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Action__float__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__, v4);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_5761/*"EXE_GACHA"*/, v7);
    byte_41896FD = 1;
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
          v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v12, v13);
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
    BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v8);
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
          if ( this->fields.isShortCut )
          {
            messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
            if ( messageManager )
            {
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5761/*"EXE_GACHA"*/, 0LL);
              return;
            }
          }
          else
          {
            endPerformanceAction = this->fields.endPerformanceAction;
            v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v15,
              (Il2CppObject *)this,
              Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__,
              0LL);
            if ( endPerformanceAction )
            {
              System_Action_string__float___Invoke(
                (System_Action_string__float__o *)endPerformanceAction,
                (System_String_o *)v15,
                this->fields.performanceSlideOutSpeed,
                (const MethodInfo_24CA190 *)Method_System_Action_Action__float__Invoke__);
              return;
            }
          }
        }
      }
    }
    sub_B2C434(messageManager, v9);
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
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_41896F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, endCallBack);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41896F2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v10,
    compensationMsgIds,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  if ( !v9 )
    sub_B2C434(v11, v12);
  CommonUI__OpenCompensationItemDialog(v9, v10, endCallBack, 0LL);
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
  sub_B2C2F8(
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

  if ( (byte_41896FA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, isLimit);
    sub_B2C35C(&string_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2608/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v13);
    sub_B2C35C(&StringLiteral_2605/*"BOX_GACHA_AUTO_RESET_INFO"*/, v14);
    byte_41896FA = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_B2C2F8(
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
      v19 = &StringLiteral_2608/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2605/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    }
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    v21 = (System_Int32_array **)System_String__Format(v20, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = (struct System_String_o *)v21;
    sub_B2C2F8((BattleServantConfConponent_o *)p_resetBoxMsg, v21, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_41896EB & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&boxNo);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2622/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v10);
    byte_41896EB = 1;
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
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2622/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v17 = boxNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = boxCurrentNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_44306596(
                                                    v13,
                                                    v14,
                                                    (Il2CppObject *)prizeName,
                                                    v15,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_9:
    sub_B2C434(currentResultInfo, *(_QWORD *)&boxNo);
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
  sub_B2C2F8(
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
  __int64 v7; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41896EC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnble);
    sub_B2C35C(&StringLiteral_352/*"#4C4C4C"*/, v5);
    byte_41896EC = 1;
  }
  *(_QWORD *)&v13.fields.r = 0LL;
  *(_QWORD *)&v13.fields.b = 0LL;
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
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_352/*"#4C4C4C"*/, &v13, 0LL);
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
      g = v13.fields.g;
      r = v13.fields.r;
      b = v13.fields.b;
      a = v13.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite
      || (v19.fields.r = r,
          v19.fields.g = g,
          v19.fields.b = b,
          v19.fields.a = a,
          UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0LL),
          (multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite) == 0LL) )
    {
LABEL_19:
      sub_B2C434(multiGachaBgSprite, v7);
    }
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v20, 0LL);
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
  if ( (byte_41896EA & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_19703/*"img_txt_getpresent_"*/, v11);
    sub_B2C35C(&StringLiteral_19496/*"img_gachatxt_"*/, v12);
    byte_41896EA = 1;
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
  v21 = System_String__Concat_44305532((System_String_o *)StringLiteral_19496/*"img_gachatxt_"*/, v20, 0LL);
  v22 = System_Int32__ToString((int32_t)&v26, 0LL);
  v23 = System_String__Concat_44305532((System_String_o *)StringLiteral_19703/*"img_txt_getpresent_"*/, v22, 0LL);
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
    sub_B2C434(enableBoxGachaInfo, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)enableBoxGachaInfo, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *onEnableBackBtn; // x20
  bool v4; // w21
  bool IsUnSkippable; // w0

  if ( (byte_41896F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool__bool___, method);
    byte_41896F6 = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v4 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  IsUnSkippable = BoxGachaResultEffectComponent__IsUnSkippable(this, method);
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v4,
    !IsUnSkippable,
    (const MethodInfo_2D65B94 *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Delegate_o *afterAutoReset; // x20
  System_Action_o *v5; // x21
  System_Delegate_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  struct UIPanel_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v16; // x1
  BoxGachaResultEffectComponent_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_4189702 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__, v3);
    byte_4189702 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__,
    0LL);
  v6 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v5, 0LL);
  if ( v6 && (System_Action_c *)v6->klass != System_Action_TypeInfo )
  {
    v17 = (BoxGachaResultEffectComponent_o *)sub_B2C728(v6);
    BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_1(v17, v18);
  }
  else
  {
    this->fields.afterAutoReset = (struct System_Action_o *)v6;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.afterAutoReset,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
    resourcesPanel = this->fields.resourcesPanel;
    if ( !resourcesPanel
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0LL),
          resourcesPanel = (struct UIPanel_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v16),
          !gameObject) )
    {
      sub_B2C434(resourcesPanel, v13);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4189703 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5761/*"EXE_GACHA"*/, method);
    byte_4189703 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5761/*"EXE_GACHA"*/, 0LL);
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
  const MethodInfo *v10; // x2
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v31; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v32; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_4189700 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__, v4);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v6);
    byte_4189700 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_15;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_15;
  v8 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45592872((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v8, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_15;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_15;
  v9 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45592872((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v9, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_15;
  CommonMessageManager__Init((CommonMessageManager_o *)resourcesPanel, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.multiGachaButton;
  if ( !resourcesPanel )
    goto LABEL_15;
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)resourcesPanel, 0LL) )
  {
    resourcesPanel = (UnityEngine_Component_o *)this->fields.multiGachaButton;
    if ( !resourcesPanel )
      goto LABEL_15;
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)resourcesPanel, 0, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.info;
  if ( !resourcesPanel )
    goto LABEL_15;
  v31.fields.targetVoiceId = BoxGachaTalkInfo__getAfterVoiceId(
                               (BoxGachaTalkInfo_o *)resourcesPanel,
                               this->fields.randomTalkIdx,
                               v10);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v31,
    (System_Int32_array **)v31.fields.targetVoiceId,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v31.fields.skipPerformance = this->fields.isShortCut;
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__,
    0LL);
  v31.fields.callBackStartPlay = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v31.fields.callBackStartPlay,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__,
    0LL);
  v31.fields.callBackEndPlay = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v31.fields.callBackEndPlay,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !resourcesPanel )
LABEL_15:
    sub_B2C434(resourcesPanel, method);
  v32 = v31;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)resourcesPanel,
    &v32,
    (const MethodInfo_24C33E4 *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4189701 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v3);
    byte_4189701 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v7);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resourcesPanel & 1) == 0, 0LL);
  v9 = 0LL;
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, v8) )
  {
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_9:
    sub_B2C434(resourcesPanel, v4);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v9, 0LL);
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
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  BoxGachaResultEffectComponent___c_c *v8; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_3; // x21
  Il2CppObject *v11; // x22
  struct BoxGachaResultEffectComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_41896FF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Action__float__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, v4);
    sub_B2C35C(&BoxGachaResultEffectComponent___c_TypeInfo, v5);
    byte_41896FF = 1;
  }
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, method) )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v8 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
      v8 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__61_3 = static_fields->__9__61_3;
    if ( !_9__61_3 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__61_3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(_9__61_3, v11, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, 0LL);
      v12 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      v12->__9__61_3 = _9__61_3;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v12->__9__61_3,
        (System_Int32_array **)_9__61_3,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !endPerformanceAction )
      sub_B2C434(v8, v6);
    System_Action_string__float___Invoke(
      (System_Action_string__float__o *)endPerformanceAction,
      (System_String_o *)_9__61_3,
      this->fields.performanceSlideOutSpeed,
      (const MethodInfo_24CA190 *)Method_System_Action_Action__float__Invoke__);
    BoxGachaResultEffectComponent__EndAction(this, 0, v19);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__61_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonMessageManager_o *messageManager; // x19
  System_String_o *befMsg; // x20
  _BOOL8 IsUnSkippable; // x0
  __int64 v5; // x1

  messageManager = this->fields.messageManager;
  befMsg = this->fields.befMsg;
  IsUnSkippable = BoxGachaResultEffectComponent__IsUnSkippable(this, method);
  if ( !messageManager )
    sub_B2C434(IsUnSkippable, v5);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( this->fields.isShortCut )
    BoxGachaResultEffectComponent__EndAction(this, 0, v6);
  else
    BoxGachaResultEffectComponent__dispMsgBefResultList(this, v5);
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
  __int64 v10; // x1
  ResultListWindow_o *resultWindow; // x0

  this->fields.closeCallBack = callBack;
  p_closeCallBack = &this->fields.closeCallBack;
  sub_B2C2F8(
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
      ResultListWindow__Close_32892568(resultWindow, *p_closeCallBack, 0LL);
      return;
    }
LABEL_6:
    sub_B2C434(resultWindow, v10);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_41896F8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v9);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, v10);
    this = (BoxGachaResultEffectComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_41896F8 = 1;
  }
  klass = v8[2].klass;
  if ( !klass )
    goto LABEL_9;
  klass->vtable[19].method = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&klass->vtable[19].method, 0LL, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, v8, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(this, method);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v16, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Action_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v38; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v39; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_41896F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__, v4);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__, v5);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__, v6);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v7);
    byte_41896F0 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                messageManager,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v9 = this->fields.messageManager;
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__,
    0LL);
  if ( !v9 )
    goto LABEL_10;
  v9->fields.touchCallbackFunc = v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.touchCallbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  v38.fields.targetVoiceId = BoxGachaTalkInfo__getBeforeVoiceId(
                               (BoxGachaTalkInfo_o *)messageManager,
                               this->fields.randomTalkIdx,
                               v17);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v38,
    (System_Int32_array **)v38.fields.targetVoiceId,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v38.fields.skipPerformance = this->fields.isShortCut;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__,
    0LL);
  v38.fields.callBackStartPlay = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v38.fields.callBackStartPlay,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__,
    0LL);
  v38.fields.callBackEndPlay = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v38.fields.callBackEndPlay,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  messageManager = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !messageManager )
LABEL_10:
    sub_B2C434(messageManager, method);
  v39 = v38;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)messageManager,
    &v39,
    (const MethodInfo_24C33E4 *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_41896EE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v10);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, v11);
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_41896EE = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->effectAssetData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v17 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
    v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, 0LL);
    if ( !Instance )
      sub_B2C434(v20, v21);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v19, 0LL);
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

  if ( (byte_41896EF & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, parentTr);
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41896EF = 1;
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
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_B2C434(effectAssetData, parentTr);
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
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Int32_array *rareIdxList; // x8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct System_String_o *Name; // x1
  struct System_String_o **p_currentSvtName; // x0
  const MethodInfo *v99; // x2
  System_String_o *v100; // x22
  System_String_o *v101; // x0
  System_String_o *v102; // x23
  const MethodInfo *v103; // x2
  System_String_o *v104; // x0
  System_String_o *v105; // x21
  const MethodInfo *v106; // x2
  System_String_o *v107; // x24
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  const MethodInfo *v114; // x2
  System_String_o *v115; // x20
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  const MethodInfo *v122; // x1

  if ( (byte_41896E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27);
    sub_B2C35C(&LocalizationManager_TypeInfo, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v30);
    sub_B2C35C(&StringLiteral_15799/*"[k]"*/, v31);
    sub_B2C35C(&StringLiteral_23966/*"＠"*/, v32);
    sub_B2C35C(&StringLiteral_11597/*"SCRIPT_ACTION_CODE_TALK"*/, v33);
    byte_41896E9 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultIdList,
    (System_Int32_array **)resultIds,
    (System_String_array **)talkInfo,
    (System_String_array **)resultIds,
    (System_Boolean_array **)rareIdxs,
    (System_Int32_array **)baseNos,
    (System_Int32_array *)displayName,
    (System_Int32_array *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rareIdxList,
    (System_Int32_array **)rareIdxs,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.resultNoList = baseNos;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultNoList,
    (System_Int32_array **)baseNos,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.standFigure = currentFigure;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.endVoiceAction = endVoice;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endVoiceAction,
    (System_Int32_array **)endVoice,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.compensationMsgIds = messageIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.compensationMsgIds,
    (System_Int32_array **)messageIdList,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.info = talkInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)talkInfo,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.isUnSkippable = unskippable;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isUnSkippable,
    (System_Int32_array **)unskippable,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endPerformanceAction,
    (System_Int32_array **)endPerformanceAction,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_currentSvtName,
    (System_Int32_array **)Name,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  Instance = (DataManager_o *)System_String__Concat_44307816(
                                (System_String_o *)StringLiteral_23966/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                0LL);
  v53 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v100 = (System_String_o *)Instance;
  v101 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, v99);
  v102 = System_String__Concat_44305532(v101, (System_String_o *)StringLiteral_15799/*"[k]"*/, 0LL);
  v104 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v103);
  v105 = System_String__Concat_44305532(v104, (System_String_o *)StringLiteral_15799/*"[k]"*/, 0LL);
  v107 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, v106);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v107 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v107, (System_String_o *)Instance, 0LL) )
    v102 = System_String__Concat_44305532(v100, v102, 0LL);
  this->fields.befMsg = v102;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.befMsg,
    (System_Int32_array **)v102,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v115 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v114);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v115 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v115, (System_String_o *)Instance, 0LL) )
    v105 = System_String__Concat_44305532(v100, v105, 0LL);
  this->fields.aftMsg = v105;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aftMsg,
    (System_Int32_array **)v105,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B2C434(Instance, v53);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v122);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_41896ED & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent_endloadEffect__, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5833/*"Effect/BoxGacha"*/, v5);
    byte_41896ED = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5833/*"Effect/BoxGacha"*/, v6, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  __int64 *v5; // x8

  if ( (byte_41896F5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12349/*"START_ITEM_GET_EFFECT"*/, method);
    sub_B2C35C(&StringLiteral_5481/*"END_DISP"*/, v3);
    byte_41896F5 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B2C434(resultWindowTouchBlock, method);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v5 = &StringLiteral_12349/*"START_ITEM_GET_EFFECT"*/;
  else
    v5 = &StringLiteral_5481/*"END_DISP"*/;
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
  System_Action_o *v12; // x26

  if ( (byte_41896F4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_41896F4 = 1;
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
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_B2C434(resultWindowTouchBlock, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v12,
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
  __int64 v8; // x1
  UIStandFigureR_o *v9; // x0

  if ( (byte_41896FB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_41896FB = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_B2C434(0LL, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0LL);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *v12; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41896F3 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B2C35C(&FSUtility_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v4);
    sub_B2C35C(&StringLiteral_18167/*"ef_boxitem_start"*/, v5);
    sub_B2C35C(&StringLiteral_21306/*"openResultListWindow"*/, v6);
    byte_41896F3 = 1;
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
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18167/*"ef_boxitem_start"*/, transform, v9);
  if ( !gameObject )
    goto LABEL_13;
  v11 = gameObject;
  v12 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v12 )
LABEL_13:
    sub_B2C434(gameObject, v8);
  v14.fields.z = 0.0;
  v14.fields.x = OffsetX + 200.0;
  v14.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v12, v14, 0LL);
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    v11,
    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21306/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184EAB & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_4184EAB = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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