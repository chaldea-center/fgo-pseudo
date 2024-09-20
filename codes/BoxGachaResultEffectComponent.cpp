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

  if ( (byte_4A5F0A8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F0A8 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      resetBoxMsg = this->fields.resetBoxMsg;
      v12 = (CommonUI_o *)Instance;
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_0__,
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
    sub_1B8880C(multiGachaButton, method);
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
    sub_1B8880C(v4, v5);
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
  System_Action_o *_9__61_0; // x20
  Il2CppObject *v11; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5F0A1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__);
    sub_1B885B0(&BoxGachaResultEffectComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_5478/*"END_MSG"*/);
    byte_4A5F0A1 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5478/*"END_MSG"*/, 0LL);
      return;
    }
LABEL_19:
    sub_1B8880C(messageManager, v5);
  }
  v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
    v9 = BoxGachaResultEffectComponent___c_TypeInfo;
  }
  _9__61_0 = v9->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__61_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__61_0, v11, Method_BoxGachaResultEffectComponent___c__EndMessage_b__61_0__, 0LL);
    static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = _9__61_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v13, v14);
  }
  BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, _9__61_0, v7);
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
    sub_1B8880C(gameObject, v4);
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

  if ( (byte_4A5F0AB & 1) == 0 )
  {
    sub_1B885B0(&Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
    byte_4A5F0AB = 1;
  }
  BoxGachaResultEffectComponent__EndAction(this, 1, v2);
  v4 = Method_BoxGachaResultEffectComponent_OnClickBackBtn__;
  if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickBackBtn__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_BoxGachaResultEffectComponent_OnClickBackBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__OnClickMultiGachaButton(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *isUnSkippable; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  CommonMessageManager_o *messageManager; // x0
  struct System_Action_o *endVoiceAction; // x8
  struct System_Int32_array *compensationMsgIds; // x8
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2
  struct System_Action_Action__float__o *endPerformanceAction; // x21
  System_Action_o *v14; // x20

  if ( (byte_4A5F0AC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__);
    sub_1B885B0(&StringLiteral_5754/*"EXE_GACHA"*/);
    byte_4A5F0AC = 1;
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
          v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v11,
            (Il2CppObject *)this,
            Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_0__,
            0LL);
          BoxGachaResultEffectComponent__OpenCompensationItemDialog(this, v11, v12);
          return;
        }
      }
    }
    v4 = Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__;
    if ( (*((_BYTE *)Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_BoxGachaResultEffectComponent_OnClickMultiGachaButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
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
        messageManager = (CommonMessageManager_o *)this->fields.resultWindow;
        if ( messageManager )
        {
          ResultListWindow__Close((ResultListWindow_o *)messageManager, v7);
          messageManager = (CommonMessageManager_o *)this->fields.multiGachaButton;
          if ( messageManager )
          {
            UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)messageManager, 0, 0LL);
            if ( this->fields.isShortCut )
            {
              messageManager = (CommonMessageManager_o *)this->fields.targetFSM;
              if ( messageManager )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)messageManager, (System_String_o *)StringLiteral_5754/*"EXE_GACHA"*/, 0LL);
                return;
              }
            }
            else
            {
              endPerformanceAction = this->fields.endPerformanceAction;
              v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v14,
                (Il2CppObject *)this,
                Method_BoxGachaResultEffectComponent__OnClickMultiGachaButton_b__79_1__,
                0LL);
              if ( endPerformanceAction )
              {
                ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
                  endPerformanceAction->fields.original_method_info,
                  v14,
                  *(_QWORD *)&endPerformanceAction->fields.extra_arg,
                  this->fields.performanceSlideOutSpeed);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B8880C(messageManager, v7);
  }
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

  if ( (byte_4A5F0A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F0A2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  compensationMsgIds = (System_Collections_Generic_IEnumerable_T__o *)this->fields.compensationMsgIds;
  v7 = (CommonUI_o *)Instance;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v8,
    compensationMsgIds,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  if ( !v7 )
    sub_1B8880C(v9, v10);
  CommonUI__OpenCompensationItemDialog(v7, v8, endCallBack, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetAfterAutoResetCallBack(
        BoxGachaResultEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.afterAutoReset = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterAutoReset, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BoxGachaResultEffectComponent__SetAutoResetMessage(
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
  System_String_o *v16; // x0
  char v17; // w2
  int32_t v18; // w3

  v9 = isLastLimitBox;
  if ( (byte_4A5F0A9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_3086/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/);
    sub_1B885B0(&StringLiteral_3083/*"BOX_GACHA_AUTO_RESET_INFO"*/);
    byte_4A5F0A9 = 1;
  }
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.resetBoxMsg = static_fields->Empty;
  p_resetBoxMsg = &this->fields.resetBoxMsg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_resetBoxMsg, (int32_t)Empty, isLastLimitBox, (int32_t)prizeName);
  v13 = *((unsigned __int8 *)p_resetBoxMsg + 83);
  *((_BYTE *)p_resetBoxMsg + 84) = v9;
  if ( v13 && !isLastLimitBox )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimit )
      v14 = (System_String_o **)&StringLiteral_3086/*"BOX_GACHA_LIMIT_AUTO_RESET_INFO"*/;
    else
      v14 = (System_String_o **)&StringLiteral_3083/*"BOX_GACHA_AUTO_RESET_INFO"*/;
    v15 = LocalizationManager__Get(*v14, 0LL);
    v16 = System_String__Format(v15, (Il2CppObject *)prizeName, 0LL);
    *p_resetBoxMsg = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_resetBoxMsg, (int32_t)v16, v17, v18);
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
  UnityEngine_GameObject_o *currentResultInfo; // x0
  UILabel_o *currentResultLabel; // x22
  System_String_o *v11; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5F09B & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3100/*"BOX_GACHA_RESULT_CURRENT_INFO"*/);
    byte_4A5F09B = 1;
  }
  currentResultInfo = this->fields.currentResultInfo;
  if ( !currentResultInfo )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(currentResultInfo, 1, 0LL);
  currentResultLabel = this->fields.currentResultLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3100/*"BOX_GACHA_RESULT_CURRENT_INFO"*/, 0LL);
  v21 = boxNo;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14);
  v20 = boxCurrentNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
  currentResultInfo = (UnityEngine_GameObject_o *)System_String__Format_61721472(
                                                    v11,
                                                    v15,
                                                    (Il2CppObject *)prizeName,
                                                    v19,
                                                    0LL);
  if ( !currentResultLabel )
LABEL_8:
    sub_1B8880C(currentResultInfo, *(_QWORD *)&boxNo);
  UILabel__set_text(currentResultLabel, (System_String_o *)currentResultInfo, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__SetEnableBackBtnAction(
        BoxGachaResultEffectComponent_o *this,
        System_Action_bool__bool__o *onEnableBackBtn,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.onEnableBackBtn = onEnableBackBtn;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onEnableBackBtn,
    (int32_t)onEnableBackBtn,
    (int32_t)method,
    v3);
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
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5F09C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_441/*"#4C4C4C"*/);
    byte_4A5F09C = 1;
  }
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  multiGachaButton = (UnityEngine_Object_o *)this->fields.multiGachaButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(multiGachaButton, 0LL, 0LL) )
  {
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaButton;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(multiGachaBgSprite, isEnble, 0LL);
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_441/*"#4C4C4C"*/, &v12, 0LL);
    a = 1.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    if ( !isEnble )
    {
      g = v12.fields.g;
      r = v12.fields.r;
      b = v12.fields.b;
      a = v12.fields.a;
    }
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaBgSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v13, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGachaTimeSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v14, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiInfoTxtSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v15, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha1DigitNumSprite;
    if ( !multiGachaBgSprite )
      goto LABEL_17;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v16, 0LL);
    multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha2DigitNumSprite;
    if ( !multiGachaBgSprite
      || (v17.fields.r = r,
          v17.fields.g = g,
          v17.fields.b = b,
          v17.fields.a = a,
          UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v17, 0LL),
          (multiGachaBgSprite = (UnityEngine_Behaviour_o *)this->fields.multiGacha3DigitNumSprite) == 0LL) )
    {
LABEL_17:
      sub_1B8880C(multiGachaBgSprite, v6);
    }
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color((UIWidget_o *)multiGachaBgSprite, v18, 0LL);
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
  BoxGachaItemComponent_o *enableBoxGachaInfo; // x0
  bool v11; // w8
  const MethodInfo *v12; // x2
  UISprite_o *multiGacha2DigitNumSprite; // x21
  UISprite_o *multiGacha1DigitNumSprite; // x24
  UISprite_o *multiGacha3DigitNumSprite; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  UISprite_o *multiGachaTimeSprite; // x23
  System_String_o *v21; // x22
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF

  v8 = enableNum;
  v22 = eventId;
  if ( (byte_4A5F09A & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaUtility_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20545/*"img_txt_getpresent_"*/);
    sub_1B885B0(&StringLiteral_20321/*"img_gachatxt_"*/);
    byte_4A5F09A = 1;
  }
  enableBoxGachaInfo = this->fields.enableBoxGachaInfo;
  v11 = v8 > 0;
  if ( !v8 )
    v8 = 1;
  this->fields.isCanDraw = v11;
  if ( !enableBoxGachaInfo )
    goto LABEL_12;
  BoxGachaItemComponent__Set(enableBoxGachaInfo, payTargetId, v8 * payValue, 0LL);
  BoxGachaResultEffectComponent__SetGachaButtonStatus(this, this->fields.isCanDraw, v12);
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
  v16 = System_Int32__ToString((int32_t)&v22, 0LL);
  v17 = System_String__Concat_61707032((System_String_o *)StringLiteral_20321/*"img_gachatxt_"*/, v16, 0LL);
  v18 = System_Int32__ToString((int32_t)&v22, 0LL);
  v19 = System_String__Concat_61707032((System_String_o *)StringLiteral_20545/*"img_txt_getpresent_"*/, v18, 0LL);
  multiGachaTimeSprite = this->fields.multiGachaTimeSprite;
  v21 = v19;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(multiGachaTimeSprite, v17, 0LL);
  EventRewardRootComponent__setRewardInfoImg(this->fields.multiInfoTxtSprite, v21, 0LL);
  enableBoxGachaInfo = (BoxGachaItemComponent_o *)this->fields.itemResourceComponent;
  if ( !enableBoxGachaInfo )
LABEL_12:
    sub_1B8880C(enableBoxGachaInfo, *(_QWORD *)&enableNum);
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

  if ( (byte_4A5F0A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool__bool___);
    byte_4A5F0A6 = 1;
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
    (const MethodInfo_2DD5A3C *)Method_ActionExtensions_Call_bool__bool___);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_Delegate_o *afterAutoReset; // x21
  struct System_Action_o **p_afterAutoReset; // x20
  System_Action_o *v5; // x22
  System_Delegate_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Delegate_o *v9; // x8
  System_Action_c *v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v14; // x19
  char v15; // w8

  if ( (byte_4A5F0B0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__);
    byte_4A5F0B0 = 1;
  }
  afterAutoReset = (System_Delegate_o *)this->fields.afterAutoReset;
  p_afterAutoReset = &this->fields.afterAutoReset;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__CheckAutoResetEnable_b__71_1__,
    0LL);
  v6 = System_Delegate__Combine(afterAutoReset, (System_Delegate_o *)v5, 0LL);
  v9 = v6;
  if ( !v6 )
    goto LABEL_7;
  v10 = System_Action_TypeInfo;
  if ( (System_Action_c *)v6->klass != System_Action_TypeInfo
    || (*p_afterAutoReset = (struct System_Action_o *)v6, (System_Action_c *)v6->klass != v10) )
  {
    sub_1B88ACC(v6);
LABEL_7:
    *p_afterAutoReset = (struct System_Action_o *)v9;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterAutoReset, (int32_t)v9, v7, v8);
  ActionExtensions__Call(this->fields.afterAutoReset, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_13;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v14 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( !isUnSkippable )
  {
    v15 = 1;
    if ( resourcesPanel )
      goto LABEL_11;
LABEL_13:
    sub_1B8880C(resourcesPanel, v11);
  }
  resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                isUnSkippable->fields.original_method_info,
                                                *(_QWORD *)&isUnSkippable->fields.extra_arg);
  v15 = (unsigned __int8)resourcesPanel ^ 1;
  if ( !v14 )
    goto LABEL_13;
LABEL_11:
  UnityEngine_GameObject__SetActive(v14, v15 & 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___CheckAutoResetEnable_b__71_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ScriptMessageCommonManager_o *messageManager; // x0

  *(_WORD *)&this->fields.isEndAfterMsg = 0;
  messageManager = (ScriptMessageCommonManager_o *)this->fields.messageManager;
  if ( !messageManager )
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5F0B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5754/*"EXE_GACHA"*/);
    byte_4A5F0B1 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5754/*"EXE_GACHA"*/, 0LL);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_0(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resourcesPanel; // x0
  UITweener_o *v4; // x20
  UITweener_o *v5; // x20
  UICommonButton_o *multiGachaButton; // x20
  bool enabled; // w0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v19; // [xsp+20h] [xbp-70h] BYREF
  __int128 v20; // [xsp+30h] [xbp-60h] BYREF
  __int128 v21[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A5F0AE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4A5F0AE = 1;
  }
  *((_QWORD *)&v19 + 1) = 0LL;
  v20 = 0uLL;
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v4 = (UITweener_o *)resourcesPanel;
  UITweener__Play_46965404((UITweener_o *)resourcesPanel, 1, 0LL);
  UITweener__ResetToBeginning(v4, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v4, 1, 0LL);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
    goto LABEL_12;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                resourcesPanel,
                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !resourcesPanel )
    goto LABEL_12;
  v5 = (UITweener_o *)resourcesPanel;
  UITweener__Play_46965404((UITweener_o *)resourcesPanel, 1, 0LL);
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
  *(_QWORD *)&v19 = BoxGachaTalkInfo__getAfterVoiceId(
                      (BoxGachaTalkInfo_o *)resourcesPanel,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19, v19, v8, v9);
  BYTE8(v19) = this->fields.isShortCut;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_1__,
    0LL);
  *(_QWORD *)&v20 = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20, (int32_t)v10, v11, v12);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_2__,
    0LL);
  *((_QWORD *)&v20 + 1) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)&v20 + 8), (int32_t)v13, v14, v15);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_12:
    sub_1B8880C(resourcesPanel, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v21[0] = v19;
  v21[1] = v20;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v21,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent___dispMsgAftResultList_b__70_1(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *resourcesPanel; // x0
  struct System_Func_bool__o *isUnSkippable; // x8
  UnityEngine_GameObject_o *v6; // x20
  char v7; // w8
  struct System_Func_bool__o *v8; // x8
  System_Action_o *v9; // x20

  if ( (byte_4A5F0AF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__);
    byte_4A5F0AF = 1;
  }
  BoxGachaResultEffectComponent__UpdateBackBtnStatus(this, method);
  resourcesPanel = (UnityEngine_Component_o *)this->fields.resourcesPanel;
  if ( !resourcesPanel )
    goto LABEL_14;
  resourcesPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resourcesPanel, 0LL);
  isUnSkippable = this->fields.isUnSkippable;
  v6 = (UnityEngine_GameObject_o *)resourcesPanel;
  if ( isUnSkippable )
  {
    resourcesPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
                                                  isUnSkippable->fields.original_method_info,
                                                  *(_QWORD *)&isUnSkippable->fields.extra_arg);
    v7 = (unsigned __int8)resourcesPanel ^ 1;
    if ( !v6 )
      goto LABEL_14;
  }
  else
  {
    v7 = 1;
    if ( !resourcesPanel )
      goto LABEL_14;
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
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_CheckAutoResetEnable__, 0LL);
  }
  resourcesPanel = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !resourcesPanel )
LABEL_14:
    sub_1B8880C(resourcesPanel, v3);
  CommonMessageManager__SetMessageBlock((CommonMessageManager_o *)resourcesPanel, this->fields.aftMsg, 0, v9, 0LL);
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
  struct System_Func_bool__o *isUnSkippable; // x8
  struct System_Action_Action__float__o *endPerformanceAction; // x22
  BoxGachaResultEffectComponent___c_c *v5; // x0
  System_Action_o *_9__60_3; // x20
  Il2CppObject *v7; // x21
  struct BoxGachaResultEffectComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_4A5F0AD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__);
    sub_1B885B0(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4A5F0AD = 1;
  }
  isUnSkippable = this->fields.isUnSkippable;
  if ( !isUnSkippable
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))isUnSkippable->fields.m_target)(
          isUnSkippable->fields.original_method_info,
          *(_QWORD *)&isUnSkippable->fields.extra_arg) & 1) == 0 )
  {
    this->fields.isShortCut = 1;
    endPerformanceAction = this->fields.endPerformanceAction;
    v5 = BoxGachaResultEffectComponent___c_TypeInfo;
    if ( !BoxGachaResultEffectComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent___c_TypeInfo);
      v5 = BoxGachaResultEffectComponent___c_TypeInfo;
    }
    _9__60_3 = v5->static_fields->__9__60_3;
    if ( !_9__60_3 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = BoxGachaResultEffectComponent___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__60_3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__60_3, v7, Method_BoxGachaResultEffectComponent___c__dispMsgBefResultList_b__60_3__, 0LL);
      static_fields = BoxGachaResultEffectComponent___c_TypeInfo->static_fields;
      static_fields->__9__60_3 = _9__60_3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_3, (int32_t)_9__60_3, v9, v10);
    }
    if ( !endPerformanceAction )
      sub_1B8880C(v5, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Action_o *, _QWORD, float))endPerformanceAction->fields.m_target)(
      endPerformanceAction->fields.original_method_info,
      _9__60_3,
      *(_QWORD *)&endPerformanceAction->fields.extra_arg,
      this->fields.performanceSlideOutSpeed);
    BoxGachaResultEffectComponent__EndAction(this, 0, v11);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, v4);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)callBack, (int32_t)method, v3);
  resultWindow = this->fields.resultWindow;
  if ( !resultWindow )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)resultWindow, 0LL) )
  {
    resultWindow = this->fields.resultWindow;
    if ( resultWindow )
    {
      ResultListWindow__Close_45773016(resultWindow, *p_closeCallBack, v8);
      return;
    }
LABEL_6:
    sub_1B8880C(resultWindow, v6);
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
  char *monitor; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5F0A7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__);
    this = (BoxGachaResultEffectComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F0A7 = 1;
  }
  monitor = (char *)v4[2].monitor;
  if ( !monitor )
    goto LABEL_8;
  *((_QWORD *)monitor + 70) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(monitor + 560), 0, v2, v3);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, v4, Method_BoxGachaResultEffectComponent__dispMsgAftResultList_b__70_0__, 0LL);
  if ( !v8 )
LABEL_8:
    sub_1B8880C(this, method);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__dispMsgBefResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageManager; // x0
  struct CommonMessageManager_o *v4; // x22
  System_Action_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Action_EventSvtControl_PlayBoxGachVoiceArg__o *playVoiceAction; // x8
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int128 v19; // [xsp+20h] [xbp-70h] BYREF
  __int128 v20; // [xsp+30h] [xbp-60h] BYREF
  __int128 v21[2]; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4A5F0A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    byte_4A5F0A0 = 1;
  }
  *((_QWORD *)&v19 + 1) = 0LL;
  v20 = 0uLL;
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  messageManager = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                messageManager,
                                                (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !messageManager )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageManager, 0, 0LL);
  messageManager = (UnityEngine_Component_o *)this->fields.messageManager;
  if ( !messageManager )
    goto LABEL_10;
  CommonMessageManager__Init((CommonMessageManager_o *)messageManager, 0LL);
  v4 = this->fields.messageManager;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_0__,
    0LL);
  if ( !v4 )
    goto LABEL_10;
  v4->fields.touchCallbackFunc = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.touchCallbackFunc, (int32_t)v5, v6, v7);
  messageManager = (UnityEngine_Component_o *)this->fields.info;
  if ( !messageManager )
    goto LABEL_10;
  *(_QWORD *)&v19 = BoxGachaTalkInfo__getBeforeVoiceId(
                      (BoxGachaTalkInfo_o *)messageManager,
                      this->fields.randomTalkIdx,
                      0LL);
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19, v19, v8, v9);
  BYTE8(v19) = this->fields.isShortCut;
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_1__,
    0LL);
  *(_QWORD *)&v20 = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20, (int32_t)v10, v11, v12);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent__dispMsgBefResultList_b__60_2__,
    0LL);
  *((_QWORD *)&v20 + 1) = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)&v20 + 8), (int32_t)v13, v14, v15);
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
LABEL_10:
    sub_1B8880C(messageManager, method);
  m_target = playVoiceAction->fields.m_target;
  original_method_info = playVoiceAction->fields.original_method_info;
  v21[0] = v19;
  v21[1] = v20;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    v21,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall BoxGachaResultEffectComponent__endloadEffect(
        BoxGachaResultEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5F09E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__);
    sub_1B885B0(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F09E = 1;
  }
  if ( data )
  {
    BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData = data;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)BoxGachaResultEffectComponent_TypeInfo->static_fields,
      (int32_t)data,
      (int32_t)method,
      v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = AvalonSceneManager_TypeInfo;
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v7 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent__endloadEffect_b__58_0__, 0LL);
    if ( !v8 )
      sub_1B8880C(v11, v12);
    CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BoxGachaResultEffectComponent__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__48635516; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4A5F09F & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&BoxGachaResultEffectComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F09F = 1;
  }
  effectAssetData = BoxGachaResultEffectComponent_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              effectAssetData,
                              name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__48635516,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  if ( !byte_4A55CE1 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0LL);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4A55CE6 )
  {
    effectAssetData = (AssetData_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(effectAssetData, parentTr);
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
        const MethodInfo *method)
{
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Int32_array *rareIdxList; // x8
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x22
  System_String_o *v52; // x0
  System_String_o *v53; // x23
  System_String_o *v54; // x0
  System_String_o *v55; // x21
  System_String_o *v56; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x1

  if ( (byte_4A5F099 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_15996/*"[k]"*/);
    sub_1B885B0(&StringLiteral_25468/*"＠"*/);
    sub_1B885B0(&StringLiteral_11469/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4A5F099 = 1;
  }
  this->fields.currentSvtId = svtId;
  this->fields.resultIdList = resultIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultIdList,
    (int32_t)resultIds,
    (int32_t)talkInfo,
    (int32_t)resultIds);
  this->fields.rareIdxList = rareIdxs;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rareIdxList, (int32_t)rareIdxs, v28, v29);
  this->fields.resultNoList = baseNos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultNoList, (int32_t)baseNos, v30, v31);
  this->fields.standFigure = currentFigure;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)currentFigure, v32, v33);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v36, v37);
  this->fields.endVoiceAction = endVoice;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endVoiceAction, (int32_t)endVoice, v39, v40);
  this->fields.compensationMsgIds = messageIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.compensationMsgIds, (int32_t)messageIdList, v41, v42);
  this->fields.info = talkInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.info, (int32_t)talkInfo, v43, v44);
  this->fields.isUnSkippable = unskippable;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isUnSkippable, (int32_t)unskippable, v45, v46);
  this->fields.endPerformanceAction = endPerformanceAction;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endPerformanceAction,
    (int32_t)endPerformanceAction,
    v47,
    v48);
  if ( System_String__IsNullOrEmpty(displayName, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSvtId,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_25;
    displayName = ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
  }
  this->fields.currentSvtName = displayName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentSvtName, (int32_t)displayName, v49, v50);
  Instance = (DataManager_o *)System_String__Concat_61718292(
                                (System_String_o *)StringLiteral_25468/*"＠"*/,
                                this->fields.currentSvtName,
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                0LL);
  v35 = (unsigned int)randomTalkIdx;
  this->fields.randomTalkIdx = randomTalkIdx;
  if ( !talkInfo )
    goto LABEL_25;
  v51 = (System_String_o *)Instance;
  v52 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, randomTalkIdx, 0LL);
  v53 = System_String__Concat_61707032(v52, (System_String_o *)StringLiteral_15996/*"[k]"*/, 0LL);
  v54 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  v55 = System_String__Concat_61707032(v54, (System_String_o *)StringLiteral_15996/*"[k]"*/, 0LL);
  v56 = BoxGachaTalkInfo__getBeforeTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11469/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v56 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v56, (System_String_o *)Instance, 0LL) )
    v53 = System_String__Concat_61707032(v51, v53, 0LL);
  this->fields.befMsg = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.befMsg, (int32_t)v53, v57, v58);
  v59 = BoxGachaTalkInfo__getAfterTalkMessage(talkInfo, this->fields.randomTalkIdx, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11469/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  if ( !v59 )
    goto LABEL_25;
  if ( !System_String__StartsWith(v59, (System_String_o *)Instance, 0LL) )
    v55 = System_String__Concat_61707032(v51, v55, 0LL);
  this->fields.aftMsg = v55;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aftMsg, (int32_t)v55, v60, v61);
  Instance = (DataManager_o *)this->fields.resourcesPanel;
  if ( !Instance
    || (Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0LL )
  {
LABEL_25:
    sub_1B8880C(Instance, v35);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  *(_DWORD *)&this->fields.isEndAfterMsg = 0;
  BoxGachaResultEffectComponent__loadBoxGachaEffect(this, v62);
}


void __fastcall BoxGachaResultEffectComponent__loadBoxGachaEffect(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetLoader_LoadEndDataHandler_o *v3; // x20

  if ( (byte_4A5F09D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent_endloadEffect__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&StringLiteral_5834/*"Effect/BoxGacha"*/);
    byte_4A5F09D = 1;
  }
  v3 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v3,
    (Il2CppObject *)this,
    Method_BoxGachaResultEffectComponent_endloadEffect__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_5834/*"Effect/BoxGacha"*/, v3, 1, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultCallback(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  System_String_o **v4; // x8

  if ( (byte_4A5F0A5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12242/*"START_ITEM_GET_EFFECT"*/);
    sub_1B885B0(&StringLiteral_5473/*"END_DISP"*/);
    byte_4A5F0A5 = 1;
  }
  resultWindowTouchBlock = this->fields.resultWindowTouchBlock;
  if ( !resultWindowTouchBlock
    || (UnityEngine_GameObject__SetActive(resultWindowTouchBlock, 0, 0LL),
        (resultWindowTouchBlock = (UnityEngine_GameObject_o *)this->fields.targetFSM) == 0LL) )
  {
    sub_1B8880C(resultWindowTouchBlock, method);
  }
  if ( this->fields.isDischargeGetEffectItem )
    v4 = (System_String_o **)&StringLiteral_12242/*"START_ITEM_GET_EFFECT"*/;
  else
    v4 = (System_String_o **)&StringLiteral_5473/*"END_DISP"*/;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)resultWindowTouchBlock, *v4, 0LL);
}


void __fastcall BoxGachaResultEffectComponent__openResultListWindow(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resultWindowTouchBlock; // x0
  ResultListWindow_o *resultWindow; // x20
  System_Int32_array *resultIdList; // x21
  System_Int32_array *rareIdxList; // x22
  System_Int32_array *resultNoList; // x23
  int32_t currentBaseId; // w24
  int32_t currentEventId; // w25
  _BOOL4 isDischargeGetEffectItem; // w27
  System_Action_o *v11; // x26
  const MethodInfo *v12; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5F0A4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaResultEffectComponent_openResultCallback__);
    byte_4A5F0A4 = 1;
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
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaResultEffectComponent_openResultCallback__, 0LL);
  if ( !resultWindow )
LABEL_6:
    sub_1B8880C(resultWindowTouchBlock, method);
  ResultListWindow__OpenResultList(
    resultWindow,
    resultIdList,
    rareIdxList,
    resultNoList,
    currentBaseId,
    currentEventId,
    isDischargeGetEffectItem,
    v11,
    v12);
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

  if ( (byte_4A5F0AA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0AA = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = this->fields.standFigure;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    UIStandFigureR__SetFace(v9, type, fadeTime, 0LL);
  }
}


void __fastcall BoxGachaResultEffectComponent__showResultList(
        BoxGachaResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  float OffsetX; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F0A3 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1B885B0(&StringLiteral_18812/*"ef_boxitem_start"*/);
    sub_1B885B0(&StringLiteral_22319/*"openResultListWindow"*/);
    byte_4A5F0A3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18812/*"ef_boxitem_start"*/, transform, v6);
  if ( !gameObject )
    goto LABEL_9;
  v7 = gameObject;
  v8 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  OffsetX = FSUtility__GetOffsetX(68.0, 1, 0LL);
  if ( !v8 )
LABEL_9:
    sub_1B8880C(gameObject, v4);
  v10.fields.x = OffsetX + 200.0;
  v10.fields.z = 0.0;
  v10.fields.y = 70.0;
  UnityEngine_Transform__set_localPosition(v8, v10, 0LL);
  UnityEngine_GameObject__GetComponent_object_(
    v7,
    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22319/*"openResultListWindow"*/,
    this->fields.openResultWindowTime,
    0LL);
}


void __fastcall BoxGachaResultEffectComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F0B2 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaResultEffectComponent___c_TypeInfo);
    byte_4A5F0B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BoxGachaResultEffectComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BoxGachaResultEffectComponent___c_TypeInfo->static_fields->__9 = (struct BoxGachaResultEffectComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BoxGachaResultEffectComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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