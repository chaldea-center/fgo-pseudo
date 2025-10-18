void SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isApNotice = 257;
  this->fields.isGameNotice = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *apNoticeTitle; // x20
  System_String_o *v4; // x0
  UILabel_o *rpNoticeTitle; // x20
  UILabel_o *sysNoticeTitle; // x20
  UILabel_o *rpExplanationTxt; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C3DFFA & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&StringLiteral_9671/*"OPTION_NOTICE_ELSE"*/);
    sub_1C37058(&StringLiteral_9670/*"OPTION_NOTICE_AP"*/);
    sub_1C37058(&StringLiteral_9673/*"OPTION_NOTICE_RP_EXPLANATION"*/);
    sub_1C37058(&StringLiteral_9672/*"OPTION_NOTICE_RP"*/);
    byte_4C3DFFA = 1;
  }
  apNoticeTitle = this->fields.apNoticeTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9670/*"OPTION_NOTICE_AP"*/, 0);
  if ( !apNoticeTitle )
    goto LABEL_12;
  UILabel__set_text(apNoticeTitle, v4, 0);
  rpNoticeTitle = this->fields.rpNoticeTitle;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9672/*"OPTION_NOTICE_RP"*/, 0);
  if ( !rpNoticeTitle
    || (UILabel__set_text(rpNoticeTitle, v4, 0),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9671/*"OPTION_NOTICE_ELSE"*/, 0),
        !sysNoticeTitle)
    || (UILabel__set_text(sysNoticeTitle, v4, 0),
        rpExplanationTxt = this->fields.rpExplanationTxt,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9673/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0),
        !rpExplanationTxt) )
  {
LABEL_12:
    sub_1C372B4(v4);
  }
  UILabel__set_text(rpExplanationTxt, v4, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isApNotice = OptionManager__GetLocalNotiffication(0);
  this->fields.isRpNotice = OptionManager__GetRaidNotiffication(0);
  this->fields.isGameNotice = OptionManager__GetNotiffication(0);
  SetNoticeOptionControl__setApNoticeValue(this, v8);
  SetNoticeOptionControl__setRpNoticeValue(this, v9);
  SetNoticeOptionControl__setGameNoticeValue(this, v10);
}


void SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isApNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UIButton_o *apNoticeBtn; // x0
  __int64 *v7; // x8
  bool v8; // w20

  if ( (byte_4C3DFFF & 1) == 0 )
  {
    sub_1C37058(&Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3DFFF = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnApNoticeChangeBtn__;
  isApNotice = this->fields.isApNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( !isApNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    apNoticeBtn = this->fields.apNoticeBtn;
    if ( apNoticeBtn )
    {
      v7 = &StringLiteral_17507/*"btn_on"*/;
      v8 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(apNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    goto LABEL_11;
  v7 = &StringLiteral_17506/*"btn_off"*/;
  v8 = 0;
LABEL_10:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v7, 0);
  this->fields.isApNotice = v8;
}


void SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isGameNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v7; // x8
  bool v8; // w20

  if ( (byte_4C3E001 & 1) == 0 )
  {
    sub_1C37058(&Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3E001 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__;
  isGameNotice = this->fields.isGameNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( !isGameNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    sysNoticeBtn = this->fields.sysNoticeBtn;
    if ( sysNoticeBtn )
    {
      v7 = &StringLiteral_17507/*"btn_on"*/;
      v8 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(sysNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    goto LABEL_11;
  v7 = &StringLiteral_17506/*"btn_off"*/;
  v8 = 0;
LABEL_10:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v7, 0);
  this->fields.isGameNotice = v8;
}


void SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isRpNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v7; // x8
  bool v8; // w20

  if ( (byte_4C3E000 & 1) == 0 )
  {
    sub_1C37058(&Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3E000 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__;
  isRpNotice = this->fields.isRpNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( !isRpNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    rpNoticeBtn = this->fields.rpNoticeBtn;
    if ( rpNoticeBtn )
    {
      v7 = &StringLiteral_17507/*"btn_on"*/;
      v8 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(rpNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    goto LABEL_11;
  v7 = &StringLiteral_17506/*"btn_off"*/;
  v8 = 0;
LABEL_10:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v7, 0);
  this->fields.isRpNotice = v8;
}


void SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isApNotice; // w20

  if ( (byte_4C3DFFB & 1) == 0 )
  {
    sub_1C37058(&OptionManager_TypeInfo);
    byte_4C3DFFB = 1;
  }
  isApNotice = this->fields.isApNotice;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetLocalNotiffication(isApNotice, 0);
  OptionManager__SetRaidNotiffication(this->fields.isRpNotice, 0);
  OptionManager__SetNotiffication(this->fields.isGameNotice, 0, 0);
}


void SetNoticeOptionControl__setApNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *apNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C3DFFC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3DFFC = 1;
  }
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    sub_1C372B4(0);
  if ( this->fields.isApNotice )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v4, 0);
}


void SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C3DFFE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3DFFE = 1;
  }
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    sub_1C372B4(0);
  if ( this->fields.isGameNotice )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v4, 0);
}


void SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C3DFFD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3DFFD = 1;
  }
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    sub_1C372B4(0);
  if ( this->fields.isRpNotice )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v4, 0);
}