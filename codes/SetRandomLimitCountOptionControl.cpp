void __fastcall SetRandomLimitCountOptionControl___ctor(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetRandomLimitCountOptionControl__Init(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  const MethodInfo *v9; // x4
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x19
  const MethodInfo *v11; // x4

  if ( (byte_49F7A55 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9629/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/, v3);
    sub_1B640C8(&StringLiteral_9630/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/, v4);
    sub_1B640C8(&StringLiteral_9628/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v5);
    sub_1B640C8(&StringLiteral_9627/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/, v6);
    byte_49F7A55 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
  if ( !ownSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_9629/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9630/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          v9),
        friendSettingInfo = this->fields.friendSettingInfo,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL),
        !friendSettingInfo) )
  {
    sub_1B64324(RandomLimitCountOwn);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9627/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9628/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    v11);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  char v8; // w8

  v2 = this;
  if ( (byte_49F7A58 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1B640C8(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__,
                                                   method);
    byte_49F7A58 = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_12;
  flag = friendSettingInfo->fields.flag;
  v5 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
    if ( this )
    {
      v8 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(this);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
  if ( !this )
    goto LABEL_12;
  v8 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v8;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    v7);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  char v8; // w8

  v2 = this;
  if ( (byte_49F7A57 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1B640C8(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__,
                                                   method);
    byte_49F7A57 = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_12;
  flag = ownSettingInfo->fields.flag;
  v5 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
    if ( this )
    {
      v8 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(this);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
  if ( !this )
    goto LABEL_12;
  v8 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v8;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    v7);
}


void __fastcall SetRandomLimitCountOptionControl__Reflection(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8

  v2 = this;
  if ( (byte_49F7A56 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A56 = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_8;
  flag = ownSettingInfo->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetRandomLimitCountOwn(flag, 0LL);
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
LABEL_8:
    sub_1B64324(this);
  OptionManager__SetRandomLimitCountFriend(friendSettingInfo->fields.flag, 0LL);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__Init(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        bool limitCountFlag,
        System_String_o *buttonTextKey,
        System_String_o *explanationKey,
        const MethodInfo *method)
{
  UILabel_o *buttonLabel; // x22
  System_String_o *v10; // x0
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v12; // x1

  if ( (byte_49F7A59 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, limitCountFlag);
    byte_49F7A59 = 1;
  }
  this->fields.flag = limitCountFlag;
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(buttonTextKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v10, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v10 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_1B64324(v10);
  }
  UILabel__set_text(explanationLabel, v10, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v12);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *button; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A5A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A5A = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_1B64324(0LL);
  if ( this->fields.flag )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v5, 0LL);
}