void __fastcall SetVolumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SetVolumeControl_c *v7; // x8

  if ( (byte_49F7A95 & 1) == 0 )
  {
    sub_1B640C8(&SetVolumeControl_TypeInfo, v1);
    byte_49F7A95 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = _Q0;
  v7 = SetVolumeControl_TypeInfo;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = (struct UnityEngine_Color_o)xmmword_BA2910;
  v7->static_fields->NORMAL_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_BA35D0;
  v7->static_fields->DARK_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_BA35E0;
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_49F7A93 & 1) == 0 )
  {
    sub_1B640C8(&Method_SetVolumeControl_OnClickMuteButton__, method);
    byte_49F7A93 = 1;
  }
  this->fields.muteFlag ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v3 = Method_SetVolumeControl_OnClickMuteButton__;
  if ( (*((_BYTE *)Method_SetVolumeControl_OnClickMuteButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0(Method_SetVolumeControl_OnClickMuteButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, !this->fields.muteFlag, 0LL);
}


// attributes: thunk
void __fastcall SetVolumeControl__Reflection(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__reflectionVolume(this, method);
}


void __fastcall SetVolumeControl__getChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *bgmSilder; // x0
  const MethodInfo *v4; // x1
  float bgmValue; // s8

  if ( (byte_49F7A8C & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A8C = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1B64324(0LL);
  this->fields.bgmValue = UIProgressBar__get_value(bgmSilder, 0LL);
  SetVolumeControl__setChangeBgmText(this, v4);
  if ( !this->fields.muteFlag )
  {
    bgmValue = this->fields.bgmValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestBgmVolume(bgmValue, 0LL);
  }
}


void __fastcall SetVolumeControl__getChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIProgressBar_o *seSilder; // x0
  float value; // s0
  float seValue; // s10
  float v7; // s8
  const MethodInfo *v8; // x1
  float v9; // s9
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_49F7A8E & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&Method_SetVolumeControl_getChangeSeValue__, v3);
    byte_49F7A8E = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder
    || (value = UIProgressBar__get_value(seSilder, 0LL), (seSilder = (UIProgressBar_o *)this->fields.seSilder) == 0LL) )
  {
    sub_1B64324(seSilder);
  }
  seValue = this->fields.seValue;
  v7 = value;
  this->fields.seValue = UIProgressBar__get_value(seSilder, 0LL);
  SetVolumeControl__setChangeSeText(this, v8);
  if ( !this->fields.muteFlag )
  {
    v9 = this->fields.seValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestSeVolume(v9, 0LL);
    if ( seValue != v7 )
    {
      v10 = Method_SetVolumeControl_getChangeSeValue__;
      if ( (*((_BYTE *)Method_SetVolumeControl_getChangeSeValue__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B640E0(Method_SetVolumeControl_getChangeSeValue__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
      OverwriteAssetSoundName__PlayCommonSe(v11, 21, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UIProgressBar_o *voiceSilder; // x0
  float value; // s0
  float voiceValue; // s10
  float v8; // s8
  const MethodInfo *v9; // x1
  float v10; // s9

  if ( (byte_49F7A90 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_23792/*"testVoice"*/, v4);
    byte_49F7A90 = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder
    || (value = UIProgressBar__get_value(voiceSilder, 0LL),
        (voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder) == 0LL) )
  {
    sub_1B64324(voiceSilder);
  }
  voiceValue = this->fields.voiceValue;
  v8 = value;
  this->fields.voiceValue = UIProgressBar__get_value(voiceSilder, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v9);
  if ( !this->fields.muteFlag )
  {
    v10 = this->fields.voiceValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestVoiceVolume(v10, 0LL);
    if ( voiceValue != v8 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playVoice((System_String_o *)StringLiteral_23792/*"testVoice"*/, 0LL);
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
  UILabel_o *bgmTxt; // x20
  System_String_o *v11; // x0
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
  float v23; // s0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  if ( (byte_49F7A8A & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_9670/*"OPTION_VOLUME_MUTE_INFO"*/, v4);
    sub_1B640C8(&StringLiteral_9667/*"OPTION_VOICE"*/, v5);
    sub_1B640C8(&StringLiteral_9669/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, v6);
    sub_1B640C8(&StringLiteral_9655/*"OPTION_SE"*/, v7);
    sub_1B640C8(&StringLiteral_9611/*"OPTION_BGM"*/, v8);
    sub_1B640C8(&StringLiteral_9668/*"OPTION_VOLUME_MUTE"*/, v9);
    byte_49F7A8A = 1;
  }
  bgmTxt = this->fields.bgmTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9611/*"OPTION_BGM"*/, 0LL);
  if ( !bgmTxt )
    goto LABEL_17;
  UILabel__set_text(bgmTxt, v11, 0LL);
  seTxt = this->fields.seTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9655/*"OPTION_SE"*/, 0LL);
  if ( !seTxt )
    goto LABEL_17;
  UILabel__set_text(seTxt, v11, 0LL);
  voiceTxt = this->fields.voiceTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9667/*"OPTION_VOICE"*/, 0LL);
  if ( !voiceTxt )
    goto LABEL_17;
  UILabel__set_text(voiceTxt, v11, 0LL);
  muteBtnTxt = this->fields.muteBtnTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9668/*"OPTION_VOLUME_MUTE"*/, 0LL);
  if ( !muteBtnTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnTxt, v11, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9670/*"OPTION_VOLUME_MUTE_INFO"*/, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnInfoTxt, v11, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9669/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_17;
  UILabel__set_text(muteMaskExpTxt, v11, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.muteFlag = OptionManager__GetVolumeMute(0LL);
  this->fields.bgmValue = OptionManager__GetBgmVolume(0LL);
  this->fields.seValue = OptionManager__GetSeVolume(0LL);
  VoiceVolume = OptionManager__GetVoiceVolume(0LL);
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  this->fields.voiceValue = VoiceVolume;
  BgmVolume = OptionManager__GetBgmVolume(0LL);
  if ( !bgmSilder
    || (UIProgressBar__set_value(bgmSilder, BgmVolume, 0LL),
        seSilder = (UIProgressBar_o *)this->fields.seSilder,
        SeVolume = OptionManager__GetSeVolume(0LL),
        !seSilder)
    || (UIProgressBar__set_value(seSilder, SeVolume, 0LL),
        voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder,
        v23 = OptionManager__GetVoiceVolume(0LL),
        !voiceSilder) )
  {
LABEL_17:
    sub_1B64324(v11);
  }
  UIProgressBar__set_value(voiceSilder, v23, 0LL);
  SetVolumeControl__setChangeBgmText(this, v24);
  SetVolumeControl__setChangeSeText(this, v25);
  SetVolumeControl__setChangeVoiceText(this, v26);
  SetVolumeControl__muteSetting(this, v27);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *muteBtn; // x0
  UIWidget_o *bgmTxt; // x20
  float voiceValue; // s8
  UIWidget_o *v9; // x20
  float bgmValue; // s8

  if ( (byte_49F7A94 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&SetVolumeControl_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v4);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v5);
    byte_49F7A94 = 1;
  }
  muteBtn = this->fields.muteBtn;
  if ( !muteBtn )
    goto LABEL_30;
  if ( this->fields.muteFlag )
  {
    UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17456/*"btn_on"*/, 0LL);
    muteBtn = this->fields.muteMask;
    if ( muteBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 1, 0LL);
      muteBtn = SetVolumeControl_TypeInfo;
      bgmTxt = (UIWidget_o *)this->fields.bgmTxt;
      if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
        muteBtn = SetVolumeControl_TypeInfo;
      }
      if ( bgmTxt )
      {
        UIWidget__set_color(bgmTxt, *(UnityEngine_Color_o *)(*((_QWORD *)muteBtn + 23) + 16LL), 0LL);
        muteBtn = this->fields.seTxt;
        if ( muteBtn )
        {
          UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
          muteBtn = this->fields.voiceTxt;
          if ( muteBtn )
          {
            UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
            muteBtn = this->fields.bgmValueTxt;
            if ( muteBtn )
            {
              UIWidget__set_color(
                (UIWidget_o *)muteBtn,
                SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                0LL);
              muteBtn = this->fields.seValueTxt;
              if ( muteBtn )
              {
                UIWidget__set_color(
                  (UIWidget_o *)muteBtn,
                  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                  0LL);
                muteBtn = this->fields.voiceValueTxt;
                if ( muteBtn )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)muteBtn,
                    SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR,
                    0LL);
                  if ( !OptionManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  voiceValue = 0.0;
                  OptionManager__TestBgmVolume(0.0, 0LL);
                  OptionManager__TestSeVolume(0.0, 0LL);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(muteBtn);
  }
  UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17455/*"btn_off"*/, 0LL);
  muteBtn = this->fields.muteMask;
  if ( !muteBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 0, 0LL);
  muteBtn = SetVolumeControl_TypeInfo;
  v9 = (UIWidget_o *)this->fields.bgmTxt;
  if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    muteBtn = SetVolumeControl_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_30;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)*((_QWORD *)muteBtn + 23), 0LL);
  muteBtn = this->fields.seTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  muteBtn = this->fields.voiceTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  muteBtn = this->fields.bgmValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  muteBtn = this->fields.seValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  muteBtn = this->fields.voiceValueTxt;
  if ( !muteBtn )
    goto LABEL_30;
  UIWidget__set_color((UIWidget_o *)muteBtn, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  bgmValue = this->fields.bgmValue;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__TestBgmVolume(bgmValue, 0LL);
  OptionManager__TestSeVolume(this->fields.seValue, 0LL);
  voiceValue = this->fields.voiceValue;
LABEL_29:
  OptionManager__TestVoiceVolume(voiceValue, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  _BOOL4 muteFlag; // w20

  if ( (byte_49F7A8B & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A8B = 1;
  }
  muteFlag = this->fields.muteFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetVolumeMute(muteFlag, 0LL);
  OptionManager__SetBgmVolume(this->fields.bgmValue, 0LL);
  OptionManager__SetSeVolume(this->fields.seValue, 0LL);
  OptionManager__SetVoiceVolume(this->fields.voiceValue, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float bgmValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *bgmValueTxt; // x19
  System_String_o *v8; // x0
  unsigned int v9; // [xsp+1Ch] [xbp-14h] BYREF

  bgmValue = this->fields.bgmValue;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F779D = 1;
  }
  v4 = bgmValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v9 = v6;
  bgmValueTxt = this->fields.bgmValueTxt;
  v8 = System_Int32__ToString((int32_t)&v9, 0LL);
  if ( !bgmValueTxt )
    sub_1B64324(v8);
  UILabel__set_text(bgmValueTxt, v8, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *bgmSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_49F7A8D & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A8D = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1B64324(0LL);
  value = UIProgressBar__get_value(bgmSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.bgmValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestBgmVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeSeText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float seValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *seValueTxt; // x19
  System_String_o *v8; // x0
  unsigned int v9; // [xsp+1Ch] [xbp-14h] BYREF

  seValue = this->fields.seValue;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F779D = 1;
  }
  v4 = seValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v9 = v6;
  seValueTxt = this->fields.seValueTxt;
  v8 = System_Int32__ToString((int32_t)&v9, 0LL);
  if ( !seValueTxt )
    sub_1B64324(v8);
  UILabel__set_text(seValueTxt, v8, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *seSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_49F7A8F & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A8F = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder )
    sub_1B64324(0LL);
  value = UIProgressBar__get_value(seSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.seValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestSeVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeVoiceText(SetVolumeControl_o *this, const MethodInfo *method)
{
  float voiceValue; // s8
  float v4; // s8
  unsigned int v5; // w9
  unsigned int v6; // w8
  UILabel_o *voiceValueTxt; // x19
  System_String_o *v8; // x0
  unsigned int v9; // [xsp+1Ch] [xbp-14h] BYREF

  voiceValue = this->fields.voiceValue;
  if ( !byte_49F779D )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49F779D = 1;
  }
  v4 = voiceValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = vcvtps_s32_f32(v4);
  if ( ceilf(v4) == INFINITY )
    v6 = 0x80000000;
  else
    v6 = v5;
  v9 = v6;
  voiceValueTxt = this->fields.voiceValueTxt;
  v8 = System_Int32__ToString((int32_t)&v9, 0LL);
  if ( !voiceValueTxt )
    sub_1B64324(v8);
  UILabel__set_text(voiceValueTxt, v8, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *voiceSilder; // x0
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v6; // s8

  if ( (byte_49F7A91 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A91 = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder )
    sub_1B64324(0LL);
  value = UIProgressBar__get_value(voiceSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.voiceValue = value;
  if ( !muteFlag )
  {
    v6 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    OptionManager__TestVoiceVolume(v6, 0LL);
  }
}


void __fastcall SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  OptionManager_c *v4; // x0
  UIProgressBar_o *bgmSilder; // x21
  float DEF_VOL; // s0
  __int64 v7; // x1
  UIProgressBar_o *seSilder; // x21
  float v9; // s0
  __int64 v10; // x1
  UIProgressBar_o *voiceSilder; // x21
  float v12; // s0
  const MethodInfo *v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_49F7A92 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    sub_1B640C8(&Method_SetVolumeControl_setDefaultVolume__, v3);
    byte_49F7A92 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !byte_49F7B79 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7B79 = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  this->fields.muteFlag = v4->static_fields->DEF_MUTE;
  if ( !byte_49F7B7A )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    v4 = OptionManager_TypeInfo;
    byte_49F7B7A = 1;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OptionManager_TypeInfo;
  }
  DEF_VOL = v4->static_fields->DEF_VOL;
  this->fields.bgmValue = DEF_VOL;
  if ( !bgmSilder )
    goto LABEL_27;
  UIProgressBar__set_value(bgmSilder, DEF_VOL, 0LL);
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !byte_49F7B7A )
  {
    sub_1B640C8(&OptionManager_TypeInfo, v7);
    byte_49F7B7A = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  v9 = v4->static_fields->DEF_VOL;
  this->fields.seValue = v9;
  if ( !seSilder )
    goto LABEL_27;
  UIProgressBar__set_value(seSilder, v9, 0LL);
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !byte_49F7B7A )
  {
    sub_1B640C8(&OptionManager_TypeInfo, v10);
    byte_49F7B7A = 1;
  }
  v4 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v4 = OptionManager_TypeInfo;
  }
  v12 = v4->static_fields->DEF_VOL;
  this->fields.voiceValue = v12;
  if ( !voiceSilder )
LABEL_27:
    sub_1B64324(v4);
  UIProgressBar__set_value(voiceSilder, v12, 0LL);
  SetVolumeControl__muteSetting(this, v13);
  v14 = Method_SetVolumeControl_setDefaultVolume__;
  if ( (*((_BYTE *)Method_SetVolumeControl_setDefaultVolume__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B640E0(Method_SetVolumeControl_setDefaultVolume__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
}