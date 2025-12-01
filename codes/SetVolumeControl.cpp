void SetVolumeControl___cctor(const MethodInfo *method)
{
  SetVolumeControl_c *v6; // x8

  if ( (byte_4CC2420 & 1) == 0 )
  {
    sub_1C713B0(&SetVolumeControl_TypeInfo);
    byte_4CC2420 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = _Q0;
  v6 = SetVolumeControl_TypeInfo;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = (struct UnityEngine_Color_o)xmmword_CEE9A0;
  v6->static_fields->NORMAL_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_CEF750;
  v6->static_fields->DARK_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_CEF760;
}


void SetVolumeControl___ctor(SetVolumeControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void SetVolumeControl__Init(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__initSetVolume(this, method);
}


void SetVolumeControl__OnClickMuteButton(SetVolumeControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4CC241E & 1) == 0 )
  {
    sub_1C713B0(&Method_SetVolumeControl_OnClickMuteButton__);
    byte_4CC241E = 1;
  }
  this->fields.muteFlag ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v3 = Method_SetVolumeControl_OnClickMuteButton__;
  if ( (*((_BYTE *)Method_SetVolumeControl_OnClickMuteButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_SetVolumeControl_OnClickMuteButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.muteFlag, 0, 0);
}


// attributes: thunk
void SetVolumeControl__Reflection(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__reflectionVolume(this, method);
}


void SetVolumeControl__getChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *bgmSilder; // x0
  const MethodInfo *v4; // x1
  float bgmValue; // s8

  if ( (byte_4CC2417 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC2417 = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1C71608(0, method);
  this->fields.bgmValue = UIProgressBar__get_value(bgmSilder, 0);
  SetVolumeControl__setChangeBgmText(this, v4);
  if ( !this->fields.muteFlag )
  {
    bgmValue = this->fields.bgmValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestBgmVolume(bgmValue, 0);
  }
}


void SetVolumeControl__getChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *seSilder; // x0
  float value; // s0
  float seValue; // s10
  float v6; // s8
  const MethodInfo *v7; // x1
  float v8; // s9
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4CC2419 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SetVolumeControl_getChangeSeValue__);
    byte_4CC2419 = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder
    || (value = UIProgressBar__get_value(seSilder, 0), (seSilder = (UIProgressBar_o *)this->fields.seSilder) == 0) )
  {
    sub_1C71608(seSilder, method);
  }
  seValue = this->fields.seValue;
  v6 = value;
  this->fields.seValue = UIProgressBar__get_value(seSilder, 0);
  SetVolumeControl__setChangeSeText(this, v7);
  if ( !this->fields.muteFlag )
  {
    v8 = this->fields.seValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestSeVolume(v8, 0);
    if ( seValue != v6 )
    {
      v9 = Method_SetVolumeControl_getChangeSeValue__;
      if ( (*((_BYTE *)Method_SetVolumeControl_getChangeSeValue__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C713C8(Method_SetVolumeControl_getChangeSeValue__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C71394(v9, v9[4]);
      OverwriteAssetSoundName__PlayCommonSe(v10, 21, 0, 0);
    }
  }
}


void SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *voiceSilder; // x0
  float value; // s0
  float voiceValue; // s10
  float v6; // s8
  const MethodInfo *v7; // x1
  float v8; // s9

  if ( (byte_4CC241B & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24154/*"testVoice"*/);
    byte_4CC241B = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder
    || (value = UIProgressBar__get_value(voiceSilder, 0),
        (voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder) == 0) )
  {
    sub_1C71608(voiceSilder, method);
  }
  voiceValue = this->fields.voiceValue;
  v6 = value;
  this->fields.voiceValue = UIProgressBar__get_value(voiceSilder, 0);
  SetVolumeControl__setChangeVoiceText(this, v7);
  if ( !this->fields.muteFlag )
  {
    v8 = this->fields.voiceValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestVoiceVolume(v8, 0);
    if ( voiceValue != v6 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice((System_String_o *)StringLiteral_24154/*"testVoice"*/, 0, 0);
    }
  }
}


void SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *bgmTxt; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *seTxt; // x20
  UILabel_o *voiceTxt; // x20
  UILabel_o *muteBtnTxt; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  float VoiceVolume; // s0
  UIProgressBar_o *bgmSilder; // x20
  float BgmVolume; // s0
  UIProgressBar_o *seSilder; // x20
  float SeVolume; // s0
  UIProgressBar_o *voiceSilder; // x20
  float v17; // s0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4CC2415 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&StringLiteral_9722/*"OPTION_VOLUME_MUTE_INFO"*/);
    sub_1C713B0(&StringLiteral_9719/*"OPTION_VOICE"*/);
    sub_1C713B0(&StringLiteral_9721/*"OPTION_VOLUME_MUTE_EXPLANATION"*/);
    sub_1C713B0(&StringLiteral_9707/*"OPTION_SE"*/);
    sub_1C713B0(&StringLiteral_9663/*"OPTION_BGM"*/);
    sub_1C713B0(&StringLiteral_9720/*"OPTION_VOLUME_MUTE"*/);
    byte_4CC2415 = 1;
  }
  bgmTxt = this->fields.bgmTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9663/*"OPTION_BGM"*/, 0);
  if ( !bgmTxt )
    goto LABEL_17;
  UILabel__set_text(bgmTxt, v4, 0);
  seTxt = this->fields.seTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9707/*"OPTION_SE"*/, 0);
  if ( !seTxt )
    goto LABEL_17;
  UILabel__set_text(seTxt, v4, 0);
  voiceTxt = this->fields.voiceTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9719/*"OPTION_VOICE"*/, 0);
  if ( !voiceTxt )
    goto LABEL_17;
  UILabel__set_text(voiceTxt, v4, 0);
  muteBtnTxt = this->fields.muteBtnTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9720/*"OPTION_VOLUME_MUTE"*/, 0);
  if ( !muteBtnTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnTxt, v4, 0);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9722/*"OPTION_VOLUME_MUTE_INFO"*/, 0);
  if ( !muteBtnInfoTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnInfoTxt, v4, 0);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9721/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0);
  if ( !muteMaskExpTxt )
    goto LABEL_17;
  UILabel__set_text(muteMaskExpTxt, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.muteFlag = OptionManager__GetVolumeMute(0);
  this->fields.bgmValue = OptionManager__GetBgmVolume(0);
  this->fields.seValue = OptionManager__GetSeVolume(0);
  VoiceVolume = OptionManager__GetVoiceVolume(0);
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  this->fields.voiceValue = VoiceVolume;
  BgmVolume = OptionManager__GetBgmVolume(0);
  if ( !bgmSilder
    || (UIProgressBar__set_value(bgmSilder, BgmVolume, 0),
        seSilder = (UIProgressBar_o *)this->fields.seSilder,
        SeVolume = OptionManager__GetSeVolume(0),
        !seSilder)
    || (UIProgressBar__set_value(seSilder, SeVolume, 0),
        voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder,
        v17 = OptionManager__GetVoiceVolume(0),
        !voiceSilder) )
  {
LABEL_17:
    sub_1C71608(v4, v5);
  }
  UIProgressBar__set_value(voiceSilder, v17, 0);
  SetVolumeControl__setChangeBgmText(this, v18);
  SetVolumeControl__setChangeSeText(this, v19);
  SetVolumeControl__setChangeVoiceText(this, v20);
  SetVolumeControl__muteSetting(this, v21);
}


void SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  void *muteBtn; // x0
  UIWidget_o *bgmTxt; // x20
  float voiceValue; // s8
  UIWidget_o *v6; // x20
  float bgmValue; // s8

  if ( (byte_4CC241F & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&SetVolumeControl_TypeInfo);
    sub_1C713B0(&StringLiteral_17529/*"btn_on"*/);
    sub_1C713B0(&StringLiteral_17528/*"btn_off"*/);
    byte_4CC241F = 1;
  }
  muteBtn = this->fields.muteBtn;
  if ( !muteBtn )
    goto LABEL_30;
  if ( this->fields.muteFlag )
  {
    UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17529/*"btn_on"*/, 0);
    muteBtn = this->fields.muteMask;
    if ( muteBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 1, 0);
      muteBtn = SetVolumeControl_TypeInfo;
      bgmTxt = (UIWidget_o *)this->fields.bgmTxt;
      if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
        muteBtn = SetVolumeControl_TypeInfo;
      }
      if ( bgmTxt )
      {
        UIWidget__set_color(bgmTxt, *(UnityEngine_Color_o *)(*((_QWORD *)muteBtn + 23) + 16LL), 0);
        muteBtn = this->fields.seTxt;
        if ( muteBtn )
        {
          UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0);
          muteBtn = this->fields.voiceTxt;
          if ( muteBtn )
          {
            UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0);
            muteBtn = this->fields.bgmValueTxt;
            if ( muteBtn )
            {
              UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR, 0);
              muteBtn = this->fields.seValueTxt;
              if ( muteBtn )
              {
                UIWidget__set_color(
                  (UIWidget_o *)muteBtn,
                  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                  0);
                muteBtn = this->fields.voiceValueTxt;
                if ( muteBtn )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)muteBtn,
                    SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                    0);
                  if ( !OptionManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  voiceValue = 0.0;
                  OptionManager__TestBgmVolume(0.0, 0);
                  OptionManager__TestSeVolume(0.0, 0);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C71608(muteBtn, method);
  }
  UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17528/*"btn_off"*/, 0);
  muteBtn = this->fields.muteMask;
  if ( !muteBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 0, 0);
  muteBtn = SetVolumeControl_TypeInfo;
  v6 = (UIWidget_o *)this->fields.bgmTxt;
  if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    muteBtn = SetVolumeControl_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_30;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)*((_QWORD *)muteBtn + 23), 0);
  muteBtn = this->fields.seTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0);
  muteBtn = this->fields.voiceTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0);
  muteBtn = this->fields.bgmValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  muteBtn = this->fields.seValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  muteBtn = this->fields.voiceValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  bgmValue = this->fields.bgmValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__TestBgmVolume(bgmValue, 0);
  OptionManager__TestSeVolume(this->fields.seValue, 0);
  voiceValue = this->fields.voiceValue;
LABEL_29:
  OptionManager__TestVoiceVolume(voiceValue, 0);
}


void SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  _BOOL4 muteFlag; // w20

  if ( (byte_4CC2416 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC2416 = 1;
  }
  muteFlag = this->fields.muteFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetVolumeMute(muteFlag, 0);
  OptionManager__SetBgmVolume(this->fields.bgmValue, 0);
  OptionManager__SetSeVolume(this->fields.seValue, 0);
  OptionManager__SetVoiceVolume(this->fields.voiceValue, 0);
}


void SetVolumeControl__setChangeBgmText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float bgmValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *bgmValueTxt; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  unsigned int v10; // [xsp+1Ch] [xbp-14h] BYREF

  bgmValue = this->fields.bgmValue;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v4 = bgmValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v10 = v6;
  bgmValueTxt = this->fields.bgmValueTxt;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  if ( !bgmValueTxt )
    sub_1C71608(v8, v9);
  UILabel__set_text(bgmValueTxt, v8, 0);
}


void SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *bgmSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_4CC2418 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC2418 = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(bgmSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.bgmValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestBgmVolume(v6, 0);
  }
}


void SetVolumeControl__setChangeSeText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float seValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *seValueTxt; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  unsigned int v10; // [xsp+1Ch] [xbp-14h] BYREF

  seValue = this->fields.seValue;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v4 = seValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v10 = v6;
  seValueTxt = this->fields.seValueTxt;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  if ( !seValueTxt )
    sub_1C71608(v8, v9);
  UILabel__set_text(seValueTxt, v8, 0);
}


void SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *seSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_4CC241A & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC241A = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(seSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.seValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestSeVolume(v6, 0);
  }
}


void SetVolumeControl__setChangeVoiceText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float voiceValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *voiceValueTxt; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1
  unsigned int v10; // [xsp+1Ch] [xbp-14h] BYREF

  voiceValue = this->fields.voiceValue;
  if ( !byte_4CC13B2 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC13B2 = 1;
  }
  v4 = voiceValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v10 = v6;
  voiceValueTxt = this->fields.voiceValueTxt;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  if ( !voiceValueTxt )
    sub_1C71608(v8, v9);
  UILabel__set_text(voiceValueTxt, v8, 0);
}


void SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *voiceSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_4CC241C & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC241C = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder )
    sub_1C71608(0, method);
  value = UIProgressBar__get_value(voiceSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.voiceValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestVoiceVolume(v6, 0);
  }
}


void SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  OptionManager_c *v3; // x0
  UIProgressBar_o *bgmSilder; // x21
  float DEF_VOL; // s0
  UIProgressBar_o *seSilder; // x21
  float v7; // s0
  UIProgressBar_o *voiceSilder; // x21
  float v9; // s0
  const MethodInfo *v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4CC241D & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&Method_SetVolumeControl_setDefaultVolume__);
    byte_4CC241D = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !byte_4CC24DB )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC24DB = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  this->fields.muteFlag = v3->static_fields->DEF_MUTE;
  if ( !byte_4CC24DC )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
    byte_4CC24DC = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OptionManager_TypeInfo;
  }
  DEF_VOL = v3->static_fields->DEF_VOL;
  this->fields.bgmValue = DEF_VOL;
  if ( !bgmSilder )
    goto LABEL_27;
  UIProgressBar__set_value(bgmSilder, DEF_VOL, 0);
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !byte_4CC24DC )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC24DC = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v7 = v3->static_fields->DEF_VOL;
  this->fields.seValue = v7;
  if ( !seSilder )
    goto LABEL_27;
  UIProgressBar__set_value(seSilder, v7, 0);
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !byte_4CC24DC )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    byte_4CC24DC = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v9 = v3->static_fields->DEF_VOL;
  this->fields.voiceValue = v9;
  if ( !voiceSilder )
LABEL_27:
    sub_1C71608(v3, method);
  UIProgressBar__set_value(voiceSilder, v9, 0);
  SetVolumeControl__muteSetting(this, v10);
  v11 = Method_SetVolumeControl_setDefaultVolume__;
  if ( (*((_BYTE *)Method_SetVolumeControl_setDefaultVolume__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C713C8(Method_SetVolumeControl_setDefaultVolume__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C71394(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
}