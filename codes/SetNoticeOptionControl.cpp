void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  LOWORD(this[1].klass) = 257;
  BYTE2(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *apNoticeBtn; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  UILabel_o *rpNoticeBtn; // x20
  UILabel_o *sysNoticeBtn; // x20
  UILabel_o *sysNoticeTitle; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_418B97E & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&OptionManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_9788/*"OPTION_NOTICE_ELSE"*/, v4);
    sub_B2C35C(&StringLiteral_9787/*"OPTION_NOTICE_AP"*/, v5);
    sub_B2C35C(&StringLiteral_9790/*"OPTION_NOTICE_RP_EXPLANATION"*/, v6);
    sub_B2C35C(&StringLiteral_9789/*"OPTION_NOTICE_RP"*/, v7);
    byte_418B97E = 1;
  }
  apNoticeBtn = (UILabel_o *)this->fields.apNoticeBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9787/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeBtn )
    goto LABEL_14;
  UILabel__set_text(apNoticeBtn, v9, 0LL);
  rpNoticeBtn = (UILabel_o *)this->fields.rpNoticeBtn;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9789/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeBtn
    || (UILabel__set_text(rpNoticeBtn, v9, 0LL),
        sysNoticeBtn = (UILabel_o *)this->fields.sysNoticeBtn,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9788/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeBtn)
    || (UILabel__set_text(sysNoticeBtn, v9, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9790/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !sysNoticeTitle) )
  {
LABEL_14:
    sub_B2C434(v9, v10);
  }
  UILabel__set_text(sysNoticeTitle, v9, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetLocalNotiffication(0LL);
  BYTE1(this[1].klass) = OptionManager__GetRaidNotiffication(0LL);
  BYTE2(this[1].klass) = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v14);
  SetNoticeOptionControl__setRpNoticeValue(this, v15);
  SetNoticeOptionControl__setGameNoticeValue(this, v16);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UILabel_o *apNoticeTxt; // x0
  char v7; // w8

  if ( (byte_418B983 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_418B983 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17006/*"btn_on"*/, 0LL);
      v7 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(apNoticeTxt, v5);
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
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17005/*"btn_off"*/, 0LL);
  v7 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v7;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UILabel_o *sysNoticeTxt; // x0
  char v7; // w8

  if ( (byte_418B985 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_418B985 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17006/*"btn_on"*/, 0LL);
      v7 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(sysNoticeTxt, v5);
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
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17005/*"btn_off"*/, 0LL);
  v7 = 0;
LABEL_14:
  BYTE2(this[1].klass) = v7;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct UILabel_o *rpNoticeTxt; // x0
  char v7; // w8

  if ( (byte_418B984 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_418B984 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17006/*"btn_on"*/, 0LL);
      v7 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B2C434(rpNoticeTxt, v5);
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
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17005/*"btn_off"*/, 0LL);
  v7 = 0;
LABEL_14:
  BYTE1(this[1].klass) = v7;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w20

  if ( (byte_418B97F & 1) == 0 )
  {
    sub_B2C35C(&OptionManager_TypeInfo, method);
    byte_418B97F = 1;
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
  __int64 v3; // x1
  struct UILabel_o *apNoticeTxt; // x0
  __int64 *v5; // x8

  if ( (byte_418B980 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418B980 = 1;
  }
  apNoticeTxt = this->fields.apNoticeTxt;
  if ( !apNoticeTxt )
    sub_B2C434(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *sysNoticeTxt; // x0
  __int64 *v5; // x8

  if ( (byte_418B982 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418B982 = 1;
  }
  sysNoticeTxt = this->fields.sysNoticeTxt;
  if ( !sysNoticeTxt )
    sub_B2C434(0LL, method);
  if ( BYTE2(this[1].klass) )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *rpNoticeTxt; // x0
  __int64 *v5; // x8

  if ( (byte_418B981 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, method);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v3);
    byte_418B981 = 1;
  }
  rpNoticeTxt = this->fields.rpNoticeTxt;
  if ( !rpNoticeTxt )
    sub_B2C434(0LL, method);
  if ( BYTE1(this[1].klass) )
    v5 = &StringLiteral_17006/*"btn_on"*/;
  else
    v5 = &StringLiteral_17005/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)*v5, 0LL);
}