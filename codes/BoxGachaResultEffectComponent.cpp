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

  if ( (byte_4A31E4F & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A31E4F = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v14 = (CommonUI_o *)Instance;
      v15 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(
        v15,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__,
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
    sub_1B7641C(multiGachaButton, method);
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
    sub_1B7641C(v4, v5);
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
  System_Action_o *_9__61_0; // x20
  Il2CppObject *v14; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A31E48 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isAfter);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__, v5);
    sub_1B761C0(&BoxGachaResultEffectComponent___c_TypeInfo, v6);
    sub_1B761C0(&StringLiteral_5477/*"END_MSG"*/, v7);
    byte_4A31E48 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5477/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1B7641C(messageManager, v8);
  }
  v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v12 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__61_0 = v12->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__61_0 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(_9__61_0, v14, Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = _9__61_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v16, v17);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__61_0, v10);
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
    sub_1B7641C(gameObject, v4);
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


void __fastcall BoxGachaResultEffectComponent__OnClickBackBtn(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4A31E52 & 1) == 0 )
  {
    sub_1B761C0(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__, method);
    byte_4A31E52 = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B761D8(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B761A4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__OnClickMultiGachaButton(
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
  const MethodInfo *v11; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Action_o *endVoiceAction; // x8
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x21
  System_Action_o *v18; // x20

  if ( (byte_4A31E53 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__, v3);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__, v4);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__, v5);
    sub_1B761C0(&StringLiteral_5753/*"EXE_GACHA"*/, v6);
    byte_4A31E53 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( (!isUnSkippable
     || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
           isUnSkippable->fields.original_method_info,
           *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0)
    && !this->fields.isEndAfterMsg )
  {
    if ( !this->fields.isOpenCompensationDlg )
    {
      compensationMsgIds = this->fields.compensationMsgIds;
      if ( compensationMsgIds )
      {
        if ( *(_QWORD *)&compensationMsgIds->max_length )
        {
          *(_WORD *)&this->fields.isOpenCompensationDlg = 257;
          v15 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v15, v16);
          return;
        }
      }
    }
    v8 = Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__;
    if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B761D8(Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B761A4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
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
        messageManager = (CommonMessageManager_o *)this->fields.resultWindow;
        if ( messageManager )
        {
          ResultListWindow__Close((ResultListWindow_o *)messageManager, v11);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0LL);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5753/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
              System_Action___ctor(
                v18,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__,
                0LL);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
                  endPerformanceAction->fields.original_method_info,
                  v18,
                  *(_QWORD *)&endPerformanceAction->fields.extra_arg,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B7641C(messageManager, v11);
  }
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

  if ( (byte_4A31E49 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor___75854368, endCallBack);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A31E49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v9 = (CommonUI_o *)Instance;
  v10 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55287428(
    v10,
    compensationMsgIds,
    (const MethodInfo_34B9E84 *)Method_System_Collections_Generic_List_int___ctor___75854368);
  if ( !v9 )
    sub_1B7641C(v11, v12);
  CommonUI__OpenCompensationItemDialog(v9, v10, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.afterAutoReset = callback;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.afterAutoReset, (int32_t)callback, (int32_t)method, v3);
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
  int32_t v21; // w3

  v9 = isLastLimitBox;
  if ( (byte_4A31E50 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, isLimit);
    sub_1B761C0(&string_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_3086/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v11);
    sub_1B761C0(&StringLiteral_3083/*"BOX_GACHA_AUTO_RESET_INFO"*/, v12);
    byte_4A31E50 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_resetBoxMsg, (int32_t)Empty, isLastLimitBox, (int32_t)prizeName);
  v16 = *((unsigned __int8 *)p_resetBoxMsg + 83);
  *((_BYTE *)p_resetBoxMsg + 84) = v9;
  if ( v16 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v17 = (System_String_o **)&StringLiteral_3086/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v17 = (System_String_o **)&StringLiteral_3083/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v18 = LocalizationManager__Get(*v17, 0LL);
    v19 = System_String__Format(v18, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = v19;
    sub_1B76164((ServantStatusBattleListViewItem_o *)p_resetBoxMsg, (int32_t)v19, v20, v21);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-48h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A31E42 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, *(_QWORD *)&boxNo);
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_3100/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v10);
    byte_4A31E42 = 1;
  }
  currentResultInfo = this->fields.currentResultInfo;
  if ( !currentResultInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(currentResultInfo, 1, 0LL);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3100/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v23 = boxNo;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  v22 = boxCurrentNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v18, v19, v20);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_61549500(
                                                    v13,
                                                    v17,
                                                    (Il2CppObject *)prizeName,
                                                    v21,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_8:
    sub_1B7641C(currentResultInfo, *(_QWORD *)&boxNo);
  UILabel__set_text(currentResultLabel, (System_String_o *)currentResultInfo, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.onEnableBackBtn,
    (int32_t)onEnableBackBtn,
    (int32_t)method,
    v3);
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
  UnityEngine_Color_o v13; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A31E43 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isEnble);
    sub_1B761C0(&StringLiteral_441/*"#4C4C4C"*/, v5);
    byte_4A31E43 = 1;
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
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_441/*"#4C4C4C"*/, &v13, 0LL);
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
      goto LABEL_17;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
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
LABEL_17:
      sub_1B7641C(multiGachaBgSprite, v7);
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
  UISprite_o *multiGacha2DigitNumSprite; // x21
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v24; // x22
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF

  v8 = enableNum;
  v25 = eventId;
  if ( (byte_4A31E41 & 1) == 0 )
  {
    sub_1B761C0(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum);
    sub_1B761C0(&EventRewardRootComponent_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_20538/*"img_txt_getpresent_"*/, v11);
    sub_1B761C0(&StringLiteral_20314/*"img_gachatxt_"*/, v12);
    byte_4A31E41 = 1;
  }
  enableBoxGachaInfo = this->fields.enableBoxGachaInfo;
  v14 = v8 > 0;
  if ( !v8 )
    v8 = 1;
  this->fields.isCanDraw = v14;
  if ( !enableBoxGachaInfo )
    goto LABEL_12;
  BoxGachaItemComponent__Set(enableBoxGachaInfo, payTargetId, v8 * payValue, 0LL);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(this, this->fields.isCanDraw, v15);
  multiGacha1DigitNumSprite = this->fields.multiGacha1DigitNumSprite;
  multiGacha2DigitNumSprite = this->fields.multiGacha2DigitNumSprite;
  multiGacha3DigitNumSprite = this->fields.multiGacha3DigitNumSprite;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v8,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    0LL);
  v19 = System_Int32__ToString((int32_t)&v25, 0LL);
  v20 = System_String__Concat_61535060((System_String_o *)StringLiteral_20314/*"img_gachatxt_"*/, v19, 0LL);
  v21 = System_Int32__ToString((int32_t)&v25, 0LL);
  v22 = System_String__Concat_61535060((System_String_o *)StringLiteral_20538/*"img_txt_getpresent_"*/, v21, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v24 = v22;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v20, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v24, 0LL);
  enableBoxGachaInfo = (BoxGachaItemComponent_o *)this->fields.itemResourceComponent;
  if ( !enableBoxGachaInfo )
LABEL_12:
    sub_1B7641C(enableBoxGachaInfo, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)enableBoxGachaInfo, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T1__T2__o *onEnableBackBtn; // x19
  bool v4; // w20
  struct System_Func_bool__o *isUnSkippable; // x8
  char v6; // w8

  if ( (byte_4A31E4D & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_bool__bool___, method);
    byte_4A31E4D = 1;
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
    (const MethodInfo_2DB9FDC *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Delegate_o *afterAutoReset; // x21
  struct System_Action_o **p_afterAutoReset; // x20
  System_Action_o *v6; // x22
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  System_Action_c *v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v15; // x19
  char v16; // w8

  if ( (byte_4A31E57 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__, v3);
    byte_4A31E57 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  p_afterAutoReset = &this->fields.afterAutoReset;
  v6 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__,
    0LL);
  v7 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v6, 0LL);
  v10 = v7;
  if ( !v7 )
    goto LABEL_7;
  v11 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_afterAutoReset = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v11) )
  {
    sub_1B766DC(v7);
LABEL_7:
    *p_afterAutoReset = (struct System_Action_o *)v10;
  }
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.afterAutoReset, (int32_t)v10, v8, v9);
  ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_13;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v15 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v16 = 1;
    if ( resourcesPanel )
      goto LABEL_11;
LABEL_13:
    sub_1B7641C(resourcesPanel, v12);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v16 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v15 )
    goto LABEL_13;
LABEL_11:
  UnityEngine_GameObject__SetActive(v15, v16 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1B7641C(0LL, method);
  ScriptMessageCommonManager__SetMessageWindowCollider(messageManager, 0, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___OnClickMultiGachaButton_b__79_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isEndAfterMsg )
    BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  this->fields.isActiveCompensationDlg = 0;
}


void __fastcall BoxGachaResultEffectComponent___OnClickMultiGachaButton_b__79_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4A31E58 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_5753/*"EXE_GACHA"*/, method);
    byte_4A31E58 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B7641C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5753/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_0(
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
  int32_t v12; // w3
  System_Action_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_Action_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v22; // [xsp+20h] [xbp-70h] BYREF
  __int128 v23; // [xsp+30h] [xbp-60h] BYREF
  __int128 v24[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A31E55 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__, v3);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__, v4);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v5);
    byte_4A31E55 = 1;
  }
  *((_QWORD *)&v22 + 1) = 0LL;
  v23 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v7 = (UITweener_o *)resourcesPanel;
  UITweener__Play_46852576((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v7, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v8 = (UITweener_o *)resourcesPanel;
  UITweener__Play_46852576((UITweener_o *)resourcesPanel, 1, 0LL);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v22, v22, v11, v12);
  BYTE8(v22) = this->fields.isShortCut;
  v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__,
    0LL);
  *(_QWORD *)&v23 = v13;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v23, (int32_t)v13, v14, v15);
  v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__,
    0LL);
  *((_QWORD *)&v23 + 1) = v16;
  sub_1B76164((ServantStatusBattleListViewItem_o *)((char *)&v23 + 8), (int32_t)v16, v17, v18);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1B7641C(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v24[0] = v22;
  v24[1] = v23;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v24,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v7; // x20
  char v8; // w8
  struct System_Func_bool__o *v9; // x8
  System_Action_o *v10; // x20

  if ( (byte_4A31E56 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v3);
    byte_4A31E56 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_14;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v7 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( isUnSkippable )
  {
    resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                  isUnSkippable->fields.original_method_info,
                                                  *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v8 = (unsigned __int8)resourcesPanel ^ 1;
    if ( !v7 )
      goto LABEL_14;
  }
  else
  {
    v8 = 1;
    if ( !resourcesPanel )
      goto LABEL_14;
  }
  UnityEngine_GameObject__SetActive(v7, v8 & 1, 0LL);
  v9 = this->fields.isUnSkippable;
  if ( v9
    && (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
          v9->fields.original_method_info,
          *(_QWORD *)&v9->fields.extra_arg) & 1) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_14:
    sub_1B7641C(resourcesPanel, v4);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v10, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isActiveCompensationDlg; // w8

  isActiveCompensationDlg = this->fields.isActiveCompensationDlg;
  this->fields.isEndAfterMsg = 1;
  if ( !isActiveCompensationDlg )
    BoxGachaResultEffectComponent__CheckAutoResetEnable(this, method);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__60_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Func_bool__o *isUnSkippable; // x8
  struct System_Action_Action__float__o *endPerformanceAction; // x22
  BoxGachaResultEffectComponent___c_c *v7; // x0
  System_Action_o *_9__60_3; // x20
  Il2CppObject *v9; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_4A31E54 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__, v3);
    sub_1B761C0(&BoxGachaResultEffectComponent___c_TypeInfo, v4);
    byte_4A31E54 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
          isUnSkippable->fields.original_method_info,
          *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0 )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v7 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
      v7 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    _9__60_3 = v7->static_fields->__9__60_3;
    if ( !_9__60_3 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BoxGachaResultEffectComponent___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__60_3 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(_9__60_3, v9, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__, 0LL);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__60_3 = _9__60_3;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_3, (int32_t)_9__60_3, v11, v12);
    }
    if ( !endPerformanceAction )
      sub_1B7641C(v7, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
      endPerformanceAction->fields.original_method_info,
      _9__60_3,
      *(_QWORD *)&endPerformanceAction->fields.extra_arg,
      this->fields.performanceSlideOutSpeed);
    BoxGachaResultEffectComponent__EndAction(this, 0, v13);
  }
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__60_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CommonMessageManager_o *messageManager; // x19
  struct System_Func_bool__o *isUnSkippable; // x8
  System_String_o *befMsg; // x20
  char v5; // w8

  messageManager = this->fields.messageManager;
  isUnSkippable = this->fields.isUnSkippable;
  befMsg = this->fields.befMsg;
  if ( !isUnSkippable )
  {
    v5 = 1;
    if ( messageManager )
      goto LABEL_3;
LABEL_5:
    sub_1B7641C(this, method);
  }
  this = (BoxGachaResultEffectComponent_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                              isUnSkippable->fields.original_method_info,
                                              *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v5 = (unsigned __int8)this ^ 1;
  if ( !messageManager )
    goto LABEL_5;
LABEL_3:
  CommonMessageManager__SetMessageBlock(messageManager, befMsg, v5 & 1, 0LL, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgBefResultList_b__60_2(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BoxGachaResultEffectComponent__EndAction(this, 0, v2);
}


void __fastcall BoxGachaResultEffectComponent___endloadEffect_b__58_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B7641C(0LL, v4);
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
  int32_t v3; // w3
  System_Action_o **p_closeCallBack; // x19
  __int64 v6; // x1
  ResultListWindow_o *resultWindow; // x0
  const MethodInfo *v8; // x2

  p_closeCallBack = &this->fields.closeCallBack;
  this->fields.closeCallBack = callBack;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)callBack, (int32_t)method, v3);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close_45576248(resultWindow, *p_closeCallBack, v8);
      return;
    }
LABEL_6:
    sub_1B7641C(resultWindow, v6);
  }
  ActionExtensions__Call(*p_closeCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgAftResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  char *monitor; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A31E4E & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v5);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__, v6);
    this = (BoxGachaResultEffectComponent_o *)sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A31E4E = 1;
  }
  monitor = (char *)v4[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  *((_QWORD *)monitor + 70) = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(monitor + 560), 0, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v13, v4, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__, 0LL);
  if ( !v11 )
LABEL_8:
    sub_1B7641C(this, method);
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
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
  struct CommonMessageManager_o *v8; // x22
  System_Action_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v23; // [xsp+20h] [xbp-70h] BYREF
  __int128 v24; // [xsp+30h] [xbp-60h] BYREF
  __int128 v25[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A31E47 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__, v3);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__, v4);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__, v5);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v6);
    byte_4A31E47 = 1;
  }
  *((_QWORD *)&v23 + 1) = 0LL;
  v24 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v8 = this->fields.messageManager;
  v9 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__,
    0LL);
  if ( !v8 )
    goto LABEL_10;
  v8->fields.touchCallbackFunc = v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v8->fields.touchCallbackFunc, (int32_t)v9, v10, v11);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  *(_QWORD *)&v23 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v23, v23, v12, v13);
  BYTE8(v23) = this->fields.isShortCut;
  v14 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__,
    0LL);
  *(_QWORD *)&v24 = v14;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v24, (int32_t)v14, v15, v16);
  v17 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__,
    0LL);
  *((_QWORD *)&v24 + 1) = v17;
  sub_1B76164((ServantStatusBattleListViewItem_o *)((char *)&v24 + 8), (int32_t)v17, v18, v19);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_10:
    sub_1B7641C(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v25[0] = v23;
  v25[1] = v24;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v25,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
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

  if ( (byte_4A31E45 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, data);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v6);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__, v7);
    sub_1B761C0(&BoxGachaResultEffectComponent_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A31E45 = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B76164(
      (ServantStatusBattleListViewItem_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = AvalonSceneManager_TypeInfo;
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v11 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__, 0LL);
    if ( !v12 )
      sub_1B7641C(v15, v16);
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
  Il2CppObject *Object_object__48515452; // x19
  UnityEngine_GameObject_o *v10; // x19
  UnityEngine_Transform_o *v11; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4A31E46 & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, parentTr);
    sub_1B761C0(&BoxGachaResultEffectComponent_TypeInfo, v5);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    byte_4A31E46 = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48515452 = AssetData__GetObject_object__48515452(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48515452,
                                     (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A28BB1 )
  {
    effectAssetData = (AssetData_o *)sub_1B761C0(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A28BB1 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A28BB6 )
  {
    effectAssetData = (AssetData_o *)sub_1B761C0(&UnityEngine_Vector3_TypeInfo, parentTr);
    byte_4A28BB6 = 1;
  }
  if ( !v12 )
LABEL_15:
    sub_1B7641C(effectAssetData, parentTr);
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
        const MethodInfo *method)
{
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Int32_array *rareIdxList; // x8
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x22
  System_String_o *v59; // x0
  System_String_o *v60; // x23
  System_String_o *v61; // x0
  System_String_o *v62; // x21
  System_String_o *v63; // x24
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  const MethodInfo *v69; // x1

  if ( (byte_4A31E40 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1B761C0(&LocalizationManager_TypeInfo, v29);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    sub_1B761C0(&StringLiteral_43/*"\n"*/, v31);
    sub_1B761C0(&StringLiteral_15990/*"[k]"*/, v32);
    sub_1B761C0(&StringLiteral_25455/*"＠"*/, v33);
    sub_1B761C0(&StringLiteral_11465/*"SCRIPT_ACTION_CODE_TALK"*/, v34);
    byte_4A31E40 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultIdList,
    (int32_t)resultIds,
    (int32_t)talkInfo,
    (int32_t)resultIds);
  this->fields.rareIdxList = rareIdxs;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.rareIdxList, (int32_t)rareIdxs, v35, v36);
  this->fields.resultNoList = baseNos;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.resultNoList, (int32_t)baseNos, v37, v38);
  this->fields.standFigure = currentFigure;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)currentFigure, v39, v40);
  this->fields.normalFace = face;
  this->fields.currentBaseId = baseId;
  this->fields.currentEventId = eventId;
  this->fields.isShortCut = isShortCut;
  rareIdxList = this->fields.rareIdxList;
  if ( !rareIdxList )
    goto LABEL_25;
  if ( *(_QWORD *)&rareIdxList->max_length )
    this->fields.isShortCut = 0;
  this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
  this->fields.playVoiceAction = playVoice;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v43, v44);
  this->fields.endVoiceAction = endVoice;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.endVoiceAction, (int32_t)endVoice, v46, v47);
  this->fields.compensationMsgIds = messageIdList;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.compensationMsgIds, (int32_t)messageIdList, v48, v49);
  this->fields.info = talkInfo;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.info, (int32_t)talkInfo, v50, v51);
  this->fields.isUnSkippable = unskippable;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.isUnSkippable, (int32_t)unskippable, v52, v53);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.endPerformanceAction,
    (int32_t)endPerformanceAction,
    v54,
    v55);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_25;
    displayName = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
  }
  this->fields.currentSvtName = displayName;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.currentSvtName, (int32_t)displayName, v56, v57);
  Instance = (DataManager_o *)System_String__Concat_61546320(
                                (System_String_o *)StringLiteral_25455/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v42 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_25;
  v58 = (System_String_o *)Instance;
  v59 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v60 = System_String__Concat_61535060(v59, (System_String_o *)StringLiteral_15990/*"[k]"*/, 0LL);
  v61 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v62 = System_String__Concat_61535060(v61, (System_String_o *)StringLiteral_15990/*"[k]"*/, 0LL);
  v63 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11465/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v63 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v63, (System_String_o *)Instance, 0LL) )
    v60 = System_String__Concat_61535060(v58, v60, 0LL);
  this->fields.befMsg = v60;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.befMsg, (int32_t)v60, v64, v65);
  v66 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11465/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v66 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v66, (System_String_o *)Instance, 0LL) )
    v62 = System_String__Concat_61535060(v58, v62, 0LL);
  this->fields.aftMsg = v62;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.aftMsg, (int32_t)v62, v67, v68);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_25:
    sub_1B7641C(Instance, v42);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v69);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetLoader_LoadEndDataHandler_o *v6; // x20

  if ( (byte_4A31E44 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent_endloadEffect__, v3);
    sub_1B761C0(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B761C0(&StringLiteral_5833/*"Effect/BoxGacha"*/, v5);
    byte_4A31E44 = 1;
  }
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B7640C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5833/*"Effect/BoxGacha"*/, v6, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v5; // x8

  if ( (byte_4A31E4C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_12238/*"START_ITEM_GET_EFFECT"*/, method);
    sub_1B761C0(&StringLiteral_5472/*"END_DISP"*/, v3);
    byte_4A31E4C = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B7641C(resultWindowTouchBlock, method);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v5 = (System_String_o **)&StringLiteral_12238/*"START_ITEM_GET_EFFECT"*/;
  else
    v5 = (System_String_o **)&StringLiteral_5472/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v5, 0LL);
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
  const MethodInfo *v13; // [xsp+0h] [xbp-70h]

  if ( (byte_4A31E4B & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_BoxGachaResultEffectComponent_openResultCallback__, v3);
    byte_4A31E4B = 1;
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
  v12 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_1B7641C(resultWindowTouchBlock, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v12,
    v13);
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

  if ( (byte_4A31E51 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
    byte_4A31E51 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1B7641C(0LL, v8);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A31E4A & 1) == 0 )
  {
    sub_1B761C0(&FSUtility_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v3);
    sub_1B761C0(&StringLiteral_18806/*"ef_boxitem_start"*/, v4);
    sub_1B761C0(&StringLiteral_22310/*"openResultListWindow"*/, v5);
    byte_4A31E4A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18806/*"ef_boxitem_start"*/, transform, v9);
  if ( !gameObject )
    goto LABEL_9;
  v10 = gameObject;
  v11 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v11 )
LABEL_9:
    sub_1B7641C(gameObject, v7);
  v13.fields.x = OffsetX + 200.0;
  v13.fields.z = 0.0;
  v13.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v11, v13, 0LL);
  UnityEngine_GameObject__GetComponent_object_(
    v10,
    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22310/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A31E59 & 1) == 0 )
  {
    sub_1B761C0(&BoxGachaResultEffectComponent___c_TypeInfo, v1);
    byte_4A31E59 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BoxGachaResultEffectComponent___c___ctor(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___EndMessage_b__61_0(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoxGachaResultEffectComponent___c___dispMsgBefResultList_b__60_3(
        BoxGachaResultEffectComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}