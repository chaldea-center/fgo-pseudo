void __fastcall AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v6; // x0

  if ( (byte_4AFC11E & 1) == 0 )
  {
    sub_1BC3008(&AccountLinkageUnlinkConfirmDialog_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_419/*"#E60000"*/, v2);
    sub_1BC3008(&StringLiteral_412/*"#787878"*/, v3);
    sub_1BC3008(&StringLiteral_415/*"#B30000"*/, v4);
    byte_4AFC11E = 1;
  }
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_412/*"#787878"*/;
  sub_1BC2FAC(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields);
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_419/*"#E60000"*/;
  sub_1BC2FAC(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE);
  v6 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v6->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_415/*"#B30000"*/;
  sub_1BC2FAC(&v6->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE);
}


void __fastcall AccountLinkageUnlinkConfirmDialog___ctor(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFC11D & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFC11D = 1;
  }
  this->fields.DEFULT_MESSAGE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0xF0000002BCLL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageUnlinkConfirmDialog__Close_30642672(this, 0LL, v2);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close_30642672(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4AFC118 & 1) == 0 )
  {
    sub_1BC3008(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__, callback);
    sub_1BC3008(&System_Action_TypeInfo, v5);
    byte_4AFC118 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_1BC3264(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc);
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
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4AFC116 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFC116 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BC3264(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v10);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *v12; // x24
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4AFC11A & 1) == 0 )
  {
    sub_1BC3008(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v8);
    sub_1BC3008(&StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, v9);
    sub_1BC3008(&StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, v10);
    sub_1BC3008(&StringLiteral_10299/*"PLAY_OPENING_CONFIRM_CANCEL"*/, v11);
    byte_4AFC11A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3648/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v14 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0LL);
    v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, 0LL);
    v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v16 )
      goto LABEL_34;
    items = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v16->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v12,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      v16->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v12;
      v17 = sub_1BC2FAC(v22 + 4);
    }
    v23 = v16->fields._items;
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !v23 )
      goto LABEL_34;
    v25 = v16->fields._size;
    if ( (unsigned int)v25 >= v23->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v13,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->obj.klass + v25;
      v16->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)v13;
      v17 = sub_1BC2FAC(v26 + 4);
    }
    v27 = v16->fields._items;
    v28 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !v27 )
      goto LABEL_34;
    v29 = v16->fields._size;
    if ( (unsigned int)v29 >= v27->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v14,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &v27->obj.klass + v29;
      v16->fields._size = v29 + 1;
      v30[4] = (Il2CppClass *)v14;
      v17 = sub_1BC2FAC(v30 + 4);
    }
    v31 = v16->fields._items;
    v32 = Method_System_Collections_Generic_List_string__Add__;
    ++v16->fields._version;
    if ( !v31 )
LABEL_34:
      sub_1BC3264(v17, v18);
    v33 = v16->fields._size;
    if ( (unsigned int)v33 >= v31->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        v15,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &v31->obj.klass + v33;
      v16->fields._size = v33 + 1;
      v34[4] = (Il2CppClass *)v15;
      sub_1BC2FAC(v34 + 4);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    {
      buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
    }
    v37 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v37 = (_QWORD *)sub_1BC3020();
    v38 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v37, v37[4]);
    OverwriteAssetSoundName__PlaySystemSe(v38, 1, 0, 0LL);
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
  UIProgressBar_o *checkSlider; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  _BOOL4 isDecideBtnSe; // w20
  System_Reflection_MethodBase_o *v8; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4AFC119 & 1) == 0 )
  {
    sub_1BC3008(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__, method);
    byte_4AFC119 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1BC3264(0LL, method);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      v6 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      isDecideBtnSe = this->fields.isDecideBtnSe;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BC3020();
      v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 8 * isDecideBtnSe, 0, 0LL);
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
      v4 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1BC3020();
      v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0LL);
    }
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnEnable(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4AFC11C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_4558/*"CommonConfirmDialog/Window/CancelButton"*/, method);
    byte_4AFC11C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_4558/*"CommonConfirmDialog/Window/CancelButton"*/, 0LL);
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
    sub_1BC3264(checkSlider, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *sliderSprite; // x0
  System_String_o **v9; // x8
  AccountLinkageUnlinkConfirmDialog_c *v10; // x0
  __int64 v11; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  AccountLinkageUnlinkConfirmDialog_c *v16; // x0
  __int64 v17; // x9
  UnityEngine_Color_o v18; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4AFC11B & 1) == 0 )
  {
    sub_1BC3008(&AccountLinkageUnlinkConfirmDialog_TypeInfo, sliderOn);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___, v5);
    sub_1BC3008(&StringLiteral_20380/*"img_slider_thumb_locked"*/, v6);
    sub_1BC3008(&StringLiteral_20379/*"img_slider_thumb"*/, v7);
    byte_4AFC11B = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_25;
  v9 = (System_String_o **)&StringLiteral_20379/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v9 = (System_String_o **)&StringLiteral_20380/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v9, 0LL);
  v10 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v10 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v10->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &color, 0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  v11 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
    sliderSprite,
    v11,
    1LL,
    sliderSprite->klass->vtable._15_OnInit.methodPtr);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
  v16 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v16 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  v17 = 16LL;
  if ( sliderOn )
    v17 = 8LL;
  UnityEngine_ColorUtility__TryParseHtmlString(
    *(System_String_o **)((char *)&v16->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE + v17),
    &v18,
    0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecideLabel;
  if ( !sliderSprite )
LABEL_25:
    sub_1BC3264(sliderSprite, sliderOn);
  UIWidget__set_color((UIWidget_o *)sliderSprite, v18, 0LL);
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  UnityEngine_Object_o *titleLabel; // x23
  unsigned __int64 v52; // x1
  unsigned __int64 baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v56; // x23
  System_String_o *v57; // x1
  UnityEngine_Object_o *messageLabel; // x23
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x21
  int32_t v61; // w20
  int32_t v62; // w3
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v64; // x20
  UILabel_o *v65; // x20
  float *p_a; // x10
  struct UnityEngine_Color_o *p_value; // x8
  float *p_b; // x11
  float *p_g; // x9
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v71; // x20
  UILabel_o *v72; // x20
  float *v73; // x10
  struct UnityEngine_Color_o *v74; // x8
  float *v75; // x11
  float *v76; // x9
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v80; // x2
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v82; // x21
  const MethodInfo *v83; // x2
  System_Action_o *v84; // x19
  const MethodInfo *v85; // x3
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = titleFontSize;
  if ( (byte_4AFC117 & 1) == 0 )
  {
    sub_1BC3008(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, title);
    sub_1BC3008(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__, v37);
    sub_1BC3008(&System_Action_TypeInfo, v38);
    sub_1BC3008(&BalanceConfig_TypeInfo, v39);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___, v40);
    sub_1BC3008(&LocalizationManager_TypeInfo, v41);
    sub_1BC3008(&Method_System_Nullable_float__GetValueOrDefault__, v42);
    sub_1BC3008(&Method_System_Nullable_Color__GetValueOrDefault__, v43);
    sub_1BC3008(&Method_System_Nullable_float__get_HasValue__, v44);
    sub_1BC3008(&Method_System_Nullable_Color__get_HasValue__, v45);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v46);
    sub_1BC3008(&UIProgressBar_OnDragFinished_TypeInfo, v47);
    sub_1BC3008(&StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, v48);
    sub_1BC3008(&StringLiteral_3656/*"COMMON_CONFIRM_YES"*/, v49);
    sub_1BC3008(&StringLiteral_1/*""*/, v50);
    byte_4AFC117 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BC2FAC(&this->fields.clickFunc);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_101;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 196.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    v56 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 512LL);
    }
    if ( !v56 )
      goto LABEL_101;
    UILabel__set_fontSize(v56, v29, 0LL);
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_101;
    if ( title )
      v57 = title;
    else
      v57 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v57, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(v59, messagePosY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0LL);
    v60 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 512LL);
    }
    if ( !v60 )
      goto LABEL_101;
    UILabel__set_fontSize(v60, fontsize, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_101;
      v61 = *(_DWORD *)(baseWindow + 168);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0LL);
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_101;
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_101;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v61, 0, 0LL);
    }
    else
    {
      if ( message )
        v52 = (unsigned __int64)message;
      else
        v52 = (unsigned __int64)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_101;
      v62 = minFontSize;
      if ( minFontSize < 1 )
        v62 = 0;
      WrapControlText__textAdjust(
        (UILabel_o *)baseWindow,
        (System_String_o *)v52,
        *(_DWORD *)(baseWindow + 424),
        v62,
        0LL);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v64 = this->fields.buttonDecideLabel;
    v52 = (unsigned __int64)decideTxt;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_YES"*/, 0LL);
      v52 = baseWindow;
    }
    if ( !v64 )
      goto LABEL_101;
    UILabel__set_text(v64, (System_String_o *)v52, 0LL);
    v65 = this->fields.buttonDecideLabel;
    v52 = (unsigned int)decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v52 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 512LL);
    }
    if ( !v65 )
      goto LABEL_101;
    UILabel__set_fontSize(v65, v52, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( decideColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_101;
      p_a = &decideColor->fields.value.fields.a;
      p_value = &decideColor->fields.value;
      p_b = &decideColor->fields.value.fields.b;
      p_g = &decideColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_101;
      p_value = (struct UnityEngine_Color_o *)(baseWindow + 148);
      p_g = (float *)(baseWindow + 152);
      p_b = (float *)(baseWindow + 156);
      p_a = (float *)(baseWindow + 160);
    }
    v90.fields.a = *p_a;
    v90.fields.b = *p_b;
    v90.fields.g = *p_g;
    v90.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v90, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v71 = this->fields.buttonCancelLabel;
    v52 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, 0LL);
      v52 = baseWindow;
    }
    if ( !v71 )
      goto LABEL_101;
    UILabel__set_text(v71, (System_String_o *)v52, 0LL);
    v72 = this->fields.buttonCancelLabel;
    v52 = (unsigned int)cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v52 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 512LL);
    }
    if ( !v72 )
      goto LABEL_101;
    UILabel__set_fontSize(v72, v52, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_101;
      v73 = &cancelColor->fields.value.fields.a;
      v74 = &cancelColor->fields.value;
      v75 = &cancelColor->fields.value.fields.b;
      v76 = &cancelColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_101;
      v74 = (struct UnityEngine_Color_o *)(baseWindow + 148);
      v76 = (float *)(baseWindow + 152);
      v75 = (float *)(baseWindow + 156);
      v73 = (float *)(baseWindow + 160);
    }
    v91.fields.a = *v73;
    v91.fields.b = *v75;
    v91.fields.g = *v76;
    v91.fields.r = v74->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v91, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, cancelMaxLine, 0LL);
  }
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0LL);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0LL, 0LL) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_101;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_101;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0LL);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v80);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0LL),
        checkSlider = this->fields.checkSlider,
        v82 = (UIProgressBar_OnDragFinished_o *)sub_1BC3254(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v82,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0LL),
        !checkSlider) )
  {
LABEL_101:
    sub_1BC3264(baseWindow, v52);
  }
  checkSlider->fields.onDragFinished = v82;
  sub_1BC2FAC(&checkSlider->fields.onDragFinished);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v83);
  v84 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, maskType, v85);
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
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04610;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A045C8;
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
  if ( (byte_4AFC11F & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    byte_4AFC11F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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