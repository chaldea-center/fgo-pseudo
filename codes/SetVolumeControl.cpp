void __fastcall SetVolumeControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  struct UnityEngine_Color_o v20; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECF26 & 1) == 0 )
  {
    sub_B5D5C4(&SetVolumeControl_TypeInfo, v1, v2, v3);
    byte_42ECF26 = 1;
  }
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor(v22, v4, v5, v6, v7, (const MethodInfo *)&methoda.return_type);
  v23.fields.g = 0.5;
  v23.fields.b = 0.5;
  v23.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v23.fields.r = 0.5;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor(v23, v8, v9, v10, v11, (const MethodInfo *)&methoda.name);
  v24.fields.g = 1.0;
  v24.fields.b = 1.0;
  v24.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.name;
  v24.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor(v24, v12, v13, v14, v15, &methoda);
  v25.fields.g = 0.5;
  v25.fields.b = 0.5;
  v25.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v25.fields.r = 0.0;
  v20 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v25, v16, v17, v18, v19, (const MethodInfo *)&v20);
  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR = v20;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w19

  if ( (byte_42ECF24 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF24 = 1;
  }
  BYTE4(this[1].klass) ^= 1u;
  SetVolumeControl__muteSetting(this, method);
  v5 = BYTE4(this[1].klass) ^ 1;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(v5, 0LL);
}


// attributes: thunk
void __fastcall SetVolumeControl__Reflection(SetVolumeControl_o *this, const MethodInfo *method)
{
  SetVolumeControl__reflectionVolume(this, method);
}


void __fastcall SetVolumeControl__getChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *bgmValueTxt; // x0
  const MethodInfo *v6; // x1
  float voiceValue; // s8

  if ( (byte_42ECF1D & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF1D = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B5D69C(0LL, method);
  this->fields.voiceValue = UIProgressBar__get_value((UIProgressBar_o *)bgmValueTxt, 0LL);
  SetVolumeControl__setChangeBgmText(this, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  float v10; // s10
  float v11; // s8
  const MethodInfo *v12; // x1
  float v13; // s9

  if ( (byte_42ECF1F & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SeManager_TypeInfo, v5, v6, v7);
    byte_42ECF1F = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL),
        (seValueTxt = this->fields.seValueTxt) == 0LL) )
  {
    sub_B5D69C(seValueTxt, method);
  }
  v10 = *(float *)&this->fields.muteFlag;
  v11 = value;
  *(float *)&this->fields.muteFlag = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL);
  SetVolumeControl__setChangeSeText(this, v12);
  if ( !BYTE4(this[1].klass) )
  {
    v13 = *(float *)&this->fields.muteFlag;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v13, 0LL);
    if ( v10 != v11 )
    {
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(21, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  float v13; // s10
  float v14; // s8
  const MethodInfo *v15; // x1
  float v16; // s9

  if ( (byte_42ECF21 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22950/*"testVoice"*/, v8, v9, v10);
    byte_42ECF21 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL),
        (voiceValueTxt = this->fields.voiceValueTxt) == 0LL) )
  {
    sub_B5D69C(voiceValueTxt, method);
  }
  v13 = *(float *)&this[1].klass;
  v14 = value;
  *(float *)&this[1].klass = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v15);
  if ( !BYTE4(this[1].klass) )
  {
    v16 = *(float *)&this[1].klass;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v16, 0LL);
    if ( v13 != v14 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice((System_String_o *)StringLiteral_22950/*"testVoice"*/, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UILabel_o *bgmSilder; // x20
  System_String_o *v27; // x0
  __int64 v28; // x1
  UILabel_o *seSilder; // x20
  UILabel_o *voiceSilder; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  UILabel_o *v33; // x20
  float VoiceVolume; // s0
  struct UILabel_o *bgmValueTxt; // x20
  float BgmVolume; // s0
  struct UILabel_o *seValueTxt; // x20
  float SeVolume; // s0
  struct UILabel_o *voiceValueTxt; // x20
  float v40; // s0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1

  if ( (byte_42ECF1B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9930/*"OPTION_VOLUME_MUTE_INFO"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9927/*"OPTION_VOICE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9929/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9915/*"OPTION_SE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_9879/*"OPTION_BGM"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_9928/*"OPTION_VOLUME_MUTE"*/, v23, v24, v25);
    byte_42ECF1B = 1;
  }
  bgmSilder = (UILabel_o *)this->fields.bgmSilder;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9879/*"OPTION_BGM"*/, 0LL);
  if ( !bgmSilder )
    goto LABEL_19;
  UILabel__set_text(bgmSilder, v27, 0LL);
  seSilder = (UILabel_o *)this->fields.seSilder;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9915/*"OPTION_SE"*/, 0LL);
  if ( !seSilder )
    goto LABEL_19;
  UILabel__set_text(seSilder, v27, 0LL);
  voiceSilder = (UILabel_o *)this->fields.voiceSilder;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9927/*"OPTION_VOICE"*/, 0LL);
  if ( !voiceSilder )
    goto LABEL_19;
  UILabel__set_text(voiceSilder, v27, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9928/*"OPTION_VOLUME_MUTE"*/, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_19;
  UILabel__set_text(muteBtnInfoTxt, v27, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9930/*"OPTION_VOLUME_MUTE_INFO"*/, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_19;
  UILabel__set_text(muteMaskExpTxt, v27, 0LL);
  v33 = *(UILabel_o **)&this->fields.bgmValue;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9929/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0LL);
  if ( !v33 )
    goto LABEL_19;
  UILabel__set_text(v33, v27, 0LL);
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
        v40 = OptionManager__GetVoiceVolume(0LL),
        !voiceValueTxt) )
  {
LABEL_19:
    sub_B5D69C(v27, v28);
  }
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v40, 0LL);
  SetVolumeControl__setChangeBgmText(this, v41);
  SetVolumeControl__setChangeSeText(this, v42);
  SetVolumeControl__setChangeVoiceText(this, v43);
  SetVolumeControl__muteSetting(this, v44);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
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
  void *muteMask; // x0
  UIWidget_o *bgmSilder; // x20
  float v16; // s0
  UIWidget_o *v17; // x20
  float voiceValue; // s8

  if ( (byte_42ECF25 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SetVolumeControl_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v11, v12, v13);
    byte_42ECF25 = 1;
  }
  muteMask = this->fields.muteMask;
  if ( !muteMask )
    goto LABEL_34;
  if ( BYTE4(this[1].klass) )
  {
    UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17215/*"btn_on"*/, 0LL);
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
                  v16 = 0.0;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B5D69C(muteMask, method);
  }
  UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17214/*"btn_off"*/, 0LL);
  muteMask = this->fields.muteBtnTxt;
  if ( !muteMask )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteMask, 0, 0LL);
  v17 = (UIWidget_o *)this->fields.bgmSilder;
  muteMask = SetVolumeControl_TypeInfo;
  if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    muteMask = SetVolumeControl_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_34;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)*((_QWORD *)muteMask + 23), 0LL);
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
  v16 = *(float *)&this[1].klass;
LABEL_33:
  OptionManager__TestVoiceVolume(v16, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w20

  if ( (byte_42ECF1C & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF1C = 1;
  }
  v5 = BYTE4(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetVolumeMute(v5 != 0, 0LL);
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
    sub_B5D69C(v4, v5);
  UILabel__set_text(seTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *bgmValueTxt; // x0
  float value; // s0
  int v7; // w8
  float v8; // s8

  if ( (byte_42ECF1E & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF1E = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)bgmValueTxt, 0LL);
  v7 = BYTE4(this[1].klass);
  this->fields.voiceValue = value;
  if ( !v7 )
  {
    v8 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestBgmVolume(v8, 0LL);
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
    sub_B5D69C(v4, v5);
  UILabel__set_text(voiceTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  int v7; // w8
  float v8; // s8

  if ( (byte_42ECF20 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF20 = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL);
  v7 = BYTE4(this[1].klass);
  *(float *)&this->fields.muteFlag = value;
  if ( !v7 )
  {
    v8 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v8, 0LL);
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
    sub_B5D69C(v4, v5);
  UILabel__set_text(muteBtn, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  int v7; // w8
  float v8; // s8

  if ( (byte_42ECF22 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF22 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt )
    sub_B5D69C(0LL, method);
  value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL);
  v7 = BYTE4(this[1].klass);
  *(float *)&this[1].klass = value;
  if ( !v7 )
  {
    v8 = value;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v8, 0LL);
  }
}


void __fastcall SetVolumeControl__setDefaultVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  OptionManager_c *v8; // x0
  struct UILabel_o *bgmValueTxt; // x21
  float DEF_VOL; // s0
  int v11; // w2
  __int64 v12; // x3
  struct UILabel_o *seValueTxt; // x21
  float v14; // s0
  int v15; // w2
  __int64 v16; // x3
  struct UILabel_o *voiceValueTxt; // x21
  float v18; // s0
  const MethodInfo *v19; // x1

  if ( (byte_42ECF23 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42ECF23 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_42ECF9A )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECF9A = 1;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  BYTE4(this[1].klass) = v8->static_fields->DEF_MUTE;
  if ( !byte_42ECF9B )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    v8 = OptionManager_TypeInfo;
    byte_42ECF9B = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = OptionManager_TypeInfo;
  }
  DEF_VOL = v8->static_fields->DEF_VOL;
  this->fields.voiceValue = DEF_VOL;
  if ( !bgmValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)bgmValueTxt, DEF_VOL, 0LL);
  seValueTxt = this->fields.seValueTxt;
  if ( !byte_42ECF9B )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v11, v12);
    byte_42ECF9B = 1;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  v14 = v8->static_fields->DEF_VOL;
  *(float *)&this->fields.muteFlag = v14;
  if ( !seValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)seValueTxt, v14, 0LL);
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !byte_42ECF9B )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v15, v16);
    byte_42ECF9B = 1;
  }
  v8 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v8 = OptionManager_TypeInfo;
  }
  v18 = v8->static_fields->DEF_VOL;
  *(float *)&this[1].klass = v18;
  if ( !voiceValueTxt )
LABEL_33:
    sub_B5D69C(v8, method);
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v18, 0LL);
  SetVolumeControl__muteSetting(this, v19);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}