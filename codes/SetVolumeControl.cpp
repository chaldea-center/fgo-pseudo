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

  if ( (byte_40FF356 & 1) == 0 )
  {
    sub_B16FFC(&SetVolumeControl_TypeInfo, v1);
    byte_40FF356 = 1;
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

  if ( (byte_40FF354 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FF354 = 1;
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

  if ( (byte_40FF34D & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF34D = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B170D4();
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
  struct UILabel_o *v6; // x0
  float v7; // s10
  float v8; // s8
  const MethodInfo *v9; // x1
  float v10; // s9

  if ( (byte_40FF34F & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v3);
    byte_40FF34F = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)seValueTxt, 0LL), (v6 = this->fields.seValueTxt) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = *(float *)&this->fields.muteFlag;
  v8 = value;
  *(float *)&this->fields.muteFlag = UIProgressBar__get_value((UIProgressBar_o *)v6, 0LL);
  SetVolumeControl__setChangeSeText(this, v9);
  if ( !BYTE4(this[1].klass) )
  {
    v10 = *(float *)&this->fields.muteFlag;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestSeVolume(v10, 0LL);
    if ( v7 != v8 )
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
  struct UILabel_o *v7; // x0
  float v8; // s10
  float v9; // s8
  const MethodInfo *v10; // x1
  float v11; // s9

  if ( (byte_40FF351 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_22552, v4);
    byte_40FF351 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt
    || (value = UIProgressBar__get_value((UIProgressBar_o *)voiceValueTxt, 0LL), (v7 = this->fields.voiceValueTxt) == 0LL) )
  {
    sub_B170D4();
  }
  v8 = *(float *)&this[1].klass;
  v9 = value;
  *(float *)&this[1].klass = UIProgressBar__get_value((UIProgressBar_o *)v7, 0LL);
  SetVolumeControl__setChangeVoiceText(this, v10);
  if ( !BYTE4(this[1].klass) )
  {
    v11 = *(float *)&this[1].klass;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    OptionManager__TestVoiceVolume(v11, 0LL);
    if ( v8 != v9 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playVoice((System_String_o *)StringLiteral_22552, 0LL);
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
  UILabel_o *seSilder; // x20
  System_String_o *v13; // x0
  UILabel_o *voiceSilder; // x20
  System_String_o *v15; // x0
  UILabel_o *muteBtnInfoTxt; // x20
  System_String_o *v17; // x0
  UILabel_o *muteMaskExpTxt; // x20
  System_String_o *v19; // x0
  UILabel_o *v20; // x20
  System_String_o *v21; // x0
  float VoiceVolume; // s0
  struct UILabel_o *bgmValueTxt; // x20
  float BgmVolume; // s0
  struct UILabel_o *seValueTxt; // x20
  float SeVolume; // s0
  struct UILabel_o *voiceValueTxt; // x20
  float v28; // s0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1

  if ( (byte_40FF34B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9792, v4);
    sub_B16FFC(&StringLiteral_9789, v5);
    sub_B16FFC(&StringLiteral_9791, v6);
    sub_B16FFC(&StringLiteral_9779, v7);
    sub_B16FFC(&StringLiteral_9749, v8);
    sub_B16FFC(&StringLiteral_9790, v9);
    byte_40FF34B = 1;
  }
  bgmSilder = (UILabel_o *)this->fields.bgmSilder;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9749, 0LL);
  if ( !bgmSilder )
    goto LABEL_19;
  UILabel__set_text(bgmSilder, v11, 0LL);
  seSilder = (UILabel_o *)this->fields.seSilder;
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9779, 0LL);
  if ( !seSilder )
    goto LABEL_19;
  UILabel__set_text(seSilder, v13, 0LL);
  voiceSilder = (UILabel_o *)this->fields.voiceSilder;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9789, 0LL);
  if ( !voiceSilder )
    goto LABEL_19;
  UILabel__set_text(voiceSilder, v15, 0LL);
  muteBtnInfoTxt = this->fields.muteBtnInfoTxt;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9790, 0LL);
  if ( !muteBtnInfoTxt )
    goto LABEL_19;
  UILabel__set_text(muteBtnInfoTxt, v17, 0LL);
  muteMaskExpTxt = this->fields.muteMaskExpTxt;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9792, 0LL);
  if ( !muteMaskExpTxt )
    goto LABEL_19;
  UILabel__set_text(muteMaskExpTxt, v19, 0LL);
  v20 = *(UILabel_o **)&this->fields.bgmValue;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9791, 0LL);
  if ( !v20 )
    goto LABEL_19;
  UILabel__set_text(v20, v21, 0LL);
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
        v28 = OptionManager__GetVoiceVolume(0LL),
        !voiceValueTxt) )
  {
LABEL_19:
    sub_B170D4();
  }
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v28, 0LL);
  SetVolumeControl__setChangeBgmText(this, v29);
  SetVolumeControl__setChangeSeText(this, v30);
  SetVolumeControl__setChangeVoiceText(this, v31);
  SetVolumeControl__muteSetting(this, v32);
}


void __fastcall SetVolumeControl__muteSetting(SetVolumeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *muteMask; // x0
  UnityEngine_GameObject_o *muteBtnTxt; // x0
  UIWidget_o *bgmSilder; // x20
  SetVolumeControl_c *v9; // x0
  UIWidget_o *seSilder; // x0
  UIWidget_o *voiceSilder; // x0
  UIWidget_o *seTxt; // x0
  UIWidget_o *voiceTxt; // x0
  UIWidget_o *muteBtn; // x0
  float v15; // s0
  UnityEngine_GameObject_o *v16; // x0
  UIWidget_o *v17; // x20
  SetVolumeControl_c *v18; // x0
  UIWidget_o *v19; // x0
  UIWidget_o *v20; // x0
  UIWidget_o *v21; // x0
  UIWidget_o *v22; // x0
  UIWidget_o *v23; // x0
  float voiceValue; // s8

  if ( (byte_40FF355 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SetVolumeControl_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16940, v4);
    sub_B16FFC(&StringLiteral_16939, v5);
    byte_40FF355 = 1;
  }
  muteMask = this->fields.muteMask;
  if ( !muteMask )
    goto LABEL_34;
  if ( BYTE4(this[1].klass) )
  {
    UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_16940, 0LL);
    muteBtnTxt = (UnityEngine_GameObject_o *)this->fields.muteBtnTxt;
    if ( muteBtnTxt )
    {
      UnityEngine_GameObject__SetActive(muteBtnTxt, 1, 0LL);
      bgmSilder = (UIWidget_o *)this->fields.bgmSilder;
      v9 = SetVolumeControl_TypeInfo;
      if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SetVolumeControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
        v9 = SetVolumeControl_TypeInfo;
      }
      if ( bgmSilder )
      {
        UIWidget__set_color(bgmSilder, v9->static_fields->DARK_TEXT_COLOR, 0LL);
        seSilder = (UIWidget_o *)this->fields.seSilder;
        if ( seSilder )
        {
          UIWidget__set_color(seSilder, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
          voiceSilder = (UIWidget_o *)this->fields.voiceSilder;
          if ( voiceSilder )
          {
            UIWidget__set_color(voiceSilder, SetVolumeControl_TypeInfo->static_fields->DARK_TEXT_COLOR, 0LL);
            seTxt = (UIWidget_o *)this->fields.seTxt;
            if ( seTxt )
            {
              UIWidget__set_color(seTxt, SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR, 0LL);
              voiceTxt = (UIWidget_o *)this->fields.voiceTxt;
              if ( voiceTxt )
              {
                UIWidget__set_color(voiceTxt, SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR, 0LL);
                muteBtn = (UIWidget_o *)this->fields.muteBtn;
                if ( muteBtn )
                {
                  UIWidget__set_color(muteBtn, SetVolumeControl_TypeInfo->static_fields->DARK_VALUE_COLOR, 0LL);
                  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !OptionManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
                  }
                  OptionManager__TestBgmVolume(0.0, 0LL);
                  OptionManager__TestSeVolume(0.0, 0LL);
                  v15 = 0.0;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  UIButton__set_normalSprite((UIButton_o *)muteMask, (System_String_o *)StringLiteral_16939, 0LL);
  v16 = (UnityEngine_GameObject_o *)this->fields.muteBtnTxt;
  if ( !v16 )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  v17 = (UIWidget_o *)this->fields.bgmSilder;
  v18 = SetVolumeControl_TypeInfo;
  if ( (BYTE3(SetVolumeControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetVolumeControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetVolumeControl_TypeInfo);
    v18 = SetVolumeControl_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_34;
  UIWidget__set_color(v17, v18->static_fields->NORMAL_TEXT_COLOR, 0LL);
  v19 = (UIWidget_o *)this->fields.seSilder;
  if ( !v19 )
    goto LABEL_34;
  UIWidget__set_color(v19, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  v20 = (UIWidget_o *)this->fields.voiceSilder;
  if ( !v20 )
    goto LABEL_34;
  UIWidget__set_color(v20, SetVolumeControl_TypeInfo->static_fields->NORMAL_TEXT_COLOR, 0LL);
  v21 = (UIWidget_o *)this->fields.seTxt;
  if ( !v21 )
    goto LABEL_34;
  UIWidget__set_color(v21, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  v22 = (UIWidget_o *)this->fields.voiceTxt;
  if ( !v22 )
    goto LABEL_34;
  UIWidget__set_color(v22, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  v23 = (UIWidget_o *)this->fields.muteBtn;
  if ( !v23 )
    goto LABEL_34;
  UIWidget__set_color(v23, SetVolumeControl_TypeInfo->static_fields->NORMAL_VALUE_COLOR, 0LL);
  voiceValue = this->fields.voiceValue;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__TestBgmVolume(voiceValue, 0LL);
  OptionManager__TestSeVolume(*(float *)&this->fields.muteFlag, 0LL);
  v15 = *(float *)&this[1].klass;
LABEL_33:
  OptionManager__TestVoiceVolume(v15, 0LL);
}


void __fastcall SetVolumeControl__reflectionVolume(SetVolumeControl_o *this, const MethodInfo *method)
{
  int v3; // w20

  if ( (byte_40FF34C & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF34C = 1;
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
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = UnityEngine_Mathf__CeilToInt(this->fields.voiceValue * 10.0, 0LL);
  seTxt = this->fields.seTxt;
  v4 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !seTxt )
    sub_B170D4();
  UILabel__set_text(seTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeBgmValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *bgmValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_40FF34E & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF34E = 1;
  }
  bgmValueTxt = this->fields.bgmValueTxt;
  if ( !bgmValueTxt )
    sub_B170D4();
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
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = UnityEngine_Mathf__CeilToInt(*(float *)&this->fields.muteFlag * 10.0, 0LL);
  voiceTxt = this->fields.voiceTxt;
  v4 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !voiceTxt )
    sub_B170D4();
  UILabel__set_text(voiceTxt, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeSeValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *seValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_40FF350 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF350 = 1;
  }
  seValueTxt = this->fields.seValueTxt;
  if ( !seValueTxt )
    sub_B170D4();
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
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = UnityEngine_Mathf__CeilToInt(*(float *)&this[1].klass * 10.0, 0LL);
  muteBtn = (UILabel_o *)this->fields.muteBtn;
  v4 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !muteBtn )
    sub_B170D4();
  UILabel__set_text(muteBtn, v4, 0LL);
}


void __fastcall SetVolumeControl__setChangeVoiceValue(SetVolumeControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *voiceValueTxt; // x0
  float value; // s0
  int v5; // w8
  float v6; // s8

  if ( (byte_40FF352 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF352 = 1;
  }
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !voiceValueTxt )
    sub_B170D4();
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
  __int64 v7; // x1
  struct UILabel_o *seValueTxt; // x21
  OptionManager_c *v9; // x0
  float v10; // s0
  __int64 v11; // x1
  struct UILabel_o *voiceValueTxt; // x21
  OptionManager_c *v13; // x0
  float v14; // s0
  const MethodInfo *v15; // x1

  if ( (byte_40FF353 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FF353 = 1;
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !byte_40FF3C7 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FF3C7 = 1;
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
  if ( !byte_40FF3C8 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    v4 = OptionManager_TypeInfo;
    byte_40FF3C8 = 1;
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
  if ( !byte_40FF3C8 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v7);
    byte_40FF3C8 = 1;
  }
  v9 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v9 = OptionManager_TypeInfo;
  }
  v10 = v9->static_fields->DEF_VOL;
  *(float *)&this->fields.muteFlag = v10;
  if ( !seValueTxt )
    goto LABEL_33;
  UIProgressBar__set_value((UIProgressBar_o *)seValueTxt, v10, 0LL);
  voiceValueTxt = this->fields.voiceValueTxt;
  if ( !byte_40FF3C8 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, v11);
    byte_40FF3C8 = 1;
  }
  v13 = OptionManager_TypeInfo;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    v13 = OptionManager_TypeInfo;
  }
  v14 = v13->static_fields->DEF_VOL;
  *(float *)&this[1].klass = v14;
  if ( !voiceValueTxt )
LABEL_33:
    sub_B170D4();
  UIProgressBar__set_value((UIProgressBar_o *)voiceValueTxt, v14, 0LL);
  SetVolumeControl__muteSetting(this, v15);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}