void __fastcall TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( (byte_48E1532 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E1532 = 1;
  }
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_B710E0;
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680LL;
  *(_QWORD *)&this->fields.messageHeightNormal = 0x14000000118LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__Callback(
        TripleButtonDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct TripleButtonDlgComponent_CallbackFunc_o *v5; // x20
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B00C70(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_36137040(this, 0LL, v2);
}


void __fastcall TripleButtonDlgComponent__Close_36137040(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_48E152C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_TripleButtonDlgComponent_EndClose__, v5);
    byte_48E152C = 1;
  }
  TripleButtonDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B00C70(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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

  if ( (byte_48E1526 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E1526 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B00F28(confirmTitleLabel, method);
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

  if ( (byte_48E152F & 1) == 0 )
  {
    sub_1B00CCC(&Method_TripleButtonDlgComponent_OnClickCancel__, method);
    byte_48E152F = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_TripleButtonDlgComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.leftSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 2, v5);
}


void __fastcall TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_48E152E & 1) == 0 )
  {
    sub_1B00CCC(&Method_TripleButtonDlgComponent_OnClickMiddle__, method);
    byte_48E152E = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickMiddle__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickMiddle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_TripleButtonDlgComponent_OnClickMiddle__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.middleSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 1, v5);
}


void __fastcall TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_48E152D & 1) == 0 )
  {
    sub_1B00CCC(&Method_TripleButtonDlgComponent_OnClickRight__, method);
    byte_48E152D = 1;
  }
  v3 = Method_TripleButtonDlgComponent_OnClickRight__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickRight__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_TripleButtonDlgComponent_OnClickRight__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.rightSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 0, v5);
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v31; // x1
  struct UILabel_o *v32; // x8
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t *p_messageHeightNormal; // x8
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v37; // x1
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UnityEngine_Object_o *middleBtnLb; // x22
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v42; // x1
  TripleButtonDlgComponent_o *v43; // x0
  const MethodInfo *v44; // x2
  TripleButtonDlgComponent_o *v45; // x0
  const MethodInfo *v46; // x2
  TripleButtonDlgComponent_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Action_o *v49; // x20

  if ( (byte_48E1527 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, title);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v23);
    sub_1B00CCC(&Method_TripleButtonDlgComponent_EndOpen__, v24);
    sub_1B00CCC(&StringLiteral_1/*""*/, v25);
    byte_48E1527 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v28, v29);
  this->fields.rightSeNo = rightSe;
  this->fields.middleSeNo = middleSe;
  this->fields.leftSeNo = leftSe;
  this->fields.state = 1;
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_60;
    v31 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v31, 0LL);
    v32 = this->fields.confirmTitleLabel;
    if ( !v32 )
      goto LABEL_60;
    mText = v32->fields.mText;
    if ( !mText )
      goto LABEL_60;
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    stringLength = mText->fields._stringLength;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)gameObject,
                                               0LL);
    if ( stringLength )
    {
      if ( !gameObject )
        goto LABEL_60;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNormal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_60;
      p_messageHeightNormal = &this->fields.messageHeightNormal;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_60;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        this->fields.messagePosNoTitle,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
      if ( !gameObject )
        goto LABEL_60;
      p_messageHeightNormal = &this->fields.messageHeightNoTitle;
    }
    UIWidget__set_height((UIWidget_o *)gameObject, *p_messageHeightNormal, 0LL);
  }
  confirmDetailLabel = (UnityEngine_Object_o *)this->fields.confirmDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    v37 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v37, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v38, (float)positionY, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0LL);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, closeBtnText, 0LL);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(middleBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, middleBtnText, 0LL);
    if ( isMiddleTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.middleBtnLb;
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0LL);
    }
  }
  rightBtnLb = (UnityEngine_Object_o *)this->fields.rightBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(rightBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, rightBtnText, 0LL);
    if ( isRightTxtTwoLine )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_maxLineCount((UILabel_o *)gameObject, 2, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.rightBtnLb;
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_fontSize((UILabel_o *)gameObject, 22, 0LL);
    }
  }
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v42);
  if ( setButtonSpaceNum )
  {
    GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-setButtonSpaceNum, 0LL);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)setButtonSpaceNum, 0LL);
  }
  if ( resetButtonDesign )
  {
    TripleButtonDlgComponent__SetButtonSpriteSize(v43, this->fields.closeBtnSprite, v44);
    TripleButtonDlgComponent__SetButtonSpriteSize(v45, this->fields.middleBtnSprite, v46);
    TripleButtonDlgComponent__SetButtonSpriteSize(v47, this->fields.rightBtnSprite, v48);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( gameObject )
    {
      UILabel__set_fontSize((UILabel_o *)gameObject, 24, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1B00F28(gameObject, v27);
  }
LABEL_59:
  v49 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetBackKeyForAndroid(
        TripleButtonDlgComponent_o *this,
        const MethodInfo *method)
{
  TripleButtonDlgComponent_o *v2; // x19
  __int64 v3; // x1
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v6; // x0

  v2 = this;
  if ( (byte_48E1530 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    this = (TripleButtonDlgComponent_o *)sub_1B00CCC(&StringLiteral_13033/*"TALKRESUME_CONFIRM_CANCEL"*/, v3);
    byte_48E1530 = 1;
  }
  closeBtnLb = v2->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_1B00F28(this, method);
  mText = closeBtnLb->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13033/*"TALKRESUME_CONFIRM_CANCEL"*/, 0LL);
  if ( !System_String__op_Equality(mText, v6, 0LL) )
    AndroidBackKeyManager__AddBackBtn(v2->fields.closeBtn, 0LL);
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
  UnityEngine_Component_o *v4; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E1531 & 1) == 0 )
  {
    this = (TripleButtonDlgComponent_o *)sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UIRect___, sprite);
    byte_48E1531 = 1;
  }
  if ( !sprite )
    goto LABEL_8;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)sprite,
                                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UIRect___);
  if ( !this )
    goto LABEL_8;
  v4 = (UnityEngine_Component_o *)this;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL),
        x = localPosition.fields.x,
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, float, float, float, float))v4->klass[1]._2.genericContainerHandle)(
          v4,
          *(_QWORD *)&v4->klass[1]._2.instance_size,
          0.0,
          0.0,
          210.0,
          56.0),
        (this = (TripleButtonDlgComponent_o *)UnityEngine_Component__get_transform(v4, 0LL)) == 0LL) )
  {
LABEL_8:
    sub_1B00F28(this, sprite);
  }
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_48E152B & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj);
    this = (TripleButtonDlgComponent_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    byte_48E152B = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (TripleButtonDlgComponent_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)Component_object,
                                         0LL,
                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)Component_object, isEnable, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(this, buttonObj);
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

  if ( (byte_48E1524 & 1) == 0 )
  {
    sub_1B00CCC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value);
    byte_48E1524 = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
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

  if ( (byte_48E1525 & 1) == 0 )
  {
    sub_1B00CCC(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value);
    byte_48E1525 = 1;
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
    v9 = sub_1B3C1BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B011E8(v8);
  TripleButtonDlgComponent__Init(v11, v12);
}


void __fastcall TripleButtonDlgComponent__setCallback(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateLeftButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *closeBtn; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_48E152A & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E152A = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closeBtn,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  closeBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)closeBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B00F28(closeBtn, disabled);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_48E1529 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E1529 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       middleBtn,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  middleBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)middleBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B00F28(middleBtn, disabled);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_48E1528 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E1528 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rightBtn,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rightBtn = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)rightBtn & 1) != 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
        Component_object,
        !disabled,
        Component_object->klass->vtable[6].methodPtr);
      return;
    }
LABEL_10:
    sub_1B00F28(rightBtn, disabled);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_194A050;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194A008;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall TripleButtonDlgComponent_CallbackFunc__BeginInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_48E1533 & 1) == 0 )
  {
    sub_1B00CCC(&TripleButtonDlgComponent_ResultClicked_TypeInfo, *(_QWORD *)&result);
    byte_48E1533 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__Invoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}