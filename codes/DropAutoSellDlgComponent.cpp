void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
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
  System_Array_o *v13; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Array_o *v21; // x19
  struct DropAutoSellDlgComponent_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_RuntimeFieldHandle_o v29; // 0:w1.4
  System_RuntimeFieldHandle_o v30; // 0:w1.4

  if ( (byte_42EA9DD & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v10,
      v11,
      v12);
    byte_42EA9DD = 1;
  }
  v13 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v29.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v13, v29, 0LL);
  static_fields = (BattleServantConfConponent_o *)DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B5D560(static_fields, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  v21 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v30.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v21, v30, 0LL);
  v22 = DropAutoSellDlgComponent_TypeInfo->static_fields;
  v22->settingMasks = (struct System_Int32_array *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v22->settingMasks,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EA9DC & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    byte_42EA9DC = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.enableList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    DropAutoSellDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_28976236(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_28976236(
        DropAutoSellDlgComponent_o *this,
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

  if ( (byte_42EA9D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent_EndClose__, v10, v11, v12);
    byte_42EA9D2 = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  DropAutoSellDlgComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v28; // x20
  unsigned __int64 v29; // x25
  il2cpp_array_size_t v30; // w24
  DropAutoSellDlgComponent___c__DisplayClass40_0_o *v31; // x21
  System_Collections_Generic_List_int__c *klass; // x8
  System_Collections_Generic_List_T__o *v33; // x22
  System_Func_int__bool__o *v34; // x23
  char *v35; // x9
  __int64 v38; // x0

  v4 = this;
  if ( (byte_42EA9DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v20, v21, v22);
    this = (DropAutoSellDlgComponent_o *)sub_B5D5C4(
                                           &DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo,
                                           v23,
                                           v24,
                                           v25);
    byte_42EA9DA = 1;
  }
  enableList = v4->fields.enableList;
  if ( !enableList )
    goto LABEL_21;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v28 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)(4 - size));
    v29 = 0LL;
    v30 = 0;
    while ( 1 )
    {
      v31 = (DropAutoSellDlgComponent___c__DisplayClass40_0_o *)sub_B5D694(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(v31, 0LL);
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
      if ( v29 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_22;
      if ( !v31 )
        break;
      v31->fields.target = *((_DWORD *)&klass->_1.byval_arg.data + v29);
      v33 = (System_Collections_Generic_List_T__o *)v4->fields.enableList;
      v34 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v34,
        (Il2CppObject *)v31,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v33,
                                             (System_Func_T__bool__o *)v34,
                                             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v28 )
          break;
        if ( v30 >= v28->max_length )
        {
LABEL_22:
          v38 = sub_B5D6C8(this);
          sub_B5D668(v38, 0LL);
        }
        v35 = (char *)v28 + 4 * (int)v30++;
        *((_DWORD *)v35 + 8) = v31->fields.target;
      }
      if ( v29++ >= 3 )
        return v28;
    }
LABEL_21:
    sub_B5D69C(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EA9D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EA9D0 = 1;
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
          (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(titleLabel, method);
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
  __int64 v3; // x3
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_42EA9D5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42EA9D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    DropAutoSellDlgComponent__SwitchSelect(this, kind, v6);
    DropAutoSellDlgComponent__SetButtonSelect(this, kind, v7);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickCancel(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42EA9D4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9D4 = 1;
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
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v5);
    DropAutoSellDlgComponent__Callback(this, 0, v6);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickDecide(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_42EA9D3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9D3 = 1;
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
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v5);
    DropAutoSellDlgComponent__RequestUserStatusFlagSet(this, v6);
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
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  void *gameObject; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v59; // x20
  struct UILabel_array *v60; // x8
  UILabel_o *v61; // x20
  struct UILabel_array *v62; // x8
  UILabel_o *v63; // x20
  struct UILabel_array *v64; // x8
  UILabel_o *v65; // x20
  const MethodInfo *v66; // x2
  int v67; // w21
  __int64 i; // x22
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *settingMasks; // x9
  System_Collections_Generic_List_int__o *enableList; // x20
  struct System_Int32_array *settingKinds; // x8
  unsigned __int64 v73; // x25
  const MethodInfo *v74; // x2
  System_Action_o *v75; // x20
  __int64 v76; // x0

  if ( (byte_42EA9D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent_EndOpen__, v6, v7, v8);
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_4777/*"DROP_AUTOSELL_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_4778/*"DROP_AUTOSELL_TITLE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_4776/*"DROP_AUTOSELL_EXP_TXT"*/, v42, v43, v44);
    byte_42EA9D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4778/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4777/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_4776/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_45;
  if ( !settingButtonLabel->max_length )
    goto LABEL_46;
  v59 = settingButtonLabel->m_Items[0];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v59 )
    goto LABEL_45;
  UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
  v60 = this->fields.settingButtonLabel;
  if ( !v60 )
    goto LABEL_45;
  if ( v60->max_length <= 1 )
    goto LABEL_46;
  v61 = v60->m_Items[1];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v61 )
    goto LABEL_45;
  UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
  v62 = this->fields.settingButtonLabel;
  if ( !v62 )
    goto LABEL_45;
  if ( v62->max_length <= 2 )
    goto LABEL_46;
  v63 = v62->m_Items[2];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v63
    || (UILabel__set_text(v63, (System_String_o *)gameObject, 0LL), (v64 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(gameObject, v46);
  }
  if ( v64->max_length <= 3 )
  {
LABEL_46:
    v76 = sub_B5D6C8(gameObject);
    sub_B5D668(v76, 0LL);
  }
  v65 = v64->m_Items[3];
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v65 )
    goto LABEL_45;
  UILabel__set_text(v65, (System_String_o *)gameObject, 0LL);
  gameObject = UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_45;
  v67 = *((_DWORD *)gameObject + 60);
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
    v73 = i - 8;
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
    if ( v73 >= settingMasks->max_length )
      goto LABEL_46;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & v67) != 0 )
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
      if ( v73 >= settingKinds->max_length )
        goto LABEL_46;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        *((_DWORD *)&settingKinds->obj.klass + i),
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v66);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v74);
  this->fields.state = 1;
  v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v19; // x1
  System_Int32_array *DisableList; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v23; // x19

  if ( (byte_42EA9D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    byte_42EA9D8 = 1;
  }
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v17,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v19);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v23 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B5D69C(DisableList, v21);
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, DisableList, v23, 0LL);
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
    sub_B5D69C(decideButton, isEnable);
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
      v9 = sub_B5D6C8(decideButton);
      sub_B5D668(v9, 0LL);
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
  DropAutoSellDlgComponent___c__DisplayClass35_0_o *v30; // x21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  DropAutoSellDlgComponent___c__DisplayClass35_1_o *v33; // x20
  int v34; // w8
  struct UISprite_array *settingButtonSprites; // x9
  UISprite_o *v36; // x21
  System_Collections_Generic_List_T__o *enableList; // x22
  System_Func_int__bool__o *v38; // x23
  __int64 *v39; // x8
  bool v40; // nf
  struct UISprite_array *v41; // x8
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_T__o *v43; // x20
  UISprite_o *v44; // x19
  System_Func_int__bool__o *v45; // x22
  __int64 *v46; // x8
  __int64 v47; // x0

  if ( (byte_42EA9D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v12, v13, v14);
    sub_B5D5C4(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v18, v19, v20);
    sub_B5D5C4(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v27, v28, v29);
    byte_42EA9D6 = 1;
  }
  v30 = (DropAutoSellDlgComponent___c__DisplayClass35_0_o *)sub_B5D694(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_21;
  v30->fields.kind = kind;
  if ( kind == 4 )
  {
    v33 = (DropAutoSellDlgComponent___c__DisplayClass35_1_o *)sub_B5D694(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(v33, 0LL);
    if ( v33 )
    {
      v33->fields.i = 0;
      v34 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v34 >= settingButtonSprites->max_length )
          goto LABEL_22;
        v36 = settingButtonSprites->m_Items[v34];
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v38 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v38,
          (Il2CppObject *)v33,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v31 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v38,
                (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
        if ( !v36 )
          break;
        if ( v31 )
          v39 = &StringLiteral_17165/*"btn_bg_03"*/;
        else
          v39 = &StringLiteral_17166/*"btn_bg_04"*/;
        UISprite__set_spriteName(v36, (System_String_o *)*v39, 0LL);
        v34 = v33->fields.i + 1;
        v40 = v33->fields.i - 2 < 0;
        v33->fields.i = v34;
        if ( !(v40 ^ __OFSUB__(v34, 3) | (v34 == 3)) )
          return;
      }
    }
LABEL_21:
    sub_B5D69C(v31, v32);
  }
  v41 = this->fields.settingButtonSprites;
  if ( !v41 )
    goto LABEL_21;
  if ( v41->max_length <= kind )
  {
LABEL_22:
    v47 = sub_B5D6C8(v31);
    sub_B5D668(v47, 0LL);
  }
  v42 = &v41->obj.klass + kind;
  v43 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v44 = (UISprite_o *)v42[4];
  v45 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v45,
    (Il2CppObject *)v30,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v31 = BasicHelper__Any_int_(
          v43,
          (System_Func_T__bool__o *)v45,
          (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
  if ( !v44 )
    goto LABEL_21;
  v46 = &StringLiteral_17165/*"btn_bg_03"*/;
  if ( !v31 )
    v46 = &StringLiteral_17166/*"btn_bg_04"*/;
  UISprite__set_spriteName(v44, (System_String_o *)*v46, 0LL);
}


void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
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
  DropAutoSellDlgComponent___c__DisplayClass37_0_o *v27; // x21
  __int64 v28; // x1
  DropAutoSellDlgComponent_c *v29; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v32; // x22
  System_Collections_Generic_List_int__o *v33; // x8
  int32_t target; // w1
  __int64 v35; // x0

  if ( (byte_42EA9D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v18, v19, v20);
    sub_B5D5C4(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v21, v22, v23);
    sub_B5D5C4(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v24, v25, v26);
    byte_42EA9D7 = 1;
  }
  v27 = (DropAutoSellDlgComponent___c__DisplayClass37_0_o *)sub_B5D694(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(v27, 0LL);
  v29 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v29 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v29->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_13;
  if ( settingKinds->max_length <= kind )
  {
    v35 = sub_B5D6C8(v29);
    sub_B5D668(v35, 0LL);
  }
  if ( !v27
    || (v27->fields.target = settingKinds->m_Items[kind + 1],
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v32 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v32,
          (Il2CppObject *)v27,
          Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
        v29 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                              enableList,
                                              (System_Func_T__bool__o *)v32,
                                              (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___),
        (v33 = this->fields.enableList) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(v29, v28);
  }
  target = v27->fields.target;
  if ( ((unsigned __int8)v29 & 1) != 0 )
    System_Collections_Generic_List_int___Remove(
      v33,
      target,
      (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v33,
      target,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall DropAutoSellDlgComponent__add_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  DropAutoSellDlgComponent_o *v12; // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA9CE & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA9CE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v9->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (DropAutoSellDlgComponent_o *)sub_B5D990(v9);
  DropAutoSellDlgComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall DropAutoSellDlgComponent__callbackUsetStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DropAutoSellDlgComponent_o *v5; // x19
  bool v6; // w20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  bool v9; // w1
  DropAutoSellDlgComponent_o *v10; // x0

  v5 = this;
  if ( (byte_42EA9D9 & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EA9D9 = 1;
  }
  if ( !result )
    sub_B5D69C(this, result);
  v6 = System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  v5->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v5, 0, v7);
  if ( v6 )
  {
    v9 = 1;
    v10 = v5;
  }
  else
  {
    v10 = v5;
    v9 = 0;
  }
  DropAutoSellDlgComponent__Callback(v10, v9, v8);
}


UnityEngine_GameObject_o *__fastcall DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EA9DB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA9DB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall DropAutoSellDlgComponent__remove_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  DropAutoSellDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA9CF & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA9CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v9->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (DropAutoSellDlgComponent_o *)sub_B5D990(v9);
  DropAutoSellDlgComponent__Init(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E64CD & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E64CD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent_CallbackFunc__Invoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  DropAutoSellDlgComponent_CallbackFunc_o **v7; // x25
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
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  DropAutoSellDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (DropAutoSellDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
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
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
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
  __int64 v3; // x3
  DropAutoSellDlgComponent_c *v6; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 kind; // x9
  __int64 v10; // x0

  if ( (byte_42E64CB & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, x, (_DWORD)method, v3);
    byte_42E64CB = 1;
  }
  v6 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v6 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v6->static_fields->settingKinds;
  if ( !settingKinds )
    sub_B5D69C(v6, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
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
  __int64 v3; // x3
  DropAutoSellDlgComponent_c *v6; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 i; // x9
  __int64 v10; // x0

  if ( (byte_42E64CC & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_TypeInfo, x, (_DWORD)method, v3);
    byte_42E64CC = 1;
  }
  v6 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v6 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v6->static_fields->settingKinds;
  if ( !settingKinds )
    sub_B5D69C(v6, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
  {
    v10 = sub_B5D6C8(v6);
    sub_B5D668(v10, 0LL);
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