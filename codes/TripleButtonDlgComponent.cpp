void TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596F3DF & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F3DF = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_E9C3A0;
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680;
  *(_QWORD *)&this->fields.messageHeightNormal = 0x14000000118LL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TripleButtonDlgComponent__Callback(TripleButtonDlgComponent_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct TripleButtonDlgComponent_CallbackFunc_o *v9; // x20
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_47080684(this, 0, v2);
}


void TripleButtonDlgComponent__Close_47080684(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_o *v11; // x20

  if ( (byte_596F3D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TripleButtonDlgComponent_EndClose__);
    byte_596F3D9 = 1;
  }
  TripleButtonDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
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
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
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

  if ( (byte_596F3D3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F3D3 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(confirmTitleLabel, method);
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

  if ( (byte_596F3DC & 1) == 0 )
  {
    sub_2213A60(&Method_TripleButtonDlgComponent_OnClickCancel__);
    byte_596F3DC = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_TripleButtonDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.leftSeNo, 0, 0);
  TripleButtonDlgComponent__Callback(this, 2, v5);
}


void TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596F3DB & 1) == 0 )
  {
    sub_2213A60(&Method_TripleButtonDlgComponent_OnClickMiddle__);
    byte_596F3DB = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickMiddle__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickMiddle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_TripleButtonDlgComponent_OnClickMiddle__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.middleSeNo, 0, 0);
  TripleButtonDlgComponent__Callback(this, 1, v5);
}


void TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596F3DA & 1) == 0 )
  {
    sub_2213A60(&Method_TripleButtonDlgComponent_OnClickRight__);
    byte_596F3DA = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickRight__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_TripleButtonDlgComponent_OnClickRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_c *v34; // x0
  UnityEngine_Object_o *confirmTitleLabel; // x28
  __int64 v36; // x2
  struct UILabel_o *v37; // x8
  struct System_String_o *mText; // x8
  int32_t messageHeightNormal; // w1
  UnityEngine_Object_o *confirmDetailLabel; // x26
  __int64 v41; // x2
  System_String_o *v42; // x1
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  __int64 v45; // x2
  UnityEngine_Object_o *middleBtnLb; // x22
  __int64 v47; // x2
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v49; // x1
  TripleButtonDlgComponent_o *v50; // x0
  const MethodInfo *v51; // x2
  TripleButtonDlgComponent_o *v52; // x0
  const MethodInfo *v53; // x2
  TripleButtonDlgComponent_o *v54; // x0
  const MethodInfo *v55; // x2
  System_Action_o *v56; // x20

  if ( (byte_596F3D4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TripleButtonDlgComponent_EndOpen__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F3D4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v34 = UnityEngine_Object_TypeInfo;
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  this->fields.rightSeNo = rightSe;
  this->fields.middleSeNo = middleSe;
  this->fields.leftSeNo = leftSe;
  this->fields.state = 1;
  if ( !*(&v34->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v34, v32, v33);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_spacingY((UILabel_o *)gameObject, titleLabelSpcingY, 0);
    gameObject = (UnityEngine_GameObject_o *)WrapControlText__textAdjust(
                                               this->fields.confirmTitleLabel,
                                               title,
                                               30,
                                               0,
                                               0);
    v37 = this->fields.confirmTitleLabel;
    if ( !v37 )
      goto LABEL_58;
    mText = v37->fields.mText;
    if ( !mText )
      goto LABEL_58;
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( mText->fields._stringLength )
    {
      if ( !gameObject )
        goto LABEL_58;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_58;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.messagePosNormal, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_58;
      messageHeightNormal = this->fields.messageHeightNormal;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_58;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0);
      if ( !gameObject )
        goto LABEL_58;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, this->fields.messagePosNoTitle, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_58;
      messageHeightNormal = this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, messageHeightNormal, 0);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v36);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_58;
    v42 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v42, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_58;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    GameObjectExtensions__SetLocalPositionY(v43, (float)positionY, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v41);
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_text((UILabel_o *)gameObject, closeBtnText, 0);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v45);
  if ( UnityEngine_Object__op_Inequality(middleBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_text((UILabel_o *)gameObject, middleBtnText, 0);
    if ( isMiddleTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_58;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_58;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0);
    }
  }
  rightBtnLb = (UnityEngine_Object_o *)this->fields.rightBtnLb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v47);
  if ( UnityEngine_Object__op_Inequality(rightBtnLb, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
    if ( !gameObject )
      goto LABEL_58;
    UILabel__set_text((UILabel_o *)gameObject, rightBtnText, 0);
    if ( isRightTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_58;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_58;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0);
    }
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v49);
  if ( setButtonSpaceNum )
  {
    GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-setButtonSpaceNum, 0);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)setButtonSpaceNum, 0);
  }
  if ( resetButtonDesign )
  {
    TripleButtonDlgComponent__SetButtonSpriteSize(v50, this->fields.closeBtnSprite, v51);
    TripleButtonDlgComponent__SetButtonSpriteSize(v52, this->fields.middleBtnSprite, v53);
    TripleButtonDlgComponent__SetButtonSpriteSize(v54, this->fields.rightBtnSprite, v55);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( gameObject )
    {
      UILabel__set_fontSize((UILabel_o *)gameObject, 24, 0);
      goto LABEL_57;
    }
LABEL_58:
    sub_2213CDC(gameObject, v25);
  }
LABEL_57:
  v56 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0, 0);
}


void TripleButtonDlgComponent__SetBackKeyForAndroid(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TripleButtonDlgComponent_o *v3; // x19
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v6; // x0

  v3 = this;
  if ( (byte_596F3DD & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (TripleButtonDlgComponent_o *)sub_2213A60(&StringLiteral_13890/*"TALKRESUME_CONFIRM_CANCEL"*/);
    byte_596F3DD = 1;
  }
  closeBtnLb = v3->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_2213CDC(this, method);
  mText = closeBtnLb->fields.mText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13890/*"TALKRESUME_CONFIRM_CANCEL"*/, 0);
  if ( !System_String__op_Equality(mText, v6, 0) )
    AndroidBackKeyManager__AddBackBtn(v3->fields.closeBtn, 0);
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  if ( (byte_596F3DE & 1) == 0 )
  {
    this = (TripleButtonDlgComponent_o *)sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIRect___);
    byte_596F3DE = 1;
  }
  if ( !sprite
    || (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)sprite,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIRect___)) == 0
    || (v4 = (UnityEngine_Component_o *)this,
        (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (*(void (__fastcall **)(UnityEngine_Component_o *, size_t, double, double, float, float))&v4->klass[1]._2.cctor_finished)(
          v4,
          v4->klass[1]._2.cctor_thread,
          0.0,
          0.0,
          210.0,
          56.0),
        (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform(v4, 0)) == 0) )
  {
    sub_2213CDC(this, sprite);
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, localPosition, 0);
}


void TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596F3D8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    this = (TripleButtonDlgComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3D8 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  this = (TripleButtonDlgComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(this, buttonObj);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TripleButtonDlgComponent_o *v13; // x0
  TripleButtonDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596F3D1 & 1) == 0 )
  {
    sub_2213A60(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_596F3D1 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TripleButtonDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  TripleButtonDlgComponent__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  TripleButtonDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596F3D2 & 1) == 0 )
  {
    sub_2213A60(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    byte_596F3D2 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, TripleButtonDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  TripleButtonDlgComponent__Init(v13, v14);
}


void TripleButtonDlgComponent__setCallback(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void TripleButtonDlgComponent__setStateLeftButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596F3D7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3D7 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closeBtn,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
    sub_2213CDC(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *middleBtn; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596F3D6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3D6 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       middleBtn,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
    sub_2213CDC(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rightBtn; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_596F3D5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F3D5 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rightBtn,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
    sub_2213CDC(rightBtn, disabled);
  }
}


void TripleButtonDlgComponent_CallbackFunc___ctor(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200BC54;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200BC0C;
}


System_IAsyncResult_o *TripleButtonDlgComponent_CallbackFunc__BeginInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_596F3E0 & 1) == 0 )
  {
    sub_2213A60(&TripleButtonDlgComponent_ResultClicked_TypeInfo);
    byte_596F3E0 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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