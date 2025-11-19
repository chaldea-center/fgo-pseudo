void NotificationDialog___cctor(const MethodInfo *method)
{
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v2; // x8
  struct NotificationDialog_StaticFields *v3; // x9
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9

  if ( (byte_4CB9E2F & 1) == 0 )
  {
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    byte_4CB9E2F = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
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
  v6 = v2->static_fields;
  *(_OWORD *)&v6->MESSAGE_BASE_SIZE_X = xmmword_CEBF70;
  *(_QWORD *)&v6->IMAGE_BASE_POS.fields.y = 0;
  v6->IMAGE_BASE_POS.fields.x = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v8->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v2->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB9E2E & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB9E2E = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void NotificationDialog__AdjustMessageLabel(
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v28; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int monitor_high; // w27
  float v32; // s12
  float v33; // s0
  UnityEngine_Object_o *v34; // x27
  NotificationDialog_c *v35; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  float v38; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v41; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v42; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v44; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CB9E24 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C6BA08(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB9E24 = 1;
  }
  v44 = 0;
  v42 = 0;
  component = 0;
  v40 = 0;
  v41 = 0;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_54;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_31943BC *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_30;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v42,
                                                 (const MethodInfo_3132C34 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v42 )
          goto LABEL_54;
        monitor_high = HIDWORD(component[10].monitor);
        v32 = (float)((float)SHIDWORD(v42[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v33 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v32);
        if ( isAdjustTextPos )
          y = v32 + (float)(v33 * 0.5);
        if ( v33 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v33;
      }
      else
      {
LABEL_30:
        v35 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v35 = NotificationDialog_TypeInfo;
        }
        static_fields = v35->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( baseWindow )
      {
        UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( baseWindow )
        {
          baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                     (UnityEngine_Component_o *)baseWindow,
                                                     &v41,
                                                     (const MethodInfo_3132C34 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v41;
          if ( !v41 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1C6BC60(baseWindow, v28);
    }
  }
  messageLabel = this->fields.messageLabel;
  v34 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v34, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
      UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
      if ( baseWindow )
      {
        baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)baseWindow,
                                                   (Il2CppObject **)&v40,
                                                   (const MethodInfo_3132C34 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v40;
        if ( !v40 )
          goto LABEL_54;
LABEL_37:
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseWindow, 0, 0);
        goto LABEL_38;
      }
    }
    goto LABEL_54;
  }
LABEL_38:
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_64022968(message, 0xAu, 0);
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
  UILabel__set_spacingY(messageLabel, spacingY, 0);
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, messageSizeX, messageSizeY, 0);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0);
  if ( UnityEngine_Component__TryGetComponent_object_(
         (UnityEngine_Component_o *)messageLabel,
         &v44,
         (const MethodInfo_3132C34 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v44;
    if ( !v44 )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v44, 1, 0);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0);
  else
    UILabel__set_text(messageLabel, Empty, 0);
  if ( messagePosYForcedAdd == 0.0 )
    v38 = y;
  else
    v38 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
  v45.fields.x = x;
  v45.fields.y = v38;
  v45.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v45, 0);
}


void NotificationDialog__AdjustScriptMessageLabel(
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
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v20; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v23; // x25
  System_String_o *v24; // x23
  UnityEngine_Object_o *v25; // x21
  NotificationDialog_o *gameObject; // x21
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *v28; // x21
  NotificationDialog_o *v29; // x20
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4CB9E25 & 1) == 0 )
  {
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_21638/*"messageOffset"*/);
    byte_4CB9E25 = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v20 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
        goto LABEL_34;
      onChange = messageLabel->fields.onChange;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onChange->fields.extra_arg);
      y = *(float *)&onChange->fields.m_target;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
  }
  v20 = this->fields.messageLabel;
  v23 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0);
  }
  if ( message )
    v24 = System_String__Trim_64022968(message, 0xAu, 0);
  else
    v24 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v20 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v20,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0);
  UILabel__set_maxLineCount(v20, maxLine, 0);
  UILabel__set_fontSize(v20, this->fields.MESSAGE_FONT_SIZE, 0);
  WrapControlText__textAdjust(v20, v24, v20->fields.mFontSize, 0, 0);
  v25 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)messageLabel,
                                           0);
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_21638/*"messageOffset"*/,
                       v27);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0);
  }
  v28 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v29 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
      v32 = NotificationDialog__getVectFromScript(v29, script, (System_String_o *)StringLiteral_21638/*"messageOffset"*/, v30);
      v32.fields.x = x + v32.fields.x;
      v32.fields.z = z + v32.fields.z;
      v32.fields.y = y + v32.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v29, v32, 0);
      return;
    }
LABEL_34:
    sub_1C6BC60(messageLabel, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__CachedTitleLabel(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo_392D6FC *v2; // x3
  NotificationDialog_o *v3; // x19
  struct UILabel_o *titleLabel; // x8
  __int64 v5; // x1 OVERLAPPED
  __int64 *v6; // x0
  UnityEngine_Vector2Int_o v7; // x2
  __int64 v8; // x9
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t v10; // [xsp+8h] [xbp-28h]

  v3 = this;
  if ( (byte_4CB9E20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_Vector2Int___ctor__);
    this = (NotificationDialog_o *)sub_1C6BA08(&Method_System_Nullable_Vector2Int__get_HasValue__);
    byte_4CB9E20 = 1;
  }
  if ( !v3->fields.titleLabelDefaultSize.fields.hasValue )
  {
    titleLabel = v3->fields.titleLabel;
    if ( !titleLabel )
      sub_1C6BC60(this, method);
    v5 = *(_QWORD *)&titleLabel->fields.mWidth;
    v6 = &v9;
    v10 = 0;
    v9 = 0;
    v7 = (UnityEngine_Vector2Int_o)Method_System_Nullable_Vector2Int___ctor__;
    System_Nullable_Vector2Int____ctor(*(System_Nullable_Vector2Int__o *)(&v5 - 1), v7, v2);
    v8 = v9;
    v3->fields.titleLabelDefaultSize.fields.value.fields.m_Y = v10;
    *(_QWORD *)&v3->fields.titleLabelDefaultSize.fields.hasValue = v8;
  }
}


void NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_48289412(this, 0, v2);
}


void NotificationDialog__Close_48289412(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB9E2A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_NotificationDialog_EndClose__);
    byte_4CB9E2A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
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
    p_closeEndFunc->klass = 0;
    sub_1C6B9AC(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  const MethodInfo_392D714 *v5; // x2
  UIWidget_o *v6; // x21
  UIWidget_o *v7; // x21
  const MethodInfo_392D714 *v8; // x2
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  struct LinkableTexture_o *v19; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v21; // w21
  int32_t v22; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v24; // w8
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v29; // w21
  int32_t v30; // w2
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Object_o *v32; // x0
  int v33; // w8
  System_Collections_Generic_List_object__o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Nullable_Vector2Int__o v37; // 0:x0.12
  System_Nullable_Vector2Int__o v38; // 0:x0.12

  if ( (byte_4CB9E1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_Vector2Int__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9E1F = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = (__int64)this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    titleLabel = (__int64)this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
    {
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( this->fields.titleLabelDefaultSize.fields.hasValue )
      {
        v6 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v37.fields.hasValue = &this->fields.titleLabelDefaultSize;
        v37.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v37, v5);
        if ( !v6 )
          goto LABEL_73;
        UIWidget__set_width(v6, titleLabel, 0);
        v38.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        v7 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v38.fields.hasValue = &this->fields.titleLabelDefaultSize;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v38, v8);
        if ( !v7 )
          goto LABEL_73;
        UIWidget__set_height(v7, SHIDWORD(titleLabel), 0);
      }
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_73;
      titleLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      v9 = (UnityEngine_Transform_o *)titleLabel;
      if ( !byte_4CAFC0E )
      {
        titleLabel = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v9 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0);
      this->fields.mBannerWWW = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mBannerWWW, 0, v14, v15);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
    if ( (titleLabel & 1) != 0 )
    {
      v17 = this->fields.lnkTexture;
      if ( !v17 )
        goto LABEL_73;
      titleLabel = (__int64)v17->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_73;
      v18 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(v18, 0);
      v19 = this->fields.lnkTexture;
      if ( !v19 )
        goto LABEL_73;
      titleLabel = (__int64)v19->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_73;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleLabel + 744LL))(
        titleLabel,
        0,
        *(_QWORD *)(*(_QWORD *)titleLabel + 752LL));
    }
    p_additionalSprites = &this->fields.additionalSprites;
    titleLabel = (__int64)this->fields.additionalSprites;
    if ( titleLabel )
    {
      v21 = 0;
      while ( 1 )
      {
        v22 = *(_DWORD *)(titleLabel + 24);
        if ( v21 >= v22 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v21,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71659676(gameObject, 0);
          titleLabel = (__int64)*p_additionalSprites;
          ++v21;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_73;
      }
      v24 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v24;
      if ( v22 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v22, 0);
    }
    else
    {
      v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v25,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v25;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.additionalSprites, (int32_t)v25, v26, v27);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = (__int64)this->fields.additionalTextures;
    if ( titleLabel )
    {
      v29 = 0;
      while ( 1 )
      {
        v30 = *(_DWORD *)(titleLabel + 24);
        if ( v29 >= v30 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v29,
                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = *(_QWORD *)(titleLabel + 48);
          if ( titleLabel )
          {
            v31 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71659676(v31, 0);
            titleLabel = (__int64)*p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)titleLabel,
                                      v29,
                                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0);
                UnityEngine_Object__Destroy_71659676(v32, 0);
                titleLabel = (__int64)*p_additionalTextures;
                ++v29;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_73;
      }
      v33 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v33;
      if ( v30 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v30, 0);
    }
    else
    {
      v34 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v34;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.additionalTextures, (int32_t)v34, v35, v36);
    }
    titleLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      BaseDialog__Init((BaseDialog_o *)this, 0);
      return;
    }
LABEL_73:
    sub_1C6BC60(titleLabel, method);
  }
}


void NotificationDialog__LoadBanners(NotificationDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mAfterLoad, (int32_t)callback, (int32_t)method, v3);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void NotificationDialog__LoadNext(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Object_array *banners; // x9
  int32_t v3; // w8
  System_Collections_IEnumerator_o *started; // x1

  banners = this->fields.banners;
  v3 = this->fields.mLoadingIdx + 1;
  this->fields.mLoadingIdx = v3;
  if ( !banners )
    sub_1C6BC60(this, method);
  if ( v3 >= SLODWORD(banners->max_length) )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
}


void NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB9E2B & 1) == 0 )
  {
    sub_1C6BA08(&Method_NotificationDialog_OnClickOk__);
    byte_4CB9E2B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__Open(
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
        bool useTitleCondensedScale,
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  bool v23; // w10
  System_Nullable_int__o v24; // x14
  System_Nullable_float__o v25; // x21
  System_Nullable_int__o v26; // x15
  System_Nullable_int__o v27; // x16
  int32_t v28; // w17
  System_Nullable_float__o v29; // x6
  int32_t v30; // w19
  int32_t v31; // w20
  bool v32; // w13
  float value; // s9
  NotificationDialog_c *v36; // x0
  int32_t v37; // w20
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  bool v40; // w24
  bool v41; // w27
  System_Nullable_int__o v42; // x19
  int32_t v43; // w21
  float y; // s1
  NotificationDialog_c *v45; // x0
  int32_t v46; // w20
  System_String_o *v47; // x22
  System_String_o *v48; // x23
  bool v49; // w24
  bool v50; // w28
  System_Nullable_int__o v51; // x19
  int32_t v52; // w21
  bool v53; // [xsp+0h] [xbp-B0h]
  System_Nullable_float__o v54; // [xsp+0h] [xbp-B0h]
  System_String_o *v55; // [xsp+8h] [xbp-A8h]
  System_Nullable_float__o v56; // [xsp+8h] [xbp-A8h]
  System_Nullable_float__o v57; // [xsp+8h] [xbp-A8h]
  System_String_o *v58; // [xsp+10h] [xbp-A0h]
  System_Nullable_int__o v59; // [xsp+10h] [xbp-A0h]
  System_Nullable_int__o v60; // [xsp+10h] [xbp-A0h]
  int32_t v61; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v62; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v63; // [xsp+18h] [xbp-98h]
  int32_t v64; // [xsp+20h] [xbp-90h]
  int32_t v65; // [xsp+24h] [xbp-8Ch]
  NotificationDialog_ClickDelegate_o *funca; // [xsp+28h] [xbp-88h]
  NotificationDialog_ClickDelegate_o *funcb; // [xsp+28h] [xbp-88h]
  NotificationDialog_ClickDelegate_o *funcc; // [xsp+28h] [xbp-88h]
  int32_t v69; // [xsp+34h] [xbp-7Ch]
  int32_t v70; // [xsp+34h] [xbp-7Ch]
  int32_t v71; // [xsp+34h] [xbp-7Ch]
  bool v72; // [xsp+38h] [xbp-78h]
  bool v73; // [xsp+38h] [xbp-78h]

  v23 = useTitleCondensedScale;
  v24 = buttonWidgetSizeY;
  v25 = buttonPosY;
  v26 = buttonWidgetSizeX;
  v27 = messageWidgetSizeY;
  v28 = spacingY;
  v29 = titlePosY;
  v30 = onClickOkSeKind;
  v31 = messageFontSize;
  v32 = canMaskTouchClose;
  if ( (byte_4CB9E21 & 1) == 0 )
  {
    v69 = maxLine;
    v61 = panelDepth;
    funca = func;
    v55 = title;
    v58 = message;
    v53 = isLineDraw;
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_float__get_HasValue__);
    v26 = buttonWidgetSizeX;
    v24 = buttonWidgetSizeY;
    isLineDraw = v53;
    title = v55;
    message = v58;
    func = funca;
    panelDepth = v61;
    maxLine = v69;
    v32 = canMaskTouchClose;
    v29 = titlePosY;
    v28 = spacingY;
    v27 = messageWidgetSizeY;
    v25 = buttonPosY;
    v23 = useTitleCondensedScale;
    byte_4CB9E21 = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v36 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v70 = maxLine;
      v72 = v32;
      v37 = panelDepth;
      funcb = func;
      v38 = message;
      v39 = title;
      v40 = isLineDraw;
      v41 = v23;
      v59 = v27;
      v62 = v24;
      v42 = v26;
      v54 = v25;
      v56 = v29;
      v43 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v28 = v43;
      v25 = v54;
      v29 = v56;
      v27 = v59;
      v24 = v62;
      v26 = v42;
      func = funcb;
      panelDepth = v37;
      v31 = messageFontSize;
      v30 = onClickOkSeKind;
      maxLine = v70;
      v32 = v72;
      v36 = NotificationDialog_TypeInfo;
      v23 = v41;
      isLineDraw = v40;
      title = v39;
      message = v38;
    }
    value = v36->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v25.fields.hasValue )
  {
    y = v25.fields.value;
  }
  else
  {
    v45 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v71 = maxLine;
      v73 = v32;
      v64 = v31;
      v65 = v30;
      v46 = panelDepth;
      funcc = func;
      v47 = message;
      v48 = title;
      v49 = isLineDraw;
      v50 = v23;
      v60 = v27;
      v63 = v24;
      v51 = v26;
      v52 = v28;
      v57 = v29;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v29 = v57;
      v27 = v60;
      v26 = v51;
      v24 = v63;
      func = funcc;
      panelDepth = v46;
      v31 = v64;
      v30 = v65;
      maxLine = v71;
      v32 = v73;
      v45 = NotificationDialog_TypeInfo;
      v28 = v52;
      v23 = v50;
      isLineDraw = v49;
      title = v48;
      message = v47;
    }
    y = v45->static_fields->BUTTON_BASE_POS.fields.y;
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
    v32,
    value,
    y,
    v31,
    v30,
    v29,
    v28,
    v27,
    adjustText,
    v26,
    v24,
    messagePosYForcedAdd,
    isAdjustTextPos,
    0,
    v23,
    (const MethodInfo *)isAdjustTextPos);
}


void NotificationDialog__OpenDialog(
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
        bool useTitleCondensedScale,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v35; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  const MethodInfo *v39; // x1
  System_String_o *v40; // x1
  NotificationDialog_c *v41; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v47; // x0
  struct NotificationDialog_StaticFields *v48; // x8
  float v49; // s11
  float v50; // s12
  unsigned __int64 v51; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v54; // x0
  struct NotificationDialog_StaticFields *v55; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v61; // x0
  struct NotificationDialog_StaticFields *v62; // x8
  UILabel_o *v63; // x22
  float v64; // s10
  float v65; // s9
  float v66; // s13
  float v67; // s11
  float y; // s12
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v73; // x22
  unsigned __int64 v74; // x19
  unsigned __int64 v75; // x25
  System_Action_o *v76; // x19
  const MethodInfo *v77; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9E22 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_NotificationDialog_EndOpen__);
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_float__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9E22 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v35 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v35 )
        goto LABEL_114;
      this->fields.keepPanelDepth = v35->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v32, v33);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v39);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_114;
    UILabel__set_fontSize(transform, titleSize, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_114;
    if ( title )
      v40 = title;
    else
      v40 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v40, 0);
    v41 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v41 = NotificationDialog_TypeInfo;
    }
    static_fields = v41->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_114;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v83.fields.y = v;
    v83.fields.x = x;
    v83.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v83, 0);
  }
  if ( useTitleCondensedScale )
    NotificationDialog__SetCondensedScaleTitle(this, v39);
  v47 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v47 = NotificationDialog_TypeInfo;
  }
  v48 = v47->static_fields;
  v49 = v48->MESSAGE_BASE_POS.fields.x;
  v50 = v48->MESSAGE_BASE_POS.fields.z;
  if ( v48->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v48->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v51 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = NotificationDialog_TypeInfo;
      v48 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v51) = v48->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v47->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0);
    if ( isLineDraw )
    {
      v54 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v54 = NotificationDialog_TypeInfo;
      }
      v55 = v54->static_fields;
      v49 = v55->MESSAGE_LINE_POS.fields.x;
      messagePosY = v55->MESSAGE_LINE_POS.fields.y;
      v50 = v55->MESSAGE_LINE_POS.fields.z;
      LODWORD(v51) = v55->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v84.fields.x = v49;
    v84.fields.y = messagePosY;
    v84.fields.z = v50;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v51,
      maxLine,
      messageFontSize,
      adjustText,
      v84,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v77);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v61 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v61 = NotificationDialog_TypeInfo;
    }
    v62 = v61->static_fields;
    v63 = this->fields.okBtnLabel;
    v64 = v62->BUTTON_BASE_POS.fields.x;
    v65 = v62->BUTTON_BASE_POS.fields.z;
    v66 = v62->BUTTON_TEXT_POS.fields.x;
    y = v62->BUTTON_TEXT_POS.fields.y;
    v67 = v62->BUTTON_TEXT_POS.fields.z;
    if ( v62->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v62->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v63 )
      goto LABEL_114;
    UILabel__set_text(v63, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v85.fields.x = v66;
    v85.fields.y = y;
    v85.fields.z = v67;
    GameObjectExtensions__SetLocalPosition(v69, v85, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v86.fields.x = v64;
    v86.fields.y = buttonPosY;
    v86.fields.z = v65;
    GameObjectExtensions__SetLocalPosition(v70, v86, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    v71 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v73 = UnityEngine_GameObject__GetComponent_object_(
            v71,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v74 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v74) = transform->fields.onChange->fields.data;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v75 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_114;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v75) = HIDWORD(transform->fields.onChange->fields.data);
          if ( !Component_object )
            goto LABEL_114;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v74, 0);
        UIWidget__set_height((UIWidget_o *)Component_object, v75, 0);
        if ( !v73 )
          goto LABEL_114;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v73, 0);
        size.fields.x = (float)(int)v74;
        size.fields.y = (float)(int)v75;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v73, size, 0);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v35 )
    {
      UIPanel__set_depth(v35, keepPanelDepth, 0);
      goto LABEL_113;
    }
LABEL_114:
    sub_1C6BC60(transform, keepPanelDepth);
  }
LABEL_113:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v76 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0, 0);
}


void NotificationDialog__Open_48283440(
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
  const MethodInfo *v18; // [xsp+60h] [xbp-20h]

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
    0,
    1,
    0,
    0,
    0.0,
    isAdjustTextPos,
    messageWidgetSizeX,
    0,
    v18);
}


void NotificationDialog__Open_48284804(
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v23; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  const MethodInfo *v27; // x1
  System_String_o *v28; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v30; // x3
  NotificationDialog_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v34; // s8
  float v35; // s9
  float v36; // s10
  NotificationDialog_c *v37; // x0
  float *v38; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v40; // s8
  float v41; // s9
  float v42; // s10
  int32_t v43; // w26
  NotificationDialog_c *v44; // x0
  float *v45; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v48; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 naturalAligment; // x11
  struct System_Object_array *v51; // x0
  struct System_Object_array **p_sprites; // x23
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  il2cpp_array_size_t max_length; // x8
  UnityEngine_Component_o *v56; // x25
  unsigned __int64 v57; // x21
  Il2CppObject *v58; // x25
  UnityEngine_GameObject_o *v59; // x25
  UnityEngine_Component_o *parent; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v65; // x10
  __int64 size; // x11
  Il2CppClass **v67; // x0
  struct System_Object_array *v68; // x8
  System_Collections_Generic_Dictionary_string__object__o *v69; // x8
  __int64 v70; // x11
  System_Collections_Generic_Dictionary_string__object__o *v71; // x26
  System_Collections_Generic_Dictionary_string__object__o *v72; // x22
  NotificationDialog_o *v73; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v75; // x27
  const MethodInfo *v76; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v78; // x0
  const MethodInfo *v79; // x3
  NotificationDialog_c *v80; // x8
  UnityEngine_GameObject_o *v81; // x27
  float *v82; // x8
  float v83; // s8
  float v84; // s9
  float v85; // s10
  NotificationDialog_o *v86; // x0
  const MethodInfo *v87; // x3
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v92; // x0
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  int32_t v95; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v97; // w27
  const MethodInfo *v98; // x3
  System_String_o *v99; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v101; // x11
  struct System_Object_array *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *banners; // x8
  int v106; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v108; // x23
  NotificationDialog_o *v109; // x0
  const MethodInfo *v110; // x3
  NotificationDialog_c *v111; // x8
  UnityEngine_GameObject_o *v112; // x23
  float *v113; // x8
  float v114; // s8
  float v115; // s9
  float v116; // s10
  System_Action_o *v117; // x20
  System_Action_o *v118; // x20
  const MethodInfo *v119; // x2
  UIPanel_o *v121; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9E23 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_NotificationDialog_EndOpen__);
    sub_1C6BA08(&Method_NotificationDialog__Open_b__44_0__);
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_17044/*"banners"*/);
    sub_1C6BA08(&StringLiteral_23601/*"size"*/);
    sub_1C6BA08(&StringLiteral_24565/*"urlOpenType"*/);
    sub_1C6BA08(&StringLiteral_22457/*"offset"*/);
    sub_1C6BA08(&StringLiteral_24199/*"titleOffset"*/);
    sub_1C6BA08(&StringLiteral_23711/*"spriteName"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_24564/*"urlLink"*/);
    sub_1C6BA08(&StringLiteral_17654/*"buttonOffset"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_23712/*"sprites"*/);
    byte_4CB9E23 = 1;
  }
  value = 0;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v23 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v23->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v20, v21);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v27);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_138;
    UILabel__set_fontSize(transform, titleSize, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    v28 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v28, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v31 = NotificationDialog_TypeInfo;
    v32 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v31 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v31->static_fields->BANNER_RETRY_MAX;
    v34 = p_BANNER_RETRY_MAX[1];
    v35 = p_BANNER_RETRY_MAX[2];
    v36 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24199/*"titleOffset"*/,
                       v30);
    VectFromScript.fields.x = v34 + VectFromScript.fields.x;
    VectFromScript.fields.y = v35 + VectFromScript.fields.y;
    VectFromScript.fields.z = v36 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v32, VectFromScript, 0);
  }
  v37 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v37 = NotificationDialog_TypeInfo;
  }
  v38 = (float *)&v37->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v40 = v38[4];
  v41 = v38[5];
  v42 = v38[6];
  v43 = *((_DWORD *)v38 + 14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0);
    if ( isLineDraw )
    {
      v44 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v44 = NotificationDialog_TypeInfo;
      }
      v45 = (float *)&v44->static_fields->BANNER_RETRY_MAX;
      v40 = v45[10];
      v41 = v45[11];
      v42 = v45[12];
      v43 = *((_DWORD *)v45 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v124.fields.x = v40;
    v124.fields.y = v41;
    v124.fields.z = v42;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v43, maxLine, v124, script, v48);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_23712/*"sprites"*/,
                               &value,
                               (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_95;
    if ( !value )
      goto LABEL_138;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_138;
    }
    v51 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v51;
    p_sprites = &this->fields.sprites;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sprites, (int32_t)v51, v53, v54);
    if ( this->fields.sprites && (max_length = this->fields.sprites->max_length) != 0 )
    {
      if ( (int)max_length >= 1 )
      {
        v56 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v57 = 0;
        v121 = v23;
        while ( 1 )
        {
          if ( v57 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v58 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v58,
                                       (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v59 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0);
            GameObjectExtensions__SetParent(v59, parent, 0);
            if ( !byte_4CAFC0E )
            {
              sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
              byte_4CAFC0E = 1;
            }
            GameObjectExtensions__SetLocalScale(v59, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            if ( !v59 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v59,
                                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v65 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v56 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
            }
            else
            {
              v67 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v67[4] = (Il2CppClass *)v56;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v56, v61, v62);
            }
          }
          v68 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v57 >= LODWORD(v68->max_length) )
            sub_1C6BC68(transform);
          v69 = (System_Collections_Generic_Dictionary_string__object__o *)v68->m_Items[v57];
          if ( v69
            && (v70 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
                v69->klass->_2.naturalAligment >= (unsigned int)v70) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v69->klass->_2.typeHierarchy[v70 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v71 = v69;
            else
              v71 = 0;
            if ( !v56 )
              break;
          }
          else
          {
            v71 = 0;
            if ( !v56 )
              break;
          }
          v72 = script;
          v73 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v56, 0);
          klass = (UISprite_o *)v56[2].klass;
          v75 = (UnityEngine_GameObject_o *)v73;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v73,
                               v71,
                               (System_String_o *)StringLiteral_23711/*"spriteName"*/,
                               v76);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0);
          if ( !v75 )
            break;
          UnityEngine_GameObject__SetActive(v75, (unsigned __int8)transform & 1, 0);
          v78 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v56, 0);
          v80 = NotificationDialog_TypeInfo;
          v81 = (UnityEngine_GameObject_o *)v78;
          script = v72;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v80 = NotificationDialog_TypeInfo;
          }
          v82 = (float *)&v80->static_fields->BANNER_RETRY_MAX;
          v23 = v121;
          v83 = v82[17];
          v84 = v82[18];
          v85 = v82[19];
          v125 = NotificationDialog__getVectFromScript(v78, v71, (System_String_o *)StringLiteral_22457/*"offset"*/, v79);
          v125.fields.x = v83 + v125.fields.x;
          v125.fields.y = v84 + v125.fields.y;
          v125.fields.z = v85 + v125.fields.z;
          GameObjectExtensions__SetLocalPosition(v81, v125, 0);
          v126 = NotificationDialog__getVectFromScript(v86, v71, (System_String_o *)StringLiteral_23601/*"size"*/, v87);
          x = v126.fields.x;
          y = v126.fields.y;
          z = v126.fields.z;
          if ( !byte_4CAFC09 )
          {
            sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC09 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v56, 0);
          }
          else
          {
            v94 = x == INFINITY ? 0x80000000 : (int)x;
            v95 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v56, v94, v95, 0);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v92,
                                                    v71,
                                                    (System_String_o *)StringLiteral_24565/*"urlOpenType"*/,
                                                    v93);
          v97 = (int)IntFromScript;
          v99 = NotificationDialog__getStringFromScript(IntFromScript, v71, (System_String_o *)StringLiteral_24564/*"urlLink"*/, v98);
          LinkableSprite__SetUp((LinkableSprite_o *)v56, v97, v99, 0);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v57 >= SLODWORD((*p_sprites)->max_length) )
            goto LABEL_98;
        }
LABEL_138:
        sub_1C6BC60(transform, keepPanelDepth);
      }
    }
    else
    {
LABEL_95:
      transform = (UILabel_o *)this->fields.lnkSprite;
      if ( !transform )
        goto LABEL_138;
      transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    }
  }
LABEL_98:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_17044/*"banners"*/,
                               &value,
                               (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v101 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment < (unsigned int)v101
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v101 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v102 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v102;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.banners, (int32_t)v102, v103, v104);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( banners->max_length )
        {
          v106 = 0;
          goto LABEL_113;
        }
      }
    }
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  v106 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v108 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v108 )
      goto LABEL_138;
    UILabel__set_text(v108, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    v109 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v111 = NotificationDialog_TypeInfo;
    v112 = (UnityEngine_GameObject_o *)v109;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v111 = NotificationDialog_TypeInfo;
    }
    v113 = (float *)&v111->static_fields->BANNER_RETRY_MAX;
    v114 = v113[20];
    v115 = v113[21];
    v116 = v113[22];
    v127 = NotificationDialog__getVectFromScript(v109, script, (System_String_o *)StringLiteral_17654/*"buttonOffset"*/, v110);
    v127.fields.x = v114 + v127.fields.x;
    v127.fields.y = v115 + v127.fields.y;
    v127.fields.z = v116 + v127.fields.z;
    GameObjectExtensions__SetLocalPosition(v112, v127, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v23 )
      goto LABEL_138;
    UIPanel__set_depth(v23, keepPanelDepth, 0);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  if ( v106 )
  {
    v117 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v117, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v117, 0, 0, 0);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !transform )
      goto LABEL_138;
    CommonUI__SetLoadMode((CommonUI_o *)transform, 1, 0);
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (UILabel_o *)this->fields.baseWindow;
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    v118 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v118, (Il2CppObject *)this, Method_NotificationDialog__Open_b__44_0__, 0);
    NotificationDialog__LoadBanners(this, v118, v119);
  }
}


void NotificationDialog__SetCondensedScaleTitle(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *Value; // x0
  UILabel_o *v6; // x20
  const MethodInfo_392D714 *v7; // x2
  System_Nullable_Vector2Int__o v8; // 0:x0.12

  if ( (byte_4CB9E29 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E29 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
  {
    Value = this->fields.titleLabel;
    if ( !Value
      || (((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))Value->klass->vtable._33_MakePixelPerfect.methodPtr)(
            Value,
            Value->klass->vtable._33_MakePixelPerfect.method),
          v6 = this->fields.titleLabel,
          *(_QWORD *)&v8.fields.hasValue = &this->fields.titleLabelDefaultSize,
          v8.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__,
          Value = (struct UILabel_o *)System_Nullable_Vector2Int___get_Value(v8, v7),
          !v6) )
    {
      sub_1C6BC60(Value, v4);
    }
    UILabel__SetCondensedScale(v6, (int32_t)Value, 0, 0);
  }
}


System_Collections_IEnumerator_o *NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB9E2C & 1) == 0 )
  {
    sub_1C6BA08(&NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
    byte_4CB9E2C = 1;
  }
  v3 = sub_1C6BC54(NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void NotificationDialog___Open_b__44_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_4CB9E30 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_NotificationDialog_EndOpen__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9E30 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C6BC60(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0);
  v4 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog___StartDownloadBanner_b__57_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CB9E31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CB9E31 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C6BC60(0, v7);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


int32_t NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9E28 & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CB9E28 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C6BC60(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0);
}


System_String_o *NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9E27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&string_TypeInfo);
    this = (NotificationDialog_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9E27 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C6BC60(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0;
}


UnityEngine_Vector3_o NotificationDialog__getVectFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  __int64 naturalAligment; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  Il2CppObject *Item; // x20
  double v13; // d8
  Il2CppObject *v14; // x0
  double v15; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB9E26 & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    byte_4CB9E26 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C6BC60(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
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


System_String_o *NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB9E2D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15649/*"Window/OkBtn"*/);
    byte_4CB9E2D = 1;
  }
  return (System_String_o *)StringLiteral_15649/*"Window/OkBtn"*/;
}


void NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA6380;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA6338;
}


System_IAsyncResult_o *NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4CB9E32 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB9E32 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}


void NotificationDialog__StartDownloadBanner_d__57___ctor(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NotificationDialog__StartDownloadBanner_d__57__MoveNext(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  NotificationDialog__StartDownloadBanner_d__57_o *v4; // x20
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v9; // x8
  System_Collections_Generic_Dictionary_string__object__c *v10; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__57_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__57_o *v16; // x23
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v20; // x22
  System_Byte_array *data; // x0
  System_String_o *v22; // x0
  bool IsNullOrEmpty; // w0
  int v24; // w20
  NotificationDialog_c *v25; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x22
  ErrorDialog_ClickDelegate_o *v28; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  bool v33; // w21
  int32_t v34; // w1
  CGThumbnailListItem_o *p_banner_5__2; // x21
  NotificationDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *v38; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v43; // x22
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v46; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  NotificationDialog__StartDownloadBanner_d__57_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__57_o *v53; // x23
  UnityEngine_Component_o *parent; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v59; // x10
  __int64 size; // x11
  Il2CppClass **v61; // x0
  NotificationDialog_o *v62; // x0
  const MethodInfo *v63; // x3
  UnityEngine_GameObject_o *v64; // x22
  NotificationDialog_c *v65; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v67; // s8
  float v68; // s9
  float v69; // s10
  NotificationDialog_o *v70; // x0
  const MethodInfo *v71; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  int32_t v79; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v82; // w20
  const MethodInfo *v83; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v85; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CB9E33 & 1) == 0 )
  {
    sub_1C6BA08(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_NotificationDialog__StartDownloadBanner_b__57_0__);
    sub_1C6BA08(&NotificationDialog_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&UnityEngine_Texture2D_TypeInfo);
    sub_1C6BA08(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1C6BA08(&StringLiteral_17037/*"bannerUrl"*/);
    sub_1C6BA08(&StringLiteral_23601/*"size"*/);
    sub_1C6BA08(&StringLiteral_24565/*"urlOpenType"*/);
    sub_1C6BA08(&StringLiteral_22457/*"offset"*/);
    sub_1C6BA08(&StringLiteral_24564/*"urlLink"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_1C6BA08(&StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4CB9E33 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_94;
    p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__57_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_35;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0) )
      goto LABEL_25;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    if ( System_String__IsNullOrEmpty(error, 0) )
    {
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v16 = this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v17 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._6_MoveNext.method);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v18 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
      v20 = (UnityEngine_Texture2D_o *)sub_1C6BC54(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_71547260(v20, v17, v18, format, 0, 0);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      UnityEngine_ImageConversion__LoadImage_71768804(v20, data, 0);
    }
    else
    {
LABEL_25:
      v20 = 0;
      v16 = 0;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0) )
    {
      goto LABEL_35;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    v22 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v22, 0);
    if ( !v16 || !IsNullOrEmpty || !v16->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v20,
                                                                0,
                                                                0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_94;
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)_4__this->fields.lnkTexture,
                                       0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__Instantiate_object_(
                                                                    gameObject,
                                                                    (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v53 = this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v53, parent, 0);
        if ( !byte_4CAFC0E )
        {
          sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v53,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        if ( !v53 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v53,
                                                                    (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v59 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
        ++additionalTextures->fields._version;
        if ( !items )
          goto LABEL_94;
        size = additionalTextures->fields._size;
        lnkTexture = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            additionalTextures,
            (Il2CppObject *)this,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v61[4] = (Il2CppClass *)lnkTexture;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v61 + 4), (int32_t)lnkTexture, v55, v56);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__57_o *, UnityEngine_Texture2D_o *, _QWORD))&this->klass[1]._2.field_count)(
        this,
        v20,
        *(_QWORD *)&this->klass[1]._2.interfaces_count);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v62 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0);
      v64 = (UnityEngine_GameObject_o *)v62;
      v65 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v65 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v65->static_fields->BANNER_RETRY_MAX;
      v67 = p_BANNER_RETRY_MAX[17];
      v68 = p_BANNER_RETRY_MAX[18];
      v69 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v62,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22457/*"offset"*/,
                         v63);
      VectFromScript.fields.x = v67 + VectFromScript.fields.x;
      VectFromScript.fields.y = v68 + VectFromScript.fields.y;
      VectFromScript.fields.z = v69 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v64, VectFromScript, 0);
      v87 = NotificationDialog__getVectFromScript(
              v70,
              v4->fields._banner_5__2,
              (System_String_o *)StringLiteral_23601/*"size"*/,
              v71);
      x = v87.fields.x;
      y = v87.fields.y;
      z = v87.fields.z;
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( x == static_fields->zeroVector.fields.x
        && y == static_fields->zeroVector.fields.y
        && z == static_fields->zeroVector.fields.z )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0);
      }
      else
      {
        if ( x == INFINITY )
          v78 = 0x80000000;
        else
          v78 = (int)x;
        if ( y == INFINITY )
          v79 = 0x80000000;
        else
          v79 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v78, v79, 0);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v76,
                                                v4->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24565/*"urlOpenType"*/,
                                                v77);
      banner_5__2 = v4->fields._banner_5__2;
      v82 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24564/*"urlLink"*/,
                           v83);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v82, StringFromScript, 0);
      NotificationDialog__LoadNext(_4__this, v85);
    }
    else
    {
LABEL_35:
      v24 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v24;
      v25 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v25 = NotificationDialog_TypeInfo;
      }
      if ( v24 <= v25->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v28 = (ErrorDialog_ClickDelegate_o *)sub_1C6BC54(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__57_0__,
          0);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v27, v28, 0, 0);
      }
    }
    v30 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v30 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v30, 0);
      *p_mBannerWWW = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, 0, v31, v32);
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
        if ( (unsigned int)mLoadingIdx >= LODWORD(banners->max_length) )
          sub_1C6BC68(this);
        v9 = banners->m_Items[mLoadingIdx];
        if ( v9 )
        {
          v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            v12 = (System_Collections_Generic_Dictionary_string__object__c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v9
                : 0LL;
          else
            v12 = 0;
          v4->fields._banner_5__2 = v12;
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
          if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            v34 = (System_Collections_Generic_Dictionary_string__object__c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == v10
                ? (int)v9
                : 0;
          else
            v34 = 0;
        }
        else
        {
          v34 = 0;
          v4->fields._banner_5__2 = 0;
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
        }
        sub_1C6B9AC(p_banner_5__2, v34, v2, v3);
        v38 = NotificationDialog__getStringFromScript(
                v36,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17037/*"bannerUrl"*/,
                v37);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v38, 0);
        v40 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C6BC54(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor_74186304(v40, WebViewFullAddress, 0);
        _4__this->fields.mBannerWWW = v40;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, (int32_t)v40, v41, v42);
        v43 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C6BC54(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v43, 0, 0);
        v4->fields._texDl_5__3 = v43;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._texDl_5__3, (int32_t)v43, v44, v45);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
            0);
          this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
          v33 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v46 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v4->fields.__2__current = (Il2CppObject *)v46;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C6B9AC(p__2__current, (int32_t)v46, v48, v49);
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return v33;
          }
        }
      }
    }
LABEL_94:
    sub_1C6BC60(this, method);
  }
  return 0;
}


Il2CppObject *NotificationDialog__StartDownloadBanner_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_NotificationDialog__StartDownloadBanner_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NotificationDialog__StartDownloadBanner_d__57__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  ;
}