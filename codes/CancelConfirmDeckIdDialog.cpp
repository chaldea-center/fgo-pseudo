void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FAEA9 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FAEA9 = 1;
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
    sub_1B64814(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_32943280(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_32943280(
        CancelConfirmDeckIdDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FAEA6 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_CancelConfirmDeckIdDialog_EndClose__, v6);
    byte_49FAEA6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CancelConfirmDeckIdDialog__CreateDeckIDString(
        CancelConfirmDeckIdDialog_o *this,
        int32_t deckNo,
        int32_t deckID,
        bool isFixed,
        bool isMainQuestSupportDeck,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o **v16; // x8
  __int64 v17; // x24
  __int64 v18; // x25
  System_String_o *v19; // x22
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FAEA5 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, *(_QWORD *)&deckNo);
    sub_1B64870(&LocalizationManager_TypeInfo, v10);
    sub_1B64870(&StringLiteral_12343/*"SUPPORT_EVENTQUEST"*/, v11);
    sub_1B64870(&StringLiteral_12341/*"SUPPORT_DECK_NOT_FIXED"*/, v12);
    sub_1B64870(&StringLiteral_12333/*"SUPPORT_DECKID_FREE"*/, v13);
    sub_1B64870(&StringLiteral_12356/*"SUPPORT_MAINQUEST"*/, v14);
    sub_1B64870(&StringLiteral_12339/*"SUPPORT_DECK_ID_FIXED"*/, v15);
    byte_49FAEA5 = 1;
  }
  if ( isFixed )
    v16 = (System_String_o **)&StringLiteral_12339/*"SUPPORT_DECK_ID_FIXED"*/;
  else
    v16 = (System_String_o **)&StringLiteral_12333/*"SUPPORT_DECKID_FREE"*/;
  v17 = StringLiteral_12356/*"SUPPORT_MAINQUEST"*/;
  v18 = StringLiteral_12343/*"SUPPORT_EVENTQUEST"*/;
  v19 = *v16;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( deckID )
    {
LABEL_8:
      v20 = LocalizationManager__Get(v19, 0LL);
      v21 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(deckID, 0LL);
      v22 = System_String__Format(v20, v21, 0LL);
      goto LABEL_11;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( deckID )
      goto LABEL_8;
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12341/*"SUPPORT_DECK_NOT_FIXED"*/, 0LL);
LABEL_11:
  v23 = v22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isMainQuestSupportDeck )
    v24 = (System_String_o *)v17;
  else
    v24 = (System_String_o *)v18;
  v25 = LocalizationManager__Get(v24, 0LL);
  v32 = deckNo;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v26, v27, v28);
  v30 = System_String__Format(v25, v29, 0LL);
  return System_String__Concat_61383576(v30, v23, 0LL);
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
    sub_1B64814(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_49FAEA2 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FAEA2 = 1;
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
    sub_1B64ACC(titleLabel, method);
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

  if ( (byte_49FAEA7 & 1) == 0 )
  {
    sub_1B64870(&Method_CancelConfirmDeckIdDialog_OnClickCancel__, method);
    byte_49FAEA7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *fixMessageLabel; // x26
  System_Text_StringBuilder_o *v31; // x26
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x5
  System_String_o *v34; // x0
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x5
  UILabel_o *messageLabel; // x20
  System_String_o *v38; // x0
  UnityEngine_BoxCollider_o *messageCollider; // x20
  float v40; // s1
  UnityEngine_BoxCollider_o *v41; // x20
  int v42; // s0
  int v43; // s8
  int v44; // s1
  float v45; // s2
  int v46; // s0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v49; // x20
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FAEA3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&nowSupportDeckId);
    sub_1B64870(&Method_CancelConfirmDeckIdDialog_EndOpen__, v17);
    sub_1B64870(&LocalizationManager_TypeInfo, v18);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1B64870(&StringLiteral_12355/*"SUPPORT_LAST_DECKID"*/, v20);
    sub_1B64870(&StringLiteral_12334/*"SUPPORT_DECKID_QUESTION"*/, v21);
    sub_1B64870(&StringLiteral_3734/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B64870(&StringLiteral_12332/*"SUPPORT_CURRENT_DECKID"*/, v23);
    sub_1B64870(&StringLiteral_3732/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_1B64870(&StringLiteral_44/*"\n\n"*/, v25);
    sub_1B64870(&StringLiteral_12361/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v26);
    byte_49FAEA3 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1B64814(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_28;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SUPPORT_DECKID_QUESTION"*/, 0LL);
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
    v31 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v31, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SUPPORT_CURRENT_DECKID"*/, 0LL);
    if ( !v31 )
      goto LABEL_28;
    System_Text_StringBuilder__Append_60545472(v31, (System_String_o *)gameObject, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v32);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v33);
    System_Text_StringBuilder__Append_60545472(v31, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12355/*"SUPPORT_LAST_DECKID"*/, 0LL);
    System_Text_StringBuilder__Append_60545472(v31, v34, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, orgSupportDeckId, orgFixMainSupportDeckIds, 1, v35);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, orgSupportDeckId, orgFixEventSupportDeckIds, 0, v36);
    messageLabel = this->fields.messageLabel;
    v38 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                               v31,
                               v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    WrapControlText__textBBCodeAdjust(
      messageLabel,
      v38,
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
    v50.fields.y = v40 * -0.5;
    v50.fields.x = 0.0;
    v50.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v50, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v41 = this->fields.messageCollider;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
      gameObject,
      gameObject->klass[1].vtable._0_Equals.methodPtr);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v43 = v42;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !v41 )
      goto LABEL_28;
    v45 = 1.0;
    v46 = v43;
    UnityEngine_BoxCollider__set_size(v41, *(UnityEngine_Vector3_o *)(&v44 - 1), 0LL);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3732/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelLabel) )
    {
LABEL_28:
      sub_1B64ACC(gameObject, v28);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v49 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  CancelConfirmDeckIdDialog___c_c *v16; // x0
  System_Func_int__bool__o *_9__19_0; // x23
  Il2CppObject *v18; // x24
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v24; // x1
  BalanceConfig_c *v25; // x8
  int v26; // w23
  struct BalanceConfig_StaticFields *v27; // x8
  __int64 v28; // x9
  __int64 v29; // x25
  unsigned __int64 v30; // x24
  const MethodInfo *v31; // x5
  System_String_o *DeckIDString; // x1
  int32_t v33; // w2

  if ( (byte_49FAEA4 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, sb);
    sub_1B64870(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v12);
    sub_1B64870(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, v13);
    sub_1B64870(&CancelConfirmDeckIdDialog___c_TypeInfo, v14);
    sub_1B64870(&StringLiteral_43/*"\n"*/, v15);
    byte_49FAEA4 = 1;
  }
  v16 = CancelConfirmDeckIdDialog___c_TypeInfo;
  if ( !CancelConfirmDeckIdDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CancelConfirmDeckIdDialog___c_TypeInfo);
    v16 = CancelConfirmDeckIdDialog___c_TypeInfo;
  }
  _9__19_0 = v16->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CancelConfirmDeckIdDialog___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__19_0 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__19_0, v18, Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, 0LL);
    static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixDeckIds,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_2E790A4 *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v22,
                                              (const MethodInfo_2E57BC4 *)Method_System_Linq_Enumerable_Count_int___);
  v25 = BalanceConfig_TypeInfo;
  v26 = (int)appended;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  v27 = v25->static_fields;
  v28 = 184LL;
  if ( isMain )
    v28 = 180LL;
  v29 = *(unsigned int *)((char *)&v27->CriticalRateToAddByQuickFirstBonus + v28);
  if ( (int)v29 >= 1 )
  {
    if ( !sb )
LABEL_23:
      sub_1B64ACC(appended, v24);
    v30 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_60545472(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
      if ( v30 == 0 && v26 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v26 > 0,
                         isMain,
                         v31);
        v30 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_23;
        if ( v30 >= fixDeckIds->max_length )
          sub_1B64AD4(appended, v24);
        v33 = fixDeckIds->m_Items[++v30];
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         v30,
                         v33,
                         v33 != 0,
                         isMain,
                         v31);
      }
      System_Text_StringBuilder__Append_60545472(sb, DeckIDString, 0LL);
    }
    while ( v30 != v29 );
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

  if ( (byte_49FAEA0 & 1) == 0 )
  {
    sub_1B64870(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_49FAEA0 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64D8C(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FAEA8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_4654/*"ConfirmWindow/CancelButton"*/, method);
    byte_49FAEA8 = 1;
  }
  return (System_String_o *)StringLiteral_4654/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_49FAEA1 & 1) == 0 )
  {
    sub_1B64870(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_49FAEA1 = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64D8C(v8);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A8E34;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A8DEC;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_49FAEAA & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, result);
    byte_49FAEAA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAEAB & 1) == 0 )
  {
    sub_1B64870(&CancelConfirmDeckIdDialog___c_TypeInfo, v1);
    byte_49FAEAB = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CancelConfirmDeckIdDialog___c_TypeInfo->static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)CancelConfirmDeckIdDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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