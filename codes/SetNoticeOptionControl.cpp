void __fastcall SetNoticeOptionControl___ctor(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.isApNotice = 257;
  this->fields.isGameNotice = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetNoticeOptionControl__Init(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UILabel_o *apNoticeTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *rpNoticeTitle; // x20
  UILabel_o *sysNoticeTitle; // x20
  UILabel_o *rpExplanationTxt; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4BD789B & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9862/*"OPTION_NOTICE_ELSE"*/);
    sub_1C21E38(&StringLiteral_9861/*"OPTION_NOTICE_AP"*/);
    sub_1C21E38(&StringLiteral_9864/*"OPTION_NOTICE_RP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_9863/*"OPTION_NOTICE_RP"*/);
    byte_4BD789B = 1;
  }
  apNoticeTitle = this->fields.apNoticeTitle;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9861/*"OPTION_NOTICE_AP"*/, 0LL);
  if ( !apNoticeTitle )
    goto LABEL_12;
  UILabel__set_text(apNoticeTitle, v4, 0LL);
  rpNoticeTitle = this->fields.rpNoticeTitle;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9863/*"OPTION_NOTICE_RP"*/, 0LL);
  if ( !rpNoticeTitle
    || (UILabel__set_text(rpNoticeTitle, v4, 0LL),
        sysNoticeTitle = this->fields.sysNoticeTitle,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9862/*"OPTION_NOTICE_ELSE"*/, 0LL),
        !sysNoticeTitle)
    || (UILabel__set_text(sysNoticeTitle, v4, 0LL),
        rpExplanationTxt = this->fields.rpExplanationTxt,
        v4 = LocalizationManager__Get((System_String_o *)StringLiteral_9864/*"OPTION_NOTICE_RP_EXPLANATION"*/, 0LL),
        !rpExplanationTxt) )
  {
LABEL_12:
    sub_1C22094(v4, v5);
  }
  UILabel__set_text(rpExplanationTxt, v4, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isApNotice = OptionManager__GetLocalNotiffication(0LL);
  this->fields.isRpNotice = OptionManager__GetRaidNotiffication(0LL);
  this->fields.isGameNotice = OptionManager__GetNotiffication(0LL);
  SetNoticeOptionControl__setApNoticeValue(this, v9);
  SetNoticeOptionControl__setRpNoticeValue(this, v10);
  SetNoticeOptionControl__setGameNoticeValue(this, v11);
}


void __fastcall SetNoticeOptionControl__OnApNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isApNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIButton_o *apNoticeBtn; // x0
  __int64 *v8; // x8
  bool v9; // w20

  if ( (byte_4BD78A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD78A0 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnApNoticeChangeBtn__;
  isApNotice = this->fields.isApNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnApNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SetNoticeOptionControl_OnApNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  if ( !isApNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    apNoticeBtn = this->fields.apNoticeBtn;
    if ( apNoticeBtn )
    {
      v8 = &StringLiteral_17819/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C22094(apNoticeBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17818/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v8, 0LL);
  this->fields.isApNotice = v9;
}


void __fastcall SetNoticeOptionControl__OnGameNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isGameNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v8; // x8
  bool v9; // w20

  if ( (byte_4BD78A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD78A2 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__;
  isGameNotice = this->fields.isGameNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SetNoticeOptionControl_OnGameNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  if ( !isGameNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    sysNoticeBtn = this->fields.sysNoticeBtn;
    if ( sysNoticeBtn )
    {
      v8 = &StringLiteral_17819/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C22094(sysNoticeBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17818/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v8, 0LL);
  this->fields.isGameNotice = v9;
}


void __fastcall SetNoticeOptionControl__OnRpNoticeChangeBtn(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isRpNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v8; // x8
  bool v9; // w20

  if ( (byte_4BD78A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD78A1 = 1;
  }
  v3 = Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__;
  isRpNotice = this->fields.isRpNotice;
  if ( (*((_BYTE *)Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_SetNoticeOptionControl_OnRpNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  if ( !isRpNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    rpNoticeBtn = this->fields.rpNoticeBtn;
    if ( rpNoticeBtn )
    {
      v8 = &StringLiteral_17819/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C22094(rpNoticeBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17818/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v8, 0LL);
  this->fields.isRpNotice = v9;
}


void __fastcall SetNoticeOptionControl__Reflection(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  _BOOL4 isApNotice; // w20

  if ( (byte_4BD789C & 1) == 0 )
  {
    sub_1C21E38(&OptionManager_TypeInfo);
    byte_4BD789C = 1;
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
  UIButton_o *apNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4BD789D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD789D = 1;
  }
  apNoticeBtn = this->fields.apNoticeBtn;
  if ( !apNoticeBtn )
    sub_1C22094(0LL, method);
  if ( this->fields.isApNotice )
    v4 = &StringLiteral_17819/*"btn_on"*/;
  else
    v4 = &StringLiteral_17818/*"btn_off"*/;
  UIButton__set_normalSprite(apNoticeBtn, (System_String_o *)*v4, 0LL);
}


void __fastcall SetNoticeOptionControl__setGameNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *sysNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4BD789F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD789F = 1;
  }
  sysNoticeBtn = this->fields.sysNoticeBtn;
  if ( !sysNoticeBtn )
    sub_1C22094(0LL, method);
  if ( this->fields.isGameNotice )
    v4 = &StringLiteral_17819/*"btn_on"*/;
  else
    v4 = &StringLiteral_17818/*"btn_off"*/;
  UIButton__set_normalSprite(sysNoticeBtn, (System_String_o *)*v4, 0LL);
}


void __fastcall SetNoticeOptionControl__setRpNoticeValue(SetNoticeOptionControl_o *this, const MethodInfo *method)
{
  UIButton_o *rpNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4BD789E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BD789E = 1;
  }
  rpNoticeBtn = this->fields.rpNoticeBtn;
  if ( !rpNoticeBtn )
    sub_1C22094(0LL, method);
  if ( this->fields.isRpNotice )
    v4 = &StringLiteral_17819/*"btn_on"*/;
  else
    v4 = &StringLiteral_17818/*"btn_off"*/;
  UIButton__set_normalSprite(rpNoticeBtn, (System_String_o *)*v4, 0LL);
}