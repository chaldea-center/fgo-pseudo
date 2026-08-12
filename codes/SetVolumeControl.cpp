void SetVolumeControl___cctor(const MethodInfo *method)
{
  SetVolumeControl_c *v6; // x8

  if ( (byte_596B5F0 & 1) == 0 )
  {
    sub_2213A60(&SetVolumeControl_TypeInfo);
    byte_596B5F0 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = _Q0;
  v6 = SetVolumeControl_TypeInfo;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = (struct UnityEngine_Color_o)xmmword_E9D170;
  v6->static_fields->NORMAL_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_E9CDC0;
  v6->static_fields->DARK_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_E9C840;
}


void SetVolumeControl___ctor(SetVolumeControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0);
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

  if ( (byte_596B5EE & 1) == 0 )
  {
    sub_2213A60(&Method_SetVolumeControl_OnClickMuteButton__);
    byte_596B5EE = 1;
  }
  this->fields.muteFlag ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v3 = Method_SetVolumeControl_OnClickMuteButton__;
  if ( (*((_BYTE *)Method_SetVolumeControl_OnClickMuteButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SetVolumeControl_OnClickMuteButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v5; // x1
  __int64 v6; // x2
  float bgmValue; // s8

  if ( (byte_596B5E7 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5E7 = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_2213CDC(0, method);
  this->fields.bgmValue = UIProgressBar__get_value(bgmSilder, 0);
  SetVolumeControl__setChangeBgmText(this, v4);
  if ( !this->fields.muteFlag )
  {
    bgmValue = this->fields.bgmValue;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5, v6);
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
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s9
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_596B5E9 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SetVolumeControl_getChangeSeValue__);
    byte_596B5E9 = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder
    || (value = UIProgressBar__get_value(seSilder, 0), (seSilder = (UIProgressBar_o *)this->fields.seSilder) == 0) )
  {
    sub_2213CDC(seSilder, method);
  }
  seValue = this->fields.seValue;
  v6 = value;
  this->fields.seValue = UIProgressBar__get_value(seSilder, 0);
  SetVolumeControl__setChangeSeText(this, v7);
  if ( !this->fields.muteFlag )
  {
    v10 = this->fields.seValue;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
    OptionManager__TestSeVolume(v10, 0);
    if ( seValue != v6 )
    {
      v11 = Method_SetVolumeControl_getChangeSeValue__;
      if ( (*((_BYTE *)Method_SetVolumeControl_getChangeSeValue__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_2213A78(Method_SetVolumeControl_getChangeSeValue__);
      v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
      OverwriteAssetSoundName__PlayCommonSe(v12, 21, 0, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  float v10; // s9
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596B5EB & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_25318/*"testVoice"*/);
    byte_596B5EB = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder
    || (value = UIProgressBar__get_value(voiceSilder, 0),
        (voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder) == 0) )
  {
    sub_2213CDC(voiceSilder, method);
  }
  voiceValue = this->fields.voiceValue;
  v6 = value;
  this->fields.voiceValue = UIProgressBar__get_value(voiceSilder, 0);
  SetVolumeControl__setChangeVoiceText(this, v7);
  if ( !this->fields.muteFlag )
  {
    v10 = this->fields.voiceValue;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v8, v9);
    OptionManager__TestVoiceVolume(v10, 0);
    if ( voiceValue != v6 )
    {
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11, v12);
      SoundManager__playVoice((System_String_o *)StringLiteral_25318/*"testVoice"*/, 0, 0);
    }
  }
}


void SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *bgmTxt; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *seTxt; // x20
  UILabel_o *voiceTxt; // x20
  UILabel_o *muteBtnTxt; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  float VoiceVolume; // s0
  UIProgressBar_o *bgmSilder; // x20
  float BgmVolume; // s0
  UIProgressBar_o *seSilder; // x20
  float SeVolume; // s0
  UIProgressBar_o *voiceSilder; // x20
  float v20; // s0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_596B5E5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_10119/*"OPTION_VOLUME_MUTE_INFO"*/);
    sub_2213A60(&StringLiteral_10116/*"OPTION_VOICE"*/);
    sub_2213A60(&StringLiteral_10118/*"OPTION_VOLUME_MUTE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_10104/*"OPTION_SE"*/);
    sub_2213A60(&StringLiteral_10060/*"OPTION_BGM"*/);
    sub_2213A60(&StringLiteral_10117/*"OPTION_VOLUME_MUTE"*/);
    byte_596B5E5 = 1;
  }
  bgmTxt = this->fields.bgmTxt;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10060/*"OPTION_BGM"*/, 0);
  if ( !bgmTxt )
    goto LABEL_17;
  UILabel__set_text(bgmTxt, v5, 0);
  seTxt = this->fields.seTxt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10104/*"OPTION_SE"*/, 0);
  if ( !seTxt )
    goto LABEL_17;
  UILabel__set_text(seTxt, v5, 0);
  voiceTxt = this->fields.voiceTxt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10116/*"OPTION_VOICE"*/, 0);
  if ( !voiceTxt )
    goto LABEL_17;
  UILabel__set_text(voiceTxt, v5, 0);
  muteBtnTxt = this->fields.muteBtnTxt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10117/*"OPTION_VOLUME_MUTE"*/, 0);
  if ( !muteBtnTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnTxt, v5, 0);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10119/*"OPTION_VOLUME_MUTE_INFO"*/, 0);
  if ( !muteBtnInfoTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnInfoTxt, v5, 0);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10118/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0);
  if ( !muteMaskExpTxt )
    goto LABEL_17;
  UILabel__set_text(muteMaskExpTxt, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v12, v13);
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
        v20 = OptionManager__GetVoiceVolume(0),
        !voiceSilder) )
  {
LABEL_17:
    sub_2213CDC(v5, v6);
  }
  UIProgressBar__set_value(voiceSilder, v20, 0);
  SetVolumeControl__setChangeBgmText(this, v21);
  SetVolumeControl__setChangeSeText(this, v22);
  SetVolumeControl__setChangeVoiceText(this, v23);
  SetVolumeControl__muteSetting(this, v24);
}


void SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIButton_o *muteBtn; // x0
  __int64 v4; // x2
  UIWidget_o *bgmTxt; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  float voiceValue; // s8
  __int64 v9; // x2
  UIWidget_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  float bgmValue; // s8

  if ( (byte_596B5EF & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&SetVolumeControl_TypeInfo);
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596B5EF = 1;
  }
  muteBtn = this->fields.muteBtn;
  if ( this->fields.muteFlag )
  {
    if ( muteBtn )
    {
      UIButton__set_normalSprite(muteBtn, (System_String_o *)StringLiteral_18275/*"btn_on"*/, 0);
      muteBtn = (UIButton_o *)this->fields.muteMask;
      if ( muteBtn )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 1, 0);
        muteBtn = (UIButton_o *)SetVolumeControl_TypeInfo;
        bgmTxt = (UIWidget_o *)this->fields.bgmTxt;
        if ( !*(&SetVolumeControl_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo, method, v4);
        if ( bgmTxt )
        {
          UIWidget__set_color(bgmTxt, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0);
          muteBtn = (UIButton_o *)this->fields.seTxt;
          if ( muteBtn )
          {
            UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0);
            muteBtn = (UIButton_o *)this->fields.voiceTxt;
            if ( muteBtn )
            {
              UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0);
              muteBtn = (UIButton_o *)this->fields.bgmValueTxt;
              if ( muteBtn )
              {
                UIWidget__set_color(
                  (UIWidget_o *)muteBtn,
                  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                  0);
                muteBtn = (UIButton_o *)this->fields.seValueTxt;
                if ( muteBtn )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)muteBtn,
                    SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                    0);
                  muteBtn = (UIButton_o *)this->fields.voiceValueTxt;
                  if ( muteBtn )
                  {
                    UIWidget__set_color(
                      (UIWidget_o *)muteBtn,
                      SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                      0);
                    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6, v7);
                    voiceValue = 0.0;
                    OptionManager__TestBgmVolume(0.0, 0);
                    OptionManager__TestSeVolume(0.0, 0);
                    goto LABEL_30;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_2213CDC(muteBtn, method);
  }
  if ( !muteBtn )
    goto LABEL_31;
  UIButton__set_normalSprite(muteBtn, (System_String_o *)StringLiteral_18274/*"btn_off"*/, 0);
  muteBtn = (UIButton_o *)this->fields.muteMask;
  if ( !muteBtn )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 0, 0);
  muteBtn = (UIButton_o *)SetVolumeControl_TypeInfo;
  v10 = (UIWidget_o *)this->fields.bgmTxt;
  if ( !*(&SetVolumeControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo, method, v9);
  if ( !v10 )
    goto LABEL_31;
  UIWidget__set_color(v10, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0);
  muteBtn = (UIButton_o *)this->fields.seTxt;
  if ( !muteBtn )
    goto LABEL_31;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0);
  muteBtn = (UIButton_o *)this->fields.voiceTxt;
  if ( !muteBtn )
    goto LABEL_31;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0);
  muteBtn = (UIButton_o *)this->fields.bgmValueTxt;
  if ( !muteBtn )
    goto LABEL_31;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  muteBtn = (UIButton_o *)this->fields.seValueTxt;
  if ( !muteBtn )
    goto LABEL_31;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  muteBtn = (UIButton_o *)this->fields.voiceValueTxt;
  if ( !muteBtn )
    goto LABEL_31;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0);
  bgmValue = this->fields.bgmValue;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11, v12);
  OptionManager__TestBgmVolume(bgmValue, 0);
  OptionManager__TestSeVolume(this->fields.seValue, 0);
  voiceValue = this->fields.voiceValue;
LABEL_30:
  OptionManager__TestVoiceVolume(voiceValue, 0);
}


void SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 muteFlag; // w20

  if ( (byte_596B5E6 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5E6 = 1;
  }
  muteFlag = this->fields.muteFlag;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetVolumeMute(muteFlag, 0);
  OptionManager__SetBgmVolume(this->fields.bgmValue, 0);
  OptionManager__SetSeVolume(this->fields.seValue, 0);
  OptionManager__SetVoiceVolume(this->fields.voiceValue, 0);
}


void SetVolumeControl__setChangeBgmText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float bgmValue; // s9
  float v5; // s8
  unsigned int v6; // w9
  UILabel_o *bgmValueTxt; // x19
  unsigned int v8; // w8
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  bgmValue = this->fields.bgmValue;
  v11 = 0;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v5 = bgmValue * 10.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v6 = vcvtps_s32_f32(v5);
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( ceilf(v5) == INFINITY )
    v8 = 0x80000000;
  else
    v8 = v6;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  if ( !bgmValueTxt )
    sub_2213CDC(v9, v10);
  UILabel__set_text(bgmValueTxt, v9, 0);
}


void SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *bgmSilder; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_596B5E8 & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5E8 = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(bgmSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.bgmValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v4, v5);
    OptionManager__TestBgmVolume(v8, 0);
  }
}


void SetVolumeControl__setChangeSeText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float seValue; // s9
  float v5; // s8
  unsigned int v6; // w9
  UILabel_o *seValueTxt; // x19
  unsigned int v8; // w8
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  seValue = this->fields.seValue;
  v11 = 0;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v5 = seValue * 10.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v6 = vcvtps_s32_f32(v5);
  seValueTxt = this->fields.seValueTxt;
  if ( ceilf(v5) == INFINITY )
    v8 = 0x80000000;
  else
    v8 = v6;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  if ( !seValueTxt )
    sub_2213CDC(v9, v10);
  UILabel__set_text(seValueTxt, v9, 0);
}


void SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *seSilder; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_596B5EA & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5EA = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(seSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.seValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v4, v5);
    OptionManager__TestSeVolume(v8, 0);
  }
}


void SetVolumeControl__setChangeVoiceText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float voiceValue; // s9
  float v5; // s8
  unsigned int v6; // w9
  UILabel_o *voiceValueTxt; // x19
  unsigned int v8; // w8
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  voiceValue = this->fields.voiceValue;
  v11 = 0;
  if ( !byte_596A15B )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_596A15B = 1;
  }
  v5 = voiceValue * 10.0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method, v2);
  v6 = vcvtps_s32_f32(v5);
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( ceilf(v5) == INFINITY )
    v8 = 0x80000000;
  else
    v8 = v6;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  if ( !voiceValueTxt )
    sub_2213CDC(v9, v10);
  UILabel__set_text(voiceValueTxt, v9, 0);
}


void SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *voiceSilder; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_596B5EC & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B5EC = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder )
    sub_2213CDC(0, method);
  value = UIProgressBar__get_value(voiceSilder, 0);
  muteFlag = this->fields.muteFlag;
  this->fields.voiceValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v4, v5);
    OptionManager__TestVoiceVolume(v8, 0);
  }
}


void SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  OptionManager_c *v4; // x0
  UIProgressBar_o *bgmSilder; // x21
  int v6; // w9
  float DEF_VOL; // s0
  __int64 v8; // x2
  UIProgressBar_o *seSilder; // x21
  float v10; // s0
  __int64 v11; // x2
  UIProgressBar_o *voiceSilder; // x21
  float v13; // s0
  const MethodInfo *v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_596B5ED & 1) == 0 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_SetVolumeControl_setDefaultVolume__);
    byte_596B5ED = 1;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  if ( !byte_596B6DB )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B6DB = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
    v4 = OptionManager_TypeInfo;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  v6 = (unsigned __int8)byte_596B6DC;
  this->fields.muteFlag = v4->static_fields->DEF_MUTE;
  if ( !v6 )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
    byte_596B6DC = 1;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    v4 = OptionManager_TypeInfo;
  }
  DEF_VOL = v4->static_fields->DEF_VOL;
  this->fields.bgmValue = DEF_VOL;
  if ( !bgmSilder )
    goto LABEL_27;
  UIProgressBar__set_value(bgmSilder, DEF_VOL, 0);
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !byte_596B6DC )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B6DC = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v8);
    v4 = OptionManager_TypeInfo;
  }
  v10 = v4->static_fields->DEF_VOL;
  this->fields.seValue = v10;
  if ( !seSilder )
    goto LABEL_27;
  UIProgressBar__set_value(seSilder, v10, 0);
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !byte_596B6DC )
  {
    sub_2213A60(&OptionManager_TypeInfo);
    byte_596B6DC = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v11);
    v4 = OptionManager_TypeInfo;
  }
  v13 = v4->static_fields->DEF_VOL;
  this->fields.voiceValue = v13;
  if ( !voiceSilder )
LABEL_27:
    sub_2213CDC(v4, method);
  UIProgressBar__set_value(voiceSilder, v13, 0);
  SetVolumeControl__muteSetting(this, v14);
  v15 = Method_SetVolumeControl_setDefaultVolume__;
  if ( (*((_BYTE *)Method_SetVolumeControl_setDefaultVolume__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_SetVolumeControl_setDefaultVolume__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
}