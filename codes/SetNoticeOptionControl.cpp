void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isApNotice = 257;
  this->fields.isGameNotice = 1;
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *apNoticeTitle; // x20
  System_String_o *v9; // x0
  UILabel_o *rpNoticeTitle; // x20
  UILabel_o *sysNoticeTitle; // x20
  UILabel_o *rpExplanationTxt; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_49F7A44 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_9620/*"OPTION_NOTICE_ELSE"*/, v4);
    sub_1B640C8(&StringLiteral_9619/*"OPTION_NOTICE_AP"*/, v5);
    sub_1B640C8(&StringLiteral_9622/*"OPTION_NOTICE_RP_EXPLANATION"*/, v6);
    sub_1B640C8(&StringLiteral_9621/*"OPTION_NOTICE_RP"*/, v7);
    byte_49F7A44 = 1;
  }
  apNoticeTitle = this->fields.apNoticeTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9619/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeTitle )
    goto LABEL_12;
  UILabel__set_text(apNoticeTitle, v9, 0LL);
  rpNoticeTitle = this->fields.rpNoticeTitle;
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9621/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeTitle
    || (UILabel__set_text(rpNoticeTitle, v9, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9620/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeTitle)
    || (UILabel__set_text(sysNoticeTitle, v9, 0LL),
        rpExplanationTxt = this->fields.rpExplanationTxt,
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_9622/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !rpExplanationTxt) )
  {
LABEL_12:
    sub_1B64324(v9);
  }
  UILabel__set_text(rpExplanationTxt, v9, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isApNotice = OptionManager__GetLocalNotiffication(0LL);
  this->fields.isRpNotice = OptionManager__GetRaidNotiffication(0LL);
  this->fields.isGameNotice = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v13);
  SetNoticeOptionControl__setRpNoticeValue(this, v14);
  SetNoticeOptionControl__setGameNoticeValue(this, v15);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isApNotice; // w20
  System_Reflection_MethodBase_o *v7; // x0
  UIButton_o *apNoticeBtn; // x0
  __int64 *v9; // x8
  bool v10; // w20

  if ( (byte_49F7A49 & 1) == 0 )
  {
    sub_1B640C8(&Method_SetNoticeOptionControl_OnApNoticeChangeBtn__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F7A49 = 1;
  }
  v5 = Method_SetNoticeOptionControl_OnApNoticeChangeBtn__;
  isApNotice = this->fields.isApNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !isApNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    apNoticeBtn = this->fields.apNoticeBtn;
    if ( apNoticeBtn )
    {
      v9 = &StringLiteral_17456/*"btn_on"*/;
      v10 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(apNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    goto LABEL_11;
  v9 = &StringLiteral_17455/*"btn_off"*/;
  v10 = 0;
LABEL_10:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v9, 0LL);
  this->fields.isApNotice = v10;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isGameNotice; // w20
  System_Reflection_MethodBase_o *v7; // x0
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v9; // x8
  bool v10; // w20

  if ( (byte_49F7A4B & 1) == 0 )
  {
    sub_1B640C8(&Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F7A4B = 1;
  }
  v5 = Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__;
  isGameNotice = this->fields.isGameNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !isGameNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    sysNoticeBtn = this->fields.sysNoticeBtn;
    if ( sysNoticeBtn )
    {
      v9 = &StringLiteral_17456/*"btn_on"*/;
      v10 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(sysNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    goto LABEL_11;
  v9 = &StringLiteral_17455/*"btn_off"*/;
  v10 = 0;
LABEL_10:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v9, 0LL);
  this->fields.isGameNotice = v10;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isRpNotice; // w20
  System_Reflection_MethodBase_o *v7; // x0
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v9; // x8
  bool v10; // w20

  if ( (byte_49F7A4A & 1) == 0 )
  {
    sub_1B640C8(&Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__, method);
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, v3);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v4);
    byte_49F7A4A = 1;
  }
  v5 = Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__;
  isRpNotice = this->fields.isRpNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( !isRpNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    rpNoticeBtn = this->fields.rpNoticeBtn;
    if ( rpNoticeBtn )
    {
      v9 = &StringLiteral_17456/*"btn_on"*/;
      v10 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(rpNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    goto LABEL_11;
  v9 = &StringLiteral_17455/*"btn_off"*/;
  v10 = 0;
LABEL_10:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v9, 0LL);
  this->fields.isRpNotice = v10;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isApNotice; // w20

  if ( (byte_49F7A45 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F7A45 = 1;
  }
  isApNotice = this->fields.isApNotice;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetLocalNotiffication(isApNotice, 0LL);
  OptionManager__SetRaidNotiffication(this->fields.isRpNotice, 0LL);
  OptionManager__SetNotiffication(this->fields.isGameNotice, 0, 0LL);
}


void __fastcall SetNoticeOptionControl__setApNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *apNoticeBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A46 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A46 = 1;
  }
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    sub_1B64324(0LL);
  if ( this->fields.isApNotice )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A48 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A48 = 1;
  }
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    sub_1B64324(0LL);
  if ( this->fields.isGameNotice )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v5, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v5; // x8

  if ( (byte_49F7A47 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_49F7A47 = 1;
  }
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    sub_1B64324(0LL);
  if ( this->fields.isRpNotice )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v5, 0LL);
}