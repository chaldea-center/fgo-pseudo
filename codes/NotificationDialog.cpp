void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v3; // x8
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9
  struct NotificationDialog_StaticFields *v9; // x9

  if ( (byte_4A521C7 & 1) == 0 )
  {
    sub_1B863B8(&NotificationDialog_TypeInfo, v1);
    byte_4A521C7 = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
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
  v7 = v3->static_fields;
  *(_OWORD *)&v7->MESSAGE_BASE_SIZE_X = xmmword_BC2840;
  *(_QWORD *)&v7->IMAGE_BASE_POS.fields.y = 0LL;
  v7->IMAGE_BASE_POS.fields.x = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v8->BUTTON_BASE_POS.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v9->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v3->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A521C6 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A521C6 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
        int32_t messageSizeX,
        float messagePosYForcedAdd,
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s11
  float x; // s9
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v34; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int monitor_high; // w27
  float v38; // s12
  float v39; // s0
  UnityEngine_Object_o *v40; // x27
  NotificationDialog_c *v41; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  float v44; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v47; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v48; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v50; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A521BD & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, isNoTitle);
    sub_1B863B8(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v27);
    sub_1B863B8(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v28);
    sub_1B863B8(&System_Math_TypeInfo, v29);
    sub_1B863B8(&NotificationDialog_TypeInfo, v30);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v31);
    sub_1B863B8(&string_TypeInfo, v32);
    byte_4A521BD = 1;
  }
  v50 = 0LL;
  v48 = 0LL;
  component = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_54;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_2FC2080 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_30;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v48,
                                                 (const MethodInfo_2F65584 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v48 )
          goto LABEL_54;
        monitor_high = HIDWORD(component[10].monitor);
        v38 = (float)((float)SHIDWORD(v48[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v39 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v38);
        if ( isAdjustTextPos )
          y = v38 + (float)(v39 * 0.5);
        if ( v39 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v39;
      }
      else
      {
LABEL_30:
        v41 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v41 = NotificationDialog_TypeInfo;
        }
        static_fields = v41->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( baseWindow )
      {
        UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( baseWindow )
        {
          baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                     (UnityEngine_Component_o *)baseWindow,
                                                     &v47,
                                                     (const MethodInfo_2F65584 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v47;
          if ( !v47 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1B86614(baseWindow, v34);
    }
  }
  messageLabel = this->fields.messageLabel;
  v40 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
      UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
      if ( baseWindow )
      {
        baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)baseWindow,
                                                   (Il2CppObject **)&v46,
                                                   (const MethodInfo_2F65584 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v46;
        if ( !v46 )
          goto LABEL_54;
LABEL_37:
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseWindow, 0, 0LL);
        goto LABEL_38;
      }
    }
    goto LABEL_54;
  }
LABEL_38:
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_61701456(message, 0xAu, 0LL);
    Empty = (System_String_o *)baseWindow;
    if ( !messageLabel )
      goto LABEL_54;
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !messageLabel )
      goto LABEL_54;
  }
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, messageSizeX, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( UnityEngine_Component__TryGetComponent_object_(
         (UnityEngine_Component_o *)messageLabel,
         &v50,
         (const MethodInfo_2F65584 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v50;
    if ( !v50 )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v50, 1, 0LL);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v44 = y;
  else
    v44 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v51.fields.x = x;
  v51.fields.y = v44;
  v51.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v51, 0LL);
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v21; // x1
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v23; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v26; // x25
  System_String_o *v27; // x23
  UnityEngine_Object_o *v28; // x21
  NotificationDialog_o *gameObject; // x21
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x21
  NotificationDialog_o *v32; // x20
  const MethodInfo *v33; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A521BE & 1) == 0 )
  {
    sub_1B863B8(&NotificationDialog_TypeInfo, isNoTitle);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B863B8(&string_TypeInfo, v18);
    sub_1B863B8(&StringLiteral_21230/*"messageOffset"*/, v19);
    byte_4A521BE = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v23 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
        goto LABEL_34;
      onChange = messageLabel->fields.onChange;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onChange->fields.method_info);
      y = *(float *)&onChange->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
  }
  v23 = this->fields.messageLabel;
  v26 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v27 = System_String__Trim_61701456(message, 0xAu, 0LL);
  else
    v27 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v23 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v23,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v23, maxLine, 0LL);
  UILabel__set_fontSize(v23, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v23, v27, v23->fields.mFontSize, 0, 0LL);
  v28 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)messageLabel,
                                           0LL);
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_21230/*"messageOffset"*/,
                       v30);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
  }
  v31 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v32 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
      v35 = NotificationDialog__getVectFromScript(v32, script, (System_String_o *)StringLiteral_21230/*"messageOffset"*/, v33);
      v35.fields.x = x + v35.fields.x;
      v35.fields.z = z + v35.fields.z;
      v35.fields.y = y + v35.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v32, v35, 0LL);
      return;
    }
LABEL_34:
    sub_1B86614(messageLabel, v21);
  }
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_46371156(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_46371156(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A521C2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_NotificationDialog_EndClose__, v6);
    byte_4A521C2 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B8635C(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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
  void *titleLabel; // x0
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v23; // x8
  UnityEngine_Object_o *v24; // x20
  struct LinkableTexture_o *v25; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v27; // w21
  int32_t v28; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v30; // w8
  System_Collections_Generic_List_object__o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v35; // w21
  int32_t v36; // w2
  UnityEngine_Object_o *v37; // x22
  UnityEngine_Object_o *v38; // x0
  int v39; // w8
  System_Collections_Generic_List_object__o *v40; // x21
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4A521B9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_1B863B8(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_1B863B8(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    byte_4A521B9 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v15 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
      this->fields.mBannerWWW = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mBannerWWW, 0, v20, v21);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v23 = this->fields.lnkTexture;
      if ( !v23 )
        goto LABEL_65;
      titleLabel = v23->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v24 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292(v24, 0LL);
      v25 = this->fields.lnkTexture;
      if ( !v25 )
        goto LABEL_65;
      titleLabel = v25->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)titleLabel + 744LL))(
        titleLabel,
        0LL,
        *(_QWORD *)(*(_QWORD *)titleLabel + 752LL));
    }
    p_additionalSprites = &this->fields.additionalSprites;
    titleLabel = this->fields.additionalSprites;
    if ( titleLabel )
    {
      v27 = 0;
      while ( 1 )
      {
        v28 = *((_DWORD *)titleLabel + 6);
        if ( v27 >= v28 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v27,
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v27;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v30 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v30;
      if ( v28 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v28, 0LL);
    }
    else
    {
      v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v31;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.additionalSprites, (int32_t)v31, v32, v33);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v35 = 0;
      while ( 1 )
      {
        v36 = *((_DWORD *)titleLabel + 6);
        if ( v35 >= v36 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v35,
                       (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v37 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69356292(v37, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v35,
                             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_69356292(v38, 0LL);
                titleLabel = *p_additionalTextures;
                ++v35;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v39 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v39;
      if ( v36 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v36, 0LL);
    }
    else
    {
      v40 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v40,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v40;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.additionalTextures, (int32_t)v40, v41, v42);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1B86614(titleLabel, method);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mAfterLoad, (int32_t)callback, (int32_t)method, v3);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1B86614(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A521C3 & 1) == 0 )
  {
    sub_1B863B8(&Method_NotificationDialog_OnClickOk__, method);
    byte_4A521C3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
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
        float messagePosYForcedAdd,
        const MethodInfo *method)
{
  System_Nullable_float__o v21; // x17
  System_Nullable_int__o v22; // x23
  System_Nullable_int__o v23; // x24
  bool v24; // w9
  System_Nullable_int__o v25; // x12
  int32_t v26; // w13
  System_Nullable_float__o v27; // x14
  int32_t v28; // w15
  int32_t v29; // w16
  bool v30; // w10
  int32_t v33; // w29
  NotificationDialog_ClickDelegate_o *v35; // x26
  System_String_o *v36; // x20
  System_String_o *v37; // x21
  NotificationDialog_o *v38; // x28
  int32_t v39; // w29
  __int64 v41; // x1
  __int64 v42; // x1
  float value; // s9
  NotificationDialog_c *v44; // x0
  int32_t v45; // w25
  float y; // s1
  NotificationDialog_c *v47; // x0
  int32_t v48; // w27
  System_Nullable_float__o v50; // [xsp+0h] [xbp-B0h]
  bool v51; // [xsp+Ch] [xbp-A4h]
  bool v52; // [xsp+Ch] [xbp-A4h]
  bool v54; // [xsp+10h] [xbp-A0h]
  bool v55; // [xsp+10h] [xbp-A0h]
  int32_t v57; // [xsp+18h] [xbp-98h]
  int32_t v58; // [xsp+18h] [xbp-98h]
  int32_t v60; // [xsp+20h] [xbp-90h]
  int32_t v61; // [xsp+20h] [xbp-90h]
  System_Nullable_float__o v62; // [xsp+28h] [xbp-88h]
  System_Nullable_float__o v63; // [xsp+28h] [xbp-88h]
  System_Nullable_int__o v64; // [xsp+30h] [xbp-80h]
  System_Nullable_int__o v65; // [xsp+30h] [xbp-80h]
  int32_t titleSizea; // [xsp+38h] [xbp-78h]
  int32_t titleSizeb; // [xsp+38h] [xbp-78h]

  v22 = buttonWidgetSizeY;
  v21 = buttonPosY;
  v23 = buttonWidgetSizeX;
  v24 = adjustText;
  v25 = messageWidgetSizeY;
  v26 = spacingY;
  v27 = titlePosY;
  v28 = onClickOkSeKind;
  v29 = messageFontSize;
  v30 = canMaskTouchClose;
  v33 = maxLine;
  v35 = func;
  v36 = message;
  v37 = title;
  v38 = this;
  if ( (byte_4A521BA & 1) == 0 )
  {
    v39 = titleSize;
    sub_1B863B8(&NotificationDialog_TypeInfo, title);
    sub_1B863B8(&Method_System_Nullable_float__GetValueOrDefault__, v41);
    sub_1B863B8(&Method_System_Nullable_float__get_HasValue__, v42);
    v21 = buttonPosY;
    v30 = canMaskTouchClose;
    v24 = adjustText;
    v29 = messageFontSize;
    v28 = onClickOkSeKind;
    v27 = titlePosY;
    v25 = messageWidgetSizeY;
    v38 = this;
    titleSize = v39;
    v33 = maxLine;
    v35 = func;
    v36 = message;
    v37 = title;
    v22 = buttonWidgetSizeY;
    v23 = buttonWidgetSizeX;
    v26 = spacingY;
    byte_4A521BA = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v44 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizea = titleSize;
      v62 = v27;
      v64 = v25;
      v45 = v26;
      v60 = v28;
      v57 = v29;
      v51 = v30;
      v54 = v24;
      v50 = v21;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v21 = v50;
      v30 = v51;
      v24 = v54;
      v29 = v57;
      v28 = v60;
      v27 = v62;
      v25 = v64;
      titleSize = titleSizea;
      v44 = NotificationDialog_TypeInfo;
      v26 = v45;
    }
    value = v44->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v21.fields.hasValue )
  {
    y = v21.fields.value;
  }
  else
  {
    v47 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizeb = titleSize;
      v63 = v27;
      v65 = v25;
      v48 = v26;
      v61 = v28;
      v58 = v29;
      v52 = v30;
      v55 = v24;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v30 = v52;
      v24 = v55;
      v29 = v58;
      v28 = v61;
      v27 = v63;
      v25 = v65;
      titleSize = titleSizeb;
      v47 = NotificationDialog_TypeInfo;
      v26 = v48;
    }
    y = v47->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    v38,
    v37,
    v36,
    v35,
    panelDepth,
    v33,
    titleSize,
    isLineDraw,
    v30,
    value,
    y,
    v29,
    v28,
    v27,
    v26,
    v25,
    v24,
    v23,
    v22,
    messagePosYForcedAdd,
    1,
    0LL,
    method);
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
        float messagePosYForcedAdd,
        bool isAdjustTextPos,
        System_Nullable_int__o messageWidgetSizeX,
        const MethodInfo *method)
{
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
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v47; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v51; // x1
  NotificationDialog_c *v52; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v58; // x0
  struct NotificationDialog_StaticFields *v59; // x8
  float v60; // s11
  float v61; // s12
  unsigned __int64 v62; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v65; // x0
  struct NotificationDialog_StaticFields *v66; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v72; // x0
  struct NotificationDialog_StaticFields *v73; // x8
  UILabel_o *v74; // x22
  float v75; // s10
  float v76; // s9
  float v77; // s13
  float v78; // s11
  float y; // s12
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v84; // x22
  unsigned __int64 v85; // x19
  unsigned __int64 v86; // x25
  System_Action_o *v87; // x19
  const MethodInfo *v88; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A521BB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, title);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v31);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v32);
    sub_1B863B8(&LocalizationManager_TypeInfo, v33);
    sub_1B863B8(&Method_NotificationDialog_EndOpen__, v34);
    sub_1B863B8(&NotificationDialog_TypeInfo, v35);
    sub_1B863B8(&Method_System_Nullable_float__GetValueOrDefault__, v36);
    sub_1B863B8(&Method_System_Nullable_int__GetValueOrDefault__, v37);
    sub_1B863B8(&Method_System_Nullable_float__get_HasValue__, v38);
    sub_1B863B8(&Method_System_Nullable_int__get_HasValue__, v39);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v40);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v41);
    sub_1B863B8(&StringLiteral_1/*""*/, v42);
    byte_4A521BB = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v47 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v47 )
        goto LABEL_112;
      this->fields.keepPanelDepth = v47->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v44, v45);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_112;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    if ( title )
      v51 = title;
    else
      v51 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v51, 0LL);
    v52 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v52 = NotificationDialog_TypeInfo;
    }
    static_fields = v52->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v93.fields.y = v;
    v93.fields.x = x;
    v93.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v93, 0LL);
  }
  v58 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v58 = NotificationDialog_TypeInfo;
  }
  v59 = v58->static_fields;
  v60 = v59->MESSAGE_BASE_POS.fields.x;
  v61 = v59->MESSAGE_BASE_POS.fields.z;
  if ( v59->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v59->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v62 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = NotificationDialog_TypeInfo;
      v59 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v62) = v59->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v58->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v65 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v65 = NotificationDialog_TypeInfo;
      }
      v66 = v65->static_fields;
      v60 = v66->MESSAGE_LINE_POS.fields.x;
      messagePosY = v66->MESSAGE_LINE_POS.fields.y;
      v61 = v66->MESSAGE_LINE_POS.fields.z;
      LODWORD(v62) = v66->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v94.fields.x = v60;
    v94.fields.y = messagePosY;
    v94.fields.z = v61;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v62,
      maxLine,
      messageFontSize,
      adjustText,
      v94,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v88);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v72 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v72 = NotificationDialog_TypeInfo;
    }
    v73 = v72->static_fields;
    v74 = this->fields.okBtnLabel;
    v75 = v73->BUTTON_BASE_POS.fields.x;
    v76 = v73->BUTTON_BASE_POS.fields.z;
    v77 = v73->BUTTON_TEXT_POS.fields.x;
    y = v73->BUTTON_TEXT_POS.fields.y;
    v78 = v73->BUTTON_TEXT_POS.fields.z;
    if ( v73->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v73->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v74 )
      goto LABEL_112;
    UILabel__set_text(v74, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v95.fields.x = v77;
    v95.fields.y = y;
    v95.fields.z = v78;
    GameObjectExtensions__SetLocalPosition(v80, v95, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v96.fields.x = v75;
    v96.fields.y = buttonPosY;
    v96.fields.z = v76;
    GameObjectExtensions__SetLocalPosition(v81, v96, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v82 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v84 = UnityEngine_GameObject__GetComponent_object_(
            v82,
            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v84, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v85 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v85) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v86 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_112;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v86) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_112;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v85, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v86, 0LL);
        if ( !v84 )
          goto LABEL_112;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v84, 0LL);
        size.fields.x = (float)(int)v85;
        size.fields.y = (float)(int)v86;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v84, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v47 )
    {
      UIPanel__set_depth(v47, keepPanelDepth, 0LL);
      goto LABEL_111;
    }
LABEL_112:
    sub_1B86614(transform, keepPanelDepth);
  }
LABEL_111:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v87 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
}


void __fastcall NotificationDialog__Open_46365400(
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
        bool isAdjustTextPos,
        System_Nullable_int__o messageWidgetSizeX,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+58h] [xbp-18h]

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
    0.0,
    isAdjustTextPos,
    messageWidgetSizeX,
    v18);
}


void __fastcall NotificationDialog__Open_46366560(
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
  __int64 v43; // x1
  UIPanel_o *TargetPanel; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v48; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v52; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v54; // x3
  NotificationDialog_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v58; // s8
  float v59; // s9
  float v60; // s10
  NotificationDialog_c *v61; // x0
  float *v62; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v64; // s8
  float v65; // s9
  float v66; // s10
  int32_t v67; // w26
  NotificationDialog_c *v68; // x0
  float *v69; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v72; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v75; // x0
  struct System_Object_array **p_sprites; // x23
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v79; // x8
  UnityEngine_Component_o *v80; // x25
  unsigned __int64 v81; // x21
  Il2CppObject *v82; // x25
  UnityEngine_GameObject_o *v83; // x25
  UnityEngine_Component_o *parent; // x0
  __int64 v85; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v90; // x10
  __int64 size; // x11
  Il2CppClass **v92; // x0
  struct System_Object_array *v93; // x8
  System_Collections_Generic_Dictionary_string__object__o *v94; // x8
  __int64 v95; // x11
  System_Collections_Generic_Dictionary_string__object__o *v96; // x26
  System_Collections_Generic_Dictionary_string__object__o *v97; // x22
  NotificationDialog_o *v98; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v100; // x27
  const MethodInfo *v101; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v103; // x0
  const MethodInfo *v104; // x3
  NotificationDialog_c *v105; // x8
  UnityEngine_GameObject_o *v106; // x27
  float *v107; // x8
  float v108; // s8
  float v109; // s9
  float v110; // s10
  NotificationDialog_o *v111; // x0
  const MethodInfo *v112; // x3
  __int64 v113; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v118; // x0
  const MethodInfo *v119; // x3
  int32_t v120; // w1
  int32_t v121; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v123; // w27
  const MethodInfo *v124; // x3
  System_String_o *v125; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v127; // x11
  struct System_Object_array *v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Object_array *banners; // x8
  int v132; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v134; // x23
  NotificationDialog_o *v135; // x0
  const MethodInfo *v136; // x3
  NotificationDialog_c *v137; // x8
  UnityEngine_GameObject_o *v138; // x23
  float *v139; // x8
  float v140; // s8
  float v141; // s9
  float v142; // s10
  System_Action_o *v143; // x20
  System_Action_o *v144; // x20
  const MethodInfo *v145; // x2
  UIPanel_o *v147; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A521BC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, title);
    sub_1B863B8(&AtlasManager_TypeInfo, v19);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v20);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v21);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_object__ToArray__, v24);
    sub_1B863B8(&System_Collections_Generic_List_object__TypeInfo, v25);
    sub_1B863B8(&LocalizationManager_TypeInfo, v26);
    sub_1B863B8(&Method_NotificationDialog_EndOpen__, v27);
    sub_1B863B8(&Method_NotificationDialog__Open_b__42_0__, v28);
    sub_1B863B8(&NotificationDialog_TypeInfo, v29);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v30);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v31);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1B863B8(&StringLiteral_16821/*"banners"*/, v33);
    sub_1B863B8(&StringLiteral_23187/*"size"*/, v34);
    sub_1B863B8(&StringLiteral_24172/*"urlOpenType"*/, v35);
    sub_1B863B8(&StringLiteral_22047/*"offset"*/, v36);
    sub_1B863B8(&StringLiteral_23800/*"titleOffset"*/, v37);
    sub_1B863B8(&StringLiteral_23296/*"spriteName"*/, v38);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1B863B8(&StringLiteral_24171/*"urlLink"*/, v40);
    sub_1B863B8(&StringLiteral_17412/*"buttonOffset"*/, v41);
    sub_1B863B8(&StringLiteral_1/*""*/, v42);
    sub_1B863B8(&StringLiteral_23297/*"sprites"*/, v43);
    byte_4A521BC = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v48 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v48 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v48->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v45, v46);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_138;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    v52 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v52, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v55 = NotificationDialog_TypeInfo;
    v56 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v55 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v55->static_fields->BANNER_RETRY_MAX;
    v58 = p_BANNER_RETRY_MAX[1];
    v59 = p_BANNER_RETRY_MAX[2];
    v60 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_23800/*"titleOffset"*/,
                       v54);
    VectFromScript.fields.x = v58 + VectFromScript.fields.x;
    VectFromScript.fields.y = v59 + VectFromScript.fields.y;
    VectFromScript.fields.z = v60 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v56, VectFromScript, 0LL);
  }
  v61 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v61 = NotificationDialog_TypeInfo;
  }
  v62 = (float *)&v61->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v64 = v62[4];
  v65 = v62[5];
  v66 = v62[6];
  v67 = *((_DWORD *)v62 + 14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v68 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v68 = NotificationDialog_TypeInfo;
      }
      v69 = (float *)&v68->static_fields->BANNER_RETRY_MAX;
      v64 = v69[10];
      v65 = v69[11];
      v66 = v69[12];
      v67 = *((_DWORD *)v69 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v150.fields.x = v64;
    v150.fields.y = v65;
    v150.fields.z = v66;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v67, maxLine, v150, script, v72);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_23297/*"sprites"*/,
                               &value,
                               (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_95;
    if ( !value )
      goto LABEL_138;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_138;
    }
    v75 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v75;
    p_sprites = &this->fields.sprites;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sprites, (int32_t)v75, v77, v78);
    if ( this->fields.sprites && (v79 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v79 >= 1 )
      {
        v80 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v81 = 0LL;
        v147 = v48;
        while ( 1 )
        {
          if ( v81 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v82 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v82,
                                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v83 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v83, parent, 0LL);
            if ( !byte_4A487E6 )
            {
              sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v85);
              byte_4A487E6 = 1;
            }
            GameObjectExtensions__SetLocalScale(v83, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v83 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v83,
                                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v90 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v80 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v92 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v92[4] = (Il2CppClass *)v80;
              sub_1B8635C((CGThumbnailListItem_o *)(v92 + 4), (int32_t)v80, v86, v87);
            }
          }
          v93 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v81 >= v93->max_length )
            sub_1B8661C(transform, keepPanelDepth);
          v94 = (System_Collections_Generic_Dictionary_string__object__o *)v93->m_Items[v81];
          if ( v94
            && (v95 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v94->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v95) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v94->klass->_2.typeHierarchy[v95 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v96 = v94;
            else
              v96 = 0LL;
            if ( !v80 )
              break;
          }
          else
          {
            v96 = 0LL;
            if ( !v80 )
              break;
          }
          v97 = script;
          v98 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v80, 0LL);
          klass = (UISprite_o *)v80[2].klass;
          v100 = (UnityEngine_GameObject_o *)v98;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v98,
                               v96,
                               (System_String_o *)StringLiteral_23296/*"spriteName"*/,
                               v101);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v100 )
            break;
          UnityEngine_GameObject__SetActive(v100, (unsigned __int8)transform & 1, 0LL);
          v103 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v80, 0LL);
          v105 = NotificationDialog_TypeInfo;
          v106 = (UnityEngine_GameObject_o *)v103;
          script = v97;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v105 = NotificationDialog_TypeInfo;
          }
          v107 = (float *)&v105->static_fields->BANNER_RETRY_MAX;
          v48 = v147;
          v108 = v107[17];
          v109 = v107[18];
          v110 = v107[19];
          v151 = NotificationDialog__getVectFromScript(v103, v96, (System_String_o *)StringLiteral_22047/*"offset"*/, v104);
          v151.fields.x = v108 + v151.fields.x;
          v151.fields.y = v109 + v151.fields.y;
          v151.fields.z = v110 + v151.fields.z;
          GameObjectExtensions__SetLocalPosition(v106, v151, 0LL);
          v152 = NotificationDialog__getVectFromScript(v111, v96, (System_String_o *)StringLiteral_23187/*"size"*/, v112);
          x = v152.fields.x;
          y = v152.fields.y;
          z = v152.fields.z;
          if ( !byte_4A487E1 )
          {
            sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v113);
            byte_4A487E1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v80, 0LL);
          }
          else
          {
            v120 = x == INFINITY ? 0x80000000 : (int)x;
            v121 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v80, v120, v121, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v118,
                                                    v96,
                                                    (System_String_o *)StringLiteral_24172/*"urlOpenType"*/,
                                                    v119);
          v123 = (int)IntFromScript;
          v125 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v96,
                   (System_String_o *)StringLiteral_24171/*"urlLink"*/,
                   v124);
          LinkableSprite__SetUp((LinkableSprite_o *)v80, v123, v125, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v81 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1B86614(transform, keepPanelDepth);
      }
    }
    else
    {
LABEL_95:
      transform = (UILabel_o *)this->fields.lnkSprite;
      if ( !transform )
        goto LABEL_138;
      transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    }
  }
LABEL_98:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_16821/*"banners"*/,
                               &value,
                               (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v127 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v127
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v127 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v128 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v128;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.banners, (int32_t)v128, v129, v130);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v132 = 0;
          goto LABEL_113;
        }
      }
    }
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v132 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v134 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v134 )
      goto LABEL_138;
    UILabel__set_text(v134, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v135 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v137 = NotificationDialog_TypeInfo;
    v138 = (UnityEngine_GameObject_o *)v135;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v137 = NotificationDialog_TypeInfo;
    }
    v139 = (float *)&v137->static_fields->BANNER_RETRY_MAX;
    v140 = v139[20];
    v141 = v139[21];
    v142 = v139[22];
    v153 = NotificationDialog__getVectFromScript(v135, script, (System_String_o *)StringLiteral_17412/*"buttonOffset"*/, v136);
    v153.fields.x = v140 + v153.fields.x;
    v153.fields.y = v141 + v153.fields.y;
    v153.fields.z = v142 + v153.fields.z;
    GameObjectExtensions__SetLocalPosition(v138, v153, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v48 )
      goto LABEL_138;
    UIPanel__set_depth(v48, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v132 )
  {
    v143 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v143, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v143, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !transform )
      goto LABEL_138;
    CommonUI__SetLoadMode((CommonUI_o *)transform, 1, 0LL);
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    transform = (UILabel_o *)this->fields.baseWindow;
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    v144 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v144, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v144, v145);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A521C4 & 1) == 0 )
  {
    sub_1B863B8(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method);
    byte_4A521C4 = 1;
  }
  v3 = sub_1B86604(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A521C8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_NotificationDialog_EndOpen__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A521C8 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B86614(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A521C9 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4A521C9 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v7);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A521C1 & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_1B863B8(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_4A521C1 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B86614(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A521C0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1B863B8(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A521C0 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B86614(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


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
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  __int64 methodPtr_low; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  Il2CppObject *Item; // x20
  double v18; // d8
  Il2CppObject *v19; // x0
  double v20; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A521BF & 1) == 0 )
  {
    sub_1B863B8(&System_Convert_TypeInfo, script);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_1B863B8(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_4A521BF = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B86614(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_4A487E1 )
    {
      sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4A487E1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A521C5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15425/*"Window/OkBtn"*/, method);
    byte_4A521C5 = 1;
  }
  return (System_String_o *)StringLiteral_15425/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D71F8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D71B0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4A521CA & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, isOk);
    byte_4A521CA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NotificationDialog__StartDownloadBanner_d__54_o *v4; // x20
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v29; // x8
  System_Collections_Generic_Dictionary_string__object__c *v30; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v36; // x23
  int32_t v37; // w24
  int32_t v38; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v40; // x22
  System_Byte_array *data; // x0
  System_String_o *v42; // x0
  bool IsNullOrEmpty; // w0
  int v44; // w20
  NotificationDialog_c *v45; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v47; // x22
  ErrorDialog_ClickDelegate_o *v48; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  bool v53; // w21
  int32_t v54; // w1
  CGThumbnailListItem_o *p_banner_5__2; // x21
  NotificationDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  System_String_o *v58; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v60; // x22
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v63; // x22
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v66; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v73; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v80; // x10
  __int64 size; // x11
  Il2CppClass **v82; // x0
  NotificationDialog_o *v83; // x0
  const MethodInfo *v84; // x3
  UnityEngine_GameObject_o *v85; // x22
  NotificationDialog_c *v86; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v88; // s8
  float v89; // s9
  float v90; // s10
  NotificationDialog_o *v91; // x0
  const MethodInfo *v92; // x3
  __int64 v93; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v98; // x0
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  int32_t v101; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v104; // w20
  const MethodInfo *v105; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v107; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A521CB & 1) == 0 )
  {
    sub_1B863B8(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B863B8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v11);
    sub_1B863B8(&NotificationDialog_TypeInfo, v12);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B863B8(&UnityEngine_Texture2D_TypeInfo, v16);
    sub_1B863B8(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_16814/*"bannerUrl"*/, v18);
    sub_1B863B8(&StringLiteral_23187/*"size"*/, v19);
    sub_1B863B8(&StringLiteral_24172/*"urlOpenType"*/, v20);
    sub_1B863B8(&StringLiteral_22047/*"offset"*/, v21);
    sub_1B863B8(&StringLiteral_24171/*"urlLink"*/, v22);
    sub_1B863B8(&StringLiteral_1/*""*/, v23);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1B863B8(&StringLiteral_9112/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v24);
    byte_4A521CB = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_94;
    p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__54_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_35;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_25;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v36 = this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                  this,
                                                                  this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v37 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                  this,
                                                                  this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v38 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v40 = (UnityEngine_Texture2D_o *)sub_1B86604(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_69244344(v40, v37, v38, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_69463612(v40, data, 0LL);
    }
    else
    {
LABEL_25:
      v40 = 0LL;
      v36 = 0LL;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0LL) )
    {
      goto LABEL_35;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    v42 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v42, 0LL);
    if ( !v36 || !IsNullOrEmpty || !v36->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v40,
                                                                0LL,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_94;
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)_4__this->fields.lnkTexture,
                                       0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__Instantiate_object_(
                                                                    gameObject,
                                                                    (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v73 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v73, parent, 0LL);
        if ( !byte_4A487E6 )
        {
          sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v75);
          byte_4A487E6 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v73,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v73 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v73,
                                                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v80 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
        ++additionalTextures->fields._version;
        if ( !items )
          goto LABEL_94;
        size = additionalTextures->fields._size;
        lnkTexture = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            additionalTextures,
            (Il2CppObject *)this,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v82[4] = (Il2CppClass *)lnkTexture;
          sub_1B8635C((CGThumbnailListItem_o *)(v82 + 4), (int32_t)lnkTexture, v76, v77);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v40,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v83 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v85 = (UnityEngine_GameObject_o *)v83;
      v86 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v86 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v86->static_fields->BANNER_RETRY_MAX;
      v88 = p_BANNER_RETRY_MAX[17];
      v89 = p_BANNER_RETRY_MAX[18];
      v90 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v83,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22047/*"offset"*/,
                         v84);
      VectFromScript.fields.x = v88 + VectFromScript.fields.x;
      VectFromScript.fields.y = v89 + VectFromScript.fields.y;
      VectFromScript.fields.z = v90 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v85, VectFromScript, 0LL);
      v109 = NotificationDialog__getVectFromScript(
               v91,
               v4->fields._banner_5__2,
               (System_String_o *)StringLiteral_23187/*"size"*/,
               v92);
      x = v109.fields.x;
      y = v109.fields.y;
      z = v109.fields.z;
      if ( !byte_4A487E1 )
      {
        sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v93);
        byte_4A487E1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( x == static_fields->zeroVector.fields.x
        && y == static_fields->zeroVector.fields.y
        && z == static_fields->zeroVector.fields.z )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        if ( x == INFINITY )
          v100 = 0x80000000;
        else
          v100 = (int)x;
        if ( y == INFINITY )
          v101 = 0x80000000;
        else
          v101 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v100, v101, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v98,
                                                v4->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24172/*"urlOpenType"*/,
                                                v99);
      banner_5__2 = v4->fields._banner_5__2;
      v104 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24171/*"urlLink"*/,
                           v105);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v104, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v107);
    }
    else
    {
LABEL_35:
      v44 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v44;
      v45 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v45 = NotificationDialog_TypeInfo;
      }
      if ( v44 <= v45->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9112/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v48 = (ErrorDialog_ClickDelegate_o *)sub_1B86604(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v48,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v47, v48, 0, 0LL);
      }
    }
    v50 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v50 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v50, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, 0, v51, v52);
    }
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= banners->max_length )
          sub_1B8661C(this, method);
        v29 = banners->m_Items[mLoadingIdx];
        if ( v29 )
        {
          v30 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v32 = (System_Collections_Generic_Dictionary_string__object__c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v29
                : 0LL;
          else
            v32 = 0LL;
          v4->fields._banner_5__2 = v32;
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
          if ( LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v54 = (System_Collections_Generic_Dictionary_string__object__c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == v30
                ? (int)v29
                : 0;
          else
            v54 = 0;
        }
        else
        {
          v54 = 0;
          v4->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
        }
        sub_1B8635C(p_banner_5__2, v54, v2, v3);
        v58 = NotificationDialog__getStringFromScript(
                v56,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_16814/*"bannerUrl"*/,
                v57);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v58, 0LL);
        v60 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1B86604(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor(v60, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v60;
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, (int32_t)v60, v61, v62);
        v63 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1B86604(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v63, 0, 0LL);
        v4->fields._texDl_5__3 = v63;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._texDl_5__3, (int32_t)v63, v64, v65);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v53 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v66 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v66;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(p__2__current, (int32_t)v66, v68, v69);
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return v53;
          }
        }
      }
    }
LABEL_94:
    sub_1B86614(this, method);
  }
  return 0;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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