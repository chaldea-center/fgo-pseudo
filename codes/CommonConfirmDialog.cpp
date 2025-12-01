void CommonConfirmDialog___ctor(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1127 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1127 = 1;
  }
  this->fields.DEFULT_TITLE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0x32000002BCLL;
  *(_OWORD *)&this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X = xmmword_CEF2C0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void CommonConfirmDialog__AdjustMessageLabel(
        CommonConfirmDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        int32_t fontsize,
        int32_t alignment,
        bool setCondensedScale,
        int32_t minFontSize,
        float buttonPosY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noTitleMessageLabel; // x22
  __int64 v23; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x22
  int monitor_high; // w27
  float v27; // s8
  float v28; // s0
  unsigned __int64 v29; // x27
  UnityEngine_Object_o *v30; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  BalanceConfig_c *v32; // x0
  System_String_o *Empty; // x1
  int32_t mWidth; // w19
  int32_t v35; // w3
  Il2CppObject *v36; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CC111C & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1C713B0(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    byte_4CC111C = 1;
  }
  v36 = 0;
  component = 0;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_38;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_31A4160 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_23;
      baseWindow = this->fields.buttonDecide;
      if ( !baseWindow )
        goto LABEL_38;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                 baseWindow,
                                                 &v36,
                                                 (const MethodInfo_31A4160 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) == 0 )
      {
LABEL_23:
        LODWORD(v29) = this->fields.DEFAULT_NO_TITLE_MESSAGE_WIDGET_SIZE.fields.m_Y;
        messagePosY = 38.0;
        goto LABEL_24;
      }
      if ( component && v36 )
      {
        monitor_high = HIDWORD(component[10].monitor);
        v27 = (float)((float)SHIDWORD(v36[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v28 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v27);
        messagePosY = v27 + (float)(v28 * 0.5);
        if ( v28 == INFINITY )
          LODWORD(v29) = 0x80000000;
        else
          LODWORD(v29) = (int)v28;
LABEL_24:
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !baseWindow )
          goto LABEL_38;
        goto LABEL_25;
      }
LABEL_38:
      sub_1C71608(baseWindow, v23);
    }
  }
  messageLabel = this->fields.messageLabel;
  v30 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  v29 = HIDWORD(*(unsigned __int64 *)&messageWidgetSize);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
LABEL_25:
      UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0);
      goto LABEL_26;
    }
    goto LABEL_38;
  }
LABEL_26:
  if ( !messageLabel )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, messagePosY, 0);
  UIWidget__set_width((UIWidget_o *)messageLabel, messageWidgetSize.fields.m_X, 0);
  UIWidget__set_height((UIWidget_o *)messageLabel, v29, 0);
  UILabel__set_spacingY(messageLabel, spacingY, 0);
  if ( !fontsize )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    fontsize = v32->static_fields->DefaultFontSize;
  }
  UILabel__set_fontSize(messageLabel, fontsize, 0);
  UILabel__set_alignment(messageLabel, alignment, 0);
  if ( message )
  {
    Empty = System_String__Trim_64087900(message, 0xAu, 0);
    if ( setCondensedScale )
    {
LABEL_33:
      mWidth = messageLabel->fields.mWidth;
      UILabel__set_text(messageLabel, Empty, 0);
      ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))messageLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
        messageLabel,
        messageLabel->klass->vtable._33_MakePixelPerfect.method);
      UILabel__SetCondensedScale(messageLabel, mWidth, 0, 0);
      return;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( setCondensedScale )
      goto LABEL_33;
  }
  v35 = minFontSize;
  if ( minFontSize < 1 )
    v35 = 0;
  WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, v35, 0);
}


void CommonConfirmDialog__Close(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommonConfirmDialog__Close_31416540(this, 0, v2);
}


void CommonConfirmDialog__Close_31416540(
        CommonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CC111F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CommonConfirmDialog_EndClose__);
    byte_4CC111F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CommonConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void CommonConfirmDialog__EndClose(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CommonConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C71354(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void CommonConfirmDialog__EndOpen(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void CommonConfirmDialog__Init(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UnityEngine_Object_o *addMsgInfo; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4CC111A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC111A = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
  {
    gameObject = this->fields.noTitleMessageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_35:
    sub_1C71608(gameObject, v4);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v11);
}


void CommonConfirmDialog__OnClickCancel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x23
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
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
  UnityEngine_Object_o *buttonDecide; // x21
  UnityEngine_Object_o *buttonDecideLabel; // x21
  System_Func_object__bool__o *v28; // x21
  int32_t v29; // w20
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC1122 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_string___);
    sub_1C713B0(&Method_CommonConfirmDialog_OnClickCancel__);
    sub_1C713B0(&Method_CommonConfirmDialog__OnClickCancel_b__55_0__);
    sub_1C713B0(&System_Func_string__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C713B0(&StringLiteral_3683/*"COMMON_CONFIRM_NO"*/);
    sub_1C713B0(&StringLiteral_10395/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_4CC1122 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3680/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10395/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3683/*"COMMON_CONFIRM_NO"*/, 0);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v7 )
      goto LABEL_36;
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_36;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v13 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v13[4] = (Il2CppClass *)v3;
      v8 = sub_1C71354(v13 + 4, v3);
    }
    v14 = v7->fields._items;
    v15 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v14 )
      goto LABEL_36;
    v16 = v7->fields._size;
    if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v14->obj.klass + v16;
      v7->fields._size = v16 + 1;
      v17[4] = (Il2CppClass *)v4;
      v8 = sub_1C71354(v17 + 4, v4);
    }
    v18 = v7->fields._items;
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v18 )
      goto LABEL_36;
    v20 = v7->fields._size;
    if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v5,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v18->obj.klass + v20;
      v7->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)v5;
      v8 = sub_1C71354(v21 + 4, v5);
    }
    v22 = v7->fields._items;
    v23 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v22 )
LABEL_36:
      sub_1C71608(v8, v9);
    v24 = v7->fields._size;
    if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v6,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &v22->obj.klass + v24;
      v7->fields._size = v24 + 1;
      v25[4] = (Il2CppClass *)v6;
      sub_1C71354(v25 + 4, v6);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
      goto LABEL_29;
    buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
    {
LABEL_29:
      v28 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v28,
        (Il2CppObject *)this,
        Method_CommonConfirmDialog__OnClickCancel_b__55_0__,
        0);
      v29 = BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v7,
              (System_Func_T__bool__o *)v28,
              (const MethodInfo_31341D4 *)Method_BasicHelper_Any_string___);
    }
    else
    {
      v29 = 0;
    }
    v30 = Method_CommonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1C713C8(Method_CommonConfirmDialog_OnClickCancel__);
    v31 = (System_Reflection_MethodBase_o *)sub_1C71394(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, v29, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickClose(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC1123 & 1) == 0 )
  {
    sub_1C713B0(&Method_CommonConfirmDialog_OnClickClose__);
    byte_4CC1123 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CommonConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickDecide(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC1120 & 1) == 0 )
  {
    sub_1C713B0(&Method_CommonConfirmDialog_OnClickDecide__);
    byte_4CC1120 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_CommonConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_CommonConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickDecide2(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CC1121 & 1) == 0 )
  {
    sub_1C713B0(&Method_CommonConfirmDialog_OnClickDecide2__);
    byte_4CC1121 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CommonConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnEnable(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  void *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4CC1126 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2676/*"BATTLERESUME_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_2677/*"BATTLERESUME_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_4641/*"ConfirmWindow/CancelButton"*/);
    this = (CommonConfirmDialog_o *)sub_1C713B0(&StringLiteral_15645/*"Window/CancelButton"*/);
    byte_4CC1126 = 1;
  }
  monitor = v2[5].monitor;
  if ( !monitor )
    goto LABEL_13;
  v4 = (System_String_o *)*((_QWORD *)monitor + 52);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2677/*"BATTLERESUME_CONFIRM_DECIDE"*/, 0);
  this = (CommonConfirmDialog_o *)System_String__op_Equality(v4, v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v6 = v2[5].monitor;
    if ( v6 )
    {
      v7 = (System_String_o *)*((_QWORD *)v6 + 52);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2676/*"BATTLERESUME_CONFIRM_CANCEL"*/, 0);
      if ( !System_String__op_Equality(v7, v8, 0) )
      {
        transform = UnityEngine_Component__get_transform(v2, 0);
        AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15645/*"Window/CancelButton"*/, 0);
        v10 = UnityEngine_Component__get_transform(v2, 0);
        AndroidBackKeyManager__AddBackBtn_45260884(v10, (System_String_o *)StringLiteral_4641/*"ConfirmWindow/CancelButton"*/, 0);
      }
      return;
    }
LABEL_13:
    sub_1C71608(this, method);
  }
}


void CommonConfirmDialog__Open(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    0,
    0,
    0,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v8);
}


void CommonConfirmDialog__OpenDecideDlg(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        const MethodInfo *method)
{
  const MethodInfo *v14; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v14);
}


void CommonConfirmDialog__OpenDecideDlgAddMsgFrame(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *addMsg,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        int32_t alignment,
        const MethodInfo *method)
{
  const MethodInfo *v16; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    alignment,
    480,
    -162.5,
    0,
    0,
    addMsg,
    0,
    v16);
}


void CommonConfirmDialog__OpenDecideDlg_31415484(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v13; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
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
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v13);
}


void CommonConfirmDialog__OpenDecideDlg_31415616(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        int32_t alignment,
        bool isDecideSe,
        bool isCancelTxtTwoLine,
        int32_t titleFontSize,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    titleFontSize,
    0,
    0,
    alignment,
    480,
    -162.5,
    0,
    0,
    0,
    isCancelTxtTwoLine,
    v18);
}


void CommonConfirmDialog__OpenSetTitleCondensedScale(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t titleFontSize,
        int32_t messageFontSize,
        float titlePosY,
        float messagePosY,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x21
  System_Nullable_float__o v23; // x0
  __int64 v24; // x1
  UILabel_o *titleLabel; // x0
  int32_t mWidth; // w20
  const MethodInfo *v27; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v30; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_4CC111E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_float___ctor__);
    byte_4CC111E = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v30;
  v30 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    messageWidgetSize,
    canMaskTouchClose,
    maskType,
    v30,
    titleFontSize,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v27);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (mWidth = titleLabel->fields.mWidth,
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
          titleLabel,
          titleLabel->klass->vtable._33_MakePixelPerfect.method),
        (titleLabel = this->fields.titleLabel) == 0) )
  {
    sub_1C71608(titleLabel, v24);
  }
  UILabel__SetCondensedScale(titleLabel, mWidth, 0, 0);
}


void CommonConfirmDialog__Open_31414520(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        bool setCondensedScale,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    0,
    0,
    isDecideSe,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    setCondensedScale,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v10);
}


void CommonConfirmDialog__Open_31414664(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v11);
}


void CommonConfirmDialog__Open_31414784(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    0,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v10);
}


void CommonConfirmDialog__Open_31414912(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t titleFontSize,
        int32_t messageFontSize,
        float titlePosY,
        float messagePosY,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x20
  System_Nullable_float__o v23; // x0
  const MethodInfo *v24; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v27; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_4CC111D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_float___ctor__);
    byte_4CC111D = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v27;
  v27 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    messageWidgetSize,
    canMaskTouchClose,
    maskType,
    v27,
    titleFontSize,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v24);
}


void CommonConfirmDialog__Open_31415208(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        int32_t minFontSize,
        float messagePosY,
        int32_t messageLabelWidth,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        bool isDecideSe,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    0.0,
    messagePosY,
    0,
    (UnityEngine_Vector2Int_o)((unsigned int)messageLabelWidth
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    minFontSize,
    alignment,
    windowHeight,
    buttonPosY,
    0,
    0,
    0,
    0,
    v18);
}


void CommonConfirmDialog__Open_31415908(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontSize,
        bool canMaskTouchClose,
        int32_t decideTxtSize,
        int32_t cancelTxtSize,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontSize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    0,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    decideTxtSize,
    cancelTxtSize,
    0,
    0,
    v12);
}


void CommonConfirmDialog__Open_31416032(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t messageFontSize,
        int32_t messageLabelHeight,
        float messagePosY,
        int32_t decideTxtSize,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    0,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    decideTxtSize,
    0,
    0,
    0,
    v12);
}


void CommonConfirmDialog__ResetDecideButtonLabelMaxLineCount(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4CC1125 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1125 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v5 = this->fields.buttonDecideLabel;
    if ( !v5 )
      sub_1C71608(0, v4);
    UILabel__set_maxLineCount(v5, 1, 0);
  }
}


void CommonConfirmDialog__SetDecideButtonLabelMaxLineCount(
        CommonConfirmDialog_o *this,
        int32_t maxLine,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_4CC1124 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1124 = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_1C71608(0, v6);
    UILabel__set_maxLineCount(v7, maxLine, 0);
  }
}


void CommonConfirmDialog__Setup(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        bool canMaskTouchClose,
        int32_t maskType,
        System_Nullable_float__o titlePosY,
        int32_t titleFontSize,
        bool setCondensedScale,
        int32_t minFontSize,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        int32_t decideTxtSize,
        int32_t cancelTxtSize,
        System_String_o *addMsg,
        bool isCancelTxtTwoLine,
        const MethodInfo *method)
{
  int32_t v26; // w24
  int32_t v27; // w28
  UnityEngine_Object_o *addMsgInfo; // x20
  bool v37; // w0
  __int64 v38; // x1
  __int64 addMsgLabel; // x0
  UnityEngine_Object_o *v40; // x20
  _BOOL4 activeSelf; // w20
  _BOOL4 IsNullOrEmpty; // w27
  UnityEngine_Object_o *titleLabel; // x29
  _BOOL4 v44; // w20
  int v45; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v48; // x29
  UnityEngine_Transform_o *v49; // x26
  Il2CppObject *Component_object; // x26
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v54; // x20
  UILabel_o *v55; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v57; // x20
  UILabel_o *v58; // x20
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  const MethodInfo *v61; // x2
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x4
  const MethodInfo *v64; // [xsp+8h] [xbp-C8h]

  v26 = decideTxtSize;
  v27 = titleFontSize;
  if ( (byte_4CC111B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_float__get_HasValue__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_3683/*"COMMON_CONFIRM_NO"*/);
    sub_1C713B0(&StringLiteral_3688/*"COMMON_CONFIRM_YES"*/);
    byte_4CC111B = 1;
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v37 )
  {
    addMsgLabel = (__int64)this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)addMsgLabel, 1, 0);
    addMsgLabel = (__int64)this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, addMsg, 0);
  }
  this->fields.clickFunc = func;
  sub_1C71354(&this->fields.clickFunc, func);
  v40 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
  {
    addMsgLabel = (__int64)this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)addMsgLabel, 0);
  }
  else
  {
    activeSelf = 0;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  v44 = !activeSelf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v45 = IsNullOrEmpty && v44;
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addMsgLabel, 0);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 180.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    v48 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      }
      v27 = *(_DWORD *)(*(_QWORD *)(addMsgLabel + 184) + 512LL);
    }
    if ( !v48 )
      goto LABEL_87;
    UILabel__set_fontSize(v48, v27, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( v45 )
      title = string_TypeInfo->static_fields->Empty;
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, title, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_width((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_X, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_Y, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    addMsgLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)addMsgLabel, 0);
    v49 = (UnityEngine_Transform_o *)addMsgLabel;
    if ( !byte_4CC0D0E )
    {
      addMsgLabel = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D0E = 1;
    }
    if ( !v49 )
      goto LABEL_87;
    UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  addMsgLabel = (__int64)this->fields.baseWindow;
  if ( !addMsgLabel )
    goto LABEL_87;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)addMsgLabel,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    CommonConfirmDialog__AdjustMessageLabel(
      this,
      v45,
      message,
      messagePosY,
      spacingY,
      messageWidgetSize,
      fontsize,
      alignment,
      setCondensedScale,
      minFontSize,
      buttonPosY,
      v64);
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    v54 = this->fields.buttonDecideLabel;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      addMsgLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_YES"*/, 0);
      decideTxt = (System_String_o *)addMsgLabel;
    }
    if ( !v54 )
      goto LABEL_87;
    UILabel__set_text(v54, decideTxt, 0);
    v55 = this->fields.buttonDecideLabel;
    if ( !decideTxtSize )
    {
      addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      }
      v26 = *(_DWORD *)(*(_QWORD *)(addMsgLabel + 184) + 512LL);
    }
    if ( !v55 )
      goto LABEL_87;
    UILabel__set_fontSize(v55, v26, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    v57 = this->fields.buttonCancelLabel;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      addMsgLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3683/*"COMMON_CONFIRM_NO"*/, 0);
      cancelTxt = (System_String_o *)addMsgLabel;
    }
    if ( v57 )
    {
      UILabel__set_text(v57, cancelTxt, 0);
      v58 = this->fields.buttonCancelLabel;
      v38 = (unsigned int)cancelTxtSize;
      if ( !cancelTxtSize )
      {
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          addMsgLabel = (__int64)BalanceConfig_TypeInfo;
        }
        v38 = *(unsigned int *)(*(_QWORD *)(addMsgLabel + 184) + 512LL);
      }
      if ( v58 )
      {
        UILabel__set_fontSize(v58, v38, 0);
        if ( !isCancelTxtTwoLine )
          goto LABEL_78;
        addMsgLabel = (__int64)this->fields.buttonCancelLabel;
        if ( addMsgLabel )
        {
          UILabel__set_maxLineCount((UILabel_o *)addMsgLabel, 2, 0);
          addMsgLabel = (__int64)this->fields.buttonCancelLabel;
          if ( addMsgLabel )
          {
            UILabel__set_fontSize((UILabel_o *)addMsgLabel, 22, 0);
            goto LABEL_78;
          }
        }
      }
    }
LABEL_87:
    sub_1C71608(addMsgLabel, v38);
  }
LABEL_78:
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
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v61);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0);
  v62 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v62, maskType, 0, v63);
}


bool CommonConfirmDialog___OnClickCancel_b__55_0(
        CommonConfirmDialog_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  struct UILabel_o *buttonCancelLabel; // x8

  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !buttonCancelLabel || !x )
    sub_1C71608(this, x);
  return System_String__Equals_64067044(x, buttonCancelLabel->fields.mText, 0);
}


UILabel_o *CommonConfirmDialog__get_ButtonCancelLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *CommonConfirmDialog__get_ButtonDecideLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


void CommonConfirmDialog_ClickDelegate___ctor(
        CommonConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA60B0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA6068;
}


System_IAsyncResult_o *CommonConfirmDialog_ClickDelegate__BeginInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CC5E57 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC5E57 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void CommonConfirmDialog_ClickDelegate__EndInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void CommonConfirmDialog_ClickDelegate__Invoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}