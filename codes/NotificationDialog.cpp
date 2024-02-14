void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NotificationDialog_StaticFields *static_fields; // x9
  NotificationDialog_c *v3; // x8
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9
  struct NotificationDialog_StaticFields *v9; // x9

  if ( (byte_4215043 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_TypeInfo, v1);
    byte_4215043 = 1;
  }
  NotificationDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v3 = NotificationDialog_TypeInfo;
  v4 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v4->MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v5->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v6->MESSAGE_LINE_POS.fields.z = 0.0;
  v3->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v3->static_fields->MESSAGE_BASE_SIZE_Y = 295;
  v3->static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y = 344;
  v3->static_fields->MESSAGE_LINE_SIZE_Y = 265;
  v7 = v3->static_fields;
  v7->IMAGE_BASE_POS.fields.x = 0.0;
  *(_QWORD *)&v7->IMAGE_BASE_POS.fields.y = 0LL;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v8->BUTTON_BASE_POS.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v9->BUTTON_TEXT_POS.fields.z = 0.0;
  v3->static_fields->BUTTON_BASE_SIZE_X = 218;
  v3->static_fields->BUTTON_BASE_SIZE_Y = 56;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4215042 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4215042 = 1;
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int32_t mHeight; // w26
  float v33; // s10
  float v34; // s0
  double v35; // d0
  UnityEngine_Object_o *v36; // x27
  NotificationDialog_c *v37; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x0
  UIWidget_o *v43; // [xsp+0h] [xbp-80h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4215039 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, isNoTitle);
    sub_B0D8A4(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v23);
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v24);
    sub_B0D8A4(&System_Math_TypeInfo, v25);
    sub_B0D8A4(&NotificationDialog_TypeInfo, v26);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v27);
    sub_B0D8A4(&string_TypeInfo, v28);
    byte_4215039 = 1;
  }
  v43 = 0LL;
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
      if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
              (UnityEngine_GameObject_o *)baseWindow,
              &component,
              (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                     &v43,
                     (const MethodInfo_170EC50 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( (baseWindow & 1) != 0 )
      {
        if ( !component || !v43 )
          goto LABEL_49;
        mHeight = component->fields.mHeight;
        v33 = (float)((float)v43->fields.mHeight * 0.5) + buttonPosY;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v34 = fabsf((float)((float)mHeight * 0.5) + -30.0) + fabsf(v33);
        y = v33 + (float)(v34 * 0.5);
        if ( v34 == INFINITY )
          v35 = -v34;
        else
          v35 = v34;
        messageSizeY = (int)v35;
      }
      else
      {
LABEL_29:
        v37 = NotificationDialog_TypeInfo;
        if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v37 = NotificationDialog_TypeInfo;
        }
        static_fields = v37->static_fields;
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
  v36 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
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
    sub_B0D97C(baseWindow);
  }
  baseWindow = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !baseWindow )
    goto LABEL_49;
  if ( !*(_DWORD *)(baseWindow + 24) )
  {
    v42 = sub_B0D9A8(baseWindow);
    sub_B0D948(v42, 0LL);
  }
  *(_WORD *)(baseWindow + 32) = 10;
  baseWindow = (__int64)System_String__Trim(message, (System_Char_array *)baseWindow, 0LL);
  Empty = (System_String_o *)baseWindow;
  if ( !messageLabel )
    goto LABEL_49;
LABEL_39:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v40 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v40 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v40->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v45, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  struct UILabel_o *v22; // x24
  UILabel_o *messageLabel; // x0
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v26; // x25
  System_String_o *v27; // x23
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_421503A & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, isNoTitle);
    sub_B0D8A4(&NotificationDialog_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&string_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_20544/*"messageOffset"*/, v20);
    byte_421503A = 1;
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
      v22 = this->fields.noTitleMessageLabel;
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
  v22 = this->fields.messageLabel;
  v26 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
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
    messageLabel = (UILabel_o *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !messageLabel )
      goto LABEL_30;
    if ( !LODWORD(messageLabel->fields.leftAnchor) )
    {
      v30 = sub_B0D9A8(messageLabel);
      sub_B0D948(v30, 0LL);
    }
    LOWORD(messageLabel->fields.rightAnchor) = 10;
    v27 = System_String__Trim(message, (System_Char_array *)messageLabel, 0LL);
  }
  else
  {
    v27 = string_TypeInfo->static_fields->Empty;
  }
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  }
  if ( !v22 )
LABEL_30:
    sub_B0D97C(messageLabel);
  UIWidget__SetDimensions(
    (UIWidget_o *)v22,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v22, maxLine, 0LL);
  UILabel__set_fontSize(v22, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v22, v27, v22->fields.mFontSize, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     (NotificationDialog_o *)gameObject,
                     script,
                     (System_String_o *)StringLiteral_20544/*"messageOffset"*/,
                     v29);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition(gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_25553012(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_25553012(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20

  if ( (byte_421503E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_NotificationDialog_EndClose__, v10);
    byte_421503E = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D840(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x1
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  struct LinkableTexture_o *v29; // x8
  UnityEngine_Object_o *v30; // x20
  struct LinkableTexture_o *v31; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x21
  __int64 v34; // x23
  int size; // w8
  UnityEngine_Object_o *gameObject; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x21
  __int64 v48; // x23
  int v49; // w8
  unsigned int v50; // w24
  __int64 v51; // x8
  UnityEngine_Object_o *v52; // x21
  struct System_Collections_Generic_List_LinkableTexture__o *v53; // x21
  UnityEngine_Object_o *v54; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_4215035 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4215035 = 1;
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
    v15 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v20, v21, v22, v23, v24, v25);
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
      v29 = this->fields.lnkTexture;
      if ( !v29 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v29->fields.mCollider;
      if ( !titleLabel )
        goto LABEL_77;
      v30 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                      titleLabel,
                                      titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v30, 0LL);
      v31 = this->fields.lnkTexture;
      if ( !v31 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v31->fields.mCollider;
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
      v34 = 0LL;
      while ( 1 )
      {
        size = additionalSprites->fields._size;
        if ( (int)v34 >= size )
          break;
        if ( size <= (unsigned int)v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        titleLabel = (UILabel_o *)additionalSprites->fields._items->m_Items[v34];
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
          UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
          additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalSprites;
          ++v34;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_77;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalSprites,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    }
    else
    {
      v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_LinkableSprite__TypeInfo, v27, v28);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v39,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v39;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.additionalSprites,
        (System_Int32_array **)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
    if ( additionalTextures )
    {
      v48 = 4LL;
      while ( 1 )
      {
        v49 = additionalTextures->fields._size;
        v50 = v48 - 4;
        if ( (int)v48 - 4 >= v49 )
          break;
        if ( v49 <= v50 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v51 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v48);
        if ( v51 )
        {
          titleLabel = *(UILabel_o **)(v51 + 40);
          if ( titleLabel )
          {
            v52 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                            titleLabel,
                                            titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_34935276(v52, 0LL);
            v53 = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              if ( v53->fields._size <= v50 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              titleLabel = (UILabel_o *)*((_QWORD *)&v53->fields._items->obj.klass + v48);
              if ( titleLabel )
              {
                v54 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_34935276(v54, 0LL);
                additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalTextures;
                ++v48;
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
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    }
    else
    {
      v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_LinkableTexture__TypeInfo, v37, v38);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v55,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v55;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.additionalTextures,
        (System_Int32_array **)v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_77:
    sub_B0D97C(titleLabel);
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
  sub_B0D840(
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_B0D97C(this);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t onClickOkSeKind; // w20
  NotificationDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_421503F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421503F = 1;
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
  __int64 v30; // x1
  __int64 v31; // x1
  float value; // s8
  NotificationDialog_c *v33; // x0
  int32_t v34; // w20
  NotificationDialog_ClickDelegate_o *v35; // x22
  System_String_o *v36; // x24
  bool v37; // w27
  int32_t v38; // w26
  float y; // s1
  NotificationDialog_c *v40; // x0
  int32_t v41; // w20
  NotificationDialog_ClickDelegate_o *v42; // x22
  System_String_o *v43; // x24
  bool v44; // w27
  System_Nullable_int__o v45; // x21
  int32_t v46; // w26
  System_String_o *v47; // [xsp+10h] [xbp-90h]
  int32_t v48; // [xsp+10h] [xbp-90h]
  int32_t v49; // [xsp+10h] [xbp-90h]
  NotificationDialog_ClickDelegate_o *v50; // [xsp+18h] [xbp-88h]
  int32_t v51; // [xsp+18h] [xbp-88h]
  int32_t v52; // [xsp+18h] [xbp-88h]
  int32_t v53; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v54; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v55; // [xsp+20h] [xbp-80h]
  System_Nullable_float__o v56; // [xsp+28h] [xbp-78h]
  System_String_o *titlea; // [xsp+30h] [xbp-70h]
  System_String_o *titleb; // [xsp+30h] [xbp-70h]
  System_String_o *titlec; // [xsp+30h] [xbp-70h]
  bool v60; // [xsp+3Ch] [xbp-64h]
  bool v61; // [xsp+3Ch] [xbp-64h]
  bool v62; // [xsp+3Ch] [xbp-64h]
  int32_t v63; // [xsp+48h] [xbp-58h]
  int32_t v64; // [xsp+48h] [xbp-58h]
  int32_t v65; // [xsp+48h] [xbp-58h]
  int32_t v66; // [xsp+4Ch] [xbp-54h]
  int32_t v67; // [xsp+4Ch] [xbp-54h]
  int32_t v68; // [xsp+4Ch] [xbp-54h]

  v21 = buttonWidgetSizeY;
  v20 = buttonPosY;
  v22 = buttonWidgetSizeX;
  v23 = adjustText;
  v24 = messageWidgetSizeY;
  v25 = spacingY;
  v26 = titlePosY;
  v27 = onClickOkSeKind;
  v28 = messageFontSize;
  if ( (byte_4215036 & 1) == 0 )
  {
    v63 = panelDepth;
    v66 = titleSize;
    v53 = maxLine;
    v47 = message;
    v50 = func;
    v60 = isLineDraw;
    titlea = title;
    sub_B0D8A4(&NotificationDialog_TypeInfo, title);
    sub_B0D8A4(&Method_System_Nullable_float__GetValueOrDefault__, v30);
    sub_B0D8A4(&Method_System_Nullable_float__get_HasValue__, v31);
    v22 = buttonWidgetSizeX;
    v20 = buttonPosY;
    title = titlea;
    v23 = adjustText;
    message = v47;
    func = v50;
    isLineDraw = v60;
    panelDepth = v63;
    titleSize = v66;
    maxLine = v53;
    v28 = messageFontSize;
    v27 = onClickOkSeKind;
    v26 = titlePosY;
    v25 = spacingY;
    v24 = messageWidgetSizeY;
    byte_4215036 = 1;
  }
  if ( (*(_QWORD *)&messagePosY & 0xFF00000000LL) != 0 )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v33 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v64 = panelDepth;
      v67 = titleSize;
      v56 = v20;
      titleb = title;
      v34 = maxLine;
      v35 = func;
      v61 = isLineDraw;
      v36 = message;
      v37 = v23;
      v54 = v22;
      v51 = v25;
      v48 = v27;
      v38 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v48;
      v25 = v51;
      title = titleb;
      isLineDraw = v61;
      panelDepth = v64;
      titleSize = v67;
      maxLine = v34;
      v22 = v54;
      v20 = v56;
      v33 = NotificationDialog_TypeInfo;
      v28 = v38;
      v21 = buttonWidgetSizeY;
      v23 = v37;
      message = v36;
      func = v35;
    }
    value = v33->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( (*(_QWORD *)&v20 & 0xFF00000000LL) != 0 )
  {
    y = v20.fields.value;
  }
  else
  {
    v40 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v65 = panelDepth;
      v68 = titleSize;
      v41 = maxLine;
      v42 = func;
      v62 = isLineDraw;
      v43 = message;
      titlec = title;
      v44 = v23;
      v45 = v21;
      v55 = v22;
      v52 = v25;
      v49 = v27;
      v46 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v49;
      v25 = v52;
      v22 = v55;
      title = titlec;
      isLineDraw = v62;
      panelDepth = v65;
      titleSize = v68;
      v40 = NotificationDialog_TypeInfo;
      v28 = v46;
      v21 = v45;
      v23 = v44;
      message = v43;
      func = v42;
      maxLine = v41;
    }
    y = v40->static_fields->BUTTON_BASE_POS.fields.y;
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  UIPanel_o *TargetPanel; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v49; // x23
  UILabel_o *transform; // x0
  UnityEngine_Object_o *titleLabel; // x24
  System_String_o *v52; // x1
  NotificationDialog_c *v53; // x0
  float *p_BANNER_RETRY_MAX; // x8
  float v55; // s11
  float v56; // s10
  float y; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v59; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s10
  float z; // s11
  UnityEngine_Object_o *lineSprite; // x20
  NotificationDialog_c *v64; // x0
  struct NotificationDialog_StaticFields *v65; // x8
  UnityEngine_Object_o *messageLabel; // x20
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  NotificationDialog_c *v71; // x0
  struct NotificationDialog_StaticFields *v72; // x8
  UILabel_o *v73; // x20
  float v74; // s10
  float v75; // s9
  float v76; // s13
  float v77; // s11
  float v78; // s12
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x20
  UIWidget_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v83; // x20
  int method_ptr; // w22
  int32_t keepPanelDepth; // w1
  __int64 v86; // x1
  __int64 v87; // x2
  System_Action_o *v88; // x19
  const MethodInfo *v89; // [xsp+0h] [xbp-C0h]
  int value; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  value = buttonWidgetSizeY.fields.value;
  MESSAGE_BASE_SIZE_Y = messageWidgetSizeY.fields.value;
  if ( (byte_4215037 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v29);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v30);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v31);
    sub_B0D8A4(&Method_NotificationDialog_EndOpen__, v32);
    sub_B0D8A4(&NotificationDialog_TypeInfo, v33);
    sub_B0D8A4(&Method_System_Nullable_int__GetValueOrDefault__, v34);
    sub_B0D8A4(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_B0D8A4(&Method_System_Nullable_int__get_HasValue__, v36);
    sub_B0D8A4(&Method_System_Nullable_float__get_HasValue__, v37);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v38);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B0D8A4(&StringLiteral_1/*""*/, v40);
    byte_4215037 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v49 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_122;
      this->fields.keepPanelDepth = v49->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
      v52 = title;
    else
      v52 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v52, 0LL);
    v53 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v53 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v53->static_fields->BANNER_RETRY_MAX;
    v55 = p_BANNER_RETRY_MAX[1];
    v56 = p_BANNER_RETRY_MAX[3];
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
    {
      y = titlePosY.fields.value;
    }
    else
    {
      y = p_BANNER_RETRY_MAX[2];
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        y = NotificationDialog_TypeInfo->static_fields->TITLE_BASE_POS.fields.y;
      }
    }
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_122;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v93.fields.x = v55;
    v93.fields.y = y;
    v93.fields.z = v56;
    GameObjectExtensions__SetLocalPosition(gameObject, v93, 0LL);
  }
  v59 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v59 = NotificationDialog_TypeInfo;
  }
  static_fields = v59->static_fields;
  x = static_fields->MESSAGE_BASE_POS.fields.x;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  if ( static_fields->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = static_fields->MESSAGE_BASE_POS.fields.y;
  if ( (*(_QWORD *)&messageWidgetSizeY & 0xFF00000000LL) == 0 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
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
      v64 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v64 = NotificationDialog_TypeInfo;
      }
      v65 = v64->static_fields;
      x = v65->MESSAGE_LINE_POS.fields.x;
      messagePosY = v65->MESSAGE_LINE_POS.fields.y;
      z = v65->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v65->MESSAGE_LINE_SIZE_Y;
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
    v94.fields.x = x;
    v94.fields.y = messagePosY;
    v94.fields.z = z;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      MESSAGE_BASE_SIZE_Y,
      maxLine,
      messageFontSize,
      adjustText,
      v94,
      buttonPosY,
      v89);
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
    v71 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v71 = NotificationDialog_TypeInfo;
    }
    v72 = v71->static_fields;
    v73 = this->fields.okBtnLabel;
    v74 = v72->BUTTON_BASE_POS.fields.x;
    v75 = v72->BUTTON_BASE_POS.fields.z;
    v76 = v72->BUTTON_TEXT_POS.fields.x;
    v78 = v72->BUTTON_TEXT_POS.fields.y;
    v77 = v72->BUTTON_TEXT_POS.fields.z;
    if ( v72->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v72->BUTTON_BASE_POS.fields.y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v73 )
      goto LABEL_122;
    UILabel__set_text(v73, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v95.fields.x = v76;
    v95.fields.y = v78;
    v95.fields.z = v77;
    GameObjectExtensions__SetLocalPosition(v79, v95, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v96.fields.x = v74;
    v96.fields.y = buttonPosY;
    v96.fields.z = v75;
    GameObjectExtensions__SetLocalPosition(v80, v96, 0LL);
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
    v81 = (UnityEngine_GameObject_o *)transform;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)transform,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v83 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v81,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
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
        if ( !v83 )
          goto LABEL_122;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v83, 0LL);
        size.fields.x = (float)method_ptr;
        size.fields.y = (float)value;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v83, size, 0LL);
      }
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( v49 )
    {
      UIPanel__set_depth(v49, keepPanelDepth, 0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B0D97C(transform);
  }
LABEL_121:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v88 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v86, v87);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0LL);
}


void __fastcall NotificationDialog__Open_25547356(
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


void __fastcall NotificationDialog__Open_25548444(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  UIPanel_o *TargetPanel; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v51; // x21
  UILabel_o *Value; // x0
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v56; // x3
  UnityEngine_GameObject_o *v57; // x26
  NotificationDialog_c *v58; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v60; // s8
  float v61; // s9
  float v62; // s10
  NotificationDialog_c *v63; // x0
  float *v64; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v66; // s8
  float v67; // s9
  float v68; // s10
  int32_t v69; // w26
  NotificationDialog_c *v70; // x0
  float *v71; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v74; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v76; // x11
  __int64 v77; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v78; // x0
  struct System_Object_array *v79; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct System_Object_array *sprites; // x8
  __int64 v88; // x9
  struct LinkableSprite_o *v89; // x24
  unsigned __int64 v90; // x21
  UnityEngine_GameObject_o *v91; // x24
  UnityEngine_GameObject_o *v92; // x24
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_Dictionary_string__object__o *v94; // x8
  __int64 v95; // x11
  System_Collections_Generic_Dictionary_string__object__o *v96; // x25
  UnityEngine_GameObject_o *v97; // x0
  UISprite_o *mCollider; // x27
  UnityEngine_GameObject_o *v99; // x26
  const MethodInfo *v100; // x3
  System_String_o *StringFromScript; // x28
  UnityEngine_GameObject_o *v102; // x0
  const MethodInfo *v103; // x3
  NotificationDialog_c *v104; // x8
  UnityEngine_GameObject_o *v105; // x26
  float *v106; // x8
  float v107; // s9
  float v108; // s10
  float v109; // s11
  NotificationDialog_o *v110; // x0
  const MethodInfo *v111; // x3
  NotificationDialog_o *v112; // x0
  const MethodInfo *v113; // x3
  double v114; // d2
  double v115; // d0
  NotificationDialog_o *IntFromScript; // x0
  int32_t v117; // w26
  const MethodInfo *v118; // x3
  System_String_o *v119; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v121; // x11
  __int64 v122; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v123; // x0
  struct System_Object_array *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct System_Object_array *banners; // x8
  int v132; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v134; // x23
  UnityEngine_GameObject_o *v135; // x0
  const MethodInfo *v136; // x3
  NotificationDialog_c *v137; // x8
  UnityEngine_GameObject_o *v138; // x23
  float *v139; // x8
  float v140; // s8
  float v141; // s9
  float v142; // s10
  int32_t keepPanelDepth; // w1
  __int64 v144; // x1
  __int64 v145; // x2
  System_Action_o *v146; // x20
  __int64 v147; // x1
  __int64 v148; // x2
  System_Action_o *v149; // x20
  const MethodInfo *v150; // x2
  __int64 v151; // x0
  UnityEngine_Object_o *x; // [xsp+8h] [xbp-98h]
  MethodInfo v155; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4215038 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&AtlasManager_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v19);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v20);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ToArray__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v24);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v25);
    sub_B0D8A4(&Method_NotificationDialog_EndOpen__, v26);
    sub_B0D8A4(&Method_NotificationDialog__Open_b__42_0__, v27);
    sub_B0D8A4(&NotificationDialog_TypeInfo, v28);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v29);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v30);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B0D8A4(&StringLiteral_16656/*"banners"*/, v32);
    sub_B0D8A4(&StringLiteral_22209/*"size"*/, v33);
    sub_B0D8A4(&StringLiteral_23041/*"urlOpenType"*/, v34);
    sub_B0D8A4(&StringLiteral_21268/*"offset"*/, v35);
    sub_B0D8A4(&StringLiteral_22781/*"titleOffset"*/, v36);
    sub_B0D8A4(&StringLiteral_22307/*"spriteName"*/, v37);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v38);
    sub_B0D8A4(&StringLiteral_23040/*"urlLink"*/, v39);
    sub_B0D8A4(&StringLiteral_17174/*"buttonOffset"*/, v40);
    sub_B0D8A4(&StringLiteral_1/*""*/, v41);
    sub_B0D8A4(&StringLiteral_22308/*"sprites"*/, v42);
    byte_4215038 = 1;
  }
  v155.name = 0LL;
  LODWORD(v155.invoker_method) = 0;
  v155.methodPointer = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v51 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Value = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL);
    if ( ((unsigned __int8)Value & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_152;
      this->fields.keepPanelDepth = v51->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  x = (UnityEngine_Object_o *)v51;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
    v54 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(Value, v54, 0LL);
    Value = this->fields.titleLabel;
    if ( !Value )
      goto LABEL_152;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v57 = gameObject;
    v58 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v58 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v58->static_fields->BANNER_RETRY_MAX;
    v60 = p_BANNER_RETRY_MAX[1];
    v61 = p_BANNER_RETRY_MAX[2];
    v62 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       (NotificationDialog_o *)gameObject,
                       script,
                       (System_String_o *)StringLiteral_22781/*"titleOffset"*/,
                       v56);
    VectFromScript.fields.x = v60 + VectFromScript.fields.x;
    VectFromScript.fields.y = v61 + VectFromScript.fields.y;
    VectFromScript.fields.z = v62 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v57, VectFromScript, 0LL);
  }
  v63 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v63 = NotificationDialog_TypeInfo;
  }
  v64 = (float *)&v63->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v66 = v64[4];
  v67 = v64[5];
  v68 = v64[6];
  v69 = *((_DWORD *)v64 + 14);
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
      v70 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v70 = NotificationDialog_TypeInfo;
      }
      v71 = (float *)&v70->static_fields->BANNER_RETRY_MAX;
      v66 = v71[10];
      v67 = v71[11];
      v68 = v71[12];
      v69 = *((_DWORD *)v71 + 16);
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
    v157.fields.x = v66;
    v157.fields.y = v67;
    v157.fields.z = v68;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v69, maxLine, v157, script, v74);
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
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22308/*"sprites"*/,
                           (System_Xml_Schema_XmlSchemaObject_o **)&v155.name,
                           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)Value & 1) == 0 )
      goto LABEL_99;
    if ( !v155.name )
      goto LABEL_152;
    v76 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v155.name + 300LL) < (unsigned int)v76
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v155.name + 200LL) + 8 * v76 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_152;
    }
    v77 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v155.name + 300LL) >= (unsigned int)v77 )
      v78 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v155.name + 200LL) + 8 * v77 - 8) == System_Collections_Generic_List_object__TypeInfo
          ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v155.name
          : 0LL;
    else
      v78 = 0LL;
    v79 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v78,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v79;
    p_sprites = &this->fields.sprites;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.sprites,
      (System_Int32_array **)v79,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    sprites = this->fields.sprites;
    if ( sprites && (v88 = *(_QWORD *)&sprites->max_length) != 0 )
    {
      if ( (int)v88 >= 1 )
      {
        v89 = this->fields.lnkSprite;
        v90 = 0LL;
        while ( 1 )
        {
          if ( v90 )
          {
            Value = (UILabel_o *)this->fields.lnkSprite;
            if ( !Value )
              break;
            v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Value = (UILabel_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v91,
                                   (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v92 = (UnityEngine_GameObject_o *)Value;
            Value = (UILabel_o *)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.lnkSprite,
                                   0LL);
            if ( !Value )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
            GameObjectExtensions__SetParent(v92, parent, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v92, one, 0LL);
            if ( !v92 )
              break;
            Value = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v92,
                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            if ( !this->fields.additionalSprites )
              break;
            v89 = (struct LinkableSprite_o *)Value;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.additionalSprites,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Value,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LinkableSprite__Add__);
            sprites = *p_sprites;
            if ( !*p_sprites )
              break;
          }
          if ( v90 >= sprites->max_length )
          {
            v151 = sub_B0D9A8(Value);
            sub_B0D948(v151, 0LL);
          }
          v94 = (System_Collections_Generic_Dictionary_string__object__o *)sprites->m_Items[v90];
          if ( v94
            && (v95 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v94->klass->_2.bitflags2 + 1) >= (unsigned int)v95) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v94->klass->_2.typeHierarchy[v95 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v96 = v94;
            else
              v96 = 0LL;
            if ( !v89 )
              break;
          }
          else
          {
            v96 = 0LL;
            if ( !v89 )
              break;
          }
          v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89, 0LL);
          mCollider = (UISprite_o *)v89->fields.mCollider;
          v99 = v97;
          StringFromScript = NotificationDialog__getStringFromScript(
                               (NotificationDialog_o *)v97,
                               v96,
                               (System_String_o *)StringLiteral_22307/*"spriteName"*/,
                               v100);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Value = (UILabel_o *)AtlasManager__SetEventUI(mCollider, StringFromScript, 0LL);
          if ( !v99 )
            break;
          UnityEngine_GameObject__SetActive(v99, (unsigned __int8)Value & 1, 0LL);
          v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89, 0LL);
          v104 = NotificationDialog_TypeInfo;
          v105 = v102;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v104 = NotificationDialog_TypeInfo;
          }
          v106 = (float *)&v104->static_fields->BANNER_RETRY_MAX;
          v107 = v106[17];
          v108 = v106[18];
          v109 = v106[19];
          v159 = NotificationDialog__getVectFromScript(
                   (NotificationDialog_o *)v102,
                   v96,
                   (System_String_o *)StringLiteral_21268/*"offset"*/,
                   v103);
          v159.fields.x = v107 + v159.fields.x;
          v159.fields.y = v108 + v159.fields.y;
          v159.fields.z = v109 + v159.fields.z;
          GameObjectExtensions__SetLocalPosition(v105, v159, 0LL);
          v160 = NotificationDialog__getVectFromScript(v110, v96, (System_String_o *)StringLiteral_22209/*"size"*/, v111);
          v155.methodPointer = *(Il2CppMethodPointer *)&v160.fields.x;
          *(float *)&v155.invoker_method = v160.fields.z;
          zero = UnityEngine_Vector3__get_zero(0LL);
          if ( UnityEngine_Vector3__Equals_50287060(zero, v163, &v155) )
          {
            LinkableSprite__MakePixelPerfect(v89, 0LL);
          }
          else
          {
            v114 = *(float *)&v155.methodPointer;
            v115 = *((float *)&v155.methodPointer + 1);
            if ( *(float *)&v155.methodPointer == INFINITY )
              v114 = -INFINITY;
            if ( *((float *)&v155.methodPointer + 1) == INFINITY )
              v115 = -INFINITY;
            LinkableSprite__SetSize(v89, (int)v114, (int)v115, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v112,
                                                    v96,
                                                    (System_String_o *)StringLiteral_23041/*"urlOpenType"*/,
                                                    v113);
          v117 = (int)IntFromScript;
          v119 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v96,
                   (System_String_o *)StringLiteral_23040/*"urlLink"*/,
                   v118);
          LinkableSprite__SetUp(v89, v117, v119, 0LL);
          sprites = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( (__int64)++v90 >= (int)sprites->max_length )
            goto LABEL_102;
        }
LABEL_152:
        sub_B0D97C(Value);
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
                         (System_Xml_XmlQualifiedName_o *)StringLiteral_16656/*"banners"*/,
                         (System_Xml_Schema_XmlSchemaObject_o **)&v155.name,
                         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)Value & 1) == 0 )
    goto LABEL_119;
  if ( !v155.name )
    goto LABEL_152;
  v121 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v155.name + 300LL) < (unsigned int)v121
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v155.name + 200LL) + 8 * v121 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_152;
  }
  v122 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v155.name + 300LL) >= (unsigned int)v122 )
    v123 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v155.name + 200LL) + 8 * v122 - 8) == System_Collections_Generic_List_object__TypeInfo
         ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v155.name
         : 0LL;
  else
    v123 = 0LL;
  v124 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         v123,
                                         (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_object__ToArray__);
  this->fields.banners = v124;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.banners,
    (System_Int32_array **)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
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
    v132 = 1;
    goto LABEL_123;
  }
  v132 = 0;
LABEL_123:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v134 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Value = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v134 )
      goto LABEL_152;
    UILabel__set_text(v134, (System_String_o *)Value, 0LL);
    Value = this->fields.okBtnLabel;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    v135 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v137 = NotificationDialog_TypeInfo;
    v138 = v135;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v137 = NotificationDialog_TypeInfo;
    }
    v139 = (float *)&v137->static_fields->BANNER_RETRY_MAX;
    v140 = v139[20];
    v141 = v139[21];
    v142 = v139[22];
    v162 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v135,
             script,
             (System_String_o *)StringLiteral_17174/*"buttonOffset"*/,
             v136);
    v162.fields.x = v140 + v162.fields.x;
    v162.fields.y = v141 + v162.fields.y;
    v162.fields.z = v142 + v162.fields.z;
    GameObjectExtensions__SetLocalPosition(v138, v162, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Value = (UILabel_o *)UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
  if ( ((unsigned __int8)Value & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( !x )
      goto LABEL_152;
    UIPanel__set_depth((UIPanel_o *)x, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v132 )
  {
    v146 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v144, v145);
    System_Action___ctor(v146, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v146, 0, 0LL);
  }
  else
  {
    Value = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v149 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v147, v148);
    System_Action___ctor(v149, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v149, v150);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4215040 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method);
    byte_4215040 = 1;
  }
  v4 = sub_B0D974(NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method, v2);
  NotificationDialog__StartDownloadBanner_d__54___ctor((NotificationDialog__StartDownloadBanner_d__54_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_4215044 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_NotificationDialog_EndOpen__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4215044 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(baseWindow);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__54_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  ManagementManager_o *Instance; // x0

  if ( (byte_4215045 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4215045 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421503D & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_B0D8A4(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_421503D = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B0D97C(this);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = (Il2CppObject *)value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v7, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421503C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_B0D8A4(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_421503C = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B0D97C(this);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Xml_Schema_XmlSchemaObject_o *v10; // x20
  __int64 v11; // x10
  float v12; // s0
  float v13; // s1
  float v14; // s2
  Il2CppObject *v15; // x19
  double v16; // d8
  double v17; // d1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421503B & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, script);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_421503B = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B0D97C(this);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v10 = value) != 0LL
    && (v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v11 - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value->fields.sourceUri) >= 2 )
  {
    v15 = *(Il2CppObject **)(*(_QWORD *)&value->fields.lineNum + 32LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v16 = System_Convert__ToDouble(v15, 0LL);
    if ( LODWORD(v10->fields.sourceUri) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v17 = System_Convert__ToDouble(*(Il2CppObject **)(*(_QWORD *)&v10->fields.lineNum + 40LL), 0LL);
    v12 = v16;
    v13 = v17;
    v14 = 0.0;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4215041 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15535/*"Window/OkBtn"*/, method);
    byte_4215041 = 1;
  }
  return (System_String_o *)StringLiteral_15535/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_421215F & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isOk);
    byte_421215F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  NotificationDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  NotificationDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  NotificationDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (NotificationDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isOk, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isOk, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isOk,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isOk, v21);
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
  NotificationDialog__StartDownloadBanner_d__54_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  bool v24; // w21
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v27; // x8
  __int64 v28; // x11
  struct System_Collections_Generic_Dictionary_string__object__o *v29; // x1
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v33; // x22
  UnityEngine_Object_o *texture; // x23
  System_String_o *v35; // x0
  bool IsNullOrEmpty; // w0
  int v37; // w20
  NotificationDialog_c *v38; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  ErrorDialog_ClickDelegate_o *v43; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v45; // x0
  System_String_o *v46; // x21
  System_String_o *WebViewFullAddress; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  UnityEngine_Networking_UnityWebRequest_o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_Networking_DownloadHandlerTexture_o *v53; // x22
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v54; // x0
  Il2CppObject **p__2__current; // x20
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v59; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v61; // x23
  NotificationDialog_c *v62; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v64; // s8
  float v65; // s9
  float v66; // s10
  double v67; // d3
  double v68; // d0
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v71; // w20
  System_String_o *StringFromScript; // x0
  __int64 v73; // x0
  MethodInfo v74; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_421215E & 1) == 0 )
  {
    sub_B0D8A4(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v9);
    sub_B0D8A4(&NotificationDialog_TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B0D8A4(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_16649/*"bannerUrl"*/, v15);
    sub_B0D8A4(&StringLiteral_22209/*"size"*/, v16);
    sub_B0D8A4(&StringLiteral_23041/*"urlOpenType"*/, v17);
    sub_B0D8A4(&StringLiteral_21268/*"offset"*/, v18);
    sub_B0D8A4(&StringLiteral_23040/*"urlLink"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_B0D8A4(&StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v21);
    byte_421215E = 1;
  }
  LODWORD(v74.invoker_method) = 0;
  v74.methodPointer = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
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
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v2->fields._texDl_5__3;
      if ( !this )
        goto LABEL_77;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v2->fields._texDl_5__3 )
        goto LABEL_77;
      v33 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v2->fields._texDl_5__3,
                                          0LL);
    }
    else
    {
LABEL_19:
      texture = 0LL;
      v33 = 0LL;
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
    v35 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v35, 0LL);
    if ( !v33 || !IsNullOrEmpty || !v33->fields.__2__current )
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
                                                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_77;
        v59 = (UnityEngine_GameObject_o *)this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_77;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent(v59, parent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v59, one, 0LL);
        if ( !v59 )
          goto LABEL_77;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v59,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        if ( !_4__this->fields.additionalTextures )
          goto LABEL_77;
        lnkTexture = this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.additionalTextures,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LinkableTexture__Add__);
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
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v62 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v62 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v62->static_fields->BANNER_RETRY_MAX;
      v64 = p_BANNER_RETRY_MAX[17];
      v65 = p_BANNER_RETRY_MAX[18];
      v66 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         _4__this,
                         v2->fields._banner_5__2,
                         (System_String_o *)StringLiteral_21268/*"offset"*/,
                         0LL);
      VectFromScript.fields.x = v64 + VectFromScript.fields.x;
      VectFromScript.fields.y = v65 + VectFromScript.fields.y;
      VectFromScript.fields.z = v66 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v61, VectFromScript, 0LL);
      v77 = NotificationDialog__getVectFromScript(
              _4__this,
              v2->fields._banner_5__2,
              (System_String_o *)StringLiteral_22209/*"size"*/,
              0LL);
      v74.methodPointer = *(Il2CppMethodPointer *)&v77.fields.x;
      *(float *)&v74.invoker_method = v77.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      if ( UnityEngine_Vector3__Equals_50287060(zero, v79, &v74) )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        v67 = *(float *)&v74.methodPointer;
        v68 = -*((float *)&v74.methodPointer + 1);
        if ( *(float *)&v74.methodPointer == INFINITY )
          v67 = -*(float *)&v74.methodPointer;
        if ( *((float *)&v74.methodPointer + 1) != INFINITY )
          v68 = *((float *)&v74.methodPointer + 1);
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, (int)v67, (int)v68, 0LL);
      }
      IntFromScript = NotificationDialog__getIntFromScript(
                        _4__this,
                        v2->fields._banner_5__2,
                        (System_String_o *)StringLiteral_23041/*"urlOpenType"*/,
                        0LL);
      banner_5__2 = v2->fields._banner_5__2;
      v71 = IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           _4__this,
                           banner_5__2,
                           (System_String_o *)StringLiteral_23040/*"urlLink"*/,
                           0LL);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v71, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, 0LL);
    }
    else
    {
LABEL_30:
      v37 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v37;
      v38 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v38 = NotificationDialog_TypeInfo;
      }
      if ( v37 <= v38->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9317/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v43 = (ErrorDialog_ClickDelegate_o *)sub_B0D974(ErrorDialog_ClickDelegate_TypeInfo, v41, v42);
        ErrorDialog_ClickDelegate___ctor(
          v43,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_77;
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v40, v43, 0, 0LL);
      }
    }
    v45 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v45 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v45, 0LL);
      *p_mBannerWWW = 0LL;
      sub_B0D840(&_4__this->fields.mBannerWWW, 0LL);
    }
    return 0;
  }
  else
  {
    v24 = 0;
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( _4__this )
      {
        banners = _4__this->fields.banners;
        if ( banners )
        {
          mLoadingIdx = _4__this->fields.mLoadingIdx;
          if ( (unsigned int)mLoadingIdx >= banners->max_length )
          {
            v73 = sub_B0D9A8(this);
            sub_B0D948(v73, 0LL);
          }
          v27 = banners->m_Items[mLoadingIdx];
          if ( v27
            && (v28 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
          {
            v29 = (System_Collections_Generic_Dictionary_string__object__c *)v27->klass->_2.typeHierarchy[v28 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v27
                : 0LL;
          }
          else
          {
            v29 = 0LL;
          }
          v2->fields._banner_5__2 = v29;
          sub_B0D840(&v2->fields._banner_5__2, v29);
          v46 = NotificationDialog__getStringFromScript(
                  _4__this,
                  v2->fields._banner_5__2,
                  (System_String_o *)StringLiteral_16649/*"bannerUrl"*/,
                  0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          WebViewFullAddress = NetworkManager__getWebViewFullAddress(v46, 0LL);
          v50 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B0D974(
                                                              UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                              v48,
                                                              v49);
          UnityEngine_Networking_UnityWebRequest___ctor(v50, WebViewFullAddress, 0LL);
          _4__this->fields.mBannerWWW = v50;
          sub_B0D840(&_4__this->fields.mBannerWWW, v50);
          v53 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B0D974(
                                                                     UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                                     v51,
                                                                     v52);
          UnityEngine_Networking_DownloadHandlerTexture___ctor(v53, 0, 0LL);
          v2->fields._texDl_5__3 = v53;
          sub_B0D840(&v2->fields._texDl_5__3, v53);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          if ( this )
          {
            UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__3,
              0LL);
            this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
            v24 = 1;
            _4__this->fields.refuseInit = 1;
            if ( this )
            {
              v54 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                      0LL);
              v2->fields.__2__current = (Il2CppObject *)v54;
              p__2__current = &v2->fields.__2__current;
              sub_B0D840(p__2__current, v54);
              *((_DWORD *)p__2__current - 2) = 1;
              return v24;
            }
          }
        }
      }
LABEL_77:
      sub_B0D97C(this);
    }
  }
  return v24;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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