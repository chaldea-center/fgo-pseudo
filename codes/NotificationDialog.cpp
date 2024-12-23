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

  if ( (byte_4B6A772 & 1) == 0 )
  {
    sub_1BE4ACC(&NotificationDialog_TypeInfo, v1);
    byte_4B6A772 = 1;
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
  *(_OWORD *)&v7->MESSAGE_BASE_SIZE_X = xmmword_BE1A50;
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
  if ( (byte_4B6A771 & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6A771 = 1;
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
  if ( (byte_4B6A768 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, isNoTitle);
    sub_1BE4ACC(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v27);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v28);
    sub_1BE4ACC(&System_Math_TypeInfo, v29);
    sub_1BE4ACC(&NotificationDialog_TypeInfo, v30);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v31);
    sub_1BE4ACC(&string_TypeInfo, v32);
    byte_4B6A768 = 1;
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
              (const MethodInfo_2FAAA2C *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                                                 (const MethodInfo_2F50A78 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
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
                                                     (const MethodInfo_2F50A78 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v47;
          if ( !v47 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1BE4D28(baseWindow, v34);
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
                                                   (const MethodInfo_2F50A78 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
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
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_62728168(message, 0xAu, 0LL);
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
         (const MethodInfo_2F50A78 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
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
  if ( (byte_4B6A769 & 1) == 0 )
  {
    sub_1BE4ACC(&NotificationDialog_TypeInfo, isNoTitle);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    sub_1BE4ACC(&string_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_21710/*"messageOffset"*/, v19);
    byte_4B6A769 = 1;
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
    v27 = System_String__Trim_62728168(message, 0xAu, 0LL);
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
                       (System_String_o *)StringLiteral_21710/*"messageOffset"*/,
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
      v35 = NotificationDialog__getVectFromScript(v32, script, (System_String_o *)StringLiteral_21710/*"messageOffset"*/, v33);
      v35.fields.x = x + v35.fields.x;
      v35.fields.z = z + v35.fields.z;
      v35.fields.y = y + v35.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v32, v35, 0LL);
      return;
    }
LABEL_34:
    sub_1BE4D28(messageLabel, v21);
  }
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_46232976(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_46232976(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4B6A76D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_NotificationDialog_EndClose__, v10);
    byte_4B6A76D = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BE4A70(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v27; // x8
  UnityEngine_Object_o *v28; // x20
  struct LinkableTexture_o *v29; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v31; // w21
  int32_t v32; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v34; // w8
  System_Collections_Generic_List_object__o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v43; // w21
  int32_t v44; // w2
  UnityEngine_Object_o *v45; // x22
  UnityEngine_Object_o *v46; // x0
  int v47; // w8
  System_Collections_Generic_List_object__o *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4B6A764 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v13);
    byte_4B6A764 = 1;
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
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mBannerWWW, 0LL, v20, v21, v22, v23, v24, v25);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v27 = this->fields.lnkTexture;
      if ( !v27 )
        goto LABEL_65;
      titleLabel = v27->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v28 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70452000(v28, 0LL);
      v29 = this->fields.lnkTexture;
      if ( !v29 )
        goto LABEL_65;
      titleLabel = v29->fields.mUiTexture;
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
      v31 = 0;
      while ( 1 )
      {
        v32 = *((_DWORD *)titleLabel + 6);
        if ( v31 >= v32 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v31,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v31;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v34 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v34;
      if ( v32 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v32, 0LL);
    }
    else
    {
      v35 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v35;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.additionalSprites,
        (int64_t)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v43 = 0;
      while ( 1 )
      {
        v44 = *((_DWORD *)titleLabel + 6);
        if ( v43 >= v44 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v43,
                       (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v45 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70452000(v45, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v43,
                             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_70452000(v46, 0LL);
                titleLabel = *p_additionalTextures;
                ++v43;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v47 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v47;
      if ( v44 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v44, 0LL);
    }
    else
    {
      v48 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v48;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.additionalTextures,
        (int64_t)v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1BE4D28(titleLabel, method);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.mAfterLoad,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1BE4D28(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B6A76E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_NotificationDialog_OnClickOk__, method);
    byte_4B6A76E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0LL);
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
  if ( (byte_4B6A765 & 1) == 0 )
  {
    v39 = titleSize;
    sub_1BE4ACC(&NotificationDialog_TypeInfo, title);
    sub_1BE4ACC(&Method_System_Nullable_float__GetValueOrDefault__, v41);
    sub_1BE4ACC(&Method_System_Nullable_float__get_HasValue__, v42);
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
    byte_4B6A765 = 1;
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v51; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v55; // x1
  NotificationDialog_c *v56; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v62; // x0
  struct NotificationDialog_StaticFields *v63; // x8
  float v64; // s11
  float v65; // s12
  unsigned __int64 v66; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v69; // x0
  struct NotificationDialog_StaticFields *v70; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v76; // x0
  struct NotificationDialog_StaticFields *v77; // x8
  UILabel_o *v78; // x22
  float v79; // s10
  float v80; // s9
  float v81; // s13
  float v82; // s11
  float y; // s12
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v88; // x22
  unsigned __int64 v89; // x19
  unsigned __int64 v90; // x25
  System_Action_o *v91; // x19
  const MethodInfo *v92; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A766 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, title);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v31);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v32);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v33);
    sub_1BE4ACC(&Method_NotificationDialog_EndOpen__, v34);
    sub_1BE4ACC(&NotificationDialog_TypeInfo, v35);
    sub_1BE4ACC(&Method_System_Nullable_float__GetValueOrDefault__, v36);
    sub_1BE4ACC(&Method_System_Nullable_int__GetValueOrDefault__, v37);
    sub_1BE4ACC(&Method_System_Nullable_float__get_HasValue__, v38);
    sub_1BE4ACC(&Method_System_Nullable_int__get_HasValue__, v39);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v40);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v41);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v42);
    byte_4B6A766 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v51 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v51 )
        goto LABEL_112;
      this->fields.keepPanelDepth = v51->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v44, v45, v46, v47, v48, v49);
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
      v55 = title;
    else
      v55 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v55, 0LL);
    v56 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v56 = NotificationDialog_TypeInfo;
    }
    static_fields = v56->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v97.fields.y = v;
    v97.fields.x = x;
    v97.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v97, 0LL);
  }
  v62 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v62 = NotificationDialog_TypeInfo;
  }
  v63 = v62->static_fields;
  v64 = v63->MESSAGE_BASE_POS.fields.x;
  v65 = v63->MESSAGE_BASE_POS.fields.z;
  if ( v63->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v63->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v66 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = NotificationDialog_TypeInfo;
      v63 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v66) = v63->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v62->static_fields->MESSAGE_BASE_SIZE_X;
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
      v69 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v69 = NotificationDialog_TypeInfo;
      }
      v70 = v69->static_fields;
      v64 = v70->MESSAGE_LINE_POS.fields.x;
      messagePosY = v70->MESSAGE_LINE_POS.fields.y;
      v65 = v70->MESSAGE_LINE_POS.fields.z;
      LODWORD(v66) = v70->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v98.fields.x = v64;
    v98.fields.y = messagePosY;
    v98.fields.z = v65;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v66,
      maxLine,
      messageFontSize,
      adjustText,
      v98,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v92);
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
    v76 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v76 = NotificationDialog_TypeInfo;
    }
    v77 = v76->static_fields;
    v78 = this->fields.okBtnLabel;
    v79 = v77->BUTTON_BASE_POS.fields.x;
    v80 = v77->BUTTON_BASE_POS.fields.z;
    v81 = v77->BUTTON_TEXT_POS.fields.x;
    y = v77->BUTTON_TEXT_POS.fields.y;
    v82 = v77->BUTTON_TEXT_POS.fields.z;
    if ( v77->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v77->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v78 )
      goto LABEL_112;
    UILabel__set_text(v78, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v99.fields.x = v81;
    v99.fields.y = y;
    v99.fields.z = v82;
    GameObjectExtensions__SetLocalPosition(v84, v99, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v100.fields.x = v79;
    v100.fields.y = buttonPosY;
    v100.fields.z = v80;
    GameObjectExtensions__SetLocalPosition(v85, v100, 0LL);
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
    v86 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v88 = UnityEngine_GameObject__GetComponent_object_(
            v86,
            (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v88, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v89 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v89) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v90 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
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
          LODWORD(v90) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_112;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v89, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v90, 0LL);
        if ( !v88 )
          goto LABEL_112;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v88, 0LL);
        size.fields.x = (float)(int)v89;
        size.fields.y = (float)(int)v90;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v88, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v51, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v51 )
    {
      UIPanel__set_depth(v51, keepPanelDepth, 0LL);
      goto LABEL_111;
    }
LABEL_112:
    sub_1BE4D28(transform, keepPanelDepth);
  }
LABEL_111:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v91 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v91, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v91, 0, 0LL);
}


void __fastcall NotificationDialog__Open_46227220(
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


void __fastcall NotificationDialog__Open_46228380(
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
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v52; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v56; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v58; // x3
  NotificationDialog_c *v59; // x8
  UnityEngine_GameObject_o *v60; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v62; // s8
  float v63; // s9
  float v64; // s10
  NotificationDialog_c *v65; // x0
  float *v66; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v68; // s8
  float v69; // s9
  float v70; // s10
  int32_t v71; // w26
  NotificationDialog_c *v72; // x0
  float *v73; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v76; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v79; // x0
  struct System_Object_array **p_sprites; // x23
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  UnityEngine_Component_o *v88; // x25
  unsigned __int64 v89; // x21
  Il2CppObject *v90; // x25
  UnityEngine_GameObject_o *v91; // x25
  UnityEngine_Component_o *parent; // x0
  __int64 v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v102; // x10
  __int64 size; // x11
  Il2CppClass **v104; // x0
  struct System_Object_array *v105; // x8
  System_Collections_Generic_Dictionary_string__object__o *v106; // x8
  __int64 v107; // x11
  System_Collections_Generic_Dictionary_string__object__o *v108; // x26
  System_Collections_Generic_Dictionary_string__object__o *v109; // x22
  NotificationDialog_o *v110; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v112; // x27
  const MethodInfo *v113; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v115; // x0
  const MethodInfo *v116; // x3
  NotificationDialog_c *v117; // x8
  UnityEngine_GameObject_o *v118; // x27
  float *v119; // x8
  float v120; // s8
  float v121; // s9
  float v122; // s10
  NotificationDialog_o *v123; // x0
  const MethodInfo *v124; // x3
  __int64 v125; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v130; // x0
  const MethodInfo *v131; // x3
  int32_t v132; // w1
  int32_t v133; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v135; // w27
  const MethodInfo *v136; // x3
  System_String_o *v137; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v139; // x11
  struct System_Object_array *v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct System_Object_array *banners; // x8
  int v148; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v150; // x23
  NotificationDialog_o *v151; // x0
  const MethodInfo *v152; // x3
  NotificationDialog_c *v153; // x8
  UnityEngine_GameObject_o *v154; // x23
  float *v155; // x8
  float v156; // s8
  float v157; // s9
  float v158; // s10
  System_Action_o *v159; // x20
  System_Action_o *v160; // x20
  const MethodInfo *v161; // x2
  UIPanel_o *v163; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A767 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, title);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v20);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v21);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ToArray__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v25);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v26);
    sub_1BE4ACC(&Method_NotificationDialog_EndOpen__, v27);
    sub_1BE4ACC(&Method_NotificationDialog__Open_b__42_0__, v28);
    sub_1BE4ACC(&NotificationDialog_TypeInfo, v29);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v30);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v31);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1BE4ACC(&StringLiteral_17280/*"banners"*/, v33);
    sub_1BE4ACC(&StringLiteral_23669/*"size"*/, v34);
    sub_1BE4ACC(&StringLiteral_24679/*"urlOpenType"*/, v35);
    sub_1BE4ACC(&StringLiteral_22526/*"offset"*/, v36);
    sub_1BE4ACC(&StringLiteral_24297/*"titleOffset"*/, v37);
    sub_1BE4ACC(&StringLiteral_23780/*"spriteName"*/, v38);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1BE4ACC(&StringLiteral_24678/*"urlLink"*/, v40);
    sub_1BE4ACC(&StringLiteral_17874/*"buttonOffset"*/, v41);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v42);
    sub_1BE4ACC(&StringLiteral_23781/*"sprites"*/, v43);
    byte_4B6A767 = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v52 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v52 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v52->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v45, v46, v47, v48, v49, v50);
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
    v56 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v56, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v59 = NotificationDialog_TypeInfo;
    v60 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v59 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v59->static_fields->BANNER_RETRY_MAX;
    v62 = p_BANNER_RETRY_MAX[1];
    v63 = p_BANNER_RETRY_MAX[2];
    v64 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24297/*"titleOffset"*/,
                       v58);
    VectFromScript.fields.x = v62 + VectFromScript.fields.x;
    VectFromScript.fields.y = v63 + VectFromScript.fields.y;
    VectFromScript.fields.z = v64 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v60, VectFromScript, 0LL);
  }
  v65 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v65 = NotificationDialog_TypeInfo;
  }
  v66 = (float *)&v65->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v68 = v66[4];
  v69 = v66[5];
  v70 = v66[6];
  v71 = *((_DWORD *)v66 + 14);
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
      v72 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v72 = NotificationDialog_TypeInfo;
      }
      v73 = (float *)&v72->static_fields->BANNER_RETRY_MAX;
      v68 = v73[10];
      v69 = v73[11];
      v70 = v73[12];
      v71 = *((_DWORD *)v73 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v166.fields.x = v68;
    v166.fields.y = v69;
    v166.fields.z = v70;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v71, maxLine, v166, script, v76);
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
                               (Il2CppObject *)StringLiteral_23781/*"sprites"*/,
                               &value,
                               (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v79 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v79;
    p_sprites = &this->fields.sprites;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.sprites, (int64_t)v79, v81, v82, v83, v84, v85, v86);
    if ( this->fields.sprites && (v87 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v87 >= 1 )
      {
        v88 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v89 = 0LL;
        v163 = v52;
        while ( 1 )
        {
          if ( v89 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v90 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v90,
                                       (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v91 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v91, parent, 0LL);
            if ( !byte_4B612E6 )
            {
              sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v93);
              byte_4B612E6 = 1;
            }
            GameObjectExtensions__SetLocalScale(v91, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v91 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v91,
                                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v102 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v88 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
            }
            else
            {
              v104 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v104[4] = (Il2CppClass *)v88;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v104 + 4), (int64_t)v88, v94, v95, v96, v97, v98, v99);
            }
          }
          v105 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v89 >= v105->max_length )
            sub_1BE4D30(transform, keepPanelDepth);
          v106 = (System_Collections_Generic_Dictionary_string__object__o *)v105->m_Items[v89];
          if ( v106
            && (v107 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v106->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v107) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v106->klass->_2.typeHierarchy[v107 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v108 = v106;
            else
              v108 = 0LL;
            if ( !v88 )
              break;
          }
          else
          {
            v108 = 0LL;
            if ( !v88 )
              break;
          }
          v109 = script;
          v110 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v88, 0LL);
          klass = (UISprite_o *)v88[2].klass;
          v112 = (UnityEngine_GameObject_o *)v110;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v110,
                               v108,
                               (System_String_o *)StringLiteral_23780/*"spriteName"*/,
                               v113);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v112 )
            break;
          UnityEngine_GameObject__SetActive(v112, (unsigned __int8)transform & 1, 0LL);
          v115 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v88, 0LL);
          v117 = NotificationDialog_TypeInfo;
          v118 = (UnityEngine_GameObject_o *)v115;
          script = v109;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v117 = NotificationDialog_TypeInfo;
          }
          v119 = (float *)&v117->static_fields->BANNER_RETRY_MAX;
          v52 = v163;
          v120 = v119[17];
          v121 = v119[18];
          v122 = v119[19];
          v167 = NotificationDialog__getVectFromScript(v115, v108, (System_String_o *)StringLiteral_22526/*"offset"*/, v116);
          v167.fields.x = v120 + v167.fields.x;
          v167.fields.y = v121 + v167.fields.y;
          v167.fields.z = v122 + v167.fields.z;
          GameObjectExtensions__SetLocalPosition(v118, v167, 0LL);
          v168 = NotificationDialog__getVectFromScript(v123, v108, (System_String_o *)StringLiteral_23669/*"size"*/, v124);
          x = v168.fields.x;
          y = v168.fields.y;
          z = v168.fields.z;
          if ( !byte_4B612E1 )
          {
            sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v125);
            byte_4B612E1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v88, 0LL);
          }
          else
          {
            v132 = x == INFINITY ? 0x80000000 : (int)x;
            v133 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v88, v132, v133, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v130,
                                                    v108,
                                                    (System_String_o *)StringLiteral_24679/*"urlOpenType"*/,
                                                    v131);
          v135 = (int)IntFromScript;
          v137 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v108,
                   (System_String_o *)StringLiteral_24678/*"urlLink"*/,
                   v136);
          LinkableSprite__SetUp((LinkableSprite_o *)v88, v135, v137, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v89 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1BE4D28(transform, keepPanelDepth);
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
                               (Il2CppObject *)StringLiteral_17280/*"banners"*/,
                               &value,
                               (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v139 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v139
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v139 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v140 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v140;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.banners,
        (int64_t)v140,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v148 = 0;
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
  v148 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v150 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v150 )
      goto LABEL_138;
    UILabel__set_text(v150, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v151 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v153 = NotificationDialog_TypeInfo;
    v154 = (UnityEngine_GameObject_o *)v151;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v153 = NotificationDialog_TypeInfo;
    }
    v155 = (float *)&v153->static_fields->BANNER_RETRY_MAX;
    v156 = v155[20];
    v157 = v155[21];
    v158 = v155[22];
    v169 = NotificationDialog__getVectFromScript(v151, script, (System_String_o *)StringLiteral_17874/*"buttonOffset"*/, v152);
    v169.fields.x = v156 + v169.fields.x;
    v169.fields.y = v157 + v169.fields.y;
    v169.fields.z = v158 + v169.fields.z;
    GameObjectExtensions__SetLocalPosition(v154, v169, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v52 )
      goto LABEL_138;
    UIPanel__set_depth(v52, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v148 )
  {
    v159 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v159, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v159, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v160 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v160, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v160, v161);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B6A76F & 1) == 0 )
  {
    sub_1BE4ACC(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method);
    byte_4B6A76F = 1;
  }
  v3 = sub_1BE4D18(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v6; // x20

  if ( (byte_4B6A773 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_NotificationDialog_EndOpen__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B6A773 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BE4D28(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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

  if ( (byte_4B6A774 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4B6A774 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BE4D28(0LL, v7);
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

  if ( (byte_4B6A76C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_1BE4ACC(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_4B6A76C = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BE4D28(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B6A76B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1BE4ACC(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_1BE4ACC(&StringLiteral_1/*""*/, v7);
    byte_4B6A76B = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BE4D28(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B6A76A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Convert_TypeInfo, script);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_4B6A76A = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BE4D28(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_4B612E1 )
    {
      sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4B612E1 = 1;
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
  if ( (byte_4B6A770 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15859/*"Window/OkBtn"*/, method);
    byte_4B6A770 = 1;
  }
  return (System_String_o *)StringLiteral_15859/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2B454;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2B40C;
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
  if ( (byte_4B6A775 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, isOk);
    byte_4B6A775 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *v8; // x20
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v33; // x8
  System_Collections_Generic_Dictionary_string__object__c *v34; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v36; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v40; // x23
  int32_t v41; // w24
  int32_t v42; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v44; // x22
  System_Byte_array *data; // x0
  System_String_o *v46; // x0
  bool IsNullOrEmpty; // w0
  int v48; // w20
  NotificationDialog_c *v49; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v51; // x22
  ErrorDialog_ClickDelegate_o *v52; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  bool v61; // w21
  int64_t v62; // x1
  PartyOrganizationUtility_o *p_banner_5__2; // x21
  NotificationDialog_o *v64; // x0
  const MethodInfo *v65; // x3
  System_String_o *v66; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_Networking_DownloadHandlerTexture_o *v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v82; // x0
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v93; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v104; // x10
  __int64 size; // x11
  Il2CppClass **v106; // x0
  NotificationDialog_o *v107; // x0
  const MethodInfo *v108; // x3
  UnityEngine_GameObject_o *v109; // x22
  NotificationDialog_c *v110; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v112; // s8
  float v113; // s9
  float v114; // s10
  NotificationDialog_o *v115; // x0
  const MethodInfo *v116; // x3
  __int64 v117; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v122; // x0
  const MethodInfo *v123; // x3
  int32_t v124; // w1
  int32_t v125; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v128; // w20
  const MethodInfo *v129; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v131; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B6A776 & 1) == 0 )
  {
    sub_1BE4ACC(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1BE4ACC(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v10);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v15);
    sub_1BE4ACC(&NotificationDialog_TypeInfo, v16);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1BE4ACC(&UnityEngine_Texture2D_TypeInfo, v20);
    sub_1BE4ACC(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_17273/*"bannerUrl"*/, v22);
    sub_1BE4ACC(&StringLiteral_23669/*"size"*/, v23);
    sub_1BE4ACC(&StringLiteral_24679/*"urlOpenType"*/, v24);
    sub_1BE4ACC(&StringLiteral_22526/*"offset"*/, v25);
    sub_1BE4ACC(&StringLiteral_24678/*"urlLink"*/, v26);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v27);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1BE4ACC(&StringLiteral_9388/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v28);
    byte_4B6A776 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
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
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v40 = this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                  this,
                                                                  this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v41 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                  this,
                                                                  this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v42 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v44 = (UnityEngine_Texture2D_o *)sub_1BE4D18(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_70340176(v44, v41, v42, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70557008(v44, data, 0LL);
    }
    else
    {
LABEL_25:
      v44 = 0LL;
      v40 = 0LL;
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
    v46 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v46, 0LL);
    if ( !v40 || !IsNullOrEmpty || !v40->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v44,
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
                                                                    (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v93 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v93, parent, 0LL);
        if ( !byte_4B612E6 )
        {
          sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v95);
          byte_4B612E6 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v93,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v93 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v93,
                                                                    (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v104 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v106 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v106[4] = (Il2CppClass *)lnkTexture;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)lnkTexture, v96, v97, v98, v99, v100, v101);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v44,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v107 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v109 = (UnityEngine_GameObject_o *)v107;
      v110 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v110 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v110->static_fields->BANNER_RETRY_MAX;
      v112 = p_BANNER_RETRY_MAX[17];
      v113 = p_BANNER_RETRY_MAX[18];
      v114 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v107,
                         v8->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22526/*"offset"*/,
                         v108);
      VectFromScript.fields.x = v112 + VectFromScript.fields.x;
      VectFromScript.fields.y = v113 + VectFromScript.fields.y;
      VectFromScript.fields.z = v114 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v109, VectFromScript, 0LL);
      v133 = NotificationDialog__getVectFromScript(
               v115,
               v8->fields._banner_5__2,
               (System_String_o *)StringLiteral_23669/*"size"*/,
               v116);
      x = v133.fields.x;
      y = v133.fields.y;
      z = v133.fields.z;
      if ( !byte_4B612E1 )
      {
        sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v117);
        byte_4B612E1 = 1;
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
          v124 = 0x80000000;
        else
          v124 = (int)x;
        if ( y == INFINITY )
          v125 = 0x80000000;
        else
          v125 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v124, v125, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v122,
                                                v8->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24679/*"urlOpenType"*/,
                                                v123);
      banner_5__2 = v8->fields._banner_5__2;
      v128 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24678/*"urlLink"*/,
                           v129);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v128, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v131);
    }
    else
    {
LABEL_35:
      v48 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v48;
      v49 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v49 = NotificationDialog_TypeInfo;
      }
      if ( v48 <= v49->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9388/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v52 = (ErrorDialog_ClickDelegate_o *)sub_1BE4D18(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v52,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v51, v52, 0, 0LL);
      }
    }
    v54 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v54 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v54, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW, 0LL, v55, v56, v57, v58, v59, v60);
    }
  }
  else if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= banners->max_length )
          sub_1BE4D30(this, method);
        v33 = banners->m_Items[mLoadingIdx];
        if ( v33 )
        {
          v34 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v33->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v36 = (System_Collections_Generic_Dictionary_string__object__c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v33
                : 0LL;
          else
            v36 = 0LL;
          v8->fields._banner_5__2 = v36;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
          if ( LOBYTE(v33->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v62 = (System_Collections_Generic_Dictionary_string__object__c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] == v34
                ? (int64_t)v33
                : 0LL;
          else
            v62 = 0LL;
        }
        else
        {
          v62 = 0LL;
          v8->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
        }
        sub_1BE4A70(p_banner_5__2, v62, v2, v3, v4, v5, v6, v7);
        v66 = NotificationDialog__getStringFromScript(
                v64,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17273/*"bannerUrl"*/,
                v65);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v66, 0LL);
        v68 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1BE4D18(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor(v68, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v68;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW,
          (int64_t)v68,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        v75 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1BE4D18(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v75, 0, 0LL);
        v8->fields._texDl_5__3 = v75;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields._texDl_5__3, (int64_t)v75, v76, v77, v78, v79, v80, v81);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v61 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v82 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v8->fields.__2__current = (Il2CppObject *)v82;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BE4A70(p__2__current, (int64_t)v82, v84, v85, v86, v87, v88, v89);
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return v61;
          }
        }
      }
    }
LABEL_94:
    sub_1BE4D28(this, method);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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