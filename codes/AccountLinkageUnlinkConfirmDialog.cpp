void AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v4; // x0

  if ( (byte_4C3CC8E & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_1C37058(&StringLiteral_421/*"#E60000"*/);
    sub_1C37058(&StringLiteral_414/*"#787878"*/);
    sub_1C37058(&StringLiteral_417/*"#B30000"*/);
    byte_4C3CC8E = 1;
  }
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_414/*"#787878"*/;
  sub_1C36FFC(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields, StringLiteral_414/*"#787878"*/);
  v1 = StringLiteral_421/*"#E60000"*/;
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_421/*"#E60000"*/;
  sub_1C36FFC(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE, v1);
  v3 = StringLiteral_417/*"#B30000"*/;
  v4 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v4->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_417/*"#B30000"*/;
  sub_1C36FFC(&v4->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE, v3);
}


void AccountLinkageUnlinkConfirmDialog___ctor(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3CC8D & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3CC8D = 1;
  }
  this->fields.DEFULT_MESSAGE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0xF0000002BCLL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageUnlinkConfirmDialog__Close(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageUnlinkConfirmDialog__Close_31118804(this, 0, v2);
}


void AccountLinkageUnlinkConfirmDialog__Close_31118804(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C3CC88 & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__);
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3CC88 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void AccountLinkageUnlinkConfirmDialog__EndClose(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AccountLinkageUnlinkConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void AccountLinkageUnlinkConfirmDialog__EndOpen(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void AccountLinkageUnlinkConfirmDialog__Init(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C3CC86 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CC86 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_25:
    sub_1C372B4(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v8);
}


void AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x23
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  struct System_Object_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x0
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CC8A & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_4C3CC8A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v7 )
      goto LABEL_34;
    items = v7->fields._items;
    v10 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v12[4] = (Il2CppClass *)v3;
      v8 = sub_1C36FFC(v12 + 4, v3);
    }
    v13 = v7->fields._items;
    v14 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v13 )
      goto LABEL_34;
    v15 = v7->fields._size;
    if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &v13->obj.klass + v15;
      v7->fields._size = v15 + 1;
      v16[4] = (Il2CppClass *)v4;
      v8 = sub_1C36FFC(v16 + 4, v4);
    }
    v17 = v7->fields._items;
    v18 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v17 )
      goto LABEL_34;
    v19 = v7->fields._size;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v5,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &v17->obj.klass + v19;
      v7->fields._size = v19 + 1;
      v20[4] = (Il2CppClass *)v5;
      v8 = sub_1C36FFC(v20 + 4, v5);
    }
    v21 = v7->fields._items;
    v22 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v21 )
LABEL_34:
      sub_1C372B4(v8);
    v23 = v7->fields._size;
    if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v6,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &v21->obj.klass + v23;
      v7->fields._size = v23 + 1;
      v24[4] = (Il2CppClass *)v6;
      sub_1C36FFC(v24 + 4, v6);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    {
      buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
    }
    v27 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1C37070();
    v28 = (System_Reflection_MethodBase_o *)sub_1C3703C(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void AccountLinkageUnlinkConfirmDialog__OnClickDecide(
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

  if ( (byte_4C3CC89 & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__);
    byte_4C3CC89 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1C372B4(0);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      v6 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      isDecideBtnSe = this->fields.isDecideBtnSe;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C37070();
      v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 8 * isDecideBtnSe, 0, 0);
      clickFunc = this->fields.clickFunc;
      this->fields.isButtonEnable = 0;
      if ( clickFunc )
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
          clickFunc->fields.method_code,
          1,
          clickFunc->fields.method);
    }
    else
    {
      v4 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C37070();
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    }
  }
}


void AccountLinkageUnlinkConfirmDialog__OnEnable(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3CC8C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4598/*"CommonConfirmDialog/Window/CancelButton"*/);
    byte_4C3CC8C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_4598/*"CommonConfirmDialog/Window/CancelButton"*/, 0);
}


void AccountLinkageUnlinkConfirmDialog__OnSliderDragFinished(
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
    || (value = UIProgressBar__get_value(checkSlider, 0),
        (checkSlider = (UIProgressBar_o *)this->fields.checkSlider) == 0) )
  {
    sub_1C372B4(checkSlider);
  }
  v5 = value < 0.9;
  if ( value >= 0.9 )
    v6 = 1.0;
  else
    v6 = 0.0;
  v7 = !v5;
  UIProgressBar__set_value(checkSlider, v6, 0);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, v7, v8);
}


void AccountLinkageUnlinkConfirmDialog__OpenLinkageDlg(
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
    0,
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
void AccountLinkageUnlinkConfirmDialog__SetSlider(
        AccountLinkageUnlinkConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  AccountLinkageUnlinkConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  AccountLinkageUnlinkConfirmDialog_c *v13; // x0
  __int64 v14; // x9
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4C3CC8B & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_1C37058(&StringLiteral_20582/*"img_slider_thumb_locked"*/);
    sub_1C37058(&StringLiteral_20581/*"img_slider_thumb"*/);
    byte_4C3CC8B = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v15.fields.r = 0;
  *(_QWORD *)&v15.fields.b = 0;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_25;
  v6 = (System_String_o **)&StringLiteral_20581/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20582/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0);
  v7 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v7 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v7->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &color, 0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  v8 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
    sliderSprite,
    v8,
    1,
    sliderSprite->klass->vtable._14_OnEnable.method);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
  UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, *(UnityEngine_Color_o *)&r, 0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
  v13 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v13 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  v14 = 16;
  if ( sliderOn )
    v14 = 8;
  UnityEngine_ColorUtility__TryParseHtmlString(
    *(System_String_o **)((char *)&v13->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE + v14),
    &v15,
    0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecideLabel;
  if ( !sliderSprite )
LABEL_25:
    sub_1C372B4(sliderSprite);
  UIWidget__set_color((UIWidget_o *)sliderSprite, v15, 0);
}


void AccountLinkageUnlinkConfirmDialog__Setup(
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
  UnityEngine_Object_o *titleLabel; // x23
  void *baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v41; // x23
  System_String_o *v42; // x1
  UnityEngine_Object_o *messageLabel; // x23
  UnityEngine_GameObject_o *v44; // x0
  UILabel_o *v45; // x21
  int32_t v46; // w20
  System_String_o *v47; // x1
  int32_t v48; // w3
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v50; // x20
  System_String_o *v51; // x1
  UILabel_o *v52; // x20
  int32_t v53; // w1
  float *p_a; // x10
  struct UnityEngine_Color_o *p_value; // x8
  float *p_b; // x11
  float *p_g; // x9
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v59; // x20
  System_String_o *v60; // x1
  UILabel_o *v61; // x20
  int32_t v62; // w1
  float *v63; // x10
  struct UnityEngine_Color_o *v64; // x8
  float *v65; // x11
  float *v66; // x9
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v70; // x2
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v72; // x21
  const MethodInfo *v73; // x2
  System_Action_o *v74; // x19
  const MethodInfo *v75; // x4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = titleFontSize;
  if ( (byte_4C3CC87 & 1) == 0 )
  {
    sub_1C37058(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__);
    sub_1C37058(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CC87 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C36FFC(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    baseWindow = this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_101;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 196.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    v41 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 512LL);
    }
    if ( !v41 )
      goto LABEL_101;
    UILabel__set_fontSize(v41, v29, 0);
    baseWindow = this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_101;
    if ( title )
      v42 = title;
    else
      v42 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v42, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPositionY(v44, messagePosY, 0);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0);
    v45 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 512LL);
    }
    if ( !v45 )
      goto LABEL_101;
    UILabel__set_fontSize(v45, fontsize, 0);
    baseWindow = this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0);
    baseWindow = this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_101;
      v46 = *((_DWORD *)baseWindow + 42);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0);
      baseWindow = this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_101;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_101;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v46, 0, 0);
    }
    else
    {
      if ( message )
        v47 = message;
      else
        v47 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_101;
      v48 = minFontSize;
      if ( minFontSize < 1 )
        v48 = 0;
      WrapControlText__textAdjust((UILabel_o *)baseWindow, v47, *((_DWORD *)baseWindow + 106), v48, 0);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    v50 = this->fields.buttonDecideLabel;
    v51 = decideTxt;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
      v51 = (System_String_o *)baseWindow;
    }
    if ( !v50 )
      goto LABEL_101;
    UILabel__set_text(v50, v51, 0);
    v52 = this->fields.buttonDecideLabel;
    v53 = decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v53 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 512LL);
    }
    if ( !v52 )
      goto LABEL_101;
    UILabel__set_fontSize(v52, v53, 0);
    baseWindow = this->fields.buttonDecideLabel;
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
      p_value = (struct UnityEngine_Color_o *)((char *)baseWindow + 148);
      p_g = (float *)((char *)baseWindow + 152);
      p_b = (float *)((char *)baseWindow + 156);
      p_a = (float *)((char *)baseWindow + 160);
    }
    v80.fields.a = *p_a;
    v80.fields.b = *p_b;
    v80.fields.g = *p_g;
    v80.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v80, 0);
    baseWindow = this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    v59 = this->fields.buttonCancelLabel;
    v60 = cancelTxt;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
      v60 = (System_String_o *)baseWindow;
    }
    if ( !v59 )
      goto LABEL_101;
    UILabel__set_text(v59, v60, 0);
    v61 = this->fields.buttonCancelLabel;
    v62 = cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = BalanceConfig_TypeInfo;
      }
      v62 = *(_DWORD *)(*((_QWORD *)baseWindow + 23) + 512LL);
    }
    if ( !v61 )
      goto LABEL_101;
    UILabel__set_fontSize(v61, v62, 0);
    baseWindow = this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_101;
      v63 = &cancelColor->fields.value.fields.a;
      v64 = &cancelColor->fields.value;
      v65 = &cancelColor->fields.value.fields.b;
      v66 = &cancelColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_101;
      v64 = (struct UnityEngine_Color_o *)((char *)baseWindow + 148);
      v66 = (float *)((char *)baseWindow + 152);
      v65 = (float *)((char *)baseWindow + 156);
      v63 = (float *)((char *)baseWindow + 160);
    }
    v81.fields.a = *v63;
    v81.fields.b = *v65;
    v81.fields.g = *v66;
    v81.fields.r = v64->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v81, 0);
    baseWindow = this->fields.buttonCancelLabel;
    if ( !baseWindow )
      goto LABEL_101;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, cancelMaxLine, 0);
  }
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_101;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_101;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v70);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0);
  baseWindow = this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0),
        checkSlider = this->fields.checkSlider,
        v72 = (UIProgressBar_OnDragFinished_o *)sub_1C372A4(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v72,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0),
        !checkSlider) )
  {
LABEL_101:
    sub_1C372B4(baseWindow);
  }
  checkSlider->fields.onDragFinished = v72;
  sub_1C36FFC(&checkSlider->fields.onDragFinished, v72);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v73);
  v74 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v74, maskType, 0, v75);
}


void AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
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
  sub_1C36FFC(&this->fields.m_target, object);
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
  this->fields.invoke_impl = (intptr_t)sub_1A72310;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A722C8;
}


System_IAsyncResult_o *AccountLinkageUnlinkConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C3CC8F & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C3CC8F = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void AccountLinkageUnlinkConfirmDialog_ClickDelegate__Invoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}