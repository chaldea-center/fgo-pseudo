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
  UILabel_o *rpNoticeBtn; // x20
  System_String_o *v11; // x0
  UILabel_o *sysNoticeBtn; // x20
  System_String_o *v13; // x0
  UILabel_o *sysNoticeTitle; // x20
  System_String_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_40FC3DB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&OptionManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9758, v4);
    sub_B16FFC(&StringLiteral_9757, v5);
    sub_B16FFC(&StringLiteral_9760, v6);
    sub_B16FFC(&StringLiteral_9759, v7);
    byte_40FC3DB = 1;
  }
  apNoticeBtn = (UILabel_o *)this->fields.apNoticeBtn;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9757, 0LL);
  if ( !apNoticeBtn )
    goto LABEL_14;
  UILabel__set_text(apNoticeBtn, v9, 0LL);
  rpNoticeBtn = (UILabel_o *)this->fields.rpNoticeBtn;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9759, 0LL);
  if ( !rpNoticeBtn
    || (UILabel__set_text(rpNoticeBtn, v11, 0LL),
        sysNoticeBtn = (UILabel_o *)this->fields.sysNoticeBtn,
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9758, 0LL),
        !sysNoticeBtn)
    || (UILabel__set_text(sysNoticeBtn, v13, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9760, 0LL),
        !sysNoticeTitle) )
  {
LABEL_14:
    sub_B170D4();
  }
  UILabel__set_text(sysNoticeTitle, v15, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  LOBYTE(this[1].klass) = OptionManager__GetLocalNotiffication(0LL);
  BYTE1(this[1].klass) = OptionManager__GetRaidNotiffication(0LL);
  BYTE2(this[1].klass) = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v16);
  SetNoticeOptionControl__setRpNoticeValue(this, v17);
  SetNoticeOptionControl__setGameNoticeValue(this, v18);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *v5; // x0
  char v6; // w8
  struct UILabel_o *apNoticeTxt; // x0

  if ( (byte_40FC3E0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940, v3);
    sub_B16FFC(&StringLiteral_16939, v4);
    byte_40FC3E0 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)StringLiteral_16940, 0LL);
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = this->fields.apNoticeTxt;
  if ( !v5 )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)v5, (System_String_o *)StringLiteral_16939, 0LL);
  v6 = 0;
LABEL_14:
  LOBYTE(this[1].klass) = v6;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *v5; // x0
  char v6; // w8
  struct UILabel_o *sysNoticeTxt; // x0

  if ( (byte_40FC3E2 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940, v3);
    sub_B16FFC(&StringLiteral_16939, v4);
    byte_40FC3E2 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)StringLiteral_16940, 0LL);
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = this->fields.sysNoticeTxt;
  if ( !v5 )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)v5, (System_String_o *)StringLiteral_16939, 0LL);
  v6 = 0;
LABEL_14:
  BYTE2(this[1].klass) = v6;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UILabel_o *v5; // x0
  char v6; // w8
  struct UILabel_o *rpNoticeTxt; // x0

  if ( (byte_40FC3E1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940, v3);
    sub_B16FFC(&StringLiteral_16939, v4);
    byte_40FC3E1 = 1;
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
      UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)StringLiteral_16940, 0LL);
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = this->fields.rpNoticeTxt;
  if ( !v5 )
    goto LABEL_15;
  UIButton__set_normalSprite((UIButton_o *)v5, (System_String_o *)StringLiteral_16939, 0LL);
  v6 = 0;
LABEL_14:
  BYTE1(this[1].klass) = v6;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  int klass_low; // w20

  if ( (byte_40FC3DC & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FC3DC = 1;
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

  if ( (byte_40FC3DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC3DD = 1;
  }
  apNoticeTxt = this->fields.apNoticeTxt;
  if ( !apNoticeTxt )
    sub_B170D4();
  if ( LOBYTE(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite((UIButton_o *)apNoticeTxt, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *sysNoticeTxt; // x0
  __int64 *v5; // x8

  if ( (byte_40FC3DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC3DF = 1;
  }
  sysNoticeTxt = this->fields.sysNoticeTxt;
  if ( !sysNoticeTxt )
    sub_B170D4();
  if ( BYTE2(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite((UIButton_o *)sysNoticeTxt, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UILabel_o *rpNoticeTxt; // x0
  __int64 *v5; // x8

  if ( (byte_40FC3DE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16940, method);
    sub_B16FFC(&StringLiteral_16939, v3);
    byte_40FC3DE = 1;
  }
  rpNoticeTxt = this->fields.rpNoticeTxt;
  if ( !rpNoticeTxt )
    sub_B170D4();
  if ( BYTE1(this[1].klass) )
    v5 = &StringLiteral_16940;
  else
    v5 = &StringLiteral_16939;
  UIButton__set_normalSprite((UIButton_o *)rpNoticeTxt, (System_String_o *)*v5, 0LL);
}