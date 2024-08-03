void __fastcall AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v6; // x0

  if ( (byte_49F7477 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageUnlinkConfirmDialog_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_452/*"#E60000"*/, v2);
    sub_1B640C8(&StringLiteral_445/*"#787878"*/, v3);
    sub_1B640C8(&StringLiteral_448/*"#B30000"*/, v4);
    byte_49F7477 = 1;
  }
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_445/*"#787878"*/;
  sub_1B6406C(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields);
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_452/*"#E60000"*/;
  sub_1B6406C(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE);
  v6 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v6->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_448/*"#B30000"*/;
  sub_1B6406C(&v6->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE);
}


void __fastcall AccountLinkageUnlinkConfirmDialog___ctor(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F7476 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7476 = 1;
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

  AccountLinkageUnlinkConfirmDialog__Close_30259420(this, 0LL, v2);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close_30259420(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49F7471 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    byte_49F7471 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.isButtonEnable = 0;
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, v9);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__EndClose(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AccountLinkageUnlinkConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B6406C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v9; // x1

  if ( (byte_49F746F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F746F = 1;
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
    sub_1B64324(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v9);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49F7473 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v8);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v9);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v10);
    sub_1B640C8(&StringLiteral_10341/*"PLAY_OPENING_CONFIRM_CANCEL"*/, v11);
    byte_49F7473 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v14 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10341/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0LL);
    v15 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
    v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v18 )
      goto LABEL_34;
    items = v18->fields._items;
    v21 = Method_System_Collections_Generic_List_string__Add__;
    ++v18->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        v12,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v12;
      v19 = sub_1B6406C(v23 + 4);
    }
    v24 = v18->fields._items;
    v25 = Method_System_Collections_Generic_List_string__Add__;
    ++v18->fields._version;
    if ( !v24 )
      goto LABEL_34;
    v26 = v18->fields._size;
    if ( (unsigned int)v26 >= v24->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        v13,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &v24->obj.klass + v26;
      v18->fields._size = v26 + 1;
      v27[4] = (Il2CppClass *)v13;
      v19 = sub_1B6406C(v27 + 4);
    }
    v28 = v18->fields._items;
    v29 = Method_System_Collections_Generic_List_string__Add__;
    ++v18->fields._version;
    if ( !v28 )
      goto LABEL_34;
    v30 = v18->fields._size;
    if ( (unsigned int)v30 >= v28->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        v14,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->obj.klass + v30;
      v18->fields._size = v30 + 1;
      v31[4] = (Il2CppClass *)v14;
      v19 = sub_1B6406C(v31 + 4);
    }
    v32 = v18->fields._items;
    v33 = Method_System_Collections_Generic_List_string__Add__;
    ++v18->fields._version;
    if ( !v32 )
LABEL_34:
      sub_1B64324(v19);
    v34 = v18->fields._size;
    if ( (unsigned int)v34 >= v32->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        v15,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &v32->obj.klass + v34;
      v18->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)v15;
      sub_1B6406C(v35 + 4);
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
    v38 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1B640E0();
    v39 = (System_Reflection_MethodBase_o *)sub_1B640AC(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
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
  __int64 v3; // x1
  UIProgressBar_o *checkSlider; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _BOOL4 isDecideBtnSe; // w20
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49F7472 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__, method);
    sub_1B640C8(&SoundManager_TypeInfo, v3);
    byte_49F7472 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1B64324(0LL);
    if ( UIProgressBar__get_value(checkSlider, 0LL) >= 1.0 )
    {
      isDecideBtnSe = this->fields.isDecideBtnSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
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
      v5 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B640E0();
      v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
    }
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnEnable(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49F7475 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4605/*"CommonConfirmDialog/Window/CancelButton"*/, method);
    byte_49F7475 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_4605/*"CommonConfirmDialog/Window/CancelButton"*/, 0LL);
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
    sub_1B64324(checkSlider);
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

  if ( (byte_49F7474 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageUnlinkConfirmDialog_TypeInfo, sliderOn);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___, v5);
    sub_1B640C8(&StringLiteral_20389/*"img_slider_thumb_locked"*/, v6);
    sub_1B640C8(&StringLiteral_20388/*"img_slider_thumb"*/, v7);
    byte_49F7474 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v18.fields.r = 0LL;
  *(_QWORD *)&v18.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_25;
  v9 = (System_String_o **)&StringLiteral_20388/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v9 = (System_String_o **)&StringLiteral_20389/*"img_slider_thumb_locked"*/;
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
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
    sub_1B64324(sliderSprite);
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
  void *baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v55; // x23
  System_String_o *v56; // x1
  UnityEngine_Object_o *messageLabel; // x23
  UnityEngine_GameObject_o *v58; // x0
  UILabel_o *v59; // x21
  int32_t v60; // w20
  System_String_o *v61; // x1
  int32_t v62; // w3
  int32_t v63; // w4
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v65; // x20
  System_String_o *v66; // x1
  UILabel_o *v67; // x20
  int32_t v68; // w1
  float *p_a; // x10
  struct UnityEngine_Color_o *p_value; // x8
  float *p_b; // x11
  float *p_g; // x9
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v74; // x20
  System_String_o *v75; // x1
  UILabel_o *v76; // x20
  int32_t v77; // w1
  float *v78; // x10
  struct UnityEngine_Color_o *v79; // x8
  float *v80; // x11
  float *v81; // x9
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v85; // x2
  struct UISlider_o *checkSlider; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  UIProgressBar_OnDragFinished_o *v89; // x21
  const MethodInfo *v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  System_Action_o *v93; // x19
  const MethodInfo *v94; // x3
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = titleFontSize;
  if ( (byte_49F7470 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, title);
    sub_1B640C8(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__, v37);
    sub_1B640C8(&System_Action_TypeInfo, v38);
    sub_1B640C8(&BalanceConfig_TypeInfo, v39);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___, v40);
    sub_1B640C8(&LocalizationManager_TypeInfo, v41);
    sub_1B640C8(&Method_System_Nullable_float__GetValueOrDefault__, v42);
    sub_1B640C8(&Method_System_Nullable_Color__GetValueOrDefault__, v43);
    sub_1B640C8(&Method_System_Nullable_float__get_HasValue__, v44);
    sub_1B640C8(&Method_System_Nullable_Color__get_HasValue__, v45);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v46);
    sub_1B640C8(&UIProgressBar_OnDragFinished_TypeInfo, v47);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v48);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v49);
    sub_1B640C8(&StringLiteral_1/*""*/, v50);
    byte_49F7470 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B6406C(&this->fields.clickFunc);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    baseWindow = this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_102;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 196.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0LL);
    v55 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 476LL);
    }
    if ( !v55 )
      goto LABEL_102;
    UILabel__set_fontSize(v55, v29, 0LL);
    baseWindow = this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_102;
    if ( title )
      v56 = title;
    else
      v56 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v56, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(v58, messagePosY, 0LL);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0LL);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0LL);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0LL);
    v59 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 476LL);
    }
    if ( !v59 )
      goto LABEL_102;
    UILabel__set_fontSize(v59, fontsize, 0LL);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0LL);
    baseWindow = this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v60 = *((_DWORD *)baseWindow + 42);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0LL);
      baseWindow = this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_102;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_102;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v60, 0LL);
    }
    else
    {
      if ( message )
        v61 = message;
      else
        v61 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_102;
      v62 = minFontSize;
      if ( minFontSize < 1 )
      {
        v62 = 0;
        v63 = 0;
      }
      else
      {
        v63 = 500;
      }
      WrapControlText__textAdjust((UILabel_o *)baseWindow, v61, *((_DWORD *)baseWindow + 106), v62, v63, 0LL);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    v65 = this->fields.buttonDecideLabel;
    v66 = decideTxt;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, 0LL);
      v66 = (System_String_o *)baseWindow;
    }
    if ( !v65 )
      goto LABEL_102;
    UILabel__set_text(v65, v66, 0LL);
    v67 = this->fields.buttonDecideLabel;
    v68 = decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v68 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 476LL);
    }
    if ( !v67 )
      goto LABEL_102;
    UILabel__set_fontSize(v67, v68, 0LL);
    baseWindow = this->fields.buttonDecideLabel;
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
      p_value = (struct UnityEngine_Color_o *)((char *)baseWindow + 148);
      p_g = (float *)((char *)baseWindow + 152);
      p_b = (float *)((char *)baseWindow + 156);
      p_a = (float *)((char *)baseWindow + 160);
    }
    v99.fields.a = *p_a;
    v99.fields.b = *p_b;
    v99.fields.g = *p_g;
    v99.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v99, 0LL);
    baseWindow = this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    v74 = this->fields.buttonCancelLabel;
    v75 = cancelTxt;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, 0LL);
      v75 = (System_String_o *)baseWindow;
    }
    if ( !v74 )
      goto LABEL_102;
    UILabel__set_text(v74, v75, 0LL);
    v76 = this->fields.buttonCancelLabel;
    v77 = cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v77 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 476LL);
    }
    if ( !v76 )
      goto LABEL_102;
    UILabel__set_fontSize(v76, v77, 0LL);
    baseWindow = this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v78 = &cancelColor->fields.value.fields.a;
      v79 = &cancelColor->fields.value;
      v80 = &cancelColor->fields.value.fields.b;
      v81 = &cancelColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_102;
      v79 = (struct UnityEngine_Color_o *)((char *)baseWindow + 148);
      v81 = (float *)((char *)baseWindow + 152);
      v80 = (float *)((char *)baseWindow + 156);
      v78 = (float *)((char *)baseWindow + 160);
    }
    v100.fields.a = *v78;
    v100.fields.b = *v80;
    v100.fields.g = *v81;
    v100.fields.r = v79->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v100, 0LL);
    baseWindow = this->fields.buttonCancelLabel;
    if ( !baseWindow )
      goto LABEL_102;
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
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_102;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_102;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0LL);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v85);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0LL);
  baseWindow = this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0LL),
        checkSlider = this->fields.checkSlider,
        v89 = (UIProgressBar_OnDragFinished_o *)sub_1B64314(UIProgressBar_OnDragFinished_TypeInfo, v87, v88),
        UIProgressBar_OnDragFinished___ctor(
          v89,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0LL),
        !checkSlider) )
  {
LABEL_102:
    sub_1B64324(baseWindow);
  }
  checkSlider->fields.onDragFinished = v89;
  sub_1B6406C(&checkSlider->fields.onDragFinished);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v90);
  v93 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v91, v92);
  System_Action___ctor(v93, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v93, maskType, v94);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A43D0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4388;
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
  if ( (byte_49F7478 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isDecide);
    byte_49F7478 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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