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

  if ( (byte_4188440 & 1) == 0 )
  {
    sub_B2C35C(&NotificationDialog_TypeInfo, v1);
    byte_4188440 = 1;
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
  if ( (byte_418843F & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418843F = 1;
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
  __int64 v30; // x1
  __int64 baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int32_t mHeight; // w26
  float v34; // s10
  float v35; // s0
  double v36; // d0
  UnityEngine_Object_o *v37; // x27
  NotificationDialog_c *v38; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x0
  UIWidget_o *v44; // [xsp+0h] [xbp-80h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4188436 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, isNoTitle);
    sub_B2C35C(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v23);
    sub_B2C35C(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v24);
    sub_B2C35C(&System_Math_TypeInfo, v25);
    sub_B2C35C(&NotificationDialog_TypeInfo, v26);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v27);
    sub_B2C35C(&string_TypeInfo, v28);
    byte_4188436 = 1;
  }
  v44 = 0LL;
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
              (const MethodInfo_1AA807C *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                     &v44,
                     (const MethodInfo_172E13C *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( (baseWindow & 1) != 0 )
      {
        if ( !component || !v44 )
          goto LABEL_49;
        mHeight = component->fields.mHeight;
        v34 = (float)((float)v44->fields.mHeight * 0.5) + buttonPosY;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v35 = fabsf((float)((float)mHeight * 0.5) + -30.0) + fabsf(v34);
        y = v34 + (float)(v35 * 0.5);
        if ( v35 == INFINITY )
          v36 = -v35;
        else
          v36 = v35;
        messageSizeY = (int)v36;
      }
      else
      {
LABEL_29:
        v38 = NotificationDialog_TypeInfo;
        if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v38 = NotificationDialog_TypeInfo;
        }
        static_fields = v38->static_fields;
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
  v37 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
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
    sub_B2C434(baseWindow, v30);
  }
  baseWindow = sub_B2C374(char___TypeInfo, 1LL);
  if ( !baseWindow )
    goto LABEL_49;
  if ( !*(_DWORD *)(baseWindow + 24) )
  {
    v43 = sub_B2C460(baseWindow);
    sub_B2C400(v43, 0LL);
  }
  *(_WORD *)(baseWindow + 32) = 10;
  baseWindow = (__int64)System_String__Trim(message, (System_Char_array *)baseWindow, 0LL);
  Empty = (System_String_o *)baseWindow;
  if ( !messageLabel )
    goto LABEL_49;
LABEL_39:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v41 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v41 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v41->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v46.fields.x = x;
  v46.fields.y = y;
  v46.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v46, 0LL);
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
  __int64 v22; // x1
  struct UILabel_o *v23; // x24
  UILabel_o *messageLabel; // x0
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v27; // x25
  System_String_o *v28; // x23
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4188437 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, isNoTitle);
    sub_B2C35C(&NotificationDialog_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&string_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_20481/*"messageOffset"*/, v20);
    byte_4188437 = 1;
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
      v23 = this->fields.noTitleMessageLabel;
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
  v23 = this->fields.messageLabel;
  v27 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
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
    messageLabel = (UILabel_o *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !messageLabel )
      goto LABEL_30;
    if ( !LODWORD(messageLabel->fields.leftAnchor) )
    {
      v31 = sub_B2C460(messageLabel);
      sub_B2C400(v31, 0LL);
    }
    LOWORD(messageLabel->fields.rightAnchor) = 10;
    v28 = System_String__Trim(message, (System_Char_array *)messageLabel, 0LL);
  }
  else
  {
    v28 = string_TypeInfo->static_fields->Empty;
  }
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  }
  if ( !v23 )
LABEL_30:
    sub_B2C434(messageLabel, v22);
  UIWidget__SetDimensions(
    (UIWidget_o *)v23,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v23, maxLine, 0LL);
  UILabel__set_fontSize(v23, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v23, v28, v23->fields.mFontSize, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     (NotificationDialog_o *)gameObject,
                     script,
                     (System_String_o *)StringLiteral_20481/*"messageOffset"*/,
                     v30);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition(gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_26319520(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_26319520(
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
  System_Action_o *v11; // x20

  if ( (byte_418843B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_NotificationDialog_EndClose__, v10);
    byte_418843B = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  struct LinkableTexture_o *v27; // x8
  UnityEngine_Object_o *v28; // x20
  struct LinkableTexture_o *v29; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x21
  __int64 v32; // x23
  int size; // w8
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x21
  __int64 v44; // x23
  int v45; // w8
  unsigned int v46; // w24
  __int64 v47; // x8
  UnityEngine_Object_o *v48; // x21
  struct System_Collections_Generic_List_LinkableTexture__o *v49; // x21
  UnityEngine_Object_o *v50; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_4188432 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4188432 = 1;
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
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v20, v21, v22, v23, v24, v25);
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
      v27 = this->fields.lnkTexture;
      if ( !v27 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v27->fields.mCollider;
      if ( !titleLabel )
        goto LABEL_77;
      v28 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                      titleLabel,
                                      titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v28, 0LL);
      v29 = this->fields.lnkTexture;
      if ( !v29 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v29->fields.mCollider;
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
      v32 = 0LL;
      while ( 1 )
      {
        size = additionalSprites->fields._size;
        if ( (int)v32 >= size )
          break;
        if ( size <= (unsigned int)v32 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        titleLabel = (UILabel_o *)additionalSprites->fields._items->m_Items[v32];
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
          UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
          additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalSprites;
          ++v32;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_77;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalSprites,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    }
    else
    {
      v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v35,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v35;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.additionalSprites,
        (System_Int32_array **)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
    if ( additionalTextures )
    {
      v44 = 4LL;
      while ( 1 )
      {
        v45 = additionalTextures->fields._size;
        v46 = v44 - 4;
        if ( (int)v44 - 4 >= v45 )
          break;
        if ( v45 <= v46 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v47 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v44);
        if ( v47 )
        {
          titleLabel = *(UILabel_o **)(v47 + 40);
          if ( titleLabel )
          {
            v48 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                            titleLabel,
                                            titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35314896(v48, 0LL);
            v49 = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              if ( v49->fields._size <= v46 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              titleLabel = (UILabel_o *)*((_QWORD *)&v49->fields._items->obj.klass + v44);
              if ( titleLabel )
              {
                v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_35314896(v50, 0LL);
                additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalTextures;
                ++v44;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    }
    else
    {
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v51,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v51;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.additionalTextures,
        (System_Int32_array **)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_77:
    sub_B2C434(titleLabel, method);
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
  sub_B2C2F8(
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_B2C434(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t onClickOkSeKind; // w20
  NotificationDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_418843C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418843C = 1;
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
  if ( (byte_4188433 & 1) == 0 )
  {
    v63 = panelDepth;
    v66 = titleSize;
    v53 = maxLine;
    v47 = message;
    v50 = func;
    v60 = isLineDraw;
    titlea = title;
    sub_B2C35C(&NotificationDialog_TypeInfo, title);
    sub_B2C35C(&Method_System_Nullable_float__GetValueOrDefault__, v30);
    sub_B2C35C(&Method_System_Nullable_float__get_HasValue__, v31);
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
    byte_4188433 = 1;
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
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x24
  System_String_o *v53; // x1
  NotificationDialog_c *v54; // x0
  float *p_BANNER_RETRY_MAX; // x8
  float v56; // s11
  float v57; // s10
  float y; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v60; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s10
  float z; // s11
  UnityEngine_Object_o *lineSprite; // x20
  NotificationDialog_c *v65; // x0
  struct NotificationDialog_StaticFields *v66; // x8
  UnityEngine_Object_o *messageLabel; // x20
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  NotificationDialog_c *v72; // x0
  struct NotificationDialog_StaticFields *v73; // x8
  UILabel_o *v74; // x20
  float v75; // s10
  float v76; // s9
  float v77; // s13
  float v78; // s11
  float v79; // s12
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x20
  UIWidget_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v84; // x20
  int method_ptr; // w22
  System_Action_o *v86; // x19
  const MethodInfo *v87; // [xsp+0h] [xbp-C0h]
  int value; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  value = buttonWidgetSizeY.fields.value;
  MESSAGE_BASE_SIZE_Y = messageWidgetSizeY.fields.value;
  if ( (byte_4188434 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v29);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v30);
    sub_B2C35C(&LocalizationManager_TypeInfo, v31);
    sub_B2C35C(&Method_NotificationDialog_EndOpen__, v32);
    sub_B2C35C(&NotificationDialog_TypeInfo, v33);
    sub_B2C35C(&Method_System_Nullable_int__GetValueOrDefault__, v34);
    sub_B2C35C(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_B2C35C(&Method_System_Nullable_int__get_HasValue__, v36);
    sub_B2C35C(&Method_System_Nullable_float__get_HasValue__, v37);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v38);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_B2C35C(&StringLiteral_1/*""*/, v40);
    byte_4188434 = 1;
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
  sub_B2C2F8(
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
      v53 = title;
    else
      v53 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v53, 0LL);
    v54 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v54 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v54->static_fields->BANNER_RETRY_MAX;
    v56 = p_BANNER_RETRY_MAX[1];
    v57 = p_BANNER_RETRY_MAX[3];
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
    {
      y = titlePosY.fields.value;
    }
    else
    {
      y = p_BANNER_RETRY_MAX[2];
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        y = NotificationDialog_TypeInfo->static_fields->TITLE_BASE_POS.fields.y;
      }
    }
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_122;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v91.fields.x = v56;
    v91.fields.y = y;
    v91.fields.z = v57;
    GameObjectExtensions__SetLocalPosition(gameObject, v91, 0LL);
  }
  v60 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v60 = NotificationDialog_TypeInfo;
  }
  static_fields = v60->static_fields;
  x = static_fields->MESSAGE_BASE_POS.fields.x;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  if ( static_fields->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = static_fields->MESSAGE_BASE_POS.fields.y;
  if ( (*(_QWORD *)&messageWidgetSizeY & 0xFF00000000LL) == 0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
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
      v65 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v65 = NotificationDialog_TypeInfo;
      }
      v66 = v65->static_fields;
      x = v66->MESSAGE_LINE_POS.fields.x;
      messagePosY = v66->MESSAGE_LINE_POS.fields.y;
      z = v66->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v66->MESSAGE_LINE_SIZE_Y;
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
    v92.fields.x = x;
    v92.fields.y = messagePosY;
    v92.fields.z = z;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      MESSAGE_BASE_SIZE_Y,
      maxLine,
      messageFontSize,
      adjustText,
      v92,
      buttonPosY,
      v87);
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
    v72 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v72 = NotificationDialog_TypeInfo;
    }
    v73 = v72->static_fields;
    v74 = this->fields.okBtnLabel;
    v75 = v73->BUTTON_BASE_POS.fields.x;
    v76 = v73->BUTTON_BASE_POS.fields.z;
    v77 = v73->BUTTON_TEXT_POS.fields.x;
    v79 = v73->BUTTON_TEXT_POS.fields.y;
    v78 = v73->BUTTON_TEXT_POS.fields.z;
    if ( v73->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v73->BUTTON_BASE_POS.fields.y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v74 )
      goto LABEL_122;
    UILabel__set_text(v74, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v93.fields.x = v77;
    v93.fields.y = v79;
    v93.fields.z = v78;
    GameObjectExtensions__SetLocalPosition(v80, v93, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v94.fields.x = v75;
    v94.fields.y = buttonPosY;
    v94.fields.z = v76;
    GameObjectExtensions__SetLocalPosition(v81, v94, 0LL);
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
    v82 = (UnityEngine_GameObject_o *)transform;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)transform,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v84 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v82,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality(v84, 0LL, 0LL);
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
        if ( !v84 )
          goto LABEL_122;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v84, 0LL);
        size.fields.x = (float)method_ptr;
        size.fields.y = (float)value;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v84, size, 0LL);
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
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v49 )
    {
      UIPanel__set_depth(v49, keepPanelDepth, 0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B2C434(transform, keepPanelDepth);
  }
LABEL_121:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
}


void __fastcall NotificationDialog__Open_26313864(
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


void __fastcall NotificationDialog__Open_26314952(
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
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v55; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v57; // x3
  UnityEngine_GameObject_o *v58; // x26
  NotificationDialog_c *v59; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v61; // s8
  float v62; // s9
  float v63; // s10
  NotificationDialog_c *v64; // x0
  float *v65; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v67; // s8
  float v68; // s9
  float v69; // s10
  int32_t v70; // w26
  NotificationDialog_c *v71; // x0
  float *v72; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v75; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v77; // x11
  __int64 v78; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v79; // x0
  struct System_Object_array *v80; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct System_Object_array *sprites; // x8
  __int64 v89; // x9
  struct LinkableSprite_o *v90; // x24
  unsigned __int64 v91; // x21
  UnityEngine_GameObject_o *v92; // x24
  UnityEngine_GameObject_o *v93; // x24
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_Dictionary_string__object__o *v95; // x8
  __int64 v96; // x11
  System_Collections_Generic_Dictionary_string__object__o *v97; // x25
  UnityEngine_GameObject_o *v98; // x0
  UISprite_o *mCollider; // x27
  UnityEngine_GameObject_o *v100; // x26
  const MethodInfo *v101; // x3
  System_String_o *StringFromScript; // x28
  UnityEngine_GameObject_o *v103; // x0
  const MethodInfo *v104; // x3
  NotificationDialog_c *v105; // x8
  UnityEngine_GameObject_o *v106; // x26
  float *v107; // x8
  float v108; // s9
  float v109; // s10
  float v110; // s11
  NotificationDialog_o *v111; // x0
  const MethodInfo *v112; // x3
  NotificationDialog_o *v113; // x0
  const MethodInfo *v114; // x3
  double v115; // d2
  double v116; // d0
  NotificationDialog_o *IntFromScript; // x0
  int32_t v118; // w26
  const MethodInfo *v119; // x3
  System_String_o *v120; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v122; // x11
  __int64 v123; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v124; // x0
  struct System_Object_array *v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct System_Object_array *banners; // x8
  int v133; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v135; // x23
  UnityEngine_GameObject_o *v136; // x0
  const MethodInfo *v137; // x3
  NotificationDialog_c *v138; // x8
  UnityEngine_GameObject_o *v139; // x23
  float *v140; // x8
  float v141; // s8
  float v142; // s9
  float v143; // s10
  System_Action_o *v144; // x20
  System_Action_o *v145; // x20
  const MethodInfo *v146; // x2
  __int64 v147; // x0
  UnityEngine_Object_o *x; // [xsp+8h] [xbp-98h]
  MethodInfo v151; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4188435 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&AtlasManager_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v19);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v20);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ToArray__, v23);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&Method_NotificationDialog_EndOpen__, v26);
    sub_B2C35C(&Method_NotificationDialog__Open_b__42_0__, v27);
    sub_B2C35C(&NotificationDialog_TypeInfo, v28);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v29);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_B2C35C(&StringLiteral_16607/*"banners"*/, v32);
    sub_B2C35C(&StringLiteral_22134/*"size"*/, v33);
    sub_B2C35C(&StringLiteral_22965/*"urlOpenType"*/, v34);
    sub_B2C35C(&StringLiteral_21199/*"offset"*/, v35);
    sub_B2C35C(&StringLiteral_22705/*"titleOffset"*/, v36);
    sub_B2C35C(&StringLiteral_22232/*"spriteName"*/, v37);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v38);
    sub_B2C35C(&StringLiteral_22964/*"urlLink"*/, v39);
    sub_B2C35C(&StringLiteral_17122/*"buttonOffset"*/, v40);
    sub_B2C35C(&StringLiteral_1/*""*/, v41);
    sub_B2C35C(&StringLiteral_22233/*"sprites"*/, v42);
    byte_4188435 = 1;
  }
  v151.name = 0LL;
  LODWORD(v151.invoker_method) = 0;
  v151.methodPointer = 0LL;
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
  sub_B2C2F8(
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
    v55 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(Value, v55, 0LL);
    Value = this->fields.titleLabel;
    if ( !Value )
      goto LABEL_152;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v58 = gameObject;
    v59 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v59 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v59->static_fields->BANNER_RETRY_MAX;
    v61 = p_BANNER_RETRY_MAX[1];
    v62 = p_BANNER_RETRY_MAX[2];
    v63 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       (NotificationDialog_o *)gameObject,
                       script,
                       (System_String_o *)StringLiteral_22705/*"titleOffset"*/,
                       v57);
    VectFromScript.fields.x = v61 + VectFromScript.fields.x;
    VectFromScript.fields.y = v62 + VectFromScript.fields.y;
    VectFromScript.fields.z = v63 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v58, VectFromScript, 0LL);
  }
  v64 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v64 = NotificationDialog_TypeInfo;
  }
  v65 = (float *)&v64->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v67 = v65[4];
  v68 = v65[5];
  v69 = v65[6];
  v70 = *((_DWORD *)v65 + 14);
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
      v71 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v71 = NotificationDialog_TypeInfo;
      }
      v72 = (float *)&v71->static_fields->BANNER_RETRY_MAX;
      v67 = v72[10];
      v68 = v72[11];
      v69 = v72[12];
      v70 = *((_DWORD *)v72 + 16);
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
    v153.fields.x = v67;
    v153.fields.y = v68;
    v153.fields.z = v69;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v70, maxLine, v153, script, v75);
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
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22233/*"sprites"*/,
                           (System_Xml_Schema_XmlSchemaObject_o **)&v151.name,
                           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)Value & 1) == 0 )
      goto LABEL_99;
    if ( !v151.name )
      goto LABEL_152;
    v77 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v151.name + 300LL) < (unsigned int)v77
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v151.name + 200LL) + 8 * v77 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_152;
    }
    v78 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v151.name + 300LL) >= (unsigned int)v78 )
      v79 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v151.name + 200LL) + 8 * v78 - 8) == System_Collections_Generic_List_object__TypeInfo
          ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v151.name
          : 0LL;
    else
      v79 = 0LL;
    v80 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          v79,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v80;
    p_sprites = &this->fields.sprites;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.sprites,
      (System_Int32_array **)v80,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
    sprites = this->fields.sprites;
    if ( sprites && (v89 = *(_QWORD *)&sprites->max_length) != 0 )
    {
      if ( (int)v89 >= 1 )
      {
        v90 = this->fields.lnkSprite;
        v91 = 0LL;
        while ( 1 )
        {
          if ( v91 )
          {
            Value = (UILabel_o *)this->fields.lnkSprite;
            if ( !Value )
              break;
            v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Value = (UILabel_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v92,
                                   (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v93 = (UnityEngine_GameObject_o *)Value;
            Value = (UILabel_o *)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.lnkSprite,
                                   0LL);
            if ( !Value )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
            GameObjectExtensions__SetParent(v93, parent, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v93, one, 0LL);
            if ( !v93 )
              break;
            Value = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v93,
                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            if ( !this->fields.additionalSprites )
              break;
            v90 = (struct LinkableSprite_o *)Value;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.additionalSprites,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Value,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LinkableSprite__Add__);
            sprites = *p_sprites;
            if ( !*p_sprites )
              break;
          }
          if ( v91 >= sprites->max_length )
          {
            v147 = sub_B2C460(Value);
            sub_B2C400(v147, 0LL);
          }
          v95 = (System_Collections_Generic_Dictionary_string__object__o *)sprites->m_Items[v91];
          if ( v95
            && (v96 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v95->klass->_2.bitflags2 + 1) >= (unsigned int)v96) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v95->klass->_2.typeHierarchy[v96 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v97 = v95;
            else
              v97 = 0LL;
            if ( !v90 )
              break;
          }
          else
          {
            v97 = 0LL;
            if ( !v90 )
              break;
          }
          v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v90, 0LL);
          mCollider = (UISprite_o *)v90->fields.mCollider;
          v100 = v98;
          StringFromScript = NotificationDialog__getStringFromScript(
                               (NotificationDialog_o *)v98,
                               v97,
                               (System_String_o *)StringLiteral_22232/*"spriteName"*/,
                               v101);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Value = (UILabel_o *)AtlasManager__SetEventUI(mCollider, StringFromScript, 0LL);
          if ( !v100 )
            break;
          UnityEngine_GameObject__SetActive(v100, (unsigned __int8)Value & 1, 0LL);
          v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v90, 0LL);
          v105 = NotificationDialog_TypeInfo;
          v106 = v103;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v105 = NotificationDialog_TypeInfo;
          }
          v107 = (float *)&v105->static_fields->BANNER_RETRY_MAX;
          v108 = v107[17];
          v109 = v107[18];
          v110 = v107[19];
          v155 = NotificationDialog__getVectFromScript(
                   (NotificationDialog_o *)v103,
                   v97,
                   (System_String_o *)StringLiteral_21199/*"offset"*/,
                   v104);
          v155.fields.x = v108 + v155.fields.x;
          v155.fields.y = v109 + v155.fields.y;
          v155.fields.z = v110 + v155.fields.z;
          GameObjectExtensions__SetLocalPosition(v106, v155, 0LL);
          v156 = NotificationDialog__getVectFromScript(v111, v97, (System_String_o *)StringLiteral_22134/*"size"*/, v112);
          v151.methodPointer = *(Il2CppMethodPointer *)&v156.fields.x;
          *(float *)&v151.invoker_method = v156.fields.z;
          zero = UnityEngine_Vector3__get_zero(0LL);
          if ( UnityEngine_Vector3__Equals_49837320(zero, v159, &v151) )
          {
            LinkableSprite__MakePixelPerfect(v90, 0LL);
          }
          else
          {
            v115 = *(float *)&v151.methodPointer;
            v116 = *((float *)&v151.methodPointer + 1);
            if ( *(float *)&v151.methodPointer == INFINITY )
              v115 = -INFINITY;
            if ( *((float *)&v151.methodPointer + 1) == INFINITY )
              v116 = -INFINITY;
            LinkableSprite__SetSize(v90, (int)v115, (int)v116, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v113,
                                                    v97,
                                                    (System_String_o *)StringLiteral_22965/*"urlOpenType"*/,
                                                    v114);
          v118 = (int)IntFromScript;
          v120 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v97,
                   (System_String_o *)StringLiteral_22964/*"urlLink"*/,
                   v119);
          LinkableSprite__SetUp(v90, v118, v120, 0LL);
          sprites = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( (__int64)++v91 >= (int)sprites->max_length )
            goto LABEL_102;
        }
LABEL_152:
        sub_B2C434(Value, keepPanelDepth);
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
                         (System_Xml_XmlQualifiedName_o *)StringLiteral_16607/*"banners"*/,
                         (System_Xml_Schema_XmlSchemaObject_o **)&v151.name,
                         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)Value & 1) == 0 )
    goto LABEL_119;
  if ( !v151.name )
    goto LABEL_152;
  v122 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v151.name + 300LL) < (unsigned int)v122
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v151.name + 200LL) + 8 * v122 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_152;
  }
  v123 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v151.name + 300LL) >= (unsigned int)v123 )
    v124 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v151.name + 200LL) + 8 * v123 - 8) == System_Collections_Generic_List_object__TypeInfo
         ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v151.name
         : 0LL;
  else
    v124 = 0LL;
  v125 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         v124,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
  this->fields.banners = v125;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.banners,
    (System_Int32_array **)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
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
    v133 = 1;
    goto LABEL_123;
  }
  v133 = 0;
LABEL_123:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v135 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Value = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v135 )
      goto LABEL_152;
    UILabel__set_text(v135, (System_String_o *)Value, 0LL);
    Value = this->fields.okBtnLabel;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    v136 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v138 = NotificationDialog_TypeInfo;
    v139 = v136;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v138 = NotificationDialog_TypeInfo;
    }
    v140 = (float *)&v138->static_fields->BANNER_RETRY_MAX;
    v141 = v140[20];
    v142 = v140[21];
    v143 = v140[22];
    v158 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v136,
             script,
             (System_String_o *)StringLiteral_17122/*"buttonOffset"*/,
             v137);
    v158.fields.x = v141 + v158.fields.x;
    v158.fields.y = v142 + v158.fields.y;
    v158.fields.z = v143 + v158.fields.z;
    GameObjectExtensions__SetLocalPosition(v139, v158, 0LL);
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
  if ( v133 )
  {
    v144 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v144, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v144, 0, 0LL);
  }
  else
  {
    Value = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v145 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v145, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v145, v146);
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

  if ( (byte_418843D & 1) == 0 )
  {
    sub_B2C35C(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method);
    byte_418843D = 1;
  }
  v3 = sub_B2C42C(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  NotificationDialog__StartDownloadBanner_d__54___ctor((NotificationDialog__StartDownloadBanner_d__54_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v6; // x20

  if ( (byte_4188441 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_NotificationDialog_EndOpen__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4188441 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v6, 0, 0LL);
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

  if ( (byte_4188442 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4188442 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v7);
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

  if ( (byte_418843A & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_418843A = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B2C434(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4188439 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_B2C35C(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4188439 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B2C434(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4188438 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, script);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_4188438 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B2C434(this, script);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418843E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15488/*"Window/OkBtn"*/, method);
    byte_418843E = 1;
  }
  return (System_String_o *)StringLiteral_15488/*"Window/OkBtn"*/;
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185271 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isOk);
    byte_4185271 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  NotificationDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  NotificationDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isOk, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isOk, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isOk, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isOk, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isOk,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isOk, v22);
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
  ErrorDialog_ClickDelegate_o *v41; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v43; // x0
  System_String_o *v44; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v46; // x22
  UnityEngine_Networking_DownloadHandlerTexture_o *v47; // x22
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v48; // x0
  Il2CppObject **p__2__current; // x20
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v53; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v55; // x23
  NotificationDialog_c *v56; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v58; // s8
  float v59; // s9
  float v60; // s10
  double v61; // d3
  double v62; // d0
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v65; // w20
  System_String_o *StringFromScript; // x0
  __int64 v67; // x0
  MethodInfo v68; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4185270 & 1) == 0 )
  {
    sub_B2C35C(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v9);
    sub_B2C35C(&NotificationDialog_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B2C35C(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_16600/*"bannerUrl"*/, v15);
    sub_B2C35C(&StringLiteral_22134/*"size"*/, v16);
    sub_B2C35C(&StringLiteral_22965/*"urlOpenType"*/, v17);
    sub_B2C35C(&StringLiteral_21199/*"offset"*/, v18);
    sub_B2C35C(&StringLiteral_22964/*"urlLink"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_B2C35C(&StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v21);
    byte_4185270 = 1;
  }
  LODWORD(v68.invoker_method) = 0;
  v68.methodPointer = 0LL;
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
                                                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_77;
        v53 = (UnityEngine_GameObject_o *)this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_77;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent(v53, parent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v53, one, 0LL);
        if ( !v53 )
          goto LABEL_77;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v53,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        if ( !_4__this->fields.additionalTextures )
          goto LABEL_77;
        lnkTexture = this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.additionalTextures,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LinkableTexture__Add__);
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
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v56 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v56 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v56->static_fields->BANNER_RETRY_MAX;
      v58 = p_BANNER_RETRY_MAX[17];
      v59 = p_BANNER_RETRY_MAX[18];
      v60 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         _4__this,
                         v2->fields._banner_5__2,
                         (System_String_o *)StringLiteral_21199/*"offset"*/,
                         0LL);
      VectFromScript.fields.x = v58 + VectFromScript.fields.x;
      VectFromScript.fields.y = v59 + VectFromScript.fields.y;
      VectFromScript.fields.z = v60 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v55, VectFromScript, 0LL);
      v71 = NotificationDialog__getVectFromScript(
              _4__this,
              v2->fields._banner_5__2,
              (System_String_o *)StringLiteral_22134/*"size"*/,
              0LL);
      v68.methodPointer = *(Il2CppMethodPointer *)&v71.fields.x;
      *(float *)&v68.invoker_method = v71.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      if ( UnityEngine_Vector3__Equals_49837320(zero, v73, &v68) )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        v61 = *(float *)&v68.methodPointer;
        v62 = -*((float *)&v68.methodPointer + 1);
        if ( *(float *)&v68.methodPointer == INFINITY )
          v61 = -*(float *)&v68.methodPointer;
        if ( *((float *)&v68.methodPointer + 1) != INFINITY )
          v62 = *((float *)&v68.methodPointer + 1);
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, (int)v61, (int)v62, 0LL);
      }
      IntFromScript = NotificationDialog__getIntFromScript(
                        _4__this,
                        v2->fields._banner_5__2,
                        (System_String_o *)StringLiteral_22965/*"urlOpenType"*/,
                        0LL);
      banner_5__2 = v2->fields._banner_5__2;
      v65 = IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           _4__this,
                           banner_5__2,
                           (System_String_o *)StringLiteral_22964/*"urlLink"*/,
                           0LL);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v65, StringFromScript, 0LL);
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
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v41 = (ErrorDialog_ClickDelegate_o *)sub_B2C42C(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v41,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_77;
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v40, v41, 0, 0LL);
      }
    }
    v43 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v43 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v43, 0LL);
      *p_mBannerWWW = 0LL;
      sub_B2C2F8(&_4__this->fields.mBannerWWW, 0LL);
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
            v67 = sub_B2C460(this);
            sub_B2C400(v67, 0LL);
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
          sub_B2C2F8(&v2->fields._banner_5__2, v29);
          v44 = NotificationDialog__getStringFromScript(
                  _4__this,
                  v2->fields._banner_5__2,
                  (System_String_o *)StringLiteral_16600/*"bannerUrl"*/,
                  0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          WebViewFullAddress = NetworkManager__getWebViewFullAddress(v44, 0LL);
          v46 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B2C42C(UnityEngine_Networking_UnityWebRequest_TypeInfo);
          UnityEngine_Networking_UnityWebRequest___ctor(v46, WebViewFullAddress, 0LL);
          _4__this->fields.mBannerWWW = v46;
          sub_B2C2F8(&_4__this->fields.mBannerWWW, v46);
          v47 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B2C42C(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
          UnityEngine_Networking_DownloadHandlerTexture___ctor(v47, 0, 0LL);
          v2->fields._texDl_5__3 = v47;
          sub_B2C2F8(&v2->fields._texDl_5__3, v47);
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
              v48 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                      (UnityEngine_Networking_UnityWebRequest_o *)this,
                      0LL);
              v2->fields.__2__current = (Il2CppObject *)v48;
              p__2__current = &v2->fields.__2__current;
              sub_B2C2F8(p__2__current, v48);
              *((_DWORD *)p__2__current - 2) = 1;
              return v24;
            }
          }
        }
      }
LABEL_77:
      sub_B2C434(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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