void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct NotificationDialog_StaticFields *static_fields; // x9
  NotificationDialog_c *v5; // x8
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9
  struct NotificationDialog_StaticFields *v9; // x9
  struct NotificationDialog_StaticFields *v10; // x9
  struct NotificationDialog_StaticFields *v11; // x9

  if ( (byte_42E91CC & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_TypeInfo, v1, v2, v3);
    byte_42E91CC = 1;
  }
  NotificationDialog_TypeInfo->static_fields->BANNER_RETRY_MAX = 3;
  static_fields = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v5 = NotificationDialog_TypeInfo;
  v6 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v6->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v6->MESSAGE_BASE_POS.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v7->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v8 = v5->static_fields;
  *(_QWORD *)&v8->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v8->MESSAGE_LINE_POS.fields.z = 0.0;
  v5->static_fields->MESSAGE_BASE_SIZE_X = 700;
  v5->static_fields->MESSAGE_BASE_SIZE_Y = 295;
  v5->static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y = 344;
  v5->static_fields->MESSAGE_LINE_SIZE_Y = 265;
  v9 = v5->static_fields;
  v9->IMAGE_BASE_POS.fields.x = 0.0;
  *(_QWORD *)&v9->IMAGE_BASE_POS.fields.y = 0LL;
  v10 = v5->static_fields;
  *(_QWORD *)&v10->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v10->BUTTON_BASE_POS.fields.z = 0.0;
  v11 = v5->static_fields;
  *(_QWORD *)&v11->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v11->BUTTON_TEXT_POS.fields.z = 0.0;
  v5->static_fields->BUTTON_BASE_SIZE_X = 218;
  v5->static_fields->BUTTON_BASE_SIZE_Y = 56;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E91CB & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91CB = 1;
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
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v42; // x1
  __int64 baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int32_t mHeight; // w26
  float v46; // s10
  float v47; // s0
  double v48; // d0
  UnityEngine_Object_o *v49; // x27
  NotificationDialog_c *v50; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x0
  UIWidget_o *v56; // [xsp+0h] [xbp-80h] BYREF
  UISprite_o *component; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_42E91C2 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, isNoTitle, (_DWORD)message, *(_QWORD *)&spacingY);
    sub_B5D5C4(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v26, v27, v28);
    sub_B5D5C4(&System_Math_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&NotificationDialog_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&string_TypeInfo, v38, v39, v40);
    byte_42E91C2 = 1;
  }
  v56 = 0LL;
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
              (const MethodInfo_1CC4B3C *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                     &v56,
                     (const MethodInfo_1ADE84C *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( (baseWindow & 1) != 0 )
      {
        if ( !component || !v56 )
          goto LABEL_49;
        mHeight = component->fields.mHeight;
        v46 = (float)((float)v56->fields.mHeight * 0.5) + buttonPosY;
        if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Math_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        }
        v47 = fabsf((float)((float)mHeight * 0.5) + -30.0) + fabsf(v46);
        y = v46 + (float)(v47 * 0.5);
        if ( v47 == INFINITY )
          v48 = -v47;
        else
          v48 = v47;
        messageSizeY = (int)v48;
      }
      else
      {
LABEL_29:
        v50 = NotificationDialog_TypeInfo;
        if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v50 = NotificationDialog_TypeInfo;
        }
        static_fields = v50->static_fields;
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
  v49 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseWindow = UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
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
    sub_B5D69C(baseWindow, v42);
  }
  baseWindow = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !baseWindow )
    goto LABEL_49;
  if ( !*(_DWORD *)(baseWindow + 24) )
  {
    v55 = sub_B5D6C8(baseWindow);
    sub_B5D668(v55, 0LL);
  }
  *(_WORD *)(baseWindow + 32) = 10;
  baseWindow = (__int64)System_String__Trim(message, (System_Char_array *)baseWindow, 0LL);
  Empty = (System_String_o *)baseWindow;
  if ( !messageLabel )
    goto LABEL_49;
LABEL_39:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v53 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v53 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v53->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v58.fields.x = x;
  v58.fields.y = y;
  v58.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v58, 0LL);
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
  int32_t original_method_info_high; // w22
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v30; // x1
  struct UILabel_o *v31; // x24
  UILabel_o *messageLabel; // x0
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v35; // x25
  System_String_o *v36; // x23
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v38; // x3
  __int64 v39; // x0
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  original_method_info_high = messageSizeY;
  if ( (byte_42E91C3 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, isNoTitle, (_DWORD)message, *(_QWORD *)&messageSizeY);
    sub_B5D5C4(&NotificationDialog_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&string_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_20743/*"messageOffset"*/, v26, v27, v28);
    byte_42E91C3 = 1;
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
      v31 = this->fields.noTitleMessageLabel;
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
      original_method_info_high = HIDWORD(onPostFill->fields.original_method_info);
      y = *(float *)&onPostFill->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_19;
    }
  }
  v31 = this->fields.messageLabel;
  v35 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
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
    messageLabel = (UILabel_o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !messageLabel )
      goto LABEL_30;
    if ( !LODWORD(messageLabel->fields.leftAnchor) )
    {
      v39 = sub_B5D6C8(messageLabel);
      sub_B5D668(v39, 0LL);
    }
    LOWORD(messageLabel->fields.rightAnchor) = 10;
    v36 = System_String__Trim(message, (System_Char_array *)messageLabel, 0LL);
  }
  else
  {
    v36 = string_TypeInfo->static_fields->Empty;
  }
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  }
  if ( !v31 )
LABEL_30:
    sub_B5D69C(messageLabel, v30);
  UIWidget__SetDimensions(
    (UIWidget_o *)v31,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    original_method_info_high,
    0LL);
  UILabel__set_maxLineCount(v31, maxLine, 0LL);
  UILabel__set_fontSize(v31, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v31, v36, v31->fields.mFontSize, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     (NotificationDialog_o *)gameObject,
                     script,
                     (System_String_o *)StringLiteral_20743/*"messageOffset"*/,
                     v38);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition(gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_26125868(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_26125868(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E91C7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NotificationDialog_EndClose__, v10, v11, v12);
    byte_42E91C7 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeEndFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v39; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v51; // x8
  UnityEngine_Object_o *v52; // x20
  struct LinkableTexture_o *v53; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalSprites; // x21
  __int64 v56; // x23
  int size; // w8
  UnityEngine_Object_o *gameObject; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *additionalTextures; // x21
  __int64 v68; // x23
  int v69; // w8
  unsigned int v70; // w24
  __int64 v71; // x8
  UnityEngine_Object_o *v72; // x21
  struct System_Collections_Generic_List_LinkableTexture__o *v73; // x21
  UnityEngine_Object_o *v74; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7

  if ( (byte_42E91BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1/*""*/, v35, v36, v37);
    byte_42E91BE = 1;
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
    v39 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
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
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.mBannerWWW, 0LL, v44, v45, v46, v47, v48, v49);
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
      v51 = this->fields.lnkTexture;
      if ( !v51 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v51->fields.mCollider;
      if ( !titleLabel )
        goto LABEL_77;
      v52 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                      titleLabel,
                                      titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v52, 0LL);
      v53 = this->fields.lnkTexture;
      if ( !v53 )
        goto LABEL_77;
      titleLabel = (UILabel_o *)v53->fields.mCollider;
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
      v56 = 0LL;
      while ( 1 )
      {
        size = additionalSprites->fields._size;
        if ( (int)v56 >= size )
          break;
        if ( size <= (unsigned int)v56 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        titleLabel = (UILabel_o *)additionalSprites->fields._items->m_Items[v56];
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
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
          additionalSprites = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalSprites;
          ++v56;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_77;
      }
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        additionalSprites,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    }
    else
    {
      v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v59,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v59;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.additionalSprites,
        (System_Int32_array **)v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.additionalTextures;
    if ( additionalTextures )
    {
      v68 = 4LL;
      while ( 1 )
      {
        v69 = additionalTextures->fields._size;
        v70 = v68 - 4;
        if ( (int)v68 - 4 >= v69 )
          break;
        if ( v69 <= v70 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v71 = *((_QWORD *)&additionalTextures->fields._items->obj.klass + v68);
        if ( v71 )
        {
          titleLabel = *(UILabel_o **)(v71 + 40);
          if ( titleLabel )
          {
            v72 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))titleLabel->klass->vtable._26_get_mainTexture.method)(
                                            titleLabel,
                                            titleLabel->klass->vtable._27_set_mainTexture.methodPtr);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__Destroy_35620236(v72, 0LL);
            v73 = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              if ( v73->fields._size <= v70 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              titleLabel = (UILabel_o *)*((_QWORD *)&v73->fields._items->obj.klass + v68);
              if ( titleLabel )
              {
                v74 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_35620236(v74, 0LL);
                additionalTextures = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*p_additionalTextures;
                ++v68;
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
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    }
    else
    {
      v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v75,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v75;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.additionalTextures,
        (System_Int32_array **)v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
    }
    titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_77:
    sub_B5D69C(titleLabel, method);
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
  sub_B5D560(
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_B5D69C(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t onClickOkSeKind; // w20
  NotificationDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E91C8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91C8 = 1;
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  float value; // s8
  NotificationDialog_c *v37; // x0
  int32_t v38; // w20
  NotificationDialog_ClickDelegate_o *v39; // x22
  System_String_o *v40; // x24
  bool v41; // w27
  int32_t v42; // w26
  float y; // s1
  NotificationDialog_c *v44; // x0
  int32_t v45; // w20
  NotificationDialog_ClickDelegate_o *v46; // x22
  System_String_o *v47; // x24
  bool v48; // w27
  System_Nullable_int__o v49; // x21
  int32_t v50; // w26
  System_String_o *v51; // [xsp+10h] [xbp-90h]
  int32_t v52; // [xsp+10h] [xbp-90h]
  int32_t v53; // [xsp+10h] [xbp-90h]
  NotificationDialog_ClickDelegate_o *v54; // [xsp+18h] [xbp-88h]
  int32_t v55; // [xsp+18h] [xbp-88h]
  int32_t v56; // [xsp+18h] [xbp-88h]
  int32_t v57; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v58; // [xsp+20h] [xbp-80h]
  System_Nullable_int__o v59; // [xsp+20h] [xbp-80h]
  System_Nullable_float__o v60; // [xsp+28h] [xbp-78h]
  System_String_o *titlea; // [xsp+30h] [xbp-70h]
  System_String_o *titleb; // [xsp+30h] [xbp-70h]
  System_String_o *titlec; // [xsp+30h] [xbp-70h]
  bool v64; // [xsp+3Ch] [xbp-64h]
  bool v65; // [xsp+3Ch] [xbp-64h]
  bool v66; // [xsp+3Ch] [xbp-64h]
  int32_t v67; // [xsp+48h] [xbp-58h]
  int32_t v68; // [xsp+48h] [xbp-58h]
  int32_t v69; // [xsp+48h] [xbp-58h]
  int32_t v70; // [xsp+4Ch] [xbp-54h]
  int32_t v71; // [xsp+4Ch] [xbp-54h]
  int32_t v72; // [xsp+4Ch] [xbp-54h]

  v21 = buttonWidgetSizeY;
  v20 = buttonPosY;
  v22 = buttonWidgetSizeX;
  v23 = adjustText;
  v24 = messageWidgetSizeY;
  v25 = spacingY;
  v26 = titlePosY;
  v27 = onClickOkSeKind;
  v28 = messageFontSize;
  if ( (byte_42E91BF & 1) == 0 )
  {
    v67 = panelDepth;
    v70 = titleSize;
    v57 = maxLine;
    v51 = message;
    v54 = func;
    v64 = isLineDraw;
    titlea = title;
    sub_B5D5C4(&NotificationDialog_TypeInfo, (_DWORD)title, (_DWORD)message, func);
    sub_B5D5C4(&Method_System_Nullable_float__GetValueOrDefault__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Nullable_float__get_HasValue__, v33, v34, v35);
    v22 = buttonWidgetSizeX;
    v20 = buttonPosY;
    title = titlea;
    v23 = adjustText;
    message = v51;
    func = v54;
    isLineDraw = v64;
    panelDepth = v67;
    titleSize = v70;
    maxLine = v57;
    v28 = messageFontSize;
    v27 = onClickOkSeKind;
    v26 = titlePosY;
    v25 = spacingY;
    v24 = messageWidgetSizeY;
    byte_42E91BF = 1;
  }
  if ( (*(_QWORD *)&messagePosY & 0xFF00000000LL) != 0 )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v37 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v68 = panelDepth;
      v71 = titleSize;
      v60 = v20;
      titleb = title;
      v38 = maxLine;
      v39 = func;
      v65 = isLineDraw;
      v40 = message;
      v41 = v23;
      v58 = v22;
      v55 = v25;
      v52 = v27;
      v42 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v52;
      v25 = v55;
      title = titleb;
      isLineDraw = v65;
      panelDepth = v68;
      titleSize = v71;
      maxLine = v38;
      v22 = v58;
      v20 = v60;
      v37 = NotificationDialog_TypeInfo;
      v28 = v42;
      v21 = buttonWidgetSizeY;
      v23 = v41;
      message = v40;
      func = v39;
    }
    value = v37->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( (*(_QWORD *)&v20 & 0xFF00000000LL) != 0 )
  {
    y = v20.fields.value;
  }
  else
  {
    v44 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v69 = panelDepth;
      v72 = titleSize;
      v45 = maxLine;
      v46 = func;
      v66 = isLineDraw;
      v47 = message;
      titlec = title;
      v48 = v23;
      v49 = v21;
      v59 = v22;
      v56 = v25;
      v53 = v27;
      v50 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v27 = v53;
      v25 = v56;
      v22 = v59;
      title = titlec;
      isLineDraw = v66;
      panelDepth = v69;
      titleSize = v72;
      v44 = NotificationDialog_TypeInfo;
      v28 = v50;
      v21 = v49;
      v23 = v48;
      message = v47;
      func = v46;
      maxLine = v45;
    }
    y = v44->static_fields->BUTTON_BASE_POS.fields.y;
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  UIPanel_o *TargetPanel; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v73; // x23
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x24
  System_String_o *v77; // x1
  NotificationDialog_c *v78; // x0
  float *p_BANNER_RETRY_MAX; // x8
  float v80; // s11
  float v81; // s10
  float y; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v84; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s10
  float z; // s11
  UnityEngine_Object_o *lineSprite; // x20
  NotificationDialog_c *v89; // x0
  struct NotificationDialog_StaticFields *v90; // x8
  UnityEngine_Object_o *messageLabel; // x20
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x20
  UnityEngine_Object_o *lnkTexture; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  NotificationDialog_c *v96; // x0
  struct NotificationDialog_StaticFields *v97; // x8
  UILabel_o *v98; // x20
  float v99; // s10
  float v100; // s9
  float v101; // s13
  float v102; // s11
  float v103; // s12
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0
  UnityEngine_GameObject_o *v106; // x20
  UIWidget_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v108; // x20
  int method_ptr; // w22
  System_Action_o *v110; // x19
  const MethodInfo *v111; // [xsp+0h] [xbp-C0h]
  int value; // [xsp+10h] [xbp-B0h]
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  value = buttonWidgetSizeY.fields.value;
  MESSAGE_BASE_SIZE_Y = messageWidgetSizeY.fields.value;
  if ( (byte_42E91C0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, func);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v32, v33, v34);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_NotificationDialog_EndOpen__, v38, v39, v40);
    sub_B5D5C4(&NotificationDialog_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Nullable_int__GetValueOrDefault__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Nullable_float__GetValueOrDefault__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Nullable_int__get_HasValue__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Nullable_float__get_HasValue__, v53, v54, v55);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1/*""*/, v62, v63, v64);
    byte_42E91C0 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v73 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v73 )
        goto LABEL_122;
      this->fields.keepPanelDepth = v73->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
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
      v77 = title;
    else
      v77 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v77, 0LL);
    v78 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v78 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v78->static_fields->BANNER_RETRY_MAX;
    v80 = p_BANNER_RETRY_MAX[1];
    v81 = p_BANNER_RETRY_MAX[3];
    if ( (*(_QWORD *)&titlePosY & 0xFF00000000LL) != 0 )
    {
      y = titlePosY.fields.value;
    }
    else
    {
      y = p_BANNER_RETRY_MAX[2];
      if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        y = NotificationDialog_TypeInfo->static_fields->TITLE_BASE_POS.fields.y;
      }
    }
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_122;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v115.fields.x = v80;
    v115.fields.y = y;
    v115.fields.z = v81;
    GameObjectExtensions__SetLocalPosition(gameObject, v115, 0LL);
  }
  v84 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v84 = NotificationDialog_TypeInfo;
  }
  static_fields = v84->static_fields;
  x = static_fields->MESSAGE_BASE_POS.fields.x;
  z = static_fields->MESSAGE_BASE_POS.fields.z;
  if ( static_fields->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = static_fields->MESSAGE_BASE_POS.fields.y;
  if ( (*(_QWORD *)&messageWidgetSizeY & 0xFF00000000LL) == 0 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
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
      v89 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v89 = NotificationDialog_TypeInfo;
      }
      v90 = v89->static_fields;
      x = v90->MESSAGE_LINE_POS.fields.x;
      messagePosY = v90->MESSAGE_LINE_POS.fields.y;
      z = v90->MESSAGE_LINE_POS.fields.z;
      MESSAGE_BASE_SIZE_Y = v90->MESSAGE_LINE_SIZE_Y;
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
    v116.fields.x = x;
    v116.fields.y = messagePosY;
    v116.fields.z = z;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      MESSAGE_BASE_SIZE_Y,
      maxLine,
      messageFontSize,
      adjustText,
      v116,
      buttonPosY,
      v111);
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
    v96 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v96 = NotificationDialog_TypeInfo;
    }
    v97 = v96->static_fields;
    v98 = this->fields.okBtnLabel;
    v99 = v97->BUTTON_BASE_POS.fields.x;
    v100 = v97->BUTTON_BASE_POS.fields.z;
    v101 = v97->BUTTON_TEXT_POS.fields.x;
    v103 = v97->BUTTON_TEXT_POS.fields.y;
    v102 = v97->BUTTON_TEXT_POS.fields.z;
    if ( v97->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v97->BUTTON_BASE_POS.fields.y;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v98 )
      goto LABEL_122;
    UILabel__set_text(v98, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v117.fields.x = v101;
    v117.fields.y = v103;
    v117.fields.z = v102;
    GameObjectExtensions__SetLocalPosition(v104, v117, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_122;
    v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v118.fields.x = v99;
    v118.fields.y = buttonPosY;
    v118.fields.z = v100;
    GameObjectExtensions__SetLocalPosition(v105, v118, 0LL);
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
    v106 = (UnityEngine_GameObject_o *)transform;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)transform,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v108 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v106,
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
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
        if ( !v108 )
          goto LABEL_122;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v108, 0LL);
        size.fields.x = (float)method_ptr;
        size.fields.y = (float)value;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v108, size, 0LL);
      }
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v73 )
    {
      UIPanel__set_depth(v73, keepPanelDepth, 0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B5D69C(transform, keepPanelDepth);
  }
LABEL_121:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v110 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v110, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v110, 0, 0LL);
}


void __fastcall NotificationDialog__Open_26120212(
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


void __fastcall NotificationDialog__Open_26121300(
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  UIPanel_o *TargetPanel; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v101; // x21
  UILabel_o *Value; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v105; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v107; // x3
  UnityEngine_GameObject_o *v108; // x26
  NotificationDialog_c *v109; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v111; // s8
  float v112; // s9
  float v113; // s10
  NotificationDialog_c *v114; // x0
  float *v115; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v117; // s8
  float v118; // s9
  float v119; // s10
  int32_t v120; // w26
  NotificationDialog_c *v121; // x0
  float *v122; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v125; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v127; // x11
  __int64 v128; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v129; // x0
  struct System_Object_array *v130; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct System_Object_array *sprites; // x8
  __int64 v139; // x9
  struct LinkableSprite_o *v140; // x24
  unsigned __int64 v141; // x21
  UnityEngine_GameObject_o *v142; // x24
  UnityEngine_GameObject_o *v143; // x24
  UnityEngine_Component_o *parent; // x0
  System_Collections_Generic_Dictionary_string__object__o *v145; // x8
  __int64 v146; // x11
  System_Collections_Generic_Dictionary_string__object__o *v147; // x25
  UnityEngine_GameObject_o *v148; // x0
  UISprite_o *mCollider; // x27
  UnityEngine_GameObject_o *v150; // x26
  const MethodInfo *v151; // x3
  System_String_o *StringFromScript; // x28
  UnityEngine_GameObject_o *v153; // x0
  const MethodInfo *v154; // x3
  NotificationDialog_c *v155; // x8
  UnityEngine_GameObject_o *v156; // x26
  float *v157; // x8
  float v158; // s9
  float v159; // s10
  float v160; // s11
  NotificationDialog_o *v161; // x0
  const MethodInfo *v162; // x3
  NotificationDialog_o *v163; // x0
  const MethodInfo *v164; // x3
  double v165; // d2
  double v166; // d0
  NotificationDialog_o *IntFromScript; // x0
  int32_t v168; // w26
  const MethodInfo *v169; // x3
  System_String_o *v170; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v172; // x11
  __int64 v173; // x11
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v174; // x0
  struct System_Object_array *v175; // x0
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  struct System_Object_array *banners; // x8
  int v183; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v185; // x23
  UnityEngine_GameObject_o *v186; // x0
  const MethodInfo *v187; // x3
  NotificationDialog_c *v188; // x8
  UnityEngine_GameObject_o *v189; // x23
  float *v190; // x8
  float v191; // s8
  float v192; // s9
  float v193; // s10
  System_Action_o *v194; // x20
  System_Action_o *v195; // x20
  const MethodInfo *v196; // x2
  __int64 v197; // x0
  UnityEngine_Object_o *x; // [xsp+8h] [xbp-98h]
  MethodInfo v201; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v203; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v205; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v206; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v208; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v209; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E91C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, func);
    sub_B5D5C4(&AtlasManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ToArray__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_NotificationDialog_EndOpen__, v42, v43, v44);
    sub_B5D5C4(&Method_NotificationDialog__Open_b__42_0__, v45, v46, v47);
    sub_B5D5C4(&NotificationDialog_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v51, v52, v53);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_16807/*"banners"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_22436/*"size"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_23270/*"urlOpenType"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_21478/*"offset"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_23010/*"titleOffset"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_22534/*"spriteName"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_23269/*"urlLink"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_17332/*"buttonOffset"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_1/*""*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_22535/*"sprites"*/, v90, v91, v92);
    byte_42E91C1 = 1;
  }
  v201.name = 0LL;
  LODWORD(v201.invoker_method) = 0;
  v201.methodPointer = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v101 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Value = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v101, 0LL, 0LL);
    if ( ((unsigned __int8)Value & 1) != 0 )
    {
      if ( !v101 )
        goto LABEL_152;
      this->fields.keepPanelDepth = v101->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  x = (UnityEngine_Object_o *)v101;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v94,
    v95,
    v96,
    v97,
    v98,
    v99);
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
    v105 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(Value, v105, 0LL);
    Value = this->fields.titleLabel;
    if ( !Value )
      goto LABEL_152;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v108 = gameObject;
    v109 = NotificationDialog_TypeInfo;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v109 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v109->static_fields->BANNER_RETRY_MAX;
    v111 = p_BANNER_RETRY_MAX[1];
    v112 = p_BANNER_RETRY_MAX[2];
    v113 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       (NotificationDialog_o *)gameObject,
                       script,
                       (System_String_o *)StringLiteral_23010/*"titleOffset"*/,
                       v107);
    VectFromScript.fields.x = v111 + VectFromScript.fields.x;
    VectFromScript.fields.y = v112 + VectFromScript.fields.y;
    VectFromScript.fields.z = v113 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v108, VectFromScript, 0LL);
  }
  v114 = NotificationDialog_TypeInfo;
  if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v114 = NotificationDialog_TypeInfo;
  }
  v115 = (float *)&v114->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v117 = v115[4];
  v118 = v115[5];
  v119 = v115[6];
  v120 = *((_DWORD *)v115 + 14);
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
      v121 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v121 = NotificationDialog_TypeInfo;
      }
      v122 = (float *)&v121->static_fields->BANNER_RETRY_MAX;
      v117 = v122[10];
      v118 = v122[11];
      v119 = v122[12];
      v120 = *((_DWORD *)v122 + 16);
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
    v203.fields.x = v117;
    v203.fields.y = v118;
    v203.fields.z = v119;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v120, maxLine, v203, script, v125);
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
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22535/*"sprites"*/,
                           (System_Xml_Schema_XmlSchemaObject_o **)&v201.name,
                           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)Value & 1) == 0 )
      goto LABEL_99;
    if ( !v201.name )
      goto LABEL_152;
    v127 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v201.name + 300LL) < (unsigned int)v127
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v201.name + 200LL) + 8 * v127 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_152;
    }
    v128 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v201.name + 300LL) >= (unsigned int)v128 )
      v129 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v201.name + 200LL) + 8 * v128 - 8) == System_Collections_Generic_List_object__TypeInfo
           ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v201.name
           : 0LL;
    else
      v129 = 0LL;
    v130 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           v129,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v130;
    p_sprites = &this->fields.sprites;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.sprites,
      (System_Int32_array **)v130,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    sprites = this->fields.sprites;
    if ( sprites && (v139 = *(_QWORD *)&sprites->max_length) != 0 )
    {
      if ( (int)v139 >= 1 )
      {
        v140 = this->fields.lnkSprite;
        v141 = 0LL;
        while ( 1 )
        {
          if ( v141 )
          {
            Value = (UILabel_o *)this->fields.lnkSprite;
            if ( !Value )
              break;
            v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            Value = (UILabel_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v142,
                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v143 = (UnityEngine_GameObject_o *)Value;
            Value = (UILabel_o *)UnityEngine_Component__get_transform(
                                   (UnityEngine_Component_o *)this->fields.lnkSprite,
                                   0LL);
            if ( !Value )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
            GameObjectExtensions__SetParent(v143, parent, 0LL);
            one = UnityEngine_Vector3__get_one(0LL);
            GameObjectExtensions__SetLocalScale(v143, one, 0LL);
            if ( !v143 )
              break;
            Value = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v143,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            if ( !this->fields.additionalSprites )
              break;
            v140 = (struct LinkableSprite_o *)Value;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.additionalSprites,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Value,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LinkableSprite__Add__);
            sprites = *p_sprites;
            if ( !*p_sprites )
              break;
          }
          if ( v141 >= sprites->max_length )
          {
            v197 = sub_B5D6C8(Value);
            sub_B5D668(v197, 0LL);
          }
          v145 = (System_Collections_Generic_Dictionary_string__object__o *)sprites->m_Items[v141];
          if ( v145
            && (v146 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v145->klass->_2.bitflags2 + 1) >= (unsigned int)v146) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v145->klass->_2.typeHierarchy[v146 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v147 = v145;
            else
              v147 = 0LL;
            if ( !v140 )
              break;
          }
          else
          {
            v147 = 0LL;
            if ( !v140 )
              break;
          }
          v148 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v140, 0LL);
          mCollider = (UISprite_o *)v140->fields.mCollider;
          v150 = v148;
          StringFromScript = NotificationDialog__getStringFromScript(
                               (NotificationDialog_o *)v148,
                               v147,
                               (System_String_o *)StringLiteral_22534/*"spriteName"*/,
                               v151);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          Value = (UILabel_o *)AtlasManager__SetEventUI(mCollider, StringFromScript, 0LL);
          if ( !v150 )
            break;
          UnityEngine_GameObject__SetActive(v150, (unsigned __int8)Value & 1, 0LL);
          v153 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v140, 0LL);
          v155 = NotificationDialog_TypeInfo;
          v156 = v153;
          if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v155 = NotificationDialog_TypeInfo;
          }
          v157 = (float *)&v155->static_fields->BANNER_RETRY_MAX;
          v158 = v157[17];
          v159 = v157[18];
          v160 = v157[19];
          v205 = NotificationDialog__getVectFromScript(
                   (NotificationDialog_o *)v153,
                   v147,
                   (System_String_o *)StringLiteral_21478/*"offset"*/,
                   v154);
          v205.fields.x = v158 + v205.fields.x;
          v205.fields.y = v159 + v205.fields.y;
          v205.fields.z = v160 + v205.fields.z;
          GameObjectExtensions__SetLocalPosition(v156, v205, 0LL);
          v206 = NotificationDialog__getVectFromScript(v161, v147, (System_String_o *)StringLiteral_22436/*"size"*/, v162);
          v201.methodPointer = *(Il2CppMethodPointer *)&v206.fields.x;
          *(float *)&v201.invoker_method = v206.fields.z;
          zero = UnityEngine_Vector3__get_zero(0LL);
          if ( UnityEngine_Vector3__Equals_51042536(zero, v209, &v201) )
          {
            LinkableSprite__MakePixelPerfect(v140, 0LL);
          }
          else
          {
            v165 = *(float *)&v201.methodPointer;
            v166 = *((float *)&v201.methodPointer + 1);
            if ( *(float *)&v201.methodPointer == INFINITY )
              v165 = -INFINITY;
            if ( *((float *)&v201.methodPointer + 1) == INFINITY )
              v166 = -INFINITY;
            LinkableSprite__SetSize(v140, (int)v165, (int)v166, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v163,
                                                    v147,
                                                    (System_String_o *)StringLiteral_23270/*"urlOpenType"*/,
                                                    v164);
          v168 = (int)IntFromScript;
          v170 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v147,
                   (System_String_o *)StringLiteral_23269/*"urlLink"*/,
                   v169);
          LinkableSprite__SetUp(v140, v168, v170, 0LL);
          sprites = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( (__int64)++v141 >= (int)sprites->max_length )
            goto LABEL_102;
        }
LABEL_152:
        sub_B5D69C(Value, keepPanelDepth);
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
                         (System_Xml_XmlQualifiedName_o *)StringLiteral_16807/*"banners"*/,
                         (System_Xml_Schema_XmlSchemaObject_o **)&v201.name,
                         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
  if ( ((unsigned __int8)Value & 1) == 0 )
    goto LABEL_119;
  if ( !v201.name )
    goto LABEL_152;
  v172 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v201.name + 300LL) < (unsigned int)v172
    || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v201.name + 200LL) + 8 * v172 - 8) != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_152;
  }
  v173 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v201.name + 300LL) >= (unsigned int)v173 )
    v174 = *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)v201.name + 200LL) + 8 * v173 - 8) == System_Collections_Generic_List_object__TypeInfo
         ? (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v201.name
         : 0LL;
  else
    v174 = 0LL;
  v175 = (struct System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         v174,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
  this->fields.banners = v175;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.banners,
    (System_Int32_array **)v175,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
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
    v183 = 1;
    goto LABEL_123;
  }
  v183 = 0;
LABEL_123:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v185 = this->fields.okBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Value = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v185 )
      goto LABEL_152;
    UILabel__set_text(v185, (System_String_o *)Value, 0LL);
    Value = this->fields.okBtnLabel;
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    Value = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Value, 0LL);
    if ( !Value )
      goto LABEL_152;
    v186 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
    v188 = NotificationDialog_TypeInfo;
    v189 = v186;
    if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v188 = NotificationDialog_TypeInfo;
    }
    v190 = (float *)&v188->static_fields->BANNER_RETRY_MAX;
    v191 = v190[20];
    v192 = v190[21];
    v193 = v190[22];
    v208 = NotificationDialog__getVectFromScript(
             (NotificationDialog_o *)v186,
             script,
             (System_String_o *)StringLiteral_17332/*"buttonOffset"*/,
             v187);
    v208.fields.x = v191 + v208.fields.x;
    v208.fields.y = v192 + v208.fields.y;
    v208.fields.z = v193 + v208.fields.z;
    GameObjectExtensions__SetLocalPosition(v189, v208, 0LL);
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
  if ( v183 )
  {
    v194 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v194, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v194, 0, 0LL);
  }
  else
  {
    Value = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v195 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v195, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v195, v196);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E91C9 & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E91C9 = 1;
  }
  v5 = sub_B5D694(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  NotificationDialog__StartDownloadBanner_d__54___ctor((NotificationDialog__StartDownloadBanner_d__54_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v12; // x20

  if ( (byte_42E91CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NotificationDialog_EndOpen__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E91CD = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__54_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_IEnumerator_o *started; // x1
  ManagementManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E91CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E91CE = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v8);
    ManagementManager__reboot(Instance, 0, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E91C6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)script, (_DWORD)key, method);
    this = (NotificationDialog_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6,
                                     v7,
                                     v8);
    byte_42E91C6 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B5D69C(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v9 = (Il2CppObject *)value;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v9, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E91C5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)script,
      (_DWORD)key,
      method);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    this = (NotificationDialog_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E91C5 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B5D69C(this, script);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Xml_Schema_XmlSchemaObject_o *v18; // x20
  __int64 v19; // x10
  float v20; // s0
  float v21; // s1
  float v22; // s2
  Il2CppObject *v23; // x19
  double v24; // d8
  double v25; // d1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E91C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)script, (_DWORD)key, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v12, v13, v14);
    this = (NotificationDialog_o *)sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v15, v16, v17);
    byte_42E91C4 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_B5D69C(this, script);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v18 = value) != 0LL
    && (v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v19)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v19 - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value->fields.sourceUri) >= 2 )
  {
    v23 = *(Il2CppObject **)(*(_QWORD *)&value->fields.lineNum + 32LL);
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    v24 = System_Convert__ToDouble(v23, 0LL);
    if ( LODWORD(v18->fields.sourceUri) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v25 = System_Convert__ToDouble(*(Il2CppObject **)(*(_QWORD *)&v18->fields.lineNum + 40LL), 0LL);
    v20 = v24;
    v21 = v25;
    v22 = 0.0;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  }
  result.fields.z = v22;
  result.fields.y = v21;
  result.fields.x = v20;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E91CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15678/*"Window/OkBtn"*/, (_DWORD)method, v2, v3);
    byte_42E91CA = 1;
  }
  return (System_String_o *)StringLiteral_15678/*"Window/OkBtn"*/;
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5A64 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isOk, (_DWORD)callback, object);
    byte_42E5A64 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  NotificationDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isOk, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isOk, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isOk, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v2; // w2
  __int64 v3; // x3
  NotificationDialog__StartDownloadBanner_d__54_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  bool v64; // w21
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v67; // x8
  __int64 v68; // x11
  struct System_Collections_Generic_Dictionary_string__object__o *v69; // x1
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v73; // x22
  UnityEngine_Object_o *texture; // x23
  System_String_o *v75; // x0
  bool IsNullOrEmpty; // w0
  int v77; // w20
  NotificationDialog_c *v78; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v80; // x22
  ErrorDialog_ClickDelegate_o *v81; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v83; // x0
  System_String_o *v84; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v86; // x22
  UnityEngine_Networking_DownloadHandlerTexture_o *v87; // x22
  Il2CppObject **p__2__current; // x20
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v92; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v94; // x23
  NotificationDialog_c *v95; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v97; // s8
  float v98; // s9
  float v99; // s10
  double v100; // d3
  double v101; // d0
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v104; // w20
  System_String_o *StringFromScript; // x0
  __int64 v106; // x0
  MethodInfo v107; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s3.4,4:s4.4,8:s5.4

  v4 = this;
  if ( (byte_42E5A63 & 1) == 0 )
  {
    sub_B5D5C4(&ErrorDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v23, v24, v25);
    sub_B5D5C4(&NotificationDialog_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_16800/*"bannerUrl"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_22436/*"size"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_23270/*"urlOpenType"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_21478/*"offset"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_23269/*"urlLink"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_1/*""*/, v56, v57, v58);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_B5D5C4(&StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v59, v60, v61);
    byte_42E5A63 = 1;
  }
  LODWORD(v107.invoker_method) = 0;
  v107.methodPointer = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_77;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_77;
      v73 = this;
      texture = (UnityEngine_Object_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                          v4->fields._texDl_5__3,
                                          0LL);
    }
    else
    {
LABEL_19:
      texture = 0LL;
      v73 = 0LL;
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
    v75 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v75, 0LL);
    if ( !v73 || !IsNullOrEmpty || !v73->fields.__2__current )
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
                                                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_77;
        v92 = (UnityEngine_GameObject_o *)this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_77;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent(v92, parent, 0LL);
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(v92, one, 0LL);
        if ( !v92 )
          goto LABEL_77;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v92,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        if ( !_4__this->fields.additionalTextures )
          goto LABEL_77;
        lnkTexture = this;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.additionalTextures,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LinkableTexture__Add__);
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
      v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v95 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v95 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v95->static_fields->BANNER_RETRY_MAX;
      v97 = p_BANNER_RETRY_MAX[17];
      v98 = p_BANNER_RETRY_MAX[18];
      v99 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         _4__this,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_21478/*"offset"*/,
                         0LL);
      VectFromScript.fields.x = v97 + VectFromScript.fields.x;
      VectFromScript.fields.y = v98 + VectFromScript.fields.y;
      VectFromScript.fields.z = v99 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v94, VectFromScript, 0LL);
      v110 = NotificationDialog__getVectFromScript(
               _4__this,
               v4->fields._banner_5__2,
               (System_String_o *)StringLiteral_22436/*"size"*/,
               0LL);
      v107.methodPointer = *(Il2CppMethodPointer *)&v110.fields.x;
      *(float *)&v107.invoker_method = v110.fields.z;
      zero = UnityEngine_Vector3__get_zero(0LL);
      if ( UnityEngine_Vector3__Equals_51042536(zero, v112, &v107) )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        v100 = *(float *)&v107.methodPointer;
        v101 = -*((float *)&v107.methodPointer + 1);
        if ( *(float *)&v107.methodPointer == INFINITY )
          v100 = -*(float *)&v107.methodPointer;
        if ( *((float *)&v107.methodPointer + 1) != INFINITY )
          v101 = *((float *)&v107.methodPointer + 1);
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, (int)v100, (int)v101, 0LL);
      }
      IntFromScript = NotificationDialog__getIntFromScript(
                        _4__this,
                        v4->fields._banner_5__2,
                        (System_String_o *)StringLiteral_23270/*"urlOpenType"*/,
                        0LL);
      banner_5__2 = v4->fields._banner_5__2;
      v104 = IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           _4__this,
                           banner_5__2,
                           (System_String_o *)StringLiteral_23269/*"urlLink"*/,
                           0LL);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v104, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, 0LL);
    }
    else
    {
LABEL_30:
      v77 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v77;
      v78 = NotificationDialog_TypeInfo;
      if ( (BYTE3(NotificationDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v78 = NotificationDialog_TypeInfo;
      }
      if ( v77 <= v78->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_9389/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v81 = (ErrorDialog_ClickDelegate_o *)sub_B5D694(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v81,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_77;
        CommonUI__OpenRetryDialog(Instance, (System_String_o *)StringLiteral_1/*""*/, v80, v81, 0, 0LL);
      }
    }
    v83 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v83 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v83, 0LL);
      *p_mBannerWWW = 0LL;
      sub_B5D560(&_4__this->fields.mBannerWWW);
    }
    return 0;
  }
  else
  {
    v64 = 0;
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        banners = _4__this->fields.banners;
        if ( banners )
        {
          mLoadingIdx = _4__this->fields.mLoadingIdx;
          if ( (unsigned int)mLoadingIdx >= banners->max_length )
          {
            v106 = sub_B5D6C8(this);
            sub_B5D668(v106, 0LL);
          }
          v67 = banners->m_Items[mLoadingIdx];
          if ( v67
            && (v68 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
                *(&v67->klass->_2.bitflags2 + 1) >= (unsigned int)v68) )
          {
            v69 = (System_Collections_Generic_Dictionary_string__object__c *)v67->klass->_2.typeHierarchy[v68 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v67
                : 0LL;
          }
          else
          {
            v69 = 0LL;
          }
          v4->fields._banner_5__2 = v69;
          sub_B5D560(&v4->fields._banner_5__2);
          v84 = NotificationDialog__getStringFromScript(
                  _4__this,
                  v4->fields._banner_5__2,
                  (System_String_o *)StringLiteral_16800/*"bannerUrl"*/,
                  0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          WebViewFullAddress = NetworkManager__getWebViewFullAddress(v84, 0LL);
          v86 = (UnityEngine_Networking_UnityWebRequest_o *)sub_B5D694(UnityEngine_Networking_UnityWebRequest_TypeInfo);
          UnityEngine_Networking_UnityWebRequest___ctor(v86, WebViewFullAddress, 0LL);
          _4__this->fields.mBannerWWW = v86;
          sub_B5D560(&_4__this->fields.mBannerWWW);
          v87 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_B5D694(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
          UnityEngine_Networking_DownloadHandlerTexture___ctor(v87, 0, 0LL);
          v4->fields._texDl_5__3 = v87;
          sub_B5D560(&v4->fields._texDl_5__3);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          if ( this )
          {
            UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
              (UnityEngine_Networking_UnityWebRequest_o *)this,
              (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
              0LL);
            this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
            v64 = 1;
            _4__this->fields.refuseInit = 1;
            if ( this )
            {
              v4->fields.__2__current = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                                                          (UnityEngine_Networking_UnityWebRequest_o *)this,
                                                          0LL);
              p__2__current = &v4->fields.__2__current;
              sub_B5D560(p__2__current);
              *((_DWORD *)p__2__current - 2) = 1;
              return v64;
            }
          }
        }
      }
LABEL_77:
      sub_B5D69C(this, method);
    }
  }
  return v64;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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