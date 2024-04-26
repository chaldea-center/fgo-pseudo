void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  LOWORD(this[1].klass) = 257;
  BYTE2(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *apNoticeBtn; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *rpNoticeBtn; // x20
  UILabel_o *sysNoticeBtn; // x20
  UILabel_o *sysNoticeTitle; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_43541C9 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    sub_B70694(&StringLiteral_9904/*"OPTION_NOTICE_ELSE"*/);
    sub_B70694(&StringLiteral_9903/*"OPTION_NOTICE_AP"*/);
    sub_B70694(&StringLiteral_9906/*"OPTION_NOTICE_RP_EXPLANATION"*/);
    sub_B70694(&StringLiteral_9905/*"OPTION_NOTICE_RP"*/);
    byte_43541C9 = 1;
  }
  apNoticeBtn = (UILabel_o *)this->fields.apNoticeBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9903/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeBtn )
    goto LABEL_14;
  UILabel__set_text(apNoticeBtn, v4, 0LL);
  rpNoticeBtn = (UILabel_o *)this->fields.rpNoticeBtn;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9905/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeBtn
    || (UILabel__set_text(rpNoticeBtn, v4, 0LL),
        sysNoticeBtn = (UILabel_o *)this->fields.sysNoticeBtn,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9904/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeBtn)
    || (UILabel__set_text(sysNoticeBtn, v4, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9906/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !sysNoticeTitle) )
  {
LABEL_14:
    sub_B7076C(v4, v5);
  }
  UILabel__set_text(sysNoticeTitle, v4, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetLocalNotiffication(0LL);
  BYTE1(this[1].klass) = OptionManager__GetRaidNotiffication(0LL);
  BYTE2(this[1].klass) = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v9);
  SetNoticeOptionControl__setRpNoticeValue(this, v10);
  SetNoticeOptionControl__setGameNoticeValue(this, v11);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *apNoticeTxt; // x0
  char v5; // w8

  if ( (byte_43541CE & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541CE = 1;
  }
  if ( !LOBYTE(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    apNoticeTxt = this->fields.apNoticeTxt;
    if ( apNoticeTxt )
    {
      UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17262/*"btn_on"*/, 0LL);
      v5 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(apNoticeTxt, v3);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  apNoticeTxt = this->fields.apNoticeTxt;
  if ( !apNoticeTxt )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17261/*"btn_off"*/, 0LL);
  v5 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v5;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *sysNoticeTxt; // x0
  char v5; // w8

  if ( (byte_43541D0 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541D0 = 1;
  }
  if ( !BYTE2(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sysNoticeTxt = this->fields.sysNoticeTxt;
    if ( sysNoticeTxt )
    {
      UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17262/*"btn_on"*/, 0LL);
      v5 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(sysNoticeTxt, v3);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  sysNoticeTxt = this->fields.sysNoticeTxt;
  if ( !sysNoticeTxt )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17261/*"btn_off"*/, 0LL);
  v5 = 0;
LABEL_14:
  BYTE2(this[1].klass) = v5;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *rpNoticeTxt; // x0
  char v5; // w8

  if ( (byte_43541CF & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541CF = 1;
  }
  if ( !BYTE1(this[1].klass) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    rpNoticeTxt = this->fields.rpNoticeTxt;
    if ( rpNoticeTxt )
    {
      UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17262/*"btn_on"*/, 0LL);
      v5 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B7076C(rpNoticeTxt, v3);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  rpNoticeTxt = this->fields.rpNoticeTxt;
  if ( !rpNoticeTxt )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17261/*"btn_off"*/, 0LL);
  v5 = 0;
LABEL_14:
  BYTE1(this[1].klass) = v5;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w20

  if ( (byte_43541CA & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_43541CA = 1;
  }
  klass_low = LOBYTE(this[1].klass);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  OptionManager__SetLocalNotiffication(klass_low != 0, 0LL);
  OptionManager__SetRaidNotiffication(BYTE1(this[1].klass), 0LL);
  OptionManager__SetNotiffication(BYTE2(this[1].klass), 0, 0LL);
}


void __fastcall SetNoticeOptionControl__setApNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *apNoticeTxt; // x0
  __int64 *v4; // x8

  if ( (byte_43541CB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541CB = 1;
  }
  apNoticeTxt = this->fields.apNoticeTxt;
  if ( !apNoticeTxt )
    sub_B7076C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)*v4, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *sysNoticeTxt; // x0
  __int64 *v4; // x8

  if ( (byte_43541CD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541CD = 1;
  }
  sysNoticeTxt = this->fields.sysNoticeTxt;
  if ( !sysNoticeTxt )
    sub_B7076C(0LL, method);
  if ( BYTE2(this[1].klass) )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)*v4, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  struct UILabel_o *rpNoticeTxt; // x0
  __int64 *v4; // x8

  if ( (byte_43541CC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_43541CC = 1;
  }
  rpNoticeTxt = this->fields.rpNoticeTxt;
  if ( !rpNoticeTxt )
    sub_B7076C(0LL, method);
  if ( BYTE1(this[1].klass) )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)*v4, 0LL);
}