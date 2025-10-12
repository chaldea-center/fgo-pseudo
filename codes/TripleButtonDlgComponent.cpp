void TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C365FB & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C365FB = 1;
  }
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_C0D180;
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680;
  *(_QWORD *)&this->fields.messageHeightNormal = 0x14000000118LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TripleButtonDlgComponent__Callback(TripleButtonDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct TripleButtonDlgComponent_CallbackFunc_o *v5; // x20
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C32BC4(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_40027856(this, 0, v2);
}


void TripleButtonDlgComponent__Close_40027856(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Action_o *v7; // x20

  if ( (byte_4C365F5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_TripleButtonDlgComponent_EndClose__);
    byte_4C365F5 = 1;
  }
  TripleButtonDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v5, v6);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


void TripleButtonDlgComponent__DisableButtons(TripleButtonDlgComponent_o *this, const MethodInfo *method)
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


void TripleButtonDlgComponent__EndClose(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void TripleButtonDlgComponent__EndOpen(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void TripleButtonDlgComponent__Init(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_4C365EF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C365EF = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(confirmTitleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void TripleButtonDlgComponent__OnClickCancel(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C365F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_TripleButtonDlgComponent_OnClickCancel__);
    byte_4C365F8 = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_TripleButtonDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.leftSeNo, 0, 0);
  TripleButtonDlgComponent__Callback(this, 2, v5);
}


void TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C365F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_TripleButtonDlgComponent_OnClickMiddle__);
    byte_4C365F7 = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickMiddle__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickMiddle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_TripleButtonDlgComponent_OnClickMiddle__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.middleSeNo, 0, 0);
  TripleButtonDlgComponent__Callback(this, 1, v5);
}


void TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C365F6 & 1) == 0 )
  {
    sub_1C32C20(&Method_TripleButtonDlgComponent_OnClickRight__);
    byte_4C365F6 = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickRight__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_TripleButtonDlgComponent_OnClickRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.rightSeNo, 0, 0);
  TripleButtonDlgComponent__Callback(this, 0, v5);
}


void TripleButtonDlgComponent__Open(
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
        int32_t titleLabelSpcingY,
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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *confirmTitleLabel; // x28
  struct UILabel_o *v28; // x8
  struct System_String_o *mText; // x8
  int32_t stringLength; // w20
  int32_t *p_messageHeightNormal; // x8
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v33; // x1
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UnityEngine_Object_o *middleBtnLb; // x22
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v38; // x1
  TripleButtonDlgComponent_o *v39; // x0
  const MethodInfo *v40; // x2
  TripleButtonDlgComponent_o *v41; // x0
  const MethodInfo *v42; // x2
  TripleButtonDlgComponent_o *v43; // x0
  const MethodInfo *v44; // x2
  System_Action_o *v45; // x20

  if ( (byte_4C365F0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_TripleButtonDlgComponent_EndOpen__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C365F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v25, v26);
  this->fields.rightSeNo = rightSe;
  this->fields.middleSeNo = middleSe;
  this->fields.leftSeNo = leftSe;
  this->fields.state = 1;
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_spacingY((UILabel_o *)gameObject, titleLabelSpcingY, 0);
    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                               this->fields.confirmTitleLabel,
                                               title,
                                               30,
                                               0,
                                               0);
    v28 = this->fields.confirmTitleLabel;
    if ( !v28 )
      goto LABEL_57;
    mText = v28->fields.mText;
    if ( !mText )
      goto LABEL_57;
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_57;
    stringLength = mText->fields._stringLength;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0);
    if ( stringLength )
    {
      if ( !gameObject )
        goto LABEL_57;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.messagePosNormal, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_57;
      p_messageHeightNormal = &this->fields.messageHeightNormal;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_57;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.messagePosNoTitle, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_57;
      p_messageHeightNormal = &this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, *p_messageHeightNormal, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_57;
    v33 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v33, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_57;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v34, (float)positionY, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)gameObject, closeBtnText, 0);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(middleBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)gameObject, middleBtnText, 0);
    if ( isMiddleTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_57;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_57;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0);
    }
  }
  rightBtnLb = (UnityEngine_Object_o *)this->fields.rightBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rightBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
    if ( !gameObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)gameObject, rightBtnText, 0);
    if ( isRightTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_57;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_57;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0);
    }
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v38);
  if ( setButtonSpaceNum )
  {
    GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-setButtonSpaceNum, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)setButtonSpaceNum, 0);
  }
  if ( resetButtonDesign )
  {
    TripleButtonDlgComponent__SetButtonSpriteSize(v39, this->fields.closeBtnSprite, v40);
    TripleButtonDlgComponent__SetButtonSpriteSize(v41, this->fields.middleBtnSprite, v42);
    TripleButtonDlgComponent__SetButtonSpriteSize(v43, this->fields.rightBtnSprite, v44);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( gameObject )
    {
      UILabel__set_fontSize((UILabel_o *)gameObject, 24, 0);
      goto LABEL_56;
    }
LABEL_57:
    sub_1C32E7C(gameObject);
  }
LABEL_56:
  v45 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
}


void TripleButtonDlgComponent__SetBackKeyForAndroid(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  TripleButtonDlgComponent_o *v2; // x19
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v5; // x0

  v2 = this;
  if ( (byte_4C365F9 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    this = (TripleButtonDlgComponent_o *)sub_1C32C20(&StringLiteral_13336/*"TALKRESUME_CONFIRM_CANCEL"*/);
    byte_4C365F9 = 1;
  }
  closeBtnLb = v2->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_1C32E7C(this);
  mText = closeBtnLb->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13336/*"TALKRESUME_CONFIRM_CANCEL"*/, 0);
  if ( !System_String__op_Equality(mText, v5, 0) )
    AndroidBackKeyManager__AddBackBtn(v2->fields.closeBtn, 0);
}


void TripleButtonDlgComponent__SetButtonSpace(
        TripleButtonDlgComponent_o *this,
        int32_t space,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-space, 0);
  GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)space, 0);
}


void TripleButtonDlgComponent__SetButtonSpriteSize(
        TripleButtonDlgComponent_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C365FA & 1) == 0 )
  {
    this = (TripleButtonDlgComponent_o *)sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIRect___);
    byte_4C365FA = 1;
  }
  if ( !sprite )
    goto LABEL_8;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)sprite,
                                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  if ( !this )
    goto LABEL_8;
  v4 = (UnityEngine_Component_o *)this;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (*(void (__fastcall **)(UnityEngine_Component_o *, size_t, float, float, float, float))&v4->klass[1]._2.cctor_finished)(
          v4,
          v4->klass[1]._2.cctor_thread,
          0.0,
          0.0,
          210.0,
          56.0),
        (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform(v4, 0)) == 0) )
  {
LABEL_8:
    sub_1C32E7C(this);
  }
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0);
}


void TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20

  if ( (byte_4C365F4 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (TripleButtonDlgComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C365F4 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TripleButtonDlgComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(this);
  }
}


void TripleButtonDlgComponent__add_callbackFunc(
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

  if ( (byte_4C365ED & 1) == 0 )
  {
    sub_1C32C20(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_4C365ED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v8->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  TripleButtonDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void TripleButtonDlgComponent__remove_callbackFunc(
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

  if ( (byte_4C365EE & 1) == 0 )
  {
    sub_1C32C20(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_4C365EE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (TripleButtonDlgComponent_CallbackFunc_c *)v8->klass != TripleButtonDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  TripleButtonDlgComponent__Init(v11, v12);
}


void TripleButtonDlgComponent__setCallback(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void TripleButtonDlgComponent__setStateLeftButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C365F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C365F3 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closeBtn,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  closeBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)closeBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[5].method);
      return;
    }
LABEL_10:
    sub_1C32E7C(closeBtn);
  }
}


void TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *middleBtn; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C365F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C365F2 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       middleBtn,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  middleBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)middleBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[5].method);
      return;
    }
LABEL_10:
    sub_1C32E7C(middleBtn);
  }
}


void TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rightBtn; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C365F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C365F1 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rightBtn,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rightBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)rightBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[5].method);
      return;
    }
LABEL_10:
    sub_1C32E7C(rightBtn);
  }
}


void TripleButtonDlgComponent_CallbackFunc___ctor(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76768;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76720;
}


System_IAsyncResult_o *TripleButtonDlgComponent_CallbackFunc__BeginInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C365FC & 1) == 0 )
  {
    sub_1C32C20(&TripleButtonDlgComponent_ResultClicked_TypeInfo);
    byte_4C365FC = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(
             TripleButtonDlgComponent_ResultClicked_TypeInfo,
             &v13,
             callback,
             object,
             method,
             v5,
             v6,
             v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void TripleButtonDlgComponent_CallbackFunc__Invoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}