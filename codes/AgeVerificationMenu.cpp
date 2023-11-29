void __fastcall AgeVerificationMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v17; // x1
  struct AgeVerificationMenu_StaticFields *v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct AgeVerificationMenu_StaticFields *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x2
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x19
  __int64 v43; // x0
  System_Int32_array **v44; // x1
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct AgeVerificationMenu_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_40F7EB2 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1676, v9);
    sub_B16FFC(&StringLiteral_1672, v10);
    sub_B16FFC(&StringLiteral_1866, v11);
    sub_B16FFC(&StringLiteral_1865, v12);
    sub_B16FFC(&StringLiteral_1674, v13);
    sub_B16FFC(&StringLiteral_1675, v14);
    sub_B16FFC(&StringLiteral_1864, v15);
    byte_40F7EB2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AgeVerificationMenu_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_1866;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1866;
  sub_B16F98(static_fields, v17, v2, v3, v4, v5, v6, v7);
  v18 = AgeVerificationMenu_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_1865;
  v18->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_1865;
  sub_B16F98((BattleServantConfConponent_o *)&v18->SAVE_KEY_EXPIRATION_DATE, v19, v20, v21, v22, v23, v24, v25);
  v26 = AgeVerificationMenu_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_1864;
  v26->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_1864;
  sub_B16F98((BattleServantConfConponent_o *)&v26->SAVE_KEY_CUMULATIVE_AMOUNT, v27, v28, v29, v30, v31, v32, v33);
  v35 = sub_B17014(string___TypeInfo, 4LL, v34);
  if ( !v35 )
    sub_B170D4();
  v42 = (System_Int32_array **)v35;
  v43 = StringLiteral_1672;
  if ( StringLiteral_1672 )
  {
    v43 = sub_B170BC(StringLiteral_1672, *(_QWORD *)&(*v42)->m_Items[9]);
    if ( !v43 )
      goto LABEL_26;
    v44 = (System_Int32_array **)StringLiteral_1672;
  }
  else
  {
    v44 = 0LL;
  }
  if ( !*((_DWORD *)v42 + 6) )
    goto LABEL_25;
  v42[4] = (System_Int32_array *)v44;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 4), v44, v36, v37, v38, v39, v40, v41);
  v43 = StringLiteral_1674;
  if ( StringLiteral_1674 )
  {
    v43 = sub_B170BC(StringLiteral_1674, *(_QWORD *)&(*v42)->m_Items[9]);
    if ( !v43 )
      goto LABEL_26;
    v44 = (System_Int32_array **)StringLiteral_1674;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *((_DWORD *)v42 + 6) <= 1u )
    goto LABEL_25;
  v42[5] = (System_Int32_array *)v44;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 5), v44, v36, v45, v46, v47, v48, v49);
  v43 = StringLiteral_1675;
  if ( StringLiteral_1675 )
  {
    v43 = sub_B170BC(StringLiteral_1675, *(_QWORD *)&(*v42)->m_Items[9]);
    if ( !v43 )
      goto LABEL_26;
    v44 = (System_Int32_array **)StringLiteral_1675;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *((_DWORD *)v42 + 6) <= 2u )
    goto LABEL_25;
  v42[6] = (System_Int32_array *)v44;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 6), v44, v36, v50, v51, v52, v53, v54);
  v43 = StringLiteral_1676;
  if ( StringLiteral_1676 )
  {
    v43 = sub_B170BC(StringLiteral_1676, *(_QWORD *)&(*v42)->m_Items[9]);
    if ( v43 )
    {
      v44 = (System_Int32_array **)StringLiteral_1676;
      goto LABEL_23;
    }
LABEL_26:
    sub_B170F4(v43);
    sub_B170A0();
  }
  v44 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v42 + 6) <= 3u )
  {
LABEL_25:
    sub_B17100(v43, v44, v36);
    sub_B170A0();
  }
  v42[7] = (System_Int32_array *)v44;
  sub_B16F98((BattleServantConfConponent_o *)(v42 + 7), v44, v36, v55, v56, v57, v58, v59);
  v60 = AgeVerificationMenu_TypeInfo->static_fields;
  v60->typeTextList = (struct System_String_array *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v60->typeTextList, v42, v61, v62, v63, v64, v65, v66);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F7EB1 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F7EB1 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    AgeVerificationMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_21167708(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_21167708(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F7EA9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_AgeVerificationMenu_EndClose__, v10);
    byte_40F7EA9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  AgeVerificationMenu_c *v6; // x0
  int64_t NextMonthTime; // x0
  AgeVerificationMenu_c *v8; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v10; // x0
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7EA1 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, method);
    sub_B16FFC(&ManagerConfig_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    byte_40F7EA1 = 1;
  }
  v11 = 0LL;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v6 = AgeVerificationMenu_TypeInfo;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v6) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v8 = AgeVerificationMenu_TypeInfo;
      v11 = NextMonthTime;
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
        v8 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_TYPE, type, 0LL);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v10 = System_Int64__ToString((int64_t)&v11, 0LL);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v10, 0LL);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x22
  AgeVerificationMenu_c *v20; // x8
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  CommonConfirmDialog_ClickDelegate_o *v31; // x25

  if ( (byte_40F7EAA & 1) == 0 )
  {
    sub_B16FFC(&Method_AgeVerificationMenu_OnEndConfirm__, *(_QWORD *)&type);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v5);
    sub_B16FFC(&BalanceConfig_TypeInfo, v6);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_1670, v10);
    sub_B16FFC(&StringLiteral_1669, v11);
    sub_B16FFC(&StringLiteral_1667, v12);
    sub_B16FFC(&StringLiteral_1668, v13);
    byte_40F7EAA = 1;
  }
  this->fields.selectType = type;
  this->fields.state = 3;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1670, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1669, 0LL);
  v19 = v16;
  v20 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v20 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v20->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_16;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
  {
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  v23 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v24 = System_String__Format(v19, v23, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1668, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1667, 0LL);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v27,
                                                 v28,
                                                 v29,
                                                 v30);
  CommonConfirmDialog_ClickDelegate___ctor(v31, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_16:
    sub_B170D4();
  CommonUI__OpenConfirmDecideDlg(
    Instance,
    v15,
    v24,
    v25,
    v26,
    v31,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    0LL);
}


void __fastcall AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_40F7EA2 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    byte_40F7EA2 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v2->static_fields->SAVE_KEY_TYPE, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_40F7EA3 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    byte_40F7EA3 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_TYPE, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0

  if ( (byte_40F7EA5 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    byte_40F7EA5 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v2 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v2->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  __int64 v1; // x1
  AgeVerificationMenu_c *v2; // x0
  int32_t AgeType; // w0

  if ( (byte_40F7EA4 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    byte_40F7EA4 = 1;
  }
  v2 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v2);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_3133B04[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *type1Label; // x0
  UILabel_o *type2Label; // x0
  UILabel_o *type3Label; // x0

  if ( (byte_40F7EA7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F7EA7 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL),
        (type1Label = this->fields.type1Label) == 0LL)
    || (UILabel__set_text(type1Label, (System_String_o *)StringLiteral_1, 0LL),
        (type2Label = this->fields.type2Label) == 0LL)
    || (UILabel__set_text(type2Label, (System_String_o *)StringLiteral_1, 0LL),
        (type3Label = this->fields.type3Label) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(type3Label, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ManagerConfig_c *v5; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v7; // x0
  System_DateTime_o v8; // x0
  AgeVerificationMenu_c *v9; // x8
  System_String_o *String; // x0
  int64_t v11; // x0
  int32_t Year; // w19
  int32_t v13; // w19
  int32_t Month; // w19
  uint64_t v16; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8

  if ( (byte_40F7E9F & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    sub_B16FFC(&ManagerConfig_TypeInfo, v2);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_951, v4);
    byte_40F7E9F = 1;
  }
  dateData = 0LL;
  v16 = 0LL;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    goto LABEL_7;
  v7 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v7 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v7->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_7;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v8.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v9 = AgeVerificationMenu_TypeInfo;
    dateData = v8.fields.dateData;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v9 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v9->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_951,
               0LL);
    v11 = System_Int64__Parse(String, 0LL);
    v16 = NetworkManager__getDateTime_23685272(v11, 0LL).fields.dateData;
    v18.fields.dateData = (uint64_t)&v16;
    Year = System_DateTime__get_Year(v18, 0LL);
    v19.fields.dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v19, 0LL) )
    {
LABEL_7:
      LOBYTE(Int) = 1;
      return Int;
    }
    v20.fields.dateData = (uint64_t)&v16;
    v13 = System_DateTime__get_Year(v20, 0LL);
    v21.fields.dateData = (uint64_t)&dateData;
    if ( v13 == System_DateTime__get_Year(v21, 0LL) )
    {
      v22.fields.dateData = (uint64_t)&v16;
      Month = System_DateTime__get_Month(v22, 0LL);
      v23.fields.dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v23, 0LL);
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
  __int64 v1; // x1
  __int64 v2; // x1
  ManagerConfig_c *v3; // x0
  AgeVerificationMenu_c *v5; // x0

  if ( (byte_40F7EA0 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v1);
    sub_B16FFC(&ManagerConfig_TypeInfo, v2);
    byte_40F7EA0 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v5 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F7EAF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7EAF = 1;
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

  if ( (byte_40F7EAC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7EAC = 1;
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

  if ( (byte_40F7EAD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7EAD = 1;
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

  if ( (byte_40F7EAE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7EAE = 1;
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
  __int64 v5; // x1
  int32_t selectType; // w21
  CommonUI_o *Instance; // x0
  const MethodInfo *v8; // x2

  if ( (byte_40F7EAB & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F7EAB = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  System_String_o *v18; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *type1Label; // x20
  AgeVerificationMenu_c *v24; // x0
  struct System_String_array *typeTextList; // x8
  System_String_o *v26; // x0
  struct System_String_array *v27; // x8
  UILabel_o *type2Label; // x20
  System_String_o *v29; // x0
  struct System_String_array *v30; // x8
  UILabel_o *type3Label; // x20
  System_String_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_40F7EA8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_AgeVerificationMenu_EndOpen__, v10);
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1673, v13);
    sub_B16FFC(&StringLiteral_1671, v14);
    byte_40F7EA8 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B16F98(
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
    sub_B16F98(
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1673, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, v18, 0LL);
        messageLabel = this->fields.messageLabel;
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1671, 0LL);
        if ( messageLabel )
        {
          UILabel__set_text(messageLabel, v20, 0LL);
          type1Label = this->fields.type1Label;
          v24 = AgeVerificationMenu_TypeInfo;
          if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
            v24 = AgeVerificationMenu_TypeInfo;
          }
          typeTextList = v24->static_fields->typeTextList;
          if ( typeTextList )
          {
            if ( typeTextList->max_length <= 1 )
              goto LABEL_27;
            v26 = LocalizationManager__Get(typeTextList->m_Items[1], 0LL);
            if ( !type1Label )
              goto LABEL_26;
            UILabel__set_text(type1Label, v26, 0LL);
            v27 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v27 )
              goto LABEL_26;
            if ( v27->max_length <= 2 )
              goto LABEL_27;
            type2Label = this->fields.type2Label;
            v29 = LocalizationManager__Get(v27->m_Items[2], 0LL);
            if ( !type2Label )
              goto LABEL_26;
            UILabel__set_text(type2Label, v29, 0LL);
            v30 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v30 )
              goto LABEL_26;
            if ( v30->max_length <= 3 )
            {
LABEL_27:
              sub_B17100(v24, v21, v22);
              sub_B170A0();
            }
            type3Label = this->fields.type3Label;
            v32 = LocalizationManager__Get(v30->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, v32, 0LL);
              this->fields.state = 1;
              v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
              System_Action___ctor(v37, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  AgeVerificationMenu_c *v3; // x0

  if ( (byte_40F7EA6 & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_TypeInfo, method);
    byte_40F7EA6 = 1;
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

  if ( (byte_40F7E9D & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_40F7E9D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AgeVerificationMenu_o *)sub_B173C8(v8);
  AgeVerificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7EB0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15416, method);
    byte_40F7EB0 = 1;
  }
  return (System_String_o *)StringLiteral_15416;
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

  if ( (byte_40F7E9E & 1) == 0 )
  {
    sub_B16FFC(&AgeVerificationMenu_CallbackFunc_TypeInfo, value);
    byte_40F7E9E = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_B173C8(v8);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_40F910F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F910F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu_CallbackFunc__Invoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AgeVerificationMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  AgeVerificationMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  AgeVerificationMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (AgeVerificationMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}