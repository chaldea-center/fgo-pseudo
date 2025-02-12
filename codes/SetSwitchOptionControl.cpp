void __fastcall SetSwitchOptionControl___ctor(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSwitchOptionControl__Init(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *firnedDispTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *friendDispInfoLb; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4BC2E58 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&OptionManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_9848/*"OPTION_FRIEND_DISP_EXPLANATION"*/, v4);
    sub_1C1ABD4(&StringLiteral_9845/*"OPTION_FIREND_DISP"*/, v5);
    byte_4BC2E58 = 1;
  }
  firnedDispTitle = this->fields.firnedDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9845/*"OPTION_FIREND_DISP"*/, 0LL);
  if ( !firnedDispTitle
    || (UILabel__set_text(firnedDispTitle, v7, 0LL),
        friendDispInfoLb = this->fields.friendDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9848/*"OPTION_FRIEND_DISP_EXPLANATION"*/, 0LL),
        !friendDispInfoLb) )
  {
    sub_1C1AE30(v7, v8);
  }
  UILabel__set_text(friendDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendDisp = OptionManager__GetFriendImageLimitCount(0LL);
  SetSwitchOptionControl__setFriendDispValue(this, v10);
}


void __fastcall SetSwitchOptionControl__OnFriendDispChangeBtn(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isFriendDisp; // w20
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UIButton_o *friendDispBtn; // x0
  __int64 *v10; // x8
  bool v11; // w20

  if ( (byte_4BC2E5B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SetSwitchOptionControl_OnFriendDispChangeBtn__, method);
    sub_1C1ABD4(&StringLiteral_17806/*"btn_on"*/, v3);
    sub_1C1ABD4(&StringLiteral_17805/*"btn_off"*/, v4);
    byte_4BC2E5B = 1;
  }
  v5 = Method_SetSwitchOptionControl_OnFriendDispChangeBtn__;
  isFriendDisp = this->fields.isFriendDisp;
  if ( (*((_BYTE *)Method_SetSwitchOptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_SetSwitchOptionControl_OnFriendDispChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  if ( !isFriendDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    friendDispBtn = this->fields.friendDispBtn;
    if ( friendDispBtn )
    {
      v10 = &StringLiteral_17806/*"btn_on"*/;
      v11 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C1AE30(friendDispBtn, v8);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    goto LABEL_11;
  v10 = &StringLiteral_17805/*"btn_off"*/;
  v11 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v10, 0LL);
  this->fields.isFriendDisp = v11;
}


void __fastcall SetSwitchOptionControl__Reflection(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendDisp; // w19

  if ( (byte_4BC2E59 & 1) == 0 )
  {
    sub_1C1ABD4(&OptionManager_TypeInfo, method);
    byte_4BC2E59 = 1;
  }
  isFriendDisp = this->fields.isFriendDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendImageLimitCount(isFriendDisp, 0LL);
}


void __fastcall SetSwitchOptionControl__setFriendDispValue(SetSwitchOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *friendDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4BC2E5A & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17806/*"btn_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17805/*"btn_off"*/, v3);
    byte_4BC2E5A = 1;
  }
  friendDispBtn = this->fields.friendDispBtn;
  if ( !friendDispBtn )
    sub_1C1AE30(0LL, method);
  if ( this->fields.isFriendDisp )
    v5 = &StringLiteral_17806/*"btn_on"*/;
  else
    v5 = &StringLiteral_17805/*"btn_off"*/;
  UIButton__set_normalSprite(friendDispBtn, (System_String_o *)*v5, 0LL);
}