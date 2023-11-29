void __fastcall TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FB8CD & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB8CD = 1;
  }
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680LL;
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_3137680;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    TripleButtonDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_28000180(this, 0LL, v2);
}


void __fastcall TripleButtonDlgComponent__Close_28000180(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *closeBtn; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FB8C8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B16FFC(&Method_TripleButtonDlgComponent_EndClose__, v6);
    byte_40FB8C8 = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
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
  UILabel_o *confirmDetailLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB8C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FB8C2 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1, 0LL),
        (confirmDetailLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmDetailLabel, (System_String_o *)StringLiteral_1, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__OnClickCancel(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FB8CB & 1) == 0 )
  {
    sub_B16FFC(&Method_TripleButtonDlgComponent_OnClickCancel__, method);
    byte_40FB8CB = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B17004(Method_TripleButtonDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.leftSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 2, v5);
}


void __fastcall TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  int32_t middleSeNo; // w20
  const MethodInfo *v4; // x2

  if ( (byte_40FB8CA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB8CA = 1;
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

  if ( (byte_40FB8C9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB8C9 = 1;
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *confirmTitleLabel; // x27
  UILabel_o *v31; // x0
  System_String_o *v32; // x1
  struct UILabel_o *v33; // x8
  struct System_String_o *mText; // x8
  UnityEngine_Component_o *confirmDetailLabel; // x0
  UILabel_o **p_confirmDetailLabel; // x27
  int32_t m_stringLength; // w20
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v39; // x0
  int32_t messageHeightNormal; // w1
  UILabel_o *v41; // x26
  System_String_o *v42; // x1
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UILabel_o *v45; // x0
  UnityEngine_Object_o *middleBtnLb; // x22
  UILabel_o *v47; // x0
  UnityEngine_Object_o *rightBtnLb; // x21
  UILabel_o *v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x20

  if ( (byte_40FB8C3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_TripleButtonDlgComponent_EndOpen__, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FB8C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
    v31 = this->fields.confirmTitleLabel;
    if ( !v31 )
      goto LABEL_55;
    v32 = title ? title : (System_String_o *)StringLiteral_1;
    UILabel__set_text(v31, v32, 0LL);
    v33 = this->fields.confirmTitleLabel;
    if ( !v33 )
      goto LABEL_55;
    mText = v33->fields.mText;
    if ( !mText )
      goto LABEL_55;
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
    confirmDetailLabel = (UnityEngine_Component_o *)this->fields.confirmDetailLabel;
    if ( !confirmDetailLabel )
      goto LABEL_55;
    m_stringLength = mText->fields.m_stringLength;
    transform = UnityEngine_Component__get_transform(confirmDetailLabel, 0LL);
    if ( m_stringLength )
    {
      if ( !transform )
        goto LABEL_55;
      UnityEngine_Transform__set_localPosition(transform, this->fields.messagePosNormal, 0LL);
      v39 = (UIWidget_o *)this->fields.confirmDetailLabel;
      if ( !v39 )
        goto LABEL_55;
      messageHeightNormal = this->fields.messageHeightNormal;
    }
    else
    {
      if ( !transform )
        goto LABEL_55;
      UnityEngine_Transform__set_localPosition(transform, this->fields.messagePosNoTitle, 0LL);
      v39 = (UIWidget_o *)this->fields.confirmDetailLabel;
      if ( !v39 )
        goto LABEL_55;
      messageHeightNormal = this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height(v39, messageHeightNormal, 0LL);
  }
  else
  {
    p_confirmDetailLabel = &this->fields.confirmDetailLabel;
  }
  v41 = *p_confirmDetailLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
  {
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    v42 = msg ? msg : (System_String_o *)StringLiteral_1;
    UILabel__set_text(*p_confirmDetailLabel, v42, 0LL);
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    UILabel__set_fontSize(*p_confirmDetailLabel, fontSize, 0LL);
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_confirmDetailLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v43, (float)positionY, 0LL);
    if ( !*p_confirmDetailLabel )
      goto LABEL_55;
    UILabel__set_spacingY(*p_confirmDetailLabel, spacingY, 0LL);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0LL, 0LL) )
  {
    v45 = this->fields.closeBtnLb;
    if ( !v45 )
      goto LABEL_55;
    UILabel__set_text(v45, closeBtnText, 0LL);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(middleBtnLb, 0LL, 0LL) )
  {
    v47 = this->fields.middleBtnLb;
    if ( !v47 )
      goto LABEL_55;
    UILabel__set_text(v47, middleBtnText, 0LL);
  }
  rightBtnLb = (UnityEngine_Object_o *)this->fields.rightBtnLb;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(rightBtnLb, 0LL, 0LL) )
  {
    v49 = this->fields.rightBtnLb;
    if ( v49 )
    {
      UILabel__set_text(v49, rightBtnText, 0LL);
      goto LABEL_54;
    }
LABEL_55:
    sub_B170D4();
  }
LABEL_54:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v50);
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetBackKeyForAndroid(
        TripleButtonDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *closeBtn; // x19

  if ( (byte_40FB8CC & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_13261, v4);
    byte_40FB8CC = 1;
  }
  closeBtnLb = this->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_B170D4();
  mText = closeBtnLb->fields.mText;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13261, 0LL);
  if ( !System_String__op_Equality(mText, v7, 0LL) )
  {
    closeBtn = this->fields.closeBtn;
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
  __int64 v6; // x1
  UICommonButton_o *Component_srcLineSprite; // x20

  if ( (byte_40FB8C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FB8C7 = 1;
  }
  if ( !buttonObj )
    goto LABEL_11;
  Component_srcLineSprite = (UICommonButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  buttonObj,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      UICommonButton__SetButtonEnableWithCollider(Component_srcLineSprite, isEnable, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
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

  if ( (byte_40FB8C0 & 1) == 0 )
  {
    sub_B16FFC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FB8C0 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (TripleButtonDlgComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40FB8C1 & 1) == 0 )
  {
    sub_B16FFC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FB8C1 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (TripleButtonDlgComponent_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *closeBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FB8C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB8C6 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      closeBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *middleBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FB8C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB8C5 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      middleBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *rightBtn; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40FB8C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FB8C4 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      rightBtn,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent_CallbackFunc___ctor(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F7930 & 1) == 0 )
  {
    sub_B16FFC(&TripleButtonDlgComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_40F7930 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  TripleButtonDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  TripleButtonDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}