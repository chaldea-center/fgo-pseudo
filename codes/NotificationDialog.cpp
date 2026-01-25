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

  if ( (byte_4CE8477 & 1) == 0 )
  {
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    byte_4CE8477 = 1;
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
  *(_OWORD *)&v6->MESSAGE_BASE_SIZE_X = xmmword_CF54C0;
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
  if ( (byte_4CE8476 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8476 = 1;
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
  if ( (byte_4CE846C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CE846C = 1;
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
              (const MethodInfo_31C8358 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                                                 (const MethodInfo_3167CC0 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
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
                                                     (const MethodInfo_3167CC0 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v41;
          if ( !v41 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1C7BD40(baseWindow, v28);
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
                                                   (const MethodInfo_3167CC0 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
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
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_64233088(message, 0xAu, 0);
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
         (const MethodInfo_3167CC0 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
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
  if ( (byte_4CE846D & 1) == 0 )
  {
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21753/*"messageOffset"*/);
    byte_4CE846D = 1;
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
    v24 = System_String__Trim_64233088(message, 0xAu, 0);
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
                       (System_String_o *)StringLiteral_21753/*"messageOffset"*/,
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
      v32 = NotificationDialog__getVectFromScript(v29, script, (System_String_o *)StringLiteral_21753/*"messageOffset"*/, v30);
      v32.fields.x = x + v32.fields.x;
      v32.fields.z = z + v32.fields.z;
      v32.fields.y = y + v32.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v29, v32, 0);
      return;
    }
LABEL_34:
    sub_1C7BD40(messageLabel, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__CachedTitleLabel(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo_39693B8 *v2; // x3
  NotificationDialog_o *v3; // x19
  struct UILabel_o *titleLabel; // x8
  __int64 v5; // x1 OVERLAPPED
  __int64 *v6; // x0
  UnityEngine_Vector2Int_o v7; // x2
  __int64 v8; // x9
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t v10; // [xsp+8h] [xbp-28h]

  v3 = this;
  if ( (byte_4CE8468 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_Vector2Int___ctor__);
    this = (NotificationDialog_o *)sub_1C7BAE8(&Method_System_Nullable_Vector2Int__get_HasValue__);
    byte_4CE8468 = 1;
  }
  if ( !v3->fields.titleLabelDefaultSize.fields.hasValue )
  {
    titleLabel = v3->fields.titleLabel;
    if ( !titleLabel )
      sub_1C7BD40(this, method);
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

  NotificationDialog__Close_31649688(this, 0, v2);
}


void NotificationDialog__Close_31649688(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE8472 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_NotificationDialog_EndClose__);
    byte_4CE8472 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C7BA8C(&this->fields.closeEndFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C7BA8C(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
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
  const MethodInfo_39693D0 *v5; // x2
  UIWidget_o *v6; // x21
  UIWidget_o *v7; // x21
  const MethodInfo_39693D0 *v8; // x2
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v15; // x8
  UnityEngine_Object_o *v16; // x20
  struct LinkableTexture_o *v17; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v19; // w21
  int32_t v20; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v22; // w8
  System_Collections_Generic_List_object__o *v23; // x21
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v25; // w21
  int32_t v26; // w2
  UnityEngine_Object_o *v27; // x22
  UnityEngine_Object_o *v28; // x0
  int v29; // w8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Nullable_Vector2Int__o v31; // 0:x0.12
  System_Nullable_Vector2Int__o v32; // 0:x0.12

  if ( (byte_4CE8467 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_Vector2Int__get_HasValue__);
    sub_1C7BAE8(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8467 = 1;
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
        *(_QWORD *)&v31.fields.hasValue = &this->fields.titleLabelDefaultSize;
        v31.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v31, v5);
        if ( !v6 )
          goto LABEL_73;
        UIWidget__set_width(v6, titleLabel, 0);
        v32.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        v7 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v32.fields.hasValue = &this->fields.titleLabelDefaultSize;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v32, v8);
        if ( !v7 )
          goto LABEL_73;
        UIWidget__set_height(v7, SHIDWORD(titleLabel), 0);
      }
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_73;
      titleLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      v9 = (UnityEngine_Transform_o *)titleLabel;
      if ( !byte_4CE7E5E )
      {
        titleLabel = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
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
      sub_1C7BA8C(&this->fields.mBannerWWW, 0);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
    if ( (titleLabel & 1) != 0 )
    {
      v15 = this->fields.lnkTexture;
      if ( !v15 )
        goto LABEL_73;
      titleLabel = (__int64)v15->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_73;
      v16 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71870148(v16, 0);
      v17 = this->fields.lnkTexture;
      if ( !v17 )
        goto LABEL_73;
      titleLabel = (__int64)v17->fields.mUiTexture;
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
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_DWORD *)(titleLabel + 24);
        if ( v19 >= v20 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v19,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71870148(gameObject, 0);
          titleLabel = (__int64)*p_additionalSprites;
          ++v19;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_73;
      }
      v22 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v22;
      if ( v20 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v20, 0);
    }
    else
    {
      v23 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v23,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v23;
      sub_1C7BA8C(&this->fields.additionalSprites, v23);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = (__int64)this->fields.additionalTextures;
    if ( titleLabel )
    {
      v25 = 0;
      while ( 1 )
      {
        v26 = *(_DWORD *)(titleLabel + 24);
        if ( v25 >= v26 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v25,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = *(_QWORD *)(titleLabel + 48);
          if ( titleLabel )
          {
            v27 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_71870148(v27, 0);
            titleLabel = (__int64)*p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)titleLabel,
                                      v25,
                                      (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0);
                UnityEngine_Object__Destroy_71870148(v28, 0);
                titleLabel = (__int64)*p_additionalTextures;
                ++v25;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_73;
      }
      v29 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v29;
      if ( v26 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v26, 0);
    }
    else
    {
      v30 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v30;
      sub_1C7BA8C(&this->fields.additionalTextures, v30);
    }
    titleLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      BaseDialog__Init((BaseDialog_o *)this, 0);
      return;
    }
LABEL_73:
    sub_1C7BD40(titleLabel, method);
  }
}


void NotificationDialog__LoadBanners(NotificationDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1C7BA8C(&this->fields.mAfterLoad, callback);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, started, 0);
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
    sub_1C7BD40(this, method);
  if ( v3 >= SLODWORD(banners->max_length) )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
}


void NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CE8473 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NotificationDialog_OnClickOk__);
    byte_4CE8473 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  if ( (byte_4CE8469 & 1) == 0 )
  {
    v69 = maxLine;
    v61 = panelDepth;
    funca = func;
    v55 = title;
    v58 = message;
    v53 = isLineDraw;
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_float__get_HasValue__);
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
    byte_4CE8469 = 1;
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
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v33; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  const MethodInfo *v37; // x1
  System_String_o *v38; // x1
  NotificationDialog_c *v39; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v45; // x0
  struct NotificationDialog_StaticFields *v46; // x8
  float v47; // s11
  float v48; // s12
  unsigned __int64 v49; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v52; // x0
  struct NotificationDialog_StaticFields *v53; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v59; // x0
  struct NotificationDialog_StaticFields *v60; // x8
  UILabel_o *v61; // x22
  float v62; // s10
  float v63; // s9
  float v64; // s13
  float v65; // s11
  float y; // s12
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v71; // x22
  unsigned __int64 v72; // x19
  unsigned __int64 v73; // x25
  System_Action_o *v74; // x19
  const MethodInfo *v75; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE846A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_NotificationDialog_EndOpen__);
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_float__get_HasValue__);
    sub_1C7BAE8(&Method_System_Nullable_int__get_HasValue__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE846A = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v33 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v33 )
        goto LABEL_114;
      this->fields.keepPanelDepth = v33->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C7BA8C(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v37);
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
      v38 = title;
    else
      v38 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v38, 0);
    v39 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v39 = NotificationDialog_TypeInfo;
    }
    static_fields = v39->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_114;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v81.fields.y = v;
    v81.fields.x = x;
    v81.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v81, 0);
  }
  if ( useTitleCondensedScale )
    NotificationDialog__SetCondensedScaleTitle(this, v37);
  v45 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v45 = NotificationDialog_TypeInfo;
  }
  v46 = v45->static_fields;
  v47 = v46->MESSAGE_BASE_POS.fields.x;
  v48 = v46->MESSAGE_BASE_POS.fields.z;
  if ( v46->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v46->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v49 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = NotificationDialog_TypeInfo;
      v46 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v49) = v46->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v45->static_fields->MESSAGE_BASE_SIZE_X;
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
      v52 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v52 = NotificationDialog_TypeInfo;
      }
      v53 = v52->static_fields;
      v47 = v53->MESSAGE_LINE_POS.fields.x;
      messagePosY = v53->MESSAGE_LINE_POS.fields.y;
      v48 = v53->MESSAGE_LINE_POS.fields.z;
      LODWORD(v49) = v53->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v82.fields.x = v47;
    v82.fields.y = messagePosY;
    v82.fields.z = v48;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v49,
      maxLine,
      messageFontSize,
      adjustText,
      v82,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v75);
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
    v59 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v59 = NotificationDialog_TypeInfo;
    }
    v60 = v59->static_fields;
    v61 = this->fields.okBtnLabel;
    v62 = v60->BUTTON_BASE_POS.fields.x;
    v63 = v60->BUTTON_BASE_POS.fields.z;
    v64 = v60->BUTTON_TEXT_POS.fields.x;
    y = v60->BUTTON_TEXT_POS.fields.y;
    v65 = v60->BUTTON_TEXT_POS.fields.z;
    if ( v60->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v60->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v61 )
      goto LABEL_114;
    UILabel__set_text(v61, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v83.fields.x = v64;
    v83.fields.y = y;
    v83.fields.z = v65;
    GameObjectExtensions__SetLocalPosition(v67, v83, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_114;
    v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v84.fields.x = v62;
    v84.fields.y = buttonPosY;
    v84.fields.z = v63;
    GameObjectExtensions__SetLocalPosition(v68, v84, 0);
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
    v69 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v71 = UnityEngine_GameObject__GetComponent_object_(
            v69,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v72 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v72) = transform->fields.onChange->fields.data;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v73 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
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
          LODWORD(v73) = HIDWORD(transform->fields.onChange->fields.data);
          if ( !Component_object )
            goto LABEL_114;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v72, 0);
        UIWidget__set_height((UIWidget_o *)Component_object, v73, 0);
        if ( !v71 )
          goto LABEL_114;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v71, 0);
        size.fields.x = (float)(int)v72;
        size.fields.y = (float)(int)v73;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v71, size, 0);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v33 )
    {
      UIPanel__set_depth(v33, keepPanelDepth, 0);
      goto LABEL_113;
    }
LABEL_114:
    sub_1C7BD40(transform, keepPanelDepth);
  }
LABEL_113:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v74 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0, 0);
}


void NotificationDialog__Open_31643716(
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


void NotificationDialog__Open_31645080(
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
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v21; // x22
  __int64 transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  const MethodInfo *v25; // x1
  System_String_o *v26; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v28; // x3
  NotificationDialog_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v32; // s8
  float v33; // s9
  float v34; // s10
  NotificationDialog_c *v35; // x0
  float *v36; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v38; // s8
  float v39; // s9
  float v40; // s10
  int32_t v41; // w26
  NotificationDialog_c *v42; // x0
  float *v43; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v46; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 naturalAligment; // x11
  struct System_Object_array *v49; // x0
  struct System_Object_array **p_sprites; // x23
  il2cpp_array_size_t max_length; // x8
  UnityEngine_Component_o *v52; // x25
  unsigned __int64 v53; // x21
  Il2CppObject *v54; // x25
  UnityEngine_GameObject_o *v55; // x25
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v59; // x10
  __int64 size; // x11
  Il2CppClass **v61; // x0
  struct System_Object_array *v62; // x8
  System_Collections_Generic_Dictionary_string__object__o *v63; // x8
  __int64 v64; // x11
  System_Collections_Generic_Dictionary_string__object__o *v65; // x26
  System_Collections_Generic_Dictionary_string__object__o *v66; // x22
  NotificationDialog_o *v67; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v69; // x27
  const MethodInfo *v70; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v72; // x0
  const MethodInfo *v73; // x3
  NotificationDialog_c *v74; // x8
  UnityEngine_GameObject_o *v75; // x27
  float *v76; // x8
  float v77; // s8
  float v78; // s9
  float v79; // s10
  NotificationDialog_o *v80; // x0
  const MethodInfo *v81; // x3
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v86; // x0
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  int32_t v89; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v91; // w27
  const MethodInfo *v92; // x3
  System_String_o *v93; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v95; // x11
  struct System_Object_array *v96; // x0
  struct System_Object_array *banners; // x8
  int v98; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v100; // x23
  NotificationDialog_o *v101; // x0
  const MethodInfo *v102; // x3
  NotificationDialog_c *v103; // x8
  UnityEngine_GameObject_o *v104; // x23
  float *v105; // x8
  float v106; // s8
  float v107; // s9
  float v108; // s10
  System_Action_o *v109; // x20
  System_Action_o *v110; // x20
  const MethodInfo *v111; // x2
  UIPanel_o *v113; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE846B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C7BAE8(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_NotificationDialog_EndOpen__);
    sub_1C7BAE8(&Method_NotificationDialog__Open_b__44_0__);
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_17112/*"banners"*/);
    sub_1C7BAE8(&StringLiteral_23731/*"size"*/);
    sub_1C7BAE8(&StringLiteral_24706/*"urlOpenType"*/);
    sub_1C7BAE8(&StringLiteral_22576/*"offset"*/);
    sub_1C7BAE8(&StringLiteral_24338/*"titleOffset"*/);
    sub_1C7BAE8(&StringLiteral_23842/*"spriteName"*/);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_24705/*"urlLink"*/);
    sub_1C7BAE8(&StringLiteral_17729/*"buttonOffset"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_23843/*"sprites"*/);
    byte_4CE846B = 1;
  }
  value = 0;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v21 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v21->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C7BA8C(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v25);
    transform = (__int64)this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_138;
    UILabel__set_fontSize((UILabel_o *)transform, titleSize, 0);
    transform = (__int64)this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    v26 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)transform, v26, 0);
    transform = (__int64)this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v29 = NotificationDialog_TypeInfo;
    v30 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v29 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v29->static_fields->BANNER_RETRY_MAX;
    v32 = p_BANNER_RETRY_MAX[1];
    v33 = p_BANNER_RETRY_MAX[2];
    v34 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24338/*"titleOffset"*/,
                       v28);
    VectFromScript.fields.x = v32 + VectFromScript.fields.x;
    VectFromScript.fields.y = v33 + VectFromScript.fields.y;
    VectFromScript.fields.z = v34 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v30, VectFromScript, 0);
  }
  v35 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v35 = NotificationDialog_TypeInfo;
  }
  v36 = (float *)&v35->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v38 = v36[4];
  v39 = v36[5];
  v40 = v36[6];
  v41 = *((_DWORD *)v36 + 14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0, 0) )
  {
    transform = (__int64)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_138;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0);
    if ( isLineDraw )
    {
      v42 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v42 = NotificationDialog_TypeInfo;
      }
      v43 = (float *)&v42->static_fields->BANNER_RETRY_MAX;
      v38 = v43[10];
      v39 = v43[11];
      v40 = v43[12];
      v41 = *((_DWORD *)v43 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v116.fields.x = v38;
    v116.fields.y = v39;
    v116.fields.z = v40;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v41, maxLine, v116, script, v46);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(lnkSprite, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                  (Il2CppObject *)StringLiteral_23843/*"sprites"*/,
                  &value,
                  (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (transform & 1) == 0 )
      goto LABEL_95;
    if ( !value )
      goto LABEL_138;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_138;
    }
    v49 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v49;
    p_sprites = &this->fields.sprites;
    transform = sub_1C7BA8C(&this->fields.sprites, v49);
    if ( this->fields.sprites && (max_length = this->fields.sprites->max_length) != 0 )
    {
      if ( (int)max_length >= 1 )
      {
        v52 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v53 = 0;
        v113 = v21;
        while ( 1 )
        {
          if ( v53 )
          {
            transform = (__int64)this->fields.lnkSprite;
            if ( !transform )
              break;
            v54 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                   v54,
                                   (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v55 = (UnityEngine_GameObject_o *)transform;
            transform = (__int64)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.lnkSprite,
                                   0);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0);
            GameObjectExtensions__SetParent(v55, parent, 0);
            if ( !byte_4CE7E5E )
            {
              sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
              byte_4CE7E5E = 1;
            }
            GameObjectExtensions__SetLocalScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            if ( !v55 )
              break;
            transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v55,
                                   (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v59 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v52 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v61[4] = (Il2CppClass *)v52;
              transform = sub_1C7BA8C(v61 + 4, v52);
            }
          }
          v62 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v53 >= LODWORD(v62->max_length) )
            sub_1C7BD48(transform);
          v63 = (System_Collections_Generic_Dictionary_string__object__o *)v62->m_Items[v53];
          if ( v63
            && (v64 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
                v63->klass->_2.naturalAligment >= (unsigned int)v64) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v63->klass->_2.typeHierarchy[v64 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v65 = v63;
            else
              v65 = 0;
            if ( !v52 )
              break;
          }
          else
          {
            v65 = 0;
            if ( !v52 )
              break;
          }
          v66 = script;
          v67 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v52, 0);
          klass = (UISprite_o *)v52[2].klass;
          v69 = (UnityEngine_GameObject_o *)v67;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v67,
                               v65,
                               (System_String_o *)StringLiteral_23842/*"spriteName"*/,
                               v70);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = AtlasManager__SetEventUI(klass, StringFromScript, 0);
          if ( !v69 )
            break;
          UnityEngine_GameObject__SetActive(v69, transform & 1, 0);
          v72 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v52, 0);
          v74 = NotificationDialog_TypeInfo;
          v75 = (UnityEngine_GameObject_o *)v72;
          script = v66;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v74 = NotificationDialog_TypeInfo;
          }
          v76 = (float *)&v74->static_fields->BANNER_RETRY_MAX;
          v21 = v113;
          v77 = v76[17];
          v78 = v76[18];
          v79 = v76[19];
          v117 = NotificationDialog__getVectFromScript(v72, v65, (System_String_o *)StringLiteral_22576/*"offset"*/, v73);
          v117.fields.x = v77 + v117.fields.x;
          v117.fields.y = v78 + v117.fields.y;
          v117.fields.z = v79 + v117.fields.z;
          GameObjectExtensions__SetLocalPosition(v75, v117, 0);
          v118 = NotificationDialog__getVectFromScript(v80, v65, (System_String_o *)StringLiteral_23731/*"size"*/, v81);
          x = v118.fields.x;
          y = v118.fields.y;
          z = v118.fields.z;
          if ( !byte_4CE7E59 )
          {
            sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
            byte_4CE7E59 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v52, 0);
          }
          else
          {
            v88 = x == INFINITY ? 0x80000000 : (int)x;
            v89 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v52, v88, v89, 0);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v86,
                                                    v65,
                                                    (System_String_o *)StringLiteral_24706/*"urlOpenType"*/,
                                                    v87);
          v91 = (int)IntFromScript;
          v93 = NotificationDialog__getStringFromScript(IntFromScript, v65, (System_String_o *)StringLiteral_24705/*"urlLink"*/, v92);
          LinkableSprite__SetUp((LinkableSprite_o *)v52, v91, v93, 0);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v53 >= SLODWORD((*p_sprites)->max_length) )
            goto LABEL_98;
        }
LABEL_138:
        sub_1C7BD40(transform, keepPanelDepth);
      }
    }
    else
    {
LABEL_95:
      transform = (__int64)this->fields.lnkSprite;
      if ( !transform )
        goto LABEL_138;
      transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    }
  }
LABEL_98:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_object__object__o *)script,
                  (Il2CppObject *)StringLiteral_17112/*"banners"*/,
                  &value,
                  (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( (transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v95 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment < (unsigned int)v95
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v95 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v96 = System_Collections_Generic_List_object___ToArray(
              (System_Collections_Generic_List_object__o *)value,
              (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v96;
      sub_1C7BA8C(&this->fields.banners, v96);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( banners->max_length )
        {
          v98 = 0;
          goto LABEL_113;
        }
      }
    }
    transform = (__int64)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_138;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  v98 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v100 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v100 )
      goto LABEL_138;
    UILabel__set_text(v100, (System_String_o *)transform, 0);
    transform = (__int64)this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_138;
    v101 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v103 = NotificationDialog_TypeInfo;
    v104 = (UnityEngine_GameObject_o *)v101;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v103 = NotificationDialog_TypeInfo;
    }
    v105 = (float *)&v103->static_fields->BANNER_RETRY_MAX;
    v106 = v105[20];
    v107 = v105[21];
    v108 = v105[22];
    v119 = NotificationDialog__getVectFromScript(v101, script, (System_String_o *)StringLiteral_17729/*"buttonOffset"*/, v102);
    v119.fields.x = v106 + v119.fields.x;
    v119.fields.y = v107 + v119.fields.y;
    v119.fields.z = v108 + v119.fields.z;
    GameObjectExtensions__SetLocalPosition(v104, v119, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
  if ( (transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v21 )
      goto LABEL_138;
    UIPanel__set_depth(v21, keepPanelDepth, 0);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  if ( v98 )
  {
    v109 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v109, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v109, 0, 0, 0);
  }
  else
  {
    transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !transform )
      goto LABEL_138;
    CommonUI__SetLoadMode((CommonUI_o *)transform, 1, 0);
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    transform = (__int64)this->fields.baseWindow;
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    v110 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v110, (Il2CppObject *)this, Method_NotificationDialog__Open_b__44_0__, 0);
    NotificationDialog__LoadBanners(this, v110, v111);
  }
}


void NotificationDialog__SetCondensedScaleTitle(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *Value; // x0
  UILabel_o *v6; // x20
  const MethodInfo_39693D0 *v7; // x2
  System_Nullable_Vector2Int__o v8; // 0:x0.12

  if ( (byte_4CE8471 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8471 = 1;
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
      sub_1C7BD40(Value, v4);
    }
    UILabel__SetCondensedScale(v6, (int32_t)Value, 0, 0);
  }
}


System_Collections_IEnumerator_o *NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4CE8474 & 1) == 0 )
  {
    sub_1C7BAE8(&NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
    byte_4CE8474 = 1;
  }
  v3 = sub_1C7BD34(NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void NotificationDialog___Open_b__44_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_4CE8478 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_NotificationDialog_EndOpen__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE8478 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C7BD40(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0);
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
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

  if ( (byte_4CE8479 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4CE8479 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v7);
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

  if ( (byte_4CE8470 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CE8470 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C7BD40(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CE846F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&string_TypeInfo);
    this = (NotificationDialog_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE846F = 1;
  }
  value = 0;
  if ( !script )
    sub_1C7BD40(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CE846E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Convert_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_1C7BAE8(&System_Collections_Generic_List_object__TypeInfo);
    byte_4CE846E = 1;
  }
  value = 0;
  if ( !script )
    sub_1C7BD40(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
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
  if ( (byte_4CE8475 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15710/*"Window/OkBtn"*/);
    byte_4CE8475 = 1;
  }
  return (System_String_o *)StringLiteral_15710/*"Window/OkBtn"*/;
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA7F10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA7EC8;
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
  if ( (byte_4CE847A & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE847A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
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
  NotificationDialog__StartDownloadBanner_d__57_o *v2; // x20
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v7; // x8
  System_Collections_Generic_Dictionary_string__object__c *v8; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__57_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__57_o *v14; // x23
  int32_t v15; // w24
  int32_t v16; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v18; // x22
  System_Byte_array *data; // x0
  System_String_o *v20; // x0
  bool IsNullOrEmpty; // w0
  int v22; // w20
  NotificationDialog_c *v23; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x22
  ErrorDialog_ClickDelegate_o *v26; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v28; // x0
  bool v29; // w21
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_string__object__o **p_banner_5__2; // x21
  NotificationDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  System_String_o *v34; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v36; // x22
  UnityEngine_Networking_DownloadHandlerTexture_o *v37; // x22
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v38; // x0
  Il2CppObject **p__2__current; // x20
  NotificationDialog__StartDownloadBanner_d__57_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__57_o *v43; // x23
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v47; // x10
  __int64 size; // x11
  Il2CppClass **v49; // x0
  NotificationDialog_o *v50; // x0
  const MethodInfo *v51; // x3
  UnityEngine_GameObject_o *v52; // x22
  NotificationDialog_c *v53; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v55; // s8
  float v56; // s9
  float v57; // s10
  NotificationDialog_o *v58; // x0
  const MethodInfo *v59; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  int32_t v67; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v70; // w20
  const MethodInfo *v71; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v73; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CE847B & 1) == 0 )
  {
    sub_1C7BAE8(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_NotificationDialog__StartDownloadBanner_b__57_0__);
    sub_1C7BAE8(&NotificationDialog_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17105/*"bannerUrl"*/);
    sub_1C7BAE8(&StringLiteral_23731/*"size"*/);
    sub_1C7BAE8(&StringLiteral_24706/*"urlOpenType"*/);
    sub_1C7BAE8(&StringLiteral_22576/*"offset"*/);
    sub_1C7BAE8(&StringLiteral_24705/*"urlLink"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_1C7BAE8(&StringLiteral_9286/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4CE847B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
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
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v2->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0);
      if ( !v2->fields._texDl_5__3 )
        goto LABEL_94;
      v14 = this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v2->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
      if ( !v2->fields._texDl_5__3 )
        goto LABEL_94;
      v15 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v2->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._6_MoveNext.method);
      if ( !v2->fields._texDl_5__3 )
        goto LABEL_94;
      v16 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v2->fields._texDl_5__3,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
      v18 = (UnityEngine_Texture2D_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_71757732(v18, v15, v16, format, 0, 0);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v2->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      UnityEngine_ImageConversion__LoadImage_71979276(v18, data, 0);
    }
    else
    {
LABEL_25:
      v18 = 0;
      v14 = 0;
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
    v20 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v20, 0);
    if ( !v14 || !IsNullOrEmpty || !v14->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v18,
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
                                                                    (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v43 = this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v43, parent, 0);
        if ( !byte_4CE7E5E )
        {
          sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E5E = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v43,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        if ( !v43 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v43,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v47 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v49[4] = (Il2CppClass *)lnkTexture;
          this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_1C7BA8C(v49 + 4, lnkTexture);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__57_o *, UnityEngine_Texture2D_o *, _QWORD))&this->klass[1]._2.field_count)(
        this,
        v18,
        *(_QWORD *)&this->klass[1]._2.interfaces_count);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v50 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0);
      v52 = (UnityEngine_GameObject_o *)v50;
      v53 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v53 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v53->static_fields->BANNER_RETRY_MAX;
      v55 = p_BANNER_RETRY_MAX[17];
      v56 = p_BANNER_RETRY_MAX[18];
      v57 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v50,
                         v2->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22576/*"offset"*/,
                         v51);
      VectFromScript.fields.x = v55 + VectFromScript.fields.x;
      VectFromScript.fields.y = v56 + VectFromScript.fields.y;
      VectFromScript.fields.z = v57 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v52, VectFromScript, 0);
      v75 = NotificationDialog__getVectFromScript(
              v58,
              v2->fields._banner_5__2,
              (System_String_o *)StringLiteral_23731/*"size"*/,
              v59);
      x = v75.fields.x;
      y = v75.fields.y;
      z = v75.fields.z;
      if ( !byte_4CE7E59 )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
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
          v66 = 0x80000000;
        else
          v66 = (int)x;
        if ( y == INFINITY )
          v67 = 0x80000000;
        else
          v67 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v66, v67, 0);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v64,
                                                v2->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24706/*"urlOpenType"*/,
                                                v65);
      banner_5__2 = v2->fields._banner_5__2;
      v70 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24705/*"urlLink"*/,
                           v71);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v70, StringFromScript, 0);
      NotificationDialog__LoadNext(_4__this, v73);
    }
    else
    {
LABEL_35:
      v22 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v22;
      v23 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v23 = NotificationDialog_TypeInfo;
      }
      if ( v22 <= v23->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_71855340((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9286/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
        v26 = (ErrorDialog_ClickDelegate_o *)sub_1C7BD34(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v26,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__57_0__,
          0);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v25, v26, 0, 0);
      }
    }
    v28 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v28 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v28, 0);
      *p_mBannerWWW = 0;
      sub_1C7BA8C(&_4__this->fields.mBannerWWW, 0);
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= LODWORD(banners->max_length) )
          sub_1C7BD48(this);
        v7 = banners->m_Items[mLoadingIdx];
        if ( v7 )
        {
          v8 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            v10 = (System_Collections_Generic_Dictionary_string__object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v7
                : 0LL;
          else
            v10 = 0;
          v2->fields._banner_5__2 = v10;
          p_banner_5__2 = &v2->fields._banner_5__2;
          if ( v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            v30 = (System_Collections_Generic_Dictionary_string__object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] == v8
                ? (__int64)v7
                : 0LL;
          else
            v30 = 0;
        }
        else
        {
          v30 = 0;
          v2->fields._banner_5__2 = 0;
          p_banner_5__2 = &v2->fields._banner_5__2;
        }
        v32 = (NotificationDialog_o *)sub_1C7BA8C(p_banner_5__2, v30);
        v34 = NotificationDialog__getStringFromScript(v32, *p_banner_5__2, (System_String_o *)StringLiteral_17105/*"bannerUrl"*/, v33);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v34, 0);
        v36 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C7BD34(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor_74396776(v36, WebViewFullAddress, 0);
        _4__this->fields.mBannerWWW = v36;
        sub_1C7BA8C(&_4__this->fields.mBannerWWW, v36);
        v37 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C7BD34(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v37, 0, 0);
        v2->fields._texDl_5__3 = v37;
        sub_1C7BA8C(&v2->fields._texDl_5__3, v37);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v2->fields._texDl_5__3,
            0);
          this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
          v29 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v38 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v2->fields.__2__current = (Il2CppObject *)v38;
            p__2__current = &v2->fields.__2__current;
            sub_1C7BA8C(p__2__current, v38);
            *((_DWORD *)p__2__current - 2) = 1;
            return v29;
          }
        }
      }
    }
LABEL_94:
    sub_1C7BD40(this, method);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_NotificationDialog__StartDownloadBanner_d__57_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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