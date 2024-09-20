void __fastcall DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct System_Int32_array *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_Array_o *v5; // x0
  System_Array_o *v6; // x19
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_RuntimeFieldHandle_o v10; // 0:w1.4
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4A56F04 & 1) == 0 )
  {
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1);
    sub_1B885B0(&Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE);
    byte_4A56F04 = 1;
  }
  v1 = (System_Array_o *)sub_1B88658(int___TypeInfo, 4LL);
  v10.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  v2 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v10, 0LL);
  DropAutoSellDlgComponent_TypeInfo->static_fields->settingKinds = v2;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)DropAutoSellDlgComponent_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
  v5 = (System_Array_o *)sub_1B88658(int___TypeInfo, 4LL);
  v11.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  v6 = v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v5, v11, 0LL);
  static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->settingMasks = (struct System_Int32_array *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->settingMasks, (int32_t)v6, v8, v9);
}


void __fastcall DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A56F03 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A56F03 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enableList, (int32_t)v3, v4, v5);
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_31865928(this, 0LL, v2);
}


void __fastcall DropAutoSellDlgComponent__Close_31865928(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A56EF9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DropAutoSellDlgComponent_EndClose__);
    byte_4A56EF9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v5, v6);
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v5; // x20
  unsigned __int64 v6; // x29
  il2cpp_array_size_t v7; // w24
  __int64 v8; // x21
  System_Action_c *klass; // x8
  System_Collections_Generic_List_T__o *v10; // x22
  System_Func_int__bool__o *v11; // x23
  char *v12; // x9

  v2 = this;
  if ( (byte_4A56F01 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__);
    this = (DropAutoSellDlgComponent_o *)sub_1B885B0(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
    byte_4A56F01 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_19;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)(4 - size));
    v6 = 0LL;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_1B887FC(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0LL);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.closeCallbackFunc->klass;
      if ( !klass )
        break;
      if ( v6 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_20;
      if ( !v8 )
        break;
      *(_DWORD *)(v8 + 16) = *((_DWORD *)&klass->_1.byval_arg.data + v6);
      v10 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v11 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v11,
        (Il2CppObject *)v8,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        0LL);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v10,
                                             (System_Func_T__bool__o *)v11,
                                             (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v5 )
          break;
        if ( v7 >= v5->max_length )
LABEL_20:
          sub_1B88814(this, method);
        v12 = (char *)v5 + 4 * (int)v7++;
        *((_DWORD *)v12 + 8) = *(_DWORD *)(v8 + 16);
      }
      if ( ++v6 == 4 )
        return v5;
    }
LABEL_19:
    sub_1B8880C(this, method);
  }
  return 0LL;
}


void __fastcall DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v5; // w9

  if ( (byte_4A56EF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56EF7 = 1;
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
    || (v5 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v5,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(titleLabel, method);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4A56EFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DropAutoSellDlgComponent_OnClickButton__);
    byte_4A56EFC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_DropAutoSellDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_DropAutoSellDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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

  if ( (byte_4A56EFB & 1) == 0 )
  {
    sub_1B885B0(&Method_DropAutoSellDlgComponent_OnClickCancel__);
    byte_4A56EFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_DropAutoSellDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DropAutoSellDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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

  if ( (byte_4A56EFA & 1) == 0 )
  {
    sub_1B885B0(&Method_DropAutoSellDlgComponent_OnClickDecide__);
    byte_4A56EFA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DropAutoSellDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DropAutoSellDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v15; // x20
  struct UILabel_array *v16; // x8
  UILabel_o *v17; // x20
  struct UILabel_array *v18; // x8
  UILabel_o *v19; // x20
  struct UILabel_array *v20; // x8
  UILabel_o *v21; // x20
  const MethodInfo *v22; // x2
  int monitor; // w25
  __int64 i; // x26
  struct System_Int32_array *settingMasks; // x8
  unsigned __int64 v26; // x27
  struct System_Collections_Generic_List_int__o *enableList; // x20
  __int64 v28; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x20

  if ( (byte_4A56EF8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DropAutoSellDlgComponent_EndOpen__);
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5066/*"DROP_AUTOSELL_MSG"*/);
    sub_1B885B0(&StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1B885B0(&StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1B885B0(&StringLiteral_5067/*"DROP_AUTOSELL_TITLE"*/);
    sub_1B885B0(&StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_1B885B0(&StringLiteral_5065/*"DROP_AUTOSELL_EXP_TXT"*/);
    byte_4A56EF8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5067/*"DROP_AUTOSELL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5066/*"DROP_AUTOSELL_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_44;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_44;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5065/*"DROP_AUTOSELL_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_44;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_44;
  if ( !settingButtonLabel->max_length )
    goto LABEL_45;
  v15 = settingButtonLabel->m_Items[0];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
  if ( !v15 )
    goto LABEL_44;
  UILabel__set_text(v15, (System_String_o *)gameObject, 0LL);
  v16 = this->fields.settingButtonLabel;
  if ( !v16 )
    goto LABEL_44;
  if ( v16->max_length <= 1 )
    goto LABEL_45;
  v17 = v16->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11771/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
  if ( !v17 )
    goto LABEL_44;
  UILabel__set_text(v17, (System_String_o *)gameObject, 0LL);
  v18 = this->fields.settingButtonLabel;
  if ( !v18 )
    goto LABEL_44;
  if ( v18->max_length <= 2 )
    goto LABEL_45;
  v19 = v18->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11768/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
  if ( !v19
    || (UILabel__set_text(v19, (System_String_o *)gameObject, 0LL), (v20 = this->fields.settingButtonLabel) == 0LL) )
  {
LABEL_44:
    sub_1B8880C(gameObject, v6);
  }
  if ( v20->max_length <= 3 )
LABEL_45:
    sub_1B88814(gameObject, v6);
  v21 = v20->m_Items[3];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11769/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
  if ( !v21 )
    goto LABEL_44;
  UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
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
    v26 = i - 8;
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
    if ( v26 >= settingMasks->max_length )
      goto LABEL_45;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & monitor) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !LODWORD(gameObject[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(gameObject);
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      v28 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
      if ( !v28 )
        goto LABEL_44;
      if ( v26 >= *(unsigned int *)(v28 + 24) )
        goto LABEL_45;
      if ( !enableList )
        goto LABEL_44;
      v6 = *(unsigned int *)(v28 + 4 * i);
      items = enableList->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++enableList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = enableList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          enableList,
          v6,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        enableList->fields._size = size + 1;
        items->m_Items[size + 1] = v6;
      }
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v22);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v32);
  this->fields.state = 1;
  v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
}


void __fastcall DropAutoSellDlgComponent__RequestUserStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *DisableList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v9; // x19

  if ( (byte_4A56EFF & 1) == 0 )
  {
    sub_1B885B0(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56EFF = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v5);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v9 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_1B8880C(DisableList, v7);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v9, 0LL);
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
    sub_1B8880C(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  for ( i = 0LL; i != 4; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= settingButton->max_length )
      sub_1B88814(decideButton, isEnable);
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[i];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  }
}


void __fastcall DropAutoSellDlgComponent__SetButtonSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  int v9; // w8
  struct UISprite_array *settingButtonSprites; // x9
  System_Collections_Generic_List_T__o *enableList; // x22
  UISprite_o *v12; // x21
  System_Func_int__bool__o *v13; // x23
  __int64 *v14; // x8
  bool v15; // nf
  struct UISprite_array *v16; // x8
  Il2CppClass **v17; // x8
  System_Collections_Generic_List_T__o *v18; // x20
  UISprite_o *v19; // x19
  System_Func_int__bool__o *v20; // x22
  __int64 *v21; // x8

  if ( (byte_4A56EFD & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__);
    sub_1B885B0(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
    sub_1B885B0(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__);
    sub_1B885B0(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A56EFD = 1;
  }
  v5 = sub_1B887FC(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_DWORD *)(v5 + 16) = kind;
  if ( kind == 4 )
  {
    v8 = sub_1B887FC(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0LL);
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) = 0;
      v9 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( v9 >= settingButtonSprites->max_length )
          goto LABEL_22;
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v12 = settingButtonSprites->m_Items[v9];
        v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          0LL);
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v13,
               (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
        if ( !v12 )
          break;
        if ( v6 )
          v14 = &StringLiteral_17470/*"btn_bg_03"*/;
        else
          v14 = &StringLiteral_17471/*"btn_bg_04"*/;
        UISprite__set_spriteName(v12, (System_String_o *)*v14, 0LL);
        v9 = *(_DWORD *)(v8 + 16) + 1;
        v15 = *(_DWORD *)(v8 + 16) - 3 < 0;
        *(_DWORD *)(v8 + 16) = v9;
        if ( v15 == __OFSUB__(v9, 4) )
          return;
      }
    }
LABEL_21:
    sub_1B8880C(v6, v7);
  }
  v16 = this->fields.settingButtonSprites;
  if ( !v16 )
    goto LABEL_21;
  if ( v16->max_length <= kind )
LABEL_22:
    sub_1B88814(v6, v7);
  v17 = &v16->obj.klass + kind;
  v18 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v19 = (UISprite_o *)v17[4];
  v20 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    0LL);
  v6 = BasicHelper__Any_int_(
         v18,
         (System_Func_T__bool__o *)v20,
         (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
  if ( !v19 )
    goto LABEL_21;
  v21 = &StringLiteral_17470/*"btn_bg_03"*/;
  if ( !v6 )
    v21 = &StringLiteral_17471/*"btn_bg_04"*/;
  UISprite__set_spriteName(v19, (System_String_o *)*v21, 0LL);
}


void __fastcall DropAutoSellDlgComponent__SwitchSelect(
        DropAutoSellDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  DropAutoSellDlgComponent_c *v7; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v10; // x22
  struct System_Collections_Generic_List_int__o *v11; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11

  if ( (byte_4A56EFE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int___);
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__);
    sub_1B885B0(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
    byte_4A56EFE = 1;
  }
  v5 = sub_1B887FC(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v7 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v7 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v7->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_15;
  if ( settingKinds->max_length <= kind )
    sub_1B88814(v7, v6);
  if ( !v5 )
    goto LABEL_15;
  *(_DWORD *)(v5 + 16) = settingKinds->m_Items[kind + 1];
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v10 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
    0LL);
  v7 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                       enableList,
                                       (System_Func_T__bool__o *)v10,
                                       (const MethodInfo_2E6A9A4 *)Method_BasicHelper_Any_int___);
  v11 = this->fields.enableList;
  if ( !v11 )
    goto LABEL_15;
  v6 = *(unsigned int *)(v5 + 16);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    System_Collections_Generic_List_int___Remove(
      v11,
      v6,
      (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v11->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v11->fields._version;
  if ( !items )
LABEL_15:
    sub_1B8880C(v7, v6);
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      v6,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = v6;
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

  if ( (byte_4A56EF5 & 1) == 0 )
  {
    sub_1B885B0(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_4A56EF5 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1B88ACC(v8);
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
  if ( (byte_4A56F00 & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A56F00 = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  v5 = System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL);
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

  if ( (byte_4A56F02 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56F02 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A56EF6 & 1) == 0 )
  {
    sub_1B885B0(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_4A56EF6 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8B2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8AE4;
}


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
  if ( (byte_4A56F05 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56F05 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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

  if ( (byte_4A56F06 & 1) == 0 )
  {
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    byte_4A56F06 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1B8880C(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= settingKinds->max_length )
    sub_1B88814(v5, *(_QWORD *)&x);
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

  if ( (byte_4A56F07 & 1) == 0 )
  {
    sub_1B885B0(&DropAutoSellDlgComponent_TypeInfo);
    byte_4A56F07 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1B8880C(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= settingKinds->max_length )
    sub_1B88814(v5, *(_QWORD *)&x);
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