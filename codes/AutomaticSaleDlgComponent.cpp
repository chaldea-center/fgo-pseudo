void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
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
  System_Array_o *v10; // x19
  struct AutomaticSaleDlgComponent_StaticFields *static_fields; // x0
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_42E65BE & 1) == 0 )
  {
    sub_B5D5C4(&AutomaticSaleDlgComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v7,
      v8,
      v9);
    byte_42E65BE = 1;
  }
  v10 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 9LL);
  v12.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v12, 0LL);
  static_fields = AutomaticSaleDlgComponent_TypeInfo->static_fields;
  static_fields->settingList = (struct System_Int32_array *)v10;
  sub_B5D560(static_fields);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x1

  if ( (byte_42E65BD & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    byte_42E65BD = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.enableList = v11;
  sub_B5D560(&this->fields.enableList);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, v12);
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
    sub_B5D560(p_callbackFunc);
    AutomaticSaleDlgComponent_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_21020428(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_21020428(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42E65B4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent_EndClose__, v6, v7, v8);
    byte_42E65B4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 5;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, v10);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B5D560(p_closeCallbackFunc);
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
  int v2; // w2
  __int64 v3; // x3
  AutomaticSaleDlgComponent_o *v4; // x19
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v25; // x20
  AutomaticSaleDlgComponent___c__DisplayClass46_0_o *v26; // x21
  il2cpp_array_size_t v27; // w24
  System_Collections_Generic_List_T__o *v28; // x22
  System_Func_int__bool__o *v29; // x23
  char *v30; // x9
  int v31; // w8
  bool v32; // nf
  __int64 v34; // x0

  v4 = this;
  if ( (byte_42E65BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v17, v18, v19);
    this = (AutomaticSaleDlgComponent_o *)sub_B5D5C4(
                                            &AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo,
                                            v20,
                                            v21,
                                            v22);
    byte_42E65BC = 1;
  }
  enableList = v4->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v25 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)(9 - size));
  v26 = (AutomaticSaleDlgComponent___c__DisplayClass46_0_o *)sub_B5D694(AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(v26, 0LL);
  if ( !v26 )
LABEL_15:
    sub_B5D69C(this, method);
  v26->fields.i = 0;
  v27 = 0;
  do
  {
    v28 = (System_Collections_Generic_List_T__o *)v4->fields.enableList;
    v29 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v29,
      (Il2CppObject *)v26,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v28,
                                            (System_Func_T__bool__o *)v29,
                                            (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v25 )
        goto LABEL_15;
      if ( v27 >= v25->max_length )
      {
        v34 = sub_B5D6C8(this);
        sub_B5D668(v34, 0LL);
      }
      v30 = (char *)v25 + 4 * (int)v27++;
      *((_DWORD *)v30 + 8) = v26->fields.i;
    }
    v31 = v26->fields.i + 1;
    v32 = v26->fields.i - 8 < 0;
    v26->fields.i = v31;
  }
  while ( v32 != __OFSUB__(v31, 9) );
  return v25;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *titleLabel; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E65B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E65B2 = 1;
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
          (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v9);
}


void __fastcall AutomaticSaleDlgComponent__OnClickButton(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_42E65B7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E65B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    AutomaticSaleDlgComponent__SwitchSelect(this, kind, v6);
    AutomaticSaleDlgComponent__SetButtonSelect(this, kind, v7);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickCancel(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42E65B6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E65B6 = 1;
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
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v5);
    AutomaticSaleDlgComponent__Callback(this, 0, v6);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickDecide(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_42E65B5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E65B5 = 1;
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
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v52; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  __int64 v60; // x25
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v62; // x20
  struct UILabel_array *v63; // x8
  UILabel_o *v64; // x20
  struct UILabel_array *v65; // x8
  int v66; // w26
  UILabel_o *v67; // x20
  UnityEngine_GameObject_o *v68; // x20
  const MethodInfo *v69; // x2
  int klass; // w21
  unsigned __int64 v71; // x20
  __int64 v72; // x8
  const MethodInfo *v74; // x2
  System_Action_o *v75; // x20
  const MethodInfo *v76; // x3
  __int64 v77; // x0

  if ( (byte_42E65B3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent_EndOpen__, v9, v10, v11);
    sub_B5D5C4(&AutomaticSaleDlgComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12563/*"SUMMON_AUTOSALE_FOU_TXT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12565/*"SUMMON_AUTOSALE_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12561/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12564/*"SUMMON_AUTOSALE_MSG"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_12562/*"SUMMON_AUTOSALE_EXP_TXT"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v48, v49, v50);
    byte_42E65B3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12565/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12564/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12562/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12563/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_45;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12561/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_45;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v60 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_45;
    if ( (unsigned int)v60 >= settingButtonLabel->max_length )
      goto LABEL_46;
    v62 = settingButtonLabel->m_Items[v60];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v62 )
      goto LABEL_45;
    UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
    v63 = this->fields.settingButtonLabel;
    if ( !v63 )
      goto LABEL_45;
    if ( (unsigned int)(v60 + 1) >= v63->max_length )
      goto LABEL_46;
    v64 = v63->m_Items[(int)v60 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12024/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v64 )
      goto LABEL_45;
    UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
    v65 = this->fields.settingButtonLabel;
    if ( !v65 )
      goto LABEL_45;
    v66 = v60 + 2;
    if ( (unsigned int)(v60 + 2) >= v65->max_length )
    {
LABEL_46:
      v77 = sub_B5D6C8(gameObject);
      sub_B5D668(v77, 0LL);
    }
    v67 = (UILabel_o *)(&v65->bounds)[(int)v60 + 4];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v67 )
      goto LABEL_45;
    UILabel__set_text(v67, (System_String_o *)gameObject, 0LL);
    v60 += 3LL;
  }
  while ( (unsigned int)(v66 + 1) < 9 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_45;
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v68, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !gameObject )
LABEL_45:
    sub_B5D69C(gameObject, v52);
  klass = (int)gameObject[10].klass;
  v71 = 0LL;
  do
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( (BYTE3(AutomaticSaleDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v72 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v72 )
      goto LABEL_45;
    if ( v71 >= *(unsigned int *)(v72 + 24) )
      goto LABEL_46;
    if ( (*(_DWORD *)(v72 + 4 * v71 + 32) & klass) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)gameObject,
        v71,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  while ( v71++ < 8 );
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v69);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v74);
  this->fields.state = 1;
  v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, v76);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_42E65BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    byte_42E65BA = 1;
  }
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v17,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v19);
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
  while ( (unsigned int)(v7 - 1) < 8 );
}


void __fastcall AutomaticSaleDlgComponent__SetButtonSelect(
        AutomaticSaleDlgComponent_o *this,
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
  AutomaticSaleDlgComponent___c__DisplayClass41_0_o *v30; // x21
  _BOOL8 v31; // x0
  __int64 v32; // x1
  AutomaticSaleDlgComponent___c__DisplayClass41_1_o *v33; // x20
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

  if ( (byte_42E65B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v12, v13, v14);
    sub_B5D5C4(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v18, v19, v20);
    sub_B5D5C4(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v27, v28, v29);
    byte_42E65B8 = 1;
  }
  v30 = (AutomaticSaleDlgComponent___c__DisplayClass41_0_o *)sub_B5D694(AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_21;
  v30->fields.kind = kind;
  if ( kind == 9 )
  {
    v33 = (AutomaticSaleDlgComponent___c__DisplayClass41_1_o *)sub_B5D694(AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo);
    AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(v33, 0LL);
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
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
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
        v40 = v33->fields.i - 7 < 0;
        v33->fields.i = v34;
        if ( !(v40 ^ __OFSUB__(v34, 8) | (v34 == 8)) )
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
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
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


void __fastcall AutomaticSaleDlgComponent__SwitchSelect(
        AutomaticSaleDlgComponent_o *this,
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
  AutomaticSaleDlgComponent___c__DisplayClass43_0_o *v24; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v28; // x22
  System_Collections_Generic_List_int__o *v29; // x8
  int32_t v30; // w1

  if ( (byte_42E65B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v15, v16, v17);
    sub_B5D5C4(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v18, v19, v20);
    sub_B5D5C4(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v21, v22, v23);
    byte_42E65B9 = 1;
  }
  v24 = (AutomaticSaleDlgComponent___c__DisplayClass43_0_o *)sub_B5D694(AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo);
  AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(v24, 0LL);
  if ( !v24
    || (v24->fields.kind = kind,
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v28 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v28,
          (Il2CppObject *)v24,
          Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
        v25 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v28,
                (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___),
        (v29 = this->fields.enableList) == 0LL) )
  {
    sub_B5D69C(v25, v26);
  }
  v30 = v24->fields.kind;
  if ( v25 )
    System_Collections_Generic_List_int___Remove(
      v29,
      v30,
      (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v29,
      v30,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall AutomaticSaleDlgComponent__add_callbackFunc(
        AutomaticSaleDlgComponent_o *this,
        AutomaticSaleDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AutomaticSaleDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AutomaticSaleDlgComponent_o *v12; // x0
  AutomaticSaleDlgComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E65B0 & 1) == 0 )
  {
    sub_B5D5C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E65B0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AutomaticSaleDlgComponent_CallbackFunc_c *)v9->klass != AutomaticSaleDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (AutomaticSaleDlgComponent_o *)sub_B5D990(v9);
  AutomaticSaleDlgComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall AutomaticSaleDlgComponent__callbackUsetStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AutomaticSaleDlgComponent_o *v5; // x19
  bool v6; // w20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  bool v9; // w1
  AutomaticSaleDlgComponent_o *v10; // x0

  v5 = this;
  if ( (byte_42E65BB & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42E65BB = 1;
  }
  if ( !result )
    sub_B5D69C(this, result);
  v6 = System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  v5->fields.state = 4;
  AutomaticSaleDlgComponent__SetButtonEnable(v5, 0, v7);
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
  AutomaticSaleDlgComponent__Callback(v10, v9, v8);
}


void __fastcall AutomaticSaleDlgComponent__remove_callbackFunc(
        AutomaticSaleDlgComponent_o *this,
        AutomaticSaleDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct AutomaticSaleDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  AutomaticSaleDlgComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E65B1 & 1) == 0 )
  {
    sub_B5D5C4(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E65B1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (AutomaticSaleDlgComponent_CallbackFunc_c *)v9->klass != AutomaticSaleDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (AutomaticSaleDlgComponent_o *)sub_B5D990(v9);
  AutomaticSaleDlgComponent__Init(v12, v13);
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
  sub_B5D560(
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
  if ( (byte_42E7542 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7542 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  AutomaticSaleDlgComponent_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (AutomaticSaleDlgComponent_CallbackFunc_o **)(v3 + 32);
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