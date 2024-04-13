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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x20
  _BOOL8 RandomLimitCountOwn; // x0
  __int64 v19; // x1
  SetRandomLimitCountOptionControl_CategoryInfo_o *klass; // x19

  if ( (byte_42EBAA4 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9897/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9898/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9896/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9895/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/, v14, v15, v16);
    byte_42EBAA4 = 1;
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
          (System_String_o *)StringLiteral_9897/*"OPTION_RANDOM_LIMIT_COUNT_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9898/*"OPTION_RANDOM_LIMIT_COUNT_OWN_EXPLANATION"*/,
          0LL),
        klass = (SetRandomLimitCountOptionControl_CategoryInfo_o *)this[1].klass,
        RandomLimitCountOwn = OptionManager__GetRandomLimitCountFriend(0LL),
        !klass) )
  {
    sub_B5D69C(RandomLimitCountOwn, v19);
  }
  SetRandomLimitCountOptionControl_CategoryInfo__Init(
    klass,
    RandomLimitCountOwn,
    (System_String_o *)StringLiteral_9895/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9896/*"OPTION_RANDOM_LIMIT_COUNT_FRIEND_EXPLANATION"*/,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetRandomLimitCountOptionControl_o *v4; // x19
  SetRandomLimitCountOptionControl_c *klass; // x8
  int name_low; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  SetRandomLimitCountOptionControl_c *v9; // x8
  char v10; // w9

  v4 = this;
  if ( (byte_42EBAA7 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B5D5C4(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__,
                                                   (_DWORD)method,
                                                   v2,
                                                   v3);
    byte_42EBAA7 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_13;
  name_low = LOBYTE(klass->_1.name);
  v7 = Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_SetRandomLimitCountOptionControl_OnClickFriendSettingButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  if ( name_low )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    v9 = v4[1].klass;
    if ( !v9 )
      goto LABEL_13;
    v10 = 0;
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v9 = v4[1].klass;
    if ( !v9 )
      goto LABEL_13;
    v10 = 1;
  }
  LOBYTE(v9->_1.name) = v10;
  this = (SetRandomLimitCountOptionControl_o *)v4[1].klass;
  if ( !this )
LABEL_13:
    sub_B5D69C(this, method);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetRandomLimitCountOptionControl_o *v4; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *v9; // x8
  char v10; // w9

  v4 = this;
  if ( (byte_42EBAA6 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B5D5C4(
                                                   &Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__,
                                                   (_DWORD)method,
                                                   v2,
                                                   v3);
    byte_42EBAA6 = 1;
  }
  friendSettingInfo = v4->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_13;
  flag = friendSettingInfo->fields.flag;
  v7 = Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_SetRandomLimitCountOptionControl_OnClickOwnSettingButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  if ( flag )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    v9 = v4->fields.friendSettingInfo;
    if ( !v9 )
      goto LABEL_13;
    v10 = 0;
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v9 = v4->fields.friendSettingInfo;
    if ( !v9 )
      goto LABEL_13;
    v10 = 1;
  }
  v9->fields.flag = v10;
  this = (SetRandomLimitCountOptionControl_o *)v4->fields.friendSettingInfo;
  if ( !this )
LABEL_13:
    sub_B5D69C(this, method);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
    (SetRandomLimitCountOptionControl_CategoryInfo_o *)this,
    0LL);
}


void __fastcall SetRandomLimitCountOptionControl__Reflection(
        SetRandomLimitCountOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetRandomLimitCountOptionControl_o *v4; // x19
  struct SetRandomLimitCountOptionControl_CategoryInfo_o *friendSettingInfo; // x8
  _BOOL4 flag; // w20
  SetRandomLimitCountOptionControl_c *klass; // x8

  v4 = this;
  if ( (byte_42EBAA5 & 1) == 0 )
  {
    this = (SetRandomLimitCountOptionControl_o *)sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAA5 = 1;
  }
  friendSettingInfo = v4->fields.friendSettingInfo;
  if ( !friendSettingInfo )
    goto LABEL_9;
  flag = friendSettingInfo->fields.flag;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetRandomLimitCountOwn(flag, 0LL);
  klass = v4[1].klass;
  if ( !klass )
LABEL_9:
    sub_B5D69C(this, method);
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

  if ( (byte_42E5DB8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, limitCountFlag, (_DWORD)buttonTextKey, explanationKey);
    byte_42E5DB8 = 1;
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
    sub_B5D69C(v10, v11);
  }
  UILabel__set_text(explanationLabel, v10, 0LL);
  SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(this, v13);
}


void __fastcall SetRandomLimitCountOptionControl_CategoryInfo__RefreshButton(
        SetRandomLimitCountOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIButton_o *button; // x0
  __int64 *v9; // x8

  if ( (byte_42E5DB9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E5DB9 = 1;
  }
  button = this->fields.button;
  if ( !button )
    sub_B5D69C(0LL, method);
  if ( this->fields.flag )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite(button, (System_String_o *)*v9, 0LL);
}