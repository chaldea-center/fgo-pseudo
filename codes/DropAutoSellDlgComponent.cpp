void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Array_o *v9; // x0
  struct System_Int32_array *v10; // x19
  System_Array_o *v11; // x0
  System_Array_o *v12; // x19
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v14; // 0:w1.4
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B11DE3 & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v5,
      v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v7,
      v8);
    byte_4B11DE3 = 1;
  }
  v9 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v14.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  v10 = (struct System_Int32_array *)v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v9, v14, 0LL);
  DropAutoSellDlgComponent_TypeInfo->static_fields->settingKinds = v10;
  sub_1BCA784(DropAutoSellDlgComponent_TypeInfo->static_fields, v10);
  v11 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v15.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  v12 = v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v11, v15, 0LL);
  static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->settingMasks = (struct System_Int32_array *)v12;
  sub_1BCA784(&static_fields->settingMasks, v12);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B11DE2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    byte_4B11DE2 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v9;
  sub_1BCA784(&this->fields.enableList, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DropAutoSellDlgComponent__Callback(
        DropAutoSellDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct DropAutoSellDlgComponent_CallbackFunc_o *v4; // x20
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_32413080(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_32413080(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11DD8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_EndClose__, v5, v6);
    byte_4B11DD8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  DropAutoSellDlgComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  __int64 v18; // x2
  __int64 v19; // x3
  System_Int32_array *v20; // x20
  unsigned __int64 v21; // x29
  il2cpp_array_size_t v22; // w24
  __int64 v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_c *klass; // x8
  System_Collections_Generic_List_T__o *v27; // x22
  System_Func_int__bool__o *v28; // x23
  char *v29; // x9

  v3 = this;
  if ( (byte_4B11DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, method, v2);
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v12, v13);
    this = (DropAutoSellDlgComponent_o *)sub_1BCA7E0(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, v14, v15);
    byte_4B11DE0 = 1;
  }
  enableList = v3->fields.enableList;
  if ( !enableList )
    goto LABEL_19;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v20 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)(4 - size));
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      v23 = sub_1BCAA2C(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, method, v18, v19);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, method);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.closeCallbackFunc->klass;
      if ( !klass )
        break;
      if ( v21 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_20;
      if ( !v23 )
        break;
      *(_DWORD *)(v23 + 16) = *((_DWORD *)&klass->_1.byval_arg.data + v21);
      v27 = (System_Collections_Generic_List_T__o *)v3->fields.enableList;
      v28 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v24, v25);
      System_Func_int__bool____ctor(
        v28,
        (Il2CppObject *)v23,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        0LL);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v27,
                                             (System_Func_T__bool__o *)v28,
                                             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v20 )
          break;
        if ( v22 >= v20->max_length )
LABEL_20:
          sub_1BCAA44(this, method);
        v29 = (char *)v20 + 4 * (int)v22++;
        *((_DWORD *)v29 + 8) = *(_DWORD *)(v23 + 16);
      }
      if ( ++v21 == 4 )
        return v20;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v8; // w9

  if ( (byte_4B11DD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B11DD6 = 1;
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
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.expTitleLb;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (enableList = this->fields.enableList) == 0LL)
    || (v8 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v8,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(titleLabel, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4B11DDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_OnClickButton__, *(_QWORD *)&kind, method);
    byte_4B11DDB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_DropAutoSellDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_DropAutoSellDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    DropAutoSellDlgComponent__SwitchSelect(this, kind, v7);
    DropAutoSellDlgComponent__SetButtonSelect(this, kind, v8);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickCancel(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B11DDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_OnClickCancel__, method, v2);
    byte_4B11DDA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_DropAutoSellDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_DropAutoSellDlgComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v6);
    DropAutoSellDlgComponent__Callback(this, 0, v7);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickDecide(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4B11DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_OnClickDecide__, method, v2);
    byte_4B11DD9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_DropAutoSellDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_DropAutoSellDlgComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v6);
    DropAutoSellDlgComponent__RequestUserStatusFlagSet(this, v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v40; // x20
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x20
  struct UILabel_array *v43; // x8
  UILabel_o *v44; // x20
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x20
  const MethodInfo *v47; // x2
  int monitor; // w25
  __int64 i; // x26
  struct System_Int32_array *settingMasks; // x8
  unsigned __int64 v51; // x27
  struct System_Collections_Generic_List_int__o *enableList; // x20
  __int64 v53; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  const MethodInfo *v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20

  if ( (byte_4B11DD7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_EndOpen__, v5, v6);
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5140/*"DROP_AUTOSELL_MSG"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5141/*"DROP_AUTOSELL_TITLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_5139/*"DROP_AUTOSELL_EXP_TXT"*/, v29, v30);
    byte_4B11DD7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5141/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5140/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_44;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_44;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5139/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_44;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_44;
  if ( !settingButtonLabel->max_length )
    goto LABEL_45;
  v40 = settingButtonLabel->m_Items[0];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v40 )
    goto LABEL_44;
  UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
  v41 = this->fields.settingButtonLabel;
  if ( !v41 )
    goto LABEL_44;
  if ( v41->max_length <= 1 )
    goto LABEL_45;
  v42 = v41->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v42 )
    goto LABEL_44;
  UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
  v43 = this->fields.settingButtonLabel;
  if ( !v43 )
    goto LABEL_44;
  if ( v43->max_length <= 2 )
    goto LABEL_45;
  v44 = v43->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v44
    || (UILabel__set_text(v44, (System_String_o *)gameObject, 0LL), (v45 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_44:
    sub_1BCAA3C(gameObject, v32);
  }
  if ( v45->max_length <= 3 )
LABEL_45:
    sub_1BCAA44(gameObject, v32);
  v46 = v45->m_Items[3];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v46 )
    goto LABEL_44;
  UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_44;
  monitor = (int)gameObject[10].monitor;
  for ( i = 8LL; ; ++i )
  {
    gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, v32);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    }
    settingMasks = *(struct System_Int32_array **)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
    if ( !settingMasks )
      goto LABEL_44;
    v51 = i - 8;
    if ( i - 8 >= (int)settingMasks->max_length )
      break;
    if ( !LODWORD(gameObject[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(gameObject, v32);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      settingMasks = DropAutoSellDlgComponent_TypeInfo->static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_44;
    }
    if ( v51 >= settingMasks->max_length )
      goto LABEL_45;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & monitor) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !LODWORD(gameObject[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(gameObject, v32);
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      v53 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
      if ( !v53 )
        goto LABEL_44;
      if ( v51 >= *(unsigned int *)(v53 + 24) )
        goto LABEL_45;
      if ( !enableList )
        goto LABEL_44;
      v32 = *(unsigned int *)(v53 + 4 * i);
      items = enableList->fields._items;
      v55 = Method_System_Collections_Generic_List_int__Add__;
      ++enableList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = enableList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          enableList,
          v32,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        enableList->fields._size = size + 1;
        items->m_Items[size + 1] = v32;
      }
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v47);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v57);
  this->fields.state = 1;
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x20
  const MethodInfo *v16; // x1
  System_Int32_array *DisableList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v20; // x19

  if ( (byte_4B11DDE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B11DDE = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v16);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v20 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_1BCAA3C(DisableList, v18);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v20, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SetButtonEnable(
        DropAutoSellDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  unsigned __int64 i; // x21
  struct UICommonButton_array *settingButton; // x8

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (v5 = isEnable,
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  for ( i = 0LL; i != 4; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= settingButton->max_length )
      sub_1BCAA44(decideButton, isEnable);
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[i];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SetButtonSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  int v28; // w8
  struct UISprite_array *settingButtonSprites; // x9
  System_Collections_Generic_List_T__o *enableList; // x22
  UISprite_o *v31; // x21
  System_Func_int__bool__o *v32; // x23
  __int64 *v33; // x8
  bool v34; // nf
  struct UISprite_array *v35; // x8
  Il2CppClass **v36; // x8
  System_Collections_Generic_List_T__o *v37; // x20
  UISprite_o *v38; // x19
  System_Func_int__bool__o *v39; // x22
  __int64 *v40; // x8

  if ( (byte_4B11DDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v8, v9);
    sub_1BCA7E0(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v12, v13);
    sub_1BCA7E0(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v18, v19);
    byte_4B11DDC = 1;
  }
  v20 = sub_1BCAA2C(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, *(_QWORD *)&kind, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_21;
  *(_DWORD *)(v20 + 16) = kind;
  if ( kind == 4 )
  {
    v25 = sub_1BCAA2C(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v22, v23, v24);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    if ( v25 )
    {
      *(_DWORD *)(v25 + 16) = 0;
      v28 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v28 >= settingButtonSprites->max_length )
          goto LABEL_22;
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v31 = settingButtonSprites->m_Items[v28];
        v32 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v22, v26, v27);
        System_Func_int__bool____ctor(
          v32,
          (Il2CppObject *)v25,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          0LL);
        v21 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v32,
                (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
        if ( !v31 )
          break;
        if ( v21 )
          v33 = &StringLiteral_17643/*"btn_bg_03"*/;
        else
          v33 = &StringLiteral_17644/*"btn_bg_04"*/;
        UISprite__set_spriteName(v31, (System_String_o *)*v33, 0LL);
        v28 = *(_DWORD *)(v25 + 16) + 1;
        v34 = *(_DWORD *)(v25 + 16) - 3 < 0;
        *(_DWORD *)(v25 + 16) = v28;
        if ( v34 == __OFSUB__(v28, 4) )
          return;
      }
    }
LABEL_21:
    sub_1BCAA3C(v21, v22);
  }
  v35 = this->fields.settingButtonSprites;
  if ( !v35 )
    goto LABEL_21;
  if ( v35->max_length <= kind )
LABEL_22:
    sub_1BCAA44(v21, v22);
  v36 = &v35->obj.klass + kind;
  v37 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v38 = (UISprite_o *)v36[4];
  v39 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v22, v23, v24);
  System_Func_int__bool____ctor(
    v39,
    (Il2CppObject *)v20,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    0LL);
  v21 = BasicHelper__Any_int_(
          v37,
          (System_Func_T__bool__o *)v39,
          (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
  if ( !v38 )
    goto LABEL_21;
  v40 = &StringLiteral_17643/*"btn_bg_03"*/;
  if ( !v21 )
    v40 = &StringLiteral_17644/*"btn_bg_04"*/;
  UISprite__set_spriteName(v38, (System_String_o *)*v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  DropAutoSellDlgComponent_c *v22; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v25; // x22
  struct System_Collections_Generic_List_int__o *v26; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11

  if ( (byte_4B11DDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v12, v13);
    sub_1BCA7E0(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v14, v15);
    sub_1BCA7E0(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v16, v17);
    byte_4B11DDD = 1;
  }
  v18 = sub_1BCAA2C(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&kind, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  v22 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, v19);
    v22 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v22->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_15;
  if ( settingKinds->max_length <= kind )
    sub_1BCAA44(v22, v19);
  if ( !v18 )
    goto LABEL_15;
  *(_DWORD *)(v18 + 16) = settingKinds->m_Items[kind + 1];
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v25 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v19, v20, v21);
  System_Func_int__bool____ctor(
    v25,
    (Il2CppObject *)v18,
    Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
    0LL);
  v22 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                        enableList,
                                        (System_Func_T__bool__o *)v25,
                                        (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
  v26 = this->fields.enableList;
  if ( !v26 )
    goto LABEL_15;
  v19 = *(unsigned int *)(v18 + 16);
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    System_Collections_Generic_List_int___Remove(
      v26,
      v19,
      (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_int__Add__;
  ++v26->fields._version;
  if ( !items )
LABEL_15:
    sub_1BCAA3C(v22, v19);
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v26,
      v19,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v26->fields._size = size + 1;
    items->m_Items[size + 1] = v19;
  }
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

  if ( (byte_4B11DD4 & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B11DD4 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1BCACFC(v8);
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

  v4 = this;
  if ( (byte_4B11DDF & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B11DDF = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  v5 = System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL);
  v4->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v4, 0, v6);
  DropAutoSellDlgComponent__Callback(v4, v5, v7);
}


UnityEngine_GameObject_o *__fastcall DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B11DE1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11DE1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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

  if ( (byte_4B11DD5 & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B11DD5 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1BCACFC(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A06DDC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06D94;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall DropAutoSellDlgComponent_CallbackFunc__BeginInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B11DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11DE4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__Invoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
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

  if ( (byte_4B11DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x, method);
    byte_4B11DE5 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1BCAA3C(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
    sub_1BCAA44(v5, *(_QWORD *)&x);
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

  if ( (byte_4B11DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x, method);
    byte_4B11DE6 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1BCAA3C(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
    sub_1BCAA44(v5, *(_QWORD *)&x);
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