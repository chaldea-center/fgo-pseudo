void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isApNotice = 257;
  this->fields.isGameNotice = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
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
  UILabel_o *apNoticeTitle; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *rpNoticeTitle; // x20
  UILabel_o *sysNoticeTitle; // x20
  UILabel_o *rpExplanationTxt; // x20
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_4B11626 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&OptionManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_9798/*"OPTION_NOTICE_ELSE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_9797/*"OPTION_NOTICE_AP"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9800/*"OPTION_NOTICE_RP_EXPLANATION"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_9799/*"OPTION_NOTICE_RP"*/, v12, v13);
    byte_4B11626 = 1;
  }
  apNoticeTitle = this->fields.apNoticeTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9797/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeTitle )
    goto LABEL_12;
  UILabel__set_text(apNoticeTitle, v15, 0LL);
  rpNoticeTitle = this->fields.rpNoticeTitle;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9799/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeTitle
    || (UILabel__set_text(rpNoticeTitle, v15, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9798/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeTitle)
    || (UILabel__set_text(sysNoticeTitle, v15, 0LL),
        rpExplanationTxt = this->fields.rpExplanationTxt,
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_9800/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !rpExplanationTxt) )
  {
LABEL_12:
    sub_1BCAA3C(v15, v16);
  }
  UILabel__set_text(rpExplanationTxt, v15, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v20);
  this->fields.isApNotice = OptionManager__GetLocalNotiffication(0LL);
  this->fields.isRpNotice = OptionManager__GetRaidNotiffication(0LL);
  this->fields.isGameNotice = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v21);
  SetNoticeOptionControl__setRpNoticeValue(this, v22);
  SetNoticeOptionControl__setGameNoticeValue(this, v23);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isApNotice; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *apNoticeBtn; // x0
  __int64 *v13; // x8
  bool v14; // w20

  if ( (byte_4B1162B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetNoticeOptionControl_OnApNoticeChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B1162B = 1;
  }
  v8 = Method_SetNoticeOptionControl_OnApNoticeChangeBtn__;
  isApNotice = this->fields.isApNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isApNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    apNoticeBtn = this->fields.apNoticeBtn;
    if ( apNoticeBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(apNoticeBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v13, 0LL);
  this->fields.isApNotice = v14;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isGameNotice; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v13; // x8
  bool v14; // w20

  if ( (byte_4B1162D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B1162D = 1;
  }
  v8 = Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__;
  isGameNotice = this->fields.isGameNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isGameNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    sysNoticeBtn = this->fields.sysNoticeBtn;
    if ( sysNoticeBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(sysNoticeBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v13, 0LL);
  this->fields.isGameNotice = v14;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isRpNotice; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v13; // x8
  bool v14; // w20

  if ( (byte_4B1162C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B1162C = 1;
  }
  v8 = Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__;
  isRpNotice = this->fields.isRpNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isRpNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    rpNoticeBtn = this->fields.rpNoticeBtn;
    if ( rpNoticeBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(rpNoticeBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v13, 0LL);
  this->fields.isRpNotice = v14;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isApNotice; // w20

  if ( (byte_4B11627 & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B11627 = 1;
  }
  isApNotice = this->fields.isApNotice;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  OptionManager__SetLocalNotiffication(isApNotice, 0LL);
  OptionManager__SetRaidNotiffication(this->fields.isRpNotice, 0LL);
  OptionManager__SetNotiffication(this->fields.isGameNotice, 0, 0LL);
}


void __fastcall SetNoticeOptionControl__setApNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *apNoticeBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11628 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11628 = 1;
  }
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isApNotice )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v7, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B1162A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B1162A = 1;
  }
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isGameNotice )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v7, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11629 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11629 = 1;
  }
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isRpNotice )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v7, 0LL);
}