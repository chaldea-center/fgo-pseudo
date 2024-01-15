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

  if ( (byte_40FB492 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19423/*"img_gachatxt_{0:D2}"*/, v8);
    byte_40FB492 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19423/*"img_gachatxt_{0:D2}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19423/*"img_gachatxt_{0:D2}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoxGachaResultEffectComponent___ctor(BoxGachaResultEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.openResultWindowTime = 0.1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__CallOpenResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onEnableBackBtn, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__CheckAutoResetEnable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UICommonButton_o *multiGachaButton; // x0
  System_Action_o *endVoiceAction; // x0
  const MethodInfo *v7; // x2
  ScriptMessageCommonManager_o *messageManager; // x0
  WebViewManager_o *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x22
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  if ( (byte_40FB48D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__68_0__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FB48D = 1;
  }
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_12;
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, 1, 0LL);
  endVoiceAction = this->fields.endVoiceAction;
  if ( !endVoiceAction )
    goto LABEL_12;
  System_Action__Invoke(endVoiceAction, 0LL);
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v7);
  if ( !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox )
  {
    messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
    this->fields.isEndAfterMsg = 0;
    if ( messageManager )
    {
      ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !this->fields.isDispAutoResetDlg )
  {
    this->fields.isDispAutoResetDlg = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    resetBoxMsg = this->fields.resetBoxMsg;
    v11 = (CommonUI_o *)Instance;
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__68_0__,
      0LL);
    if ( !v11 )
      goto LABEL_12;
    v17.fields.y = -40.0;
    v17.fields.x = 0.0;
    CommonUI__OpenFullScreenMaskDialog(v11, resetBoxMsg, -1, v16, v17, -1, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Component_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  PlayMakerFSM_o *targetFSM; // x0
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v17; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__59_0; // x20
  Il2CppObject *v20; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FB487 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isAfter);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__59_0__, v5);
    sub_B16FFC(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_5471/*"END_MSG"*/, v7);
    byte_40FB487 = 1;
  }
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, method);
  messageManager = this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_21;
  CommonMessageManager__Quit(messageManager, 0LL);
  if ( !isAfter )
    goto LABEL_8;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( this->fields.isOpenCompensationDlg
    || (compensationMsgIds = this->fields.compensationMsgIds) == 0LL
    || !*(_QWORD *)&compensationMsgIds->max_length )
  {
LABEL_8:
    targetFSM = this->fields.targetFSM;
    if ( targetFSM )
    {
      PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5471/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
  }
  v17 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v17 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__59_0 = static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
    System_Action___ctor(_9__59_0, v20, Method_BoxGachaResultEffectComponent___c__EndMessage_b__59_0__, 0LL);
    v21 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v21->__9__59_0 = _9__59_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__59_0, v12);
}


bool __fastcall BoxGachaResultEffectComponent__IsResultPanelActive(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  ScriptMessageCommonManager_o *messageManager; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
    if ( messageManager )
      return ScriptMessageCommonManager__IsRootActive(messageManager, 0LL);
LABEL_6:
    sub_B170D4();
  }
  return 0;
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FB490 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB490 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CommonMessageManager_o *messageManager; // x0
  System_Action_o *endVoiceAction; // x0
  ResultListWindow_o *resultWindow; // x0
  PlayMakerFSM_o *targetFSM; // x0
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_40FB491 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__76_0__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5744/*"EXE_GACHA"*/, v8);
    byte_40FB491 = 1;
  }
  if ( !this->fields.isEndAfterMsg )
  {
    if ( !this->fields.isOpenCompensationDlg
      && (compensationMsgIds = this->fields.compensationMsgIds) != 0LL
      && *(_QWORD *)&compensationMsgIds->max_length )
    {
      *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(
        v15,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__76_0__,
        0LL);
      BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v15, v16);
    }
    else
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(8, 0LL);
      BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v9);
      messageManager = this->fields.messageManager;
      if ( !messageManager
        || (CommonMessageManager__Quit(messageManager, 0LL), (endVoiceAction = this->fields.endVoiceAction) == 0LL)
        || (System_Action__Invoke(endVoiceAction, 0LL), (resultWindow = this->fields.resultWindow) == 0LL)
        || (ResultListWindow__Close(resultWindow, 0LL), (targetFSM = this->fields.targetFSM) == 0LL) )
      {
        sub_B170D4();
      }
      PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5744/*"EXE_GACHA"*/, 0LL);
    }
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_int__o *v14; // x21

  if ( (byte_40FB488 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, endCallBack);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB488 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
  System_Collections_Generic_List_int____ctor_49346956(
    v14,
    compensationMsgIds,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v9 )
    sub_B170D4();
  CommonUI__OpenCompensationItemDialog(v9, v14, endCallBack, 0LL);
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
  sub_B16F98(
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

  if ( (byte_40FB48E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isLimit);
    sub_B16FFC(&string_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2597/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v13);
    sub_B16FFC(&StringLiteral_2594/*"BOX_GACHA_AUTO_RESET_INFO"*/, v14);
    byte_40FB48E = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_resetBoxMsg,
    (System_Int32_array **)Empty,
    (System_String_array **)isLastLimitBox,
    (System_String_array **)prizeName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v18 = *((unsigned __int8 *)p_resetBoxMsg + 75);
  *((_BYTE *)p_resetBoxMsg + 76) = isLastLimitBox;
  if ( v18 && !isLastLimitBox )
  {
    if ( isLimit )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2597/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2594/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    }
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    v21 = (System_Int32_array **)System_String__Format(v20, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = (struct System_String_o *)v21;
    sub_B16F98((BattleServantConfConponent_o *)p_resetBoxMsg, v21, v22, v23, v24, v25, v26, v27);
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
  System_String_o *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB481 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&boxNo);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2611/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v10);
    byte_40FB481 = 1;
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
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2611/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v18 = boxNo;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = boxCurrentNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = System_String__Format_43744796(v13, v14, (Il2CppObject *)prizeName, v15, 0LL);
  if ( !currentResultLabel )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(currentResultLabel, v16, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *onEnableBackBtn,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_B16F98(
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
  UnityEngine_Behaviour_o *v7; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UIWidget_o *multiGachaBgSprite; // x0
  UIWidget_o *multiGachaTimeSprite; // x0
  UIWidget_o *multiInfoTxtSprite; // x0
  UIWidget_o *multiGacha1DigitNumSprite; // x0
  UIWidget_o *multiGacha2DigitNumSprite; // x0
  UIWidget_o *multiGacha3DigitNumSprite; // x0
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB482 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnble);
    sub_B16FFC(&StringLiteral_352/*"#4C4C4C"*/, v5);
    byte_40FB482 = 1;
  }
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !v7 )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled(v7, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_352/*"#4C4C4C"*/, &v18, 0LL);
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
      g = v18.fields.g;
      r = v18.fields.r;
      b = v18.fields.b;
      a = v18.fields.a;
    }
    multiGachaBgSprite = (UIWidget_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(multiGachaBgSprite, v20, 0LL);
    multiGachaTimeSprite = (UIWidget_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaTimeSprite )
      goto LABEL_19;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(multiGachaTimeSprite, v21, 0LL);
    multiInfoTxtSprite = (UIWidget_o *)this->fields.multiInfoTxtSprite;
    if ( !multiInfoTxtSprite )
      goto LABEL_19;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(multiInfoTxtSprite, v22, 0LL);
    multiGacha1DigitNumSprite = (UIWidget_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGacha1DigitNumSprite )
      goto LABEL_19;
    v23.fields.r = r;
    v23.fields.g = g;
    v23.fields.b = b;
    v23.fields.a = a;
    UIWidget__set_color(multiGacha1DigitNumSprite, v23, 0LL);
    multiGacha2DigitNumSprite = (UIWidget_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGacha2DigitNumSprite
      || (v24.fields.r = r,
          v24.fields.g = g,
          v24.fields.b = b,
          v24.fields.a = a,
          UIWidget__set_color(multiGacha2DigitNumSprite, v24, 0LL),
          (multiGacha3DigitNumSprite = (UIWidget_o *)this->fields.multiGacha3DigitNumSprite) == 0LL) )
    {
LABEL_19:
      sub_B170D4();
    }
    v25.fields.r = r;
    v25.fields.g = g;
    v25.fields.b = b;
    v25.fields.a = a;
    UIWidget__set_color(multiGacha3DigitNumSprite, v25, 0LL);
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
  EventItemComponent_o *itemResourceComponent; // x0
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v8 = enableNum;
  v27 = eventId;
  if ( (byte_40FB480 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_19629/*"img_txt_getpresent_"*/, v11);
    sub_B16FFC(&StringLiteral_19422/*"img_gachatxt_"*/, v12);
    byte_40FB480 = 1;
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
  v20 = System_Int32__ToString((int32_t)&v27, 0LL);
  v21 = System_String__Concat_43743732((System_String_o *)StringLiteral_19422/*"img_gachatxt_"*/, v20, 0LL);
  v22 = System_Int32__ToString((int32_t)&v27, 0LL);
  v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_19629/*"img_txt_getpresent_"*/, v22, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v25 = v23;
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v21, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v25, 0LL);
  itemResourceComponent = this->fields.itemResourceComponent;
  if ( !itemResourceComponent )
LABEL_14:
    sub_B170D4();
  EventItemComponent__Set(itemResourceComponent, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__68_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Delegate_o *afterAutoReset; // x20
  System_Action_o *v8; // x21
  System_Delegate_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BoxGachaResultEffectComponent_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_40FB494 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__68_1__, v6);
    byte_40FB494 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__68_1__,
    0LL);
  v9 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v8, 0LL);
  if ( v9 && (System_Action_c *)v9->klass != System_Action_TypeInfo )
  {
    v16 = (BoxGachaResultEffectComponent_o *)sub_B173C8(v9);
    BoxGachaResultEffectComponent___CheckAutoResetEnable_b__68_1(v16, v17);
  }
  else
  {
    this->fields.afterAutoReset = (struct System_Action_o *)v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.afterAutoReset,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
    ActionExtensions__Call(this->fields.onEnableBackBtn, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__68_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_B170D4();
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___OnClickMultiGachaButton_b__76_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isEndAfterMsg )
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  this->fields.isActiveCompensationDlg = 0;
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__67_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UITweener_o *v9; // x20
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *messageManager; // x0
  WebViewObject_o *v13; // x0
  UITweener_o *v14; // x20
  CommonMessageManager_o *v15; // x0
  UnityEngine_Behaviour_o *multiGachaButton; // x0
  const MethodInfo *v17; // x2
  UICommonButton_o *v18; // x0
  BoxGachaTalkInfo_o *info; // x0
  struct System_Action_string__Action__o *playVoiceAction; // x20
  System_String_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x22
  CommonMessageManager_o *v27; // x20
  System_String_o *aftMsg; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x22

  if ( (byte_40FB493 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_1__, v4);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_2__, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v6);
    byte_40FB493 = 1;
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_18;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resourcesPanel,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !Component_WebViewObject )
    goto LABEL_18;
  v9 = (UITweener_o *)Component_WebViewObject;
  UITweener__Play_45022212((UITweener_o *)Component_WebViewObject, 1, 0LL);
  UITweener__ResetToBeginning(v9, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, 1, 0LL);
  v10 = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !v10 )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_18;
  v13 = UnityEngine_Component__GetComponent_WebViewObject_(
          messageManager,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !v13 )
    goto LABEL_18;
  v14 = (UITweener_o *)v13;
  UITweener__Play_45022212((UITweener_o *)v13, 1, 0LL);
  UITweener__ResetToBeginning(v14, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 1, 0LL);
  v15 = this->fields.messageManager;
  if ( !v15 )
    goto LABEL_18;
  CommonMessageManager__Init(v15, 0LL);
  multiGachaButton = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_18;
  if ( !UnityEngine_Behaviour__get_enabled(multiGachaButton, 0LL) )
  {
    v18 = this->fields.multiGachaButton;
    if ( !v18 )
      goto LABEL_18;
    UICommonButton__SetButtonEnableWithCollider(v18, 0, 0LL);
  }
  info = this->fields.info;
  if ( !info )
    goto LABEL_18;
  playVoiceAction = this->fields.playVoiceAction;
  v21 = BoxGachaTalkInfo__getAfterVoiceId(info, this->fields.randomTalkIdx, v17);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_1__,
    0LL);
  if ( !playVoiceAction
    || (System_Action_Task__object___Invoke(
          (System_Action_Task__object__o *)playVoiceAction,
          (System_Threading_Tasks_Task_o *)v21,
          (Il2CppObject *)v26,
          (const MethodInfo_24C4F84 *)Method_System_Action_string__Action__Invoke__),
        v27 = this->fields.messageManager,
        aftMsg = this->fields.aftMsg,
        v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32),
        System_Action___ctor(
          v33,
          (Il2CppObject *)this,
          Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_2__,
          0LL),
        !v27) )
  {
LABEL_18:
    sub_B170D4();
  }
  CommonMessageManager__SetMessageBlock(v27, aftMsg, 0, v33, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__67_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isActiveCompensationDlg; // w8

  isActiveCompensationDlg = this->fields.isActiveCompensationDlg;
  this->fields.isEndAfterMsg = 1;
  if ( !isActiveCompensationDlg )
    BoxGachaResultEffectComponent__CheckAutoResetEnable(this, method);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__58_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__58_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void __fastcall BoxGachaResultEffectComponent___endloadEffect_b__56_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  UnityEngine_Behaviour_o *v10; // x0
  ResultListWindow_o *resultWindow; // x0

  this->fields.closeCallBack = callBack;
  p_closeCallBack = &this->fields.closeCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (UnityEngine_Behaviour_o *)*(p_closeCallBack - 26);
  if ( !v10 )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v10, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close_29702576(resultWindow, *p_closeCallBack, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CommonMessageManager_o *messageManager; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_40FB48C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v9);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_0__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_40FB48C = 1;
  }
  messageManager = this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_9;
  messageManager->fields.touchCallbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&messageManager->fields.touchCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__67_0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v20, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *messageManager; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x0
  CommonMessageManager_o *v9; // x0
  struct CommonMessageManager_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  BoxGachaTalkInfo_o *info; // x0
  struct System_Action_string__Action__o *playVoiceAction; // x20
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Action_o *v30; // x22
  CommonMessageManager_o *v31; // x0

  if ( (byte_40FB486 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__58_0__, v4);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__58_1__, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v6);
    byte_40FB486 = 1;
  }
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_11;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         messageManager,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !Component_WebViewObject )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
  v9 = this->fields.messageManager;
  if ( !v9 )
    goto LABEL_11;
  CommonMessageManager__Init(v9, 0LL);
  v10 = this->fields.messageManager;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__58_0__,
    0LL);
  if ( !v10 )
    goto LABEL_11;
  v10->fields.touchCallbackFunc = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.touchCallbackFunc,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  info = this->fields.info;
  if ( !info
    || (playVoiceAction = this->fields.playVoiceAction,
        v25 = BoxGachaTalkInfo__getBeforeVoiceId(info, this->fields.randomTalkIdx, v22),
        v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29),
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__58_1__,
          0LL),
        !playVoiceAction)
    || (System_Action_Task__object___Invoke(
          (System_Action_Task__object__o *)playVoiceAction,
          (System_Threading_Tasks_Task_o *)v25,
          (Il2CppObject *)v30,
          (const MethodInfo_24C4F84 *)Method_System_Action_string__Action__Invoke__),
        (v31 = this->fields.messageManager) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  CommonMessageManager__SetMessageBlock(v31, this->fields.befMsg, 1, 0LL, 0LL);
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
  __int64 v18; // x3
  __int64 v19; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  if ( (byte_40FB484 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v10);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent__endloadEffect_b__56_0__, v11);
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_40FB484 = 1;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->effectAssetData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
    v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__56_0__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v23, 0LL);
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
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x19
  int v15; // s0
  UnityEngine_Transform_o *v18; // x19
  int v19; // s0

  if ( (byte_40FB485 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, parentTr);
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB485 = 1;
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
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v11 )
    goto LABEL_15;
  v12 = v11;
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTr, 0LL),
        v14 = UnityEngine_GameObject__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
        !v14)
    || (UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_GameObject__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  return v12;
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
        bool isDischargeCostume,
        System_Action_string__Action__o *playVoice,
        System_Action_o *endVoice,
        System_Int32_array *messageIdList,
        const MethodInfo *method)
{
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Int32_array *rareIdxList; // x8
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct BoxGachaTalkInfo_o **p_info; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  struct System_String_o *Name; // x0
  System_String_o **p_currentSvtName; // x21
  System_Int32_array **v87; // x1
  struct System_String_o **v88; // x0
  System_String_o *v89; // x0
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x8
  System_String_o *v91; // x21
  int32_t v92; // w0
  const MethodInfo *v93; // x2
  System_String_o *v94; // x0
  System_String_o *v95; // x23
  const MethodInfo *v96; // x2
  System_String_o *v97; // x0
  System_String_o *v98; // x22
  const MethodInfo *v99; // x2
  System_String_o *v100; // x24
  System_String_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  const MethodInfo *v108; // x2
  System_String_o *v109; // x20
  System_String_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UnityEngine_Component_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v119; // x1

  if ( (byte_40FB47F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v25);
    sub_B16FFC(&LocalizationManager_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v28);
    sub_B16FFC(&StringLiteral_15736/*"[k]"*/, v29);
    sub_B16FFC(&StringLiteral_23866/*"＠"*/, v30);
    sub_B16FFC(&StringLiteral_11561/*"SCRIPT_ACTION_CODE_TALK"*/, v31);
    byte_40FB47F = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultIdList,
    (System_Int32_array **)resultIds,
    (System_String_array **)talkInfo,
    (System_String_array **)resultIds,
    (System_Boolean_array **)rareIdxs,
    (System_Int32_array **)baseNos,
    (System_Int32_array *)displayName,
    (System_Int32_array *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rareIdxList,
    (System_Int32_array **)rareIdxs,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.resultNoList = baseNos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultNoList,
    (System_Int32_array **)baseNos,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.standFigure = currentFigure;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.standFigure,
    (System_Int32_array **)currentFigure,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.normalFace = face;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  this->fields.isShortCut = isShortCut;
  rareIdxList = this->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_30;
  if ( *(_QWORD *)&rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.playVoiceAction = playVoice;
  this->fields.isDischargeCostume = isDischargeCostume;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.endVoiceAction = endVoice;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endVoiceAction,
    (System_Int32_array **)endVoice,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.compensationMsgIds = messageIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.compensationMsgIds,
    (System_Int32_array **)messageIdList,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  p_info = &this->fields.info;
  this->fields.info = talkInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)talkInfo,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_30;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_30;
    Name = ServantEntity__getName(Entity, -1, -1, 0LL);
    this->fields.currentSvtName = Name;
    p_currentSvtName = &this->fields.currentSvtName;
    v87 = (System_Int32_array **)Name;
    v88 = &this->fields.currentSvtName;
  }
  else
  {
    this->fields.currentSvtName = displayName;
    p_currentSvtName = &this->fields.currentSvtName;
    v88 = &this->fields.currentSvtName;
    v87 = (System_Int32_array **)displayName;
  }
  sub_B16F98((BattleServantConfConponent_o *)v88, v87, v76, v77, v78, v79, v80, v81);
  v89 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_23866/*"＠"*/,
          *p_currentSvtName,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          0LL);
  if ( !*p_info )
    goto LABEL_30;
  beforeVoiceIdList = (*p_info)->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_30;
  v91 = v89;
  v92 = UnityEngine_Random__Range_34843248(0, beforeVoiceIdList->fields._size - 1, 0LL);
  this->fields.randomTalkIdx = v92;
  if ( !talkInfo )
    goto LABEL_30;
  v94 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, v92, v93);
  v95 = System_String__Concat_43743732(v94, (System_String_o *)StringLiteral_15736/*"[k]"*/, 0LL);
  v97 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v96);
  v98 = System_String__Concat_43743732(v97, (System_String_o *)StringLiteral_15736/*"[k]"*/, 0LL);
  v100 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, v99);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v100 )
    goto LABEL_30;
  if ( !System_String__StartsWith(v100, v101, 0LL) )
    v95 = System_String__Concat_43743732(v91, v95, 0LL);
  this->fields.befMsg = v95;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.befMsg,
    (System_Int32_array **)v95,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v109 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v108);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11561/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v109 )
    goto LABEL_30;
  if ( !System_String__StartsWith(v109, v110, 0LL) )
    v98 = System_String__Concat_43743732(v91, v98, 0LL);
  this->fields.aftMsg = v98;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aftMsg,
    (System_Int32_array **)v98,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel || (gameObject = UnityEngine_Component__get_gameObject(resourcesPanel, 0LL)) == 0LL )
LABEL_30:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v119);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetLoader_LoadEndDataHandler_o *v9; // x20

  if ( (byte_40FB483 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent_endloadEffect__, v6);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5816/*"Effect/BoxGacha"*/, v8);
    byte_40FB483 = 1;
  }
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5816/*"Effect/BoxGacha"*/, v9, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  PlayMakerFSM_o *targetFSM; // x0
  __int64 *v6; // x8

  if ( (byte_40FB48B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3390/*"COSTUME_RELEASE"*/, method);
    sub_B16FFC(&StringLiteral_5466/*"END_DISP"*/, v3);
    byte_40FB48B = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL);
  if ( !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox )
    ActionExtensions__Call(this->fields.onEnableBackBtn, 0LL);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
LABEL_12:
    sub_B170D4();
  if ( this->fields.isDischargeCostume )
    v6 = &StringLiteral_3390/*"COSTUME_RELEASE"*/;
  else
    v6 = &StringLiteral_5466/*"END_DISP"*/;
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)*v6, 0LL);
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
  _BOOL4 isDischargeCostume; // w27
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x26

  if ( (byte_40FB48A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_40FB48A = 1;
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
  isDischargeCostume = this->fields.isDischargeCostume;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_B170D4();
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeCostume,
    v16,
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

  if ( (byte_40FB48F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_40FB48F = 1;
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *v12; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB489 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B16FFC(&FSUtility_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v4);
    sub_B16FFC(&StringLiteral_18099/*"ef_boxitem_start"*/, v5);
    sub_B16FFC(&StringLiteral_21216/*"openResultListWindow"*/, v6);
    byte_40FB489 = 1;
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
  Effect = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18099/*"ef_boxitem_start"*/, transform, v8);
  if ( !Effect )
    goto LABEL_13;
  v11 = Effect;
  v12 = UnityEngine_GameObject__get_transform(Effect, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v12 )
LABEL_13:
    sub_B170D4();
  v14.fields.z = 0.0;
  v14.fields.x = OffsetX + 200.0;
  v14.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v12, v14, 0LL);
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    v11,
    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21216/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70A3 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_40F70A3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BoxGachaResultEffectComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BoxGachaResultEffectComponent___c___ctor(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___EndMessage_b__59_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}