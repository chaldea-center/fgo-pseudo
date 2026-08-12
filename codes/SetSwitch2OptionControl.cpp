void SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendCostumeDisp = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
}


void SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *firnedCostumeDispTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *friendCostumeDispInfoLb; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_596B5D9 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10064/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10063/*"OPTION_FRIEND_COSTUME_DISP"*/);
    byte_596B5D9 = 1;
  }
  firnedCostumeDispTitle = this->fields.firnedCostumeDispTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10063/*"OPTION_FRIEND_COSTUME_DISP"*/, 0);
  if ( !firnedCostumeDispTitle
    || (UILabel__set_text(firnedCostumeDispTitle, v5, 0),
        friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10064/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0),
        !friendCostumeDispInfoLb) )
  {
    sub_2213CDC(v5, v6);
  }
  UILabel__set_text(friendCostumeDispInfoLb, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
  this->fields.isFriendCostumeDisp = OptionManager__GetFriendCostume(0);
  SetSwitch2OptionControl__setFriendDispValue(this, v10);
}


void SetSwitch2OptionControl__OnFriendDispChangeBtn(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  bool v7; // w20
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_596B5DC & 1) == 0 )
  {
    sub_2213A60(&Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5DC = 1;
  }
  v3 = Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__;
  if ( !this->fields.isFriendCostumeDisp )
  {
    if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
    if ( friendCostumeDispBtn )
    {
      v7 = 1;
      v8 = &StringLiteral_18275/*"btn_on"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(friendCostumeDispBtn, v5);
  }
  if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    goto LABEL_13;
  v7 = 0;
  v8 = &StringLiteral_18274/*"btn_off"*/;
LABEL_12:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v8, 0);
  this->fields.isFriendCostumeDisp = v7;
}


void SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isFriendCostumeDisp; // w19

  if ( (byte_596B5DA & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5DA = 1;
  }
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetFriendCostume(isFriendCostumeDisp, 0);
}


void SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_596B5DB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5DB = 1;
  }
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !this->fields.isFriendCostumeDisp )
  {
    if ( friendCostumeDispBtn )
    {
      v4 = &StringLiteral_18274/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(friendCostumeDispBtn, method);
  }
  if ( !friendCostumeDispBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18275/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v4, 0);
}