void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_40F6E82 & 1) == 0 )
  {
    sub_B16FFC(&AutomaticSaleDlgComponent_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v4);
    byte_40F6E82 = 1;
  }
  v5 = (System_Array_o *)sub_B17014(int___TypeInfo, 9LL, v2);
  v13.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v13, 0LL);
  static_fields = (BattleServantConfConponent_o *)AutomaticSaleDlgComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v15; // x1

  if ( (byte_40F6E81 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40F6E81 = 1;
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
  BaseDialog___ctor((BaseDialog_o *)this, v15);
}


void __fastcall AutomaticSaleDlgComponent__Callback(
        AutomaticSaleDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  AutomaticSaleDlgComponent_CallbackFunc_o *v9; // x19
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    AutomaticSaleDlgComponent_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_19195668(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_19195668(
        AutomaticSaleDlgComponent_o *this,
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
  const MethodInfo *v16; // x2

  if ( (byte_40F6E78 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent_EndClose__, v10);
    byte_40F6E78 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, v16);
}


void __fastcall AutomaticSaleDlgComponent__EndClose(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
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

  AutomaticSaleDlgComponent__Init(this, method);
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


void __fastcall AutomaticSaleDlgComponent__EndOpen(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Int32_array *__fastcall AutomaticSaleDlgComponent__GetDisableList(
        AutomaticSaleDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  AutomaticSaleDlgComponent___c__DisplayClass46_0_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  il2cpp_array_size_t v22; // w24
  System_Collections_Generic_List_T__o *v23; // x22
  System_Func_int__bool__o *v24; // x23
  _BOOL8 v25; // x0
  char *v26; // x9
  int v27; // w8
  bool v28; // nf

  if ( (byte_40F6E80 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, method);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v4);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v8);
    sub_B16FFC(&AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo, v9);
    byte_40F6E80 = 1;
  }
  enableList = this->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)(9 - size), v2);
  v17 = (AutomaticSaleDlgComponent___c__DisplayClass46_0_o *)sub_B170CC(
                                                               AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo,
                                                               v13,
                                                               v14,
                                                               v15,
                                                               v16);
  AutomaticSaleDlgComponent___c__DisplayClass46_0___ctor(v17, 0LL);
  if ( !v17 )
LABEL_15:
    sub_B170D4();
  v17->fields.i = 0;
  v22 = 0;
  do
  {
    v23 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
    v24 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v18, v19, v20, v21);
    System_Func_int__bool____ctor(
      v24,
      (Il2CppObject *)v17,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v25 = BasicHelper__Any_int_(
            v23,
            (System_Func_T__bool__o *)v24,
            (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
    if ( !v25 )
    {
      if ( !v12 )
        goto LABEL_15;
      if ( v22 >= v12->max_length )
      {
        sub_B17100(v25, v18, v19);
        sub_B170A0();
      }
      v26 = (char *)v12 + 4 * (int)v22++;
      *((_DWORD *)v26 + 8) = v17->fields.i;
    }
    v27 = v17->fields.i + 1;
    v28 = v17->fields.i - 8 < 0;
    v17->fields.i = v27;
  }
  while ( v28 != __OFSUB__(v27, 9) );
  return v12;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *msgLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *expTitleLb; // x0
  UILabel_o *fouTitleLb; // x0
  UILabel_o *equipTitleLb; // x0
  System_Collections_Generic_List_int__o *enableList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1

  if ( (byte_40F6E76 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F6E76 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  msgLabel = this->fields.msgLabel;
  if ( !msgLabel )
    goto LABEL_13;
  UILabel__set_text(msgLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_13;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  cancelLabel = this->fields.cancelLabel;
  if ( !cancelLabel )
    goto LABEL_13;
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  expTitleLb = this->fields.expTitleLb;
  if ( !expTitleLb )
    goto LABEL_13;
  UILabel__set_text(expTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  if ( !fouTitleLb
    || (UILabel__set_text(fouTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (equipTitleLb = this->fields.equipTitleLb) == 0LL)
    || (UILabel__set_text(equipTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (enableList = this->fields.enableList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          enableList,
          (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__OnClickButton(
        AutomaticSaleDlgComponent_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_40F6E7B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F6E7B = 1;
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

  if ( (byte_40F6E7A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F6E7A = 1;
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

  if ( (byte_40F6E79 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F6E79 = 1;
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *titleLabel; // x20
  System_String_o *v28; // x0
  UILabel_o *msgLabel; // x20
  System_String_o *v30; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v32; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v34; // x0
  UILabel_o *expTitleLb; // x20
  System_String_o *v36; // x0
  UILabel_o *fouTitleLb; // x20
  System_String_o *v38; // x0
  UILabel_o *equipTitleLb; // x20
  System_String_o *v40; // x0
  AutomaticSaleDlgComponent_c *v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x25
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v46; // x20
  System_String_o *v47; // x0
  struct UILabel_array *v48; // x8
  UILabel_o *v49; // x20
  System_String_o *v50; // x0
  struct UILabel_array *v51; // x8
  int v52; // w26
  UILabel_o *v53; // x20
  System_String_o *v54; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v56; // x20
  UserGameEntity_o *SelfUserGame; // x0
  int32_t flag; // w21
  unsigned __int64 v59; // x20
  struct System_Int32_array *settingList; // x8
  System_Collections_Generic_List_int__o *enableList; // x0
  const MethodInfo *v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x3

  if ( (byte_40F6E77 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v5);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent_EndOpen__, v6);
    sub_B16FFC(&AutomaticSaleDlgComponent_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_12360/*"SUMMON_AUTOSALE_FOU_TXT"*/, v10);
    sub_B16FFC(&StringLiteral_12362/*"SUMMON_AUTOSALE_TITLE"*/, v11);
    sub_B16FFC(&StringLiteral_11841/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v12);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B16FFC(&StringLiteral_12358/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v14);
    sub_B16FFC(&StringLiteral_12361/*"SUMMON_AUTOSALE_MSG"*/, v15);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v16);
    sub_B16FFC(&StringLiteral_11837/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v17);
    sub_B16FFC(&StringLiteral_12359/*"SUMMON_AUTOSALE_EXP_TXT"*/, v18);
    sub_B16FFC(&StringLiteral_11838/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v19);
    byte_40F6E77 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12362/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, v28, 0LL);
  msgLabel = this->fields.msgLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_45;
  UILabel__set_text(msgLabel, v30, 0LL);
  decideLabel = this->fields.decideLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_45;
  UILabel__set_text(decideLabel, v32, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_45;
  UILabel__set_text(cancelLabel, v34, 0LL);
  expTitleLb = this->fields.expTitleLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12359/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_45;
  UILabel__set_text(expTitleLb, v36, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_45;
  UILabel__set_text(fouTitleLb, v38, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12358/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_45;
  UILabel__set_text(equipTitleLb, v40, 0LL);
  v44 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_45;
    if ( (unsigned int)v44 >= settingButtonLabel->max_length )
      goto LABEL_46;
    v46 = settingButtonLabel->m_Items[v44];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v46 )
      goto LABEL_45;
    UILabel__set_text(v46, v47, 0LL);
    v48 = this->fields.settingButtonLabel;
    if ( !v48 )
      goto LABEL_45;
    if ( (unsigned int)(v44 + 1) >= v48->max_length )
      goto LABEL_46;
    v49 = v48->m_Items[(int)v44 + 1];
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v49 )
      goto LABEL_45;
    UILabel__set_text(v49, v50, 0LL);
    v51 = this->fields.settingButtonLabel;
    if ( !v51 )
      goto LABEL_45;
    v52 = v44 + 2;
    if ( (unsigned int)(v44 + 2) >= v51->max_length )
    {
LABEL_46:
      sub_B17100(v41, v42, v43);
      sub_B170A0();
    }
    v53 = (UILabel_o *)(&v51->bounds)[(int)v44 + 4];
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v53 )
      goto LABEL_45;
    UILabel__set_text(v53, v54, 0LL);
    v44 += 3LL;
  }
  while ( (unsigned int)(v52 + 1) < 9 );
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_45;
  v56 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v56, 0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_45:
    sub_B170D4();
  flag = SelfUserGame->fields.flag;
  v59 = 0LL;
  do
  {
    v41 = AutomaticSaleDlgComponent_TypeInfo;
    if ( (BYTE3(AutomaticSaleDlgComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo);
      v41 = AutomaticSaleDlgComponent_TypeInfo;
    }
    settingList = v41->static_fields->settingList;
    if ( !settingList )
      goto LABEL_45;
    if ( v59 >= settingList->max_length )
      goto LABEL_46;
    if ( (settingList->m_Items[v59 + 1] & flag) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !enableList )
        goto LABEL_45;
      System_Collections_Generic_List_int___Add(
        enableList,
        v59,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  while ( v59++ < 8 );
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v43);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v63);
  this->fields.state = 1;
  v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, v69);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_40F6E7E & 1) == 0 )
  {
    sub_B16FFC(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40F6E7E = 1;
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
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (UserStatusFlagSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v10,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v12);
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


void __fastcall AutomaticSaleDlgComponent__SetButtonEnable(
        AutomaticSaleDlgComponent_o *this,
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
  while ( (unsigned int)(v11 - 1) < 8 );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__SetButtonSelect(
        AutomaticSaleDlgComponent_o *this,
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
  AutomaticSaleDlgComponent___c__DisplayClass41_0_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  AutomaticSaleDlgComponent___c__DisplayClass41_1_o *v21; // x20
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

  if ( (byte_40F6E7C & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v9);
    sub_B16FFC(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v10);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v11);
    sub_B16FFC(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v13);
    sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v14);
    byte_40F6E7C = 1;
  }
  v15 = (AutomaticSaleDlgComponent___c__DisplayClass41_0_o *)sub_B170CC(
                                                               AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo,
                                                               *(_QWORD *)&kind,
                                                               method,
                                                               v3,
                                                               v4);
  AutomaticSaleDlgComponent___c__DisplayClass41_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_21;
  v15->fields.kind = kind;
  if ( kind == 9 )
  {
    v21 = (AutomaticSaleDlgComponent___c__DisplayClass41_1_o *)sub_B170CC(
                                                                 AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo,
                                                                 v17,
                                                                 v18,
                                                                 v19,
                                                                 v20);
    AutomaticSaleDlgComponent___c__DisplayClass41_1___ctor(v21, 0LL);
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
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v29 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v28,
                (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
        if ( !v26 )
          break;
        if ( v29 )
          v30 = &StringLiteral_16890/*"btn_bg_03"*/;
        else
          v30 = &StringLiteral_16891/*"btn_bg_04"*/;
        UISprite__set_spriteName(v26, (System_String_o *)*v30, 0LL);
        v24 = v21->fields.i + 1;
        v31 = v21->fields.i - 7 < 0;
        v21->fields.i = v24;
        if ( !(v31 ^ __OFSUB__(v24, 8) | (v24 == 8)) )
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
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v37 = BasicHelper__Any_int_(
          v34,
          (System_Func_T__bool__o *)v36,
          (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___);
  if ( !v35 )
    goto LABEL_21;
  v38 = &StringLiteral_16890/*"btn_bg_03"*/;
  if ( !v37 )
    v38 = &StringLiteral_16891/*"btn_bg_04"*/;
  UISprite__set_spriteName(v35, (System_String_o *)*v38, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent__SwitchSelect(
        AutomaticSaleDlgComponent_o *this,
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
  AutomaticSaleDlgComponent___c__DisplayClass43_0_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v19; // x22
  bool v20; // w0
  System_Collections_Generic_List_int__o *v21; // x8
  int32_t v22; // w1

  if ( (byte_40F6E7D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_B16FFC(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v11);
    sub_B16FFC(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v12);
    byte_40F6E7D = 1;
  }
  v13 = (AutomaticSaleDlgComponent___c__DisplayClass43_0_o *)sub_B170CC(
                                                               AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo,
                                                               *(_QWORD *)&kind,
                                                               method,
                                                               v3,
                                                               v4);
  AutomaticSaleDlgComponent___c__DisplayClass43_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.kind = kind,
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList,
        v19 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v14, v15, v16, v17),
        System_Func_int__bool____ctor(
          v19,
          (Il2CppObject *)v13,
          Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
        v20 = BasicHelper__Any_int_(
                enableList,
                (System_Func_T__bool__o *)v19,
                (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___),
        (v21 = this->fields.enableList) == 0LL) )
  {
    sub_B170D4();
  }
  v22 = v13->fields.kind;
  if ( v20 )
    System_Collections_Generic_List_int___Remove(
      v21,
      v22,
      (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
  else
    System_Collections_Generic_List_int___Add(
      v21,
      v22,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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

  if ( (byte_40F6E74 & 1) == 0 )
  {
    sub_B16FFC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F6E74 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B173C8(v8);
  AutomaticSaleDlgComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall AutomaticSaleDlgComponent__callbackUsetStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  bool v8; // w1
  AutomaticSaleDlgComponent_o *v9; // x0

  if ( (byte_40F6E7F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, result);
    byte_40F6E7F = 1;
  }
  if ( !result )
    sub_B170D4();
  v5 = System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL);
  this->fields.state = 4;
  AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v6);
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

  if ( (byte_40F6E75 & 1) == 0 )
  {
    sub_B16FFC(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value);
    byte_40F6E75 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (AutomaticSaleDlgComponent_o *)sub_B173C8(v8);
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
  if ( (byte_40F914C & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F914C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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