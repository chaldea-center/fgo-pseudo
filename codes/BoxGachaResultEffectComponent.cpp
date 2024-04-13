void __fastcall BoxGachaResultEffectComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EA5B7 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19744/*"img_gachatxt_{0:D2}"*/, v8, v9, v10);
    byte_42EA5B7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19744/*"img_gachatxt_{0:D2}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19744/*"img_gachatxt_{0:D2}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UICommonButton_o *multiGachaButton; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v15; // x1
  WebViewManager_o *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v18; // x21
  System_Action_o *v19; // x22
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  if ( (byte_42EA5B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EA5B2 = 1;
  }
  multiGachaButton = this->fields.multiGachaButton;
  if ( !multiGachaButton )
    goto LABEL_14;
  UICommonButton__SetButtonEnableWithCollider(multiGachaButton, 1, 0LL);
  multiGachaButton = (UICommonButton_o *)this->fields.endVoiceAction;
  if ( !multiGachaButton )
    goto LABEL_14;
  System_Action__Invoke((System_Action_o *)multiGachaButton, 0LL);
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v12);
  if ( !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox )
  {
    multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
    this->fields.isEndAfterMsg = 0;
    if ( multiGachaButton )
    {
      ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0LL);
      BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v13);
      multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel;
      if ( multiGachaButton )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)multiGachaButton, 0LL);
        multiGachaButton = (UICommonButton_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v15);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)multiGachaButton & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(multiGachaButton, method);
  }
  if ( !this->fields.isDispAutoResetDlg )
  {
    this->fields.isDispAutoResetDlg = 1;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    resetBoxMsg = this->fields.resetBoxMsg;
    v18 = (CommonUI_o *)Instance;
    v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_0__,
      0LL);
    if ( !v18 )
      goto LABEL_14;
    v20.fields.y = -40.0;
    v20.fields.x = 0.0;
    CommonUI__OpenFullScreenMaskDialog(v18, resetBoxMsg, -1, v19, v20, -1, 0, 0LL);
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
    sub_B5D69C(0LL, v4);
  System_Action__Invoke(endVoiceAction, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__EndMessage(
        BoxGachaResultEffectComponent_o *this,
        bool isAfter,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x1
  CommonMessageManager_o *messageManager; // x0
  const MethodInfo *v17; // x2
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v19; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__62_0; // x20
  Il2CppObject *v22; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EA5AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isAfter, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, v6, v7, v8);
    sub_B5D5C4(&BoxGachaResultEffectComponent___c_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5563/*"END_MSG"*/, v12, v13, v14);
    byte_42EA5AA = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5563/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_21:
    sub_B5D69C(messageManager, v15);
  }
  v19 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v19 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__62_0 = static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__62_0, v22, Method_BoxGachaResultEffectComponent___c__EndMessage_b__62_0__, 0LL);
    v23 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    v23->__9__62_0 = _9__62_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__62_0, v17);
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
    sub_B5D69C(gameObject, v4);
  }
  return 0;
}


bool __fastcall BoxGachaResultEffectComponent__IsUnSkippable(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Func_bool__o *isUnSkippable; // x0

  if ( (byte_42EA5B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool__Invoke__, (_DWORD)method, v2, v3);
    byte_42EA5B0 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    LOBYTE(isUnSkippable) = System_Func_bool___Invoke(
                              isUnSkippable,
                              (const MethodInfo_278D9D8 *)Method_System_Func_bool__Invoke__);
  return (char)isUnSkippable;
}


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EA5B5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EA5B5 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  System_Action_o *v27; // x21

  if ( (byte_42EA5B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Action__float__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__, v8, v9, v10);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5838/*"EXE_GACHA"*/, v17, v18, v19);
    byte_42EA5B6 = 1;
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
          v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v24,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v24, v25);
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
    BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v20);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5838/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(
                v27,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__80_1__,
                0LL);
              if ( endPerformanceAction )
              {
                System_Action_string__float___Invoke(
                  (System_Action_string__float__o *)endPerformanceAction,
                  (System_String_o *)v27,
                  this->fields.performanceSlideOutSpeed,
                  (const MethodInfo_25999D8 *)Method_System_Action_Action__float__Invoke__);
                return;
              }
            }
          }
        }
      }
    }
    sub_B5D69C(messageManager, v21);
  }
}


void __fastcall BoxGachaResultEffectComponent__OpenCompensationItemDialog(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WebViewManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42EA5AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, (_DWORD)endCallBack, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EA5AB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v14 = (CommonUI_o *)Instance;
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v15,
    compensationMsgIds,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
    sub_B5D69C(v16, v17);
  CommonUI__OpenCompensationItemDialog(v14, v15, endCallBack, 0LL);
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
  sub_B5D560(
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
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  int v24; // w8
  __int64 *v25; // x8
  System_String_o *v26; // x0
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42EA5B3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, isLimit, isLastLimitBox, prizeName);
    sub_B5D5C4(&string_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2662/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2659/*"BOX_GACHA_AUTO_RESET_INFO"*/, v18, v19, v20);
    byte_42EA5B3 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_resetBoxMsg,
    (System_Int32_array **)Empty,
    (System_String_array **)isLastLimitBox,
    (System_String_array **)prizeName,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v24 = *((unsigned __int8 *)p_resetBoxMsg + 83);
  *((_BYTE *)p_resetBoxMsg + 84) = isLastLimitBox;
  if ( v24 && !isLastLimitBox )
  {
    if ( isLimit )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = &StringLiteral_2662/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = &StringLiteral_2659/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    }
    v26 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
    v27 = (System_Int32_array **)System_String__Format(v26, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = (struct System_String_o *)v27;
    sub_B5D560((BattleServantConfConponent_o *)p_resetBoxMsg, v27, v28, v29, v30, v31, v32, v33);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *currentResultInfo; // x0
  UILabel_o *currentResultLabel; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA5A4 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, boxNo, boxCurrentNum, prizeName);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2676/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v12, v13, v14);
    byte_42EA5A4 = 1;
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
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2676/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v21 = boxNo;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = boxCurrentNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_44578852(
                                                    v17,
                                                    v18,
                                                    (Il2CppObject *)prizeName,
                                                    v19,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_9:
    sub_B5D69C(currentResultInfo, *(_QWORD *)&boxNo);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onEnableBackBtn,
    (System_Int32_array **)onEnableBackBtn,
    (System_String_array **)method,
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *multiGachaButton; // x21
  __int64 v10; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA5A5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnble, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_358/*"#4C4C4C"*/, v6, v7, v8);
    byte_42EA5A5 = 1;
  }
  *(_QWORD *)&v16.fields.r = 0LL;
  *(_QWORD *)&v16.fields.b = 0LL;
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
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_358/*"#4C4C4C"*/, &v16, 0LL);
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
      g = v16.fields.g;
      r = v16.fields.r;
      b = v16.fields.b;
      a = v16.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v19, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v20, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_19;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v21, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite
      || (v22.fields.r = r,
          v22.fields.g = g,
          v22.fields.b = b,
          v22.fields.a = a,
          UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v22, 0LL),
          (multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite) == 0LL) )
    {
LABEL_19:
      sub_B5D69C(multiGachaBgSprite, v10);
    }
    v23.fields.r = r;
    v23.fields.g = g;
    v23.fields.b = b;
    v23.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v23, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BoxGachaItemComponent_o *enableBoxGachaInfo; // x0
  bool v20; // w8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  UISprite_o *multiGacha2DigitNumSprite; // x21
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v31; // x22
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  v8 = enableNum;
  v32 = eventId;
  if ( (byte_42EA5A3 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaUtility_TypeInfo, enableNum, payValue, *(_QWORD *)&payTargetId);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19952/*"img_txt_getpresent_"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19743/*"img_gachatxt_"*/, v16, v17, v18);
    byte_42EA5A3 = 1;
  }
  enableBoxGachaInfo = this->fields.enableBoxGachaInfo;
  v20 = v8 > 0;
  if ( !v8 )
    v8 = 1;
  this->fields.isCanDraw = v20;
  if ( !enableBoxGachaInfo )
    goto LABEL_14;
  BoxGachaItemComponent__Set(enableBoxGachaInfo, payTargetId, v8 * payValue, *(const MethodInfo **)&payTargetId);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(this, this->fields.isCanDraw, v21);
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
    v22);
  v26 = System_Int32__ToString((int32_t)&v32, 0LL);
  v27 = System_String__Concat_44577788((System_String_o *)StringLiteral_19743/*"img_gachatxt_"*/, v26, 0LL);
  v28 = System_Int32__ToString((int32_t)&v32, 0LL);
  v29 = System_String__Concat_44577788((System_String_o *)StringLiteral_19952/*"img_txt_getpresent_"*/, v28, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v31 = v29;
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v27, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v31, 0LL);
  enableBoxGachaInfo = (BoxGachaItemComponent_o *)this->fields.itemResourceComponent;
  if ( !enableBoxGachaInfo )
LABEL_14:
    sub_B5D69C(enableBoxGachaInfo, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)enableBoxGachaInfo, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_T1__T2__o *onEnableBackBtn; // x20
  bool v6; // w21
  bool IsUnSkippable; // w0

  if ( (byte_42EA5AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool__bool___, (_DWORD)method, v2, v3);
    byte_42EA5AF = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v6 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  IsUnSkippable = BoxGachaResultEffectComponent__IsUnSkippable(this, method);
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v6,
    !IsUnSkippable,
    (const MethodInfo_2CECDDC *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Delegate_o *afterAutoReset; // x20
  System_Action_o *v9; // x21
  System_Delegate_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  struct UIPanel_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v20; // x1
  BoxGachaResultEffectComponent_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_42EA5BB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__, v5, v6, v7);
    byte_42EA5BB = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__72_1__,
    0LL);
  v10 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v9, 0LL);
  if ( v10 && (System_Action_c *)v10->klass != System_Action_TypeInfo )
  {
    v21 = (BoxGachaResultEffectComponent_o *)sub_B5D990(v10);
    BoxGachaResultEffectComponent___CheckAutoResetEnable_b__72_1(v21, v22);
  }
  else
  {
    this->fields.afterAutoReset = (struct System_Action_o *)v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.afterAutoReset,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
    resourcesPanel = this->fields.resourcesPanel;
    if ( !resourcesPanel
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resourcesPanel, 0LL),
          resourcesPanel = (struct UIPanel_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v20),
          !gameObject) )
    {
      sub_B5D69C(resourcesPanel, v17);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_42EA5BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5838/*"EXE_GACHA"*/, (_DWORD)method, v2, v3);
    byte_42EA5BC = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5838/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v18; // x20
  UITweener_o *v19; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  const MethodInfo *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v43; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v44; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_42EA5B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__, v8, v9, v10);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v14, v15, v16);
    byte_42EA5B9 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v18 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45224128((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v18, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                resourcesPanel,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v19 = (UITweener_o *)resourcesPanel;
  UITweener__Play_45224128((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v19, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v19, 1, 0LL);
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
  v43.fields.targetVoiceId = BoxGachaTalkInfo__getAfterVoiceId(
                               (BoxGachaTalkInfo_o *)resourcesPanel,
                               this->fields.randomTalkIdx,
                               v22);
  sub_B5D560(
    (BattleServantConfConponent_o *)&v43,
    (System_Int32_array **)v43.fields.targetVoiceId,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v43.fields.skipPerformance = this->fields.isShortCut;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_1__,
    0LL);
  v43.fields.callBackStartPlay = v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v43.fields.callBackStartPlay,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_2__,
    0LL);
  v43.fields.callBackEndPlay = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v43.fields.callBackEndPlay,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !resourcesPanel )
LABEL_12:
    sub_B5D69C(resourcesPanel, method);
  v44 = v43;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)resourcesPanel,
    &v44,
    (const MethodInfo_2592C2C *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_42EA5BA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v5, v6, v7);
    byte_42EA5BA = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)BoxGachaResultEffectComponent__IsUnSkippable(this, v11);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)resourcesPanel & 1) == 0, 0LL);
  v13 = 0LL;
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, v12) )
  {
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_9:
    sub_B5D69C(resourcesPanel, v8);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v13, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  struct System_Action_Action__float__o *endPerformanceAction; // x20
  BoxGachaResultEffectComponent___c_c *v16; // x0
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_3; // x21
  Il2CppObject *v19; // x22
  struct BoxGachaResultEffectComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2

  if ( (byte_42EA5B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Action__float__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, v8, v9, v10);
    sub_B5D5C4(&BoxGachaResultEffectComponent___c_TypeInfo, v11, v12, v13);
    byte_42EA5B8 = 1;
  }
  if ( !BoxGachaResultEffectComponent__IsUnSkippable(this, method) )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v16 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( (BYTE3(BoxGachaResultEffectComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
      v16 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__61_3 = static_fields->__9__61_3;
    if ( !_9__61_3 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__61_3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__61_3, v19, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__61_3__, 0LL);
      v20 = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      v20->__9__61_3 = _9__61_3;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v20->__9__61_3,
        (System_Int32_array **)_9__61_3,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( !endPerformanceAction )
      sub_B5D69C(v16, v14);
    System_Action_string__float___Invoke(
      (System_Action_string__float__o *)endPerformanceAction,
      (System_String_o *)_9__61_3,
      this->fields.performanceSlideOutSpeed,
      (const MethodInfo_25999D8 *)Method_System_Action_Action__float__Invoke__);
    BoxGachaResultEffectComponent__EndAction(this, 0, v27);
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
    sub_B5D69C(IsUnSkippable, v5);
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
    sub_B5D69C(0LL, v4);
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
  sub_B5D560(
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
      ResultListWindow__Close_29541016(resultWindow, *p_closeCallBack, 0LL);
      return;
    }
LABEL_6:
    sub_B5D69C(resultWindow, v10);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleServantConfConponent_o *klass; // x8
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_42EA5B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, v12, v13, v14);
    this = (BoxGachaResultEffectComponent_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                v15,
                                                v16,
                                                v17);
    byte_42EA5B1 = 1;
  }
  klass = (BattleServantConfConponent_o *)v8[2].klass;
  if ( !klass )
    goto LABEL_9;
  klass[1].klass = 0LL;
  sub_B5D560(klass + 1, 0LL, v2, v3, v4, v5, v6, v7);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, v8, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__71_0__, 0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(this, method);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v22, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *messageManager; // x0
  BattleServantConfConponent_o *v21; // x22
  System_Action_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Action_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  EventSvtControl_PlayBoxGachVoiceArg_o v50; // [xsp+20h] [xbp-60h] BYREF
  EventSvtControl_PlayBoxGachVoiceArg_o v51; // [xsp+40h] [xbp-40h] BYREF

  if ( (byte_42EA5A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__, v8, v9, v10);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__, v11, v12, v13);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v17, v18, v19);
    byte_42EA5A9 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                messageManager,
                                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v21 = (BattleServantConfConponent_o *)this->fields.messageManager;
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_0__,
    0LL);
  if ( !v21 )
    goto LABEL_10;
  v21[1].klass = (BattleServantConfConponent_c *)v22;
  sub_B5D560(v21 + 1, (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  v50.fields.targetVoiceId = BoxGachaTalkInfo__getBeforeVoiceId(
                               (BoxGachaTalkInfo_o *)messageManager,
                               this->fields.randomTalkIdx,
                               v29);
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50,
    (System_Int32_array **)v50.fields.targetVoiceId,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v50.fields.skipPerformance = this->fields.isShortCut;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_1__,
    0LL);
  v50.fields.callBackStartPlay = v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50.fields.callBackStartPlay,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__61_2__,
    0LL);
  v50.fields.callBackEndPlay = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v50.fields.callBackEndPlay,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  messageManager = (UnityEngine_Component_o *)this->fields.playVoiceAction;
  if ( !messageManager )
LABEL_10:
    sub_B5D69C(messageManager, method);
  v51 = v50;
  System_Action_EventSvtControl_PlayBoxGachVoiceArg___Invoke(
    (System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *)messageManager,
    &v51,
    (const MethodInfo_2592C2C *)Method_System_Action_EventSvtControl_PlayBoxGachVoiceArg__Invoke__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BoxGachaResultEffectComponent_c *v22; // x0
  struct BoxGachaResultEffectComponent_StaticFields *static_fields; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1

  if ( (byte_42EA5A7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, v13, v14, v15);
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20, v21);
    byte_42EA5A7 = 1;
  }
  if ( data )
  {
    v22 = BoxGachaResultEffectComponent_TypeInfo;
    if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
      v22 = BoxGachaResultEffectComponent_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->effectAssetData = data;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->effectAssetData,
      (System_Int32_array **)data,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v25 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__59_0__, 0LL);
    if ( !Instance )
      sub_B5D69C(v28, v29);
    CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v27, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BoxGachaResultEffectComponent_c *v15; // x0
  AssetData_o *effectAssetData; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *transform; // x19
  int v20; // s0
  UnityEngine_Transform_o *v23; // x19
  int v24; // s0

  if ( (byte_42EA5A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)parentTr, (_DWORD)method, v3);
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EA5A8 = 1;
  }
  v15 = BoxGachaResultEffectComponent_TypeInfo;
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
    v15 = BoxGachaResultEffectComponent_TypeInfo;
  }
  effectAssetData = v15->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               effectAssetData,
                                                                               name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v18 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL),
        transform = UnityEngine_GameObject__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = UnityEngine_GameObject__get_transform(v18, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL),
        !v23) )
  {
LABEL_15:
    sub_B5D69C(effectAssetData, parentTr);
  }
  UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
  return v18;
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
        const MethodInfo *method)
{
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  DataManager_o *Instance; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct System_Int32_array *rareIdxList; // x8
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct System_String_o *Name; // x1
  struct System_String_o **p_currentSvtName; // x0
  const MethodInfo *v113; // x2
  System_String_o *v114; // x22
  System_String_o *v115; // x0
  System_String_o *v116; // x23
  const MethodInfo *v117; // x2
  System_String_o *v118; // x0
  System_String_o *v119; // x21
  const MethodInfo *v120; // x2
  System_String_o *v121; // x24
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  const MethodInfo *v128; // x2
  System_String_o *v129; // x20
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  const MethodInfo *v136; // x1

  if ( (byte_42EA5A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, (_DWORD)talkInfo, resultIds);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_15990/*"[k]"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_24289/*"＠"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11730/*"SCRIPT_ACTION_CODE_TALK"*/, v45, v46, v47);
    byte_42EA5A2 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultIdList,
    (System_Int32_array **)resultIds,
    (System_String_array **)talkInfo,
    (System_String_array **)resultIds,
    (System_Boolean_array **)rareIdxs,
    (System_Int32_array **)baseNos,
    (System_Int32_array *)displayName,
    (System_Int32_array *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rareIdxList,
    (System_Int32_array **)rareIdxs,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.resultNoList = baseNos;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultNoList,
    (System_Int32_array **)baseNos,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.standFigure = currentFigure;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.standFigure,
    (System_Int32_array **)currentFigure,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)playVoice,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.endVoiceAction = endVoice;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endVoiceAction,
    (System_Int32_array **)endVoice,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.compensationMsgIds = messageIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.compensationMsgIds,
    (System_Int32_array **)messageIdList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.info = talkInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.info,
    (System_Int32_array **)talkInfo,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.isUnSkippable = unskippable;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isUnSkippable,
    (System_Int32_array **)unskippable,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endPerformanceAction,
    (System_Int32_array **)endPerformanceAction,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)p_currentSvtName,
    (System_Int32_array **)Name,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  Instance = (DataManager_o *)System_String__Concat_44580072(
                                (System_String_o *)StringLiteral_24289/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                0LL);
  v67 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_28;
  v114 = (System_String_o *)Instance;
  v115 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, v113);
  v116 = System_String__Concat_44577788(v115, (System_String_o *)StringLiteral_15990/*"[k]"*/, 0LL);
  v118 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v117);
  v119 = System_String__Concat_44577788(v118, (System_String_o *)StringLiteral_15990/*"[k]"*/, 0LL);
  v121 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, v120);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v121 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v121, (System_String_o *)Instance, 0LL) )
    v116 = System_String__Concat_44577788(v114, v116, 0LL);
  this->fields.befMsg = v116;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.befMsg,
    (System_Int32_array **)v116,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v129 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, v128);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v129 )
    goto LABEL_28;
  if ( !System_String__StartsWith(v129, (System_String_o *)Instance, 0LL) )
    v119 = System_String__Concat_44577788(v114, v119, 0LL);
  this->fields.aftMsg = v119;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aftMsg,
    (System_Int32_array **)v119,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(Instance, v67);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v136);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_42EA5A6 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent_endloadEffect__, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5911/*"Effect/BoxGacha"*/, v11, v12, v13);
    byte_42EA5A6 = 1;
  }
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5911/*"Effect/BoxGacha"*/, v14, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  __int64 *v9; // x8

  if ( (byte_42EA5AE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12497/*"START_ITEM_GET_EFFECT"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5558/*"END_DISP"*/, v5, v6, v7);
    byte_42EA5AE = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_B5D69C(resultWindowTouchBlock, method);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v9 = &StringLiteral_12497/*"START_ITEM_GET_EFFECT"*/;
  else
    v9 = &StringLiteral_5558/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, (System_String_o *)*v9, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  System_Int32_array *resultNoList; // x23
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  _BOOL4 isDischargeGetEffectItem; // w27
  System_Action_o *v16; // x26

  if ( (byte_42EA5AD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaResultEffectComponent_openResultCallback__, v5, v6, v7);
    byte_42EA5AD = 1;
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
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_B5D69C(resultWindowTouchBlock, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v16,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent__setFigureFace(
        BoxGachaResultEffectComponent_o *this,
        int32_t type,
        float fadeTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  UnityEngine_Object_o *standFigure; // x21
  __int64 v9; // x1
  UIStandFigureR_o *v10; // x0

  if ( (byte_42EA5B4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, type, (_DWORD)method, v4);
    byte_42EA5B4 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v10 = this->fields.standFigure;
    if ( !v10 )
      sub_B5D69C(0LL, v9);
    UIStandFigureR__SetFace(v10, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *v21; // x20
  UnityEngine_Transform_o *v22; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA5AC & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18395/*"ef_boxitem_start"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21585/*"openResultListWindow"*/, v14, v15, v16);
    byte_42EA5AC = 1;
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
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18395/*"ef_boxitem_start"*/, transform, v19);
  if ( !gameObject )
    goto LABEL_13;
  v21 = gameObject;
  v22 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v22 )
LABEL_13:
    sub_B5D69C(gameObject, v18);
  v24.fields.z = 0.0;
  v24.fields.x = OffsetX + 200.0;
  v24.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v22, v24, 0LL);
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    v21,
    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21585/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E33 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5E33 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v4;
  sub_B5D560(static_fields);
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