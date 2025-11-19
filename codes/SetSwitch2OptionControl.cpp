void SetSwitch2OptionControl___ctor(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  this->fields.isFriendCostumeDisp = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetSwitch2OptionControl__Init(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *firnedCostumeDispTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *friendCostumeDispInfoLb; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4CB12FC & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&OptionManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9662/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/);
    sub_1C6BA08(&StringLiteral_9661/*"OPTION_FRIEND_COSTUME_DISP"*/);
    byte_4CB12FC = 1;
  }
  firnedCostumeDispTitle = this->fields.firnedCostumeDispTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9661/*"OPTION_FRIEND_COSTUME_DISP"*/, 0);
  if ( !firnedCostumeDispTitle
    || (UILabel__set_text(firnedCostumeDispTitle, v4, 0),
        friendCostumeDispInfoLb = this->fields.friendCostumeDispInfoLb,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9662/*"OPTION_FRIEND_COSTUME_DISP_EXPLANATION"*/, 0),
        !friendCostumeDispInfoLb) )
  {
    sub_1C6BC60(v4, v5);
  }
  UILabel__set_text(friendCostumeDispInfoLb, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isFriendCostumeDisp = OptionManager__GetFriendCostume(0);
  SetSwitch2OptionControl__setFriendDispValue(this, v7);
}


void SetSwitch2OptionControl__OnFriendDispChangeBtn(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isFriendCostumeDisp; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v8; // x8
  bool v9; // w20

  if ( (byte_4CB12FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB12FF = 1;
  }
  v3 = Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__;
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( (*((_BYTE *)Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_SetSwitch2OptionControl_OnFriendDispChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  if ( !isFriendCostumeDisp )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
    if ( friendCostumeDispBtn )
    {
      v8 = &StringLiteral_17522/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C6BC60(friendCostumeDispBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17521/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v8, 0);
  this->fields.isFriendCostumeDisp = v9;
}


void SetSwitch2OptionControl__Reflection(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isFriendCostumeDisp; // w19

  if ( (byte_4CB12FD & 1) == 0 )
  {
    sub_1C6BA08(&OptionManager_TypeInfo);
    byte_4CB12FD = 1;
  }
  isFriendCostumeDisp = this->fields.isFriendCostumeDisp;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetFriendCostume(isFriendCostumeDisp, 0);
}


void SetSwitch2OptionControl__setFriendDispValue(SetSwitch2OptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *friendCostumeDispBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4CB12FE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB12FE = 1;
  }
  friendCostumeDispBtn = this->fields.friendCostumeDispBtn;
  if ( !friendCostumeDispBtn )
    sub_1C6BC60(0, method);
  if ( this->fields.isFriendCostumeDisp )
    v4 = &StringLiteral_17522/*"btn_on"*/;
  else
    v4 = &StringLiteral_17521/*"btn_off"*/;
  UIButton__set_normalSprite(friendCostumeDispBtn, (System_String_o *)*v4, 0);
}