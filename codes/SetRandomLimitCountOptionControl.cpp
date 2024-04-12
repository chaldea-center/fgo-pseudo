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
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v5; // x1
  SetRandomLimitCountOptionControl_CategoryInfo_o *klass; // x19

  if ( (byte_42B2FDD & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9855/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/);
    sub_B52984(&StringLiteral_9856/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/);
    sub_B52984(&StringLiteral_9854/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/);
    sub_B52984(&StringLiteral_9853/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/);
    byte_42B2FDD = 1;
  }
  friendSettingInfo = this->fields.friendSettingInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0LL);
  if ( !friendSettingInfo
    || (SetRandomLimitCountOptionControl_CategoryInfo__Init(
          friendSettingInfo,
          RandomLimitCountOwn,
          (System_String_o *)StringLiteral_9855/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9856/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          0LL),
        klass = (SetRandomLimitCountOptionControl_CategoryInfo_o *)this[1].klass,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL),
        !klass) )
  {
    sub_B52A5C(RandomLimitCountOwn, v5);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    klass,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9853/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9854/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  SetRandomLimitCountOptionControl_c *klass; // x8
  int name_low; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SetRandomLimitCountOptionControl_c *v7; // x8
  char v8; // w9

  v2 = this;
  if ( (byte_42B2FE0 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B52984(&Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
    byte_42B2FE0 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_13;
  name_low = LOBYTE(klass->_1.name);
  v5 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  if ( name_low )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v7 = v2[1].klass;
    if ( !v7 )
      goto LABEL_13;
    v8 = 0;
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = v2[1].klass;
    if ( !v7 )
      goto LABEL_13;
    v8 = 1;
  }
  LOBYTE(v7->_1.name) = v8;
  this = (SetRandomLimitCountOptionControl_o *)v2[1].klass;
  if ( !this )
LABEL_13:
    sub_B52A5C(this, method);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *v7; // x8
  char v8; // w9

  v2 = this;
  if ( (byte_42B2FDF & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B52984(&Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
    byte_42B2FDF = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_13;
  flag = friendSettingInfo->fields.flag;
  v5 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5298C(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
  if ( flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v7 = v2->fields.friendSettingInfo;
    if ( !v7 )
      goto LABEL_13;
    v8 = 0;
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = v2->fields.friendSettingInfo;
    if ( !v7 )
      goto LABEL_13;
    v8 = 1;
  }
  v7->fields.flag = v8;
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
  if ( !this )
LABEL_13:
    sub_B52A5C(this, method);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__Reflection(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  SetRandomLimitCountOptionControl_c *klass; // x8

  v2 = this;
  if ( (byte_42B2FDE & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B52984(&OptionManager_TypeInfo);
    byte_42B2FDE = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_9;
  flag = friendSettingInfo->fields.flag;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetRandomLimitCountOwn(flag, 0LL);
  klass = v2[1].klass;
  if ( !klass )
LABEL_9:
    sub_B52A5C(this, method);
  OptionManager__SetRandomLimitCountFriend((bool)klass->_1.name, 0LL);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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

  if ( (byte_42AD3A0 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42AD3A0 = 1;
  }
  this->fields.flag = limitCountFlag;
  buttonLabel = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get(buttonTextKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v10, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v10 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_B52A5C(v10, v11);
  }
  UILabel__set_text(explanationLabel, v10, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  UIButton_o *button; // x0
  __int64 *v4; // x8

  if ( (byte_42AD3A1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42AD3A1 = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_B52A5C(0LL, method);
  if ( this->fields.flag )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v4, 0LL);
}