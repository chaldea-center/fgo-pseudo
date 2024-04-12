void __fastcall SetVolumeControl___cctor(const MethodInfo *method)
{
  float v1; // s4
  float v2; // s5
  float v3; // s6
  float v4; // s7
  float v5; // s4
  float v6; // s5
  float v7; // s6
  float v8; // s7
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s7
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  struct UnityEngine_Color_o v17; // [xsp+0h] [xbp-60h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B459D & 1) == 0 )
  {
    sub_B52984(&SetVolumeControl_TypeInfo);
    byte_42B459D = 1;
  }
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor(v19, v1, v2, v3, v4, (const MethodInfo *)&methoda.return_type);
  v20.fields.g = 0.5;
  v20.fields.b = 0.5;
  v20.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v20.fields.r = 0.5;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor(v20, v5, v6, v7, v8, (const MethodInfo *)&methoda.name);
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR = *(struct UnityEngine_Color_o *)&methoda.name;
  v21.fields.r = 0.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor(v21, v9, v10, v11, v12, &methoda);
  v22.fields.g = 0.5;
  v22.fields.b = 0.5;
  v22.fields.a = 1.0;
  SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v22.fields.r = 0.0;
  v17 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v22, v13, v14, v15, v16, (const MethodInfo *)&v17);
  SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR = v17;
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

  if ( (byte_42B459B & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B459B = 1;
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

  if ( (byte_42B4594 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4594 = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B52A5C(0LL, method);
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
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  float v5; // s10
  float v6; // s8
  const MethodInfo *v7; // x1
  float v8; // s9

  if ( (byte_42B4596 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&SeManager_TypeInfo);
    byte_42B4596 = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL),
        (seValueTxt = this->fields.seValueTxt) == 0LL) )
  {
    sub_B52A5C(seValueTxt, method);
  }
  v5 = *(float *)&this->fields.muteFlag;
  v6 = value;
  *(float *)&this->fields.muteFlag = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL);
  SetVolumeControl__setChangeSeText(this, v7);
  if ( !BYTE4(this[1].klass) )
  {
    v8 = *(float *)&this->fields.muteFlag;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v8, 0LL);
    if ( v5 != v6 )
    {
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      SeManager__PlayCommonSe(21, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__getChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  float v5; // s10
  float v6; // s8
  const MethodInfo *v7; // x1
  float v8; // s9

  if ( (byte_42B4598 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_22835/*"testVoice"*/);
    byte_42B4598 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL),
        (voiceValueTxt = this->fields.voiceValueTxt) == 0LL) )
  {
    sub_B52A5C(voiceValueTxt, method);
  }
  v5 = *(float *)&this[1].klass;
  v6 = value;
  *(float *)&this[1].klass = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v7);
  if ( !BYTE4(this[1].klass) )
  {
    v8 = *(float *)&this[1].klass;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v8, 0LL);
    if ( v5 != v6 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice((System_String_o *)StringLiteral_22835/*"testVoice"*/, 0LL);
    }
  }
}


void __fastcall SetVolumeControl__initSetVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  UILabel_o *bgmSilder; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *seSilder; // x20
  UILabel_o *voiceSilder; // x20
  UILabel_o *muteBtnInfoTxt; // x20
  UILabel_o *muteMaskExpTxt; // x20
  UILabel_o *v10; // x20
  float VoiceVolume; // s0
  struct UILabel_o *bgmValueTxt; // x20
  float BgmVolume; // s0
  struct UILabel_o *seValueTxt; // x20
  float SeVolume; // s0
  struct UILabel_o *voiceValueTxt; // x20
  float v17; // s0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_42B4592 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&StringLiteral_9888/*"OPTION_VOLUME_MUTE_INFO"*/);
    sub_B52984(&StringLiteral_9885/*"OPTION_VOICE"*/);
    sub_B52984(&StringLiteral_9887/*"OPTION_VOLUME_MUTE_EXPLANATION"*/);
    sub_B52984(&StringLiteral_9873/*"OPTION_SE"*/);
    sub_B52984(&StringLiteral_9837/*"OPTION_BGM"*/);
    sub_B52984(&StringLiteral_9886/*"OPTION_VOLUME_MUTE"*/);
    byte_42B4592 = 1;
  }
  bgmSilder = (UILabel_o *)this->fields.bgmSilder;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9837/*"OPTION_BGM"*/, 0LL);
  if ( !bgmSilder )
    goto LABEL_19;
  UILabel__set_text(bgmSilder, v4, 0LL);
  seSilder = (UILabel_o *)this->fields.seSilder;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9873/*"OPTION_SE"*/, 0LL);
  if ( !seSilder )
    goto LABEL_19;
  UILabel__set_text(seSilder, v4, 0LL);
  voiceSilder = (UILabel_o *)this->fields.voiceSilder;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9885/*"OPTION_VOICE"*/, 0LL);
  if ( !voiceSilder )
    goto LABEL_19;
  UILabel__set_text(voiceSilder, v4, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9886/*"OPTION_VOLUME_MUTE"*/, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_19;
  UILabel__set_text(muteBtnInfoTxt, v4, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9888/*"OPTION_VOLUME_MUTE_INFO"*/, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_19;
  UILabel__set_text(muteMaskExpTxt, v4, 0LL);
  v10 = *(UILabel_o **)&this->fields.bgmValue;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9887/*"OPTION_VOLUME_MUTE_EXPLANATION"*/, 0LL);
  if ( !v10 )
    goto LABEL_19;
  UILabel__set_text(v10, v4, 0LL);
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
        v17 = OptionManager__GetVoiceVolume(0LL),
        !voiceValueTxt) )
  {
LABEL_19:
    sub_B52A5C(v4, v5);
  }
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v17, 0LL);
  SetVolumeControl__setChangeBgmText(this, v18);
  SetVolumeControl__setChangeSeText(this, v19);
  SetVolumeControl__setChangeVoiceText(this, v20);
  SetVolumeControl__muteSetting(this, v21);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  void *muteMask; // x0
  UIWidget_o *bgmSilder; // x20
  float v5; // s0
  UIWidget_o *v6; // x20
  float voiceValue; // s8

  if ( (byte_42B459C & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&SetVolumeControl_TypeInfo);
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B459C = 1;
  }
  muteMask = this->fields.muteMask;
  if ( !muteMask )
    goto LABEL_34;
  if ( BYTE4(this[1].klass) )
  {
    UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17124/*"btn_on"*/, 0LL);
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
                  v5 = 0.0;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B52A5C(muteMask, method);
  }
  UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_17123/*"btn_off"*/, 0LL);
  muteMask = this->fields.muteBtnTxt;
  if ( !muteMask )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)muteMask, 0, 0LL);
  v6 = (UIWidget_o *)this->fields.bgmSilder;
  muteMask = SetVolumeControl_TypeInfo;
  if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    muteMask = SetVolumeControl_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_34;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)*((_QWORD *)muteMask + 23), 0LL);
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
  v5 = *(float *)&this[1].klass;
LABEL_33:
  OptionManager__TestVoiceVolume(v5, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v3; // w20

  if ( (byte_42B4593 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4593 = 1;
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
    sub_B52A5C(v4, v5);
  UILabel__set_text(seTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *bgmValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_42B4595 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4595 = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(v4, v5);
  UILabel__set_text(voiceTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_42B4597 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4597 = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(v4, v5);
  UILabel__set_text(muteBtn, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_42B4599 & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4599 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt )
    sub_B52A5C(0LL, method);
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
  OptionManager_c *v3; // x0
  struct UILabel_o *bgmValueTxt; // x21
  float DEF_VOL; // s0
  struct UILabel_o *seValueTxt; // x21
  float v7; // s0
  struct UILabel_o *voiceValueTxt; // x21
  float v9; // s0
  const MethodInfo *v10; // x1

  if ( (byte_42B459A & 1) == 0 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B459A = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_42B4611 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4611 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  BYTE4(this[1].klass) = v3->static_fields->DEF_MUTE;
  if ( !byte_42B4612 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
    byte_42B4612 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = OptionManager_TypeInfo;
  }
  DEF_VOL = v3->static_fields->DEF_VOL;
  this->fields.voiceValue = DEF_VOL;
  if ( !bgmValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)bgmValueTxt, DEF_VOL, 0LL);
  seValueTxt = this->fields.seValueTxt;
  if ( !byte_42B4612 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4612 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v7 = v3->static_fields->DEF_VOL;
  *(float *)&this->fields.muteFlag = v7;
  if ( !seValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)seValueTxt, v7, 0LL);
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !byte_42B4612 )
  {
    sub_B52984(&OptionManager_TypeInfo);
    byte_42B4612 = 1;
  }
  v3 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v3 = OptionManager_TypeInfo;
  }
  v9 = v3->static_fields->DEF_VOL;
  *(float *)&this[1].klass = v9;
  if ( !voiceValueTxt )
LABEL_33:
    sub_B52A5C(v3, method);
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v9, 0LL);
  SetVolumeControl__muteSetting(this, v10);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}