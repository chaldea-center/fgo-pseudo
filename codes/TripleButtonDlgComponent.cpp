void __fastcall TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B23A4 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B23A4 = 1;
  }
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680LL;
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_327E150;
  *(_QWORD *)&this->fields.messageHeightNormal = 0x14000000118LL;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__Callback(
        TripleButtonDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  TripleButtonDlgComponent_CallbackFunc_o *v9; // x20
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    TripleButtonDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_29194772(this, 0LL, v2);
}


void __fastcall TripleButtonDlgComponent__Close_29194772(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_42B239F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&Method_TripleButtonDlgComponent_EndClose__);
    byte_42B239F = 1;
  }
  TripleButtonDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  closeBtn = this->fields.closeBtn;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn(closeBtn, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall TripleButtonDlgComponent__DisableButtons(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TripleButtonDlgComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  TripleButtonDlgComponent_o *v6; // x0
  const MethodInfo *v7; // x3

  TripleButtonDlgComponent__SetEnableButton(this, this->fields.rightBtn, 0, v2);
  TripleButtonDlgComponent__SetEnableButton(v4, this->fields.middleBtn, 0, v5);
  TripleButtonDlgComponent__SetEnableButton(v6, this->fields.closeBtn, 0, v7);
}


void __fastcall TripleButtonDlgComponent__EndClose(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__EndOpen(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall TripleButtonDlgComponent__Init(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_42B2399 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2399 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B52A5C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__OnClickCancel(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_42B23A2 & 1) == 0 )
  {
    sub_B52984(&Method_TripleButtonDlgComponent_OnClickCancel__);
    byte_42B23A2 = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_TripleButtonDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.leftSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 2, v5);
}


void __fastcall TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int32_t middleSeNo; // w20
  const MethodInfo *v4; // x2

  if ( (byte_42B23A1 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B23A1 = 1;
  }
  middleSeNo = this->fields.middleSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(middleSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 1, v4);
}


void __fastcall TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int32_t rightSeNo; // w20
  const MethodInfo *v4; // x2

  if ( (byte_42B23A0 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B23A0 = 1;
  }
  rightSeNo = this->fields.rightSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(rightSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 0, v4);
}


void __fastcall TripleButtonDlgComponent__Open(
        TripleButtonDlgComponent_o *this,
        System_String_o *title,
        System_String_o *msg,
        System_String_o *closeBtnText,
        System_String_o *middleBtnText,
        System_String_o *rightBtnText,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        int32_t fontSize,
        int32_t positionY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t middleSe,
        int32_t rightSe,
        int32_t leftSe,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v29; // x1
  struct UILabel_o *v30; // x8
  struct System_String_o *mText; // x8
  struct UILabel_o **p_confirmDetailLabel; // x27
  int32_t m_stringLength; // w20
  int32_t messageHeightNormal; // w1
  UnityEngine_Object_o *v35; // x26
  System_String_o *v36; // x1
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UnityEngine_Object_o *middleBtnLb; // x22
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v41; // x1
  System_Action_o *v42; // x20

  if ( (byte_42B239A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_TripleButtonDlgComponent_EndOpen__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B239A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.leftSeNo = leftSe;
  this->fields.state = 1;
  this->fields.rightSeNo = rightSe;
  this->fields.middleSeNo = middleSe;
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_55;
    v29 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v29, 0LL);
    v30 = this->fields.confirmTitleLabel;
    if ( !v30 )
      goto LABEL_55;
    mText = v30->fields.mText;
    if ( !mText )
      goto LABEL_55;
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_55;
    m_stringLength = mText->fields.m_stringLength;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( m_stringLength )
    {
      if ( !gameObject )
        goto LABEL_55;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNormal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_55;
      messageHeightNormal = this->fields.messageHeightNormal;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_55;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNoTitle,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_55;
      messageHeightNormal = this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, messageHeightNormal, 0LL);
  }
  else
  {
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
  }
  v35 = (UnityEngine_Object_o *)*p_confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    v36 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v36, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v37, (float)positionY, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0LL);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text((UILabel_o *)gameObject, closeBtnText, 0LL);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(middleBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
    if ( !gameObject )
      goto LABEL_55;
    UILabel__set_text((UILabel_o *)gameObject, middleBtnText, 0LL);
  }
  rightBtnLb = (UnityEngine_Object_o *)this->fields.rightBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rightBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
    if ( gameObject )
    {
      UILabel__set_text((UILabel_o *)gameObject, rightBtnText, 0LL);
      goto LABEL_54;
    }
LABEL_55:
    sub_B52A5C(gameObject, v21);
  }
LABEL_54:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v41);
  v42 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetBackKeyForAndroid(
        TripleButtonDlgComponent_o *this,
        const MethodInfo *method)
{
  TripleButtonDlgComponent_o *v2; // x19
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v5; // x0
  UnityEngine_GameObject_o *closeBtn; // x19

  v2 = this;
  if ( (byte_42B23A3 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    this = (TripleButtonDlgComponent_o *)sub_B52984(&StringLiteral_13414/*"TALKRESUME_CONFIRM_CANCEL"*/);
    byte_42B23A3 = 1;
  }
  closeBtnLb = v2->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_B52A5C(this, method);
  mText = closeBtnLb->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13414/*"TALKRESUME_CONFIRM_CANCEL"*/, 0LL);
  if ( !System_String__op_Equality(mText, v5, 0LL) )
  {
    closeBtn = v2->fields.closeBtn;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(closeBtn, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B239E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (TripleButtonDlgComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B239E = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (TripleButtonDlgComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_srcLineSprite, isEnable, 0LL);
      return;
    }
LABEL_11:
    sub_B52A5C(this, buttonObj);
  }
}


void __fastcall TripleButtonDlgComponent__add_callbackFunc(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TripleButtonDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  TripleButtonDlgComponent_o *v11; // x0
  TripleButtonDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B2397 & 1) == 0 )
  {
    sub_B52984(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2397 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v8->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  TripleButtonDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall TripleButtonDlgComponent__remove_callbackFunc(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct TripleButtonDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  TripleButtonDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B2398 & 1) == 0 )
  {
    sub_B52984(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2398 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v8->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  TripleButtonDlgComponent__Init(v11, v12);
}


void __fastcall TripleButtonDlgComponent__setCallback(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateLeftButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B239D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B239D = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  closeBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)closeBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B52A5C(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B239C & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B239C = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  middleBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)middleBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B52A5C(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42B239B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B239B = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rightBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rightBtn & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
        Component_srcLineSprite,
        !disabled,
        Component_srcLineSprite->klass[1]._1.byval_arg.data);
      return;
    }
LABEL_11:
    sub_B52A5C(rightBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent_CallbackFunc___ctor(
        TripleButtonDlgComponent_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall TripleButtonDlgComponent_CallbackFunc__BeginInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42ADA0B & 1) == 0 )
  {
    sub_B52984(&TripleButtonDlgComponent_ResultClicked_TypeInfo);
    byte_42ADA0B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent_CallbackFunc__Invoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  TripleButtonDlgComponent_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  TripleButtonDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  TripleButtonDlgComponent_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (TripleButtonDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}