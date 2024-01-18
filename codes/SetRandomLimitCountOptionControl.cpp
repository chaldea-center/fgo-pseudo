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
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v9; // x1
  SetRandomLimitCountOptionControl_CategoryInfo_o *klass; // x19

  if ( (byte_418B997 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9797/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/, v3);
    sub_B2C35C(&StringLiteral_9798/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/, v4);
    sub_B2C35C(&StringLiteral_9796/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v5);
    sub_B2C35C(&StringLiteral_9795/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/, v6);
    byte_418B997 = 1;
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
          (System_String_o *)StringLiteral_9797/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9798/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          0LL),
        klass = (SetRandomLimitCountOptionControl_CategoryInfo_o *)this[1].klass,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL),
        !klass) )
  {
    sub_B2C434(RandomLimitCountOwn, v9);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    klass,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9795/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9796/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_o *v2; // x19
  SetRandomLimitCountOptionControl_c *klass; // x8
  SetRandomLimitCountOptionControl_c *v4; // x8
  char v5; // w9

  v2 = this;
  if ( (byte_418B99A & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B99A = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_17;
  if ( LOBYTE(klass->_1.name) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v4 = v2[1].klass;
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(this, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  v4 = v2[1].klass;
  if ( !v4 )
    goto LABEL_17;
  v5 = 1;
LABEL_15:
  LOBYTE(v4->_1.name) = v5;
  this = (SetRandomLimitCountOptionControl_o *)v2[1].klass;
  if ( !this )
    goto LABEL_17;
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
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *v4; // x8
  char v5; // w9

  v2 = this;
  if ( (byte_418B999 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B999 = 1;
  }
  friendSettingInfo = v2->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_17;
  if ( friendSettingInfo->fields.flag )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v4 = v2->fields.friendSettingInfo;
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(this, method);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  v4 = v2->fields.friendSettingInfo;
  if ( !v4 )
    goto LABEL_17;
  v5 = 1;
LABEL_15:
  v4->fields.flag = v5;
  this = (SetRandomLimitCountOptionControl_o *)v2->fields.friendSettingInfo;
  if ( !this )
    goto LABEL_17;
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
  if ( (byte_418B998 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418B998 = 1;
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
    sub_B2C434(this, method);
  OptionManager__SetRandomLimitCountFriend((bool)klass->_1.name, 0LL);
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
        bool flag,
        System_String_o *buttonTextKey,
        System_String_o *explanationKey,
        const MethodInfo *method)
{
  UILabel_o *buttonLabel; // x22
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v13; // x1

  if ( (byte_418543D & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, flag);
    byte_418543D = 1;
  }
  this->fields.flag = flag;
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
    sub_B2C434(v10, v11);
  }
  UILabel__set_text(explanationLabel, v10, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *button; // x0
  __int64 *v5; // x8

  if ( (byte_418543E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418543E = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_B2C434(0LL, method);
  if ( this->fields.flag )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v5, 0LL);
}