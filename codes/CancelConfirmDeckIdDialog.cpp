void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438E3E8 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E3E8 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 27;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__Callback(
        CancelConfirmDeckIdDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v9; // x19
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmDeckIdDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_31120728(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_31120728(
        CancelConfirmDeckIdDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438E3E5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CancelConfirmDeckIdDialog_EndClose__);
    byte_438E3E5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  System_String_o *v11; // x20
  System_String_o **v12; // x9
  System_String_o *v13; // x22
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x20
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438E3E4 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12721/*"SUPPORT_EVENTQUEST"*/);
    sub_B775C4(&StringLiteral_12719/*"SUPPORT_DECK_NOT_FIXED"*/);
    sub_B775C4(&StringLiteral_12711/*"SUPPORT_DECKID_FREE"*/);
    sub_B775C4(&StringLiteral_12734/*"SUPPORT_MAINQUEST"*/);
    sub_B775C4(&StringLiteral_12717/*"SUPPORT_DECK_ID_FIXED"*/);
    byte_438E3E4 = 1;
  }
  v10 = (System_String_o **)&StringLiteral_12734/*"SUPPORT_MAINQUEST"*/;
  if ( !isMainQuestSupportDeck )
    v10 = (System_String_o **)&StringLiteral_12721/*"SUPPORT_EVENTQUEST"*/;
  v11 = *v10;
  v12 = (System_String_o **)&StringLiteral_12717/*"SUPPORT_DECK_ID_FIXED"*/;
  if ( !isFixed )
    v12 = (System_String_o **)&StringLiteral_12711/*"SUPPORT_DECKID_FREE"*/;
  if ( deckID )
  {
    v13 = *v12;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get(v13, 0LL);
    v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(deckID, 0LL);
    v16 = System_String__Format(v14, v15, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12719/*"SUPPORT_DECK_NOT_FIXED"*/, 0LL);
  }
  v17 = v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v11, 0LL);
  v23 = deckNo;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v19);
  v21 = System_String__Format(v18, v20, 0LL);
  return System_String__Concat_44901936(v21, v17, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__EndClose(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmDeckIdDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__EndOpen(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmDeckIdDialog__Init(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438E3E1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E3E1 = 1;
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
    sub_B7769C(titleLabel, method);
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

  if ( (byte_438E3E6 & 1) == 0 )
  {
    sub_B775C4(&Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    byte_438E3E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
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

  if ( (byte_438E3E2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CancelConfirmDeckIdDialog_EndOpen__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_12733/*"SUPPORT_LAST_DECKID"*/);
    sub_B775C4(&StringLiteral_12712/*"SUPPORT_DECKID_QUESTION"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12710/*"SUPPORT_CURRENT_DECKID"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_27/*"\n\n"*/);
    sub_B775C4(&StringLiteral_12739/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_438E3E2 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&orgSupportDeckId,
      (System_String_array **)nowFixMainSupportDeckIds,
      (System_Boolean_array **)nowFixEventSupportDeckIds,
      (System_Int32_array **)orgFixMainSupportDeckIds,
      orgFixEventSupportDeckIds,
      (System_Int32_array *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_29;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12739/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_29;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12712/*"SUPPORT_DECKID_QUESTION"*/, 0LL);
    if ( !fixMessageLabel )
      goto LABEL_29;
    UILabel__set_text(fixMessageLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v21 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12710/*"SUPPORT_CURRENT_DECKID"*/, 0LL);
    if ( !v21 )
      goto LABEL_29;
    System_Text_StringBuilder__Append_42951964(v21, (System_String_o *)gameObject, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v22);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v23);
    System_Text_StringBuilder__Append_42951964(v21, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12733/*"SUPPORT_LAST_DECKID"*/, 0LL);
    System_Text_StringBuilder__Append_42951964(v21, v24, 0LL);
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
      goto LABEL_29;
    messageCollider = this->fields.messageCollider;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !messageCollider )
      goto LABEL_29;
    v40.fields.y = v30 * -0.5;
    v40.fields.x = 0.0;
    v40.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v40, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    v31 = this->fields.messageCollider;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
      gameObject,
      gameObject->klass[1].vtable._0_Equals.methodPtr);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    v33 = v32;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !v31 )
      goto LABEL_29;
    v35 = 1.0;
    v36 = v33;
    UnityEngine_BoxCollider__set_size(v31, *(UnityEngine_Vector3_o *)(&v34 - 1), 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_29;
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelLabel) )
    {
LABEL_29:
      sub_B7769C(gameObject, v18);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__19_0; // x23
  Il2CppObject *v13; // x24
  struct CancelConfirmDeckIdDialog___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v23; // x1
  int v24; // w23
  BalanceConfig_c *v25; // x8
  int32_t *p_FixMainSupportDeckNum; // x8
  signed __int64 v27; // x25
  unsigned __int64 v28; // x24
  const MethodInfo *v29; // x5
  System_String_o *DeckIDString; // x0
  int32_t v31; // w2
  System_String_o *v32; // x0
  __int64 v33; // x0

  if ( (byte_438E3E3 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__);
    sub_B775C4(&CancelConfirmDeckIdDialog___c_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    byte_438E3E3 = 1;
  }
  v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  if ( (BYTE3(CancelConfirmDeckIdDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CancelConfirmDeckIdDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CancelConfirmDeckIdDialog___c_TypeInfo);
    v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__19_0 = static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__19_0,
      v13,
      Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    v14 = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    v14->__9__19_0 = _9__19_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixDeckIds,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v21,
                                              (const MethodInfo_1D2D070 *)Method_System_Linq_Enumerable_Count_int___);
  v24 = (int)appended;
  v25 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v25->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v25->static_fields->FixEventSupportDeckNum;
  }
  v27 = *p_FixMainSupportDeckNum;
  if ( (int)v27 >= 1 )
  {
    if ( !sb )
LABEL_30:
      sub_B7769C(appended, v23);
    v28 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_42951964(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      if ( v28 == 0 && v24 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v24 > 0,
                         isMain,
                         v29);
        System_Text_StringBuilder__Append_42951964(sb, DeckIDString, 0LL);
        v28 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_30;
        if ( v28 >= fixDeckIds->max_length )
        {
          v33 = sub_B776C8(appended);
          sub_B77668(v33, 0LL);
        }
        v31 = fixDeckIds->m_Items[++v28];
        v32 = CancelConfirmDeckIdDialog__CreateDeckIDString(
                (CancelConfirmDeckIdDialog_o *)appended,
                v28,
                v31,
                v31 != 0,
                isMain,
                v29);
        System_Text_StringBuilder__Append_42951964(sb, v32, 0LL);
      }
    }
    while ( (__int64)v28 < v27 );
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

  if ( (byte_438E3DF & 1) == 0 )
  {
    sub_B775C4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_438E3DF = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E3E7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4352/*"ConfirmWindow/CancelButton"*/);
    byte_438E3E7 = 1;
  }
  return (System_String_o *)StringLiteral_4352/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_438E3E0 & 1) == 0 )
  {
    sub_B775C4(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_438E3E0 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CancelConfirmDeckIdDialog_CallbackFunc__BeginInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_438854A & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438854A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CancelConfirmDeckIdDialog_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CancelConfirmDeckIdDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CancelConfirmDeckIdDialog_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}


void __fastcall CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4388549 & 1) == 0 )
  {
    sub_B775C4(&CancelConfirmDeckIdDialog___c_TypeInfo);
    byte_4388549 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v1;
  sub_B77560(static_fields);
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