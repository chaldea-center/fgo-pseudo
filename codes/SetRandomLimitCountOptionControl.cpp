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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x19
  const MethodInfo *v17; // x4

  if ( (byte_4B11637 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9807/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_9808/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9806/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9805/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/, v10, v11);
    byte_4B11637 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
  if ( !ownSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_9807/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9808/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          v15),
        friendSettingInfo = this->fields.friendSettingInfo,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL),
        !friendSettingInfo) )
  {
    sub_1BCAA3C(RandomLimitCountOwn, v14);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9805/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9806/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    v17);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetRandomLimitCountOptionControl_o *v3; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  char v8; // w8

  v3 = this;
  if ( (byte_4B1163A & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1BCA7E0(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__,
                                                   method,
                                                   v2);
    byte_4B1163A = 1;
  }
  friendSettingInfo = v3->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_12;
  flag = friendSettingInfo->fields.flag;
  v6 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this = (SetRandomLimitCountOptionControl_o *)v3->fields.friendSettingInfo;
    if ( this )
    {
      v8 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  this = (SetRandomLimitCountOptionControl_o *)v3->fields.friendSettingInfo;
  if ( !this )
    goto LABEL_12;
  v8 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v8;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    method);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetRandomLimitCountOptionControl_o *v3; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  char v8; // w8

  v3 = this;
  if ( (byte_4B11639 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1BCA7E0(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__,
                                                   method,
                                                   v2);
    byte_4B11639 = 1;
  }
  ownSettingInfo = v3->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_12;
  flag = ownSettingInfo->fields.flag;
  v6 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    this = (SetRandomLimitCountOptionControl_o *)v3->fields.ownSettingInfo;
    if ( this )
    {
      v8 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  this = (SetRandomLimitCountOptionControl_o *)v3->fields.ownSettingInfo;
  if ( !this )
    goto LABEL_12;
  v8 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v8;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    method);
}


void __fastcall SetRandomLimitCountOptionControl__Reflection(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SetRandomLimitCountOptionControl_o *v3; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8

  v3 = this;
  if ( (byte_4B11638 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11638 = 1;
  }
  ownSettingInfo = v3->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_8;
  flag = ownSettingInfo->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetRandomLimitCountOwn(flag, 0LL);
  friendSettingInfo = v3->fields.friendSettingInfo;
  if ( !friendSettingInfo )
LABEL_8:
    sub_1BCAA3C(this, method);
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
  __int64 v11; // x1
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v13; // x1

  if ( (byte_4B1163B & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, limitCountFlag, buttonTextKey);
    byte_4B1163B = 1;
  }
  this->fields.flag = limitCountFlag;
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, limitCountFlag);
  v10 = LocalizationManager__Get(buttonTextKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v10, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v10 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_1BCAA3C(v10, v11);
  }
  UILabel__set_text(explanationLabel, v10, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *button; // x0
  __int64 *v7; // x8

  if ( (byte_4B1163C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1163C = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.flag )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v7, 0LL);
}