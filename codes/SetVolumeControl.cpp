void __fastcall SetVolumeControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SetVolumeControl_c *v8; // x8

  if ( (byte_4B11677 & 1) == 0 )
  {
    sub_1BCA7E0(&SetVolumeControl_TypeInfo, v1, v2);
    byte_4B11677 = 1;
  }
  __asm { FMOV            V0.4S, #1.0 }
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = _Q0;
  v8 = SetVolumeControl_TypeInfo;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = (struct UnityEngine_Color_o)xmmword_BD2310;
  v8->static_fields->NORMAL_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_BD2F80;
  v8->static_fields->DARK_VALUE_COLOR = (struct UnityEngine_Color_o)xmmword_BD2F90;
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B11675 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetVolumeControl_OnClickMuteButton__, method, v2);
    byte_4B11675 = 1;
  }
  this->fields.muteFlag ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v4 = Method_SetVolumeControl_OnClickMuteButton__;
  if ( (*((_BYTE *)Method_SetVolumeControl_OnClickMuteButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SetVolumeControl_OnClickMuteButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, !this->fields.muteFlag, 0LL);
}


// attributes: thunk
void __fastcall SetVolumeControl__Reflection(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__reflectionVolume(this, method);
}


void __fastcall SetVolumeControl__getChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *bgmSilder; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  float bgmValue; // s8

  if ( (byte_4B1166E & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1166E = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1BCAA3C(0LL, method);
  this->fields.bgmValue = UIProgressBar__get_value(bgmSilder, 0LL);
  SetVolumeControl__setChangeBgmText(this, v5);
  if ( !this->fields.muteFlag )
  {
    bgmValue = this->fields.bgmValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v6);
    OptionManager__TestBgmVolume(bgmValue, 0LL);
  }
}


void __fastcall SetVolumeControl__getChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIProgressBar_o *seSilder; // x0
  float value; // s0
  float seValue; // s10
  float v9; // s8
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  float v12; // s9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4B11670 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SetVolumeControl_getChangeSeValue__, v4, v5);
    byte_4B11670 = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder
    || (value = UIProgressBar__get_value(seSilder, 0LL), (seSilder = (UIProgressBar_o *)this->fields.seSilder) == 0LL) )
  {
    sub_1BCAA3C(seSilder, method);
  }
  seValue = this->fields.seValue;
  v9 = value;
  this->fields.seValue = UIProgressBar__get_value(seSilder, 0LL);
  SetVolumeControl__setChangeSeText(this, v10);
  if ( !this->fields.muteFlag )
  {
    v12 = this->fields.seValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
    OptionManager__TestSeVolume(v12, 0LL);
    if ( seValue != v9 )
    {
      v13 = Method_SetVolumeControl_getChangeSeValue__;
      if ( (*((_BYTE *)Method_SetVolumeControl_getChangeSeValue__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_SetVolumeControl_getChangeSeValue__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
      OverwriteAssetSoundName__PlayCommonSe(v14, 21, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UIProgressBar_o *voiceSilder; // x0
  float value; // s0
  float voiceValue; // s10
  float v11; // s8
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  float v14; // s9
  __int64 v15; // x1

  if ( (byte_4B11672 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_24140/*"testVoice"*/, v6, v7);
    byte_4B11672 = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder
    || (value = UIProgressBar__get_value(voiceSilder, 0LL),
        (voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder) == 0LL) )
  {
    sub_1BCAA3C(voiceSilder, method);
  }
  voiceValue = this->fields.voiceValue;
  v11 = value;
  this->fields.voiceValue = UIProgressBar__get_value(voiceSilder, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v12);
  if ( !this->fields.muteFlag )
  {
    v14 = this->fields.voiceValue;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v13);
    OptionManager__TestVoiceVolume(v14, 0LL);
    if ( voiceValue != v11 )
    {
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
      SoundManager__playVoice((System_String_o *)StringLiteral_24140/*"testVoice"*/, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *bgmTxt; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  UILabel_o *seTxt; // x20
  UILabel_o *voiceTxt; // x20
  UILabel_o *muteBtnTxt; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  __int64 v26; // x1
  float VoiceVolume; // s0
  UIProgressBar_o *bgmSilder; // x20
  float BgmVolume; // s0
  UIProgressBar_o *seSilder; // x20
  float SeVolume; // s0
  UIProgressBar_o *voiceSilder; // x20
  float v33; // s0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_4B1166C & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9848/*"OPTION_VOLUME_MUTE_INFO"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9845/*"OPTION_VOICE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9847/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9833/*"OPTION_SE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9789/*"OPTION_BGM"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_9846/*"OPTION_VOLUME_MUTE"*/, v16, v17);
    byte_4B1166C = 1;
  }
  bgmTxt = this->fields.bgmTxt;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9789/*"OPTION_BGM"*/, 0LL);
  if ( !bgmTxt )
    goto LABEL_17;
  UILabel__set_text(bgmTxt, v19, 0LL);
  seTxt = this->fields.seTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9833/*"OPTION_SE"*/, 0LL);
  if ( !seTxt )
    goto LABEL_17;
  UILabel__set_text(seTxt, v19, 0LL);
  voiceTxt = this->fields.voiceTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9845/*"OPTION_VOICE"*/, 0LL);
  if ( !voiceTxt )
    goto LABEL_17;
  UILabel__set_text(voiceTxt, v19, 0LL);
  muteBtnTxt = this->fields.muteBtnTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9846/*"OPTION_VOLUME_MUTE"*/, 0LL);
  if ( !muteBtnTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnTxt, v19, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9848/*"OPTION_VOLUME_MUTE_INFO"*/, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_17;
  UILabel__set_text(muteBtnInfoTxt, v19, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9847/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_17;
  UILabel__set_text(muteMaskExpTxt, v19, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v26);
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
        v33 = OptionManager__GetVoiceVolume(0LL),
        !voiceSilder) )
  {
LABEL_17:
    sub_1BCAA3C(v19, v20);
  }
  UIProgressBar__set_value(voiceSilder, v33, 0LL);
  SetVolumeControl__setChangeBgmText(this, v34);
  SetVolumeControl__setChangeSeText(this, v35);
  SetVolumeControl__setChangeVoiceText(this, v36);
  SetVolumeControl__muteSetting(this, v37);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *muteBtn; // x0
  UIWidget_o *bgmTxt; // x20
  __int64 v12; // x1
  float voiceValue; // s8
  UIWidget_o *v14; // x20
  __int64 v15; // x1
  float bgmValue; // s8

  if ( (byte_4B11676 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SetVolumeControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v8, v9);
    byte_4B11676 = 1;
  }
  muteBtn = this->fields.muteBtn;
  if ( !muteBtn )
    goto LABEL_30;
  if ( this->fields.muteFlag )
  {
    UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17703/*"btn_on"*/, 0LL);
    muteBtn = this->fields.muteMask;
    if ( muteBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 1, 0LL);
      muteBtn = SetVolumeControl_TypeInfo;
      bgmTxt = (UIWidget_o *)this->fields.bgmTxt;
      if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo, method);
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
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v12);
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
    sub_1BCAA3C(muteBtn, method);
  }
  UIButton__set_normalSprite((UIButton_o *)muteBtn, (System_String_o *)StringLiteral_17702/*"btn_off"*/, 0LL);
  muteBtn = this->fields.muteMask;
  if ( !muteBtn )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteBtn, 0, 0LL);
  muteBtn = SetVolumeControl_TypeInfo;
  v14 = (UIWidget_o *)this->fields.bgmTxt;
  if ( !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo, method);
    muteBtn = SetVolumeControl_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_30;
  UIWidget__set_color(v14, *(UnityEngine_Color_o *)*((_QWORD *)muteBtn + 23), 0LL);
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
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v15);
  OptionManager__TestBgmVolume(bgmValue, 0LL);
  OptionManager__TestSeVolume(this->fields.seValue, 0LL);
  voiceValue = this->fields.voiceValue;
LABEL_29:
  OptionManager__TestVoiceVolume(voiceValue, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 muteFlag; // w20

  if ( (byte_4B1166D & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1166D = 1;
  }
  muteFlag = this->fields.muteFlag;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetVolumeMute(muteFlag, 0LL);
  OptionManager__SetBgmVolume(this->fields.bgmValue, 0LL);
  OptionManager__SetSeVolume(this->fields.seValue, 0LL);
  OptionManager__SetVoiceVolume(this->fields.voiceValue, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float bgmValue; // s8
  float v5; // s8
  unsigned int v6; // w9
  unsigned int v7; // w8
  UILabel_o *bgmValueTxt; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  bgmValue = this->fields.bgmValue;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  v5 = bgmValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    v7 = 0x80000000;
  else
    v7 = v6;
  v11 = v7;
  bgmValueTxt = this->fields.bgmValueTxt;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !bgmValueTxt )
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(bgmValueTxt, v9, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *bgmSilder; // x0
  __int64 v5; // x1
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_4B1166F & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1166F = 1;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  if ( !bgmSilder )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(bgmSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.bgmValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
    OptionManager__TestBgmVolume(v8, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeSeText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float seValue; // s8
  float v5; // s8
  unsigned int v6; // w9
  unsigned int v7; // w8
  UILabel_o *seValueTxt; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  seValue = this->fields.seValue;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  v5 = seValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    v7 = 0x80000000;
  else
    v7 = v6;
  v11 = v7;
  seValueTxt = this->fields.seValueTxt;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !seValueTxt )
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(seValueTxt, v9, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *seSilder; // x0
  __int64 v5; // x1
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_4B11671 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11671 = 1;
  }
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !seSilder )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(seSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.seValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
    OptionManager__TestSeVolume(v8, 0LL);
  }
}


void __fastcall SetVolumeControl__setChangeVoiceText(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float voiceValue; // s8
  float v5; // s8
  unsigned int v6; // w9
  unsigned int v7; // w8
  UILabel_o *voiceValueTxt; // x19
  System_String_o *v9; // x0
  __int64 v10; // x1
  unsigned int v11; // [xsp+1Ch] [xbp-14h] BYREF

  voiceValue = this->fields.voiceValue;
  if ( !byte_4B1103A )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, method, v2);
    byte_4B1103A = 1;
  }
  v5 = voiceValue * 10.0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v6 = vcvtps_s32_f32(v5);
  if ( ceilf(v5) == INFINITY )
    v7 = 0x80000000;
  else
    v7 = v6;
  v11 = v7;
  voiceValueTxt = this->fields.voiceValueTxt;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  if ( !voiceValueTxt )
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(voiceValueTxt, v9, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIProgressBar_o *voiceSilder; // x0
  __int64 v5; // x1
  float value; // s0
  _BOOL4 muteFlag; // w8
  float v8; // s8

  if ( (byte_4B11673 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11673 = 1;
  }
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !voiceSilder )
    sub_1BCAA3C(0LL, method);
  value = UIProgressBar__get_value(voiceSilder, 0LL);
  muteFlag = this->fields.muteFlag;
  this->fields.voiceValue = value;
  if ( !muteFlag )
  {
    v8 = value;
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5);
    OptionManager__TestVoiceVolume(v8, 0LL);
  }
}


void __fastcall SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  OptionManager_c *v6; // x0
  UIProgressBar_o *bgmSilder; // x21
  float DEF_VOL; // s0
  __int64 v9; // x2
  UIProgressBar_o *seSilder; // x21
  float v11; // s0
  __int64 v12; // x2
  UIProgressBar_o *voiceSilder; // x21
  float v14; // s0
  const MethodInfo *v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0

  if ( (byte_4B11674 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SetVolumeControl_setDefaultVolume__, v4, v5);
    byte_4B11674 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  if ( !byte_4B1175B )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1175B = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    v6 = OptionManager_TypeInfo;
  }
  bgmSilder = (UIProgressBar_o *)this->fields.bgmSilder;
  this->fields.muteFlag = v6->static_fields->DEF_MUTE;
  if ( !byte_4B1175C )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    v6 = OptionManager_TypeInfo;
    byte_4B1175C = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6, method);
    v6 = OptionManager_TypeInfo;
  }
  DEF_VOL = v6->static_fields->DEF_VOL;
  this->fields.bgmValue = DEF_VOL;
  if ( !bgmSilder )
    goto LABEL_27;
  UIProgressBar__set_value(bgmSilder, DEF_VOL, 0LL);
  seSilder = (UIProgressBar_o *)this->fields.seSilder;
  if ( !byte_4B1175C )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v9);
    byte_4B1175C = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    v6 = OptionManager_TypeInfo;
  }
  v11 = v6->static_fields->DEF_VOL;
  this->fields.seValue = v11;
  if ( !seSilder )
    goto LABEL_27;
  UIProgressBar__set_value(seSilder, v11, 0LL);
  voiceSilder = (UIProgressBar_o *)this->fields.voiceSilder;
  if ( !byte_4B1175C )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v12);
    byte_4B1175C = 1;
  }
  v6 = OptionManager_TypeInfo;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    v6 = OptionManager_TypeInfo;
  }
  v14 = v6->static_fields->DEF_VOL;
  this->fields.voiceValue = v14;
  if ( !voiceSilder )
LABEL_27:
    sub_1BCAA3C(v6, method);
  UIProgressBar__set_value(voiceSilder, v14, 0LL);
  SetVolumeControl__muteSetting(this, v15);
  v16 = Method_SetVolumeControl_setDefaultVolume__;
  if ( (*((_BYTE *)Method_SetVolumeControl_setDefaultVolume__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8(Method_SetVolumeControl_setDefaultVolume__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
}