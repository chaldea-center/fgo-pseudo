void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A57A8B & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57A8B = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 27;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__Callback(
        CancelConfirmDeckIdDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *v5; // x20
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_33207944(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_33207944(
        CancelConfirmDeckIdDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A57A88 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CancelConfirmDeckIdDialog_EndClose__);
    byte_4A57A88 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__CreateDeckIDString(
        CancelConfirmDeckIdDialog_o *this,
        int32_t deckNo,
        int32_t deckID,
        bool isFixed,
        bool isMainQuestSupportDeck,
        const MethodInfo *method)
{
  System_String_o **v10; // x8
  __int64 v11; // x24
  __int64 v12; // x25
  System_String_o *v13; // x22
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A57A87 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12395/*"SUPPORT_EVENTQUEST"*/);
    sub_1B885B0(&StringLiteral_12393/*"SUPPORT_DECK_NOT_FIXED"*/);
    sub_1B885B0(&StringLiteral_12385/*"SUPPORT_DECKID_FREE"*/);
    sub_1B885B0(&StringLiteral_12408/*"SUPPORT_MAINQUEST"*/);
    sub_1B885B0(&StringLiteral_12391/*"SUPPORT_DECK_ID_FIXED"*/);
    byte_4A57A87 = 1;
  }
  if ( isFixed )
    v10 = (System_String_o **)&StringLiteral_12391/*"SUPPORT_DECK_ID_FIXED"*/;
  else
    v10 = (System_String_o **)&StringLiteral_12385/*"SUPPORT_DECKID_FREE"*/;
  v11 = StringLiteral_12408/*"SUPPORT_MAINQUEST"*/;
  v12 = StringLiteral_12395/*"SUPPORT_EVENTQUEST"*/;
  v13 = *v10;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( deckID )
    {
LABEL_8:
      v14 = LocalizationManager__Get(v13, 0LL);
      v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(deckID, 0LL);
      v16 = System_String__Format(v14, v15, 0LL);
      goto LABEL_11;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( deckID )
      goto LABEL_8;
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12393/*"SUPPORT_DECK_NOT_FIXED"*/, 0LL);
LABEL_11:
  v17 = v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isMainQuestSupportDeck )
    v18 = (System_String_o *)v11;
  else
    v18 = (System_String_o *)v12;
  v19 = LocalizationManager__Get(v18, 0LL);
  v26 = deckNo;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format(v19, v23, 0LL);
  return System_String__Concat_61707032(v24, v17, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__EndClose(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmDeckIdDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall CancelConfirmDeckIdDialog__EndOpen(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmDeckIdDialog__Init(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A57A84 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57A84 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.fixMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__OnClickCancel(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A57A89 & 1) == 0 )
  {
    sub_1B885B0(&Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    byte_4A57A89 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 0, v5);
  }
}


void __fastcall CancelConfirmDeckIdDialog__OnClickDecide(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog__Open(
        CancelConfirmDeckIdDialog_o *this,
        int32_t nowSupportDeckId,
        int32_t orgSupportDeckId,
        System_Int32_array *nowFixMainSupportDeckIds,
        System_Int32_array *nowFixEventSupportDeckIds,
        System_Int32_array *orgFixMainSupportDeckIds,
        System_Int32_array *orgFixEventSupportDeckIds,
        CancelConfirmDeckIdDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *fixMessageLabel; // x26
  System_Text_StringBuilder_o *v21; // x26
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x5
  System_String_o *v24; // x0
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x5
  UILabel_o *messageLabel; // x20
  System_String_o *v28; // x0
  UnityEngine_BoxCollider_o *messageCollider; // x20
  float v30; // s1
  UnityEngine_BoxCollider_o *v31; // x20
  int v32; // s0
  int v33; // s8
  int v34; // s1
  float v35; // s2
  int v36; // s0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v39; // x20
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57A85 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CancelConfirmDeckIdDialog_EndOpen__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_12407/*"SUPPORT_LAST_DECKID"*/);
    sub_1B885B0(&StringLiteral_12386/*"SUPPORT_DECKID_QUESTION"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_12384/*"SUPPORT_CURRENT_DECKID"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    sub_1B885B0(&StringLiteral_12413/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_4A57A85 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      orgSupportDeckId,
      (int32_t)nowFixMainSupportDeckIds);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_28;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_28;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12386/*"SUPPORT_DECKID_QUESTION"*/, 0LL);
    if ( !fixMessageLabel )
      goto LABEL_28;
    UILabel__set_text(fixMessageLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v21 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12384/*"SUPPORT_CURRENT_DECKID"*/, 0LL);
    if ( !v21 )
      goto LABEL_28;
    System_Text_StringBuilder__Append_60868928(v21, (System_String_o *)gameObject, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v22);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v23);
    System_Text_StringBuilder__Append_60868928(v21, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12407/*"SUPPORT_LAST_DECKID"*/, 0LL);
    System_Text_StringBuilder__Append_60868928(v21, v24, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, orgSupportDeckId, orgFixMainSupportDeckIds, 1, v25);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, orgSupportDeckId, orgFixEventSupportDeckIds, 0, v26);
    messageLabel = this->fields.messageLabel;
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                               v21,
                               v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    WrapControlText__textBBCodeAdjust(
      messageLabel,
      v28,
      this->fields.MESSAGE_FONT_SIZE,
      this->fields.MESSAGE_FONT_SIZE,
      1000,
      0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    messageCollider = this->fields.messageCollider;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !messageCollider )
      goto LABEL_28;
    v40.fields.y = v30 * -0.5;
    v40.fields.x = 0.0;
    v40.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v40, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v31 = this->fields.messageCollider;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
      gameObject,
      gameObject->klass[1].vtable._0_Equals.methodPtr);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v33 = v32;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !v31 )
      goto LABEL_28;
    v35 = 1.0;
    v36 = v33;
    UnityEngine_BoxCollider__set_size(v31, *(UnityEngine_Vector3_o *)(&v34 - 1), 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_28;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            0LL,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets),
          decideLabel = this->fields.decideLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelLabel) )
    {
LABEL_28:
      sub_1B8880C(gameObject, v18);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v39 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__SetDeckInfo(
        CancelConfirmDeckIdDialog_o *this,
        System_Text_StringBuilder_o *sb,
        int32_t currentDeckId,
        System_Int32_array *fixDeckIds,
        bool isMain,
        const MethodInfo *method)
{
  CancelConfirmDeckIdDialog___c_c *v10; // x0
  System_Func_int__bool__o *_9__19_0; // x23
  Il2CppObject *v12; // x24
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v18; // x1
  BalanceConfig_c *v19; // x8
  int v20; // w23
  struct BalanceConfig_StaticFields *v21; // x8
  __int64 v22; // x9
  __int64 v23; // x25
  unsigned __int64 v24; // x24
  const MethodInfo *v25; // x5
  System_String_o *DeckIDString; // x1
  int32_t v27; // w2

  if ( (byte_4A57A86 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__);
    sub_1B885B0(&CancelConfirmDeckIdDialog___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    byte_4A57A86 = 1;
  }
  v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  if ( !CancelConfirmDeckIdDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CancelConfirmDeckIdDialog___c_TypeInfo);
    v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  }
  _9__19_0 = v10->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__19_0 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__19_0, v12, Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, 0LL);
    static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixDeckIds,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v16,
                                              (const MethodInfo_2E9C654 *)Method_System_Linq_Enumerable_Count_int___);
  v19 = BalanceConfig_TypeInfo;
  v20 = (int)appended;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = v19->static_fields;
  v22 = 184LL;
  if ( isMain )
    v22 = 180LL;
  v23 = *(unsigned int *)((char *)&v21->CriticalRateToAddByQuickFirstBonus + v22);
  if ( (int)v23 >= 1 )
  {
    if ( !sb )
LABEL_23:
      sub_1B8880C(appended, v18);
    v24 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_60868928(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      if ( v24 == 0 && v20 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v20 > 0,
                         isMain,
                         v25);
        v24 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_23;
        if ( v24 >= fixDeckIds->max_length )
          sub_1B88814(appended, v18);
        v27 = fixDeckIds->m_Items[++v24];
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         v24,
                         v27,
                         v27 != 0,
                         isMain,
                         v25);
      }
      System_Text_StringBuilder__Append_60868928(sb, DeckIDString, 0LL);
    }
    while ( v24 != v23 );
  }
}


void __fastcall CancelConfirmDeckIdDialog__add_callbackFunc(
        CancelConfirmDeckIdDialog_o *this,
        CancelConfirmDeckIdDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmDeckIdDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmDeckIdDialog_o *v11; // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A57A82 & 1) == 0 )
  {
    sub_1B885B0(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_4A57A82 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57A8A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4677/*"ConfirmWindow/CancelButton"*/);
    byte_4A57A8A = 1;
  }
  return (System_String_o *)StringLiteral_4677/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall CancelConfirmDeckIdDialog__remove_callbackFunc(
        CancelConfirmDeckIdDialog_o *this,
        CancelConfirmDeckIdDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmDeckIdDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmDeckIdDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A57A83 & 1) == 0 )
  {
    sub_1B885B0(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_4A57A83 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  CancelConfirmDeckIdDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CAE80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CAE38;
}


System_IAsyncResult_o *__fastcall CancelConfirmDeckIdDialog_CallbackFunc__BeginInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A57A8C & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57A8C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57A8D & 1) == 0 )
  {
    sub_1B885B0(&CancelConfirmDeckIdDialog___c_TypeInfo);
    byte_4A57A8D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CancelConfirmDeckIdDialog___c_TypeInfo->static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CancelConfirmDeckIdDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall CancelConfirmDeckIdDialog___c___ctor(CancelConfirmDeckIdDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CancelConfirmDeckIdDialog___c___SetDeckInfo_b__19_0(
        CancelConfirmDeckIdDialog___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}