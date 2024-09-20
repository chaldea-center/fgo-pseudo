void __fastcall AccountLinkageUnlinkConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct AccountLinkageUnlinkConfirmDialog_StaticFields *v4; // x0

  if ( (byte_4A56047 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_451/*"#E60000"*/);
    sub_1B885B0(&StringLiteral_444/*"#787878"*/);
    sub_1B885B0(&StringLiteral_447/*"#B30000"*/);
    byte_4A56047 = 1;
  }
  AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_444/*"#787878"*/;
  sub_1B88554(AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields, StringLiteral_444/*"#787878"*/);
  v1 = StringLiteral_451/*"#E60000"*/;
  static_fields = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE = (struct System_String_o *)StringLiteral_451/*"#E60000"*/;
  sub_1B88554(&static_fields->DECIDE_BUTTON_LABEL_OPEN_COLOR_CODE, v1);
  v3 = StringLiteral_447/*"#B30000"*/;
  v4 = AccountLinkageUnlinkConfirmDialog_TypeInfo->static_fields;
  v4->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE = (struct System_String_o *)StringLiteral_447/*"#B30000"*/;
  sub_1B88554(&v4->DECIDE_BUTTON_LABEL_LOCK_COLOR_CODE, v3);
}


void __fastcall AccountLinkageUnlinkConfirmDialog___ctor(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56046 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A56046 = 1;
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

  AccountLinkageUnlinkConfirmDialog__Close_30408124(this, 0LL, v2);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__Close_30408124(
        AccountLinkageUnlinkConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A56041 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageUnlinkConfirmDialog_EndClose__);
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56041 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0LL);
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
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A5603F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5603F = 1;
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
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, v9);
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnClickCancel(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x23
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A56043 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_4A56043 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0LL);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
    v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v7 )
      goto LABEL_34;
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_34;
    size = v7->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v3;
      v8 = sub_1B88554(v13 + 4, v3);
    }
    v14 = v7->fields._items;
    v15 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v14 )
      goto LABEL_34;
    v16 = v7->fields._size;
    if ( (unsigned int)v16 >= v14->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v14->obj.klass + v16;
      v7->fields._size = v16 + 1;
      v17[4] = (Il2CppClass *)v4;
      v8 = sub_1B88554(v17 + 4, v4);
    }
    v18 = v7->fields._items;
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v18 )
      goto LABEL_34;
    v20 = v7->fields._size;
    if ( (unsigned int)v20 >= v18->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v5,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v18->obj.klass + v20;
      v7->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v5;
      v8 = sub_1B88554(v21 + 4, v5);
    }
    v22 = v7->fields._items;
    v23 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v22 )
LABEL_34:
      sub_1B8880C(v8, v9);
    v24 = v7->fields._size;
    if ( (unsigned int)v24 >= v22->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v6,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &v22->obj.klass + v24;
      v7->fields._size = v24 + 1;
      v25[4] = (Il2CppClass *)v6;
      sub_1B88554(v25 + 4, v6);
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
    v28 = Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B885C8();
    v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0LL);
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
  _BOOL4 isDecideBtnSe; // w20
  struct AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A56042 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56042 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
    if ( !checkSlider )
      sub_1B8880C(0LL, method);
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
      v4 = Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_AccountLinkageUnlinkConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1B885C8();
      v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
    }
  }
}


void __fastcall AccountLinkageUnlinkConfirmDialog__OnEnable(
        AccountLinkageUnlinkConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A56045 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4628/*"CommonConfirmDialog/Window/CancelButton"*/);
    byte_4A56045 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_4628/*"CommonConfirmDialog/Window/CancelButton"*/, 0LL);
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
    sub_1B8880C(checkSlider, method);
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
  UISprite_o *sliderSprite; // x0
  System_String_o **v6; // x8
  AccountLinkageUnlinkConfirmDialog_c *v7; // x0
  __int64 v8; // x1
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  AccountLinkageUnlinkConfirmDialog_c *v13; // x0
  __int64 v14; // x9
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4A56044 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageUnlinkConfirmDialog_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_1B885B0(&StringLiteral_20470/*"img_slider_thumb_locked"*/);
    sub_1B885B0(&StringLiteral_20469/*"img_slider_thumb"*/);
    byte_4A56044 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v15.fields.r = 0LL;
  *(_QWORD *)&v15.fields.b = 0LL;
  sliderSprite = this->fields.sliderSprite;
  if ( !sliderSprite )
    goto LABEL_25;
  v6 = (System_String_o **)&StringLiteral_20469/*"img_slider_thumb"*/;
  if ( !sliderOn )
    v6 = (System_String_o **)&StringLiteral_20470/*"img_slider_thumb_locked"*/;
  UISprite__set_spriteName(sliderSprite, *v6, 0LL);
  v7 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v7 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(v7->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE, &color, 0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  v8 = sliderOn ? 0LL : 3LL;
  ((void (__fastcall *)(UISprite_o *, __int64, __int64, Il2CppMethodPointer))sliderSprite->klass->vtable._14_OnEnable.method)(
    sliderSprite,
    v8,
    1LL,
    sliderSprite->klass->vtable._15_OnInit.methodPtr);
  sliderSprite = (UISprite_o *)this->fields.buttonDecide;
  if ( !sliderSprite )
    goto LABEL_25;
  sliderSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)sliderSprite,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
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
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
  if ( !sliderSprite )
    goto LABEL_25;
  ((void (__fastcall *)(UISprite_o *, bool, Il2CppMethodPointer))sliderSprite->klass->vtable._5_get_isAnchoredVertically.method)(
    sliderSprite,
    sliderOn,
    sliderSprite->klass->vtable._6_get_canBeAnchored.methodPtr);
  v13 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  if ( !AccountLinkageUnlinkConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageUnlinkConfirmDialog_TypeInfo);
    v13 = AccountLinkageUnlinkConfirmDialog_TypeInfo;
  }
  v14 = 16LL;
  if ( sliderOn )
    v14 = 8LL;
  UnityEngine_ColorUtility__TryParseHtmlString(
    *(System_String_o **)((char *)&v13->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE + v14),
    &v15,
    0LL);
  sliderSprite = (UISprite_o *)this->fields.buttonDecideLabel;
  if ( !sliderSprite )
LABEL_25:
    sub_1B8880C(sliderSprite, sliderOn);
  UIWidget__set_color((UIWidget_o *)sliderSprite, v15, 0LL);
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
  UnityEngine_Object_o *titleLabel; // x23
  unsigned __int64 v38; // x1
  unsigned __int64 baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v42; // x23
  System_String_o *v43; // x1
  UnityEngine_Object_o *messageLabel; // x23
  UnityEngine_GameObject_o *v45; // x0
  UILabel_o *v46; // x21
  int32_t v47; // w20
  int32_t v48; // w3
  int32_t v49; // w4
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v51; // x20
  UILabel_o *v52; // x20
  float *p_a; // x10
  struct UnityEngine_Color_o *p_value; // x8
  float *p_b; // x11
  float *p_g; // x9
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v58; // x20
  UILabel_o *v59; // x20
  float *v60; // x10
  struct UnityEngine_Color_o *v61; // x8
  float *v62; // x11
  float *v63; // x9
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v67; // x2
  struct UISlider_o *checkSlider; // x20
  UIProgressBar_OnDragFinished_o *v69; // x21
  const MethodInfo *v70; // x2
  System_Action_o *v71; // x19
  const MethodInfo *v72; // x3
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = titleFontSize;
  if ( (byte_4A56040 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageUnlinkConfirmDialog_EndOpen__);
    sub_1B885B0(&Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Color__get_HasValue__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56040 = 1;
  }
  this->fields.clickFunc = func;
  sub_1B88554(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v42 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v29 = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 476LL);
    }
    if ( !v42 )
      goto LABEL_102;
    UILabel__set_fontSize(v42, v29, 0LL);
    baseWindow = (unsigned __int64)this->fields.titleLabel;
    if ( !baseWindow )
      goto LABEL_102;
    if ( title )
      v43 = title;
    else
      v43 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)baseWindow, v43, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPositionY(v45, messagePosY, 0LL);
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
    v46 = this->fields.messageLabel;
    if ( !fontsize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      fontsize = *(_DWORD *)(*(_QWORD *)(baseWindow + 184) + 476LL);
    }
    if ( !v46 )
      goto LABEL_102;
    UILabel__set_fontSize(v46, fontsize, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_alignment((UILabel_o *)baseWindow, alignment, 0LL);
    baseWindow = (unsigned __int64)this->fields.messageLabel;
    if ( setCondensedScale )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v47 = *(_DWORD *)(baseWindow + 168);
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
      UILabel__SetCondensedScale((UILabel_o *)baseWindow, v47, 0LL);
    }
    else
    {
      if ( message )
        v38 = (unsigned __int64)message;
      else
        v38 = (unsigned __int64)StringLiteral_1/*""*/;
      if ( !baseWindow )
        goto LABEL_102;
      v48 = minFontSize;
      if ( minFontSize < 1 )
      {
        v48 = 0;
        v49 = 0;
      }
      else
      {
        v49 = 500;
      }
      WrapControlText__textAdjust(
        (UILabel_o *)baseWindow,
        (System_String_o *)v38,
        *(_DWORD *)(baseWindow + 424),
        v48,
        v49,
        0LL);
    }
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v51 = this->fields.buttonDecideLabel;
    v38 = (unsigned __int64)decideTxt;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
      v38 = baseWindow;
    }
    if ( !v51 )
      goto LABEL_102;
    UILabel__set_text(v51, (System_String_o *)v38, 0LL);
    v52 = this->fields.buttonDecideLabel;
    v38 = (unsigned int)decideTxtSize;
    if ( !decideTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v38 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 476LL);
    }
    if ( !v52 )
      goto LABEL_102;
    UILabel__set_fontSize(v52, v38, 0LL);
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
    v77.fields.a = *p_a;
    v77.fields.b = *p_b;
    v77.fields.g = *p_g;
    v77.fields.r = p_value->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v77, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonDecideLabel;
    if ( !baseWindow )
      goto LABEL_102;
    UILabel__set_maxLineCount((UILabel_o *)baseWindow, decideMaxLine, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    v58 = this->fields.buttonCancelLabel;
    v38 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      baseWindow = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
      v38 = baseWindow;
    }
    if ( !v58 )
      goto LABEL_102;
    UILabel__set_text(v58, (System_String_o *)v38, 0LL);
    v59 = this->fields.buttonCancelLabel;
    v38 = (unsigned int)cancelTxtSize;
    if ( !cancelTxtSize )
    {
      baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseWindow = (unsigned __int64)BalanceConfig_TypeInfo;
      }
      v38 = *(unsigned int *)(*(_QWORD *)(baseWindow + 184) + 476LL);
    }
    if ( !v59 )
      goto LABEL_102;
    UILabel__set_fontSize(v59, v38, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
    if ( cancelColor->fields.hasValue )
    {
      if ( !baseWindow )
        goto LABEL_102;
      v60 = &cancelColor->fields.value.fields.a;
      v61 = &cancelColor->fields.value;
      v62 = &cancelColor->fields.value.fields.b;
      v63 = &cancelColor->fields.value.fields.g;
    }
    else
    {
      if ( !baseWindow )
        goto LABEL_102;
      v61 = (struct UnityEngine_Color_o *)(baseWindow + 148);
      v63 = (float *)(baseWindow + 152);
      v62 = (float *)(baseWindow + 156);
      v60 = (float *)(baseWindow + 160);
    }
    v78.fields.a = *v60;
    v78.fields.b = *v62;
    v78.fields.g = *v63;
    v78.fields.r = v61->fields.r;
    UIWidget__set_color((UIWidget_o *)baseWindow, v78, 0LL);
    baseWindow = (unsigned __int64)this->fields.buttonCancelLabel;
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
  baseWindow = (unsigned __int64)this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_102;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)baseWindow,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_102;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0LL);
  }
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v67);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0LL);
  baseWindow = (unsigned __int64)this->fields.checkSlider;
  if ( !baseWindow
    || (UIProgressBar__set_value((UIProgressBar_o *)baseWindow, 0.0, 0LL),
        checkSlider = this->fields.checkSlider,
        v69 = (UIProgressBar_OnDragFinished_o *)sub_1B887FC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(
          v69,
          (Il2CppObject *)this,
          Method_AccountLinkageUnlinkConfirmDialog_OnSliderDragFinished__,
          0LL),
        !checkSlider) )
  {
LABEL_102:
    sub_1B8880C(baseWindow, v38);
  }
  checkSlider->fields.onDragFinished = v69;
  sub_1B88554(&checkSlider->fields.onDragFinished, v69);
  AccountLinkageUnlinkConfirmDialog__SetSlider(this, 0, v70);
  v71 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v71, (Il2CppObject *)this, Method_AccountLinkageUnlinkConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v71, maskType, v72);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C6B60;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C6B18;
}


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
  if ( (byte_4A56048 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56048 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall AccountLinkageUnlinkConfirmDialog_ClickDelegate__EndInvoke(
        AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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