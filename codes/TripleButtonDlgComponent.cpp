void __fastcall TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD06 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD06 = 1;
  }
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680LL;
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_32A52B0;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    TripleButtonDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_29272704(this, 0LL, v2);
}


void __fastcall TripleButtonDlgComponent__Close_29272704(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *v19; // x20

  if ( (byte_42EAD00 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TripleButtonDlgComponent_EndClose__, v9, v10, v11);
    byte_42EAD00 = 1;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_42EACFA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EACFA = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__OnClickCancel(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EAD03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_TripleButtonDlgComponent_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42EAD03 = 1;
  }
  v5 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_TripleButtonDlgComponent_OnClickCancel__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.leftSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 2, v7);
}


void __fastcall TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t middleSeNo; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EAD02 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD02 = 1;
  }
  middleSeNo = this->fields.middleSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(middleSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 1, v6);
}


void __fastcall TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t rightSeNo; // w20
  const MethodInfo *v6; // x2

  if ( (byte_42EAD01 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD01 = 1;
  }
  rightSeNo = this->fields.rightSeNo;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(rightSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 0, v6);
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
        bool isMiddleTxtTwoLine,
        bool isRightTxtTwoLine,
        int32_t setButtonSpaceNum,
        bool resetButtonDesign,
        const MethodInfo *method)
{
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v41; // x1
  struct UILabel_o *v42; // x8
  struct System_String_o *mText; // x8
  struct UILabel_o **p_confirmDetailLabel; // x27
  int32_t m_stringLength; // w22
  int32_t messageHeightNormal; // w1
  UnityEngine_Object_o *v47; // x26
  System_String_o *v48; // x1
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UnityEngine_Object_o *middleBtnLb; // x22
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v53; // x1
  TripleButtonDlgComponent_o *v54; // x0
  const MethodInfo *v55; // x2
  TripleButtonDlgComponent_o *v56; // x0
  const MethodInfo *v57; // x2
  TripleButtonDlgComponent_o *v58; // x0
  const MethodInfo *v59; // x2
  System_Action_o *v60; // x20

  if ( (byte_42EACFB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)msg, closeBtnText);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_TripleButtonDlgComponent_EndOpen__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1/*""*/, v29, v30, v31);
    byte_42EACFB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_66;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
      goto LABEL_66;
    v41 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v41, 0LL);
    v42 = this->fields.confirmTitleLabel;
    if ( !v42 )
      goto LABEL_66;
    mText = v42->fields.mText;
    if ( !mText )
      goto LABEL_66;
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_66;
    m_stringLength = mText->fields.m_stringLength;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( m_stringLength )
    {
      if ( !gameObject )
        goto LABEL_66;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNormal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_66;
      messageHeightNormal = this->fields.messageHeightNormal;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_66;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNoTitle,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_66;
      messageHeightNormal = this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, messageHeightNormal, 0LL);
  }
  else
  {
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
  }
  v47 = (UnityEngine_Object_o *)*p_confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_66;
    v48 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v48, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_66;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_66;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v49, (float)positionY, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_confirmDetailLabel;
    if ( !*p_confirmDetailLabel )
      goto LABEL_66;
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
      goto LABEL_66;
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
      goto LABEL_66;
    UILabel__set_text((UILabel_o *)gameObject, middleBtnText, 0LL);
    if ( isMiddleTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_66;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_66;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0LL);
    }
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
    if ( !gameObject )
      goto LABEL_66;
    UILabel__set_text((UILabel_o *)gameObject, rightBtnText, 0LL);
    if ( isRightTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_66;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_66;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0LL);
    }
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v53);
  if ( setButtonSpaceNum )
  {
    GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-setButtonSpaceNum, 0LL);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)setButtonSpaceNum, 0LL);
  }
  if ( resetButtonDesign )
  {
    TripleButtonDlgComponent__SetButtonSpriteSize(v54, this->fields.closeBtnSprite, v55);
    TripleButtonDlgComponent__SetButtonSpriteSize(v56, this->fields.middleBtnSprite, v57);
    TripleButtonDlgComponent__SetButtonSpriteSize(v58, this->fields.rightBtnSprite, v59);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( gameObject )
    {
      UILabel__set_fontSize((UILabel_o *)gameObject, 24, 0LL);
      goto LABEL_65;
    }
LABEL_66:
    sub_B5D69C(gameObject, v33);
  }
LABEL_65:
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetBackKeyForAndroid(
        TripleButtonDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TripleButtonDlgComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *closeBtn; // x19

  v4 = this;
  if ( (byte_42EAD04 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    this = (TripleButtonDlgComponent_o *)sub_B5D5C4(&StringLiteral_13473/*"TALKRESUME_CONFIRM_CANCEL"*/, v8, v9, v10);
    byte_42EAD04 = 1;
  }
  closeBtnLb = v4->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_B5D69C(this, method);
  mText = closeBtnLb->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13473/*"TALKRESUME_CONFIRM_CANCEL"*/, 0LL);
  if ( !System_String__op_Equality(mText, v13, 0LL) )
  {
    closeBtn = v4->fields.closeBtn;
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(closeBtn, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__SetButtonSpace(
        TripleButtonDlgComponent_o *this,
        int32_t space,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-space, 0LL);
  GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)space, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetButtonSpriteSize(
        TripleButtonDlgComponent_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x19
  float z; // s10
  float x; // s8
  float y; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAD05 & 1) == 0 )
  {
    this = (TripleButtonDlgComponent_o *)sub_B5D5C4(
                                           &Method_UnityEngine_Component_GetComponent_UIRect___,
                                           (_DWORD)sprite,
                                           (_DWORD)method,
                                           v3);
    byte_42EAD05 = 1;
  }
  if ( !sprite )
    goto LABEL_8;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         (UnityEngine_Component_o *)sprite,
                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  if ( !this )
    goto LABEL_8;
  v5 = (UnityEngine_Component_o *)this;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        z = localPosition.fields.z,
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, float, float, float, float))v5->klass[1]._2.genericContainerHandle)(
          v5,
          *(_QWORD *)&v5->klass[1]._2.instance_size,
          0.0,
          0.0,
          210.0,
          56.0),
        (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform(v5, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(this, sprite);
  }
  v10.fields.x = x;
  v10.fields.y = y;
  v10.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v10, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EACFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, (_DWORD)buttonObj, isEnable, method);
    this = (TripleButtonDlgComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EACFF = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B5D69C(this, buttonObj);
  }
}


void __fastcall TripleButtonDlgComponent__add_callbackFunc(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct TripleButtonDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  TripleButtonDlgComponent_o *v12; // x0
  TripleButtonDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EACF8 & 1) == 0 )
  {
    sub_B5D5C4(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EACF8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v9->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  TripleButtonDlgComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall TripleButtonDlgComponent__remove_callbackFunc(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct TripleButtonDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  TripleButtonDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EACF9 & 1) == 0 )
  {
    sub_B5D5C4(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EACF9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v9->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  TripleButtonDlgComponent__Init(v12, v13);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EACFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EACFE = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B5D69C(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EACFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EACFD = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B5D69C(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42EACFC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42EACFC = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
    sub_B5D69C(rightBtn, disabled);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E626D & 1) == 0 )
  {
    sub_B5D5C4(&TripleButtonDlgComponent_ResultClicked_TypeInfo, result, (_DWORD)callback, object);
    byte_42E626D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent_CallbackFunc__Invoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  TripleButtonDlgComponent_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  TripleButtonDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  TripleButtonDlgComponent_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (TripleButtonDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}