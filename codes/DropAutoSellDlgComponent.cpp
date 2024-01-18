void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Array_o *v13; // x19
  struct DropAutoSellDlgComponent_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_RuntimeFieldHandle_o v21; // 0:w1.4
  System_RuntimeFieldHandle_o v22; // 0:w1.4

  if ( (byte_4189498 & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, v1);
    sub_B2C35C(&int___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v4);
    byte_4189498 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v21.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v21, 0LL);
  static_fields = (BattleServantConfConponent_o *)DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B2C2F8(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v22.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v13, v22, 0LL);
  v14 = DropAutoSellDlgComponent_TypeInfo->static_fields;
  v14->settingMasks = (struct System_Int32_array *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->settingMasks,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189497 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4189497 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    DropAutoSellDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_28072408(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_28072408(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418948D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_DropAutoSellDlgComponent_EndClose__, v10);
    byte_418948D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v12; // x20
  unsigned __int64 v13; // x25
  il2cpp_array_size_t v14; // w24
  DropAutoSellDlgComponent___c__DisplayClass40_0_o *v15; // x21
  System_Collections_Generic_List_int__c *klass; // x8
  System_Collections_Generic_List_T__o *v17; // x22
  System_Func_int__bool__o *v18; // x23
  char *v19; // x9
  __int64 v22; // x0

  v2 = this;
  if ( (byte_4189495 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, method);
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v4);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v8);
    this = (DropAutoSellDlgComponent_o *)sub_B2C35C(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, v9);
    byte_4189495 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_21;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v12 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)(4 - size));
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      v15 = (DropAutoSellDlgComponent___c__DisplayClass40_0_o *)sub_B2C42C(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(v15, 0LL);
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
      if ( v13 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_22;
      if ( !v15 )
        break;
      v15->fields.target = *((_DWORD *)&klass->_1.byval_arg.data + v13);
      v17 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v18 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v18,
        (Il2CppObject *)v15,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v17,
                                             (System_Func_T__bool__o *)v18,
                                             (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        if ( v14 >= v12->max_length )
        {
LABEL_22:
          v22 = sub_B2C460(this);
          sub_B2C400(v22, 0LL);
        }
        v19 = (char *)v12 + 4 * (int)v14++;
        *((_DWORD *)v19 + 8) = v15->fields.target;
      }
      if ( v13++ >= 3 )
        return v12;
    }
LABEL_21:
    sub_B2C434(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_418948B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418948B = 1;
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
          (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__OnClickButton(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4189490 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4189490 = 1;
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

  if ( (byte_418948F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418948F = 1;
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

  if ( (byte_418948E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418948E = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *gameObject; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v32; // x20
  struct UILabel_array *v33; // x8
  UILabel_o *v34; // x20
  struct UILabel_array *v35; // x8
  UILabel_o *v36; // x20
  struct UILabel_array *v37; // x8
  UILabel_o *v38; // x20
  const MethodInfo *v39; // x2
  int v40; // w21
  __int64 i; // x22
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *settingMasks; // x9
  System_Collections_Generic_List_int__o *enableList; // x20
  struct System_Int32_array *settingKinds; // x8
  unsigned __int64 v46; // x25
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x20
  __int64 v49; // x0

  if ( (byte_418948C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_DropAutoSellDlgComponent_EndOpen__, v5);
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_4703/*"DROP_AUTOSELL_MSG"*/, v9);
    sub_B2C35C(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v12);
    sub_B2C35C(&StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_B2C35C(&StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_B2C35C(&StringLiteral_4704/*"DROP_AUTOSELL_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v16);
    sub_B2C35C(&StringLiteral_4702/*"DROP_AUTOSELL_EXP_TXT"*/, v17);
    byte_418948C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4704/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4703/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4702/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_45;
  if ( !settingButtonLabel->max_length )
    goto LABEL_46;
  v32 = settingButtonLabel->m_Items[0];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v32 )
    goto LABEL_45;
  UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
  v33 = this->fields.settingButtonLabel;
  if ( !v33 )
    goto LABEL_45;
  if ( v33->max_length <= 1 )
    goto LABEL_46;
  v34 = v33->m_Items[1];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v34 )
    goto LABEL_45;
  UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
  v35 = this->fields.settingButtonLabel;
  if ( !v35 )
    goto LABEL_45;
  if ( v35->max_length <= 2 )
    goto LABEL_46;
  v36 = v35->m_Items[2];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v36
    || (UILabel__set_text(v36, (System_String_o *)gameObject, 0LL), (v37 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_45:
    sub_B2C434(gameObject, v19);
  }
  if ( v37->max_length <= 3 )
  {
LABEL_46:
    v49 = sub_B2C460(gameObject);
    sub_B2C400(v49, 0LL);
  }
  v38 = v37->m_Items[3];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v38 )
    goto LABEL_45;
  UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
  gameObject = UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_45;
  v40 = *((_DWORD *)gameObject + 60);
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
    v46 = i - 8;
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
    if ( v46 >= settingMasks->max_length )
      goto LABEL_46;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & v40) != 0 )
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
      if ( v46 >= settingKinds->max_length )
        goto LABEL_46;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        *((_DWORD *)&settingKinds->obj.klass + i),
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v39);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v47);
  this->fields.state = 1;
  v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v9; // x1
  System_Int32_array *DisableList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v13; // x19

  if ( (byte_4189493 & 1) == 0 )
  {
    sub_B2C35C(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4189493 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v7,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v9);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v13 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B2C434(DisableList, v11);
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, DisableList, v13, 0LL);
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
    sub_B2C434(decideButton, isEnable);
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
      v9 = sub_B2C460(decideButton);
      sub_B2C400(v9, 0LL);
    }
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[v7];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
    ++v7;
  }
  while ( (unsigned int)(v7 - 1) < 3 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SetButtonSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DropAutoSellDlgComponent___c__DisplayClass35_0_o *v13; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  DropAutoSellDlgComponent___c__DisplayClass35_1_o *v16; // x20
  int v17; // w8
  struct UISprite_array *settingButtonSprites; // x9
  UISprite_o *v19; // x21
  System_Collections_Generic_List_T__o *enableList; // x22
  System_Func_int__bool__o *v21; // x23
  __int64 *v22; // x8
  bool v23; // nf
  struct UISprite_array *v24; // x8
  Il2CppClass **v25; // x8
  System_Collections_Generic_List_T__o *v26; // x20
  UISprite_o *v27; // x19
  System_Func_int__bool__o *v28; // x22
  __int64 *v29; // x8
  __int64 v30; // x0

  if ( (byte_4189491 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v7);
    sub_B2C35C(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v8);
    sub_B2C35C(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v9);
    sub_B2C35C(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v11);
    sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v12);
    byte_4189491 = 1;
  }
  v13 = (DropAutoSellDlgComponent___c__DisplayClass35_0_o *)sub_B2C42C(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.kind = kind;
  if ( kind == 4 )
  {
    v16 = (DropAutoSellDlgComponent___c__DisplayClass35_1_o *)sub_B2C42C(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(v16, 0LL);
    if ( v16 )
    {
      v16->fields.i = 0;
      v17 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v17 >= settingButtonSprites->max_length )
          goto LABEL_22;
        v19 = settingButtonSprites->m_Items[v17];
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v21 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v21,
          (Il2CppObject *)v16,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v14 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v21,
                (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
        if ( !v19 )
          break;
        if ( v14 )
          v22 = &StringLiteral_16956/*"btn_bg_03"*/;
        else
          v22 = &StringLiteral_16957/*"btn_bg_04"*/;
        UISprite__set_spriteName(v19, (System_String_o *)*v22, 0LL);
        v17 = v16->fields.i + 1;
        v23 = v16->fields.i - 2 < 0;
        v16->fields.i = v17;
        if ( !(v23 ^ __OFSUB__(v17, 3) | (v17 == 3)) )
          return;
      }
    }
LABEL_21:
    sub_B2C434(v14, v15);
  }
  v24 = this->fields.settingButtonSprites;
  if ( !v24 )
    goto LABEL_21;
  if ( v24->max_length <= kind )
  {
LABEL_22:
    v30 = sub_B2C460(v14);
    sub_B2C400(v30, 0LL);
  }
  v25 = &v24->obj.klass + kind;
  v26 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v27 = (UISprite_o *)v25[4];
  v28 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  v14 = BasicHelper__Any_int_(
          v26,
          (System_Func_T__bool__o *)v28,
          (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
  if ( !v27 )
    goto LABEL_21;
  v29 = &StringLiteral_16956/*"btn_bg_03"*/;
  if ( !v14 )
    v29 = &StringLiteral_16957/*"btn_bg_04"*/;
  UISprite__set_spriteName(v27, (System_String_o *)*v29, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DropAutoSellDlgComponent___c__DisplayClass37_0_o *v12; // x21
  __int64 v13; // x1
  DropAutoSellDlgComponent_c *v14; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v17; // x22
  System_Collections_Generic_List_int__o *v18; // x8
  int32_t target; // w1
  __int64 v20; // x0

  if ( (byte_4189492 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, v5);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_B2C35C(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v10);
    sub_B2C35C(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v11);
    byte_4189492 = 1;
  }
  v12 = (DropAutoSellDlgComponent___c__DisplayClass37_0_o *)sub_B2C42C(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(v12, 0LL);
  v14 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v14 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v14->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_13;
  if ( settingKinds->max_length <= kind )
  {
    v20 = sub_B2C460(v14);
    sub_B2C400(v20, 0LL);
  }
  if ( !v12
    || (v12->fields.target = settingKinds->m_Items[kind + 1],
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v17 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v17,
          (Il2CppObject *)v12,
          Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
        v14 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                              enableList,
                                              (System_Func_T__bool__o *)v17,
                                              (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___),
        (v18 = this->fields.enableList) == 0LL) )
  {
LABEL_13:
    sub_B2C434(v14, v13);
  }
  target = v12->fields.target;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    System_Collections_Generic_List_int___Remove(
      v18,
      target,
      (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v18,
      target,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_4189489 & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4189489 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B2C728(v8);
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
  if ( (byte_4189494 & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, result);
    byte_4189494 = 1;
  }
  if ( !result )
    sub_B2C434(this, result);
  v5 = System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
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

  if ( (byte_4189496 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189496 = 1;
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_418948A & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418948A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B2C728(v8);
  DropAutoSellDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent_CallbackFunc___ctor(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
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
  sub_B2C2F8(
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
  if ( (byte_4186506 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4186506 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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

  if ( (byte_4186504 & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4186504 = 1;
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
    sub_B2C434(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
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

  if ( (byte_4186505 & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4186505 = 1;
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
    sub_B2C434(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
  {
    v9 = sub_B2C460(v5);
    sub_B2C400(v9, 0LL);
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