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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UICommonButton_o *multiGachaButton; // x0
  struct System_Action_o *endVoiceAction; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v13; // x19
  char v14; // w8
  Il2CppObject *Instance; // x0
  System_String_o *resetBoxMsg; // x20
  CommonUI_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x22
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  if ( (byte_4B1A29B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1A29B = 1;
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
  BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v10);
  if ( this->fields.isBoxItemEmpty && !this->fields.isLastLimitBox )
  {
    if ( !this->fields.isDispAutoResetDlg )
    {
      this->fields.isDispAutoResetDlg = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v17 = (CommonUI_o *)Instance;
      v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__,
        0LL);
      if ( !v17 )
        goto LABEL_17;
      v22.fields.x = 0.0;
      v22.fields.y = -40.0;
      CommonUI__OpenFullScreenMaskDialog(v17, resetBoxMsg, -1, v21, v22, -1, 0, 0LL);
    }
    return;
  }
  multiGachaButton = (UICommonButton_o *)this->fields.messageManager;
  this->fields.isEndAfterMsg = 0;
  if ( !multiGachaButton
    || (ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)multiGachaButton, 0, 0LL),
        BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, v11),
        (multiGachaButton = (UICommonButton_o *)this->fields.resourcesPanel) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(multiGachaButton, method);
  }
  multiGachaButton = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)multiGachaButton,
                                           0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v13 = (UnityEngine_GameObject_o *)multiGachaButton;
  if ( isUnSkippable )
  {
    multiGachaButton = (UICommonButton_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                             isUnSkippable->fields.original_method_info,
                                             *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v14 = (unsigned __int8)multiGachaButton ^ 1;
    if ( !v13 )
      goto LABEL_17;
  }
  else
  {
    v14 = 1;
    if ( !multiGachaButton )
      goto LABEL_17;
  }
  UnityEngine_GameObject__SetActive(v13, v14 & 1, 0LL);
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
    sub_1BCAA3C(v4, v5);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  CommonMessageManager_o *messageManager; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  struct System_Int32_array *compensationMsgIds; // x8
  BoxGachaResultEffectComponent___c_c *v16; // x0
  System_Action_o *_9__61_0; // x20
  Il2CppObject *v18; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1A294 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isAfter, method);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__, v5, v6);
    sub_1BCA7E0(&BoxGachaResultEffectComponent___c_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5554/*"END_MSG"*/, v9, v10);
    byte_4B1A294 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5554/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1BCAA3C(messageManager, v11);
  }
  v16 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo, v11);
    v16 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__61_0 = v16->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v11);
      v16 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__61_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v13, v14);
    System_Action___ctor(_9__61_0, v18, Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = _9__61_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__61_0,
      (int64_t)_9__61_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__61_0, v13);
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
    sub_1BCAA3C(gameObject, v4);
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

  if ( (byte_4B1A29E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__, method, v2);
    byte_4B1A29E = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__OnClickMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Func_bool__o *isUnSkippable; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Action_o *endVoiceAction; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x21
  System_Action_o *v26; // x20

  if ( (byte_4B1A29F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__, v5, v6);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__, v7, v8);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__, v9, v10);
    sub_1BCA7E0(&StringLiteral_5866/*"EXE_GACHA"*/, v11, v12);
    byte_4B1A29F = 1;
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
          v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v23, v24);
          return;
        }
      }
    }
    v14 = Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__;
    if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BCA7F8(Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
    BoxGachaResultEffectComponent__setFigureFace(this, this->fields.normalFace, 0.0, v16);
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
          ResultListWindow__Close((ResultListWindow_o *)messageManager, v17);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0LL);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5866/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v20, v21);
              System_Action___ctor(
                v26,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__,
                0LL);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
                  endPerformanceAction->fields.original_method_info,
                  v26,
                  *(_QWORD *)&endPerformanceAction->fields.extra_arg,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(messageManager, v17);
  }
}


void __fastcall BoxGachaResultEffectComponent__OpenCompensationItemDialog(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *endCallBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *compensationMsgIds; // x22
  CommonUI_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B1A295 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, endCallBack, method);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1A295 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v11 = (CommonUI_o *)Instance;
  v15 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14);
  System_Collections_Generic_List_int____ctor_56116492(
    v15,
    compensationMsgIds,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v11 )
    sub_1BCAA3C(v16, v17);
  CommonUI__OpenCompensationItemDialog(v11, v15, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.afterAutoReset = callback;
  sub_1BCA784(
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct System_String_o **p_resetBoxMsg; // x19
  __int64 v22; // x1
  int v23; // w8
  System_String_o **v24; // x8
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  v12 = isLastLimitBox;
  if ( (byte_4B1A29C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isLimit, isLastLimitBox);
    sub_1BCA7E0(&string_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3109/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3106/*"BOX_GACHA_AUTO_RESET_INFO"*/, v17, v18);
    byte_4B1A29C = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_resetBoxMsg,
    (int64_t)Empty,
    isLastLimitBox,
    (int32_t)prizeName,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v23 = *((unsigned __int8 *)p_resetBoxMsg + 83);
  *((_BYTE *)p_resetBoxMsg + 84) = v12;
  if ( v23 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    if ( isLimit )
      v24 = (System_String_o **)&StringLiteral_3109/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v24 = (System_String_o **)&StringLiteral_3106/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v25 = LocalizationManager__Get(*v24, 0LL);
    v26 = System_String__Format(v25, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)p_resetBoxMsg, (int64_t)v26, v27, v28, v29, v30, v31, v32);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *currentResultInfo; // x0
  __int64 v14; // x1
  UILabel_o *currentResultLabel; // x22
  System_String_o *v16; // x23
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-48h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1A28E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&boxNo, *(_QWORD *)&boxCurrentNum);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3123/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, v11, v12);
    byte_4B1A28E = 1;
  }
  currentResultInfo = this->fields.currentResultInfo;
  if ( !currentResultInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(currentResultInfo, 1, 0LL);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3123/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v20 = boxNo;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v19 = boxCurrentNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_62415660(
                                                    v16,
                                                    v17,
                                                    (Il2CppObject *)prizeName,
                                                    v18,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_8:
    sub_1BCAA3C(currentResultInfo, *(_QWORD *)&boxNo);
  UILabel__set_text(currentResultLabel, (System_String_o *)currentResultInfo, 0LL);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onEnableBackBtn,
    (int64_t)onEnableBackBtn,
    (int64_t)method,
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
  __int64 v6; // x2
  UnityEngine_Object_o *multiGachaButton; // x21
  __int64 v8; // x1
  UnityEngine_Behaviour_o *multiGachaBgSprite; // x0
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1A28F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnble, method);
    sub_1BCA7E0(&StringLiteral_436/*"#4C4C4C"*/, v5, v6);
    byte_4B1A28F = 1;
  }
  *(_QWORD *)&v14.fields.r = 0LL;
  *(_QWORD *)&v14.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnble);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_436/*"#4C4C4C"*/, &v14, 0LL);
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
      goto LABEL_17;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
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
LABEL_17:
      sub_1BCAA3C(multiGachaBgSprite, v8);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BoxGachaItemComponent_o *enableBoxGachaInfo; // x0
  bool v17; // w8
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  UISprite_o *multiGacha2DigitNumSprite; // x21
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v29; // x22
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  v8 = enableNum;
  v30 = eventId;
  if ( (byte_4B1A28D & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaUtility_TypeInfo, *(_QWORD *)&enableNum, *(_QWORD *)&payValue);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_20767/*"img_txt_getpresent_"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20540/*"img_gachatxt_"*/, v14, v15);
    byte_4B1A28D = 1;
  }
  enableBoxGachaInfo = this->fields.enableBoxGachaInfo;
  v17 = v8 > 0;
  if ( !v8 )
    v8 = 1;
  this->fields.isCanDraw = v17;
  if ( !enableBoxGachaInfo )
    goto LABEL_12;
  BoxGachaItemComponent__Set(enableBoxGachaInfo, payTargetId, v8 * payValue, 0LL);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(this, this->fields.isCanDraw, v18);
  multiGacha1DigitNumSprite = this->fields.multiGacha1DigitNumSprite;
  multiGacha2DigitNumSprite = this->fields.multiGacha2DigitNumSprite;
  multiGacha3DigitNumSprite = this->fields.multiGacha3DigitNumSprite;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v19);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v8,
    multiGacha1DigitNumSprite,
    multiGacha2DigitNumSprite,
    multiGacha3DigitNumSprite,
    0LL);
  v23 = System_Int32__ToString((int32_t)&v30, 0LL);
  v24 = System_String__Concat_62401220((System_String_o *)StringLiteral_20540/*"img_gachatxt_"*/, v23, 0LL);
  v25 = System_Int32__ToString((int32_t)&v30, 0LL);
  v26 = System_String__Concat_62401220((System_String_o *)StringLiteral_20767/*"img_txt_getpresent_"*/, v25, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v29 = v26;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v27);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v24, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v29, 0LL);
  enableBoxGachaInfo = (BoxGachaItemComponent_o *)this->fields.itemResourceComponent;
  if ( !enableBoxGachaInfo )
LABEL_12:
    sub_1BCAA3C(enableBoxGachaInfo, *(_QWORD *)&enableNum);
  EventItemComponent__Set((EventItemComponent_o *)enableBoxGachaInfo, payTargetId, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__UpdateBackBtnStatus(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_T1__T2__o *onEnableBackBtn; // x19
  bool v5; // w20
  struct System_Func_bool__o *isUnSkippable; // x8
  char v7; // w8

  if ( (byte_4B1A299 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool__bool___, method, v2);
    byte_4B1A299 = 1;
  }
  onEnableBackBtn = (System_Action_T1__T2__o *)this->fields.onEnableBackBtn;
  v5 = !this->fields.isBoxItemEmpty || this->fields.isLastLimitBox;
  isUnSkippable = this->fields.isUnSkippable;
  if ( isUnSkippable )
    v7 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
           isUnSkippable->fields.original_method_info,
           *(_QWORD *)&isUnSkippable->fields.extra_arg) ^ 1;
  else
    v7 = 1;
  ActionExtensions__Call_bool__bool_(
    onEnableBackBtn,
    v5,
    v7 & 1,
    (const MethodInfo_2E6576C *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Delegate_o *afterAutoReset; // x21
  struct System_Action_o **p_afterAutoReset; // x20
  System_Action_o *v9; // x22
  System_Delegate_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x8
  System_Action_c *v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v22; // x19
  char v23; // w8

  if ( (byte_4B1A2A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__, v5, v6);
    byte_4B1A2A3 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  p_afterAutoReset = &this->fields.afterAutoReset;
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__,
    0LL);
  v10 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v9, 0LL);
  v17 = (int64_t)v10;
  if ( !v10 )
    goto LABEL_7;
  v18 = System_Action_TypeInfo;
  if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
    || (*p_afterAutoReset = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v18) )
  {
    sub_1BCACFC(v10);
LABEL_7:
    *p_afterAutoReset = (struct System_Action_o *)v17;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterAutoReset, v17, v11, v12, v13, v14, v15, v16);
  ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_13;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v22 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v23 = 1;
    if ( resourcesPanel )
      goto LABEL_11;
LABEL_13:
    sub_1BCAA3C(resourcesPanel, v19);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v23 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v22 )
    goto LABEL_13;
LABEL_11:
  UnityEngine_GameObject__SetActive(v22, v23 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4B1A2A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5866/*"EXE_GACHA"*/, method, v2);
    byte_4B1A2A4 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5866/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v11; // x20
  UITweener_o *v12; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v44; // [xsp+20h] [xbp-70h] BYREF
  __int128 v45; // [xsp+30h] [xbp-60h] BYREF
  __int128 v46[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B1A2A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__, v4, v5);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v8, v9);
    byte_4B1A2A1 = 1;
  }
  *((_QWORD *)&v44 + 1) = 0LL;
  v45 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v11 = (UITweener_o *)resourcesPanel;
  UITweener__Play_47527264((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v11, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v12 = (UITweener_o *)resourcesPanel;
  UITweener__Play_47527264((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v12, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12, 1, 0LL);
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
  *(_QWORD *)&v44 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1BCA784((PartyOrganizationUtility_o *)&v44, v44, v15, v16, v17, v18, v19, v20);
  BYTE8(v44) = this->fields.isShortCut;
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__,
    0LL);
  *(_QWORD *)&v45 = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&v45, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v34,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__,
    0LL);
  *((_QWORD *)&v45 + 1) = v34;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)&v45 + 8), (int64_t)v34, v35, v36, v37, v38, v39, v40);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1BCAA3C(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v46[0] = v44;
  v46[1] = v45;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v46,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v9; // x20
  char v10; // w8
  __int64 v11; // x2
  __int64 v12; // x3
  struct System_Func_bool__o *v13; // x8
  System_Action_o *v14; // x20

  if ( (byte_4B1A2A2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, v4, v5);
    byte_4B1A2A2 = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_14;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v9 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( isUnSkippable )
  {
    resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                  isUnSkippable->fields.original_method_info,
                                                  *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v10 = (unsigned __int8)resourcesPanel ^ 1;
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    v10 = 1;
    if ( !resourcesPanel )
      goto LABEL_14;
  }
  UnityEngine_GameObject__SetActive(v9, v10 & 1, 0LL);
  v13 = this->fields.isUnSkippable;
  if ( v13
    && (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v13->fields.m_target)(
          v13->fields.original_method_info,
          *(_QWORD *)&v13->fields.extra_arg) & 1) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v11, v12);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_14:
    sub_1BCAA3C(resourcesPanel, v6);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v14, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Func_bool__o *isUnSkippable; // x8
  struct System_Action_Action__float__o *endPerformanceAction; // x22
  BoxGachaResultEffectComponent___c_c *v11; // x0
  System_Action_o *_9__60_3; // x20
  Il2CppObject *v13; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4B1A2A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__, v5, v6);
    sub_1BCA7E0(&BoxGachaResultEffectComponent___c_TypeInfo, v7, v8);
    byte_4B1A2A0 = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
          isUnSkippable->fields.original_method_info,
          *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0 )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v11 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo, method);
      v11 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    _9__60_3 = v11->static_fields->__9__60_3;
    if ( !_9__60_3 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11, method);
        v11 = BoxGachaResultEffectComponent___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__60_3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(_9__60_3, v13, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__, 0LL);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__60_3 = _9__60_3;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__60_3,
        (int64_t)_9__60_3,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( !endPerformanceAction )
      sub_1BCAA3C(v11, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
      endPerformanceAction->fields.original_method_info,
      _9__60_3,
      *(_QWORD *)&endPerformanceAction->fields.extra_arg,
      this->fields.performanceSlideOutSpeed);
    BoxGachaResultEffectComponent__EndAction(this, 0, v21);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, v4);
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
  sub_1BCA784(
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
      ResultListWindow__Close_46644476(resultWindow, *p_closeCallBack, v12);
      return;
    }
LABEL_6:
    sub_1BCAA3C(resultWindow, v10);
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
  Il2CppObject *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  char *monitor; // x8
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AvalonSceneManager_c *v20; // x8
  CommonUI_o *v21; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4B1A29A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__, v11, v12);
    this = (BoxGachaResultEffectComponent_o *)sub_1BCA7E0(
                                                &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                v13,
                                                v14);
    byte_4B1A29A = 1;
  }
  monitor = (char *)v8[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  *((_QWORD *)monitor + 70) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)(monitor + 560), 0LL, v2, v3, v4, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v17);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  System_Action___ctor(v23, v8, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__, 0LL);
  if ( !v21 )
LABEL_8:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v21, DEFAULT_FADE_TIME, v23, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v53; // [xsp+20h] [xbp-70h] BYREF
  __int128 v54; // [xsp+30h] [xbp-60h] BYREF
  __int128 v55[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4B1A293 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__, v4, v5);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__, v6, v7);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, v10, v11);
    byte_4B1A293 = 1;
  }
  *((_QWORD *)&v53 + 1) = 0LL;
  v54 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v13 = this->fields.messageManager;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__,
    0LL);
  if ( !v13 )
    goto LABEL_10;
  v13->fields.touchCallbackFunc = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&v13->fields.touchCallbackFunc, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  *(_QWORD *)&v53 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1BCA784((PartyOrganizationUtility_o *)&v53, v53, v24, v25, v26, v27, v28, v29);
  BYTE8(v53) = this->fields.isShortCut;
  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__,
    0LL);
  *(_QWORD *)&v54 = v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v54, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(
    v43,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__,
    0LL);
  *((_QWORD *)&v54 + 1) = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)((char *)&v54 + 8), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_10:
    sub_1BCAA3C(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v55[0] = v53;
  v55[1] = v54;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v55,
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1

  if ( (byte_4B1A291 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__, v12, v13);
    sub_1BCA7E0(&BoxGachaResultEffectComponent_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    byte_4B1A291 = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int64_t)data,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v22 = AvalonSceneManager_TypeInfo;
    v23 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
      v22 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
    v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__, 0LL);
    if ( !v23 )
      sub_1BCAA3C(v26, v27);
    CommonUI__maskFadein(v23, DEFAULT_FADE_TIME, v25, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetData_o *effectAssetData; // x0
  __int64 v12; // x1
  Il2CppObject *Object_object__49237568; // x19
  UnityEngine_GameObject_o *v14; // x19
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x20
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_4B1A292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, parentTr, method);
    sub_1BCA7E0(&BoxGachaResultEffectComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A292 = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              effectAssetData,
                              name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__49237568,
                                     (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v14 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(
                                     (UnityEngine_GameObject_o *)effectAssetData,
                                     0LL);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v16 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C1 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  v18 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4B109C6 )
  {
    effectAssetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTr, v17);
    byte_4B109C6 = 1;
  }
  if ( !v18 )
LABEL_15:
    sub_1BCAA3C(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v14;
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
  System_String_o *Name; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  DataManager_o *Instance; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Int32_array *rareIdxList; // x8
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_o *v105; // x22
  System_String_o *v106; // x0
  System_String_o *v107; // x23
  System_String_o *v108; // x0
  System_String_o *v109; // x21
  __int64 v110; // x1
  System_String_o *v111; // x24
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x1
  System_String_o *v119; // x20
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  const MethodInfo *v126; // x1

  Name = displayName;
  if ( (byte_4B1A28C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, talkInfo);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28, v29);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_16163/*"[k]"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_25723/*"＠"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11607/*"SCRIPT_ACTION_CODE_TALK"*/, v40, v41);
    byte_4B1A28C = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultIdList,
    (int64_t)resultIds,
    (int64_t)talkInfo,
    (int32_t)resultIds,
    (System_String_o *)rareIdxs,
    (BattleSetupInfo_o *)baseNos,
    (FollowerInfo_o *)displayName,
    (PartyListViewItem_o *)currentFigure);
  this->fields.rareIdxList = rareIdxs;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rareIdxList, (int64_t)rareIdxs, v42, v43, v44, v45, v46, v47);
  this->fields.resultNoList = baseNos;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultNoList, (int64_t)baseNos, v48, v49, v50, v51, v52, v53);
  this->fields.standFigure = currentFigure;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.standFigure,
    (int64_t)currentFigure,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAction,
    (int64_t)playVoice,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.endVoiceAction = endVoice;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endVoiceAction,
    (int64_t)endVoice,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.compensationMsgIds = messageIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.compensationMsgIds,
    (int64_t)messageIdList,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.info = talkInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.info, (int64_t)talkInfo, v81, v82, v83, v84, v85, v86);
  this->fields.isUnSkippable = unskippable;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.isUnSkippable,
    (int64_t)unskippable,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.endPerformanceAction,
    (int64_t)endPerformanceAction,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  if ( System_String__IsNullOrEmpty(Name, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_25;
    Name = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
  }
  this->fields.currentSvtName = Name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentSvtName,
    (int64_t)Name,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  Instance = (DataManager_o *)System_String__Concat_62412480(
                                (System_String_o *)StringLiteral_25723/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v61 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_25;
  v105 = (System_String_o *)Instance;
  v106 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v107 = System_String__Concat_62401220(v106, (System_String_o *)StringLiteral_16163/*"[k]"*/, 0LL);
  v108 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v109 = System_String__Concat_62401220(v108, (System_String_o *)StringLiteral_16163/*"[k]"*/, 0LL);
  v111 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v110);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v111 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v111, (System_String_o *)Instance, 0LL) )
    v107 = System_String__Concat_62401220(v105, v107, 0LL);
  this->fields.befMsg = v107;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.befMsg, (int64_t)v107, v112, v113, v114, v115, v116, v117);
  v119 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11607/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v119 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v119, (System_String_o *)Instance, 0LL) )
    v109 = System_String__Concat_62401220(v105, v109, 0LL);
  this->fields.aftMsg = v109;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aftMsg, (int64_t)v109, v120, v121, v122, v123, v124, v125);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v61);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v126);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  AssetLoader_LoadEndDataHandler_o *v11; // x20
  __int64 v12; // x1

  if ( (byte_4B1A290 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent_endloadEffect__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5946/*"Effect/BoxGacha"*/, v9, v10);
    byte_4B1A290 = 1;
  }
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5946/*"Effect/BoxGacha"*/, v11, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v7; // x8

  if ( (byte_4B1A298 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12398/*"START_ITEM_GET_EFFECT"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_5549/*"END_DISP"*/, v4, v5);
    byte_4B1A298 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1BCAA3C(resultWindowTouchBlock, method);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v7 = (System_String_o **)&StringLiteral_12398/*"START_ITEM_GET_EFFECT"*/;
  else
    v7 = (System_String_o **)&StringLiteral_5549/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v7, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  System_Int32_array *resultNoList; // x23
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  _BOOL4 isDischargeGetEffectItem; // w27
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x26
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]

  if ( (byte_4B1A297 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BoxGachaResultEffectComponent_openResultCallback__, v4, v5);
    byte_4B1A297 = 1;
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
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_1BCAA3C(resultWindowTouchBlock, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v17,
    v18);
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

  if ( (byte_4B1A29D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&type, method);
    byte_4B1A29D = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1BCAA3C(0LL, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x20
  __int64 v15; // x1
  UnityEngine_Transform_o *v16; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A296 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v4, v5);
    sub_1BCA7E0(&StringLiteral_19006/*"ef_boxitem_start"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_22559/*"openResultListWindow"*/, v8, v9);
    byte_4B1A296 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_19006/*"ef_boxitem_start"*/, transform, v13);
  if ( !gameObject )
    goto LABEL_9;
  v14 = gameObject;
  v16 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v15);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v16 )
LABEL_9:
    sub_1BCAA3C(gameObject, v11);
  v18.fields.x = OffsetX + 200.0;
  v18.fields.z = 0.0;
  v18.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v16, v18, 0LL);
  UnityEngine_GameObject__GetComponent_object_(
    v14,
    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22559/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1A2A5 & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaResultEffectComponent___c_TypeInfo, v1, v2);
    byte_4B1A2A5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BoxGachaResultEffectComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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