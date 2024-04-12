void __fastcall AgeVerificationMenu___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct AgeVerificationMenu_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct AgeVerificationMenu_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x19
  __int64 v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  struct AgeVerificationMenu_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x0

  if ( (byte_42ADFA2 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1694/*"AGE_VEIFICATION_TYPE3"*/);
    sub_B52984(&StringLiteral_1690/*"AGE_VEIFICATION_NONE"*/);
    sub_B52984(&StringLiteral_1894/*"AgeVerificationType"*/);
    sub_B52984(&StringLiteral_1893/*"AgeVerificationExpirationDate"*/);
    sub_B52984(&StringLiteral_1692/*"AGE_VEIFICATION_TYPE1"*/);
    sub_B52984(&StringLiteral_1693/*"AGE_VEIFICATION_TYPE2"*/);
    sub_B52984(&StringLiteral_1892/*"AgeVerificationCumulativeAmount"*/);
    byte_42ADFA2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AgeVerificationMenu_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_1894/*"AgeVerificationType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1894/*"AgeVerificationType"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = AgeVerificationMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1893/*"AgeVerificationExpirationDate"*/;
  v9->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_1893/*"AgeVerificationExpirationDate"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->SAVE_KEY_EXPIRATION_DATE, v10, v11, v12, v13, v14, v15, v16);
  v17 = AgeVerificationMenu_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_1892/*"AgeVerificationCumulativeAmount"*/;
  v17->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_1892/*"AgeVerificationCumulativeAmount"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->SAVE_KEY_CUMULATIVE_AMOUNT, v18, v19, v20, v21, v22, v23, v24);
  v25 = sub_B5299C(string___TypeInfo, 4LL);
  if ( !v25 )
    sub_B52A5C(0LL, v26);
  v33 = (System_Int32_array **)v25;
  v34 = StringLiteral_1690/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1690/*"AGE_VEIFICATION_NONE"*/ )
  {
    v34 = sub_B52A44(StringLiteral_1690/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v33)->m_Items[9]);
    if ( !v34 )
      goto LABEL_26;
    v35 = (System_Int32_array **)StringLiteral_1690/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !*((_DWORD *)v33 + 6) )
    goto LABEL_25;
  v33[4] = (System_Int32_array *)v35;
  sub_B52920((BattleServantConfConponent_o *)(v33 + 4), v35, v27, v28, v29, v30, v31, v32);
  v34 = StringLiteral_1692/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1692/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v34 = sub_B52A44(StringLiteral_1692/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v33)->m_Items[9]);
    if ( !v34 )
      goto LABEL_26;
    v42 = (System_Int32_array **)StringLiteral_1692/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( *((_DWORD *)v33 + 6) <= 1u )
    goto LABEL_25;
  v33[5] = (System_Int32_array *)v42;
  sub_B52920((BattleServantConfConponent_o *)(v33 + 5), v42, v36, v37, v38, v39, v40, v41);
  v34 = StringLiteral_1693/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1693/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v34 = sub_B52A44(StringLiteral_1693/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v33)->m_Items[9]);
    if ( !v34 )
      goto LABEL_26;
    v49 = (System_Int32_array **)StringLiteral_1693/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( *((_DWORD *)v33 + 6) <= 2u )
    goto LABEL_25;
  v33[6] = (System_Int32_array *)v49;
  sub_B52920((BattleServantConfConponent_o *)(v33 + 6), v49, v43, v44, v45, v46, v47, v48);
  v34 = StringLiteral_1694/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1694/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v34 = sub_B52A44(StringLiteral_1694/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v33)->m_Items[9]);
    if ( v34 )
    {
      v56 = (System_Int32_array **)StringLiteral_1694/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v65 = sub_B52A7C();
    sub_B52A28(v65, 0LL);
  }
  v56 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v33 + 6) <= 3u )
  {
LABEL_25:
    v64 = sub_B52A88(v34);
    sub_B52A28(v64, 0LL);
  }
  v33[7] = (System_Int32_array *)v56;
  sub_B52920((BattleServantConfConponent_o *)(v33 + 7), v56, v50, v51, v52, v53, v54, v55);
  v57 = AgeVerificationMenu_TypeInfo->static_fields;
  v57->typeTextList = (struct System_String_array *)v33;
  sub_B52920((BattleServantConfConponent_o *)&v57->typeTextList, v33, v58, v59, v60, v61, v62, v63);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42ADFA1 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42ADFA1 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AgeVerificationMenu__Callback(AgeVerificationMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  AgeVerificationMenu_CallbackFunc_o *v9; // x20
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    AgeVerificationMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_21252228(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_21252228(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42ADF99 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AgeVerificationMenu_EndClose__);
    byte_42ADF99 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  AgeVerificationMenu_c *v4; // x0
  int64_t NextMonthTime; // x0
  AgeVerificationMenu_c *v6; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v8; // x0
  int64_t v9; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ADF91 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42ADF91 = 1;
  }
  v9 = 0LL;
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = AgeVerificationMenu_TypeInfo;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v4) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v6 = AgeVerificationMenu_TypeInfo;
      v9 = NextMonthTime;
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
        v6 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v6->static_fields->SAVE_KEY_TYPE, type, 0LL);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v8 = System_Int64__ToString((int64_t)&v9, 0LL);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v8, 0LL);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


void __fastcall AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x22
  AgeVerificationMenu_c *v10; // x8
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x23
  System_String_o *v16; // x24
  CommonConfirmDialog_ClickDelegate_o *v17; // x25
  __int64 v18; // x0

  if ( (byte_42ADF9A & 1) == 0 )
  {
    sub_B52984(&Method_AgeVerificationMenu_OnEndConfirm__);
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_1688/*"AGE_VEIFICATION_CONFIRM_TITLE"*/);
    sub_B52984(&StringLiteral_1687/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/);
    sub_B52984(&StringLiteral_1685/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_1686/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/);
    byte_42ADF9A = 1;
  }
  this->fields.selectType = type;
  this->fields.state = 3;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1688/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1687/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0LL);
  v9 = v7;
  v10 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v10 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v10->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_16;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
  {
    v18 = sub_B52A88(v7);
    sub_B52A28(v18, 0LL);
  }
  v13 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v14 = System_String__Format(v9, v13, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1686/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1685/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0LL);
  v17 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v17, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  v7 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_16:
    sub_B52A5C(v7, v8);
  CommonUI__OpenConfirmDecideDlg(
    Instance,
    v6,
    v14,
    v15,
    v16,
    v17,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0LL);
}


void __fastcall AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_42ADF92 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    byte_42ADF92 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVE_KEY_TYPE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0LL);
}


void __fastcall AgeVerificationMenu__EndClose(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AgeVerificationMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_42ADF93 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    byte_42ADF93 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_TYPE, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0

  if ( (byte_42ADF95 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    byte_42ADF95 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v1 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v1->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  AgeVerificationMenu_c *v1; // x0
  int32_t AgeType; // w0

  if ( (byte_42ADF94 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    byte_42ADF94 = 1;
  }
  v1 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v1);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_3279B50[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_42ADF97 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADF97 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type1Label) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type2Label) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.type3Label) == 0LL) )
  {
LABEL_9:
    sub_B52A5C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v3; // x0
  System_DateTime_o v4; // x0
  AgeVerificationMenu_c *v5; // x8
  System_String_o *String; // x0
  int64_t v7; // x0
  int32_t Year; // w19
  int32_t v9; // w19
  int32_t Month; // w19
  uint64_t v12; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_42ADF8F & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42ADF8F = 1;
  }
  dateData = 0LL;
  v12 = 0LL;
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    goto LABEL_7;
  v3 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_7;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v4.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v5 = AgeVerificationMenu_TypeInfo;
    dateData = v4.fields.dateData;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v5 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v5->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_969/*"0"*/,
               0LL);
    v7 = System_Int64__Parse(String, 0LL);
    v12 = NetworkManager__getDateTime_25741912(v7, 0LL).fields.dateData;
    v14.fields.dateData = (uint64_t)&v12;
    Year = System_DateTime__get_Year(v14, 0LL);
    v15.fields.dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v15, 0LL) )
    {
LABEL_7:
      LOBYTE(Int) = 1;
      return Int;
    }
    v16.fields.dateData = (uint64_t)&v12;
    v9 = System_DateTime__get_Year(v16, 0LL);
    v17.fields.dateData = (uint64_t)&dateData;
    if ( v9 == System_DateTime__get_Year(v17, 0LL) )
    {
      v18.fields.dateData = (uint64_t)&v12;
      Month = System_DateTime__get_Month(v18, 0LL);
      v19.fields.dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v19, 0LL);
    }
    else
    {
      LOBYTE(Int) = 0;
    }
  }
  return Int;
}


bool __fastcall AgeVerificationMenu__IsConcentFirst(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_42ADF90 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42ADF90 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42ADF9F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADF9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    AgeVerificationMenu__Callback(this, -1, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42ADF9C & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADF9C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 1, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42ADF9D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADF9D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 2, v3);
  }
}


void __fastcall AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42ADF9E & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ADF9E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AgeVerificationMenu__ConfirmType(this, 3, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t selectType; // w21
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_42ADF9B & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ADF9B = 1;
  }
  if ( result )
  {
    selectType = this->fields.selectType;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    AgeVerificationMenu__Concent(selectType, (const MethodInfo *)result);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v7);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( result )
    AgeVerificationMenu__Callback(this, this->fields.selectType, v8);
  else
    this->fields.state = 2;
}


void __fastcall AgeVerificationMenu__Open(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v16; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v19; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v21; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19
  __int64 v23; // x0

  if ( (byte_42ADF98 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_AgeVerificationMenu_EndOpen__);
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1691/*"AGE_VEIFICATION_TITLE"*/);
    sub_B52984(&StringLiteral_1689/*"AGE_VEIFICATION_MESSAGE"*/);
    byte_42ADF98 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)p_callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"AGE_VEIFICATION_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1689/*"AGE_VEIFICATION_MESSAGE"*/, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
          type1Label = this->fields.type1Label;
          gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)AgeVerificationMenu_TypeInfo;
          }
          v16 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 24LL);
          if ( v16 )
          {
            if ( *(_DWORD *)(v16 + 24) <= 1u )
              goto LABEL_27;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v16 + 40), 0LL);
            if ( !type1Label )
              goto LABEL_26;
            UILabel__set_text(type1Label, (System_String_o *)gameObject, 0LL);
            typeTextList = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !typeTextList )
              goto LABEL_26;
            if ( typeTextList->max_length <= 2 )
              goto LABEL_27;
            type2Label = this->fields.type2Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(typeTextList->m_Items[2], 0LL);
            if ( !type2Label )
              goto LABEL_26;
            UILabel__set_text(type2Label, (System_String_o *)gameObject, 0LL);
            v19 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v19 )
              goto LABEL_26;
            if ( v19->max_length <= 3 )
            {
LABEL_27:
              v23 = sub_B52A88(gameObject);
              sub_B52A28(v23, 0LL);
            }
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0LL);
              this->fields.state = 1;
              v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(v21, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_B52A5C(gameObject, v12);
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_42ADF96 & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_TypeInfo);
    byte_42ADF96 = 1;
  }
  v3 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v3 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0LL);
}


void __fastcall AgeVerificationMenu__add_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AgeVerificationMenu_o *v11; // x0
  AgeVerificationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42ADF8D & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_42ADF8D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AgeVerificationMenu_o *)sub_B52D50(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ADFA0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15584/*"Window/CloseButton"*/);
    byte_42ADFA0 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/CloseButton"*/;
}


void __fastcall AgeVerificationMenu__remove_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42ADF8E & 1) == 0 )
  {
    sub_B52984(&AgeVerificationMenu_CallbackFunc_TypeInfo);
    byte_42ADF8E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v8->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B52D50(v8);
  AgeVerificationMenu__IsConcent(v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc___ctor(
        AgeVerificationMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall AgeVerificationMenu_CallbackFunc__BeginInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42AEBED & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AEBED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  AgeVerificationMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  AgeVerificationMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  AgeVerificationMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (AgeVerificationMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}