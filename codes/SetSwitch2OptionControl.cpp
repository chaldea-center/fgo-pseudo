void __fastcall SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendCostumeDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *firnedCostumeDispTitle; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *friendCostumeDispInfoLb; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4A0427D & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&OptionManager_TypeInfo, v3);
    sub_1B686D4(&StringLiteral_9619/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, v4);
    sub_1B686D4(&StringLiteral_9618/*"OPTION_FRIEND_COSTUME_DISP"*/, v5);
    byte_4A0427D = 1;
  }
  firnedCostumeDispTitle = this->fields.firnedCostumeDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9618/*"OPTION_FRIEND_COSTUME_DISP"*/, 0LL);
  if ( !firnedCostumeDispTitle
    || (UILabel__set_text(firnedCostumeDispTitle, v7, 0LL),
        friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb,
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_9619/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0LL),
        !friendCostumeDispInfoLb) )
  {
    sub_1B68930(v7, v8);
  }
  UILabel__set_text(friendCostumeDispInfoLb, v7, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendCostumeDisp = OptionManager__GetFriendCostume(0LL);
  SetSwitch2OptionControl__setFriendDispValue(this, v10);
}


void __fastcall SetSwitch2OptionControl__OnFriendDispChangeBtn(
        SetSwitch2OptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isFriendCostumeDisp; // w20
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v10; // x8
  bool v11; // w20

  if ( (byte_4A04280 & 1) == 0 )
  {
    sub_1B686D4(&Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__, method);
    sub_1B686D4(&StringLiteral_17461/*"btn_on"*/, v3);
    sub_1B686D4(&StringLiteral_17460/*"btn_off"*/, v4);
    byte_4A04280 = 1;
  }
  v5 = Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__;
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B686EC(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
  if ( !isFriendCostumeDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
    if ( friendCostumeDispBtn )
    {
      v10 = &StringLiteral_17461/*"btn_on"*/;
      v11 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B68930(friendCostumeDispBtn, v8);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    goto LABEL_11;
  v10 = &StringLiteral_17460/*"btn_off"*/;
  v11 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v10, 0LL);
  this->fields.isFriendCostumeDisp = v11;
}


void __fastcall SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendCostumeDisp; // w19

  if ( (byte_4A0427E & 1) == 0 )
  {
    sub_1B686D4(&OptionManager_TypeInfo, method);
    byte_4A0427E = 1;
  }
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendCostume(isFriendCostumeDisp, 0LL);
}


void __fastcall SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4A0427F & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17461/*"btn_on"*/, method);
    sub_1B686D4(&StringLiteral_17460/*"btn_off"*/, v3);
    byte_4A0427F = 1;
  }
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    sub_1B68930(0LL, method);
  if ( this->fields.isFriendCostumeDisp )
    v5 = &StringLiteral_17461/*"btn_on"*/;
  else
    v5 = &StringLiteral_17460/*"btn_off"*/;
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v5, 0LL);
}