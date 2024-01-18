void __fastcall SetVolumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  struct UnityEngine_Color_o v18; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418BC74 & 1) == 0 )
  {
    sub_B2C35C(&SetVolumeControl_TypeInfo, v1);
    byte_418BC74 = 1;
  }
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor(v20, v2, v3, v4, v5, (const MethodInfo *)&methoda.return_type);
  v21.fields.g = 0.5;
  v21.fields.b = 0.5;
  v21.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v21.fields.r = 0.5;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor(v21, v6, v7, v8, v9, (const MethodInfo *)&methoda.name);
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.name;
  v22.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor(v22, v10, v11, v12, v13, &methoda);
  v23.fields.g = 0.5;
  v23.fields.b = 0.5;
  v23.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v23.fields.r = 0.0;
  v18 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v23, v14, v15, v16, v17, (const MethodInfo *)&v18);
  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR = v18;
}


void __fastcall SetVolumeControl___ctor(SetVolumeControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


// attributes: thunk
void __fastcall SetVolumeControl__Init(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__initSetVolume(this, method);
}


void __fastcall SetVolumeControl__OnClickMuteButton(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v3; // w19

  if ( (byte_418BC72 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418BC72 = 1;
  }
  BYTE4(this[1].klass) ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v3 = BYTE4(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v3, 0LL);
}


// attributes: thunk
void __fastcall SetVolumeControl__Reflection(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__reflectionVolume(this, method);
}


void __fastcall SetVolumeControl__getChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *bgmValueTxt; // x0
  const MethodInfo *v4; // x1
  float voiceValue; // s8

  if ( (byte_418BC6B & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC6B = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B2C434(0LL, method);
  this->fields.voiceValue = UIProgressBar__get_value((UIProgressBar_o *)bgmValueTxt, 0LL);
  SetVolumeControl__setChangeBgmText(this, v4);
  if ( !BYTE4(this[1].klass) )
  {
    voiceValue = this->fields.voiceValue;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestBgmVolume(voiceValue, 0LL);
  }
}


void __fastcall SetVolumeControl__getChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  float v6; // s10
  float v7; // s8
  const MethodInfo *v8; // x1
  float v9; // s9

  if ( (byte_418BC6D & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SeManager_TypeInfo, v3);
    byte_418BC6D = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL),
        (seValueTxt = this->fields.seValueTxt) == 0LL) )
  {
    sub_B2C434(seValueTxt, method);
  }
  v6 = *(float *)&this->fields.muteFlag;
  v7 = value;
  *(float *)&this->fields.muteFlag = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL);
  SetVolumeControl__setChangeSeText(this, v8);
  if ( !BYTE4(this[1].klass) )
  {
    v9 = *(float *)&this->fields.muteFlag;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v9, 0LL);
    if ( v6 != v7 )
    {
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(21, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  float v7; // s10
  float v8; // s8
  const MethodInfo *v9; // x1
  float v10; // s9

  if ( (byte_418BC6F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_22645/*"testVoice"*/, v4);
    byte_418BC6F = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL),
        (voiceValueTxt = this->fields.voiceValueTxt) == 0LL) )
  {
    sub_B2C434(voiceValueTxt, method);
  }
  v7 = *(float *)&this[1].klass;
  v8 = value;
  *(float *)&this[1].klass = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v9);
  if ( !BYTE4(this[1].klass) )
  {
    v10 = *(float *)&this[1].klass;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v10, 0LL);
    if ( v7 != v8 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice((System_String_o *)StringLiteral_22645/*"testVoice"*/, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *bgmSilder; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *seSilder; // x20
  UILabel_o *voiceSilder; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  UILabel_o *v17; // x20
  float VoiceVolume; // s0
  struct UILabel_o *bgmValueTxt; // x20
  float BgmVolume; // s0
  struct UILabel_o *seValueTxt; // x20
  float SeVolume; // s0
  struct UILabel_o *voiceValueTxt; // x20
  float v24; // s0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1

  if ( (byte_418BC69 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9824/*"OPTION_VOLUME_MUTE_INFO"*/, v4);
    sub_B2C35C(&StringLiteral_9821/*"OPTION_VOICE"*/, v5);
    sub_B2C35C(&StringLiteral_9823/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, v6);
    sub_B2C35C(&StringLiteral_9809/*"OPTION_SE"*/, v7);
    sub_B2C35C(&StringLiteral_9779/*"OPTION_BGM"*/, v8);
    sub_B2C35C(&StringLiteral_9822/*"OPTION_VOLUME_MUTE"*/, v9);
    byte_418BC69 = 1;
  }
  bgmSilder = (UILabel_o *)this->fields.bgmSilder;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9779/*"OPTION_BGM"*/, 0LL);
  if ( !bgmSilder )
    goto LABEL_19;
  UILabel__set_text(bgmSilder, v11, 0LL);
  seSilder = (UILabel_o *)this->fields.seSilder;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9809/*"OPTION_SE"*/, 0LL);
  if ( !seSilder )
    goto LABEL_19;
  UILabel__set_text(seSilder, v11, 0LL);
  voiceSilder = (UILabel_o *)this->fields.voiceSilder;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9821/*"OPTION_VOICE"*/, 0LL);
  if ( !voiceSilder )
    goto LABEL_19;
  UILabel__set_text(voiceSilder, v11, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9822/*"OPTION_VOLUME_MUTE"*/, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_19;
  UILabel__set_text(muteBtnInfoTxt, v11, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9824/*"OPTION_VOLUME_MUTE_INFO"*/, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_19;
  UILabel__set_text(muteMaskExpTxt, v11, 0LL);
  v17 = *(UILabel_o **)&this->fields.bgmValue;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9823/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0LL);
  if ( !v17 )
    goto LABEL_19;
  UILabel__set_text(v17, v11, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  BYTE4(this[1].klass) = OptionManager__GetVolumeMute(0LL);
  this->fields.voiceValue = OptionManager__GetBgmVolume(0LL);
  *(float *)&this->fields.muteFlag = OptionManager__GetSeVolume(0LL);
  VoiceVolume = OptionManager__GetVoiceVolume(0LL);
  bgmValueTxt = this->fields.bgmValueTxt;
  *(float *)&this[1].klass = VoiceVolume;
  BgmVolume = OptionManager__GetBgmVolume(0LL);
  if ( !bgmValueTxt
    || (UIProgressBar__set_value((UIProgressBar_o *)bgmValueTxt, BgmVolume, 0LL),
        seValueTxt = this->fields.seValueTxt,
        SeVolume = OptionManager__GetSeVolume(0LL),
        !seValueTxt)
    || (UIProgressBar__set_value((UIProgressBar_o *)seValueTxt, SeVolume, 0LL),
        voiceValueTxt = this->fields.voiceValueTxt,
        v24 = OptionManager__GetVoiceVolume(0LL),
        !voiceValueTxt) )
  {
LABEL_19:
    sub_B2C434(v11, v12);
  }
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v24, 0LL);
  SetVolumeControl__setChangeBgmText(this, v25);
  SetVolumeControl__setChangeSeText(this, v26);
  SetVolumeControl__setChangeVoiceText(this, v27);
  SetVolumeControl__muteSetting(this, v28);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *muteMask; // x0
  UIWidget_o *bgmSilder; // x20
  float v8; // s0
  UIWidget_o *v9; // x20
  float voiceValue; // s8

  if ( (byte_418BC73 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SetVolumeControl_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v4);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v5);
    byte_418BC73 = 1;
  }
  muteMask = this->fields.muteMask;
  if ( !muteMask )
    goto LABEL_34;
  if ( BYTE4(this[1].klass) )
  {
    UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17006/*"btn_on"*/, 0LL);
    muteMask = this->fields.muteBtnTxt;
    if ( muteMask )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteMask, 1, 0LL);
      bgmSilder = (UIWidget_o *)this->fields.bgmSilder;
      muteMask = SetVolumeControl_TypeInfo;
      if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SetVolumeControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
        muteMask = SetVolumeControl_TypeInfo;
      }
      if ( bgmSilder )
      {
        UIWidget__set_color(bgmSilder, *(UnityEngine_Color_o *)(*((_QWORD *)muteMask + 23) + 16LL), 0LL);
        muteMask = this->fields.seSilder;
        if ( muteMask )
        {
          UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
          muteMask = this->fields.voiceSilder;
          if ( muteMask )
          {
            UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
            muteMask = this->fields.seTxt;
            if ( muteMask )
            {
              UIWidget__set_color(
                (UIWidget_o *)muteMask,
                SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                0LL);
              muteMask = this->fields.voiceTxt;
              if ( muteMask )
              {
                UIWidget__set_color(
                  (UIWidget_o *)muteMask,
                  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                  0LL);
                muteMask = this->fields.muteBtn;
                if ( muteMask )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)muteMask,
                    SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                    0LL);
                  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !OptionManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  }
                  OptionManager__TestBgmVolume(0.0, 0LL);
                  OptionManager__TestSeVolume(0.0, 0LL);
                  v8 = 0.0;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(muteMask, method);
  }
  UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17005/*"btn_off"*/, 0LL);
  muteMask = this->fields.muteBtnTxt;
  if ( !muteMask )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteMask, 0, 0LL);
  v9 = (UIWidget_o *)this->fields.bgmSilder;
  muteMask = SetVolumeControl_TypeInfo;
  if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    muteMask = SetVolumeControl_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_34;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)*((_QWORD *)muteMask + 23), 0LL);
  muteMask = this->fields.seSilder;
  if ( !muteMask )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  muteMask = this->fields.voiceSilder;
  if ( !muteMask )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  muteMask = this->fields.seTxt;
  if ( !muteMask )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  muteMask = this->fields.voiceTxt;
  if ( !muteMask )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  muteMask = this->fields.muteBtn;
  if ( !muteMask )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)muteMask, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  voiceValue = this->fields.voiceValue;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__TestBgmVolume(voiceValue, 0LL);
  OptionManager__TestSeVolume(*(float *)&this->fields.muteFlag, 0LL);
  v8 = *(float *)&this[1].klass;
LABEL_33:
  OptionManager__TestVoiceVolume(v8, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v3; // w20

  if ( (byte_418BC6A & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC6A = 1;
  }
  v3 = BYTE4(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetVolumeMute(v3 != 0, 0LL);
  OptionManager__SetBgmVolume(this->fields.voiceValue, 0LL);
  OptionManager__SetSeVolume(*(float *)&this->fields.muteFlag, 0LL);
  OptionManager__SetVoiceVolume(*(float *)&this[1].klass, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmText(SetVolumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *seTxt; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = UnityEngine_Mathf__CeilToInt(this->fields.voiceValue * 10.0, 0LL);
  seTxt = this->fields.seTxt;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !seTxt )
    sub_B2C434(v4, v5);
  UILabel__set_text(seTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *bgmValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_418BC6C & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC6C = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B2C434(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)bgmValueTxt, 0LL);
  v5 = BYTE4(this[1].klass);
  this->fields.voiceValue = value;
  if ( !v5 )
  {
    v6 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestBgmVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeSeText(SetVolumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *voiceTxt; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = UnityEngine_Mathf__CeilToInt(*(float *)&this->fields.muteFlag * 10.0, 0LL);
  voiceTxt = this->fields.voiceTxt;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !voiceTxt )
    sub_B2C434(v4, v5);
  UILabel__set_text(voiceTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_418BC6E & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC6E = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt )
    sub_B2C434(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL);
  v5 = BYTE4(this[1].klass);
  *(float *)&this->fields.muteFlag = value;
  if ( !v5 )
  {
    v6 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeVoiceText(SetVolumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *muteBtn; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = UnityEngine_Mathf__CeilToInt(*(float *)&this[1].klass * 10.0, 0LL);
  muteBtn = (UILabel_o *)this->fields.muteBtn;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !muteBtn )
    sub_B2C434(v4, v5);
  UILabel__set_text(muteBtn, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_418BC70 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BC70 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt )
    sub_B2C434(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL);
  v5 = BYTE4(this[1].klass);
  *(float *)&this[1].klass = value;
  if ( !v5 )
  {
    v6 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  OptionManager_c *v4; // x0
  struct UILabel_o *bgmValueTxt; // x21
  float DEF_VOL; // s0
  struct UILabel_o *seValueTxt; // x21
  float v8; // s0
  struct UILabel_o *voiceValueTxt; // x21
  float v10; // s0
  const MethodInfo *v11; // x1

  if ( (byte_418BC71 & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418BC71 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_418BCE9 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BCE9 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  BYTE4(this[1].klass) = v4->static_fields->DEF_MUTE;
  if ( !byte_418BCEA )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    v4 = OptionManager_TypeInfo;
    byte_418BCEA = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OptionManager_TypeInfo;
  }
  DEF_VOL = v4->static_fields->DEF_VOL;
  this->fields.voiceValue = DEF_VOL;
  if ( !bgmValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)bgmValueTxt, DEF_VOL, 0LL);
  seValueTxt = this->fields.seValueTxt;
  if ( !byte_418BCEA )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BCEA = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  v8 = v4->static_fields->DEF_VOL;
  *(float *)&this->fields.muteFlag = v8;
  if ( !seValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)seValueTxt, v8, 0LL);
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !byte_418BCEA )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418BCEA = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  v10 = v4->static_fields->DEF_VOL;
  *(float *)&this[1].klass = v10;
  if ( !voiceValueTxt )
LABEL_33:
    sub_B2C434(v4, method);
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v10, 0LL);
  SetVolumeControl__muteSetting(this, v11);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}