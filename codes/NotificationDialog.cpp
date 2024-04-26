void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  struct NotificationDialog_StaticFields *static_fields; // x9
  NotificationDialog_c *v2; // x8
  struct NotificationDialog_StaticFields *v3; // x9
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9

  if ( (byte_4352414 & 1) == 0 )
  {
    sub_B70694(&NotificationDialog_TypeInfo);
    byte_4352414 = 1;
  }
  NotificationDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v2 = NotificationDialog_TypeInfo;
  v3 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v3->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v3->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v4->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v5->MESSAGE_LINE_POS.fields.z = 0.0;
  v2->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v2->static_fields->MESSAGE_BASE_SIZE_Y = 295;
  v2->static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y = 344;
  v2->static_fields->MESSAGE_LINE_SIZE_Y = 265;
  v6 = v2->static_fields;
  v6->IMAGE_BASE_POS.fields.x = 0.0;
  *(_QWORD *)&v6->IMAGE_BASE_POS.fields.y = 0LL;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v8->BUTTON_TEXT_POS.fields.z = 0.0;
  v2->static_fields->BUTTON_BASE_SIZE_X = 218;
  v2->static_fields->BUTTON_BASE_SIZE_Y = 56;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4352413 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_4352413 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog__AdjustMessageLabel(
        NotificationDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        int32_t spacingY,
        int32_t messageSizeY,
        int32_t maxLine,
        int32_t messageFontSize,
        bool adjustText,
        UnityEngine_Vector3_o messagePos,
        float buttonPosY,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s10
  float x; // s9
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v24; // x1
  __int64 baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int32_t mHeight; // w26
  float v28; // s10
  float v29; // s0
  double v30; // d0
  UnityEngine_Object_o *v31; // x27
  NotificationDialog_c *v32; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v35; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x0
  UIWidget_o *v38; // [xsp+0h] [xbp-80h] BYREF
  UITexture_o *component; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_435240A & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&string_TypeInfo);
    byte_435240A = 1;
  }
  v38 = 0LL;
  component = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = (__int64)this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_49;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_UITexture_(
              (UnityEngine_GameObject_o *)baseWindow,
              &component,
              (const MethodInfo_1D4B5C8 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_29;
      baseWindow = (__int64)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_49;
      baseWindow = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)baseWindow, 0LL);
      if ( !baseWindow )
        goto LABEL_49;
      baseWindow = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)baseWindow, 0LL);
      if ( !baseWindow )
        goto LABEL_49;
      baseWindow = UnityEngine_Component__TryGetComponent_UIWidget_(
                     (UnityEngine_Component_o *)baseWindow,
                     &v38,
                     (const MethodInfo_1BE45A0 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( (baseWindow & 1) != 0 )
      {
        if ( !component || !v38 )
          goto LABEL_49;
        mHeight = component->fields.mHeight;
        v28 = (float)((float)v38->fields.mHeight * 0.5) + buttonPosY;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v29 = fabsf((float)((float)mHeight * 0.5) + -30.0) + fabsf(v28);
        y = v28 + (float)(v29 * 0.5);
        if ( v29 == INFINITY )
          v30 = -v29;
        else
          v30 = v29;
        messageSizeY = (int)v30;
      }
      else
      {
LABEL_29:
        v32 = NotificationDialog_TypeInfo;
        if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v32 = NotificationDialog_TypeInfo;
        }
        static_fields = v32->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (__int64)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_49;
      goto LABEL_34;
    }
  }
  messageLabel = this->fields.messageLabel;
  v31 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( (baseWindow & 1) != 0 )
  {
    baseWindow = (__int64)this->fields.noTitleMessageLabel;
    if ( !baseWindow )
      goto LABEL_49;
LABEL_34:
    UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( !message )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( messageLabel )
      goto LABEL_39;
LABEL_49:
    sub_B7076C(baseWindow, v24);
  }
  baseWindow = sub_B706AC(char___TypeInfo, 1LL);
  if ( !baseWindow )
    goto LABEL_49;
  if ( !*(_DWORD *)(baseWindow + 24) )
  {
    v37 = sub_B70798(baseWindow);
    sub_B70738(v37, 0LL);
  }
  *(_WORD *)(baseWindow + 32) = 10;
  baseWindow = (__int64)System_String__Trim(message, (System_Char_array *)baseWindow, 0LL);
  Empty = (System_String_o *)baseWindow;
  if ( !messageLabel )
    goto LABEL_49;
LABEL_39:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v35 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v35 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v35->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v40, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog__AdjustScriptMessageLabel(
        NotificationDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        int32_t messageSizeY,
        int32_t maxLine,
        UnityEngine_Vector3_o messagePos,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s10
  float x; // s9
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v18; // x1
  struct UILabel_o *v19; // x24
  UILabel_o *messageLabel; // x0
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v23; // x25
  System_String_o *v24; // x23
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_435240B & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_20803/*"messageOffset"*/);
    byte_435240B = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      v19 = this->fields.noTitleMessageLabel;
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
        goto LABEL_30;
      onPostFill = messageLabel->fields.onPostFill;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onPostFill->fields.original_method_info);
      y = *(float *)&onPostFill->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_19;
    }
  }
  v19 = this->fields.messageLabel;
  v23 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_30;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_19:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
  {
    messageLabel = (UILabel_o *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !messageLabel )
      goto LABEL_30;
    if ( !LODWORD(messageLabel->fields.leftAnchor) )
    {
      v27 = sub_B70798(messageLabel);
      sub_B70738(v27, 0LL);
    }
    LOWORD(messageLabel->fields.rightAnchor) = 10;
    v24 = System_String__Trim(message, (System_Char_array *)messageLabel, 0LL);
  }
  else
  {
    v24 = string_TypeInfo->static_fields->Empty;
  }
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  }
  if ( !v19 )
LABEL_30:
    sub_B7076C(messageLabel, v18);
  UIWidget__SetDimensions(
    (UIWidget_o *)v19,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v19, maxLine, 0LL);
  UILabel__set_fontSize(v19, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v19, v24, v19->fields.mFontSize, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     (NotificationDialog_o *)gameObject,
                     script,
                     (System_String_o *)StringLiteral_20803/*"messageOffset"*/,
                     v26);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition(gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_25996236(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_25996236(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_435240F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_NotificationDialog_EndClose__);
    byte_435240F = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeEndFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (BattleServantConfConponent_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_B70630(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct LinkableTexture_o *v18; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x21
  __int64 v21; // x23
  int size; // w8
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x21
  __int64 v33; // x23
  int v34; // w8
  unsigned int v35; // w24
  __int64 v36; // x8
  UnityEngine_Object_o *v37; // x21
  struct System_Collections_Generic_List_LinkableTexture__o *v38; // x21
  UnityEngine_Object_o *v39; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4352406 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_B70694(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352406 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_77;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_77;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_77;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_77;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_77;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_77;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
      this->fields.mBannerWWW = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v9, v10, v11, v12, v13, v14);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    titleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v16 = this->fields.lnkTexture;
      if ( !v16 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v16->fields.mCollider;
      if ( !titleLabel )
        goto LABEL_77;
      v17 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                      titleLabel,
                                      titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v17, 0LL);
      v18 = this->fields.lnkTexture;
      if ( !v18 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v18->fields.mCollider;
      if ( !titleLabel )
        goto LABEL_77;
      ((void (__fastcall *)(UILabel_o *, _QWORD, Il2CppMethodPointer))titleLabel->klass->vtable._27_set_mainTexture.method)(
        titleLabel,
        0LL,
        titleLabel->klass->vtable._28_get_shader.methodPtr);
    }
    p_additionalSprites = &this->fields.additionalSprites;
    additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalSprites;
    if ( additionalSprites )
    {
      v21 = 0LL;
      while ( 1 )
      {
        size = additionalSprites->fields._size;
        if ( (int)v21 >= size )
          break;
        if ( size <= (unsigned int)v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        titleLabel = (UILabel_o *)additionalSprites->fields._items->m_Items[v21];
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
          additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalSprites;
          ++v21;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_77;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalSprites,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    }
    else
    {
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v24,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v24;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.additionalSprites,
        (System_Int32_array **)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
    if ( additionalTextures )
    {
      v33 = 4LL;
      while ( 1 )
      {
        v34 = additionalTextures->fields._size;
        v35 = v33 - 4;
        if ( (int)v33 - 4 >= v34 )
          break;
        if ( v34 <= v35 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v36 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v33);
        if ( v36 )
        {
          titleLabel = *(UILabel_o **)(v36 + 40);
          if ( titleLabel )
          {
            v37 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                            titleLabel,
                                            titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_36067208(v37, 0LL);
            v38 = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              if ( v38->fields._size <= v35 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              titleLabel = (UILabel_o *)*((_QWORD *)&v38->fields._items->obj.klass + v33);
              if ( titleLabel )
              {
                v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_36067208(v39, 0LL);
                additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalTextures;
                ++v33;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_77;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalTextures,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    }
    else
    {
      v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v40,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v40;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.additionalTextures,
        (System_Int32_array **)v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_77:
    sub_B7076C(titleLabel, method);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mAfterLoad,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall NotificationDialog__LoadNext(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Object_array *banners; // x9
  int32_t v3; // w8
  System_Collections_IEnumerator_o *started; // x1

  banners = this->fields.banners;
  v3 = this->fields.mLoadingIdx + 1;
  this->fields.mLoadingIdx = v3;
  if ( !banners )
    sub_B7076C(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t onClickOkSeKind; // w20
  NotificationDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_4352410 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4352410 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    onClickOkSeKind = this->fields.onClickOkSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickOkSeKind, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      NotificationDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
  }
}


void __fastcall NotificationDialog__Open(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        System_Nullable_float__o messagePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        System_Nullable_float__o buttonPosY,
        const MethodInfo *method)
{
  System_Nullable_float__o v20; // x20
  System_Nullable_int__o v21; // x26
  System_Nullable_int__o v22; // x12
  bool v23; // w9
  System_Nullable_int__o v24; // x23
  int32_t v25; // w14
  System_Nullable_float__o v26; // x25
  int32_t v27; // w16
  int32_t v28; // w17
  float value; // s8
  NotificationDialog_c *v31; // x0
  int32_t v32; // w20
  NotificationDialog_ClickDelegate_o *v33; // x22
  System_String_o *v34; // x24
  bool v35; // w27
  int32_t v36; // w26
  float y; // s1
  NotificationDialog_c *v38; // x0
  int32_t v39; // w20
  NotificationDialog_ClickDelegate_o *v40; // x22
  System_String_o *v41; // x24
  bool v42; // w27
  System_Nullable_int__o v43; // x21
  int32_t v44; // w26
  System_String_o *v45; // [xsp+10h] [xbp-90h]
  int32_t v46; // [xsp+10h] [xbp-90h]
  int32_t v47; // [xsp+10h] [xbp-90h]
  NotificationDialog_ClickDelegate_o *v48; // [xsp+18h] [xbp-88h]
  int32_t v49; // [xsp+18h] [xbp-88h]
  int32_t v50; // [xsp+18h] [xbp-88h]
  int32_t v51; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v52; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v53; // [xsp+20h] [xbp-80h]
  System_Nullable_float__o v54; // [xsp+28h] [xbp-78h]
  System_String_o *titlea; // [xsp+30h] [xbp-70h]
  System_String_o *titleb; // [xsp+30h] [xbp-70h]
  System_String_o *titlec; // [xsp+30h] [xbp-70h]
  bool v58; // [xsp+3Ch] [xbp-64h]
  bool v59; // [xsp+3Ch] [xbp-64h]
  bool v60; // [xsp+3Ch] [xbp-64h]
  int32_t v61; // [xsp+48h] [xbp-58h]
  int32_t v62; // [xsp+48h] [xbp-58h]
  int32_t v63; // [xsp+48h] [xbp-58h]
  int32_t v64; // [xsp+4Ch] [xbp-54h]
  int32_t v65; // [xsp+4Ch] [xbp-54h]
  int32_t v66; // [xsp+4Ch] [xbp-54h]

  v21 = buttonWidgetSizeY;
  v20 = buttonPosY;
  v22 = buttonWidgetSizeX;
  v23 = adjustText;
  v24 = messageWidgetSizeY;
  v25 = spacingY;
  v26 = titlePosY;
  v27 = onClickOkSeKind;
  v28 = messageFontSize;
  if ( (byte_4352407 & 1) == 0 )
  {
    v61 = panelDepth;
    v64 = titleSize;
    v51 = maxLine;
    v45 = message;
    v48 = func;
    v58 = isLineDraw;
    titlea = title;
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_float__get_HasValue__);
    v22 = buttonWidgetSizeX;
    v20 = buttonPosY;
    title = titlea;
    v23 = adjustText;
    message = v45;
    func = v48;
    isLineDraw = v58;
    panelDepth = v61;
    titleSize = v64;
    maxLine = v51;
    v28 = messageFontSize;
    v27 = onClickOkSeKind;
    v26 = titlePosY;
    v25 = spacingY;
    v24 = messageWidgetSizeY;
    byte_4352407 = 1;
  }
  if ( (*(_QWORD *)&messagePosY & 0xFF00000000LL) != 0 )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v31 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v62 = panelDepth;
      v65 = titleSize;
      v54 = v20;
      titleb = title;
      v32 = maxLine;
      v33 = func;
      v59 = isLineDraw;
      v34 = message;
      v35 = v23;
      v52 = v22;
      v49 = v25;
      v46 = v27;
      v36 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v46;
      v25 = v49;
      title = titleb;
      isLineDraw = v59;
      panelDepth = v62;
      titleSize = v65;
      maxLine = v32;
      v22 = v52;
      v20 = v54;
      v31 = NotificationDialog_TypeInfo;
      v28 = v36;
      v21 = buttonWidgetSizeY;
      v23 = v35;
      message = v34;
      func = v33;
    }
    value = v31->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( (*(_QWORD *)&v20 & 0xFF00000000LL) != 0 )
  {
    y = v20.fields.value;
  }
  else
  {
    v38 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v63 = panelDepth;
      v66 = titleSize;
      v39 = maxLine;
      v40 = func;
      v60 = isLineDraw;
      v41 = message;
      titlec = title;
      v42 = v23;
      v43 = v21;
      v53 = v22;
      v50 = v25;
      v47 = v27;
      v44 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v47;
      v25 = v50;
      v22 = v53;
      title = titlec;
      isLineDraw = v60;
      panelDepth = v63;
      titleSize = v66;
      v38 = NotificationDialog_TypeInfo;
      v28 = v44;
      v21 = v43;
      v23 = v42;
      message = v41;
      func = v40;
      maxLine = v39;
    }
    y = v38->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    canMaskTouchClose,
    value,
    y,
    v28,
    v27,
    v26,
    v25,
    v24,
    v23,
    v22,
    v21,
    *(const MethodInfo **)&buttonWidgetSizeY);
}


void __fastcall NotificationDialog__OpenDialog(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        float messagePosY,
        float buttonPosY,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        const MethodInfo *method)
{
  int32_t MESSAGE_BASE_SIZE_Y; // w21
  UIPanel_o *TargetPanel; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v37; // x23
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x24
  System_String_o *v41; // x1
  float *p_BANNER_RETRY_MAX; // x8
  float v43; // s11
  float v44; // s10
  float y; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v47; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s10
  float z; // s11
  UnityEngine_Object_o *lineSprite; // x20
  NotificationDialog_c *v52; // x0
  struct NotificationDialog_StaticFields *v53; // x8
  UnityEngine_Object_o *messageLabel; // x20
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  NotificationDialog_c *v59; // x0
  struct NotificationDialog_StaticFields *v60; // x8
  UILabel_o *v61; // x20
  float v62; // s10
  float v63; // s9
  float v64; // s13
  float v65; // s11
  float v66; // s12
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x20
  UIWidget_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v71; // x20
  int method_ptr; // w22
  System_Action_o *v73; // x19
  NotificationDialog_c *v74; // x0
  const MethodInfo *v75; // [xsp+0h] [xbp-C0h]
  int value; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  value = buttonWidgetSizeY.fields.value;
  MESSAGE_BASE_SIZE_Y = messageWidgetSizeY.fields.value;
  if ( (byte_4352408 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_NotificationDialog_EndOpen__);
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_int__get_HasValue__);
    sub_B70694(&Method_System_Nullable_float__get_HasValue__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352408 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v37 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_122;
      this->fields.keepPanelDepth = v37->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_122;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_122;
    if ( title )
      v41 = title;
    else
      v41 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v41, 0LL);
    v74 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v74 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v74->static_fields->BANNER_RETRY_MAX;
    v43 = p_BANNER_RETRY_MAX[1];
    v44 = p_BANNER_RETRY_MAX[3];
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
    {
      y = titlePosY.fields.value;
    }
    else
    {
      y = p_BANNER_RETRY_MAX[2];
      if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v74);
        y = NotificationDialog_TypeInfo->static_fields->TITLE_BASE_POS.fields.y;
      }
    }
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_122;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v79.fields.x = v43;
    v79.fields.y = y;
    v79.fields.z = v44;
    GameObjectExtensions__SetLocalPosition(gameObject, v79, 0LL);
  }
  v47 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v47 = NotificationDialog_TypeInfo;
  }
  static_fields = v47->static_fields;
  x = static_fields->MESSAGE_BASE_POS.fields.x;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  if ( static_fields->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = static_fields->MESSAGE_BASE_POS.fields.y;
  if ( (*(_QWORD *)&messageWidgetSizeY & 0xFF00000000LL) == 0 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      static_fields = NotificationDialog_TypeInfo->static_fields;
    }
    MESSAGE_BASE_SIZE_Y = static_fields->MESSAGE_BASE_SIZE_Y;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v52 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v52 = NotificationDialog_TypeInfo;
      }
      v53 = v52->static_fields;
      x = v53->MESSAGE_LINE_POS.fields.x;
      messagePosY = v53->MESSAGE_LINE_POS.fields.y;
      z = v53->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v53->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v80.fields.x = x;
    v80.fields.y = messagePosY;
    v80.fields.z = z;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      MESSAGE_BASE_SIZE_Y,
      maxLine,
      messageFontSize,
      adjustText,
      v80,
      buttonPosY,
      v75);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v59 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v59 = NotificationDialog_TypeInfo;
    }
    v60 = v59->static_fields;
    v61 = this->fields.okBtnLabel;
    v62 = v60->BUTTON_BASE_POS.fields.x;
    v63 = v60->BUTTON_BASE_POS.fields.z;
    v64 = v60->BUTTON_TEXT_POS.fields.x;
    v66 = v60->BUTTON_TEXT_POS.fields.y;
    v65 = v60->BUTTON_TEXT_POS.fields.z;
    if ( v60->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v60->BUTTON_BASE_POS.fields.y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v61 )
      goto LABEL_122;
    UILabel__set_text(v61, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v81.fields.x = v64;
    v81.fields.y = v66;
    v81.fields.z = v65;
    GameObjectExtensions__SetLocalPosition(v67, v81, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v82.fields.x = v62;
    v82.fields.y = buttonPosY;
    v82.fields.z = v63;
    GameObjectExtensions__SetLocalPosition(v68, v82, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    v69 = (UnityEngine_GameObject_o *)transform;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)transform,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v71 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v69,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        method_ptr = buttonWidgetSizeX.fields.value;
        if ( (*(_QWORD *)&buttonWidgetSizeX & 0xFF00000000LL) == 0 )
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          method_ptr = transform->fields.onPostFill[1].fields.method_ptr;
        }
        if ( (*(_QWORD *)&buttonWidgetSizeY & 0xFF00000000LL) == 0 )
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          value = transform->fields.onPostFill[1].fields.invoke_impl;
        }
        if ( !Component_srcLineSprite )
          goto LABEL_122;
        UIWidget__set_width(Component_srcLineSprite, method_ptr, 0LL);
        UIWidget__set_height(Component_srcLineSprite, value, 0LL);
        if ( !v71 )
          goto LABEL_122;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v71, 0LL);
        size.fields.x = (float)method_ptr;
        size.fields.y = (float)value;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v71, size, 0LL);
      }
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v37 )
    {
      UIPanel__set_depth(v37, keepPanelDepth, 0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B7076C(transform, keepPanelDepth);
  }
LABEL_121:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v73 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
}


void __fastcall NotificationDialog__Open_25990580(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        float messagePosY,
        float buttonPosY,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        const MethodInfo *method)
{
  const MethodInfo *v16; // [xsp+48h] [xbp-8h]

  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    canMaskTouchClose,
    messagePosY,
    buttonPosY,
    messageFontSize,
    onClickOkSeKind,
    titlePosY,
    spacingY,
    0LL,
    1,
    0LL,
    0LL,
    v16);
}


void __fastcall NotificationDialog__Open_25991668(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v26; // x21
  UILabel_o *Value; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v30; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *v33; // x26
  NotificationDialog_c *v34; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v36; // s8
  float v37; // s9
  float v38; // s10
  NotificationDialog_c *v39; // x0
  float *v40; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v42; // s8
  float v43; // s9
  float v44; // s10
  int32_t v45; // w26
  NotificationDialog_c *v46; // x0
  float *v47; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v50; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v52; // x11
  __int64 v53; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v54; // x0
  struct System_Object_array *v55; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Object_array *sprites; // x8
  __int64 v64; // x9
  struct LinkableSprite_o *v65; // x24
  unsigned __int64 v66; // x21
  UnityEngine_GameObject_o *v67; // x24
  UnityEngine_GameObject_o *v68; // x24
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_Dictionary_string__object__o *v70; // x8
  __int64 v71; // x11
  System_Collections_Generic_Dictionary_string__object__o *v72; // x25
  UnityEngine_GameObject_o *v73; // x0
  UISprite_o *mCollider; // x27
  UnityEngine_GameObject_o *v75; // x26
  const MethodInfo *v76; // x3
  System_String_o *StringFromScript; // x28
  UnityEngine_GameObject_o *v78; // x0
  const MethodInfo *v79; // x3
  NotificationDialog_c *v80; // x8
  UnityEngine_GameObject_o *v81; // x26
  float *v82; // x8
  float v83; // s9
  float v84; // s10
  float v85; // s11
  NotificationDialog_o *v86; // x0
  const MethodInfo *v87; // x3
  NotificationDialog_o *v88; // x0
  const MethodInfo *v89; // x3
  double v90; // d2
  double v91; // d0
  NotificationDialog_o *IntFromScript; // x0
  int32_t v93; // w26
  const MethodInfo *v94; // x3
  System_String_o *v95; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v97; // x11
  __int64 v98; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v99; // x0
  struct System_Object_array *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct System_Object_array *banners; // x8
  int v108; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v110; // x23
  UnityEngine_GameObject_o *v111; // x0
  const MethodInfo *v112; // x3
  NotificationDialog_c *v113; // x8
  UnityEngine_GameObject_o *v114; // x23
  float *v115; // x8
  float v116; // s8
  float v117; // s9
  float v118; // s10
  System_Action_o *v119; // x20
  System_Action_o *v120; // x20
  const MethodInfo *v121; // x2
  __int64 v122; // x0
  UnityEngine_Object_o *x; // [xsp+8h] [xbp-98h]
  MethodInfo v126; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4352409 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_NotificationDialog_EndOpen__);
    sub_B70694(&Method_NotificationDialog__Open_b__42_0__);
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_16851/*"banners"*/);
    sub_B70694(&StringLiteral_22506/*"size"*/);
    sub_B70694(&StringLiteral_23342/*"urlOpenType"*/);
    sub_B70694(&StringLiteral_21541/*"offset"*/);
    sub_B70694(&StringLiteral_23082/*"titleOffset"*/);
    sub_B70694(&StringLiteral_22604/*"spriteName"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_23341/*"urlLink"*/);
    sub_B70694(&StringLiteral_17379/*"buttonOffset"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_22605/*"sprites"*/);
    byte_4352409 = 1;
  }
  v126.name = 0LL;
  LODWORD(v126.invoker_method) = 0;
  v126.methodPointer = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v26 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Value = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
    if ( ((unsigned __int8)Value & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_152;
      this->fields.keepPanelDepth = v26->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  x = (UnityEngine_Object_o *)v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    Value = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !Value )
      goto LABEL_152;
    UILabel__set_fontSize(Value, titleSize, 0LL);
    Value = this->fields.titleLabel;
    if ( !Value )
      goto LABEL_152;
    v30 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(Value, v30, 0LL);
    Value = this->fields.titleLabel;
    if ( !Value )
      goto LABEL_152;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v33 = gameObject;
    v34 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v34 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v34->static_fields->BANNER_RETRY_MAX;
    v36 = p_BANNER_RETRY_MAX[1];
    v37 = p_BANNER_RETRY_MAX[2];
    v38 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       (NotificationDialog_o *)gameObject,
                       script,
                       (System_String_o *)StringLiteral_23082/*"titleOffset"*/,
                       v32);
    VectFromScript.fields.x = v36 + VectFromScript.fields.x;
    VectFromScript.fields.y = v37 + VectFromScript.fields.y;
    VectFromScript.fields.z = v38 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v33, VectFromScript, 0LL);
  }
  v39 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v39 = NotificationDialog_TypeInfo;
  }
  v40 = (float *)&v39->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v42 = v40[4];
  v43 = v40[5];
  v44 = v40[6];
  v45 = *((_DWORD *)v40 + 14);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    Value = (UILabel_o *)this->fields.lineSprite;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v46 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v46 = NotificationDialog_TypeInfo;
      }
      v47 = (float *)&v46->static_fields->BANNER_RETRY_MAX;
      v42 = v47[10];
      v43 = v47[11];
      v44 = v47[12];
      v45 = *((_DWORD *)v47 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v128.fields.x = v42;
    v128.fields.y = v43;
    v128.fields.z = v44;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v45, maxLine, v128, script, v50);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    Value = (UILabel_o *)script;
    if ( !script )
      goto LABEL_152;
    Value = (UILabel_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22605/*"sprites"*/,
                           (System_Xml_Schema_XmlSchemaObject_o **)&v126.name,
                           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)Value & 1) == 0 )
      goto LABEL_99;
    if ( !v126.name )
      goto LABEL_152;
    v52 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v126.name + 300LL) < (unsigned int)v52
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v126.name + 200LL) + 8 * v52 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_152;
    }
    v53 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v126.name + 300LL) >= (unsigned int)v53 )
      v54 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v126.name + 200LL) + 8 * v53 - 8) == System_Collections_Generic_List_object__TypeInfo
          ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v126.name
          : 0LL;
    else
      v54 = 0LL;
    v55 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v54,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v55;
    p_sprites = &this->fields.sprites;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.sprites,
      (System_Int32_array **)v55,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    sprites = this->fields.sprites;
    if ( sprites && (v64 = *(_QWORD *)&sprites->max_length) != 0 )
    {
      if ( (int)v64 >= 1 )
      {
        v65 = this->fields.lnkSprite;
        v66 = 0LL;
        while ( 1 )
        {
          if ( v66 )
          {
            Value = (UILabel_o *)this->fields.lnkSprite;
            if ( !Value )
              break;
            v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Value = (UILabel_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v67,
                                   (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v68 = (UnityEngine_GameObject_o *)Value;
            Value = (UILabel_o *)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.lnkSprite,
                                   0LL);
            if ( !Value )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
            GameObjectExtensions__SetParent(v68, parent, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v68, one, 0LL);
            if ( !v68 )
              break;
            Value = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v68,
                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            if ( !this->fields.additionalSprites )
              break;
            v65 = (struct LinkableSprite_o *)Value;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.additionalSprites,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Value,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_LinkableSprite__Add__);
            sprites = *p_sprites;
            if ( !*p_sprites )
              break;
          }
          if ( v66 >= sprites->max_length )
          {
            v122 = sub_B70798(Value);
            sub_B70738(v122, 0LL);
          }
          v70 = (System_Collections_Generic_Dictionary_string__object__o *)sprites->m_Items[v66];
          if ( v70
            && (v71 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v70->klass->_2.bitflags2 + 1) >= (unsigned int)v71) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v70->klass->_2.typeHierarchy[v71 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v72 = v70;
            else
              v72 = 0LL;
            if ( !v65 )
              break;
          }
          else
          {
            v72 = 0LL;
            if ( !v65 )
              break;
          }
          v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v65, 0LL);
          mCollider = (UISprite_o *)v65->fields.mCollider;
          v75 = v73;
          StringFromScript = NotificationDialog__getStringFromScript(
                               (NotificationDialog_o *)v73,
                               v72,
                               (System_String_o *)StringLiteral_22604/*"spriteName"*/,
                               v76);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Value = (UILabel_o *)AtlasManager__SetEventUI(mCollider, StringFromScript, 0LL);
          if ( !v75 )
            break;
          UnityEngine_GameObject__SetActive(v75, (unsigned __int8)Value & 1, 0LL);
          v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v65, 0LL);
          v80 = NotificationDialog_TypeInfo;
          v81 = v78;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v80 = NotificationDialog_TypeInfo;
          }
          v82 = (float *)&v80->static_fields->BANNER_RETRY_MAX;
          v83 = v82[17];
          v84 = v82[18];
          v85 = v82[19];
          v130 = NotificationDialog__getVectFromScript(
                   (NotificationDialog_o *)v78,
                   v72,
                   (System_String_o *)StringLiteral_21541/*"offset"*/,
                   v79);
          v130.fields.x = v83 + v130.fields.x;
          v130.fields.y = v84 + v130.fields.y;
          v130.fields.z = v85 + v130.fields.z;
          GameObjectExtensions__SetLocalPosition(v81, v130, 0LL);
          v131 = NotificationDialog__getVectFromScript(v86, v72, (System_String_o *)StringLiteral_22506/*"size"*/, v87);
          v126.methodPointer = *(Il2CppMethodPointer *)&v131.fields.x;
          *(float *)&v126.invoker_method = v131.fields.z;
          zero = UnityEngine_Vector3__get_zero(0LL);
          if ( UnityEngine_Vector3__Equals_51311332(zero, v134, &v126) )
          {
            LinkableSprite__MakePixelPerfect(v65, 0LL);
          }
          else
          {
            v90 = *(float *)&v126.methodPointer;
            v91 = *((float *)&v126.methodPointer + 1);
            if ( *(float *)&v126.methodPointer == INFINITY )
              v90 = -INFINITY;
            if ( *((float *)&v126.methodPointer + 1) == INFINITY )
              v91 = -INFINITY;
            LinkableSprite__SetSize(v65, (int)v90, (int)v91, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v88,
                                                    v72,
                                                    (System_String_o *)StringLiteral_23342/*"urlOpenType"*/,
                                                    v89);
          v93 = (int)IntFromScript;
          v95 = NotificationDialog__getStringFromScript(IntFromScript, v72, (System_String_o *)StringLiteral_23341/*"urlLink"*/, v94);
          LinkableSprite__SetUp(v65, v93, v95, 0LL);
          sprites = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( (__int64)++v66 >= (int)sprites->max_length )
            goto LABEL_102;
        }
LABEL_152:
        sub_B7076C(Value, keepPanelDepth);
      }
    }
    else
    {
LABEL_99:
      Value = (UILabel_o *)this->fields.lnkSprite;
      if ( !Value )
        goto LABEL_152;
      Value = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
      if ( !Value )
        goto LABEL_152;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 0, 0LL);
    }
  }
LABEL_102:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Value = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)Value & 1) == 0 )
    goto LABEL_122;
  if ( !script )
    goto LABEL_152;
  Value = (UILabel_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                         (System_Xml_XmlQualifiedName_o *)StringLiteral_16851/*"banners"*/,
                         (System_Xml_Schema_XmlSchemaObject_o **)&v126.name,
                         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)Value & 1) == 0 )
    goto LABEL_119;
  if ( !v126.name )
    goto LABEL_152;
  v97 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v126.name + 300LL) < (unsigned int)v97
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v126.name + 200LL) + 8 * v97 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_152;
  }
  v98 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v126.name + 300LL) >= (unsigned int)v98 )
    v99 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v126.name + 200LL) + 8 * v98 - 8) == System_Collections_Generic_List_object__TypeInfo
        ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v126.name
        : 0LL;
  else
    v99 = 0LL;
  v100 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         v99,
                                         (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_object__ToArray__);
  this->fields.banners = v100;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.banners,
    (System_Int32_array **)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  banners = this->fields.banners;
  if ( !banners || !*(_QWORD *)&banners->max_length )
  {
LABEL_119:
    Value = (UILabel_o *)this->fields.lnkTexture;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 0, 0LL);
LABEL_122:
    v108 = 1;
    goto LABEL_123;
  }
  v108 = 0;
LABEL_123:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v110 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Value = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v110 )
      goto LABEL_152;
    UILabel__set_text(v110, (System_String_o *)Value, 0LL);
    Value = this->fields.okBtnLabel;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v113 = NotificationDialog_TypeInfo;
    v114 = v111;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v113 = NotificationDialog_TypeInfo;
    }
    v115 = (float *)&v113->static_fields->BANNER_RETRY_MAX;
    v116 = v115[20];
    v117 = v115[21];
    v118 = v115[22];
    v133 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v111,
             script,
             (System_String_o *)StringLiteral_17379/*"buttonOffset"*/,
             v112);
    v133.fields.x = v116 + v133.fields.x;
    v133.fields.y = v117 + v133.fields.y;
    v133.fields.z = v118 + v133.fields.z;
    GameObjectExtensions__SetLocalPosition(v114, v133, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Value = (UILabel_o *)UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
  if ( ((unsigned __int8)Value & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !x )
      goto LABEL_152;
    UIPanel__set_depth((UIPanel_o *)x, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v108 )
  {
    v119 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v119, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v119, 0, 0LL);
  }
  else
  {
    Value = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Value )
      goto LABEL_152;
    CommonUI__SetLoadMode((CommonUI_o *)Value, 1, 0LL);
    Value = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Value )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 1, 0LL);
    Value = (UILabel_o *)this->fields.baseWindow;
    if ( !Value )
      goto LABEL_152;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 0, 0LL);
    v120 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v120, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v120, v121);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4352411 & 1) == 0 )
  {
    sub_B70694(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
    byte_4352411 = 1;
  }
  v3 = sub_B70764(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  NotificationDialog__StartDownloadBanner_d__54___ctor((NotificationDialog__StartDownloadBanner_d__54_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_4352415 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_NotificationDialog_EndOpen__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4352415 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__54_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  ManagementManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4352416 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4352416 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v7);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435240E & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_435240E = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B7076C(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = (Il2CppObject *)value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v6, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435240D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&string_TypeInfo);
    this = (NotificationDialog_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_435240D = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B7076C(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall NotificationDialog__getVectFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Xml_Schema_XmlSchemaObject_o *v6; // x20
  __int64 v7; // x10
  float v8; // s0
  float v9; // s1
  float v10; // s2
  Il2CppObject *v11; // x19
  double v12; // d8
  double v13; // d1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_435240C & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    byte_435240C = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B7076C(this, script);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0LL
    && (v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v7 - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value->fields.sourceUri) >= 2 )
  {
    v11 = *(Il2CppObject **)(*(_QWORD *)&value->fields.lineNum + 32LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v12 = System_Convert__ToDouble(v11, 0LL);
    if ( LODWORD(v6->fields.sourceUri) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v13 = System_Convert__ToDouble(*(Il2CppObject **)(*(_QWORD *)&v6->fields.lineNum + 40LL), 0LL);
    v8 = v12;
    v9 = v13;
    v10 = 0.0;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4352412 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15709/*"Window/OkBtn"*/);
    byte_4352412 = 1;
  }
  return (System_String_o *)StringLiteral_15709/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  if ( (byte_4350F06 & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_4350F06 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  NotificationDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  NotificationDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  NotificationDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (NotificationDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, isOk);
      if ( (sub_B706C4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isOk, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
        (*v17)(v19, isOk, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B08590(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isOk, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isOk,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isOk, v20);
    goto LABEL_37;
  }
}


void __fastcall NotificationDialog__StartDownloadBanner_d__54___ctor(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NotificationDialog__StartDownloadBanner_d__54__MoveNext(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *v8; // x20
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  bool v11; // w21
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v14; // x8
  __int64 v15; // x11
  System_Int32_array **v16; // x1
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v20; // x22
  UnityEngine_Object_o *texture; // x23
  System_String_o *v22; // x0
  bool IsNullOrEmpty; // w0
  int v24; // w20
  NotificationDialog_c *v25; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v27; // x22
  ErrorDialog_ClickDelegate_o *v28; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_o *v37; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Networking_DownloadHandlerTexture_o *v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x0
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v64; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v66; // x23
  NotificationDialog_c *v67; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v69; // s8
  float v70; // s9
  float v71; // s10
  double v72; // d3
  double v73; // d0
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v76; // w20
  System_String_o *StringFromScript; // x0
  __int64 v78; // x0
  MethodInfo v79; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_4350F05 & 1) == 0 )
  {
    sub_B70694(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_B70694(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_NotificationDialog__StartDownloadBanner_b__54_0__);
    sub_B70694(&NotificationDialog_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_B70694(&StringLiteral_16844/*"bannerUrl"*/);
    sub_B70694(&StringLiteral_22506/*"size"*/);
    sub_B70694(&StringLiteral_23342/*"urlOpenType"*/);
    sub_B70694(&StringLiteral_21541/*"offset"*/);
    sub_B70694(&StringLiteral_23341/*"urlLink"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_B70694(&StringLiteral_9404/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4350F05 = 1;
  }
  LODWORD(v79.invoker_method) = 0;
  v79.methodPointer = 0LL;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_77;
    p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__54_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_30;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_19;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_77;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_77;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_77;
      v20 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v8->fields._texDl_5__3,
                                          0LL);
    }
    else
    {
LABEL_19:
      texture = 0LL;
      v20 = 0LL;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0LL) )
    {
      goto LABEL_30;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_77;
    v22 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v22, 0LL);
    if ( !v20 || !IsNullOrEmpty || !v20->fields.__2__current )
      goto LABEL_30;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(texture, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_77;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this->fields.lnkTexture, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_77;
        v64 = (UnityEngine_GameObject_o *)this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_77;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent(v64, parent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v64, one, 0LL);
        if ( !v64 )
          goto LABEL_77;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v64,
                                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        if ( !_4__this->fields.additionalTextures )
          goto LABEL_77;
        lnkTexture = this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.additionalTextures,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_LinkableTexture__Add__);
      }
      if ( !lnkTexture )
        goto LABEL_77;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._banner_5__2;
      if ( !this )
        goto LABEL_77;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Object_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        texture,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_77;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v67 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v67 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v67->static_fields->BANNER_RETRY_MAX;
      v69 = p_BANNER_RETRY_MAX[17];
      v70 = p_BANNER_RETRY_MAX[18];
      v71 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         _4__this,
                         v8->fields._banner_5__2,
                         (System_String_o *)StringLiteral_21541/*"offset"*/,
                         0LL);
      VectFromScript.fields.x = v69 + VectFromScript.fields.x;
      VectFromScript.fields.y = v70 + VectFromScript.fields.y;
      VectFromScript.fields.z = v71 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v66, VectFromScript, 0LL);
      v82 = NotificationDialog__getVectFromScript(
              _4__this,
              v8->fields._banner_5__2,
              (System_String_o *)StringLiteral_22506/*"size"*/,
              0LL);
      v79.methodPointer = *(Il2CppMethodPointer *)&v82.fields.x;
      *(float *)&v79.invoker_method = v82.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      if ( UnityEngine_Vector3__Equals_51311332(zero, v84, &v79) )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        v72 = *(float *)&v79.methodPointer;
        v73 = -*((float *)&v79.methodPointer + 1);
        if ( *(float *)&v79.methodPointer == INFINITY )
          v72 = -*(float *)&v79.methodPointer;
        if ( *((float *)&v79.methodPointer + 1) != INFINITY )
          v73 = *((float *)&v79.methodPointer + 1);
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, (int)v72, (int)v73, 0LL);
      }
      IntFromScript = NotificationDialog__getIntFromScript(
                        _4__this,
                        v8->fields._banner_5__2,
                        (System_String_o *)StringLiteral_23342/*"urlOpenType"*/,
                        0LL);
      banner_5__2 = v8->fields._banner_5__2;
      v76 = IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           _4__this,
                           banner_5__2,
                           (System_String_o *)StringLiteral_23341/*"urlLink"*/,
                           0LL);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v76, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, 0LL);
    }
    else
    {
LABEL_30:
      v24 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v24;
      v25 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v25 = NotificationDialog_TypeInfo;
      }
      if ( v24 <= v25->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9404/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v28 = (ErrorDialog_ClickDelegate_o *)sub_B70764(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_77;
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v27, v28, 0, 0LL);
      }
    }
    v30 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v30 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v30, 0LL);
      *p_mBannerWWW = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW, 0LL, v31, v32, v33, v34, v35, v36);
    }
    return 0;
  }
  else
  {
    v11 = 0;
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      if ( _4__this )
      {
        banners = _4__this->fields.banners;
        if ( banners )
        {
          mLoadingIdx = _4__this->fields.mLoadingIdx;
          if ( (unsigned int)mLoadingIdx >= banners->max_length )
          {
            v78 = sub_B70798(this);
            sub_B70738(v78, 0LL);
          }
          v14 = banners->m_Items[mLoadingIdx];
          if ( v14
            && (v15 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
          {
            v16 = (System_Collections_Generic_Dictionary_string__object__c *)v14->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (System_Int32_array **)v14
                : 0LL;
          }
          else
          {
            v16 = 0LL;
          }
          v8->fields._banner_5__2 = (struct System_Collections_Generic_Dictionary_string__object__o *)v16;
          sub_B70630((BattleServantConfConponent_o *)&v8->fields._banner_5__2, v16, v2, v3, v4, v5, v6, v7);
          v37 = NotificationDialog__getStringFromScript(
                  _4__this,
                  v8->fields._banner_5__2,
                  (System_String_o *)StringLiteral_16844/*"bannerUrl"*/,
                  0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          WebViewFullAddress = NetworkManager__getWebViewFullAddress(v37, 0LL);
          v39 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B70764(UnityEngine_Networking_UnityWebRequest_TypeInfo);
          UnityEngine_Networking_UnityWebRequest___ctor(v39, WebViewFullAddress, 0LL);
          _4__this->fields.mBannerWWW = v39;
          sub_B70630(
            (BattleServantConfConponent_o *)&_4__this->fields.mBannerWWW,
            (System_Int32_array **)v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v46 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B70764(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
          UnityEngine_Networking_DownloadHandlerTexture___ctor(v46, 0, 0LL);
          v8->fields._texDl_5__3 = v46;
          sub_B70630(
            (BattleServantConfConponent_o *)&v8->fields._texDl_5__3,
            (System_Int32_array **)v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          if ( this )
          {
            UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
              0LL);
            this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
            v11 = 1;
            _4__this->fields.refuseInit = 1;
            if ( this )
            {
              v53 = (System_Int32_array **)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                             (UnityEngine_Networking_UnityWebRequest_o *)this,
                                             0LL);
              v8->fields.__2__current = (Il2CppObject *)v53;
              p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B70630(p__2__current, v53, v55, v56, v57, v58, v59, v60);
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
              return v11;
            }
          }
        }
      }
LABEL_77:
      sub_B7076C(this, method);
    }
  }
  return v11;
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NotificationDialog__StartDownloadBanner_d__54__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__54__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NotificationDialog__StartDownloadBanner_d__54__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  ;
}