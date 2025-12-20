void SetRandomLimitCountOptionControl___ctor(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetRandomLimitCountOptionControl__Init(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x19
  const MethodInfo *v8; // x4

  if ( (byte_4D2780A & 1) == 0 )
  {
    sub_1C94098(&OptionManager_TypeInfo);
    sub_1C94098(&StringLiteral_9701/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/);
    sub_1C94098(&StringLiteral_9702/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_9700/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_9699/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/);
    byte_4D2780A = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
  if ( !ownSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_9701/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9702/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          v6),
        friendSettingInfo = this->fields.friendSettingInfo,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0),
        !friendSettingInfo) )
  {
    sub_1C942F0(RandomLimitCountOwn, v5);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9699/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9700/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    v8);
}


void SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  char v7; // w8

  v2 = this;
  if ( (byte_4D2780D & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1C94098(&Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    byte_4D2780D = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_12;
  flag = friendSettingInfo->fields.flag;
  v5 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C940B0(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
    if ( this )
    {
      v7 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(this, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
  if ( !this )
    goto LABEL_12;
  v7 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v7;
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
  _BOOL4 flag; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  char v7; // w8

  v2 = this;
  if ( (byte_4D2780C & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1C94098(&Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    byte_4D2780C = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_12;
  flag = ownSettingInfo->fields.flag;
  v5 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C940B0(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
  if ( !flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
    if ( this )
    {
      v7 = 1;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(this, method);
  }
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
  if ( !this )
    goto LABEL_12;
  v7 = 0;
LABEL_11:
  LOBYTE(this->fields.m_CachedPtr) = v7;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    method);
}


void SetRandomLimitCountOptionControl__Reflection(SetRandomLimitCountOptionControl_o *this, const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *ownSettingInfo; // x8
  _BOOL4 flag; // w20
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8

  v2 = this;
  if ( (byte_4D2780B & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_1C94098(&OptionManager_TypeInfo);
    byte_4D2780B = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_8;
  flag = ownSettingInfo->fields.flag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetRandomLimitCountOwn(flag, 0);
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
LABEL_8:
    sub_1C942F0(this, method);
  OptionManager__SetRandomLimitCountFriend(friendSettingInfo->fields.flag, 0);
}


void SetRandomLimitCountOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRandomLimitCountOptionControl_CategoryInfo__Init(
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

  if ( (byte_4D2780E & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D2780E = 1;
  }
  this->fields.flag = limitCountFlag;
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(buttonTextKey, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v10, 0),
        explanationLabel = this->fields.explanationLabel,
        v10 = LocalizationManager__Get(explanationKey, 0),
        !explanationLabel) )
  {
    sub_1C942F0(v10, v11);
  }
  UILabel__set_text(explanationLabel, v10, 0);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  UIButton_o *button; // x0
  __int64 *v4; // x8

  if ( (byte_4D2780F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17593/*"btn_on"*/);
    sub_1C94098(&StringLiteral_17592/*"btn_off"*/);
    byte_4D2780F = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_1C942F0(0, method);
  if ( this->fields.flag )
    v4 = &StringLiteral_17593/*"btn_on"*/;
  else
    v4 = &StringLiteral_17592/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v4, 0);
}