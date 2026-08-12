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

  if ( (byte_596B5A7 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10078/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/);
    sub_2213A60(&StringLiteral_10079/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10077/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10076/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/);
    byte_596B5A7 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
  if ( !ownSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_10078/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_10079/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          v7),
        friendSettingInfo = this->fields.friendSettingInfo,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0),
        !friendSettingInfo) )
  {
    sub_2213CDC(RandomLimitCountOwn, v6);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_10076/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_10077/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
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
  if ( (byte_596B5AA & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_2213A60(&Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    byte_596B5AA = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_14;
  v4 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( !friendSettingInfo->fields.flag )
  {
    if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
    if ( this )
    {
      v6 = 1;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  if ( (byte_596B5A9 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_2213A60(&Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    byte_596B5A9 = 1;
  }
  ownSettingInfo = v2->fields.ownSettingInfo;
  if ( !ownSettingInfo )
    goto LABEL_14;
  v4 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( !ownSettingInfo->fields.flag )
  {
    if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    this = (SetRandomLimitCountOptionControl_o *)v2->fields.ownSettingInfo;
    if ( this )
    {
      v6 = 1;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
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
  if ( (byte_596B5A8 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5A8 = 1;
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
    sub_2213CDC(this, method);
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

  if ( (byte_596B5AB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B5AB = 1;
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
    sub_2213CDC(v12, v13);
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

  if ( (byte_596B5AC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5AC = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.flag )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v4, 0);
}