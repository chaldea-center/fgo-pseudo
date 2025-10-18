void DropAutoSellDlgComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v7; // x1
  System_Array_o *v8; // x19
  struct DropAutoSellDlgComponent_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3E823 & 1) == 0 )
  {
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1);
    sub_1C37058(&Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE);
    byte_4C3E823 = 1;
  }
  v1 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
  v2.fields.value = Field__PrivateImplementationDetails__63859276EDC9733EDCD11B6E9B87C024B4519C893567720D95DA60C9850C22DE;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v1, v2, 0);
  DropAutoSellDlgComponent_TypeInfo->static_fields->settingKinds = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)DropAutoSellDlgComponent_TypeInfo->static_fields, (int32_t)v3, v4, v5);
  v6 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
  v7.fields.value = Field__PrivateImplementationDetails__01DE6A7D9D19E08202A552CCAB4AF80ECBBA6F323968DB42D518815A6D2A42E1;
  v8 = v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v6, v7, 0);
  static_fields = DropAutoSellDlgComponent_TypeInfo->static_fields;
  static_fields->settingMasks = (struct System_Int32_array *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->settingMasks, (int32_t)v8, v10, v11);
}


void DropAutoSellDlgComponent___ctor(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3E822 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3E822 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.enableList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.enableList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DropAutoSellDlgComponent__Callback(DropAutoSellDlgComponent_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct DropAutoSellDlgComponent_CallbackFunc_o *v5; // x20
  struct DropAutoSellDlgComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void DropAutoSellDlgComponent__Close(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DropAutoSellDlgComponent__Close_34009844(this, 0, v2);
}


void DropAutoSellDlgComponent__Close_34009844(
        DropAutoSellDlgComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3E818 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DropAutoSellDlgComponent_EndClose__);
    byte_4C3E818 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void DropAutoSellDlgComponent__EndClose(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DropAutoSellDlgComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
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
  unsigned __int64 v6; // x29
  unsigned int v7; // w24
  __int64 v8; // x21
  DropAutoSellDlgComponent_CallbackFunc_c *klass; // x8
  System_Collections_Generic_List_T__o *v10; // x22
  System_Func_int__bool__o *v11; // x23
  __int64 v12; // x9

  v2 = this;
  if ( (byte_4C3E820 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__);
    this = (DropAutoSellDlgComponent_o *)sub_1C37058(&DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
    byte_4C3E820 = 1;
  }
  enableList = v2->fields.enableList;
  if ( !enableList )
    goto LABEL_19;
  size = enableList->fields._size;
  if ( size != 4 )
  {
    v5 = sub_1C37100(int___TypeInfo, (unsigned int)(4 - size));
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_1C372A4(DropAutoSellDlgComponent___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
        this = (DropAutoSellDlgComponent_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      klass = this->fields.callbackFunc->klass;
      if ( !klass )
        break;
      if ( v6 >= LODWORD(klass->_1.namespaze) )
        goto LABEL_20;
      if ( !v8 )
        break;
      *(_DWORD *)(v8 + 16) = *((_DWORD *)&klass->_1.byval_arg.data + v6);
      v10 = (System_Collections_Generic_List_T__o *)v2->fields.enableList;
      v11 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v11,
        (Il2CppObject *)v8,
        Method_DropAutoSellDlgComponent___c__DisplayClass40_0__GetDisableList_b__0__,
        0);
      this = (DropAutoSellDlgComponent_o *)BasicHelper__Any_int_(
                                             v10,
                                             (System_Func_T__bool__o *)v11,
                                             (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v5 )
          break;
        if ( v7 >= *(_DWORD *)(v5 + 24) )
LABEL_20:
          sub_1C372BC(this);
        v12 = v5 + 4LL * (int)v7++;
        *(_DWORD *)(v12 + 32) = *(_DWORD *)(v8 + 16);
      }
      if ( ++v6 == 4 )
        return (System_Int32_array *)v5;
    }
LABEL_19:
    sub_1C372B4(this);
  }
  return 0;
}


void DropAutoSellDlgComponent__Init(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct System_Collections_Generic_List_int__o *enableList; // x8
  int v5; // w9

  if ( (byte_4C3E816 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E816 = 1;
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
    sub_1C372B4(titleLabel);
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

  if ( (byte_4C3E81B & 1) == 0 )
  {
    sub_1C37058(&Method_DropAutoSellDlgComponent_OnClickButton__);
    byte_4C3E81B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_DropAutoSellDlgComponent_OnClickButton__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_DropAutoSellDlgComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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

  if ( (byte_4C3E81A & 1) == 0 )
  {
    sub_1C37058(&Method_DropAutoSellDlgComponent_OnClickCancel__);
    byte_4C3E81A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_DropAutoSellDlgComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_DropAutoSellDlgComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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

  if ( (byte_4C3E819 & 1) == 0 )
  {
    sub_1C37058(&Method_DropAutoSellDlgComponent_OnClickDecide__);
    byte_4C3E819 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_DropAutoSellDlgComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_DropAutoSellDlgComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_DropAutoSellDlgComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *msgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *expTitleLb; // x20
  struct UILabel_array *settingButtonLabel; // x8
  UILabel_o *v14; // x20
  struct UILabel_array *v15; // x8
  UILabel_o *v16; // x20
  struct UILabel_array *v17; // x8
  UILabel_o *v18; // x20
  struct UILabel_array *v19; // x8
  UILabel_o *v20; // x20
  const MethodInfo *v21; // x2
  int m_CachedPtr; // w25
  __int64 i; // x26
  struct System_Int32_array *settingMasks; // x8
  unsigned __int64 v25; // x27
  struct System_Collections_Generic_List_int__o *enableList; // x20
  __int64 v27; // x8
  int32_t v28; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  const MethodInfo *v32; // x2
  System_Action_o *v33; // x20

  if ( (byte_4C3E817 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DropAutoSellDlgComponent_EndOpen__);
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_5036/*"DROP_AUTOSELL_MSG"*/);
    sub_1C37058(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_1C37058(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_1C37058(&StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_1C37058(&StringLiteral_5037/*"DROP_AUTOSELL_TITLE"*/);
    sub_1C37058(&StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    sub_1C37058(&StringLiteral_5035/*"DROP_AUTOSELL_EXP_TXT"*/);
    byte_4C3E817 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5037/*"DROP_AUTOSELL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  msgLabel = this->fields.msgLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5036/*"DROP_AUTOSELL_MSG"*/, 0);
  if ( !msgLabel )
    goto LABEL_44;
  UILabel__set_text(msgLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_44;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
  expTitleLb = this->fields.expTitleLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5035/*"DROP_AUTOSELL_EXP_TXT"*/, 0);
  if ( !expTitleLb )
    goto LABEL_44;
  UILabel__set_text(expTitleLb, (System_String_o *)gameObject, 0);
  settingButtonLabel = this->fields.settingButtonLabel;
  if ( !settingButtonLabel )
    goto LABEL_44;
  if ( !LODWORD(settingButtonLabel->max_length) )
    goto LABEL_45;
  v14 = settingButtonLabel->m_Items[0];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0);
  if ( !v14 )
    goto LABEL_44;
  UILabel__set_text(v14, (System_String_o *)gameObject, 0);
  v15 = this->fields.settingButtonLabel;
  if ( !v15 )
    goto LABEL_44;
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_45;
  v16 = v15->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0);
  if ( !v16 )
    goto LABEL_44;
  UILabel__set_text(v16, (System_String_o *)gameObject, 0);
  v17 = this->fields.settingButtonLabel;
  if ( !v17 )
    goto LABEL_44;
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_45;
  v18 = v17->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0);
  if ( !v18 || (UILabel__set_text(v18, (System_String_o *)gameObject, 0), (v19 = this->fields.settingButtonLabel) == 0) )
LABEL_44:
    sub_1C372B4(gameObject);
  if ( LODWORD(v19->max_length) <= 3 )
LABEL_45:
    sub_1C372BC(gameObject);
  v20 = v19->m_Items[3];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0);
  if ( !v20 )
    goto LABEL_44;
  UILabel__set_text(v20, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0);
  if ( !gameObject )
    goto LABEL_44;
  m_CachedPtr = gameObject[10].fields.m_CachedPtr;
  for ( i = 8; ; ++i )
  {
    gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
    }
    settingMasks = *(struct System_Int32_array **)(gameObject[7].fields.m_CachedPtr + 8);
    if ( !settingMasks )
      goto LABEL_44;
    v25 = i - 8;
    if ( i - 8 >= SLODWORD(settingMasks->max_length) )
      break;
    if ( !LODWORD(gameObject[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(gameObject);
      gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      settingMasks = DropAutoSellDlgComponent_TypeInfo->static_fields->settingMasks;
      if ( !settingMasks )
        goto LABEL_44;
    }
    if ( v25 >= LODWORD(settingMasks->max_length) )
      goto LABEL_45;
    if ( (*((_DWORD *)&settingMasks->obj.klass + i) & m_CachedPtr) != 0 )
    {
      enableList = this->fields.enableList;
      if ( !LODWORD(gameObject[9].monitor) )
      {
        j_il2cpp_runtime_class_init_0(gameObject);
        gameObject = (UnityEngine_GameObject_o *)DropAutoSellDlgComponent_TypeInfo;
      }
      v27 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
      if ( !v27 )
        goto LABEL_44;
      if ( v25 >= *(unsigned int *)(v27 + 24) )
        goto LABEL_45;
      if ( !enableList )
        goto LABEL_44;
      v28 = *(_DWORD *)(v27 + 4 * i);
      items = enableList->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++enableList->fields._version;
      if ( !items )
        goto LABEL_44;
      size = enableList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          enableList,
          v28,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        enableList->fields._size = size + 1;
        items->m_Items[size] = v28;
      }
    }
  }
  DropAutoSellDlgComponent__SetButtonSelect(this, 4, v21);
  DropAutoSellDlgComponent__SetButtonEnable(this, 1, v32);
  this->fields.state = 1;
  v33 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_DropAutoSellDlgComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
}


void DropAutoSellDlgComponent__RequestUserStatusFlagSet(DropAutoSellDlgComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *DisableList; // x0
  System_Collections_Generic_List_int__o *enableList; // x8
  System_Int32_array *v8; // x19

  if ( (byte_4C3E81E & 1) == 0 )
  {
    sub_1C37058(&Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3E81E = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_DropAutoSellDlgComponent_callbackUsetStatusFlagSet__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_UserStatusFlagSetRequest___);
  DisableList = DropAutoSellDlgComponent__GetDisableList(this, v5);
  enableList = this->fields.enableList;
  if ( !enableList
    || (v8 = DisableList,
        DisableList = System_Collections_Generic_List_int___ToArray(
                        enableList,
                        (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        !Request_object) )
  {
    sub_1C372B4(DisableList);
  }
  UserStatusFlagSetRequest__beginRequest((UserStatusFlagSetRequest_o *)Request_object, DisableList, v8, 0);
}


void DropAutoSellDlgComponent__SetButtonEnable(
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
        UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton) == 0) )
  {
LABEL_9:
    sub_1C372B4(decideButton);
  }
  UnityEngine_Behaviour__set_enabled(decideButton, v5, 0);
  for ( i = 0; i != 4; ++i )
  {
    settingButton = this->fields.settingButton;
    if ( !settingButton )
      goto LABEL_9;
    if ( i >= LODWORD(settingButton->max_length) )
      sub_1C372BC(decideButton);
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
  __int64 v7; // x20
  int v8; // w8
  struct UISprite_array *settingButtonSprites; // x9
  System_Collections_Generic_List_T__o *enableList; // x22
  UISprite_o *v11; // x21
  System_Func_int__bool__o *v12; // x23
  __int64 *v13; // x8
  bool v14; // nf
  struct UISprite_array *v15; // x8
  Il2CppClass **v16; // x8
  System_Collections_Generic_List_T__o *v17; // x20
  UISprite_o *v18; // x19
  System_Func_int__bool__o *v19; // x22
  __int64 *v20; // x8

  if ( (byte_4C3E81C & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__);
    sub_1C37058(&DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
    sub_1C37058(&Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__);
    sub_1C37058(&DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    sub_1C37058(&StringLiteral_17439/*"btn_bg_04"*/);
    sub_1C37058(&StringLiteral_17438/*"btn_bg_03"*/);
    byte_4C3E81C = 1;
  }
  v5 = sub_1C372A4(DropAutoSellDlgComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_DWORD *)(v5 + 16) = kind;
  if ( kind == 4 )
  {
    v7 = sub_1C372A4(DropAutoSellDlgComponent___c__DisplayClass35_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      v8 = 0;
      while ( 1 )
      {
        settingButtonSprites = this->fields.settingButtonSprites;
        if ( !settingButtonSprites )
          break;
        if ( (unsigned int)v8 >= LODWORD(settingButtonSprites->max_length) )
          goto LABEL_22;
        enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
        v11 = settingButtonSprites->m_Items[v8];
        v12 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v12,
          (Il2CppObject *)v7,
          Method_DropAutoSellDlgComponent___c__DisplayClass35_1__SetButtonSelect_b__1__,
          0);
        v6 = BasicHelper__Any_int_(
               enableList,
               (System_Func_T__bool__o *)v12,
               (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
        if ( !v11 )
          break;
        if ( v6 )
          v13 = &StringLiteral_17438/*"btn_bg_03"*/;
        else
          v13 = &StringLiteral_17439/*"btn_bg_04"*/;
        UISprite__set_spriteName(v11, (System_String_o *)*v13, 0);
        v8 = *(_DWORD *)(v7 + 16) + 1;
        v14 = *(_DWORD *)(v7 + 16) - 3 < 0;
        *(_DWORD *)(v7 + 16) = v8;
        if ( v14 == __OFSUB__(v8, 4) )
          return;
      }
    }
LABEL_21:
    sub_1C372B4(v6);
  }
  v15 = this->fields.settingButtonSprites;
  if ( !v15 )
    goto LABEL_21;
  if ( LODWORD(v15->max_length) <= kind )
LABEL_22:
    sub_1C372BC(v6);
  v16 = &v15->obj.klass + kind;
  v17 = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v18 = (UISprite_o *)v16[4];
  v19 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass35_0__SetButtonSelect_b__0__,
    0);
  v6 = BasicHelper__Any_int_(
         v17,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
  if ( !v18 )
    goto LABEL_21;
  v20 = &StringLiteral_17438/*"btn_bg_03"*/;
  if ( !v6 )
    v20 = &StringLiteral_17439/*"btn_bg_04"*/;
  UISprite__set_spriteName(v18, (System_String_o *)*v20, 0);
}


void DropAutoSellDlgComponent__SwitchSelect(DropAutoSellDlgComponent_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x21
  DropAutoSellDlgComponent_c *v6; // x0
  struct System_Int32_array *settingKinds; // x8
  System_Collections_Generic_List_T__o *enableList; // x20
  System_Func_int__bool__o *v9; // x22
  struct System_Collections_Generic_List_int__o *v10; // x8
  int32_t v11; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11

  if ( (byte_4C3E81D & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_int___);
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C37058(&Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__);
    sub_1C37058(&DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
    byte_4C3E81D = 1;
  }
  v5 = sub_1C372A4(DropAutoSellDlgComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v6 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v6->static_fields->settingKinds;
  if ( !settingKinds )
    goto LABEL_15;
  if ( LODWORD(settingKinds->max_length) <= kind )
    sub_1C372BC(v6);
  if ( !v5 )
    goto LABEL_15;
  *(_DWORD *)(v5 + 16) = settingKinds->m_Items[kind];
  enableList = (System_Collections_Generic_List_T__o *)this->fields.enableList;
  v9 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_DropAutoSellDlgComponent___c__DisplayClass37_0__SwitchSelect_b__0__,
    0);
  v6 = (DropAutoSellDlgComponent_c *)BasicHelper__Any_int_(
                                       enableList,
                                       (System_Func_T__bool__o *)v9,
                                       (const MethodInfo_30D0CCC *)Method_BasicHelper_Any_int___);
  v10 = this->fields.enableList;
  if ( !v10 )
    goto LABEL_15;
  v11 = *(_DWORD *)(v5 + 16);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    System_Collections_Generic_List_int___Remove(
      v10,
      v11,
      (const MethodInfo_37874FC *)Method_System_Collections_Generic_List_int__Remove__);
    return;
  }
  items = v10->fields._items;
  v13 = Method_System_Collections_Generic_List_int__Add__;
  ++v10->fields._version;
  if ( !items )
LABEL_15:
    sub_1C372B4(v6);
  size = v10->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v10,
      v11,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    items->m_Items[size] = v11;
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
  __int64 v9; // x0
  bool v10; // zf
  DropAutoSellDlgComponent_o *v11; // x0
  DropAutoSellDlgComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3E814 & 1) == 0 )
  {
    sub_1C37058(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_4C3E814 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1C37574(v8);
  DropAutoSellDlgComponent__remove_callbackFunc(v11, v12, v13);
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
  if ( (byte_4C3E81F & 1) == 0 )
  {
    this = (DropAutoSellDlgComponent_o *)sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C3E81F = 1;
  }
  if ( !result )
    sub_1C372B4(this);
  v5 = System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22382/*"ok"*/, 0);
  v4->fields.state = 4;
  DropAutoSellDlgComponent__SetButtonEnable(v4, 0, v6);
  DropAutoSellDlgComponent__Callback(v4, v5, v7);
}


UnityEngine_GameObject_o *DropAutoSellDlgComponent__get_closeBtnObject(
        DropAutoSellDlgComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3E821 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E821 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  DropAutoSellDlgComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3E815 & 1) == 0 )
  {
    sub_1C37058(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    byte_4C3E815 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DropAutoSellDlgComponent_o *)sub_1C37574(v8);
  DropAutoSellDlgComponent__Init(v11, v12);
}


void DropAutoSellDlgComponent_CallbackFunc___ctor(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A757DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A75794;
}


System_IAsyncResult_o *DropAutoSellDlgComponent_CallbackFunc__BeginInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C3E824 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3E824 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void DropAutoSellDlgComponent_CallbackFunc__EndInvoke(
        DropAutoSellDlgComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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


bool DropAutoSellDlgComponent___c__DisplayClass35_0___SetButtonSelect_b__0(
        DropAutoSellDlgComponent___c__DisplayClass35_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 kind; // x9

  if ( (byte_4C3E825 & 1) == 0 )
  {
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    byte_4C3E825 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1C372B4(v5);
  kind = this->fields.kind;
  if ( (unsigned int)kind >= LODWORD(settingKinds->max_length) )
    sub_1C372BC(v5);
  return settingKinds->m_Items[kind] == x;
}


void DropAutoSellDlgComponent___c__DisplayClass35_1___ctor(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DropAutoSellDlgComponent___c__DisplayClass35_1___SetButtonSelect_b__1(
        DropAutoSellDlgComponent___c__DisplayClass35_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  DropAutoSellDlgComponent_c *v5; // x0
  struct System_Int32_array *settingKinds; // x8
  __int64 i; // x9

  if ( (byte_4C3E826 & 1) == 0 )
  {
    sub_1C37058(&DropAutoSellDlgComponent_TypeInfo);
    byte_4C3E826 = 1;
  }
  v5 = DropAutoSellDlgComponent_TypeInfo;
  if ( !DropAutoSellDlgComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DropAutoSellDlgComponent_TypeInfo);
    v5 = DropAutoSellDlgComponent_TypeInfo;
  }
  settingKinds = v5->static_fields->settingKinds;
  if ( !settingKinds )
    sub_1C372B4(v5);
  i = this->fields.i;
  if ( (unsigned int)i >= LODWORD(settingKinds->max_length) )
    sub_1C372BC(v5);
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