void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  LOWORD(this[1].klass) = 257;
  BYTE2(this[1].klass) = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
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
  UILabel_o *apNoticeBtn; // x20
  System_String_o *v21; // x0
  __int64 v22; // x1
  UILabel_o *rpNoticeBtn; // x20
  UILabel_o *sysNoticeBtn; // x20
  UILabel_o *sysNoticeTitle; // x20
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1

  if ( (byte_42EBA8B & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&OptionManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9888/*"OPTION_NOTICE_ELSE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9887/*"OPTION_NOTICE_AP"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9890/*"OPTION_NOTICE_RP_EXPLANATION"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9889/*"OPTION_NOTICE_RP"*/, v17, v18, v19);
    byte_42EBA8B = 1;
  }
  apNoticeBtn = (UILabel_o *)this->fields.apNoticeBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9887/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeBtn )
    goto LABEL_14;
  UILabel__set_text(apNoticeBtn, v21, 0LL);
  rpNoticeBtn = (UILabel_o *)this->fields.rpNoticeBtn;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9889/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeBtn
    || (UILabel__set_text(rpNoticeBtn, v21, 0LL),
        sysNoticeBtn = (UILabel_o *)this->fields.sysNoticeBtn,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9888/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeBtn)
    || (UILabel__set_text(sysNoticeBtn, v21, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9890/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !sysNoticeTitle) )
  {
LABEL_14:
    sub_B5D69C(v21, v22);
  }
  UILabel__set_text(sysNoticeTitle, v21, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetLocalNotiffication(0LL);
  BYTE1(this[1].klass) = OptionManager__GetRaidNotiffication(0LL);
  BYTE2(this[1].klass) = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v26);
  SetNoticeOptionControl__setRpNoticeValue(this, v27);
  SetNoticeOptionControl__setGameNoticeValue(this, v28);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  struct UILabel_o *apNoticeTxt; // x0
  char v13; // w8

  if ( (byte_42EBA90 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42EBA90 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17215/*"btn_on"*/, 0LL);
      v13 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(apNoticeTxt, v11);
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
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_17214/*"btn_off"*/, 0LL);
  v13 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v13;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  struct UILabel_o *sysNoticeTxt; // x0
  char v13; // w8

  if ( (byte_42EBA92 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42EBA92 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17215/*"btn_on"*/, 0LL);
      v13 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(sysNoticeTxt, v11);
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
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_17214/*"btn_off"*/, 0LL);
  v13 = 0;
LABEL_14:
  BYTE2(this[1].klass) = v13;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  struct UILabel_o *rpNoticeTxt; // x0
  char v13; // w8

  if ( (byte_42EBA91 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v8, v9, v10);
    byte_42EBA91 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17215/*"btn_on"*/, 0LL);
      v13 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B5D69C(rpNoticeTxt, v11);
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
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_17214/*"btn_off"*/, 0LL);
  v13 = 0;
LABEL_14:
  BYTE1(this[1].klass) = v13;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int klass_low; // w20

  if ( (byte_42EBA8C & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA8C = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *apNoticeTxt; // x0
  __int64 *v9; // x8

  if ( (byte_42EBA8D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EBA8D = 1;
  }
  apNoticeTxt = this->fields.apNoticeTxt;
  if ( !apNoticeTxt )
    sub_B5D69C(0LL, method);
  if ( LOBYTE(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)*v9, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *sysNoticeTxt; // x0
  __int64 *v9; // x8

  if ( (byte_42EBA8F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EBA8F = 1;
  }
  sysNoticeTxt = this->fields.sysNoticeTxt;
  if ( !sysNoticeTxt )
    sub_B5D69C(0LL, method);
  if ( BYTE2(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)*v9, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UILabel_o *rpNoticeTxt; // x0
  __int64 *v9; // x8

  if ( (byte_42EBA8E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42EBA8E = 1;
  }
  rpNoticeTxt = this->fields.rpNoticeTxt;
  if ( !rpNoticeTxt )
    sub_B5D69C(0LL, method);
  if ( BYTE1(this[1].klass) )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)*v9, 0LL);
}