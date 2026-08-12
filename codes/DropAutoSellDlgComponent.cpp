void DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Array_o *v8; // x19
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596BE42 & 1) == 0 )
  {
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1);
    sub_2213A60(&Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE);
    byte_596BE42 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v1,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE,
    0);
  DropAutoSellDlgComponent_TypeInfo->static_fields->settingKinds = (struct System_Int32_array *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DropAutoSellDlgComponent_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v8,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1,
    0);
  static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->settingMasks = (struct System_Int32_array *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->settingMasks,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596BE41 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596BE41 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.enableList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v10, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DropAutoSellDlgComponent__Callback(DropAutoSellDlgComponent_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct DropAutoSellDlgComponent_CallbackFunc_o *v9; // x20
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_40752264(this, 0, v2);
}


void DropAutoSellDlgComponent__Close_40752264(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BE37 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DropAutoSellDlgComponent_EndClose__);
    byte_596BE37 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 5;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void DropAutoSellDlgComponent__EndOpen(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Int32_array *DropAutoSellDlgComponent__GetDisableList(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *v2; // x19
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int32_t size; // w8
  __int64 v5; // x20
  unsigned __int64 v6; // x24
  unsigned int v7; // w25
  __int64 v8; // x21
  __int64 v9; // x2
  DropAutoSellDlgComponent_CallbackFunc_c *klass; // x8
  System_Func_int__bool__c *v11; // x0
  System_Collections_Generic_List_T__o *v12; // x22
  System_Func_int__bool__o *v13; // x23
  __int64 v14; // x9

  v2 = this;
  if ( (byte_596BE3F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__);
    this = (DropAutoSellDlgComponent_o *)sub_2213A60(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
    byte_596BE3F = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_18;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v5 = sub_2213B20(int___TypeInfo, (unsigned int)(4 - size));
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_2213CCC(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( !*(&DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, method, v9);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.callbackFunc->klass;
      if ( !klass )
        break;
      if ( v6 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_19;
      if ( !v8 )
        break;
      v11 = System_Func_int__bool__TypeInfo;
      v12 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      *(_DWORD *)(v8 + 16) = *((_DWORD *)&klass->_1.byval_arg.data + v6);
      v13 = (System_Func_int__bool__o *)sub_2213CCC(v11);
      System_Func_int__bool____ctor(
        v13,
        (Il2CppObject *)v8,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        0);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v12,
                                             (System_Func_T__bool__o *)v13,
                                             (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v5 )
          break;
        if ( v7 >= *(_DWORD *)(v5 + 24) )
LABEL_19:
          sub_2213CE4(this);
        v14 = v5 + 4LL * (int)v7++;
        *(_DWORD *)(v14 + 32) = *(_DWORD *)(v8 + 16);
      }
      if ( ++v6 == 4 )
        return (System_Int32_array *)v5;
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
  return 0;
}


void DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v5; // w9

  if ( (byte_596BE35 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BE35 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.msgLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.expTitleLb;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (enableList = this->fields.enableList) == 0)
    || (v5 = enableList->fields._version + 1,
        enableList->fields._size = 0,
        enableList->fields._version = v5,
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_11:
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DropAutoSellDlgComponent__OnClickButton(DropAutoSellDlgComponent_o *this, int32_t kind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_596BE3A & 1) == 0 )
  {
    sub_2213A60(&Method_DropAutoSellDlgComponent_OnClickButton__);
    byte_596BE3A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_DropAutoSellDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_DropAutoSellDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    DropAutoSellDlgComponent__SwitchSelect(this, kind, v7);
    DropAutoSellDlgComponent__SetButtonSelect(this, kind, v8);
  }
}


void DropAutoSellDlgComponent__OnClickCancel(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_596BE39 & 1) == 0 )
  {
    sub_2213A60(&Method_DropAutoSellDlgComponent_OnClickCancel__);
    byte_596BE39 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_DropAutoSellDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_DropAutoSellDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v5);
    DropAutoSellDlgComponent__Callback(this, 0, v6);
  }
}


void DropAutoSellDlgComponent__OnClickDecide(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_596BE38 & 1) == 0 )
  {
    sub_2213A60(&Method_DropAutoSellDlgComponent_OnClickDecide__);
    byte_596BE38 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DropAutoSellDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_DropAutoSellDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    DropAutoSellDlgComponent__SetButtonEnable(this, 0, v5);
    DropAutoSellDlgComponent__RequestUserStatusFlagSet(this, v6);
  }
}


void DropAutoSellDlgComponent__OnClickExp1(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 0, v2);
}


void DropAutoSellDlgComponent__OnClickExp2(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 1, v2);
}


void DropAutoSellDlgComponent__OnClickExp3(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 2, v2);
}


void DropAutoSellDlgComponent__OnClickExp4(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__OnClickButton(this, 3, v2);
}


void DropAutoSellDlgComponent__Open(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v21; // x20
  struct UILabel_array *v22; // x8
  UILabel_o *v23; // x20
  struct UILabel_array *v24; // x8
  UILabel_o *v25; // x20
  struct UILabel_array *v26; // x8
  UILabel_o *v27; // x20
  const MethodInfo *v28; // x2
  int m_CachedPtr; // w25
  __int64 i; // x26
  struct System_Int32_array *settingMasks; // x8
  unsigned __int64 v32; // x27
  struct System_Collections_Generic_List_int__o *enableList; // x20
  __int64 v34; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v36; // x8
  __int64 size; // x10
  const MethodInfo *v38; // x2
  System_Action_c *v39; // x0
  System_Action_o *v40; // x20

  if ( (byte_596BE36 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DropAutoSellDlgComponent_EndOpen__);
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5223/*"DROP_AUTOSELL_MSG"*/);
    sub_2213A60(&StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_2213A60(&StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_2213A60(&StringLiteral_5224/*"DROP_AUTOSELL_TITLE"*/);
    sub_2213A60(&StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_2213A60(&StringLiteral_5222/*"DROP_AUTOSELL_EXP_TXT"*/);
    byte_596BE36 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5224/*"DROP_AUTOSELL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5223/*"DROP_AUTOSELL_MSG"*/, 0);
  if ( !msgLabel )
    goto LABEL_44;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_44;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5222/*"DROP_AUTOSELL_EXP_TXT"*/, 0);
  if ( !expTitleLb )
    goto LABEL_44;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_44;
  if ( !LODWORD(settingButtonLabel->max_length) )
    goto LABEL_45;
  v21 = settingButtonLabel->m_Items[0];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12314/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
  if ( !v21 )
    goto LABEL_44;
  UILabel__set_text(v21, (System_String_o *)gameObject, 0);
  v22 = this->fields.settingButtonLabel;
  if ( !v22 )
    goto LABEL_44;
  if ( (v22->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_45;
  v23 = v22->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
  if ( !v23 )
    goto LABEL_44;
  UILabel__set_text(v23, (System_String_o *)gameObject, 0);
  v24 = this->fields.settingButtonLabel;
  if ( !v24 )
    goto LABEL_44;
  if ( LODWORD(v24->max_length) <= 2 )
    goto LABEL_45;
  v25 = v24->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
  if ( !v25 || (UILabel__set_text(v25, (System_String_o *)gameObject, 0), (v26 = this->fields.settingButtonLabel) == 0) )
LABEL_44:
    sub_2213CDC(gameObject, v6);
  if ( (v26->max_length & 0xFFFFFFFC) == 0 )
LABEL_45:
    sub_2213CE4(gameObject);
  v27 = v26->m_Items[3];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12316/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
  if ( !v27 )
    goto LABEL_44;
  UILabel__set_text(v27, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !gameObject )
    goto LABEL_44;
  m_CachedPtr = gameObject[10].fields.m_CachedPtr;
  gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
  for ( i = 8; ; ++i )
  {
    if ( !HIDWORD(gameObject[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(gameObject, v6, v28);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    }
    settingMasks = *(struct System_Int32_array **)(gameObject[7].fields.m_CachedPtr + 8);
    if ( !settingMasks )
      goto LABEL_44;
    v32 = i - 8;
    if ( i - 8 >= SLODWORD(settingMasks->max_length) )
      break;
    if ( !HIDWORD(gameObject[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(gameObject, v6, v28);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      settingMasks = DropAutoSellDlgComponent_TypeInfo->static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_44;
    }
    if ( v32 >= LODWORD(settingMasks->max_length) )
      goto LABEL_45;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & m_CachedPtr) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !HIDWORD(gameObject[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(gameObject, v6, v28);
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      v34 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
      if ( !v34 )
        goto LABEL_44;
      if ( v32 >= *(unsigned int *)(v34 + 24) )
        goto LABEL_45;
      if ( !enableList )
        goto LABEL_44;
      items = enableList->fields._items;
      v6 = *(unsigned int *)(v34 + 4 * i);
      v36 = Method_System_Collections_Generic_List_int__Add__;
      ++enableList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = enableList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          enableList,
          v6,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      else
      {
        enableList->fields._size = size + 1;
        items->m_Items[size] = v6;
      }
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v28);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v38);
  v39 = System_Action_TypeInfo;
  this->fields.state = 1;
  v40 = (System_Action_o *)sub_2213CCC(v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
}


void DropAutoSellDlgComponent__RequestUserStatusFlagSet(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x20
  const MethodInfo *v7; // x1
  System_Int32_array *DisableList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v11; // x19

  if ( (byte_596BE3D & 1) == 0 )
  {
    sub_2213A60(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596BE3D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v7);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v11 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_2213CDC(DisableList, v9);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void DropAutoSellDlgComponent__SetButtonEnable(
        DropAutoSellDlgComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  unsigned __int64 i; // x21
  struct UICommonButton_array *settingButton; // x8

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
LABEL_9:
    sub_2213CDC(decideButton, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  for ( i = 0; i != 4; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= LODWORD(settingButton->max_length) )
      sub_2213CE4(decideButton);
    decideButton = (UnityEngine_Behaviour_o *)settingButton->m_Items[i];
    if ( !decideButton )
      goto LABEL_9;
    UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  }
}


void DropAutoSellDlgComponent__SetButtonSelect(
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
  System_Collections_Generic_List_T__o *v17; // x19
  UISprite_o *v18; // x20
  System_Func_int__bool__o *v19; // x22
  __int64 *v20; // x8

  if ( (byte_596BE3B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__);
    sub_2213A60(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
    sub_2213A60(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__);
    sub_2213A60(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596BE3B = 1;
  }
  v5 = sub_2213CCC(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_DWORD *)(v5 + 16) = kind;
  if ( kind == 4 )
  {
    v8 = sub_2213CCC(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( v8 )
    {
      v9 = 0;
      *(_DWORD *)(v8 + 16) = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( (unsigned int)v9 >= LODWORD(settingButtonSprites->max_length) )
          goto LABEL_22;
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v12 = settingButtonSprites->m_Items[v9];
        v13 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          0);
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v13,
               (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
        if ( !v12 )
          break;
        if ( v6 )
          v14 = &StringLiteral_18200/*"btn_bg_03"*/;
        else
          v14 = &StringLiteral_18201/*"btn_bg_04"*/;
        UISprite__set_spriteName(v12, (System_String_o *)*v14, 0);
        v9 = *(_DWORD *)(v8 + 16) + 1;
        v15 = *(_DWORD *)(v8 + 16) - 3 < 0;
        *(_DWORD *)(v8 + 16) = v9;
        if ( v15 == __OFSUB__(v9, 4) )
          return;
      }
    }
LABEL_21:
    sub_2213CDC(v6, v7);
  }
  v16 = this->fields.settingButtonSprites;
  if ( !v16 )
    goto LABEL_21;
  if ( LODWORD(v16->max_length) <= kind )
LABEL_22:
    sub_2213CE4(v6);
  v17 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v18 = v16->m_Items[kind];
  v19 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    0);
  v6 = BasicHelper__Any_int_(
         v17,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
  if ( !v18 )
    goto LABEL_21;
  v20 = &StringLiteral_18200/*"btn_bg_03"*/;
  if ( !v6 )
    v20 = &StringLiteral_18201/*"btn_bg_04"*/;
  UISprite__set_spriteName(v18, (System_String_o *)*v20, 0);
}


void DropAutoSellDlgComponent__SwitchSelect(DropAutoSellDlgComponent_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_int__o *v8; // x0
  __int64 v9; // x8
  int v10; // w8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__c *v12; // x0
  System_Func_int__bool__o *v13; // x22
  bool v14; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_596BE3C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int___);
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__);
    sub_2213A60(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
    byte_596BE3C = 1;
  }
  v5 = sub_2213CCC(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v8 = (System_Collections_Generic_List_int__o *)DropAutoSellDlgComponent_TypeInfo;
  if ( !*(&DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, v6, v7);
    v8 = (System_Collections_Generic_List_int__o *)DropAutoSellDlgComponent_TypeInfo;
  }
  v9 = **(_QWORD **)&v8[4].fields._size;
  if ( !v9 )
    goto LABEL_16;
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)kind )
    sub_2213CE4(v8);
  if ( !v5 )
    goto LABEL_16;
  v10 = *(_DWORD *)(v9 + 4LL * kind + 32);
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v12 = System_Func_int__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = v10;
  v13 = (System_Func_int__bool__o *)sub_2213CCC(v12);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
    0);
  v14 = BasicHelper__Any_int_(
          enableList,
          (System_Func_T__bool__o *)v13,
          (const MethodInfo_380FAB4 *)Method_BasicHelper_Any_int___);
  v8 = this->fields.enableList;
  if ( v14 )
  {
    if ( v8 )
    {
      System_Collections_Generic_List_int___Remove(
        v8,
        *(_DWORD *)(v5 + 16),
        (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
      return;
    }
LABEL_16:
    sub_2213CDC(v8, v6);
  }
  if ( !v8 )
    goto LABEL_16;
  items = v8->fields._items;
  v6 = *(unsigned int *)(v5 + 16);
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v8,
      v6,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = size + 1;
    items->m_Items[size] = v6;
  }
}


void DropAutoSellDlgComponent__add_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  DropAutoSellDlgComponent_o *v13; // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BE33 & 1) == 0 )
  {
    sub_2213A60(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_596BE33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v8->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (DropAutoSellDlgComponent_o *)sub_221405C(v8, DropAutoSellDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  DropAutoSellDlgComponent__remove_callbackFunc(v13, v14, v15);
}


void DropAutoSellDlgComponent__callbackUsetStatusFlagSet(
        DropAutoSellDlgComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *v4; // x19
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  v4 = this;
  if ( (byte_596BE3E & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596BE3E = 1;
  }
  if ( !result )
    sub_2213CDC(this, result);
  v5 = System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0);
  v4->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v4, 0, v6);
  DropAutoSellDlgComponent__Callback(v4, v5, v7);
}


UnityEngine_GameObject_o *DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596BE40 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BE40 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void DropAutoSellDlgComponent__remove_callbackFunc(
        DropAutoSellDlgComponent_o *this,
        DropAutoSellDlgComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DropAutoSellDlgComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  DropAutoSellDlgComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BE34 & 1) == 0 )
  {
    sub_2213A60(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_596BE34 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DropAutoSellDlgComponent_CallbackFunc_c *)v8->klass != DropAutoSellDlgComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (DropAutoSellDlgComponent_o *)sub_221405C(v8, DropAutoSellDlgComponent_CallbackFunc_TypeInfo, v9, v10);
  DropAutoSellDlgComponent__Init(v13, v14);
}


void DropAutoSellDlgComponent_CallbackFunc___ctor(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003F34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2003EEC;
}


System_IAsyncResult_o *DropAutoSellDlgComponent_CallbackFunc__BeginInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void DropAutoSellDlgComponent_CallbackFunc__Invoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void DropAutoSellDlgComponent___c__DisplayClass35_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DropAutoSellDlgComponent___c__DisplayClass35_0___SetButtonSelect_b__0(
        DropAutoSellDlgComponent___c__DisplayClass35_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 kind; // x9

  if ( (byte_596BE43 & 1) == 0 )
  {
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    byte_596BE43 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !*(&DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x, method);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_2213CDC(v5, *(_QWORD *)&x);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(settingKinds->max_length) )
    sub_2213CE4(v5);
  return settingKinds->m_Items[kind] == x;
}


void DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DropAutoSellDlgComponent___c__DisplayClass35_1___SetButtonSelect_b__1(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 i; // x9

  if ( (byte_596BE44 & 1) == 0 )
  {
    sub_2213A60(&DropAutoSellDlgComponent_TypeInfo);
    byte_596BE44 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !*(&DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo, *(_QWORD *)&x, method);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_2213CDC(v5, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(settingKinds->max_length) )
    sub_2213CE4(v5);
  return settingKinds->m_Items[i] == x;
}


void DropAutoSellDlgComponent___c__DisplayClass37_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DropAutoSellDlgComponent___c__DisplayClass37_0___SwitchSelect_b__0(
        DropAutoSellDlgComponent___c__DisplayClass37_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.target == x;
}


void DropAutoSellDlgComponent___c__DisplayClass40_0___ctor(
        DropAutoSellDlgComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DropAutoSellDlgComponent___c__DisplayClass40_0___GetDisableList_b__0(
        DropAutoSellDlgComponent___c__DisplayClass40_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.target == x;
}