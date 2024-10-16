void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct System_Int32_array *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4AB23C5 & 1) == 0 )
  {
    sub_1BAB41C(&AutomaticSaleDlgComponent_TypeInfo, v1);
    sub_1BAB41C(&int___TypeInfo, v2);
    sub_1BAB41C(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v3);
    byte_4AB23C5 = 1;
  }
  v4 = (System_Array_o *)sub_1BAB4C4(int___TypeInfo, 9LL);
  v8.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  v5 = (struct System_Int32_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61956208(v4, v8, 0LL);
  AutomaticSaleDlgComponent_TypeInfo->static_fields->settingList = v5;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)AutomaticSaleDlgComponent_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB23C4 & 1) == 0 )
  {
    sub_1BAB41C(&BaseDialog_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4AB23C4 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.enableList, (int32_t)v5, v6, v7);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__Callback(
        AutomaticSaleDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct AutomaticSaleDlgComponent_CallbackFunc_o *v5; // x20
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BAB3C0(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_33285244(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_33285244(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AB23BB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_EndClose__, v6);
    byte_4AB23BB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 5;
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__EndClose(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AutomaticSaleDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BAB678(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BAB3C0(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall AutomaticSaleDlgComponent__EndOpen(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Int32_array *__fastcall AutomaticSaleDlgComponent__GetDisableList(
        AutomaticSaleDlgComponent_o *this,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v10; // x20
  __int64 v11; // x21
  il2cpp_array_size_t v12; // w24
  System_Collections_Generic_List_T__o *v13; // x22
  System_Func_int__bool__o *v14; // x23
  char *v15; // x9
  int v16; // w8
  bool v17; // nf

  v2 = this;
  if ( (byte_4AB23C3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_int___, method);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v3);
    sub_1BAB41C(&int___TypeInfo, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v6);
    this = (AutomaticSaleDlgComponent_o *)sub_1BAB41C(&AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo, v7);
    byte_4AB23C3 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v10 = (System_Int32_array *)sub_1BAB4C4(int___TypeInfo, (unsigned int)(9 - size));
  v11 = sub_1BAB668(AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
LABEL_15:
    sub_1BAB678(this, method);
  v12 = 0;
  *(_DWORD *)(v11 + 16) = 0;
  do
  {
    v13 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
    v14 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v14,
      (Il2CppObject *)v11,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      0LL);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v13,
                                            (System_Func_T__bool__o *)v14,
                                            (const MethodInfo_2EAF410 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v10 )
        goto LABEL_15;
      if ( v12 >= v10->max_length )
        sub_1BAB680(this, method);
      v15 = (char *)v10 + 4 * (int)v12++;
      *((_DWORD *)v15 + 8) = *(_DWORD *)(v11 + 16);
    }
    v16 = *(_DWORD *)(v11 + 16) + 1;
    v17 = *(_DWORD *)(v11 + 16) - 8 < 0;
    *(_DWORD *)(v11 + 16) = v16;
  }
  while ( v17 != __OFSUB__(v16, 9) );
  return v10;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v6; // w9

  if ( (byte_4AB23B9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_1BAB41C(&StringLiteral_1/*""*/, v3);
    byte_4AB23B9 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.msgLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.expTitleLb;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.fouTitleLb;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.equipTitleLb;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (enableList = this->fields.enableList) == 0LL)
    || (v6 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v6,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1BAB678(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__OnClickButton(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4AB23BE & 1) == 0 )
  {
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_OnClickButton__, *(_QWORD *)&kind);
    byte_4AB23BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_AutomaticSaleDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_AutomaticSaleDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    AutomaticSaleDlgComponent__SwitchSelect(this, kind, v7);
    AutomaticSaleDlgComponent__SetButtonSelect(this, kind, v8);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickCancel(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4AB23BD & 1) == 0 )
  {
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_OnClickCancel__, method);
    byte_4AB23BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_AutomaticSaleDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_AutomaticSaleDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v5);
    AutomaticSaleDlgComponent__Callback(this, 0, v6);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickDecide(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4AB23BC & 1) == 0 )
  {
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_OnClickDecide__, method);
    byte_4AB23BC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_AutomaticSaleDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_AutomaticSaleDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v5);
    AutomaticSaleDlgComponent__RequestUserStatusFlagSet(this, v6);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickEquip1(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 6, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickEquip2(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 7, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickEquip3(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 8, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickExp1(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 0, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickExp2(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 1, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickExp3(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 2, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickFou1(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 3, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickFou2(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 4, v2);
}


void __fastcall AutomaticSaleDlgComponent__OnClickFou3(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__OnClickButton(this, 5, v2);
}


void __fastcall AutomaticSaleDlgComponent__Open(
        AutomaticSaleDlgComponent_o *this,
        AutomaticSaleDlgComponent_CallbackFunc_o *callback,
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
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  unsigned __int64 v30; // x29
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v32; // x20
  struct UILabel_array *v33; // x8
  UILabel_o *v34; // x20
  struct UILabel_array *v35; // x8
  unsigned __int64 v36; // x21
  UILabel_o *v37; // x20
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x2
  int monitor; // w22
  unsigned __int64 i; // x20
  __int64 v42; // x8
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  const MethodInfo *v46; // x2
  System_Action_o *v47; // x20

  if ( (byte_4AB23BA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, callback);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_EndOpen__, v5);
    sub_1BAB41C(&AutomaticSaleDlgComponent_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v8);
    sub_1BAB41C(&StringLiteral_12349/*"SUMMON_AUTOSALE_FOU_TXT"*/, v9);
    sub_1BAB41C(&StringLiteral_12351/*"SUMMON_AUTOSALE_TITLE"*/, v10);
    sub_1BAB41C(&StringLiteral_11780/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v11);
    sub_1BAB41C(&StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, v12);
    sub_1BAB41C(&StringLiteral_12347/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v13);
    sub_1BAB41C(&StringLiteral_12350/*"SUMMON_AUTOSALE_MSG"*/, v14);
    sub_1BAB41C(&StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_1BAB41C(&StringLiteral_11776/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v16);
    sub_1BAB41C(&StringLiteral_12348/*"SUMMON_AUTOSALE_EXP_TXT"*/, v17);
    sub_1BAB41C(&StringLiteral_11777/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v18);
    byte_4AB23BA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v21, v22);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12350/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_41;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_41;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_41;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12348/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_41;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12349/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_41;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12347/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_41;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v30 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_41;
    if ( v30 >= settingButtonLabel->max_length )
      goto LABEL_42;
    v32 = settingButtonLabel->m_Items[v30];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11776/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v32 )
      goto LABEL_41;
    UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
    v33 = this->fields.settingButtonLabel;
    if ( !v33 )
      goto LABEL_41;
    if ( v30 + 1 >= v33->max_length )
      goto LABEL_42;
    v34 = v33->m_Items[v30 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11780/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v34 )
      goto LABEL_41;
    UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
    v35 = this->fields.settingButtonLabel;
    if ( !v35 )
      goto LABEL_41;
    v36 = v30 + 2;
    if ( v30 + 2 >= v35->max_length )
LABEL_42:
      sub_1BAB680(gameObject, v20);
    v37 = v35->m_Items[v30 + 2];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11777/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v37 )
      goto LABEL_41;
    UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
    v30 += 3LL;
  }
  while ( v36 - 2 < 6 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject
    || (v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        AndroidBackKeyManager__AddBackBtn(v38, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL) )
  {
LABEL_41:
    sub_1BAB678(gameObject, v20);
  }
  monitor = (int)gameObject[10].monitor;
  for ( i = 0LL; i != 9; ++i )
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v42 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v42 )
      goto LABEL_41;
    if ( i >= *(unsigned int *)(v42 + 24) )
      goto LABEL_42;
    if ( (*(_DWORD *)(v42 + 4 * i + 32) & monitor) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_41;
      v43 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v44 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v43 )
        goto LABEL_41;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v43 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)gameObject,
          i,
          *(const MethodInfo_3530898 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_DWORD *)(v43 + 4 * klass_low + 32) = i;
      }
    }
  }
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v39);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v46);
  this->fields.state = 1;
  v47 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_4AB23C1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BAB41C(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v4);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4AB23C1 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v9);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v13 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_1BAB678(DisableList, v11);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__SetButtonEnable(
        AutomaticSaleDlgComponent_o *this,
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
    sub_1BAB678(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  for ( i = 0LL; i != 9; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= settingButton->max_length )
      sub_1BAB680(decideButton, isEnable);
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[i];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__SetButtonSelect(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_4AB23BF & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v5);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v6);
    sub_1BAB41C(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v7);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v8);
    sub_1BAB41C(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v9);
    sub_1BAB41C(&StringLiteral_17501/*"btn_bg_04"*/, v10);
    sub_1BAB41C(&StringLiteral_17500/*"btn_bg_03"*/, v11);
    byte_4AB23BF = 1;
  }
  v12 = sub_1BAB668(AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_21;
  *(_DWORD *)(v12 + 16) = kind;
  if ( kind == 9 )
  {
    v15 = sub_1BAB668(AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo);
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
        v20 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
          0LL);
        v13 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v20,
                (const MethodInfo_2EAF410 *)Method_BasicHelper_Any_int___);
        if ( !v19 )
          break;
        if ( v13 )
          v21 = &StringLiteral_17500/*"btn_bg_03"*/;
        else
          v21 = &StringLiteral_17501/*"btn_bg_04"*/;
        UISprite__set_spriteName(v19, (System_String_o *)*v21, 0LL);
        v16 = *(_DWORD *)(v15 + 16) + 1;
        v22 = *(_DWORD *)(v15 + 16) - 8 < 0;
        *(_DWORD *)(v15 + 16) = v16;
        if ( v22 == __OFSUB__(v16, 9) )
          return;
      }
    }
LABEL_21:
    sub_1BAB678(v13, v14);
  }
  v23 = this->fields.settingButtonSprites;
  if ( !v23 )
    goto LABEL_21;
  if ( v23->max_length <= kind )
LABEL_22:
    sub_1BAB680(v13, v14);
  v24 = &v23->obj.klass + kind;
  v25 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v26 = (UISprite_o *)v24[4];
  v27 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
    0LL);
  v13 = BasicHelper__Any_int_(
          v25,
          (System_Func_T__bool__o *)v27,
          (const MethodInfo_2EAF410 *)Method_BasicHelper_Any_int___);
  if ( !v26 )
    goto LABEL_21;
  v28 = &StringLiteral_17500/*"btn_bg_03"*/;
  if ( !v13 )
    v28 = &StringLiteral_17501/*"btn_bg_04"*/;
  UISprite__set_spriteName(v26, (System_String_o *)*v28, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__SwitchSelect(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v14; // x22
  struct System_Collections_Generic_List_int__o *v15; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11

  if ( (byte_4AB23C0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_1BAB41C(&System_Func_int__bool__TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Remove__, v7);
    sub_1BAB41C(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v8);
    sub_1BAB41C(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v9);
    byte_4AB23C0 = 1;
  }
  v10 = sub_1BAB668(AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_DWORD *)(v10 + 16) = kind;
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v14 = (System_Func_int__bool__o *)sub_1BAB668(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
    0LL);
  v11 = BasicHelper__Any_int_(
          enableList,
          (System_Func_T__bool__o *)v14,
          (const MethodInfo_2EAF410 *)Method_BasicHelper_Any_int___);
  v15 = this->fields.enableList;
  if ( !v15 )
    goto LABEL_11;
  v12 = *(unsigned int *)(v10 + 16);
  if ( v11 )
  {
    System_Collections_Generic_List_int___Remove(
      v15,
      v12,
      (const MethodInfo_3531D94 *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v15->fields._items;
  v17 = Method_System_Collections_Generic_List_int__Add__;
  ++v15->fields._version;
  if ( !items )
LABEL_11:
    sub_1BAB678(v11, v12);
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v15,
      v12,
      *(const MethodInfo_3530898 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v15->fields._size = size + 1;
    items->m_Items[size + 1] = v12;
  }
}


void __fastcall AutomaticSaleDlgComponent__add_callbackFunc(
        AutomaticSaleDlgComponent_o *this,
        AutomaticSaleDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AutomaticSaleDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AutomaticSaleDlgComponent_o *v11; // x0
  AutomaticSaleDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4AB23B7 & 1) == 0 )
  {
    sub_1BAB41C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AB23B7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AutomaticSaleDlgComponent_CallbackFunc_c *)v8->klass != AutomaticSaleDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  AutomaticSaleDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall AutomaticSaleDlgComponent__callbackUsetStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent_o *v4; // x19
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_4AB23C2 & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_1BAB41C(&StringLiteral_22261/*"ok"*/, result);
    byte_4AB23C2 = 1;
  }
  if ( !result )
    sub_1BAB678(this, result);
  v5 = System_String__Equals_62056444(result, (System_String_o *)StringLiteral_22261/*"ok"*/, 0LL);
  v4->fields.state = 4;
  AutomaticSaleDlgComponent__SetButtonEnable(v4, 0, v6);
  AutomaticSaleDlgComponent__Callback(v4, v5, v7);
}


void __fastcall AutomaticSaleDlgComponent__remove_callbackFunc(
        AutomaticSaleDlgComponent_o *this,
        AutomaticSaleDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct AutomaticSaleDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  AutomaticSaleDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4AB23B8 & 1) == 0 )
  {
    sub_1BAB41C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4AB23B8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (AutomaticSaleDlgComponent_CallbackFunc_c *)v8->klass != AutomaticSaleDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  AutomaticSaleDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent_CallbackFunc___ctor(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EA508;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EA4C0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AutomaticSaleDlgComponent_CallbackFunc__BeginInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4AB23C6 & 1) == 0 )
  {
    sub_1BAB41C(&bool_TypeInfo, result);
    byte_4AB23C6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__Invoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(
        AutomaticSaleDlgComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutomaticSaleDlgComponent___c__DisplayClass41_0___SetButtonSelect_b__0(
        AutomaticSaleDlgComponent___c__DisplayClass41_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.kind == x;
}


void __fastcall AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(
        AutomaticSaleDlgComponent___c__DisplayClass41_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutomaticSaleDlgComponent___c__DisplayClass41_1___SetButtonSelect_b__1(
        AutomaticSaleDlgComponent___c__DisplayClass41_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}


void __fastcall AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(
        AutomaticSaleDlgComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutomaticSaleDlgComponent___c__DisplayClass43_0___SwitchSelect_b__0(
        AutomaticSaleDlgComponent___c__DisplayClass43_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.kind == x;
}


void __fastcall AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(
        AutomaticSaleDlgComponent___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AutomaticSaleDlgComponent___c__DisplayClass46_0___GetDisableList_b__0(
        AutomaticSaleDlgComponent___c__DisplayClass46_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}