void AgeVerificationMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct AgeVerificationMenu_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct AgeVerificationMenu_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x19
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  struct AgeVerificationMenu_StaticFields *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7

  if ( (byte_5936518 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_2024/*"AGE_VEIFICATION_TYPE3"*/);
    sub_21FFC50(&StringLiteral_2020/*"AGE_VEIFICATION_NONE"*/);
    sub_21FFC50(&StringLiteral_2285/*"AgeVerificationType"*/);
    sub_21FFC50(&StringLiteral_2284/*"AgeVerificationExpirationDate"*/);
    sub_21FFC50(&StringLiteral_2022/*"AGE_VEIFICATION_TYPE1"*/);
    sub_21FFC50(&StringLiteral_2023/*"AGE_VEIFICATION_TYPE2"*/);
    sub_21FFC50(&StringLiteral_2283/*"AgeVerificationCumulativeAmount"*/);
    byte_5936518 = 1;
  }
  v7 = StringLiteral_2285/*"AgeVerificationType"*/;
  AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_TYPE = (struct System_String_o *)StringLiteral_2285/*"AgeVerificationType"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AgeVerificationMenu_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_2284/*"AgeVerificationExpirationDate"*/;
  static_fields = AgeVerificationMenu_TypeInfo->static_fields;
  static_fields->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_2284/*"AgeVerificationExpirationDate"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_EXPIRATION_DATE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_2283/*"AgeVerificationCumulativeAmount"*/;
  v17 = AgeVerificationMenu_TypeInfo->static_fields;
  v17->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_2283/*"AgeVerificationCumulativeAmount"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->SAVE_KEY_CUMULATIVE_AMOUNT, v16, v18, v19, v20, v21, v22, v23);
  v24 = sub_21FFD10(string___TypeInfo, 4);
  if ( !v24 )
    sub_21FFECC(0, v25);
  v32 = v24;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_9;
  v33 = StringLiteral_2020/*"AGE_VEIFICATION_NONE"*/;
  *(_QWORD *)(v24 + 32) = StringLiteral_2020/*"AGE_VEIFICATION_NONE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 32), v33, v26, v27, v28, v29, v30, v31);
  if ( (*(_DWORD *)(v32 + 24) & 0xFFFFFFFE) == 0
    || (v40 = StringLiteral_2022/*"AGE_VEIFICATION_TYPE1"*/,
        *(_QWORD *)(v32 + 40) = StringLiteral_2022/*"AGE_VEIFICATION_TYPE1"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 40), v40, v34, v35, v36, v37, v38, v39),
        *(_DWORD *)(v32 + 24) <= 2u)
    || (v47 = StringLiteral_2023/*"AGE_VEIFICATION_TYPE2"*/,
        *(_QWORD *)(v32 + 48) = StringLiteral_2023/*"AGE_VEIFICATION_TYPE2"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 48), v47, v41, v42, v43, v44, v45, v46),
        (*(_DWORD *)(v32 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_9:
    sub_21FFED4(v24);
  }
  v54 = StringLiteral_2024/*"AGE_VEIFICATION_TYPE3"*/;
  *(_QWORD *)(v32 + 56) = StringLiteral_2024/*"AGE_VEIFICATION_TYPE3"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 56), v54, v48, v49, v50, v51, v52, v53);
  v55 = AgeVerificationMenu_TypeInfo->static_fields;
  v55->typeTextList = (struct System_String_array *)v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v55->typeTextList, v32, v56, v57, v58, v59, v60, v61);
}


void AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5936517 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5936517 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct AgeVerificationMenu_CallbackFunc_o *v9; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_45479040(this, 0, v2);
}


void AgeVerificationMenu__Close_45479040(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_593650F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AgeVerificationMenu_EndClose__);
    byte_593650F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 5;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  AgeVerificationMenu_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t NextMonthTime; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  AgeVerificationMenu_c *v11; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v13; // x0
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936507 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5936507 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  v14 = 0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = AgeVerificationMenu_TypeInfo;
    if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, method, v2);
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v5) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
      NextMonthTime = NetworkManager__getNextMonthTime(0);
      v11 = AgeVerificationMenu_TypeInfo;
      v14 = NextMonthTime;
      if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v9, v10);
        v11 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY_TYPE, type, 0);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v13 = System_Int64__ToString((int64_t)&v14, 0);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v13, 0);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


void AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  AgeVerificationMenu_c *v13; // x8
  System_String_o *v14; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  CommonConfirmDialog_ClickDelegate_o *v21; // x25
  __int64 v22; // x2

  if ( (byte_5936510 & 1) == 0 )
  {
    sub_21FFC50(&Method_AgeVerificationMenu_OnEndConfirm__);
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_2018/*"AGE_VEIFICATION_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_2017/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_2015/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_2016/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/);
    byte_5936510 = 1;
  }
  v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  this->fields.selectType = type;
  this->fields.state = 3;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2018/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2017/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0);
  v13 = AgeVerificationMenu_TypeInfo;
  v14 = v10;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v11, v12);
    v13 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v13->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_13;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= LODWORD(typeTextList->max_length) )
    sub_21FFED4(v10);
  v17 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0);
  v18 = System_String__Format(v14, v17, 0);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2015/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0);
  v21 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v21, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0);
  v10 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v22);
  if ( !Instance )
LABEL_13:
    sub_21FFECC(v10, v11);
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)Instance,
    v9,
    v18,
    v19,
    v20,
    v21,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0);
}


void AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_5936508 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_5936508 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v3->static_fields->SAVE_KEY_TYPE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE, 0);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0);
}


void AgeVerificationMenu__EndClose(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_5936509 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_5936509 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0);
}


int32_t AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_593650B & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_593650B = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0);
}


int32_t AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AgeVerificationMenu_c *v3; // x0
  unsigned int AgeType; // w0

  if ( (byte_593650A & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_593650A = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v3);
  if ( AgeType > 2 )
    return -1;
  else
    return dword_ED0960[AgeType];
}


void AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_593650D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593650D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type1Label) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type2Label) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.type3Label) == 0) )
  {
LABEL_9:
    sub_21FFECC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_DateTime_o v8; // x0
  System_DateTime_o v9; // x1
  System_DateTime_o v10; // x2
  AgeVerificationMenu_c *v11; // x8
  System_String_o *String; // x0
  int64_t v13; // x0
  System_DateTime_o v14; // x1
  System_DateTime_o v15; // x2
  System_DateTime_o v16; // x0
  int32_t Year; // w19
  System_DateTime_o v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_DateTime_o v21; // x0
  int32_t v22; // w19
  System_DateTime_o v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_DateTime_o v26; // x0
  int32_t Month; // w19
  System_DateTime_o v28; // x0
  uint64_t v30; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_5936505 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5936505 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  dateData = 0;
  v30 = 0;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    goto LABEL_6;
  v5 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_TYPE, 0, 0);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_6;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    v8.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    v11 = AgeVerificationMenu_TypeInfo;
    dateData = v8.fields._dateData;
    if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v9.fields._dateData, v10.fields._dateData);
      v11 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v11->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_1198/*"0"*/,
               0);
    v13 = System_Int64__Parse(String, 0);
    v30 = NetworkManager__getDateTime_48311376(v13, 0).fields._dateData;
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v14.fields._dateData, v15.fields._dateData);
    v16.fields._dateData = (uint64_t)&v30;
    Year = System_DateTime__get_Year(v16, 0);
    v18.fields._dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v18, 0) )
    {
LABEL_6:
      LOBYTE(Int) = 1;
      return Int;
    }
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v19, v20);
    v21.fields._dateData = (uint64_t)&v30;
    v22 = System_DateTime__get_Year(v21, 0);
    v23.fields._dateData = (uint64_t)&dateData;
    if ( v22 == System_DateTime__get_Year(v23, 0) )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v24, v25);
      v26.fields._dateData = (uint64_t)&v30;
      Month = System_DateTime__get_Month(v26, 0);
      v28.fields._dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v28, 0);
    }
    else
    {
      LOBYTE(Int) = 0;
    }
  }
  return Int;
}


bool AgeVerificationMenu__IsConcentFirst(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ManagerConfig_c *v3; // x0
  AgeVerificationMenu_c *v5; // x0

  if ( (byte_5936506 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_5936506 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1, v2);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v1, v2);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_TYPE, 0, 0) == 0;
}


void AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5936515 & 1) == 0 )
  {
    sub_21FFC50(&Method_AgeVerificationMenu_OnClickCancel__);
    byte_5936515 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_AgeVerificationMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5936512 & 1) == 0 )
  {
    sub_21FFC50(&Method_AgeVerificationMenu_OnClickType1__);
    byte_5936512 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType1__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_AgeVerificationMenu_OnClickType1__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5936513 & 1) == 0 )
  {
    sub_21FFC50(&Method_AgeVerificationMenu_OnClickType2__);
    byte_5936513 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType2__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_AgeVerificationMenu_OnClickType2__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5936514 & 1) == 0 )
  {
    sub_21FFC50(&Method_AgeVerificationMenu_OnClickType3__);
    byte_5936514 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AgeVerificationMenu_OnClickType3__;
    if ( (*((_BYTE *)Method_AgeVerificationMenu_OnClickType3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_AgeVerificationMenu_OnClickType3__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    AgeVerificationMenu__ConfirmType(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t selectType; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_5936511 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5936511 = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, result, method);
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
      AgeVerificationMenu__Callback(this, this->fields.selectType, v8);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v7);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  this->fields.state = 2;
}


void AgeVerificationMenu__Open(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  __int64 v17; // x2
  UILabel_o *type1Label; // x20
  __int64 v19; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v22; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v24; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_593650E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AgeVerificationMenu_EndOpen__);
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2021/*"AGE_VEIFICATION_TITLE"*/);
    sub_21FFC50(&StringLiteral_2019/*"AGE_VEIFICATION_MESSAGE"*/);
    byte_593650E = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    *((_DWORD *)p_callbackFunc - 2) = 0;
  }
  else if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      titleLabel = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"AGE_VEIFICATION_TITLE"*/, 0);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2019/*"AGE_VEIFICATION_MESSAGE"*/, 0);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, v12, v17);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v19 = *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 24);
          if ( v19 )
          {
            if ( (*(_DWORD *)(v19 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_25;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v19 + 40), 0);
            if ( !type1Label )
              goto LABEL_24;
            UILabel__set_text(type1Label, (System_String_o *)gameObject, 0);
            typeTextList = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !typeTextList )
              goto LABEL_24;
            if ( LODWORD(typeTextList->max_length) <= 2 )
              goto LABEL_25;
            type2Label = this->fields.type2Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(typeTextList->m_Items[2], 0);
            if ( !type2Label )
              goto LABEL_24;
            UILabel__set_text(type2Label, (System_String_o *)gameObject, 0);
            v22 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v22 )
              goto LABEL_24;
            if ( (v22->max_length & 0xFFFFFFFC) == 0 )
LABEL_25:
              sub_21FFED4(gameObject);
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v22->m_Items[3], 0);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0);
              this->fields.state = 1;
              v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(v24, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_21FFECC(gameObject, v12);
  }
}


void AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  AgeVerificationMenu_c *v4; // x0

  if ( (byte_593650C & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_TypeInfo);
    byte_593650C = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( !*(&AgeVerificationMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo, method, v2);
    v4 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0);
}


void AgeVerificationMenu__add_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  AgeVerificationMenu_o *v13; // x0
  AgeVerificationMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5936503 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_5936503 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AgeVerificationMenu_CallbackFunc_TypeInfo, v9, v10);
  AgeVerificationMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *AgeVerificationMenu__get_closeBtnPath(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_5936516 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_5936516 = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}


void AgeVerificationMenu__remove_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  const MethodInfo *v13; // x0

  if ( (byte_5936504 & 1) == 0 )
  {
    sub_21FFC50(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_5936504 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, AgeVerificationMenu_CallbackFunc_TypeInfo, v9, v10);
  AgeVerificationMenu__IsConcent(v13);
}


void AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF7934;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF78EC;
}


System_IAsyncResult_o *AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}