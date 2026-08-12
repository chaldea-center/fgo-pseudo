void AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  __int64 v4; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v5; // x0

  if ( (byte_5969E1B & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_447/*"#E60000"*/);
    sub_2213A60(&StringLiteral_439/*"#787878"*/);
    sub_2213A60(&StringLiteral_443/*"#B30000"*/);
    byte_5969E1B = 1;
  }
  v1 = StringLiteral_439/*"#787878"*/;
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_439/*"#787878"*/;
  sub_2213A04(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields, v1);
  v2 = StringLiteral_447/*"#E60000"*/;
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_447/*"#E60000"*/;
  sub_2213A04(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE, v2);
  v4 = StringLiteral_443/*"#B30000"*/;
  v5 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v5->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_443/*"#B30000"*/;
  sub_2213A04(&v5->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE, v4);
}


void AccountLinkageUnlinkConfirmDialog___ctor(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5969E1A & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E1A = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.DEFULT_MESSAGE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0xF0000002BCLL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void AccountLinkageUnlinkConfirmDialog__Close(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  AccountLinkageUnlinkConfirmDialog__Close_37284704(this, 0, v2);
}


void AccountLinkageUnlinkConfirmDialog__Close_37284704(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5969E15 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__);
    sub_2213A60(&System_Action_TypeInfo);
    byte_5969E15 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void AccountLinkageUnlinkConfirmDialog__EndClose(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  AccountLinkageUnlinkConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_2213A04(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void AccountLinkageUnlinkConfirmDialog__EndOpen(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void AccountLinkageUnlinkConfirmDialog__Init(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v13; // x1

  if ( (byte_5969E13 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E13 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_25;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
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
    sub_2213CDC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v13);
}


void AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x24
  Il2CppObject *v5; // x23
  Il2CppObject *v6; // x22
  Il2CppObject *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *buttonDecide; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5969E17 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_10824/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_5969E17 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10824/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
    v7 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v8 )
      goto LABEL_34;
    items = v8->fields._items;
    v12 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v4,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v14[4] = (Il2CppClass *)v4;
      v9 = sub_2213A04(v14 + 4, v4);
    }
    v15 = v8->fields._items;
    v16 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v15 )
      goto LABEL_34;
    v17 = v8->fields._size;
    if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v5,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &v15->obj.klass + v17;
      v8->fields._size = v17 + 1;
      v18[4] = (Il2CppClass *)v5;
      v9 = sub_2213A04(v18 + 4, v5);
    }
    v19 = v8->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v19 )
      goto LABEL_34;
    v21 = v8->fields._size;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v6,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v19->obj.klass + v21;
      v8->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v6;
      v9 = sub_2213A04(v22 + 4, v6);
    }
    v23 = v8->fields._items;
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v23 )
LABEL_34:
      sub_2213CDC(v9, v10);
    v25 = v8->fields._size;
    if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v7,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->obj.klass + v25;
      v8->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)v7;
      sub_2213A04(v26 + 4, v7);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( !UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    {
      buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
      UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
    }
    v33 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_2213A78();
    v34 = (System_Reflection_MethodBase_o *)sub_2213A44(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0, 0);
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
  int32_t v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5969E16 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__);
    byte_5969E16 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_2213CDC(0, method);
    if ( UIProgressBar__get_value(checkSlider, 0) >= 1.0 )
    {
      v6 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      v7 = 8 * this->fields.isDecideBtnSe;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_2213A78();
      v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0, 0);
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
        v4 = (_QWORD *)sub_2213A78();
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
    }
  }
}


void AccountLinkageUnlinkConfirmDialog__OnEnable(AccountLinkageUnlinkConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_5969E19 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4775/*"CommonConfirmDialog/Window/CancelButton"*/);
    byte_5969E19 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_4775/*"CommonConfirmDialog/Window/CancelButton"*/, 0);
}


void AccountLinkageUnlinkConfirmDialog__OnSliderDragFinished(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s1
  bool v6; // w20
  const MethodInfo *v7; // x2

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_6;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( value < 0.9 )
  {
    v5 = 0.0;
    if ( checkSlider )
      goto LABEL_4;
LABEL_6:
    sub_2213CDC(checkSlider, method);
  }
  v5 = 1.0;
  if ( !checkSlider )
    goto LABEL_6;
LABEL_4:
  v6 = value >= 0.9;
  UIProgressBar__set_value(checkSlider, v5, 0);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, v6, v7);
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
  float a; // w9
  __int128 v19; // q0
  float v20; // w9
  System_String_o *v21; // [xsp+80h] [xbp-60h]
  const MethodInfo *v22; // [xsp+88h] [xbp-58h]
  System_Nullable_Color__o v23; // [xsp+90h] [xbp-50h] BYREF
  System_Nullable_Color__o v24; // [xsp+B0h] [xbp-30h] BYREF

  a = decideColor->fields.value.fields.a;
  *(_OWORD *)&v24.fields.hasValue = *(_OWORD *)&decideColor->fields.hasValue;
  v19 = *(_OWORD *)&cancelColor->fields.hasValue;
  v24.fields.value.fields.a = a;
  v20 = cancelColor->fields.value.fields.a;
  *(_OWORD *)&v23.fields.hasValue = v19;
  v23.fields.value.fields.a = v20;
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
    &v24,
    &v23,
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
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void AccountLinkageUnlinkConfirmDialog__SetSlider(
        AccountLinkageUnlinkConfirmDialog_o *this,
        bool sliderOn,
        const MethodInfo *method)
{
  UISprite_o *sliderSprite; // x0
  __int64 *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  AccountLinkageUnlinkConfirmDialog_c *v9; // x0
  __int64 v10; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  AccountLinkageUnlinkConfirmDialog_c *v16; // x0
  int v17; // w8
  System_String_o **p_DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE; // x8
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5969E18 & 1) == 0 )
  {
    sub_2213A60(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_2213A60(&StringLiteral_21576/*"img_slider_thumb_locked"*/);
    sub_2213A60(&StringLiteral_21575/*"img_slider_thumb"*/);
    byte_5969E18 = 1;
  }
  sliderSprite = this->fields.sliderSprite;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v19.fields.r = 0;
  *(_QWORD *)&v19.fields.b = 0;
  if ( !sliderSprite )
    goto LABEL_28;
  v6 = &StringLiteral_21575/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = &StringLiteral_21576/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, (System_String_o *)*v6, 0);
  v9 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !*(&AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo, v7, v8);
    v9 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &color, 0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_28;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_28;
  v10 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, const MethodInfo *))sliderSprite->klass->vtable._14_OnEnable.methodPtr)(
    sliderSprite,
    v10,
    1,
    sliderSprite->klass->vtable._14_OnEnable.method);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_28;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  v21.fields.a = 1.0;
  v21.fields.b = 1.0;
  v21.fields.g = 1.0;
  v21.fields.r = 1.0;
  if ( !sliderOn )
    v21 = color;
  if ( !sliderSprite )
    goto LABEL_28;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)sliderSprite, v21, 0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_28;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_28;
  ((void (__fastcall *)(UISprite_o *, bool, const MethodInfo *))sliderSprite->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._5_get_isAnchoredVertically.method);
  v16 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  v17 = *(&AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( sliderOn )
  {
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo, v14, v15);
      v16 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
    }
    p_DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = &v16->static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE;
  }
  else
  {
    if ( !v17 )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo, v14, v15);
      v16 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
    }
    p_DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = &v16->static_fields->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(*p_DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE, &v19, 0);
  sliderSprite = (UISprite_o *)this->fields.buttonDecideLabel;
  if ( !sliderSprite )
LABEL_28:
    sub_2213CDC(sliderSprite, sliderOn);
  UIWidget__set_color((UIWidget_o *)sliderSprite, v19, 0);
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
  int32_t v32; // w22
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *titleLabel; // x23
  unsigned __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  __int64 v45; // x2
  UILabel_o *v46; // x23
  System_String_o *v47; // x1
  UnityEngine_Object_o *messageLabel; // x22
  __int64 v49; // x2
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x2
  UILabel_o *v52; // x21
  int32_t v53; // w19
  int32_t v54; // w3
  System_String_o *v55; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  UILabel_o *v59; // x19
  __int64 v60; // x2
  UILabel_o *v61; // x19
  float *p_a; // x11
  float *p_b; // x10
  float *p_g; // x9
  struct UnityEngine_Color_o *p_value; // x8
  UnityEngine_Object_o *buttonCancelLabel; // x19
  __int64 v67; // x1
  __int64 v68; // x2
  UILabel_o *v69; // x19
  __int64 v70; // x2
  UILabel_o *v71; // x19
  float *v72; // x11
  float *v73; // x10
  float *v74; // x9
  struct UnityEngine_Color_o *v75; // x8
  UnityEngine_Object_o *buttonDecide; // x19
  __int64 v77; // x1
  __int64 v78; // x2
  UnityEngine_Object_o *buttonCancel; // x19
  __int64 v80; // x1
  __int64 v81; // x2
  Il2CppObject *Component_object; // x19
  const MethodInfo *v83; // x2
  struct UISlider_o *checkSlider; // x19
  UIProgressBar_OnDragFinished_o *v85; // x21
  const MethodInfo *v86; // x2
  System_Action_o *v87; // x19
  const MethodInfo *v88; // x4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v32 = titleFontSize;
  if ( (byte_5969E14 & 1) == 0 )
  {
    sub_2213A60(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__);
    sub_2213A60(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E14 = 1;
  }
  this->fields.clickFunc = func;
  sub_2213A04(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_103;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 196.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    v46 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v45);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v32 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 508LL);
    }
    if ( !v46 )
      goto LABEL_103;
    UILabel__set_fontSize(v46, v32, 0);
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_103;
    if ( title )
      v47 = title;
    else
      v47 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v47, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_103;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPositionY(v50, messagePosY, 0);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UILabel__set_spacingY((UILabel_o *)baseWindow, spacingY, 0);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UIWidget__set_width((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_X, 0);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UIWidget__set_height((UIWidget_o *)baseWindow, messageWidgetSize.fields.m_Y, 0);
    v52 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40, v51);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 508LL);
    }
    if ( !v52 )
      goto LABEL_103;
    UILabel__set_fontSize(v52, fontsize, 0);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0);
    if ( setCondensedScale )
    {
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_103;
      v53 = *(_DWORD *)(baseWindow + 168);
      UILabel__set_text((UILabel_o *)baseWindow, message, 0);
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_103;
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)baseWindow + 840LL))(
        baseWindow,
        *(_QWORD *)(*(_QWORD *)baseWindow + 848LL));
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_103;
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v53, 0, 0);
    }
    else
    {
      v54 = minFontSize;
      baseWindow = (unsigned __int64)this->fields.messageLabel;
      if ( minFontSize < 1 )
      {
        if ( !baseWindow )
          goto LABEL_103;
        v54 = 0;
      }
      else if ( !baseWindow )
      {
        goto LABEL_103;
      }
      if ( message )
        v55 = message;
      else
        v55 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust((UILabel_o *)baseWindow, v55, *(_DWORD *)(baseWindow + 424), v54, 0);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v49);
  baseWindow = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
  if ( (baseWindow & 1) != 0 )
  {
    v59 = this->fields.buttonDecideLabel;
    v40 = (unsigned __int64)decideTxt;
    if ( !decideTxt )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0, v58);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0);
      v40 = baseWindow;
    }
    if ( !v59 )
      goto LABEL_103;
    UILabel__set_text(v59, (System_String_o *)v40, 0);
    v61 = this->fields.buttonDecideLabel;
    v40 = (unsigned int)decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)decideTxtSize, v60);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v40 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 508LL);
    }
    if ( !v61 )
      goto LABEL_103;
    UILabel__set_fontSize(v61, v40, 0);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( decideColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_103;
      p_a = &decideColor->fields.value.fields.a;
      p_b = &decideColor->fields.value.fields.b;
      p_g = &decideColor->fields.value.fields.g;
      p_value = &decideColor->fields.value;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_103;
      p_value = (struct UnityEngine_Color_o *)(baseWindow + 148);
      p_g = (float *)(baseWindow + 152);
      p_b = (float *)(baseWindow + 156);
      p_a = (float *)(baseWindow + 160);
    }
    v93.fields.a = *p_a;
    v93.fields.b = *p_b;
    v93.fields.g = *p_g;
    v93.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v93, 0);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
  baseWindow = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0);
  if ( (baseWindow & 1) != 0 )
  {
    v69 = this->fields.buttonCancelLabel;
    v40 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0, v68);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
      v40 = baseWindow;
    }
    if ( !v69 )
      goto LABEL_103;
    UILabel__set_text(v69, (System_String_o *)v40, 0);
    v71 = this->fields.buttonCancelLabel;
    v40 = (unsigned int)cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)cancelTxtSize, v70);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v40 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 508LL);
    }
    if ( !v71 )
      goto LABEL_103;
    UILabel__set_fontSize(v71, v40, 0);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_103;
      v72 = &cancelColor->fields.value.fields.a;
      v73 = &cancelColor->fields.value.fields.b;
      v74 = &cancelColor->fields.value.fields.g;
      v75 = &cancelColor->fields.value;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_103;
      v75 = (struct UnityEngine_Color_o *)(baseWindow + 148);
      v74 = (float *)(baseWindow + 152);
      v73 = (float *)(baseWindow + 156);
      v72 = (float *)(baseWindow + 160);
    }
    v94.fields.a = *v72;
    v94.fields.b = *v73;
    v94.fields.g = *v74;
    v94.fields.r = v75->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v94, 0);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( !baseWindow )
      goto LABEL_103;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, cancelMaxLine, 0);
  }
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67, v68);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v77, v78);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0);
  baseWindow = (unsigned __int64)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_103;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80, v81);
  baseWindow = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_103;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v83);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0);
  baseWindow = (unsigned __int64)this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0),
        checkSlider = this->fields.checkSlider,
        v85 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v85,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0),
        !checkSlider) )
  {
LABEL_103:
    sub_2213CDC(baseWindow, v40);
  }
  checkSlider->fields.onDragFinished = v85;
  sub_2213A04(&checkSlider->fields.onDragFinished, v85);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v86);
  v87 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v87, maskType, 0, v88);
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFE564;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFE51C;
}


System_IAsyncResult_o *AccountLinkageUnlinkConfirmDialog_ClickDelegate__BeginInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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