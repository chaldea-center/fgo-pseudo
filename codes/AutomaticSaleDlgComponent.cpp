void __fastcall AutomaticSaleDlgComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  struct System_Int32_array *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B12831 & 1) == 0 )
  {
    sub_1BCA7E0(&AutomaticSaleDlgComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7,
      v5,
      v6);
    byte_4B12831 = 1;
  }
  v7 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 9LL);
  v15.fields.value = Field__PrivateImplementationDetails__9AB8EA006C25C887223D6AFCA548F88D37A644BA96E801F909C99641FFB609F7;
  v8 = (struct System_Int32_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v15, 0LL);
  AutomaticSaleDlgComponent_TypeInfo->static_fields->settingList = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AutomaticSaleDlgComponent_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall AutomaticSaleDlgComponent___ctor(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B12830 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    byte_4B12830 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.enableList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__Callback(
        AutomaticSaleDlgComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct AutomaticSaleDlgComponent_CallbackFunc_o *v9; // x20
  struct AutomaticSaleDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall AutomaticSaleDlgComponent__Close(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AutomaticSaleDlgComponent__Close_33596684(this, 0LL, v2);
}


void __fastcall AutomaticSaleDlgComponent__Close_33596684(
        AutomaticSaleDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B12827 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_EndClose__, v10, v11);
    byte_4B12827 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 5;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__EndClose(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AutomaticSaleDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v12->fields.m_target)(
      v12->fields.original_method_info,
      *(_QWORD *)&v12->fields.extra_arg);
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
  AutomaticSaleDlgComponent_o *v3; // x19
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
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  System_Int32_array *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  il2cpp_array_size_t v23; // w24
  System_Collections_Generic_List_T__o *v24; // x22
  System_Func_int__bool__o *v25; // x23
  char *v26; // x9
  int v27; // w8
  bool v28; // nf

  v3 = this;
  if ( (byte_4B1282F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, method, v2);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__, v10, v11);
    this = (AutomaticSaleDlgComponent_o *)sub_1BCA7E0(
                                            &AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo,
                                            v12,
                                            v13);
    byte_4B1282F = 1;
  }
  enableList = v3->fields.enableList;
  if ( !enableList )
    goto LABEL_15;
  size = enableList->fields._size;
  if ( size == 9 )
    return 0LL;
  v16 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)(9 - size));
  v20 = sub_1BCAA2C(AutomaticSaleDlgComponent___c__DisplayClass46_0_TypeInfo, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
LABEL_15:
    sub_1BCAA3C(this, method);
  v23 = 0;
  *(_DWORD *)(v20 + 16) = 0;
  do
  {
    v24 = (System_Collections_Generic_List_T__o *)v3->fields.enableList;
    v25 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v21, v22);
    System_Func_int__bool____ctor(
      v25,
      (Il2CppObject *)v20,
      Method_AutomaticSaleDlgComponent___c__DisplayClass46_0__GetDisableList_b__0__,
      0LL);
    this = (AutomaticSaleDlgComponent_o *)BasicHelper__Any_int_(
                                            v24,
                                            (System_Func_T__bool__o *)v25,
                                            (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v16 )
        goto LABEL_15;
      if ( v23 >= v16->max_length )
        sub_1BCAA44(this, method);
      v26 = (char *)v16 + 4 * (int)v23++;
      *((_DWORD *)v26 + 8) = *(_DWORD *)(v20 + 16);
    }
    v27 = *(_DWORD *)(v20 + 16) + 1;
    v28 = *(_DWORD *)(v20 + 16) - 8 < 0;
    *(_DWORD *)(v20 + 16) = v27;
  }
  while ( v28 != __OFSUB__(v27, 9) );
  return v16;
}


void __fastcall AutomaticSaleDlgComponent__Init(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v8; // w9

  if ( (byte_4B12825 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B12825 = 1;
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
    || (v8 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v8,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(titleLabel, method);
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

  if ( (byte_4B1282A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_OnClickButton__, *(_QWORD *)&kind, method);
    byte_4B1282A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_AutomaticSaleDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_AutomaticSaleDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    AutomaticSaleDlgComponent__SwitchSelect(this, kind, v7);
    AutomaticSaleDlgComponent__SetButtonSelect(this, kind, v8);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickCancel(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B12829 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_OnClickCancel__, method, v2);
    byte_4B12829 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v4 = Method_AutomaticSaleDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AutomaticSaleDlgComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v6);
    AutomaticSaleDlgComponent__Callback(this, 0, v7);
  }
}


void __fastcall AutomaticSaleDlgComponent__OnClickDecide(AutomaticSaleDlgComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4B12828 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_OnClickDecide__, method, v2);
    byte_4B12828 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_AutomaticSaleDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_AutomaticSaleDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_AutomaticSaleDlgComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    AutomaticSaleDlgComponent__SetButtonEnable(this, 0, v6);
    AutomaticSaleDlgComponent__RequestUserStatusFlagSet(this, v7);
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
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  UILabel_o *fouTitleLb; // x20
  UILabel_o *equipTitleLb; // x20
  unsigned __int64 v49; // x29
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v51; // x20
  struct UILabel_array *v52; // x8
  UILabel_o *v53; // x20
  struct UILabel_array *v54; // x8
  unsigned __int64 v55; // x21
  UILabel_o *v56; // x20
  UnityEngine_GameObject_o *v57; // x0
  const MethodInfo *v58; // x2
  int monitor; // w22
  unsigned __int64 i; // x20
  __int64 v61; // x8
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 klass_low; // x10
  const MethodInfo *v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Action_o *v69; // x20

  if ( (byte_4B12826 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_EndOpen__, v5, v6);
    sub_1BCA7E0(&AutomaticSaleDlgComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_12478/*"SUMMON_AUTOSALE_FOU_TXT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12480/*"SUMMON_AUTOSALE_TITLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_12476/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12479/*"SUMMON_AUTOSALE_MSG"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12477/*"SUMMON_AUTOSALE_EXP_TXT"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v31, v32);
    byte_4B12826 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v35, v36, v37, v38, v39, v40);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12480/*"SUMMON_AUTOSALE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_41;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12479/*"SUMMON_AUTOSALE_MSG"*/, 0LL);
  if ( !msgLabel )
    goto LABEL_41;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_41;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_41;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUMMON_AUTOSALE_EXP_TXT"*/, 0LL);
  if ( !expTitleLb )
    goto LABEL_41;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0LL);
  fouTitleLb = this->fields.fouTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12478/*"SUMMON_AUTOSALE_FOU_TXT"*/, 0LL);
  if ( !fouTitleLb )
    goto LABEL_41;
  UILabel__set_text(fouTitleLb, (System_String_o *)gameObject, 0LL);
  equipTitleLb = this->fields.equipTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12476/*"SUMMON_AUTOSALE_EQUIP_TXT"*/, 0LL);
  if ( !equipTitleLb )
    goto LABEL_41;
  UILabel__set_text(equipTitleLb, (System_String_o *)gameObject, 0LL);
  v49 = 0LL;
  do
  {
    settingButtonLabel = this->fields.settingButtonLabel;
    if ( !settingButtonLabel )
      goto LABEL_41;
    if ( v49 >= settingButtonLabel->max_length )
      goto LABEL_42;
    v51 = settingButtonLabel->m_Items[v49];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
    if ( !v51 )
      goto LABEL_41;
    UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
    v52 = this->fields.settingButtonLabel;
    if ( !v52 )
      goto LABEL_41;
    if ( v49 + 1 >= v52->max_length )
      goto LABEL_42;
    v53 = v52->m_Items[v49 + 1];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
    if ( !v53 )
      goto LABEL_41;
    UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
    v54 = this->fields.settingButtonLabel;
    if ( !v54 )
      goto LABEL_41;
    v55 = v49 + 2;
    if ( v49 + 2 >= v54->max_length )
LABEL_42:
      sub_1BCAA44(gameObject, v34);
    v56 = v54->m_Items[v49 + 2];
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
    if ( !v56 )
      goto LABEL_41;
    UILabel__set_text(v56, (System_String_o *)gameObject, 0LL);
    v49 += 3LL;
  }
  while ( v55 - 2 < 6 );
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject
    || (v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL),
        AndroidBackKeyManager__AddBackBtn(v57, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL)) == 0LL) )
  {
LABEL_41:
    sub_1BCAA3C(gameObject, v34);
  }
  monitor = (int)gameObject[10].monitor;
  for ( i = 0LL; i != 9; ++i )
  {
    gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    if ( !AutomaticSaleDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AutomaticSaleDlgComponent_TypeInfo, v34);
      gameObject = (UnityEngine_GameObject_o *)AutomaticSaleDlgComponent_TypeInfo;
    }
    v61 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
    if ( !v61 )
      goto LABEL_41;
    if ( i >= *(unsigned int *)(v61 + 24) )
      goto LABEL_42;
    if ( (*(_DWORD *)(v61 + 4 * i + 32) & monitor) != 0 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.enableList;
      if ( !gameObject )
        goto LABEL_41;
      v62 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v63 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v62 )
        goto LABEL_41;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v62 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)gameObject,
          i,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_DWORD *)(v62 + 4 * klass_low + 32) = i;
      }
    }
  }
  AutomaticSaleDlgComponent__SetButtonSelect(this, 9, v58);
  AutomaticSaleDlgComponent__SetButtonEnable(this, 1, v65);
  this->fields.state = 1;
  v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v66, v67, v68);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_AutomaticSaleDlgComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
}


void __fastcall AutomaticSaleDlgComponent__RequestUserStatusFlagSet(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_4B1282D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B1282D = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AutomaticSaleDlgComponent_callbackUsetStatusFlagSet__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = AutomaticSaleDlgComponent__GetDisableList(this, v16);
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
    sub_1BCAA3C(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL);
  for ( i = 0LL; i != 9; ++i )
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
void __fastcall AutomaticSaleDlgComponent__SetButtonSelect(
        AutomaticSaleDlgComponent_o *this,
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

  if ( (byte_4B1282B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__, v8, v9);
    sub_1BCA7E0(&AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__, v12, v13);
    sub_1BCA7E0(&AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v18, v19);
    byte_4B1282B = 1;
  }
  v20 = sub_1BCAA2C(AutomaticSaleDlgComponent___c__DisplayClass41_0_TypeInfo, *(_QWORD *)&kind, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_21;
  *(_DWORD *)(v20 + 16) = kind;
  if ( kind == 9 )
  {
    v25 = sub_1BCAA2C(AutomaticSaleDlgComponent___c__DisplayClass41_1_TypeInfo, v22, v23, v24);
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
          Method_AutomaticSaleDlgComponent___c__DisplayClass41_1__SetButtonSelect_b__1__,
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
        v34 = *(_DWORD *)(v25 + 16) - 8 < 0;
        *(_DWORD *)(v25 + 16) = v28;
        if ( v34 == __OFSUB__(v28, 9) )
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
    Method_AutomaticSaleDlgComponent___c__DisplayClass41_0__SetButtonSelect_b__0__,
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
void __fastcall AutomaticSaleDlgComponent__SwitchSelect(
        AutomaticSaleDlgComponent_o *this,
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
  __int64 v16; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v22; // x22
  struct System_Collections_Generic_List_int__o *v23; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11

  if ( (byte_4B1282C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v10, v11);
    sub_1BCA7E0(&Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__, v12, v13);
    sub_1BCA7E0(&AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, v14, v15);
    byte_4B1282C = 1;
  }
  v16 = sub_1BCAA2C(AutomaticSaleDlgComponent___c__DisplayClass43_0_TypeInfo, *(_QWORD *)&kind, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_11;
  *(_DWORD *)(v16 + 16) = kind;
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v22 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v18, v19, v20);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_AutomaticSaleDlgComponent___c__DisplayClass43_0__SwitchSelect_b__0__,
    0LL);
  v17 = BasicHelper__Any_int_(
          enableList,
          (System_Func_T__bool__o *)v22,
          (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
  v23 = this->fields.enableList;
  if ( !v23 )
    goto LABEL_11;
  v18 = *(unsigned int *)(v16 + 16);
  if ( v17 )
  {
    System_Collections_Generic_List_int___Remove(
      v23,
      v18,
      (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v23->fields._items;
  v25 = Method_System_Collections_Generic_List_int__Add__;
  ++v23->fields._version;
  if ( !items )
LABEL_11:
    sub_1BCAA3C(v17, v18);
  size = v23->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v23,
      v18,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v23->fields._size = size + 1;
    items->m_Items[size + 1] = v18;
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

  if ( (byte_4B12823 & 1) == 0 )
  {
    sub_1BCA7E0(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B12823 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  if ( (byte_4B1282E & 1) == 0 )
  {
    this = (AutomaticSaleDlgComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B1282E = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  v5 = System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL);
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

  if ( (byte_4B12824 & 1) == 0 )
  {
    sub_1BCA7E0(&AutomaticSaleDlgComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B12824 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  AutomaticSaleDlgComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutomaticSaleDlgComponent_CallbackFunc___ctor(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A084D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08488;
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
  if ( (byte_4B12832 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B12832 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall AutomaticSaleDlgComponent_CallbackFunc__EndInvoke(
        AutomaticSaleDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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