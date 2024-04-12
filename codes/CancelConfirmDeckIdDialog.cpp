void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42B1684 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1684 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmDeckIdDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_27634384(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_27634384(
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

  if ( (byte_42B1681 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CancelConfirmDeckIdDialog_EndClose__);
    byte_42B1681 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1680 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_12577/*"SUPPORT_EVENTQUEST"*/);
    sub_B52984(&StringLiteral_12575/*"SUPPORT_DECK_NOT_FIXED"*/);
    sub_B52984(&StringLiteral_12567/*"SUPPORT_DECKID_FREE"*/);
    sub_B52984(&StringLiteral_12590/*"SUPPORT_MAINQUEST"*/);
    sub_B52984(&StringLiteral_12573/*"SUPPORT_DECK_ID_FIXED"*/);
    byte_42B1680 = 1;
  }
  v10 = (System_String_o **)&StringLiteral_12590/*"SUPPORT_MAINQUEST"*/;
  if ( !isMainQuestSupportDeck )
    v10 = (System_String_o **)&StringLiteral_12577/*"SUPPORT_EVENTQUEST"*/;
  v11 = *v10;
  v12 = (System_String_o **)&StringLiteral_12573/*"SUPPORT_DECK_ID_FIXED"*/;
  if ( !isFixed )
    v12 = (System_String_o **)&StringLiteral_12567/*"SUPPORT_DECKID_FREE"*/;
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
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SUPPORT_DECK_NOT_FIXED"*/, 0LL);
  }
  v17 = v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get(v11, 0LL);
  v22 = deckNo;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v20 = System_String__Format(v18, v19, 0LL);
  return System_String__Concat_44568316(v20, v17, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B167D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B167D = 1;
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
    sub_B52A5C(titleLabel, method);
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

  if ( (byte_42B1682 & 1) == 0 )
  {
    sub_B52984(&Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    byte_42B1682 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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

  if ( (byte_42B167E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_CancelConfirmDeckIdDialog_EndOpen__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_12589/*"SUPPORT_LAST_DECKID"*/);
    sub_B52984(&StringLiteral_12568/*"SUPPORT_DECKID_QUESTION"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_12566/*"SUPPORT_CURRENT_DECKID"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_27/*"\n\n"*/);
    sub_B52984(&StringLiteral_12595/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_42B167E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12595/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_29;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12568/*"SUPPORT_DECKID_QUESTION"*/, 0LL);
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
    v21 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12566/*"SUPPORT_CURRENT_DECKID"*/, 0LL);
    if ( !v21 )
      goto LABEL_29;
    System_Text_StringBuilder__Append_42994048(v21, (System_String_o *)gameObject, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v22);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v23);
    System_Text_StringBuilder__Append_42994048(v21, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12589/*"SUPPORT_LAST_DECKID"*/, 0LL);
    System_Text_StringBuilder__Append_42994048(v21, v24, 0LL);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelLabel) )
    {
LABEL_29:
      sub_B52A5C(gameObject, v18);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42B167F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__);
    sub_B52984(&CancelConfirmDeckIdDialog___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    byte_42B167F = 1;
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
    _9__19_0 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__19_0,
      v13,
      Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__,
      (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
    v14 = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    v14->__9__19_0 = _9__19_0;
    sub_B52920(
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
          (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v21,
                                              (const MethodInfo_1B5EA04 *)Method_System_Linq_Enumerable_Count_int___);
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
      sub_B52A5C(appended, v23);
    v28 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_42994048(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      if ( v28 == 0 && v24 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v24 > 0,
                         isMain,
                         v29);
        System_Text_StringBuilder__Append_42994048(sb, DeckIDString, 0LL);
        v28 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_30;
        if ( v28 >= fixDeckIds->max_length )
        {
          v33 = sub_B52A88(appended);
          sub_B52A28(v33, 0LL);
        }
        v31 = fixDeckIds->m_Items[++v28];
        v32 = CancelConfirmDeckIdDialog__CreateDeckIDString(
                (CancelConfirmDeckIdDialog_o *)appended,
                v28,
                v31,
                v31 != 0,
                isMain,
                v29);
        System_Text_StringBuilder__Append_42994048(sb, v32, 0LL);
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

  if ( (byte_42B167B & 1) == 0 )
  {
    sub_B52984(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_42B167B = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CancelConfirmDeckIdDialog_o *)sub_B52D50(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1683 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4258/*"ConfirmWindow/CancelButton"*/);
    byte_42B1683 = 1;
  }
  return (System_String_o *)StringLiteral_4258/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_42B167C & 1) == 0 )
  {
    sub_B52984(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_42B167C = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CancelConfirmDeckIdDialog_o *)sub_B52D50(v8);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD689 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD689 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CancelConfirmDeckIdDialog_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CancelConfirmDeckIdDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CancelConfirmDeckIdDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}


void __fastcall CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42AD688 & 1) == 0 )
  {
    sub_B52984(&CancelConfirmDeckIdDialog___c_TypeInfo);
    byte_42AD688 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v1;
  sub_B52920(static_fields);
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