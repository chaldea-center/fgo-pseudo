void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  struct AutomaticSaleDlgComponent_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4184987 & 1) == 0 )
  {
    sub_B2C35C(&AutomaticSaleDlgComponent_TypeInfo, v1);
    sub_B2C35C(&int___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v3);
    byte_4184987 = 1;
  }
  v4 = (System_Array_o *)sub_B2C374(int___TypeInfo, 9LL);
  v6.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v4, v6, 0LL);
  static_fields = AutomaticSaleDlgComponent_TypeInfo->static_fields;
  static_fields->settingList = (struct System_Int32_array *)v4;
  sub_B2C2F8(static_fields, v4);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4184986 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4184986 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v5;
  sub_B2C2F8(&this->fields.enableList, v5);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, v6);
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
    sub_B2C2F8(p_callbackFunc, 0LL);
    AutomaticSaleDlgComponent_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_19151908(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_19151908(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418497D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent_EndClose__, v5);
    byte_418497D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v11; // x20
  AutomaticSaleDlgComponent___c__DisplayClass46_0_o *v12; // x21
  il2cpp_array_size_t v13; // w24
  System_Collections_Generic_List_T__o *v14; // x22
  System_Func_int__bool__o *v15; // x23
  char *v16; // x9
  int v17; // w8
  bool v18; // nf
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4184985 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, method);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v3);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v4);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v7);
    this = (AutomaticSaleDlgComponent_o *)sub_B2C35C(&AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo, v8);
    byte_4184985 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v11 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)(9 - size));
  v12 = (AutomaticSaleDlgComponent___c__DisplayClass46_0_o *)sub_B2C42C(AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(v12, 0LL);
  if ( !v12 )
LABEL_15:
    sub_B2C434(this, method);
  v12->fields.i = 0;
  v13 = 0;
  do
  {
    v14 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
    v15 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v15,
      (Il2CppObject *)v12,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v14,
                                            (System_Func_T__bool__o *)v15,
                                            (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_15;
      if ( v13 >= v11->max_length )
      {
        v20 = sub_B2C460(this);
        sub_B2C400(v20, 0LL);
      }
      v16 = (char *)v11 + 4 * (int)v13++;
      *((_DWORD *)v16 + 8) = v12->fields.i;
    }
    v17 = v12->fields.i + 1;
    v18 = v12->fields.i - 8 < 0;
    v12->fields.i = v17;
  }
  while ( v18 != __OFSUB__(v17, 9) );
  return v11;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v5; // x1

  if ( (byte_418497B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418497B = 1;
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
          (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B2C434(titleLabel, method);
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

  if ( (byte_4184980 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4184980 = 1;
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

  if ( (byte_418497F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418497F = 1;
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

  if ( (byte_418497E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418497E = 1;
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
  __int64 v21; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  __int64 v29; // x25
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v31; // x20
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x20
  struct UILabel_array *v34; // x8
  int v35; // w26
  UILabel_o *v36; // x20
  UnityEngine_GameObject_o *v37; // x20
  const MethodInfo *v38; // x2
  int klass; // w21
  unsigned __int64 v40; // x20
  __int64 v41; // x8
  const MethodInfo *v43; // x2
  System_Action_o *v44; // x20
  const MethodInfo *v45; // x3
  __int64 v46; // x0

  if ( (byte_418497C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent_EndOpen__, v6);
    sub_B2C35C(&AutomaticSaleDlgComponent_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_12415/*"SUMMON_AUTOSALE_FOU_TXT"*/, v10);
    sub_B2C35C(&StringLiteral_12417/*"SUMMON_AUTOSALE_TITLE"*/, v11);
    sub_B2C35C(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v12);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_12413/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v14);
    sub_B2C35C(&StringLiteral_12416/*"SUMMON_AUTOSALE_MSG"*/, v15);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v16);
    sub_B2C35C(&StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v17);
    sub_B2C35C(&StringLiteral_12414/*"SUMMON_AUTOSALE_EXP_TXT"*/, v18);
    sub_B2C35C(&StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_418497C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12416/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12414/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12415/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_45;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12413/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_45;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v29 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_45;
    if ( (unsigned int)v29 >= settingButtonLabel->max_length )
      goto LABEL_46;
    v31 = settingButtonLabel->m_Items[v29];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v31 )
      goto LABEL_45;
    UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
    v32 = this->fields.settingButtonLabel;
    if ( !v32 )
      goto LABEL_45;
    if ( (unsigned int)(v29 + 1) >= v32->max_length )
      goto LABEL_46;
    v33 = v32->m_Items[(int)v29 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v33 )
      goto LABEL_45;
    UILabel__set_text(v33, (System_String_o *)gameObject, 0LL);
    v34 = this->fields.settingButtonLabel;
    if ( !v34 )
      goto LABEL_45;
    v35 = v29 + 2;
    if ( (unsigned int)(v29 + 2) >= v34->max_length )
    {
LABEL_46:
      v46 = sub_B2C460(gameObject);
      sub_B2C400(v46, 0LL);
    }
    v36 = (UILabel_o *)(&v34->bounds)[(int)v29 + 4];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v36 )
      goto LABEL_45;
    UILabel__set_text(v36, (System_String_o *)gameObject, 0LL);
    v29 += 3LL;
  }
  while ( (unsigned int)(v35 + 1) < 9 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v37, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
LABEL_45:
    sub_B2C434(gameObject, v21);
  klass = (int)gameObject[10].klass;
  v40 = 0LL;
  do
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( (BYTE3(AutomaticSaleDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v41 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v41 )
      goto LABEL_45;
    if ( v40 >= *(unsigned int *)(v41 + 24) )
      goto LABEL_46;
    if ( (*(_DWORD *)(v41 + 4 * v40 + 32) & klass) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)gameObject,
        v40,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  while ( v40++ < 8 );
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v38);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v43);
  this->fields.state = 1;
  v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, v45);
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
  UserStatusFlagSetRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v9; // x1
  System_Int32_array *DisableList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v13; // x19

  if ( (byte_4184983 & 1) == 0 )
  {
    sub_B2C35C(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4184983 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v7,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v9);
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
  AutomaticSaleDlgComponent___c__DisplayClass41_1_o *v16; // x20
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

  if ( (byte_4184981 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v7);
    sub_B2C35C(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v8);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v9);
    sub_B2C35C(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v11);
    sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v12);
    byte_4184981 = 1;
  }
  v13 = (AutomaticSaleDlgComponent___c__DisplayClass41_0_o *)sub_B2C42C(AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_21;
  v13->fields.kind = kind;
  if ( kind == 9 )
  {
    v16 = (AutomaticSaleDlgComponent___c__DisplayClass41_1_o *)sub_B2C42C(AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo);
    AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(v16, 0LL);
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
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
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
        v23 = v16->fields.i - 7 < 0;
        v16->fields.i = v17;
        if ( !(v23 ^ __OFSUB__(v17, 8) | (v17 == 8)) )
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
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
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
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v15; // x22
  System_Collections_Generic_List_int__o *v16; // x8
  int32_t v17; // w1

  if ( (byte_4184982 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v8);
    sub_B2C35C(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v9);
    sub_B2C35C(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v10);
    byte_4184982 = 1;
  }
  v11 = (AutomaticSaleDlgComponent___c__DisplayClass43_0_o *)sub_B2C42C(AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.kind = kind,
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v15 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v11,
          Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
        v12 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v15,
                (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___),
        (v16 = this->fields.enableList) == 0LL) )
  {
    sub_B2C434(v12, v13);
  }
  v17 = v11->fields.kind;
  if ( v12 )
    System_Collections_Generic_List_int___Remove(
      v16,
      v17,
      (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v16,
      v17,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_4184979 & 1) == 0 )
  {
    sub_B2C35C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_4184979 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B2C728(v8);
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
  if ( (byte_4184984 & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_B2C35C(&StringLiteral_21218/*"ok"*/, result);
    byte_4184984 = 1;
  }
  if ( !result )
    sub_B2C434(this, result);
  v5 = System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL);
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

  if ( (byte_418497A & 1) == 0 )
  {
    sub_B2C35C(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_418497A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B2C728(v8);
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
  if ( (byte_4186BD6 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4186BD6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  AutomaticSaleDlgComponent_CallbackFunc_o *v20; // x8
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
  AutomaticSaleDlgComponent_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (AutomaticSaleDlgComponent_CallbackFunc_o **)(v4 + 32);
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