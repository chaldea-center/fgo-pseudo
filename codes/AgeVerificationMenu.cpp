void __fastcall AgeVerificationMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v33; // x1
  struct AgeVerificationMenu_StaticFields *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct AgeVerificationMenu_StaticFields *v42; // x0
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x19
  __int64 v59; // x0
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  struct AgeVerificationMenu_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x0
  __int64 v90; // x0

  if ( (byte_42E682E & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1899/*"AgeVerificationType"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1898/*"AgeVerificationExpirationDate"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1897/*"AgeVerificationCumulativeAmount"*/, v29, v30, v31);
    byte_42E682E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)AgeVerificationMenu_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_1899/*"AgeVerificationType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_1899/*"AgeVerificationType"*/;
  sub_B5D560(static_fields, v33, v2, v3, v4, v5, v6, v7);
  v34 = AgeVerificationMenu_TypeInfo->static_fields;
  v35 = (System_Int32_array **)StringLiteral_1898/*"AgeVerificationExpirationDate"*/;
  v34->SAVE_KEY_EXPIRATION_DATE = (struct System_String_o *)StringLiteral_1898/*"AgeVerificationExpirationDate"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v34->SAVE_KEY_EXPIRATION_DATE, v35, v36, v37, v38, v39, v40, v41);
  v42 = AgeVerificationMenu_TypeInfo->static_fields;
  v43 = (System_Int32_array **)StringLiteral_1897/*"AgeVerificationCumulativeAmount"*/;
  v42->SAVE_KEY_CUMULATIVE_AMOUNT = (struct System_String_o *)StringLiteral_1897/*"AgeVerificationCumulativeAmount"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v42->SAVE_KEY_CUMULATIVE_AMOUNT, v43, v44, v45, v46, v47, v48, v49);
  v50 = sub_B5D5DC(string___TypeInfo, 4LL);
  if ( !v50 )
    sub_B5D69C(0LL, v51);
  v58 = (System_Int32_array **)v50;
  v59 = StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/;
  if ( StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/ )
  {
    v59 = sub_B5D684(StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( !v59 )
      goto LABEL_26;
    v60 = (System_Int32_array **)StringLiteral_1695/*"AGE_VEIFICATION_NONE"*/;
  }
  else
  {
    v60 = 0LL;
  }
  if ( !*((_DWORD *)v58 + 6) )
    goto LABEL_25;
  v58[4] = (System_Int32_array *)v60;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 4), v60, v52, v53, v54, v55, v56, v57);
  v59 = StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/;
  if ( StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/ )
  {
    v59 = sub_B5D684(StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( !v59 )
      goto LABEL_26;
    v67 = (System_Int32_array **)StringLiteral_1697/*"AGE_VEIFICATION_TYPE1"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( *((_DWORD *)v58 + 6) <= 1u )
    goto LABEL_25;
  v58[5] = (System_Int32_array *)v67;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 5), v67, v61, v62, v63, v64, v65, v66);
  v59 = StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/;
  if ( StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/ )
  {
    v59 = sub_B5D684(StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( !v59 )
      goto LABEL_26;
    v74 = (System_Int32_array **)StringLiteral_1698/*"AGE_VEIFICATION_TYPE2"*/;
  }
  else
  {
    v74 = 0LL;
  }
  if ( *((_DWORD *)v58 + 6) <= 2u )
    goto LABEL_25;
  v58[6] = (System_Int32_array *)v74;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 6), v74, v68, v69, v70, v71, v72, v73);
  v59 = StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/;
  if ( StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/ )
  {
    v59 = sub_B5D684(StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/, *(_QWORD *)&(*v58)->m_Items[9]);
    if ( v59 )
    {
      v81 = (System_Int32_array **)StringLiteral_1699/*"AGE_VEIFICATION_TYPE3"*/;
      goto LABEL_23;
    }
LABEL_26:
    v90 = sub_B5D6BC();
    sub_B5D668(v90, 0LL);
  }
  v81 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v58 + 6) <= 3u )
  {
LABEL_25:
    v89 = sub_B5D6C8(v59);
    sub_B5D668(v89, 0LL);
  }
  v58[7] = (System_Int32_array *)v81;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 7), v81, v75, v76, v77, v78, v79, v80);
  v82 = AgeVerificationMenu_TypeInfo->static_fields;
  v82->typeTextList = (struct System_String_array *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v82->typeTextList, v58, v83, v84, v85, v86, v87, v88);
}


void __fastcall AgeVerificationMenu___ctor(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E682D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E682D = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    AgeVerificationMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall AgeVerificationMenu__Close(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AgeVerificationMenu__Close_21294492(this, 0LL, v2);
}


void __fastcall AgeVerificationMenu__Close_21294492(
        AgeVerificationMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E6825 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AgeVerificationMenu_EndClose__, v10, v11, v12);
    byte_42E6825 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_AgeVerificationMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall AgeVerificationMenu__Concent(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ManagerConfig_c *v11; // x0
  AgeVerificationMenu_c *v12; // x0
  int64_t NextMonthTime; // x0
  AgeVerificationMenu_c *v14; // x8
  System_String_o *SAVE_KEY_EXPIRATION_DATE; // x19
  System_String_o *v16; // x0
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E681D & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E681D = 1;
  }
  v17 = 0LL;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( !v11->static_fields->UseMock )
  {
    v12 = AgeVerificationMenu_TypeInfo;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    }
    if ( !AgeVerificationMenu__IsConcent((const MethodInfo *)v12) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      NextMonthTime = NetworkManager__getNextMonthTime(0LL);
      v14 = AgeVerificationMenu_TypeInfo;
      v17 = NextMonthTime;
      if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
        v14 = AgeVerificationMenu_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetInt(v14->static_fields->SAVE_KEY_TYPE, type, 0LL);
      SAVE_KEY_EXPIRATION_DATE = AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_EXPIRATION_DATE;
      v16 = System_Int64__ToString((int64_t)&v17, 0LL);
      UnityEngine_PlayerPrefs__SetString(SAVE_KEY_EXPIRATION_DATE, v16, 0LL);
      UnityEngine_PlayerPrefs__SetInt(AgeVerificationMenu_TypeInfo->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


void __fastcall AgeVerificationMenu__ConfirmType(AgeVerificationMenu_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  CommonUI_o *Instance; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x22
  struct System_String_array *typeTextList; // x8
  __int64 selectType; // x9
  Il2CppObject *v40; // x0
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  System_String_o *v43; // x24
  CommonConfirmDialog_ClickDelegate_o *v44; // x25
  __int64 v45; // x0
  AgeVerificationMenu_c *v46; // x8

  if ( (byte_42E6826 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AgeVerificationMenu_OnEndConfirm__, type, (_DWORD)method, v3);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1693/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1692/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_1690/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1691/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, v30, v31, v32);
    byte_42E6826 = 1;
  }
  this->fields.selectType = type;
  this->fields.state = 3;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_1693/*"AGE_VEIFICATION_CONFIRM_TITLE"*/, 0LL);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_1692/*"AGE_VEIFICATION_CONFIRM_MESSAGE"*/, 0LL);
  v37 = v35;
  v46 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v46 = AgeVerificationMenu_TypeInfo;
  }
  typeTextList = v46->static_fields->typeTextList;
  if ( !typeTextList )
    goto LABEL_16;
  selectType = this->fields.selectType;
  if ( (unsigned int)selectType >= typeTextList->max_length )
  {
    v45 = sub_B5D6C8(v35);
    sub_B5D668(v45, 0LL);
  }
  v40 = (Il2CppObject *)LocalizationManager__Get(typeTextList->m_Items[selectType], 0LL);
  v41 = System_String__Format(v37, v40, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_1691/*"AGE_VEIFICATION_CONFIRM_DECIDE"*/, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_1690/*"AGE_VEIFICATION_CONFIRM_CANCEL"*/, 0LL);
  v44 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v44, (Il2CppObject *)this, Method_AgeVerificationMenu_OnEndConfirm__, 0LL);
  v35 = (System_String_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
LABEL_16:
    sub_B5D69C(v35, v36);
  CommonUI__OpenConfirmDecideDlg(
    Instance,
    v34,
    v41,
    v42,
    v43,
    v44,
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
    0LL);
}


void __fastcall AgeVerificationMenu__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AgeVerificationMenu_c *v4; // x0

  if ( (byte_42E681E & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    byte_42E681E = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v4 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVE_KEY_TYPE, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall AgeVerificationMenu__EndOpen(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall AgeVerificationMenu__GetAgeType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AgeVerificationMenu_c *v4; // x0

  if ( (byte_42E681F & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    byte_42E681F = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v4 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_TYPE, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetCumulativeAmount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AgeVerificationMenu_c *v4; // x0

  if ( (byte_42E6821 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    byte_42E6821 = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v4 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, 0, 0LL);
}


int32_t __fastcall AgeVerificationMenu__GetLimit(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AgeVerificationMenu_c *v4; // x0
  int32_t AgeType; // w0

  if ( (byte_42E6820 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    byte_42E6820 = 1;
  }
  v4 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
  }
  AgeType = AgeVerificationMenu__GetAgeType((const MethodInfo *)v4);
  if ( (unsigned int)AgeType > 2 )
    return -1;
  else
    return dword_32A09E0[AgeType];
}


void __fastcall AgeVerificationMenu__Init(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E6823 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E6823 = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall AgeVerificationMenu__IsConcent(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ManagerConfig_c *v13; // x0
  int32_t Int; // w0
  AgeVerificationMenu_c *v15; // x0
  System_DateTime_o v16; // x0
  AgeVerificationMenu_c *v17; // x8
  System_String_o *String; // x0
  int64_t v19; // x0
  int32_t Year; // w19
  int32_t v21; // w19
  int32_t Month; // w19
  uint64_t v24; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8

  if ( (byte_42E681B & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v10, v11, v12);
    byte_42E681B = 1;
  }
  dateData = 0LL;
  v24 = 0LL;
  v13 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v13 = ManagerConfig_TypeInfo;
  }
  if ( v13->static_fields->UseMock )
    goto LABEL_7;
  v15 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v15 = AgeVerificationMenu_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v15->static_fields->SAVE_KEY_TYPE, 0, 0LL);
  if ( Int )
  {
    if ( Int > 2 )
      goto LABEL_7;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v16.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v17 = AgeVerificationMenu_TypeInfo;
    dateData = v16.fields.dateData;
    if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
      v17 = AgeVerificationMenu_TypeInfo;
    }
    String = UnityEngine_PlayerPrefs__GetString(
               v17->static_fields->SAVE_KEY_EXPIRATION_DATE,
               (System_String_o *)StringLiteral_973/*"0"*/,
               0LL);
    v19 = System_Int64__Parse(String, 0LL);
    v24 = NetworkManager__getDateTime_26077468(v19, 0LL).fields.dateData;
    v26.fields.dateData = (uint64_t)&v24;
    Year = System_DateTime__get_Year(v26, 0LL);
    v27.fields.dateData = (uint64_t)&dateData;
    if ( Year > System_DateTime__get_Year(v27, 0LL) )
    {
LABEL_7:
      LOBYTE(Int) = 1;
      return Int;
    }
    v28.fields.dateData = (uint64_t)&v24;
    v21 = System_DateTime__get_Year(v28, 0LL);
    v29.fields.dateData = (uint64_t)&dateData;
    if ( v21 == System_DateTime__get_Year(v29, 0LL) )
    {
      v30.fields.dateData = (uint64_t)&v24;
      Month = System_DateTime__get_Month(v30, 0LL);
      v31.fields.dateData = (uint64_t)&dateData;
      LOBYTE(Int) = Month > System_DateTime__get_Month(v31, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  AgeVerificationMenu_c *v9; // x0

  if ( (byte_42E681C & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42E681C = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v9 = AgeVerificationMenu_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v9->static_fields->SAVE_KEY_TYPE, 0, 0LL) == 0;
}


void __fastcall AgeVerificationMenu__OnClickCancel(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E682B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E682B = 1;
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
    AgeVerificationMenu__Callback(this, -1, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType1(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6828 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6828 = 1;
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
    AgeVerificationMenu__ConfirmType(this, 1, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType2(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E6829 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6829 = 1;
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
    AgeVerificationMenu__ConfirmType(this, 2, v5);
  }
}


void __fastcall AgeVerificationMenu__OnClickType3(AgeVerificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E682A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E682A = 1;
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
    AgeVerificationMenu__ConfirmType(this, 3, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AgeVerificationMenu__OnEndConfirm(AgeVerificationMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t selectType; // w21
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E6827 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    byte_42E6827 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v11);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( result )
    AgeVerificationMenu__Callback(this, this->fields.selectType, v12);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *type1Label; // x20
  __int64 v31; // x8
  struct System_String_array *typeTextList; // x8
  UILabel_o *type2Label; // x20
  struct System_String_array *v34; // x8
  UILabel_o *type3Label; // x20
  System_Action_o *v36; // x20
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x19
  __int64 v38; // x0

  if ( (byte_42E6824 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AgeVerificationMenu_EndOpen__, v10, v11, v12);
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1696/*"AGE_VEIFICATION_TITLE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1694/*"AGE_VEIFICATION_MESSAGE"*/, v22, v23, v24);
    byte_42E6824 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    this->fields.callbackFunc = callback;
    p_callbackFunc = &this->fields.callbackFunc;
    sub_B5D560(
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
    sub_B5D560(
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
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1696/*"AGE_VEIFICATION_TITLE"*/, 0LL);
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1694/*"AGE_VEIFICATION_MESSAGE"*/, 0LL);
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
          v31 = *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 24LL);
          if ( v31 )
          {
            if ( *(_DWORD *)(v31 + 24) <= 1u )
              goto LABEL_27;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(*(System_String_o **)(v31 + 40), 0LL);
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
            v34 = AgeVerificationMenu_TypeInfo->static_fields->typeTextList;
            if ( !v34 )
              goto LABEL_26;
            if ( v34->max_length <= 3 )
            {
LABEL_27:
              v38 = sub_B5D6C8(gameObject);
              sub_B5D668(v38, 0LL);
            }
            type3Label = this->fields.type3Label;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v34->m_Items[3], 0LL);
            if ( type3Label )
            {
              UILabel__set_text(type3Label, (System_String_o *)gameObject, 0LL);
              this->fields.state = 1;
              v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v36, (Il2CppObject *)this, Method_AgeVerificationMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_26:
    sub_B5D69C(gameObject, v27);
  }
}


void __fastcall AgeVerificationMenu__SaveCumulativeAmount(int32_t count, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AgeVerificationMenu_c *v5; // x0

  if ( (byte_42E6822 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6822 = 1;
  }
  v5 = AgeVerificationMenu_TypeInfo;
  if ( (BYTE3(AgeVerificationMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AgeVerificationMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AgeVerificationMenu_TypeInfo);
    v5 = AgeVerificationMenu_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_CUMULATIVE_AMOUNT, count, 0LL);
}


void __fastcall AgeVerificationMenu__add_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AgeVerificationMenu_o *v12; // x0
  AgeVerificationMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E6819 & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6819 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v9->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (AgeVerificationMenu_o *)sub_B5D990(v9);
  AgeVerificationMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall AgeVerificationMenu__get_closeBtnPath(
        AgeVerificationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E682C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E682C = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}


void __fastcall AgeVerificationMenu__remove_callbackFunc(
        AgeVerificationMenu_o *this,
        AgeVerificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AgeVerificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct AgeVerificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  const MethodInfo *v12; // x0

  if ( (byte_42E681A & 1) == 0 )
  {
    sub_B5D5C4(&AgeVerificationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E681A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AgeVerificationMenu_CallbackFunc_c *)v9->klass != AgeVerificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (const MethodInfo *)sub_B5D990(v9);
  AgeVerificationMenu__IsConcent(v12);
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
  sub_B5D560(
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
  if ( (byte_42E7505 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7505 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall AgeVerificationMenu_CallbackFunc__EndInvoke(
        AgeVerificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  AgeVerificationMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  AgeVerificationMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
    goto LABEL_37;
  }
}