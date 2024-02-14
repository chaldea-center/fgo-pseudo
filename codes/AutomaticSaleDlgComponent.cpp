void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct AutomaticSaleDlgComponent_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_42115CF & 1) == 0 )
  {
    sub_B0D8A4(&AutomaticSaleDlgComponent_TypeInfo, v1);
    sub_B0D8A4(&int___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v3);
    byte_42115CF = 1;
  }
  v4 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 9LL);
  v6.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v6, 0LL);
  static_fields = AutomaticSaleDlgComponent_TypeInfo->static_fields;
  static_fields->settingList = (struct System_Int32_array *)v4;
  sub_B0D840(static_fields, v4);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42115CE & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_42115CE = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v6;
  sub_B0D840(&this->fields.enableList, v6);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, v7);
}


void __fastcall AutomaticSaleDlgComponent__Callback(
        AutomaticSaleDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  struct AutomaticSaleDlgComponent_CallbackFunc_o **p_callbackFunc; // x0
  AutomaticSaleDlgComponent_CallbackFunc_o *v4; // x19
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B0D840(p_callbackFunc, 0LL);
    AutomaticSaleDlgComponent_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_18649400(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_18649400(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42115C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent_EndClose__, v5);
    byte_42115C5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, v9);
}


void __fastcall AutomaticSaleDlgComponent__EndClose(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AutomaticSaleDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v5, 0LL);
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
  __int64 v8; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AutomaticSaleDlgComponent___c__DisplayClass46_0_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  il2cpp_array_size_t v17; // w24
  System_Collections_Generic_List_T__o *v18; // x22
  System_Func_int__bool__o *v19; // x23
  char *v20; // x9
  int v21; // w8
  bool v22; // nf
  __int64 v24; // x0

  v2 = this;
  if ( (byte_42115CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, method);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v3);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v7);
    this = (AutomaticSaleDlgComponent_o *)sub_B0D8A4(&AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo, v8);
    byte_42115CD = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v11 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)(9 - size));
  v14 = (AutomaticSaleDlgComponent___c__DisplayClass46_0_o *)sub_B0D974(
                                                               AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo,
                                                               v12,
                                                               v13);
  AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(v14, 0LL);
  if ( !v14 )
LABEL_15:
    sub_B0D97C(this);
  v14->fields.i = 0;
  v17 = 0;
  do
  {
    v18 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
    v19 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v15, v16);
    System_Func_int__bool____ctor(
      v19,
      (Il2CppObject *)v14,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v18,
                                            (System_Func_T__bool__o *)v19,
                                            (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_15;
      if ( v17 >= v11->max_length )
      {
        v24 = sub_B0D9A8(this);
        sub_B0D948(v24, 0LL);
      }
      v20 = (char *)v11 + 4 * (int)v17++;
      *((_DWORD *)v20 + 8) = v14->fields.i;
    }
    v21 = v14->fields.i + 1;
    v22 = v14->fields.i - 8 < 0;
    v14->fields.i = v21;
  }
  while ( v22 != __OFSUB__(v21, 9) );
  return v11;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42115C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42115C3 = 1;
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
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.equipTitleLb) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)this->fields.enableList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          (System_Collections_Generic_List_int__o *)titleLabel,
          (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__OnClickButton(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42115C8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_42115C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AutomaticSaleDlgComponent__SwitchSelect(this, kind, v5);
    AutomaticSaleDlgComponent__SetButtonSelect(this, kind, v6);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickCancel(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_42115C7 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42115C7 = 1;
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
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v3);
    AutomaticSaleDlgComponent__Callback(this, 0, v4);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickDecide(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x1

  if ( (byte_42115C6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42115C6 = 1;
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
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v3);
    AutomaticSaleDlgComponent__RequestUserStatusFlagSet(this, v4);
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
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  __int64 v28; // x25
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v30; // x20
  struct UILabel_array *v31; // x8
  UILabel_o *v32; // x20
  struct UILabel_array *v33; // x8
  int v34; // w26
  UILabel_o *v35; // x20
  UnityEngine_GameObject_o *v36; // x20
  const MethodInfo *v37; // x2
  int klass; // w21
  unsigned __int64 v39; // x20
  __int64 v40; // x8
  const MethodInfo *v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x20
  const MethodInfo *v46; // x3
  __int64 v47; // x0

  if ( (byte_42115C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent_EndOpen__, v6);
    sub_B0D8A4(&AutomaticSaleDlgComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_12453/*"SUMMON_AUTOSALE_FOU_TXT"*/, v10);
    sub_B0D8A4(&StringLiteral_12455/*"SUMMON_AUTOSALE_TITLE"*/, v11);
    sub_B0D8A4(&StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v12);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B0D8A4(&StringLiteral_12451/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v14);
    sub_B0D8A4(&StringLiteral_12454/*"SUMMON_AUTOSALE_MSG"*/, v15);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v16);
    sub_B0D8A4(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v17);
    sub_B0D8A4(&StringLiteral_12452/*"SUMMON_AUTOSALE_EXP_TXT"*/, v18);
    sub_B0D8A4(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_42115C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B0D840(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12455/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12452/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12453/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_45;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_45;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v28 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_45;
    if ( (unsigned int)v28 >= settingButtonLabel->max_length )
      goto LABEL_46;
    v30 = settingButtonLabel->m_Items[v28];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v30 )
      goto LABEL_45;
    UILabel__set_text(v30, (System_String_o *)gameObject, 0LL);
    v31 = this->fields.settingButtonLabel;
    if ( !v31 )
      goto LABEL_45;
    if ( (unsigned int)(v28 + 1) >= v31->max_length )
      goto LABEL_46;
    v32 = v31->m_Items[(int)v28 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v32 )
      goto LABEL_45;
    UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
    v33 = this->fields.settingButtonLabel;
    if ( !v33 )
      goto LABEL_45;
    v34 = v28 + 2;
    if ( (unsigned int)(v28 + 2) >= v33->max_length )
    {
LABEL_46:
      v47 = sub_B0D9A8(gameObject);
      sub_B0D948(v47, 0LL);
    }
    v35 = (UILabel_o *)(&v33->bounds)[(int)v28 + 4];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v35 )
      goto LABEL_45;
    UILabel__set_text(v35, (System_String_o *)gameObject, 0LL);
    v28 += 3LL;
  }
  while ( (unsigned int)(v34 + 1) < 9 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v36, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
LABEL_45:
    sub_B0D97C(gameObject);
  klass = (int)gameObject[10].klass;
  v39 = 0LL;
  do
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( (BYTE3(AutomaticSaleDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v40 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v40 )
      goto LABEL_45;
    if ( v39 >= *(unsigned int *)(v40 + 24) )
      goto LABEL_46;
    if ( (*(_DWORD *)(v40 + 4 * v39 + 32) & klass) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)gameObject,
        v39,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  while ( v39++ < 8 );
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v37);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v42);
  this->fields.state = 1;
  v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, v46);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_42115CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_42115CB = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v8,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v10);
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


void __fastcall AutomaticSaleDlgComponent__SetButtonEnable(
        AutomaticSaleDlgComponent_o *this,
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
  while ( (unsigned int)(v7 - 1) < 8 );
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
  __int64 v12; // x1
  AutomaticSaleDlgComponent___c__DisplayClass41_0_o *v13; // x21
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  AutomaticSaleDlgComponent___c__DisplayClass41_1_o *v17; // x20
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

  if ( (byte_42115C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v7);
    sub_B0D8A4(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v8);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v9);
    sub_B0D8A4(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v11);
    sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v12);
    byte_42115C9 = 1;
  }
  v13 = (AutomaticSaleDlgComponent___c__DisplayClass41_0_o *)sub_B0D974(
                                                               AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo,
                                                               *(_QWORD *)&kind,
                                                               method);
  AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.kind = kind;
  if ( kind == 9 )
  {
    v17 = (AutomaticSaleDlgComponent___c__DisplayClass41_1_o *)sub_B0D974(
                                                                 AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo,
                                                                 v15,
                                                                 v16);
    AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(v17, 0LL);
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
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
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
        v26 = v17->fields.i - 7 < 0;
        v17->fields.i = v20;
        if ( !(v26 ^ __OFSUB__(v20, 8) | (v20 == 8)) )
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
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
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
  __int64 v10; // x1
  AutomaticSaleDlgComponent___c__DisplayClass43_0_o *v11; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v16; // x22
  System_Collections_Generic_List_int__o *v17; // x8
  int32_t v18; // w1

  if ( (byte_42115CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_B0D8A4(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v9);
    sub_B0D8A4(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v10);
    byte_42115CA = 1;
  }
  v11 = (AutomaticSaleDlgComponent___c__DisplayClass43_0_o *)sub_B0D974(
                                                               AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo,
                                                               *(_QWORD *)&kind,
                                                               method);
  AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.kind = kind,
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v16 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v13, v14),
        System_Func_int__bool____ctor(
          v16,
          (Il2CppObject *)v11,
          Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
        v12 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v16,
                (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___),
        (v17 = this->fields.enableList) == 0LL) )
  {
    sub_B0D97C(v12);
  }
  v18 = v11->fields.kind;
  if ( v12 )
    System_Collections_Generic_List_int___Remove(
      v17,
      v18,
      (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v17,
      v18,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_42115C1 & 1) == 0 )
  {
    sub_B0D8A4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_42115C1 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B0DC70(v8);
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
  bool v8; // w1
  AutomaticSaleDlgComponent_o *v9; // x0

  v4 = this;
  if ( (byte_42115CC & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, result);
    byte_42115CC = 1;
  }
  if ( !result )
    sub_B0D97C(this);
  v5 = System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
  v4->fields.state = 4;
  AutomaticSaleDlgComponent__SetButtonEnable(v4, 0, v6);
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
  AutomaticSaleDlgComponent__Callback(v9, v8, v7);
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

  if ( (byte_42115C2 & 1) == 0 )
  {
    sub_B0D8A4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_42115C2 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B0DC70(v8);
  AutomaticSaleDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent_CallbackFunc___ctor(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
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
  sub_B0D840(
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
System_IAsyncResult_o *__fastcall AutomaticSaleDlgComponent_CallbackFunc__BeginInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_421398C & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_421398C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent_CallbackFunc__Invoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  AutomaticSaleDlgComponent_CallbackFunc_o **v8; // x25
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
  AutomaticSaleDlgComponent_CallbackFunc_o *v19; // x8
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
  AutomaticSaleDlgComponent_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (AutomaticSaleDlgComponent_CallbackFunc_o **)(v4 + 32);
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