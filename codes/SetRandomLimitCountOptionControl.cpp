void SetRandomLimitCountOptionControl___ctor(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetRandomLimitCountOptionControl__Init(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x19
  const MethodInfo *v9; // x4

  if ( (byte_593349F & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10065/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10066/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10064/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10063/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/);
    byte_593349F = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
  if ( !ownSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_10065/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_10066/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          v7),
        friendSettingInfo = this->fields.friendSettingInfo,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0),
        !friendSettingInfo) )
  {
    sub_21FFECC(RandomLimitCountOwn, v6);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_10063/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_10064/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    v9);
}


void SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  char v6; // w8
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_59334A2 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_21FFC50(&Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    byte_59334A2 = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_14;
  v4 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( !friendSettingInfo->fields.flag )
  {
    if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
    if ( this )
    {
      v6 = 1;
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(this, method);
  }
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
  if ( !this )
    goto LABEL_14;
  v6 = 0;
LABEL_13:
  LOBYTE(this->fields.m_CachedPtr) = v6;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    method);
}


void SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  char v6; // w8
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_59334A1 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_21FFC50(&Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    byte_59334A1 = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_14;
  v4 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( !ownSettingInfo->fields.flag )
  {
    if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
    if ( this )
    {
      v6 = 1;
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(this, method);
  }
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
  if ( !this )
    goto LABEL_14;
  v6 = 0;
LABEL_13:
  LOBYTE(this->fields.m_CachedPtr) = v6;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    method);
}


void SetRandomLimitCountOptionControl__Reflection(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SetRandomLimitCountOptionControl_o *v3; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8

  v3 = this;
  if ( (byte_59334A0 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_21FFC50(&OptionManager_TypeInfo);
    byte_59334A0 = 1;
  }
  ownSettingInfo = v3->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_8;
  flag = ownSettingInfo->fields.flag;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetRandomLimitCountOwn(flag, 0);
  friendSettingInfo = v3->fields.friendSettingInfo;
  if ( !friendSettingInfo )
LABEL_8:
    sub_21FFECC(this, method);
  OptionManager__SetRandomLimitCountFriend(friendSettingInfo->fields.flag, 0);
}


void SetRandomLimitCountOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SetRandomLimitCountOptionControl_CategoryInfo__Init(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        bool limitCountFlag,
        System_String_o *buttonTextKey,
        System_String_o *explanationKey,
        const MethodInfo *method)
{
  LocalizationManager_c *v9; // x0
  bool v10; // w9
  UILabel_o *buttonLabel; // x22
  System_String_o *v12; // x0
  __int64 v13; // x1
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v15; // x1

  if ( (byte_59334A3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59334A3 = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  v10 = limitCountFlag;
  buttonLabel = this->fields.buttonLabel;
  this->fields.flag = v10;
  if ( !*(&v9->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v9, limitCountFlag, buttonTextKey);
  v12 = LocalizationManager__Get(buttonTextKey, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v12, 0),
        explanationLabel = this->fields.explanationLabel,
        v12 = LocalizationManager__Get(explanationKey, 0),
        !explanationLabel) )
  {
    sub_21FFECC(v12, v13);
  }
  UILabel__set_text(explanationLabel, v12, 0);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v15);
}


void SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  UIButton_o *button; // x0
  __int64 *v4; // x8

  if ( (byte_59334A4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_59334A4 = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_21FFECC(0, method);
  v4 = &StringLiteral_18236/*"btn_off"*/;
  if ( this->fields.flag )
    v4 = &StringLiteral_18237/*"btn_on"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v4, 0);
}