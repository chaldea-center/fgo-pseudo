void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  struct AutomaticSaleDlgComponent_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v3; // 0:w1.4

  if ( (byte_4388C24 & 1) == 0 )
  {
    sub_B775C4(&AutomaticSaleDlgComponent_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7);
    byte_4388C24 = 1;
  }
  v1 = (System_Array_o *)sub_B775DC(int___TypeInfo, 9LL);
  v3.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v1, v3, 0LL);
  static_fields = AutomaticSaleDlgComponent_TypeInfo->static_fields;
  static_fields->settingList = (struct System_Int32_array *)v1;
  sub_B77560(static_fields);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4388C23 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4388C23 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.enableList = v3;
  sub_B77560(&this->fields.enableList);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, v4);
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
    sub_B77560(p_callbackFunc);
    AutomaticSaleDlgComponent_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_20843088(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_20843088(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4388C1A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_AutomaticSaleDlgComponent_EndClose__);
    byte_4388C1A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(&this->fields.closeCallbackFunc);
  this->fields.state = 5;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void __fastcall AutomaticSaleDlgComponent__EndClose(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AutomaticSaleDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B77560(p_closeCallbackFunc);
    System_Action__Invoke(v6, 0LL);
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v5; // x20
  AutomaticSaleDlgComponent___c__DisplayClass46_0_o *v6; // x21
  il2cpp_array_size_t v7; // w24
  System_Collections_Generic_List_T__o *v8; // x22
  System_Func_int__bool__o *v9; // x23
  char *v10; // x9
  int v11; // w8
  bool v12; // nf
  __int64 v14; // x0

  v2 = this;
  if ( (byte_4388C22 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__);
    this = (AutomaticSaleDlgComponent_o *)sub_B775C4(&AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo);
    byte_4388C22 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v5 = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)(9 - size));
  v6 = (AutomaticSaleDlgComponent___c__DisplayClass46_0_o *)sub_B77694(AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(v6, 0LL);
  if ( !v6 )
LABEL_15:
    sub_B7769C(this, method);
  v6->fields.i = 0;
  v7 = 0;
  do
  {
    v8 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
    v9 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v9,
      (Il2CppObject *)v6,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v8,
                                            (System_Func_T__bool__o *)v9,
                                            (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v5 )
        goto LABEL_15;
      if ( v7 >= v5->max_length )
      {
        v14 = sub_B776C8(this);
        sub_B77668(v14, 0LL);
      }
      v10 = (char *)v5 + 4 * (int)v7++;
      *((_DWORD *)v10 + 8) = v6->fields.i;
    }
    v11 = v6->fields.i + 1;
    v12 = v6->fields.i - 8 < 0;
    v6->fields.i = v11;
  }
  while ( v12 != __OFSUB__(v11, 9) );
  return v5;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4388C18 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388C18 = 1;
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
          (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B7769C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall AutomaticSaleDlgComponent__OnClickButton(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4388C1D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388C1D = 1;
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

  if ( (byte_4388C1C & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388C1C = 1;
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

  if ( (byte_4388C1B & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4388C1B = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  __int64 v14; // x25
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v16; // x20
  struct UILabel_array *v17; // x8
  UILabel_o *v18; // x20
  struct UILabel_array *v19; // x8
  int v20; // w26
  UILabel_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x20
  const MethodInfo *v23; // x2
  int klass; // w21
  unsigned __int64 v25; // x20
  __int64 v26; // x8
  const MethodInfo *v28; // x2
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x3
  __int64 v31; // x0

  if ( (byte_4388C19 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_AutomaticSaleDlgComponent_EndOpen__);
    sub_B775C4(&AutomaticSaleDlgComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12648/*"SUMMON_AUTOSALE_FOU_TXT"*/);
    sub_B775C4(&StringLiteral_12650/*"SUMMON_AUTOSALE_TITLE"*/);
    sub_B775C4(&StringLiteral_12109/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12646/*"SUMMON_AUTOSALE_EQUIP_TXT"*/);
    sub_B775C4(&StringLiteral_12649/*"SUMMON_AUTOSALE_MSG"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B775C4(&StringLiteral_12105/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_B775C4(&StringLiteral_12647/*"SUMMON_AUTOSALE_EXP_TXT"*/);
    sub_B775C4(&StringLiteral_12106/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_4388C19 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B77560(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12650/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12649/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12647/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12648/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_45;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12646/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_45;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v14 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_45;
    if ( (unsigned int)v14 >= settingButtonLabel->max_length )
      goto LABEL_46;
    v16 = settingButtonLabel->m_Items[v14];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v16 )
      goto LABEL_45;
    UILabel__set_text(v16, (System_String_o *)gameObject, 0LL);
    v17 = this->fields.settingButtonLabel;
    if ( !v17 )
      goto LABEL_45;
    if ( (unsigned int)(v14 + 1) >= v17->max_length )
      goto LABEL_46;
    v18 = v17->m_Items[(int)v14 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v18 )
      goto LABEL_45;
    UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
    v19 = this->fields.settingButtonLabel;
    if ( !v19 )
      goto LABEL_45;
    v20 = v14 + 2;
    if ( (unsigned int)(v14 + 2) >= v19->max_length )
    {
LABEL_46:
      v31 = sub_B776C8(gameObject);
      sub_B77668(v31, 0LL);
    }
    v21 = (UILabel_o *)(&v19->bounds)[(int)v14 + 4];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12106/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v21 )
      goto LABEL_45;
    UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
    v14 += 3LL;
  }
  while ( (unsigned int)(v20 + 1) < 9 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v22, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
LABEL_45:
    sub_B7769C(gameObject, v6);
  klass = (int)gameObject[10].klass;
  v25 = 0LL;
  do
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( (BYTE3(AutomaticSaleDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v26 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v26 )
      goto LABEL_45;
    if ( v25 >= *(unsigned int *)(v26 + 24) )
      goto LABEL_46;
    if ( (*(_DWORD *)(v26 + 4 * v25 + 32) & klass) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)gameObject,
        v25,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  while ( v25++ < 8 );
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v23);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v28);
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, v30);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *DisableList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v9; // x19

  if ( (byte_4388C20 & 1) == 0 )
  {
    sub_B775C4(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4388C20 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v3,
                                                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v5);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v9 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B7769C(DisableList, v7);
  }
  UserStatusFlagSetRequest__beginRequest(Request_WarBoardWallAttackRequest, DisableList, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B7769C(decideButton, isEnable);
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
      v9 = sub_B776C8(decideButton);
      sub_B77668(v9, 0LL);
    }
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[v7];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
    ++v7;
  }
  while ( (unsigned int)(v7 - 1) < 8 );
}


void __fastcall AutomaticSaleDlgComponent__SetButtonSelect(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent___c__DisplayClass41_0_o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  AutomaticSaleDlgComponent___c__DisplayClass41_1_o *v8; // x20
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

  if ( (byte_4388C1E & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__);
    sub_B775C4(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo);
    sub_B775C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__);
    sub_B775C4(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo);
    sub_B775C4(&StringLiteral_17296/*"btn_bg_04"*/);
    sub_B775C4(&StringLiteral_17295/*"btn_bg_03"*/);
    byte_4388C1E = 1;
  }
  v5 = (AutomaticSaleDlgComponent___c__DisplayClass41_0_o *)sub_B77694(AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  v5->fields.kind = kind;
  if ( kind == 9 )
  {
    v8 = (AutomaticSaleDlgComponent___c__DisplayClass41_1_o *)sub_B77694(AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo);
    AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(v8, 0LL);
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
        v13 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v13,
               (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___);
        if ( !v11 )
          break;
        if ( v6 )
          v14 = &StringLiteral_17295/*"btn_bg_03"*/;
        else
          v14 = &StringLiteral_17296/*"btn_bg_04"*/;
        UISprite__set_spriteName(v11, (System_String_o *)*v14, 0LL);
        v9 = v8->fields.i + 1;
        v15 = v8->fields.i - 7 < 0;
        v8->fields.i = v9;
        if ( !(v15 ^ __OFSUB__(v9, 8) | (v9 == 8)) )
          return;
      }
    }
LABEL_21:
    sub_B7769C(v6, v7);
  }
  v16 = this->fields.settingButtonSprites;
  if ( !v16 )
    goto LABEL_21;
  if ( v16->max_length <= kind )
  {
LABEL_22:
    v22 = sub_B776C8(v6);
    sub_B77668(v22, 0LL);
  }
  v17 = &v16->obj.klass + kind;
  v18 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v19 = (UISprite_o *)v17[4];
  v20 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
    (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
  v6 = BasicHelper__Any_int_(
         v18,
         (System_Func_T__bool__o *)v20,
         (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___);
  if ( !v19 )
    goto LABEL_21;
  v21 = &StringLiteral_17295/*"btn_bg_03"*/;
  if ( !v6 )
    v21 = &StringLiteral_17296/*"btn_bg_04"*/;
  UISprite__set_spriteName(v19, (System_String_o *)*v21, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__SwitchSelect(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  AutomaticSaleDlgComponent___c__DisplayClass43_0_o *v5; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v9; // x22
  System_Collections_Generic_List_int__o *v10; // x8
  int32_t v11; // w1

  if ( (byte_4388C1F & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int___);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B775C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__);
    sub_B775C4(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo);
    byte_4388C1F = 1;
  }
  v5 = (AutomaticSaleDlgComponent___c__DisplayClass43_0_o *)sub_B77694(AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.kind = kind,
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v9 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__),
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v9,
               (const MethodInfo_1C65E00 *)Method_BasicHelper_Any_int___),
        (v10 = this->fields.enableList) == 0LL) )
  {
    sub_B7769C(v6, v7);
  }
  v11 = v5->fields.kind;
  if ( v6 )
    System_Collections_Generic_List_int___Remove(
      v10,
      v11,
      (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v10,
      v11,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_4388C16 & 1) == 0 )
  {
    sub_B775C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    byte_4388C16 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B77990(v8);
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
  if ( (byte_4388C21 & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_4388C21 = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  v5 = System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL);
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

  if ( (byte_4388C17 & 1) == 0 )
  {
    sub_B775C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo);
    byte_4388C17 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B77990(v8);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_4389F60 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4389F60 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent_CallbackFunc__Invoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  AutomaticSaleDlgComponent_CallbackFunc_o **v7; // x25
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
  AutomaticSaleDlgComponent_CallbackFunc_o *v18; // x8
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
  AutomaticSaleDlgComponent_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (AutomaticSaleDlgComponent_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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