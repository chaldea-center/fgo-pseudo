void __fastcall TripleButtonDlgComponent___ctor(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14E5D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B14E5D = 1;
  }
  *(_OWORD *)&this->fields.messagePosNormal.fields.x = xmmword_BD2EB0;
  *(_QWORD *)&this->fields.messagePosNoTitle.fields.y = 1106247680LL;
  *(_QWORD *)&this->fields.messageHeightNormal = 0x14000000118LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__Callback(
        TripleButtonDlgComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct TripleButtonDlgComponent_CallbackFunc_o *v9; // x20
  struct TripleButtonDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall TripleButtonDlgComponent__Close(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TripleButtonDlgComponent__Close_38044004(this, 0LL, v2);
}


void __fastcall TripleButtonDlgComponent__Close_38044004(
        TripleButtonDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4B14E57 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_TripleButtonDlgComponent_EndClose__, v5, v6);
    byte_4B14E57 = 1;
  }
  TripleButtonDlgComponent__DisableButtons(this, (const MethodInfo *)callback);
  AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  TripleButtonDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
  }
}


void __fastcall TripleButtonDlgComponent__EndOpen(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall TripleButtonDlgComponent__Init(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *confirmTitleLabel; // x0

  if ( (byte_4B14E51 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B14E51 = 1;
  }
  confirmTitleLabel = this->fields.confirmTitleLabel;
  if ( !confirmTitleLabel
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = this->fields.confirmDetailLabel) == 0LL)
    || (UILabel__set_text(confirmTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (confirmTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(confirmTitleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confirmTitleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall TripleButtonDlgComponent__OnClickCancel(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14E5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TripleButtonDlgComponent_OnClickCancel__, method, v2);
    byte_4B14E5A = 1;
  }
  v4 = Method_TripleButtonDlgComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_TripleButtonDlgComponent_OnClickCancel__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.leftSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 2, v6);
}


void __fastcall TripleButtonDlgComponent__OnClickMiddle(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14E59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TripleButtonDlgComponent_OnClickMiddle__, method, v2);
    byte_4B14E59 = 1;
  }
  v4 = Method_TripleButtonDlgComponent_OnClickMiddle__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickMiddle__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_TripleButtonDlgComponent_OnClickMiddle__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.middleSeNo, 0LL);
  TripleButtonDlgComponent__Callback(this, 1, v6);
}


void __fastcall TripleButtonDlgComponent__OnClickRight(TripleButtonDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B14E58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TripleButtonDlgComponent_OnClickRight__, method, v2);
    byte_4B14E58 = 1;
  }
  v4 = Method_TripleButtonDlgComponent_OnClickRight__;
  if ( (*((_BYTE *)Method_TripleButtonDlgComponent_OnClickRight__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_TripleButtonDlgComponent_OnClickRight__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.rightSeNo, 0LL);
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  UnityEngine_Object_o *confirmTitleLabel; // x27
  System_String_o *v39; // x1
  struct UILabel_o *v40; // x8
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t *p_messageHeightNormal; // x8
  UnityEngine_Object_o *confirmDetailLabel; // x26
  System_String_o *v45; // x1
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *closeBtnLb; // x23
  UnityEngine_Object_o *middleBtnLb; // x22
  UnityEngine_Object_o *rightBtnLb; // x21
  const MethodInfo *v50; // x1
  TripleButtonDlgComponent_o *v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  __int64 v54; // x3
  TripleButtonDlgComponent_o *v55; // x0
  const MethodInfo *v56; // x2
  TripleButtonDlgComponent_o *v57; // x0
  const MethodInfo *v58; // x2
  System_Action_o *v59; // x20

  if ( (byte_4B14E52 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, msg);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_TripleButtonDlgComponent_EndOpen__, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B14E52 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v31, v32, v33, v34, v35, v36);
  this->fields.rightSeNo = rightSe;
  this->fields.middleSeNo = middleSe;
  this->fields.leftSeNo = leftSe;
  this->fields.state = 1;
  confirmTitleLabel = (UnityEngine_Object_o *)this->fields.confirmTitleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(confirmTitleLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmTitleLabel;
    if ( !gameObject )
      goto LABEL_60;
    v39 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v39, 0LL);
    v40 = this->fields.confirmTitleLabel;
    if ( !v40 )
      goto LABEL_60;
    mText = v40->fields.mText;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(confirmDetailLabel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    v45 = msg ? msg : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)gameObject, v45, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_fontSize((UILabel_o *)gameObject, fontSize, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, (float)positionY, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.confirmDetailLabel;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0LL);
  }
  closeBtnLb = (UnityEngine_Object_o *)this->fields.closeBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(closeBtnLb, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( !gameObject )
      goto LABEL_60;
    UILabel__set_text((UILabel_o *)gameObject, closeBtnText, 0LL);
  }
  middleBtnLb = (UnityEngine_Object_o *)this->fields.middleBtnLb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
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
  TripleButtonDlgComponent__SetBackKeyForAndroid(this, v50);
  if ( setButtonSpaceNum )
  {
    GameObjectExtensions__SetLocalPositionX(this->fields.closeBtn, (float)-setButtonSpaceNum, 0LL);
    GameObjectExtensions__SetLocalPositionX(this->fields.rightBtn, (float)setButtonSpaceNum, 0LL);
  }
  if ( resetButtonDesign )
  {
    TripleButtonDlgComponent__SetButtonSpriteSize(v51, this->fields.closeBtnSprite, v53);
    TripleButtonDlgComponent__SetButtonSpriteSize(v55, this->fields.middleBtnSprite, v56);
    TripleButtonDlgComponent__SetButtonSpriteSize(v57, this->fields.rightBtnSprite, v58);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtnLb;
    if ( gameObject )
    {
      UILabel__set_fontSize((UILabel_o *)gameObject, 24, 0LL);
      goto LABEL_59;
    }
LABEL_60:
    sub_1BCAA3C(gameObject, v30);
  }
LABEL_59:
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_TripleButtonDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
}


void __fastcall TripleButtonDlgComponent__SetBackKeyForAndroid(
        TripleButtonDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TripleButtonDlgComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UILabel_o *closeBtnLb; // x8
  System_String_o *mText; // x20
  System_String_o *v8; // x0

  v3 = this;
  if ( (byte_4B14E5B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    this = (TripleButtonDlgComponent_o *)sub_1BCA7E0(&StringLiteral_13412/*"TALKRESUME_CONFIRM_CANCEL"*/, v4, v5);
    byte_4B14E5B = 1;
  }
  closeBtnLb = v3->fields.closeBtnLb;
  if ( !closeBtnLb )
    sub_1BCAA3C(this, method);
  mText = closeBtnLb->fields.mText;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13412/*"TALKRESUME_CONFIRM_CANCEL"*/, 0LL);
  if ( !System_String__op_Equality(mText, v8, 0LL) )
    AndroidBackKeyManager__AddBackBtn(v3->fields.closeBtn, 0LL);
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

  if ( (byte_4B14E5C & 1) == 0 )
  {
    this = (TripleButtonDlgComponent_o *)sub_1BCA7E0(
                                           &Method_UnityEngine_Component_GetComponent_UIRect___,
                                           sprite,
                                           method);
    byte_4B14E5C = 1;
  }
  if ( !sprite )
    goto LABEL_8;
  this = (TripleButtonDlgComponent_o *)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)sprite,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIRect___);
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
    sub_1BCAA3C(this, sprite);
  }
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__SetEnableButton(
        TripleButtonDlgComponent_o *this,
        UnityEngine_GameObject_o *buttonObj,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B14E56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, buttonObj, isEnable);
    this = (TripleButtonDlgComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B14E56 = 1;
  }
  if ( !buttonObj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(this, buttonObj);
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

  if ( (byte_4B14E4F & 1) == 0 )
  {
    sub_1BCA7E0(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B14E4F = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B14E50 & 1) == 0 )
  {
    sub_1BCA7E0(&TripleButtonDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B14E50 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  TripleButtonDlgComponent__Init(v11, v12);
}


void __fastcall TripleButtonDlgComponent__setCallback(
        TripleButtonDlgComponent_o *this,
        TripleButtonDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)method,
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
  __int64 v6; // x2
  UnityEngine_GameObject_o *closeBtn; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B14E55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B14E55 = 1;
  }
  closeBtn = this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       closeBtn,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(closeBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateMiddleButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *middleBtn; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B14E54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B14E54 = 1;
  }
  middleBtn = this->fields.middleBtn;
  if ( !middleBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       middleBtn,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(middleBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent__setStateRightButton(
        TripleButtonDlgComponent_o *this,
        bool disabled,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *rightBtn; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B14E53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, disabled, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B14E53 = 1;
  }
  rightBtn = this->fields.rightBtn;
  if ( !rightBtn )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rightBtn,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(rightBtn, disabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TripleButtonDlgComponent_CallbackFunc___ctor(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0BED8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BE90;
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
  if ( (byte_4B14E5E & 1) == 0 )
  {
    sub_1BCA7E0(&TripleButtonDlgComponent_ResultClicked_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B14E5E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(TripleButtonDlgComponent_ResultClicked_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall TripleButtonDlgComponent_CallbackFunc__EndInvoke(
        TripleButtonDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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