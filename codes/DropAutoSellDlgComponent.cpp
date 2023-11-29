void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x2
  System_Array_o *v15; // x19
  struct DropAutoSellDlgComponent_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_RuntimeFieldHandle_o v23; // 0:w1.4
  System_RuntimeFieldHandle_o v24; // 0:w1.4

  if ( (byte_40FBCFF & 1) == 0 )
  {
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v5);
    byte_40FBCFF = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v2);
  v23.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v23, 0LL);
  static_fields = (BattleServantConfConponent_o *)DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B16F98(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v15 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v14);
  v24.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v15, v24, 0LL);
  v16 = DropAutoSellDlgComponent_TypeInfo->static_fields;
  v16->settingMasks = (struct System_Int32_array *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v16->settingMasks,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBCFE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40FBCFE = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    DropAutoSellDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_28421156(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_28421156(
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FBCF4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_DropAutoSellDlgComponent_EndClose__, v10);
    byte_40FBCF4 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Int32_array *v17; // x20
  unsigned __int64 v18; // x25
  il2cpp_array_size_t v19; // w24
  DropAutoSellDlgComponent___c__DisplayClass40_0_o *v20; // x21
  __int64 v21; // x3
  __int64 v22; // x4
  DropAutoSellDlgComponent_c *v23; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *v25; // x22
  System_Func_int__bool__o *v26; // x23
  char *v27; // x9

  if ( (byte_40FBCFC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, method);
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, v4);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v5);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B16FFC(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v9);
    sub_B16FFC(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, v10);
    byte_40FBCFC = 1;
  }
  enableList = this->fields.enableList;
  if ( !enableList )
    goto LABEL_21;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v17 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)(4 - size), v2);
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      v20 = (DropAutoSellDlgComponent___c__DisplayClass40_0_o *)sub_B170CC(
                                                                  DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo,
                                                                  v13,
                                                                  v14,
                                                                  v15,
                                                                  v16);
      DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(v20, 0LL);
      v23 = DropAutoSellDlgComponent_TypeInfo;
      if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
        v23 = DropAutoSellDlgComponent_TypeInfo;
      }
      settingKinds = v23->static_fields->settingKinds;
      if ( !settingKinds )
        break;
      if ( v18 >= settingKinds->max_length )
        goto LABEL_22;
      if ( !v20 )
        break;
      v20->fields.target = settingKinds->m_Items[v18 + 1];
      v25 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
      v26 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v13, v14, v21, v22);
      System_Func_int__bool____ctor(
        v26,
        (Il2CppObject *)v20,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      v23 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                            v25,
                                            (System_Func_T__bool__o *)v26,
                                            (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)v23 & 1) == 0 )
      {
        if ( !v17 )
          break;
        if ( v19 >= v17->max_length )
        {
LABEL_22:
          sub_B17100(v23, v13, v14);
          sub_B170A0();
        }
        v27 = (char *)v17 + 4 * (int)v19++;
        *((_DWORD *)v27 + 8) = v20->fields.target;
      }
      if ( v18++ >= 3 )
        return v17;
    }
LABEL_21:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *msgLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *expTitleLb; // x0
  System_Collections_Generic_List_int__o *enableList; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FBCF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FBCF2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_11;
  UILabel__set_text(msgLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_11;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL),
        (expTitleLb = this->fields.expTitleLb) == 0LL)
    || (UILabel__set_text(expTitleLb, (System_String_o *)StringLiteral_1, 0LL),
        (enableList = this->fields.enableList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          enableList,
          (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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

  if ( (byte_40FBCF7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40FBCF7 = 1;
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

  if ( (byte_40FBCF6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBCF6 = 1;
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

  if ( (byte_40FBCF5 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBCF5 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v26; // x0
  UILabel_o *msgLabel; // x20
  System_String_o *v28; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v30; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v32; // x0
  UILabel_o *expTitleLb; // x20
  System_String_o *v34; // x0
  DropAutoSellDlgComponent_c *v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v39; // x20
  System_String_o *v40; // x0
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x20
  System_String_o *v43; // x0
  struct UILabel_array *v44; // x8
  UILabel_o *v45; // x20
  System_String_o *v46; // x0
  struct UILabel_array *v47; // x8
  UILabel_o *v48; // x20
  System_String_o *v49; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int32_t flag; // w21
  __int64 i; // x22
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x8
  struct System_Int32_array *settingMasks; // x9
  System_Collections_Generic_List_int__o *enableList; // x20
  struct System_Int32_array *settingKinds; // x8
  unsigned __int64 v57; // x25
  const MethodInfo *v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Action_o *v63; // x20

  if ( (byte_40FBCF3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_DropAutoSellDlgComponent_EndOpen__, v5);
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_4688, v9);
    sub_B16FFC(&StringLiteral_11841, v10);
    sub_B16FFC(&StringLiteral_3253, v11);
    sub_B16FFC(&StringLiteral_3252, v12);
    sub_B16FFC(&StringLiteral_11839, v13);
    sub_B16FFC(&StringLiteral_11837, v14);
    sub_B16FFC(&StringLiteral_4689, v15);
    sub_B16FFC(&StringLiteral_11838, v16);
    sub_B16FFC(&StringLiteral_4687, v17);
    byte_40FBCF3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_4689, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, v26, 0LL);
  msgLabel = this->fields.msgLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_4688, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, v28, 0LL);
  decideLabel = this->fields.decideLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, v30, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, v32, 0LL);
  expTitleLb = this->fields.expTitleLb;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_4687, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, v34, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_45;
  if ( !settingButtonLabel->max_length )
    goto LABEL_46;
  v39 = settingButtonLabel->m_Items[0];
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11837, 0LL);
  if ( !v39 )
    goto LABEL_45;
  UILabel__set_text(v39, v40, 0LL);
  v41 = this->fields.settingButtonLabel;
  if ( !v41 )
    goto LABEL_45;
  if ( v41->max_length <= 1 )
    goto LABEL_46;
  v42 = v41->m_Items[1];
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_11841, 0LL);
  if ( !v42 )
    goto LABEL_45;
  UILabel__set_text(v42, v43, 0LL);
  v44 = this->fields.settingButtonLabel;
  if ( !v44 )
    goto LABEL_45;
  if ( v44->max_length <= 2 )
    goto LABEL_46;
  v45 = v44->m_Items[2];
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11838, 0LL);
  if ( !v45 || (UILabel__set_text(v45, v46, 0LL), (v47 = this->fields.settingButtonLabel) == 0LL) )
LABEL_45:
    sub_B170D4();
  if ( v47->max_length <= 3 )
  {
LABEL_46:
    sub_B17100(v35, v36, v37);
    sub_B170A0();
  }
  v48 = v47->m_Items[3];
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11839, 0LL);
  if ( !v48 )
    goto LABEL_45;
  UILabel__set_text(v48, v49, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_45;
  flag = SelfUserGame->fields.flag;
  for ( i = 8LL; ; ++i )
  {
    v35 = DropAutoSellDlgComponent_TypeInfo;
    if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
      v35 = DropAutoSellDlgComponent_TypeInfo;
    }
    static_fields = v35->static_fields;
    settingMasks = static_fields->settingMasks;
    if ( !settingMasks )
      goto LABEL_45;
    v57 = i - 8;
    if ( i - 8 >= (int)settingMasks->max_length )
      break;
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = DropAutoSellDlgComponent_TypeInfo;
      static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
      settingMasks = static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_45;
    }
    if ( v57 >= settingMasks->max_length )
      goto LABEL_46;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & flag) != 0 )
    {
      enableList = this->fields.enableList;
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
      }
      settingKinds = static_fields->settingKinds;
      if ( !settingKinds )
        goto LABEL_45;
      if ( v57 >= settingKinds->max_length )
        goto LABEL_46;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        *((_DWORD *)&settingKinds->obj.klass + i),
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v37);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v58);
  this->fields.state = 1;
  v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v59, v60, v61, v62);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *DisableList; // x0
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v15; // x19
  System_Int32_array *v16; // x0

  if ( (byte_40FBCFA & 1) == 0 )
  {
    sub_B16FFC(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40FBCFA = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 method,
                                                 v2,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v10,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v12);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v15 = DisableList,
        v16 = System_Collections_Generic_List_int___ToArray(
                enableList,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B170D4();
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, v16, v15, 0LL);
}


void __fastcall DropAutoSellDlgComponent__SetButtonEnable(
        DropAutoSellDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  UnityEngine_Behaviour_o *cancelButton; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x21
  struct UICommonButton_array *settingButton; // x8
  UnityEngine_Behaviour_o *v13; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(cancelButton, v5, 0LL);
  v11 = 0LL;
  do
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( (unsigned int)v11 >= settingButton->max_length )
    {
      sub_B17100(v8, v9, v10);
      sub_B170A0();
    }
    v13 = (UnityEngine_Behaviour_o *)settingButton->m_Items[v11];
    if ( !v13 )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(v13, isEnable, 0LL);
    ++v11;
  }
  while ( (unsigned int)(v11 - 1) < 3 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SetButtonSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DropAutoSellDlgComponent___c__DisplayClass35_0_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  DropAutoSellDlgComponent___c__DisplayClass35_1_o *v21; // x20
  __int64 v22; // x3
  __int64 v23; // x4
  int v24; // w8
  struct UISprite_array *settingButtonSprites; // x9
  UISprite_o *v26; // x21
  System_Collections_Generic_List_T__o *enableList; // x22
  System_Func_int__bool__o *v28; // x23
  bool v29; // w0
  __int64 *v30; // x8
  bool v31; // nf
  struct UISprite_array *v32; // x8
  Il2CppClass **v33; // x8
  System_Collections_Generic_List_T__o *v34; // x20
  UISprite_o *v35; // x19
  System_Func_int__bool__o *v36; // x22
  bool v37; // w0
  __int64 *v38; // x8

  if ( (byte_40FBCF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v9);
    sub_B16FFC(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v10);
    sub_B16FFC(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v11);
    sub_B16FFC(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_16891, v13);
    sub_B16FFC(&StringLiteral_16890, v14);
    byte_40FBCF8 = 1;
  }
  v15 = (DropAutoSellDlgComponent___c__DisplayClass35_0_o *)sub_B170CC(
                                                              DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo,
                                                              *(_QWORD *)&kind,
                                                              method,
                                                              v3,
                                                              v4);
  DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_21;
  v15->fields.kind = kind;
  if ( kind == 4 )
  {
    v21 = (DropAutoSellDlgComponent___c__DisplayClass35_1_o *)sub_B170CC(
                                                                DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo,
                                                                v17,
                                                                v18,
                                                                v19,
                                                                v20);
    DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(v21, 0LL);
    if ( v21 )
    {
      v21->fields.i = 0;
      v24 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v24 >= settingButtonSprites->max_length )
          goto LABEL_22;
        v26 = settingButtonSprites->m_Items[v24];
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v28 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v17, v18, v22, v23);
        System_Func_int__bool____ctor(
          v28,
          (Il2CppObject *)v21,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v29 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v28,
                (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
        if ( !v26 )
          break;
        if ( v29 )
          v30 = &StringLiteral_16890;
        else
          v30 = &StringLiteral_16891;
        UISprite__set_spriteName(v26, (System_String_o *)*v30, 0LL);
        v24 = v21->fields.i + 1;
        v31 = v21->fields.i - 2 < 0;
        v21->fields.i = v24;
        if ( !(v31 ^ __OFSUB__(v24, 3) | (v24 == 3)) )
          return;
      }
    }
LABEL_21:
    sub_B170D4();
  }
  v32 = this->fields.settingButtonSprites;
  if ( !v32 )
    goto LABEL_21;
  if ( v32->max_length <= kind )
  {
LABEL_22:
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  v33 = &v32->obj.klass + kind;
  v34 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v35 = (UISprite_o *)v33[4];
  v36 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v17, v18, v19, v20);
  System_Func_int__bool____ctor(
    v36,
    (Il2CppObject *)v15,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v37 = BasicHelper__Any_int_(
          v34,
          (System_Func_T__bool__o *)v36,
          (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
  if ( !v35 )
    goto LABEL_21;
  v38 = &StringLiteral_16890;
  if ( !v37 )
    v38 = &StringLiteral_16891;
  UISprite__set_spriteName(v35, (System_String_o *)*v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DropAutoSellDlgComponent___c__DisplayClass37_0_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  DropAutoSellDlgComponent_c *v19; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v22; // x22
  bool v23; // w0
  System_Collections_Generic_List_int__o *v24; // x8
  int32_t target; // w1

  if ( (byte_40FBCF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, v7);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B16FFC(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v12);
    sub_B16FFC(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v13);
    byte_40FBCF9 = 1;
  }
  v14 = (DropAutoSellDlgComponent___c__DisplayClass37_0_o *)sub_B170CC(
                                                              DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo,
                                                              *(_QWORD *)&kind,
                                                              method,
                                                              v3,
                                                              v4);
  DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(v14, 0LL);
  v19 = DropAutoSellDlgComponent_TypeInfo;
  if ( (BYTE3(DropAutoSellDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v19 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v19->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_13;
  if ( settingKinds->max_length <= kind )
  {
    sub_B17100(v19, v15, v16);
    sub_B170A0();
  }
  if ( !v14
    || (v14->fields.target = settingKinds->m_Items[kind + 1],
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v22 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v15, v16, v17, v18),
        System_Func_int__bool____ctor(
          v22,
          (Il2CppObject *)v14,
          Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
        v23 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v22,
                (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___),
        (v24 = this->fields.enableList) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  target = v14->fields.target;
  if ( v23 )
    System_Collections_Generic_List_int___Remove(
      v24,
      target,
      (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v24,
      target,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_40FBCF0 & 1) == 0 )
  {
    sub_B16FFC(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FBCF0 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  DropAutoSellDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall DropAutoSellDlgComponent__callbackUsetStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  bool v8; // w1
  DropAutoSellDlgComponent_o *v9; // x0

  if ( (byte_40FBCFB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129, result);
    byte_40FBCFB = 1;
  }
  if ( !result )
    sub_B170D4();
  v5 = System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129, 0LL);
  this->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(this, 0, v6);
  if ( v5 )
  {
    v8 = 1;
    v9 = this;
  }
  else
  {
    v9 = this;
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

  if ( (byte_40FBCFD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBCFD = 1;
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
    sub_B170D4();
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

  if ( (byte_40FBCF1 & 1) == 0 )
  {
    sub_B16FFC(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40FBCF1 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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
  if ( (byte_40F8B75 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8B75 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  DropAutoSellDlgComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (DropAutoSellDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
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
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
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

  if ( (byte_40F8B73 & 1) == 0 )
  {
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_40F8B73 = 1;
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
    sub_B170D4();
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
  {
    sub_B17100(v5, *(_QWORD *)&x, method);
    sub_B170A0();
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

  if ( (byte_40F8B74 & 1) == 0 )
  {
    sub_B16FFC(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_40F8B74 = 1;
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
    sub_B170D4();
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
  {
    sub_B17100(v5, *(_QWORD *)&x, method);
    sub_B170A0();
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