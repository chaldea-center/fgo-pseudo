void __fastcall AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  __int64 v11; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v12; // x0

  if ( (byte_4B10D27 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageUnlinkConfirmDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_446/*"#E60000"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_439/*"#787878"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_442/*"#B30000"*/, v7, v8);
    byte_4B10D27 = 1;
  }
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_439/*"#787878"*/;
  sub_1BCA784(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields, StringLiteral_439/*"#787878"*/);
  v9 = StringLiteral_446/*"#E60000"*/;
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_446/*"#E60000"*/;
  sub_1BCA784(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE, v9);
  v11 = StringLiteral_442/*"#B30000"*/;
  v12 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v12->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_442/*"#B30000"*/;
  sub_1BCA784(&v12->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE, v11);
}


void __fastcall AccountLinkageUnlinkConfirmDialog___ctor(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10D26 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10D26 = 1;
  }
  this->fields.DEFULT_MESSAGE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0xF0000002BCLL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageUnlinkConfirmDialog__Close_30678796(this, 0LL, v2);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close_30678796(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10D21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    byte_4B10D21 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__EndClose(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AccountLinkageUnlinkConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__EndOpen(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Init(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v7; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v12; // x1

  if ( (byte_4B10D1F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B10D1F = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_25:
    sub_1BCAA3C(gameObject, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v12);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x22
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x1
  UnityEngine_Object_o *buttonDecide; // x20
  __int64 v50; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10D23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_10524/*"PLAY_OPENING_CONFIRM_CANCEL"*/, v20, v21);
    byte_4B10D23 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v22 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    v23 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v24 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10524/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0LL);
    v25 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
    v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v26,
                                                         v27,
                                                         v28);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v29 )
      goto LABEL_34;
    items = v29->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v29->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v22,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v22;
      v30 = sub_1BCA784(v35 + 4, v22);
    }
    v36 = v29->fields._items;
    v37 = Method_System_Collections_Generic_List_string__Add__;
    ++v29->fields._version;
    if ( !v36 )
      goto LABEL_34;
    v38 = v29->fields._size;
    if ( (unsigned int)v38 >= v36->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v23,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = &v36->obj.klass + v38;
      v29->fields._size = v38 + 1;
      v39[4] = (Il2CppClass *)v23;
      v30 = sub_1BCA784(v39 + 4, v23);
    }
    v40 = v29->fields._items;
    v41 = Method_System_Collections_Generic_List_string__Add__;
    ++v29->fields._version;
    if ( !v40 )
      goto LABEL_34;
    v42 = v29->fields._size;
    if ( (unsigned int)v42 >= v40->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v24,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
    }
    else
    {
      v43 = &v40->obj.klass + v42;
      v29->fields._size = v42 + 1;
      v43[4] = (Il2CppClass *)v24;
      v30 = sub_1BCA784(v43 + 4, v24);
    }
    v44 = v29->fields._items;
    v45 = Method_System_Collections_Generic_List_string__Add__;
    ++v29->fields._version;
    if ( !v44 )
LABEL_34:
      sub_1BCAA3C(v30, v31);
    v46 = v29->fields._size;
    if ( (unsigned int)v46 >= v44->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v25,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &v44->obj.klass + v46;
      v29->fields._size = v46 + 1;
      v47[4] = (Il2CppClass *)v25;
      sub_1BCA784(v47 + 4, v25);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( !UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    {
      buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
      UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
    }
    v52 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v52 = (_QWORD *)sub_1BCA7F8();
    v53 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v52, v52[4]);
    OverwriteAssetSoundName__PlaySystemSe(v53, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickDecide(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIProgressBar_o *checkSlider; // x0
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _BOOL4 isDecideBtnSe; // w20
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B10D22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B10D22 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1BCAA3C(0LL, method);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      isDecideBtnSe = this->fields.isDecideBtnSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
      SoundManager__playSystemSe(8 * isDecideBtnSe, 0LL);
      clickFunc = this->fields.clickFunc;
      this->fields.isButtonEnable = 0;
      if ( clickFunc )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
          clickFunc->fields.original_method_info,
          1LL,
          *(_QWORD *)&clickFunc->fields.extra_arg);
    }
    else
    {
      v8 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8();
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
    }
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnEnable(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B10D25 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4695/*"CommonConfirmDialog/Window/CancelButton"*/, method, v2);
    byte_4B10D25 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_4695/*"CommonConfirmDialog/Window/CancelButton"*/, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnSliderDragFinished(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  bool v5; // nf
  float v6; // s0
  bool v7; // w20
  const MethodInfo *v8; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (value = UIProgressBar__get_value(checkSlider, 0LL),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0LL) )
  {
    sub_1BCAA3C(checkSlider, method);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0LL);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, v7, v8);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OpenLinkageDlg(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        System_Nullable_Color__o *decideColor,
        System_Nullable_Color__o *cancelColor,
        int32_t decideTxtSize,
        int32_t decideMaxLine,
        int32_t cancelTxtSize,
        int32_t cancelMaxLine,
        const MethodInfo *method)
{
  __int128 v18; // q0
  __int128 v19; // q0
  System_String_o *v20; // [xsp+80h] [xbp-60h]
  const MethodInfo *v21; // [xsp+88h] [xbp-58h]
  System_Nullable_Color__o v22; // [xsp+90h] [xbp-50h] BYREF
  System_Nullable_Color__o v23; // [xsp+B0h] [xbp-30h] BYREF

  v18 = *(_OWORD *)&decideColor->fields.hasValue;
  v23.fields.value.fields.a = decideColor->fields.value.fields.a;
  *(_OWORD *)&v23.fields.hasValue = v18;
  v19 = *(_OWORD *)&cancelColor->fields.hasValue;
  v22.fields.value.fields.a = cancelColor->fields.value.fields.a;
  *(_OWORD *)&v22.fields.hasValue = v19;
  AccountLinkageUnlinkConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    0.0,
    messagePosY,
    spacingY,
    messageWidgetSize,
    &v23,
    &v22,
    decideTxtSize,
    decideMaxLine,
    cancelTxtSize,
    cancelMaxLine,
    0,
    0,
    0LL,
    0,
    0,
    0,
    0,
    512,
    -178.0,
    v20,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageUnlinkConfirmDialog__SetSlider(
        AccountLinkageUnlinkConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *sliderSprite; // x0
  System_String_o **v12; // x8
  __int64 v13; // x1
  AccountLinkageUnlinkConfirmDialog_c *v14; // x0
  __int64 v15; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v20; // x1
  AccountLinkageUnlinkConfirmDialog_c *v21; // x0
  __int64 v22; // x9
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4B10D24 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageUnlinkConfirmDialog_TypeInfo, sliderOn, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___, v5, v6);
    sub_1BCA7E0(&StringLiteral_20689/*"img_slider_thumb_locked"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20688/*"img_slider_thumb"*/, v9, v10);
    byte_4B10D24 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v23.fields.r = 0LL;
  *(_QWORD *)&v23.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_25;
  v12 = (System_String_o **)&StringLiteral_20688/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v12 = (System_String_o **)&StringLiteral_20689/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v12, 0LL);
  v14 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo, v13);
    v14 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v14->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &color, 0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  v15 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
    sliderSprite,
    v15,
    1LL,
    sliderSprite->klass->vtable._15_OnInit.methodPtr);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( !sliderOn )
  {
    r = color.fields.r;
    g = color.fields.g;
    b = color.fields.b;
    a = color.fields.a;
  }
  if ( !sliderSprite )
    goto LABEL_25;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
  v21 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo, v20);
    v21 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  v22 = 16LL;
  if ( sliderOn )
    v22 = 8LL;
  UnityEngine_ColorUtility__TryParseHtmlString(
    *(System_String_o **)((char *)&v21->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE + v22),
    &v23,
    0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecideLabel;
  if ( !sliderSprite )
LABEL_25:
    sub_1BCAA3C(sliderSprite, sliderOn);
  UIWidget__set_color((UIWidget_o *)sliderSprite, v23, 0LL);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Setup(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        System_Nullable_Color__o *decideColor,
        System_Nullable_Color__o *cancelColor,
        int32_t decideTxtSize,
        int32_t decideMaxLine,
        int32_t cancelTxtSize,
        int32_t cancelMaxLine,
        bool canMaskTouchClose,
        int32_t maskType,
        System_Nullable_float__o titlePosY,
        int32_t titleFontSize,
        bool setCondensedScale,
        int32_t minFontSize,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        System_String_o *addMsg,
        const MethodInfo *method)
{
  int32_t v29; // w29
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  UnityEngine_Object_o *titleLabel; // x23
  unsigned __int64 v67; // x1
  unsigned __int64 baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v71; // x23
  System_String_o *v72; // x1
  UnityEngine_Object_o *messageLabel; // x23
  UnityEngine_GameObject_o *v74; // x0
  UILabel_o *v75; // x21
  int32_t v76; // w20
  int32_t v77; // w3
  int32_t v78; // w4
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v80; // x1
  UILabel_o *v81; // x20
  UILabel_o *v82; // x20
  float *p_a; // x10
  struct UnityEngine_Color_o *p_value; // x8
  float *p_b; // x11
  float *p_g; // x9
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v88; // x1
  UILabel_o *v89; // x20
  UILabel_o *v90; // x20
  float *v91; // x10
  struct UnityEngine_Color_o *v92; // x8
  float *v93; // x11
  float *v94; // x9
  UnityEngine_Object_o *buttonDecide; // x20
  __int64 v96; // x1
  UnityEngine_Object_o *buttonCancel; // x20
  __int64 v98; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v100; // x2
  struct UISlider_o *checkSlider; // x20
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  UIProgressBar_OnDragFinished_o *v105; // x21
  const MethodInfo *v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Action_o *v110; // x19
  const MethodInfo *v111; // x3
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = titleFontSize;
  if ( (byte_4B10D20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, title, message);
    sub_1BCA7E0(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__, v37, v38);
    sub_1BCA7E0(&System_Action_TypeInfo, v39, v40);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___, v43, v44);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v47, v48);
    sub_1BCA7E0(&Method_System_Nullable_Color__GetValueOrDefault__, v49, v50);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v51, v52);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v53, v54);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v55, v56);
    sub_1BCA7E0(&UIProgressBar_OnDragFinished_TypeInfo, v57, v58);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v63, v64);
    byte_4B10D20 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_102;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 196.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    v71 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v67);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 488LL);
    }
    if ( !v71 )
      goto LABEL_102;
    UILabel__set_fontSize(v71, v29, 0LL);
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_102;
    if ( title )
      v72 = title;
    else
      v72 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v72, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(v74, messagePosY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0LL);
    v75 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v67);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 488LL);
    }
    if ( !v75 )
      goto LABEL_102;
    UILabel__set_fontSize(v75, fontsize, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v76 = *(_DWORD *)(baseWindow + 168);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0LL);
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_102;
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_102;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v76, 0LL);
    }
    else
    {
      if ( message )
        v67 = (unsigned __int64)message;
      else
        v67 = (unsigned __int64)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_102;
      v77 = minFontSize;
      if ( minFontSize < 1 )
      {
        v77 = 0;
        v78 = 0;
      }
      else
      {
        v78 = 500;
      }
      WrapControlText__textAdjust(
        (UILabel_o *)baseWindow,
        (System_String_o *)v67,
        *(_DWORD *)(baseWindow + 424),
        v77,
        v78,
        0LL);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  baseWindow = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v81 = this->fields.buttonDecideLabel;
    v67 = (unsigned __int64)decideTxt;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0LL);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
      v67 = baseWindow;
    }
    if ( !v81 )
      goto LABEL_102;
    UILabel__set_text(v81, (System_String_o *)v67, 0LL);
    v82 = this->fields.buttonDecideLabel;
    v67 = (unsigned int)decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)decideTxtSize);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v67 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 488LL);
    }
    if ( !v82 )
      goto LABEL_102;
    UILabel__set_fontSize(v82, v67, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( decideColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_102;
      p_a = &decideColor->fields.value.fields.a;
      p_value = &decideColor->fields.value;
      p_b = &decideColor->fields.value.fields.b;
      p_g = &decideColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_102;
      p_value = (struct UnityEngine_Color_o *)(baseWindow + 148);
      p_g = (float *)(baseWindow + 152);
      p_b = (float *)(baseWindow + 156);
      p_a = (float *)(baseWindow + 160);
    }
    v116.fields.a = *p_a;
    v116.fields.b = *p_b;
    v116.fields.g = *p_g;
    v116.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v116, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  baseWindow = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v89 = this->fields.buttonCancelLabel;
    v67 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0LL);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
      v67 = baseWindow;
    }
    if ( !v89 )
      goto LABEL_102;
    UILabel__set_text(v89, (System_String_o *)v67, 0LL);
    v90 = this->fields.buttonCancelLabel;
    v67 = (unsigned int)cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)cancelTxtSize);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v67 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 488LL);
    }
    if ( !v90 )
      goto LABEL_102;
    UILabel__set_fontSize(v90, v67, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v91 = &cancelColor->fields.value.fields.a;
      v92 = &cancelColor->fields.value;
      v93 = &cancelColor->fields.value.fields.b;
      v94 = &cancelColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_102;
      v92 = (struct UnityEngine_Color_o *)(baseWindow + 148);
      v94 = (float *)(baseWindow + 152);
      v93 = (float *)(baseWindow + 156);
      v91 = (float *)(baseWindow + 160);
    }
    v117.fields.a = *v91;
    v117.fields.b = *v93;
    v117.fields.g = *v94;
    v117.fields.r = v92->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v117, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, cancelMaxLine, 0LL);
  }
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0LL);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_102;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98);
  baseWindow = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_102;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0LL);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v100);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0LL),
        checkSlider = this->fields.checkSlider,
        v105 = (UIProgressBar_OnDragFinished_o *)sub_1BCAA2C(UIProgressBar_OnDragFinished_TypeInfo, v102, v103, v104),
        UIProgressBar_OnDragFinished___ctor(
          v105,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0LL),
        !checkSlider) )
  {
LABEL_102:
    sub_1BCAA3C(baseWindow, v67);
  }
  checkSlider->fields.onDragFinished = v105;
  sub_1BCA784(&checkSlider->fields.onDragFinished, v105);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v106);
  v110 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v107, v108, v109);
  System_Action___ctor(v110, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v110, maskType, v111);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04CC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04C80;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B10D28 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B10D28 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}