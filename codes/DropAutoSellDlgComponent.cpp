void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Array_o *v9; // x19
  struct DropAutoSellDlgComponent_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_RuntimeFieldHandle_o v17; // 0:w1.4
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_42B207F & 1) == 0 )
  {
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1);
    sub_B52984(&Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE);
    byte_42B207F = 1;
  }
  v1 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
  v17.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v1, v17, 0LL);
  static_fields = (BattleServantConfConponent_o *)DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Array_o *)sub_B5299C(int___TypeInfo, 4LL);
  v18.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v9, v18, 0LL);
  v10 = DropAutoSellDlgComponent_TypeInfo->static_fields;
  v10->settingMasks = (struct System_Int32_array *)v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&v10->settingMasks,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B207E & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B207E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enableList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DropAutoSellDlgComponent__Callback(
        DropAutoSellDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v9; // x19
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    DropAutoSellDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_28899248(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_28899248(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B2074 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DropAutoSellDlgComponent_EndClose__);
    byte_42B2074 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__EndOpen(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Int32_array *__fastcall DropAutoSellDlgComponent__GetDisableList(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *v2; // x19
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v5; // x20
  unsigned __int64 v6; // x25
  il2cpp_array_size_t v7; // w24
  DropAutoSellDlgComponent___c__DisplayClass40_0_o *v8; // x21
  System_Collections_Generic_List_int__c *klass; // x8
  System_Collections_Generic_List_T__o *v10; // x22
  System_Func_int__bool__o *v11; // x23
  char *v12; // x9
  __int64 v15; // x0

  v2 = this;
  if ( (byte_42B207C & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__);
    this = (DropAutoSellDlgComponent_o *)sub_B52984(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
    byte_42B207C = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_21;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v5 = (System_Int32_array *)sub_B5299C(int___TypeInfo, (unsigned int)(4 - size));
    v6 = 0LL;
    v7 = 0;
    while ( 1 )
    {
      v8 = (DropAutoSellDlgComponent___c__DisplayClass40_0_o *)sub_B52A54(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(v8, 0LL);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.enableList->klass;
      if ( !klass )
        break;
      if ( v6 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_22;
      if ( !v8 )
        break;
      v8->fields.target = *((_DWORD *)&klass->_1.byval_arg.data + v6);
      v10 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v11 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v11,
        (Il2CppObject *)v8,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v10,
                                             (System_Func_T__bool__o *)v11,
                                             (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v5 )
          break;
        if ( v7 >= v5->max_length )
        {
LABEL_22:
          v15 = sub_B52A88(this);
          sub_B52A28(v15, 0LL);
        }
        v12 = (char *)v5 + 4 * (int)v7++;
        *((_DWORD *)v12 + 8) = v8->fields.target;
      }
      if ( v6++ >= 3 )
        return v5;
    }
LABEL_21:
    sub_B52A5C(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_42B2072 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2072 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.msgLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.expTitleLb) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.enableList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          (System_Collections_Generic_List_int__o *)titleLabel,
          (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DropAutoSellDlgComponent__OnClickButton(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42B2077 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2077 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    DropAutoSellDlgComponent__SwitchSelect(this, kind, v5);
    DropAutoSellDlgComponent__SetButtonSelect(this, kind, v6);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickCancel(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_42B2076 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2076 = 1;
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
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v3);
    DropAutoSellDlgComponent__Callback(this, 0, v4);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickDecide(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x1

  if ( (byte_42B2075 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2075 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v3);
    DropAutoSellDlgComponent__RequestUserStatusFlagSet(this, v4);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickExp1(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 0, v2);
}


void __fastcall DropAutoSellDlgComponent__OnClickExp2(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 1, v2);
}


void __fastcall DropAutoSellDlgComponent__OnClickExp3(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 2, v2);
}


void __fastcall DropAutoSellDlgComponent__OnClickExp4(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 3, v2);
}


void __fastcall DropAutoSellDlgComponent__Open(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v19; // x20
  struct UILabel_array *v20; // x8
  UILabel_o *v21; // x20
  struct UILabel_array *v22; // x8
  UILabel_o *v23; // x20
  struct UILabel_array *v24; // x8
  UILabel_o *v25; // x20
  const MethodInfo *v26; // x2
  int v27; // w21
  __int64 i; // x22
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *settingMasks; // x9
  System_Collections_Generic_List_int__o *enableList; // x20
  struct System_Int32_array *settingKinds; // x8
  unsigned __int64 v33; // x25
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20
  __int64 v36; // x0

  if ( (byte_42B2073 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DropAutoSellDlgComponent_EndOpen__);
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_4743/*"DROP_AUTOSELL_MSG"*/);
    sub_B52984(&StringLiteral_11967/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_11965/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_B52984(&StringLiteral_11963/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_B52984(&StringLiteral_4744/*"DROP_AUTOSELL_TITLE"*/);
    sub_B52984(&StringLiteral_11964/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_B52984(&StringLiteral_4742/*"DROP_AUTOSELL_EXP_TXT"*/);
    byte_42B2073 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4744/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4743/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4742/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_45;
  if ( !settingButtonLabel->max_length )
    goto LABEL_46;
  v19 = settingButtonLabel->m_Items[0];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11963/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v19 )
    goto LABEL_45;
  UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
  v20 = this->fields.settingButtonLabel;
  if ( !v20 )
    goto LABEL_45;
  if ( v20->max_length <= 1 )
    goto LABEL_46;
  v21 = v20->m_Items[1];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11967/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v21 )
    goto LABEL_45;
  UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
  v22 = this->fields.settingButtonLabel;
  if ( !v22 )
    goto LABEL_45;
  if ( v22->max_length <= 2 )
    goto LABEL_46;
  v23 = v22->m_Items[2];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11964/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v23
    || (UILabel__set_text(v23, (System_String_o *)gameObject, 0LL), (v24 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_45:
    sub_B52A5C(gameObject, v6);
  }
  if ( v24->max_length <= 3 )
  {
LABEL_46:
    v36 = sub_B52A88(gameObject);
    sub_B52A28(v36, 0LL);
  }
  v25 = v24->m_Items[3];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11965/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v25 )
    goto LABEL_45;
  UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
  gameObject = UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_45;
  v27 = *((_DWORD *)gameObject + 60);
  for ( i = 8LL; ; ++i )
  {
    gameObject = DropAutoSellDlgComponent_TypeInfo;
    if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
      gameObject = DropAutoSellDlgComponent_TypeInfo;
    }
    static_fields = (struct DropAutoSellDlgComponent_StaticFields *)*((_QWORD *)gameObject + 23);
    settingMasks = static_fields->settingMasks;
    if ( !settingMasks )
      goto LABEL_45;
    v33 = i - 8;
    if ( i - 8 >= (int)settingMasks->max_length )
      break;
    if ( (*((_BYTE *)gameObject + 307) & 4) != 0 && !*((_DWORD *)gameObject + 56) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = DropAutoSellDlgComponent_TypeInfo;
      static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
      settingMasks = static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_45;
    }
    if ( v33 >= settingMasks->max_length )
      goto LABEL_46;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & v27) != 0 )
    {
      enableList = this->fields.enableList;
      if ( (*((_BYTE *)gameObject + 307) & 4) != 0 && !*((_DWORD *)gameObject + 56) )
      {
        j_il2cpp_runtime_class_init_0(gameObject);
        static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
      }
      settingKinds = static_fields->settingKinds;
      if ( !settingKinds )
        goto LABEL_45;
      if ( v33 >= settingKinds->max_length )
        goto LABEL_46;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        *((_DWORD *)&settingKinds->obj.klass + i),
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v26);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v34);
  this->fields.state = 1;
  v35 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *DisableList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v9; // x19

  if ( (byte_42B207A & 1) == 0 )
  {
    sub_B52984(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_42B207A = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v3,
                                                                      (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v5);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v9 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B52A5C(DisableList, v7);
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, DisableList, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SetButtonEnable(
        DropAutoSellDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  __int64 v7; // x21
  struct UICommonButton_array *settingButton; // x8
  __int64 v9; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
LABEL_9:
    sub_B52A5C(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  v7 = 0LL;
  do
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( (unsigned int)v7 >= settingButton->max_length )
    {
      v9 = sub_B52A88(decideButton);
      sub_B52A28(v9, 0LL);
    }
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[v7];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
    ++v7;
  }
  while ( (unsigned int)(v7 - 1) < 3 );
}


void __fastcall DropAutoSellDlgComponent__SetButtonSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent___c__DisplayClass35_0_o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  DropAutoSellDlgComponent___c__DisplayClass35_1_o *v8; // x20
  int v9; // w8
  struct UISprite_array *settingButtonSprites; // x9
  UISprite_o *v11; // x21
  System_Collections_Generic_List_T__o *enableList; // x22
  System_Func_int__bool__o *v13; // x23
  __int64 *v14; // x8
  bool v15; // nf
  struct UISprite_array *v16; // x8
  Il2CppClass **v17; // x8
  System_Collections_Generic_List_T__o *v18; // x20
  UISprite_o *v19; // x19
  System_Func_int__bool__o *v20; // x22
  __int64 *v21; // x8
  __int64 v22; // x0

  if ( (byte_42B2078 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__);
    sub_B52984(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
    sub_B52984(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__);
    sub_B52984(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42B2078 = 1;
  }
  v5 = (DropAutoSellDlgComponent___c__DisplayClass35_0_o *)sub_B52A54(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  v5->fields.kind = kind;
  if ( kind == 4 )
  {
    v8 = (DropAutoSellDlgComponent___c__DisplayClass35_1_o *)sub_B52A54(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(v8, 0LL);
    if ( v8 )
    {
      v8->fields.i = 0;
      v9 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v9 >= settingButtonSprites->max_length )
          goto LABEL_22;
        v11 = settingButtonSprites->m_Items[v9];
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v13 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v13,
               (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
        if ( !v11 )
          break;
        if ( v6 )
          v14 = &StringLiteral_17074/*"btn_bg_03"*/;
        else
          v14 = &StringLiteral_17075/*"btn_bg_04"*/;
        UISprite__set_spriteName(v11, (System_String_o *)*v14, 0LL);
        v9 = v8->fields.i + 1;
        v15 = v8->fields.i - 2 < 0;
        v8->fields.i = v9;
        if ( !(v15 ^ __OFSUB__(v9, 3) | (v9 == 3)) )
          return;
      }
    }
LABEL_21:
    sub_B52A5C(v6, v7);
  }
  v16 = this->fields.settingButtonSprites;
  if ( !v16 )
    goto LABEL_21;
  if ( v16->max_length <= kind )
  {
LABEL_22:
    v22 = sub_B52A88(v6);
    sub_B52A28(v22, 0LL);
  }
  v17 = &v16->obj.klass + kind;
  v18 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v19 = (UISprite_o *)v17[4];
  v20 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v6 = BasicHelper__Any_int_(
         v18,
         (System_Func_T__bool__o *)v20,
         (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
  if ( !v19 )
    goto LABEL_21;
  v21 = &StringLiteral_17074/*"btn_bg_03"*/;
  if ( !v6 )
    v21 = &StringLiteral_17075/*"btn_bg_04"*/;
  UISprite__set_spriteName(v19, (System_String_o *)*v21, 0LL);
}


void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent___c__DisplayClass37_0_o *v5; // x21
  __int64 v6; // x1
  DropAutoSellDlgComponent_c *v7; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v10; // x22
  System_Collections_Generic_List_int__o *v11; // x8
  int32_t target; // w1
  __int64 v13; // x0

  if ( (byte_42B2079 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__);
    sub_B52984(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
    byte_42B2079 = 1;
  }
  v5 = (DropAutoSellDlgComponent___c__DisplayClass37_0_o *)sub_B52A54(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(v5, 0LL);
  v7 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v7 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v7->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_13;
  if ( settingKinds->max_length <= kind )
  {
    v13 = sub_B52A88(v7);
    sub_B52A28(v13, 0LL);
  }
  if ( !v5
    || (v5->fields.target = settingKinds->m_Items[kind + 1],
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v10 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__),
        v7 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                             enableList,
                                             (System_Func_T__bool__o *)v10,
                                             (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___),
        (v11 = this->fields.enableList) == 0LL) )
  {
LABEL_13:
    sub_B52A5C(v7, v6);
  }
  target = v5->fields.target;
  if ( ((unsigned __int8)v7 & 1) != 0 )
    System_Collections_Generic_List_int___Remove(
      v11,
      target,
      (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v11,
      target,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall DropAutoSellDlgComponent__add_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DropAutoSellDlgComponent_o *v11; // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B2070 & 1) == 0 )
  {
    sub_B52984(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2070 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v8->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B52D50(v8);
  DropAutoSellDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall DropAutoSellDlgComponent__callbackUsetStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *v4; // x19
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  bool v8; // w1
  DropAutoSellDlgComponent_o *v9; // x0

  v4 = this;
  if ( (byte_42B207B & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_B52984(&StringLiteral_21388/*"ok"*/);
    byte_42B207B = 1;
  }
  if ( !result )
    sub_B52A5C(this, result);
  v5 = System_String__Equals_44555656(result, (System_String_o *)StringLiteral_21388/*"ok"*/, 0LL);
  v4->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v4, 0, v6);
  if ( v5 )
  {
    v8 = 1;
    v9 = v4;
  }
  else
  {
    v9 = v4;
    v8 = 0;
  }
  DropAutoSellDlgComponent__Callback(v9, v8, v7);
}


UnityEngine_GameObject_o *__fastcall DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B207D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B207D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall DropAutoSellDlgComponent__remove_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DropAutoSellDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B2071 & 1) == 0 )
  {
    sub_B52984(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_42B2071 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v8->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B52D50(v8);
  DropAutoSellDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent_CallbackFunc___ctor(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall DropAutoSellDlgComponent_CallbackFunc__BeginInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AD88F & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD88F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent_CallbackFunc__Invoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  DropAutoSellDlgComponent_CallbackFunc_o **v8; // x25
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
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  DropAutoSellDlgComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (DropAutoSellDlgComponent_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
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
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}


void __fastcall DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DropAutoSellDlgComponent___c__DisplayClass35_0___SetButtonSelect_b__0(
        DropAutoSellDlgComponent___c__DisplayClass35_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 kind; // x9
  __int64 v9; // x0

  if ( (byte_42AD88D & 1) == 0 )
  {
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    byte_42AD88D = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_B52A5C(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
  {
    v9 = sub_B52A88(v5);
    sub_B52A28(v9, 0LL);
  }
  return settingKinds->m_Items[kind + 1] == x;
}


void __fastcall DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DropAutoSellDlgComponent___c__DisplayClass35_1___SetButtonSelect_b__1(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 i; // x9
  __int64 v9; // x0

  if ( (byte_42AD88E & 1) == 0 )
  {
    sub_B52984(&DropAutoSellDlgComponent_TypeInfo);
    byte_42AD88E = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_B52A5C(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
  {
    v9 = sub_B52A88(v5);
    sub_B52A28(v9, 0LL);
  }
  return settingKinds->m_Items[i + 1] == x;
}


void __fastcall DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DropAutoSellDlgComponent___c__DisplayClass37_0___SwitchSelect_b__0(
        DropAutoSellDlgComponent___c__DisplayClass37_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.target == x;
}


void __fastcall DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DropAutoSellDlgComponent___c__DisplayClass40_0___GetDisableList_b__0(
        DropAutoSellDlgComponent___c__DisplayClass40_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.target == x;
}