void __fastcall SetPlayOpeningMovieOptionControl___ctor(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__Init(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UILabel_o *titleLabel; // x20
  UILabel_o *infoLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *switchButton; // x20
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40FC3E4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9761, v5);
    sub_B16FFC(&StringLiteral_19652, v6);
    sub_B16FFC(&StringLiteral_9762, v7);
    byte_40FC3E4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetMyRoomImage((UISprite_o *)titleLabel, (System_String_o *)StringLiteral_19652, 0LL);
  infoLabel = this->fields.infoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_9761, 0LL);
  if ( !infoLabel
    || (UILabel__set_text(infoLabel, v10, 0LL),
        switchButton = (UILabel_o *)this->fields.switchButton,
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_9762, 0LL),
        !switchButton) )
  {
    sub_B170D4();
  }
  UILabel__set_text(switchButton, v12, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetNotPlayOpeningMovie(0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v13);
}


void __fastcall SetPlayOpeningMovieOptionControl__OnClickButton(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  SetPlayOpeningMovieOptionControl_c *klass; // x9
  int v4; // w20
  const MethodInfo *v5; // x1

  if ( (byte_40FC3E6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC3E6 = 1;
  }
  klass = this->klass;
  LOBYTE(this[1].klass) ^= 1u;
  ((void (__fastcall *)(SetPlayOpeningMovieOptionControl_o *, Il2CppMethodPointer))klass->vtable._5_Reflection.method)(
    this,
    klass->vtable._6_IsAvailable.methodPtr);
  v4 = LOBYTE(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v4, 0LL);
  SetPlayOpeningMovieOptionControl__RefreshDisplay(this, v5);
}


void __fastcall SetPlayOpeningMovieOptionControl__Reflection(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  int klass_low; // w19

  if ( (byte_40FC3E7 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC3E7 = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetNotPlayOpeningMovie(klass_low != 0, 0LL);
}


void __fastcall SetPlayOpeningMovieOptionControl__RefreshDisplay(
        SetPlayOpeningMovieOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *v4; // x0
  __int64 *v5; // x8

  if ( (byte_40FC3E5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC3E5 = 1;
  }
  v4 = *(UIButton_o **)&this->fields.flag;
  if ( !v4 )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite(v4, (System_String_o *)*v5, 0LL);
}