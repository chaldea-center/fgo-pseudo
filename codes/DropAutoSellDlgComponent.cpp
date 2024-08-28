void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  struct System_Int32_array *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_Array_o *v9; // x0
  System_Array_o *v10; // x19
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_RuntimeFieldHandle_o v14; // 0:w1.4
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4A1B895 & 1) == 0 )
  {
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, v1);
    sub_1B715CC(&int___TypeInfo, v2);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
      v3);
    sub_1B715CC(
      &Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
      v4);
    byte_4A1B895 = 1;
  }
  v5 = (System_Array_o *)sub_1B71674(int___TypeInfo, 4LL);
  v14.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  v6 = (struct System_Int32_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v5, v14, 0LL);
  DropAutoSellDlgComponent_TypeInfo->static_fields->settingKinds = v6;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)DropAutoSellDlgComponent_TypeInfo->static_fields,
    (int32_t)v6,
    v7,
    v8);
  v9 = (System_Array_o *)sub_1B71674(int___TypeInfo, 4LL);
  v15.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  v10 = v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61413584(v9, v15, 0LL);
  static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->settingMasks = (struct System_Int32_array *)v10;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->settingMasks, (int32_t)v10, v12, v13);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A1B894 & 1) == 0 )
  {
    sub_1B715CC(&BaseDialog_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4A1B894 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v5;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.enableList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DropAutoSellDlgComponent__Callback(
        DropAutoSellDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct DropAutoSellDlgComponent_CallbackFunc_o *v5; // x20
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_31675492(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_31675492(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A1B88A & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, callback);
    sub_1B715CC(&Method_DropAutoSellDlgComponent_EndClose__, v6);
    byte_4A1B88A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 5;
  v7 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B71570(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v11; // x20
  unsigned __int64 v12; // x29
  il2cpp_array_size_t v13; // w24
  __int64 v14; // x21
  System_Action_c *klass; // x8
  System_Collections_Generic_List_T__o *v16; // x22
  System_Func_int__bool__o *v17; // x23
  char *v18; // x9

  v2 = this;
  if ( (byte_4A1B892 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int___, method);
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, v3);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v4);
    sub_1B715CC(&int___TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B715CC(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__, v7);
    this = (DropAutoSellDlgComponent_o *)sub_1B715CC(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo, v8);
    byte_4A1B892 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_19;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v11 = (System_Int32_array *)sub_1B71674(int___TypeInfo, (unsigned int)(4 - size));
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      v14 = sub_1B71818(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.closeCallbackFunc->klass;
      if ( !klass )
        break;
      if ( v12 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_20;
      if ( !v14 )
        break;
      *(_DWORD *)(v14 + 16) = *((_DWORD *)&klass->_1.byval_arg.data + v12);
      v16 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v17 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v14,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        0LL);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v16,
                                             (System_Func_T__bool__o *)v17,
                                             (const MethodInfo_2E46484 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v11 )
          break;
        if ( v13 >= v11->max_length )
LABEL_20:
          sub_1B71830(this, method);
        v18 = (char *)v11 + 4 * (int)v13++;
        *((_DWORD *)v18 + 8) = *(_DWORD *)(v14 + 16);
      }
      if ( ++v12 == 4 )
        return v11;
    }
LABEL_19:
    sub_1B71828(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v6; // w9

  if ( (byte_4A1B888 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_1B715CC(&StringLiteral_1/*""*/, v3);
    byte_4A1B888 = 1;
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
    || (v6 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v6,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B71828(titleLabel, method);
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

  if ( (byte_4A1B88D & 1) == 0 )
  {
    sub_1B715CC(&Method_DropAutoSellDlgComponent_OnClickButton__, *(_QWORD *)&kind);
    byte_4A1B88D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_DropAutoSellDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B715E4(Method_DropAutoSellDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B715B0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    DropAutoSellDlgComponent__SwitchSelect(this, kind, v7);
    DropAutoSellDlgComponent__SetButtonSelect(this, kind, v8);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickCancel(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4A1B88C & 1) == 0 )
  {
    sub_1B715CC(&Method_DropAutoSellDlgComponent_OnClickCancel__, method);
    byte_4A1B88C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_DropAutoSellDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B715E4(Method_DropAutoSellDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B715B0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v5);
    DropAutoSellDlgComponent__Callback(this, 0, v6);
  }
}


void __fastcall DropAutoSellDlgComponent__OnClickDecide(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4A1B88B & 1) == 0 )
  {
    sub_1B715CC(&Method_DropAutoSellDlgComponent_OnClickDecide__, method);
    byte_4A1B88B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DropAutoSellDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B715E4(Method_DropAutoSellDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B715B0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v28; // x20
  struct UILabel_array *v29; // x8
  UILabel_o *v30; // x20
  struct UILabel_array *v31; // x8
  UILabel_o *v32; // x20
  struct UILabel_array *v33; // x8
  UILabel_o *v34; // x20
  const MethodInfo *v35; // x2
  int monitor; // w25
  __int64 i; // x26
  struct System_Int32_array *settingMasks; // x8
  unsigned __int64 v39; // x27
  struct System_Collections_Generic_List_int__o *enableList; // x20
  __int64 v41; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  const MethodInfo *v45; // x2
  System_Action_o *v46; // x20

  if ( (byte_4A1B889 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, callback);
    sub_1B715CC(&Method_DropAutoSellDlgComponent_EndOpen__, v5);
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B715CC(&LocalizationManager_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_5047/*"DROP_AUTOSELL_MSG"*/, v9);
    sub_1B715CC(&StringLiteral_11730/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v10);
    sub_1B715CC(&StringLiteral_3739/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_1B715CC(&StringLiteral_3738/*"COMMON_CONFIRM_CLOSE"*/, v12);
    sub_1B715CC(&StringLiteral_11728/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v13);
    sub_1B715CC(&StringLiteral_11726/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v14);
    sub_1B715CC(&StringLiteral_5048/*"DROP_AUTOSELL_TITLE"*/, v15);
    sub_1B715CC(&StringLiteral_11727/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v16);
    sub_1B715CC(&StringLiteral_5046/*"DROP_AUTOSELL_EXP_TXT"*/, v17);
    byte_4A1B889 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v20, v21);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5048/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5047/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_44;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3739/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_44;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3738/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5046/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_44;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_44;
  if ( !settingButtonLabel->max_length )
    goto LABEL_45;
  v28 = settingButtonLabel->m_Items[0];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11726/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v28 )
    goto LABEL_44;
  UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
  v29 = this->fields.settingButtonLabel;
  if ( !v29 )
    goto LABEL_44;
  if ( v29->max_length <= 1 )
    goto LABEL_45;
  v30 = v29->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v30 )
    goto LABEL_44;
  UILabel__set_text(v30, (System_String_o *)gameObject, 0LL);
  v31 = this->fields.settingButtonLabel;
  if ( !v31 )
    goto LABEL_44;
  if ( v31->max_length <= 2 )
    goto LABEL_45;
  v32 = v31->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11727/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v32
    || (UILabel__set_text(v32, (System_String_o *)gameObject, 0LL), (v33 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_44:
    sub_1B71828(gameObject, v19);
  }
  if ( v33->max_length <= 3 )
LABEL_45:
    sub_1B71830(gameObject, v19);
  v34 = v33->m_Items[3];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11728/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v34 )
    goto LABEL_44;
  UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
    goto LABEL_44;
  monitor = (int)gameObject[10].monitor;
  for ( i = 8LL; ; ++i )
  {
    gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    }
    settingMasks = *(struct System_Int32_array **)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 8LL);
    if ( !settingMasks )
      goto LABEL_44;
    v39 = i - 8;
    if ( i - 8 >= (int)settingMasks->max_length )
      break;
    if ( !LODWORD(gameObject[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      settingMasks = DropAutoSellDlgComponent_TypeInfo->static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_44;
    }
    if ( v39 >= settingMasks->max_length )
      goto LABEL_45;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & monitor) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !LODWORD(gameObject[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(gameObject);
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      v41 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
      if ( !v41 )
        goto LABEL_44;
      if ( v39 >= *(unsigned int *)(v41 + 24) )
        goto LABEL_45;
      if ( !enableList )
        goto LABEL_44;
      v19 = *(unsigned int *)(v41 + 4 * i);
      items = enableList->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++enableList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = enableList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          enableList,
          v19,
          *(const MethodInfo_34B323C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        enableList->fields._size = size + 1;
        items->m_Items[size + 1] = v19;
      }
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v35);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v45);
  this->fields.state = 1;
  v46 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
  Il2CppObject *Request_object; // x20
  const MethodInfo *v9; // x1
  System_Int32_array *DisableList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v13; // x19

  if ( (byte_4A1B890 & 1) == 0 )
  {
    sub_1B715CC(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B715CC(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v4);
    sub_1B715CC(&NetworkManager_TypeInfo, v5);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A1B890 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v9);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v13 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_1B71828(DisableList, v11);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v13, 0LL);
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
    sub_1B71828(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  for ( i = 0LL; i != 4; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= settingButton->max_length )
      sub_1B71830(decideButton, isEnable);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  int v16; // w8
  struct UISprite_array *settingButtonSprites; // x9
  System_Collections_Generic_List_T__o *enableList; // x22
  UISprite_o *v19; // x21
  System_Func_int__bool__o *v20; // x23
  __int64 *v21; // x8
  bool v22; // nf
  struct UISprite_array *v23; // x8
  Il2CppClass **v24; // x8
  System_Collections_Generic_List_T__o *v25; // x20
  UISprite_o *v26; // x19
  System_Func_int__bool__o *v27; // x22
  __int64 *v28; // x8

  if ( (byte_4A1B88E & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v5);
    sub_1B715CC(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__, v6);
    sub_1B715CC(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo, v7);
    sub_1B715CC(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__, v8);
    sub_1B715CC(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_17421/*"btn_bg_04"*/, v10);
    sub_1B715CC(&StringLiteral_17420/*"btn_bg_03"*/, v11);
    byte_4A1B88E = 1;
  }
  v12 = sub_1B71818(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_DWORD *)(v12 + 16) = kind;
  if ( kind == 4 )
  {
    v15 = sub_1B71818(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 16) = 0;
      v16 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v16 >= settingButtonSprites->max_length )
          goto LABEL_22;
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v19 = settingButtonSprites->m_Items[v16];
        v20 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          0LL);
        v13 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v20,
                (const MethodInfo_2E46484 *)Method_BasicHelper_Any_int___);
        if ( !v19 )
          break;
        if ( v13 )
          v21 = &StringLiteral_17420/*"btn_bg_03"*/;
        else
          v21 = &StringLiteral_17421/*"btn_bg_04"*/;
        UISprite__set_spriteName(v19, (System_String_o *)*v21, 0LL);
        v16 = *(_DWORD *)(v15 + 16) + 1;
        v22 = *(_DWORD *)(v15 + 16) - 3 < 0;
        *(_DWORD *)(v15 + 16) = v16;
        if ( v22 == __OFSUB__(v16, 4) )
          return;
      }
    }
LABEL_21:
    sub_1B71828(v13, v14);
  }
  v23 = this->fields.settingButtonSprites;
  if ( !v23 )
    goto LABEL_21;
  if ( v23->max_length <= kind )
LABEL_22:
    sub_1B71830(v13, v14);
  v24 = &v23->obj.klass + kind;
  v25 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v26 = (UISprite_o *)v24[4];
  v27 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    0LL);
  v13 = BasicHelper__Any_int_(
          v25,
          (System_Func_T__bool__o *)v27,
          (const MethodInfo_2E46484 *)Method_BasicHelper_Any_int___);
  if ( !v26 )
    goto LABEL_21;
  v28 = &StringLiteral_17420/*"btn_bg_03"*/;
  if ( !v13 )
    v28 = &StringLiteral_17421/*"btn_bg_04"*/;
  UISprite__set_spriteName(v26, (System_String_o *)*v28, 0LL);
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
  __int64 v11; // x21
  __int64 v12; // x1
  DropAutoSellDlgComponent_c *v13; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v16; // x22
  struct System_Collections_Generic_List_int__o *v17; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11

  if ( (byte_4A1B88F & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, v5);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_1B715CC(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__, v9);
    sub_1B715CC(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo, v10);
    byte_4A1B88F = 1;
  }
  v11 = sub_1B71818(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  v13 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v13 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v13->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_15;
  if ( settingKinds->max_length <= kind )
    sub_1B71830(v13, v12);
  if ( !v11 )
    goto LABEL_15;
  *(_DWORD *)(v11 + 16) = settingKinds->m_Items[kind + 1];
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v16 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
    0LL);
  v13 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                        enableList,
                                        (System_Func_T__bool__o *)v16,
                                        (const MethodInfo_2E46484 *)Method_BasicHelper_Any_int___);
  v17 = this->fields.enableList;
  if ( !v17 )
    goto LABEL_15;
  v12 = *(unsigned int *)(v11 + 16);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    System_Collections_Generic_List_int___Remove(
      v17,
      v12,
      (const MethodInfo_34B4738 *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v17->fields._items;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++v17->fields._version;
  if ( !items )
LABEL_15:
    sub_1B71828(v13, v12);
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v17,
      v12,
      *(const MethodInfo_34B323C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v17->fields._size = size + 1;
    items->m_Items[size + 1] = v12;
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

  if ( (byte_4A1B886 & 1) == 0 )
  {
    sub_1B715CC(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A1B886 = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1B71AE8(v8);
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
  if ( (byte_4A1B891 & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_1B715CC(&StringLiteral_22170/*"ok"*/, result);
    byte_4A1B891 = 1;
  }
  if ( !result )
    sub_1B71828(this, result);
  v5 = System_String__Equals_61513820(result, (System_String_o *)StringLiteral_22170/*"ok"*/, 0LL);
  v4->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v4, 0, v6);
  DropAutoSellDlgComponent__Callback(v4, v5, v7);
}


UnityEngine_GameObject_o *__fastcall DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A1B893 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1B893 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B71828(0LL, v4);
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

  if ( (byte_4A1B887 & 1) == 0 )
  {
    sub_1B715CC(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4A1B887 = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1B71AE8(v8);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B3488;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B3440;
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
  if ( (byte_4A1B896 & 1) == 0 )
  {
    sub_1B715CC(&bool_TypeInfo, result);
    byte_4A1B896 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B71580(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
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

  if ( (byte_4A1B897 & 1) == 0 )
  {
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4A1B897 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1B71828(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
    sub_1B71830(v5, *(_QWORD *)&x);
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

  if ( (byte_4A1B898 & 1) == 0 )
  {
    sub_1B715CC(&DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x);
    byte_4A1B898 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1B71828(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
    sub_1B71830(v5, *(_QWORD *)&x);
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