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
  bool RandomLimitCountOwn; // w0
  SetRandomLimitCountOptionControl_CategoryInfo_o *klass; // x19
  bool RandomLimitCountFriend; // w0

  if ( (byte_40FC3F3 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9767, v3);
    sub_B16FFC(&StringLiteral_9768, v4);
    sub_B16FFC(&StringLiteral_9766, v5);
    sub_B16FFC(&StringLiteral_9765, v6);
    byte_40FC3F3 = 1;
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
          (System_String_o *)StringLiteral_9767,
          (System_String_o *)StringLiteral_9768,
          0LL),
        klass = (SetRandomLimitCountOptionControl_CategoryInfo_o *)this[1].klass,
        RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0LL),
        !klass) )
  {
    sub_B170D4();
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    klass,
    RandomLimitCountFriend,
    (System_String_o *)StringLiteral_9765,
    (System_String_o *)StringLiteral_9766,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountOptionControl_c *klass; // x8
  SetRandomLimitCountOptionControl_c *v4; // x8
  char v5; // w9
  SetRandomLimitCountOptionControl_CategoryInfo_o *v6; // x0

  if ( (byte_40FC3F6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC3F6 = 1;
  }
  klass = this[1].klass;
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
    v4 = this[1].klass;
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  v4 = this[1].klass;
  if ( !v4 )
    goto LABEL_17;
  v5 = 1;
LABEL_15:
  LOBYTE(v4->_1.name) = v5;
  v6 = (SetRandomLimitCountOptionControl_CategoryInfo_o *)this[1].klass;
  if ( !v6 )
    goto LABEL_17;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(v6, 0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *v4; // x8
  char v5; // w9
  SetRandomLimitCountOptionControl_CategoryInfo_o *v6; // x0

  if ( (byte_40FC3F5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC3F5 = 1;
  }
  friendSettingInfo = this->fields.friendSettingInfo;
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
    v4 = this->fields.friendSettingInfo;
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(0, 0LL);
  v4 = this->fields.friendSettingInfo;
  if ( !v4 )
    goto LABEL_17;
  v5 = 1;
LABEL_15:
  v4->fields.flag = v5;
  v6 = this->fields.friendSettingInfo;
  if ( !v6 )
    goto LABEL_17;
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(v6, 0LL);
}


void __fastcall SetRandomLimitCountOptionControl__Reflection(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  SetRandomLimitCountOptionControl_c *klass; // x8

  if ( (byte_40FC3F4 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC3F4 = 1;
  }
  friendSettingInfo = this->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_9;
  flag = friendSettingInfo->fields.flag;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetRandomLimitCountOwn(flag, 0LL);
  klass = this[1].klass;
  if ( !klass )
LABEL_9:
    sub_B170D4();
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
  UILabel_o *explanationLabel; // x21
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40F7681 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, flag);
    byte_40F7681 = 1;
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
        v12 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(explanationLabel, v12, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *button; // x0
  __int64 *v5; // x8

  if ( (byte_40F7682 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40F7682 = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_B170D4();
  if ( this->fields.flag )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite(button, (System_String_o *)*v5, 0LL);
}