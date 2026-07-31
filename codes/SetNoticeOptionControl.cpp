void SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isApNotice = 257;
  this->fields.isGameNotice = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *apNoticeTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *rpNoticeTitle; // x20
  UILabel_o *sysNoticeTitle; // x20
  UILabel_o *rpExplanationTxt; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_593348E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10056/*"OPTION_NOTICE_ELSE"*/);
    sub_21FFC50(&StringLiteral_10055/*"OPTION_NOTICE_AP"*/);
    sub_21FFC50(&StringLiteral_10058/*"OPTION_NOTICE_RP_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10057/*"OPTION_NOTICE_RP"*/);
    byte_593348E = 1;
  }
  apNoticeTitle = this->fields.apNoticeTitle;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10055/*"OPTION_NOTICE_AP"*/, 0);
  if ( !apNoticeTitle )
    goto LABEL_12;
  UILabel__set_text(apNoticeTitle, v5, 0);
  rpNoticeTitle = this->fields.rpNoticeTitle;
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10057/*"OPTION_NOTICE_RP"*/, 0);
  if ( !rpNoticeTitle
    || (UILabel__set_text(rpNoticeTitle, v5, 0),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10056/*"OPTION_NOTICE_ELSE"*/, 0),
        !sysNoticeTitle)
    || (UILabel__set_text(sysNoticeTitle, v5, 0),
        rpExplanationTxt = this->fields.rpExplanationTxt,
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10058/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0),
        !rpExplanationTxt) )
  {
LABEL_12:
    sub_21FFECC(v5, v6);
  }
  UILabel__set_text(rpExplanationTxt, v5, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v10, v11);
  this->fields.isApNotice = OptionManager__GetLocalNotiffication(0);
  this->fields.isRpNotice = OptionManager__GetRaidNotiffication(0);
  this->fields.isGameNotice = OptionManager__GetNotiffication(0);
  SetNoticeOptionControl__setApNoticeValue(this, v12);
  SetNoticeOptionControl__setRpNoticeValue(this, v13);
  SetNoticeOptionControl__setGameNoticeValue(this, v14);
}


void SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIButton_o *apNoticeBtn; // x0
  bool v7; // w20
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_5933493 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933493 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnApNoticeChangeBtn__;
  if ( !this->fields.isApNotice )
  {
    if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    apNoticeBtn = this->fields.apNoticeBtn;
    if ( apNoticeBtn )
    {
      v7 = 1;
      v8 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(apNoticeBtn, v5);
  }
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    goto LABEL_13;
  v7 = 0;
  v8 = &StringLiteral_18236/*"btn_off"*/;
LABEL_12:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v8, 0);
  this->fields.isApNotice = v7;
}


void SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIButton_o *sysNoticeBtn; // x0
  bool v7; // w20
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_5933495 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933495 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__;
  if ( !this->fields.isGameNotice )
  {
    if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    sysNoticeBtn = this->fields.sysNoticeBtn;
    if ( sysNoticeBtn )
    {
      v7 = 1;
      v8 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(sysNoticeBtn, v5);
  }
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    goto LABEL_13;
  v7 = 0;
  v8 = &StringLiteral_18236/*"btn_off"*/;
LABEL_12:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v8, 0);
  this->fields.isGameNotice = v7;
}


void SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIButton_o *rpNoticeBtn; // x0
  bool v7; // w20
  __int64 *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_5933494 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933494 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__;
  if ( !this->fields.isRpNotice )
  {
    if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    rpNoticeBtn = this->fields.rpNoticeBtn;
    if ( rpNoticeBtn )
    {
      v7 = 1;
      v8 = &StringLiteral_18237/*"btn_on"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(rpNoticeBtn, v5);
  }
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    goto LABEL_13;
  v7 = 0;
  v8 = &StringLiteral_18236/*"btn_off"*/;
LABEL_12:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v8, 0);
  this->fields.isRpNotice = v7;
}


void SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isApNotice; // w20

  if ( (byte_593348F & 1) == 0 )
  {
    sub_21FFC50(&OptionManager_TypeInfo);
    byte_593348F = 1;
  }
  isApNotice = this->fields.isApNotice;
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v2);
  OptionManager__SetLocalNotiffication(isApNotice, 0);
  OptionManager__SetRaidNotiffication(this->fields.isRpNotice, 0);
  OptionManager__SetNotiffication(this->fields.isGameNotice, 0, 0);
}


void SetNoticeOptionControl__setApNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *apNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_5933490 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933490 = 1;
  }
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !this->fields.isApNotice )
  {
    if ( apNoticeBtn )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(apNoticeBtn, method);
  }
  if ( !apNoticeBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v4, 0);
}


void SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_5933492 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933492 = 1;
  }
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !this->fields.isGameNotice )
  {
    if ( sysNoticeBtn )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(sysNoticeBtn, method);
  }
  if ( !sysNoticeBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v4, 0);
}


void SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_5933491 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5933491 = 1;
  }
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !this->fields.isRpNotice )
  {
    if ( rpNoticeBtn )
    {
      v4 = &StringLiteral_18236/*"btn_off"*/;
      goto LABEL_8;
    }
LABEL_9:
    sub_21FFECC(rpNoticeBtn, method);
  }
  if ( !rpNoticeBtn )
    goto LABEL_9;
  v4 = &StringLiteral_18237/*"btn_on"*/;
LABEL_8:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v4, 0);
}