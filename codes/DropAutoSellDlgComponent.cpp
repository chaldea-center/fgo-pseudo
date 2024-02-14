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

  if ( (byte_42162F5 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, v1);
    sub_B0D8A4(&int___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v4);
    byte_42162F5 = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v21.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v21, 0LL);
  static_fields = (BattleServantConfConponent_o *)DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  v13 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v22.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v13, v22, 0LL);
  v14 = DropAutoSellDlgComponent_TypeInfo->static_fields;
  v14->settingMasks = (struct System_Int32_array *)v13;
  sub_B0D840(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42162F4 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_42162F4 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enableList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    DropAutoSellDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_27572020(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_27572020(
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_42162EA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent_EndClose__, v10);
    byte_42162EA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Int32_array *v14; // x20
  unsigned __int64 v15; // x25
  il2cpp_array_size_t v16; // w24
  DropAutoSellDlgComponent___c__DisplayClass40_0_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__c *klass; // x8
  System_Collections_Generic_List_T__o *v21; // x22
  System_Func_int__bool__o *v22; // x23
  char *v23; // x9
  __int64 v26; // x0

  v2 = this;
  if ( (byte_42162F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, method);
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v5);
    sub_B0D8A4(&int___TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v8);
    this = (DropAutoSellDlgComponent_o *)sub_B0D8A4(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, v9);
    byte_42162F2 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_21;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v14 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)(4 - size));
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      v17 = (DropAutoSellDlgComponent___c__DisplayClass40_0_o *)sub_B0D974(
                                                                  DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo,
                                                                  v12,
                                                                  v13);
      DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(v17, 0LL);
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
      if ( v15 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_22;
      if ( !v17 )
        break;
      v17->fields.target = *((_DWORD *)&klass->_1.byval_arg.data + v15);
      v21 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v22 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v18, v19);
      System_Func_int__bool____ctor(
        v22,
        (Il2CppObject *)v17,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v21,
                                             (System_Func_T__bool__o *)v22,
                                             (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v14 )
          break;
        if ( v16 >= v14->max_length )
        {
LABEL_22:
          v26 = sub_B0D9A8(this);
          sub_B0D948(v26, 0LL);
        }
        v23 = (char *)v14 + 4 * (int)v16++;
        *((_DWORD *)v23 + 8) = v17->fields.target;
      }
      if ( v15++ >= 3 )
        return v14;
    }
LABEL_21:
    sub_B0D97C(this);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0

  if ( (byte_42162E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42162E8 = 1;
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
          (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(titleLabel);
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

  if ( (byte_42162ED & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_42162ED = 1;
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

  if ( (byte_42162EC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42162EC = 1;
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

  if ( (byte_42162EB & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42162EB = 1;
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v31; // x20
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x20
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x20
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x20
  const MethodInfo *v38; // x2
  int v39; // w21
  __int64 i; // x22
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *settingMasks; // x9
  System_Collections_Generic_List_int__o *enableList; // x20
  struct System_Int32_array *settingKinds; // x8
  unsigned __int64 v45; // x25
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  __int64 v50; // x0

  if ( (byte_42162E9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent_EndOpen__, v5);
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_4719/*"DROP_AUTOSELL_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v12);
    sub_B0D8A4(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_B0D8A4(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_B0D8A4(&StringLiteral_4720/*"DROP_AUTOSELL_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v16);
    sub_B0D8A4(&StringLiteral_4718/*"DROP_AUTOSELL_EXP_TXT"*/, v17);
    byte_42162E9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4720/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4719/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4718/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_45;
  if ( !settingButtonLabel->max_length )
    goto LABEL_46;
  v31 = settingButtonLabel->m_Items[0];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v31 )
    goto LABEL_45;
  UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
  v32 = this->fields.settingButtonLabel;
  if ( !v32 )
    goto LABEL_45;
  if ( v32->max_length <= 1 )
    goto LABEL_46;
  v33 = v32->m_Items[1];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v33 )
    goto LABEL_45;
  UILabel__set_text(v33, (System_String_o *)gameObject, 0LL);
  v34 = this->fields.settingButtonLabel;
  if ( !v34 )
    goto LABEL_45;
  if ( v34->max_length <= 2 )
    goto LABEL_46;
  v35 = v34->m_Items[2];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v35
    || (UILabel__set_text(v35, (System_String_o *)gameObject, 0LL), (v36 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_45:
    sub_B0D97C(gameObject);
  }
  if ( v36->max_length <= 3 )
  {
LABEL_46:
    v50 = sub_B0D9A8(gameObject);
    sub_B0D948(v50, 0LL);
  }
  v37 = v36->m_Items[3];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v37 )
    goto LABEL_45;
  UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
  gameObject = UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_45;
  v39 = *((_DWORD *)gameObject + 60);
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
    v45 = i - 8;
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
    if ( v45 >= settingMasks->max_length )
      goto LABEL_46;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & v39) != 0 )
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
      if ( v45 >= settingKinds->max_length )
        goto LABEL_46;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        *((_DWORD *)&settingKinds->obj.klass + i),
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v38);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v46);
  this->fields.state = 1;
  v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v10; // x1
  System_Int32_array *DisableList; // x0
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v13; // x19

  if ( (byte_42162F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_42162F0 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v8,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v10);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v13 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B0D97C(DisableList);
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, DisableList, v13, 0LL);
}


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
    sub_B0D97C(decideButton);
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
      v9 = sub_B0D9A8(decideButton);
      sub_B0D948(v9, 0LL);
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
  __int64 v16; // x2
  DropAutoSellDlgComponent___c__DisplayClass35_1_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  struct UISprite_array *settingButtonSprites; // x9
  UISprite_o *v22; // x21
  System_Collections_Generic_List_T__o *enableList; // x22
  System_Func_int__bool__o *v24; // x23
  __int64 *v25; // x8
  bool v26; // nf
  struct UISprite_array *v27; // x8
  Il2CppClass **v28; // x8
  System_Collections_Generic_List_T__o *v29; // x20
  UISprite_o *v30; // x19
  System_Func_int__bool__o *v31; // x22
  __int64 *v32; // x8
  __int64 v33; // x0

  if ( (byte_42162EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v7);
    sub_B0D8A4(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v8);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v9);
    sub_B0D8A4(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v11);
    sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v12);
    byte_42162EE = 1;
  }
  v13 = (DropAutoSellDlgComponent___c__DisplayClass35_0_o *)sub_B0D974(
                                                              DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo,
                                                              *(_QWORD *)&kind,
                                                              method);
  DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.kind = kind;
  if ( kind == 4 )
  {
    v17 = (DropAutoSellDlgComponent___c__DisplayClass35_1_o *)sub_B0D974(
                                                                DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo,
                                                                v15,
                                                                v16);
    DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(v17, 0LL);
    if ( v17 )
    {
      v17->fields.i = 0;
      v20 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v20 >= settingButtonSprites->max_length )
          goto LABEL_22;
        v22 = settingButtonSprites->m_Items[v20];
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v24 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v18, v19);
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v17,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v14 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v24,
                (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
        if ( !v22 )
          break;
        if ( v14 )
          v25 = &StringLiteral_17007/*"btn_bg_03"*/;
        else
          v25 = &StringLiteral_17008/*"btn_bg_04"*/;
        UISprite__set_spriteName(v22, (System_String_o *)*v25, 0LL);
        v20 = v17->fields.i + 1;
        v26 = v17->fields.i - 2 < 0;
        v17->fields.i = v20;
        if ( !(v26 ^ __OFSUB__(v20, 3) | (v20 == 3)) )
          return;
      }
    }
LABEL_21:
    sub_B0D97C(v14);
  }
  v27 = this->fields.settingButtonSprites;
  if ( !v27 )
    goto LABEL_21;
  if ( v27->max_length <= kind )
  {
LABEL_22:
    v33 = sub_B0D9A8(v14);
    sub_B0D948(v33, 0LL);
  }
  v28 = &v27->obj.klass + kind;
  v29 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v30 = (UISprite_o *)v28[4];
  v31 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v15, v16);
  System_Func_int__bool____ctor(
    v31,
    (Il2CppObject *)v13,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v14 = BasicHelper__Any_int_(
          v29,
          (System_Func_T__bool__o *)v31,
          (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
  if ( !v30 )
    goto LABEL_21;
  v32 = &StringLiteral_17007/*"btn_bg_03"*/;
  if ( !v14 )
    v32 = &StringLiteral_17008/*"btn_bg_04"*/;
  UISprite__set_spriteName(v30, (System_String_o *)*v32, 0LL);
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
  __int64 v14; // x2
  DropAutoSellDlgComponent_c *v15; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x8
  int32_t target; // w1
  __int64 v21; // x0

  if ( (byte_42162EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_B0D8A4(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v10);
    sub_B0D8A4(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v11);
    byte_42162EF = 1;
  }
  v12 = (DropAutoSellDlgComponent___c__DisplayClass37_0_o *)sub_B0D974(
                                                              DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo,
                                                              *(_QWORD *)&kind,
                                                              method);
  DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(v12, 0LL);
  v15 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v15 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v15->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_13;
  if ( settingKinds->max_length <= kind )
  {
    v21 = sub_B0D9A8(v15);
    sub_B0D948(v21, 0LL);
  }
  if ( !v12
    || (v12->fields.target = settingKinds->m_Items[kind + 1],
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v18 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v13, v14),
        System_Func_int__bool____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
        v15 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                              enableList,
                                              (System_Func_T__bool__o *)v18,
                                              (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___),
        (v19 = this->fields.enableList) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(v15);
  }
  target = v12->fields.target;
  if ( ((unsigned __int8)v15 & 1) != 0 )
    System_Collections_Generic_List_int___Remove(
      v19,
      target,
      (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v19,
      target,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_42162E6 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_42162E6 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B0DC70(v8);
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
  if ( (byte_42162F1 & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, result);
    byte_42162F1 = 1;
  }
  if ( !result )
    sub_B0D97C(this);
  v5 = System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_42162F3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42162F3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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

  if ( (byte_42162E7 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_42162E7 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_B0DC70(v8);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4211AF9 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4211AF9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  DropAutoSellDlgComponent_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
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

  if ( (byte_4211AF7 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4211AF7 = 1;
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
    sub_B0D97C(v5);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
  {
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
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

  if ( (byte_4211AF8 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4211AF8 = 1;
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
    sub_B0D97C(v5);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
  {
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
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