void __fastcall MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v3; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v4; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v11; // x8

  if ( (byte_4B3A38A & 1) == 0 )
  {
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v1);
    byte_4B3A38A = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v3 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v4 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MainMessageBasePos.fields.x = 0x42BE000000000000LL;
  v4->MainMessageBasePos.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->NoTitleMainMessageBasePos.fields.x = 0x42F0000000000000LL;
  v5->NoTitleMainMessageBasePos.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->DetailTitleBasePos.fields.x = 0x4361000000000000LL;
  v6->DetailTitleBasePos.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->DetailMessageBasePos.fields.x = 0x4357000000000000LL;
  v7->DetailMessageBasePos.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->NoTitleDetailMessageBasePos.fields.x = 0x436B000000000000LL;
  v8->NoTitleDetailMessageBasePos.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->OkButtonBasePos.fields.x = 0xC340800000000000LL;
  v9->OkButtonBasePos.fields.z = 0.0;
  v10 = v3->static_fields;
  *(_QWORD *)&v10->OkButtonBasePosTypeTwoAlternative.fields.x = 0xC3408000C3200000LL;
  v10->OkButtonBasePosTypeTwoAlternative.fields.z = 0.0;
  v11 = v3->static_fields;
  v11->DetailMessageBaseHeight = 1000;
  *(_OWORD *)&v11->ButtonBaseSizeX = xmmword_BD9010;
  *(_OWORD *)&v11->MainTitleFontSize = xmmword_BD8DB0;
}


void __fastcall MessageAndScrollDetailConfirmDialog___ctor(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3A389 & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    byte_4B3A389 = 1;
  }
  this->fields.isInitPanelDepth = 1;
  *(_QWORD *)&this->fields.onClickOkSeKind = 0x800000001LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        const MethodInfo *method)
{
  System_Nullable_int__o v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v13; // x22
  UIWidget_o *Component_object; // x23
  Il2CppObject *v15; // x22
  MessageAndScrollDetailConfirmDialog_c *v16; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v20; // x20
  Il2CppObject *v21; // x21
  MessageAndScrollDetailConfirmDialog_c *v22; // x0
  int v23; // s8
  int32_t v24; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v5 = inputCancelBtnWidth;
  if ( (byte_4B3A37F & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, inputCancelBtnWidth);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v8);
    sub_1BD3458(&Method_System_Nullable_int__GetValueOrDefault__, v9);
    sub_1BD3458(&Method_System_Nullable_int__get_HasValue__, v10);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v11);
    byte_4B3A37F = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  v13 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = UnityEngine_GameObject__GetComponent_object_(
          v13,
          (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
    {
      if ( v5.fields.hasValue )
      {
        inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&v5);
        if ( !Component_object )
          goto LABEL_45;
      }
      else
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                      + 96LL);
        if ( !Component_object )
          goto LABEL_45;
      }
      UIWidget__set_width(Component_object, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
      v16 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v16 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v16->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v15 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0LL);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v15, size, 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0LL) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_45;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v20 = (UIWidget_o *)okBtnLabel;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v20 )
            goto LABEL_45;
        }
        else
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                        + 96LL);
          if ( !v20 )
            goto LABEL_45;
        }
        UIWidget__set_width(v20, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
        v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v20, v22->static_fields->ButtonBaseSizeY, 0LL);
        if ( v21 )
        {
          v23 = v20->fields.mWidth;
          v24 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v26 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v21, 0LL);
          v26.fields.x = (float)v23;
          v26.fields.y = (float)v24;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v21, v26, 0LL);
          return;
        }
LABEL_45:
        ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BD36B4)(okBtnLabel, inputCancelBtnWidth);
      }
    }
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize_45012304(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v13; // x21
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w23
  MessageAndScrollDetailConfirmDialog_c *v17; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v19; // x21
  Il2CppObject *v20; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w19
  MessageAndScrollDetailConfirmDialog_c *v24; // x0
  int32_t v25; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3A380 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, script);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_17934/*"cancelBtnWidth"*/, v8);
    sub_1BD3458(&StringLiteral_18732/*"decideBtnWidth"*/, v9);
    byte_4B3A380 = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  v11 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v11,
          (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( v14 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v14,
                                                script,
                                                (System_String_o *)StringLiteral_17934/*"cancelBtnWidth"*/,
                                                v15);
      v16 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v16 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v16, 0LL);
      v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v17->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v13 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
      size.fields.x = (float)v16;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v13, size, 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0LL) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_43;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v19 = (UIWidget_o *)okBtnLabel;
    v20 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( v21 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v21,
                                                  script,
                                                  (System_String_o *)StringLiteral_18732/*"decideBtnWidth"*/,
                                                  v22);
        v23 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v23 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
        }
        if ( v19 )
        {
          UIWidget__set_width(v19, v23, 0LL);
          v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v19, v24->static_fields->ButtonBaseSizeY, 0LL);
          if ( v20 )
          {
            v25 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v27 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v20, 0LL);
            v27.fields.x = (float)v23;
            v27.fields.y = (float)v25;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v20, v27, 0LL);
            return;
          }
        }
LABEL_43:
        sub_1BD36B4(okBtnLabel, script);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool isNoMainTitle,
        bool isNoDetailTitle,
        System_String_o *mainMessage,
        System_String_o *detailMessage,
        int32_t mainFontSize,
        int32_t detailFontSize,
        int32_t maxLine,
        UnityEngine_Vector3_o mainMessagePos,
        UnityEngine_Vector3_o detailMessagePos,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        const MethodInfo *method)
{
  MessageAndScrollDetailConfirmDialog_o *v19; // x28
  __int64 v20; // x1
  UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x29
  UnityEngine_GameObject_o *v25; // x0
  MessageAndScrollDetailConfirmDialog_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x29
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v29; // x0
  MessageAndScrollDetailConfirmDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x29
  UnityEngine_GameObject_o *v32; // x0
  MessageAndScrollDetailConfirmDialog_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x29
  MessageAndScrollDetailConfirmDialog_c *v35; // x0
  System_String_o *Empty; // x25
  System_String_o *v37; // x24
  MessageAndScrollDetailConfirmDialog_c *v38; // x0
  MessageAndScrollDetailConfirmDialog_c *v39; // x0
  MessageAndScrollDetailConfirmDialog_c *v40; // x0
  MessageAndScrollDetailConfirmDialog_c *v41; // x0

  v19 = this;
  if ( (byte_4B3A37C & 1) == 0 )
  {
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BD3458(&string_TypeInfo, v20);
    byte_4B3A37C = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v19->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v19->fields.noTitleMainMessageLabel,
                   0LL);
    v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v24 = gameObject;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v24, v23->static_fields->NoTitleMainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleMainMessageLabel = v19->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.mainMessageLabel, 0LL);
    v26 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v27 = v25;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v26 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v27, v26->static_fields->MainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_46:
      sub_1BD36B4(this, isNoMainTitle);
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = v19->fields.noTitleDetailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.noTitleDetailMessageLabel, 0LL);
    v30 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v31 = v29;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v30 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v31, v30->static_fields->NoTitleDetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleDetailMessageLabel = v19->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.detailMessageLabel, 0LL);
    v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v34 = v32;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v34, v33->static_fields->DetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleDetailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v35->static_fields->DetailMessageBaseHeight, 0LL);
  UILabel__set_alignment(noTitleMainMessageLabel, mainMsgAlignment, 0LL);
  UILabel__set_alignment(noTitleDetailMessageLabel, detailMsgAlignment, 0LL);
  if ( mainMessage )
    Empty = System_String__Trim_62554608(mainMessage, 0xAu, 0LL);
  else
    Empty = string_TypeInfo->static_fields->Empty;
  if ( detailMessage )
    v37 = System_String__Trim_62554608(detailMessage, 0xAu, 0LL);
  else
    v37 = string_TypeInfo->static_fields->Empty;
  v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v38->static_fields->MainMessageFontSize, 0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  WrapControlText__textAdjust(noTitleMainMessageLabel, Empty, noTitleMainMessageLabel->fields.mFontSize, 0, 0LL);
  if ( mainFontSize <= 0 )
  {
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v39->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0LL);
  v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v40->static_fields->DetailMessageFontSize, 0LL);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v37,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0LL);
  if ( detailFontSize <= 0 )
  {
    v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v41->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_45006700(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool isNoMainTitle,
        bool isNoDetailTitle,
        System_String_o *mainMessage,
        System_String_o *detailMessage,
        int32_t maxLine,
        UnityEngine_Vector3_o mainMessagePos,
        UnityEngine_Vector3_o detailMessagePos,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  float z; // s8
  float x; // s9
  float v13; // s10
  float v14; // s11
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
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *mainMessageLabel; // x0
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v38; // x3
  float v39; // s12
  MessageAndScrollDetailConfirmDialog_o *v40; // x26
  const MethodInfo *v41; // x3
  struct UILabel_o *noTitleDetailMessageLabel; // x24
  float v43; // s10
  MessageAndScrollDetailConfirmDialog_o *v44; // x26
  const MethodInfo *v45; // x3
  float v46; // s10
  MessageAndScrollDetailConfirmDialog_o *v47; // x26
  const MethodInfo *v48; // x3
  MessageAndScrollDetailConfirmDialog_o *v49; // x0
  const MethodInfo *v50; // x3
  System_String_o *StringFromScript; // x25
  const MethodInfo *v52; // x3
  System_String_o *v53; // x25
  _BOOL8 v54; // x0
  const MethodInfo *v55; // x3
  System_String_o *Empty; // x23
  System_String_o *v57; // x22
  MessageAndScrollDetailConfirmDialog_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v61; // x0
  const MethodInfo *v62; // x3
  int MainMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v64; // x0
  MessageAndScrollDetailConfirmDialog_c *v65; // x0
  MessageAndScrollDetailConfirmDialog_o *v66; // x0
  const MethodInfo *v67; // x3
  int32_t v68; // w0
  MessageAndScrollDetailConfirmDialog_o *v69; // x0
  const MethodInfo *v70; // x3
  int DetailMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v72; // x0
  int32_t result; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v13 = mainMessagePos.fields.z;
  v14 = mainMessagePos.fields.x;
  if ( (byte_4B3A37D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Enum_TryParse_NGUIText_Alignment___, isNoMainTitle);
    sub_1BD3458(&System_Enum_TypeInfo, v21);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v22);
    sub_1BD3458(&string_TypeInfo, v23);
    sub_1BD3458(&StringLiteral_21513/*"mainMsgAlignment"*/, v24);
    sub_1BD3458(&StringLiteral_21515/*"mainMsgOffset"*/, v25);
    sub_1BD3458(&StringLiteral_21514/*"mainMsgFontSize"*/, v26);
    sub_1BD3458(&StringLiteral_18817/*"detailMsgOffset"*/, v27);
    sub_1BD3458(&StringLiteral_18816/*"detailMsgFontSize"*/, v28);
    sub_1BD3458(&StringLiteral_18818/*"detailMsgSpacingY"*/, v29);
    sub_1BD3458(&StringLiteral_18815/*"detailMsgAlignment"*/, v30);
    sub_1BD3458(&StringLiteral_21512/*"mainMsg"*/, v31);
    sub_1BD3458(&StringLiteral_1/*""*/, v32);
    sub_1BD3458(&StringLiteral_21516/*"mainMsgSpacingY"*/, v33);
    byte_4B3A37D = 1;
  }
  result = 0;
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = this->fields.noTitleMainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    y = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleMainMessageBasePos.fields.y;
    gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                      gameObject,
                      script,
                      (System_String_o *)StringLiteral_21515/*"mainMsgOffset"*/,
                      v38);
    VecFromScript.fields.x = v14 + VecFromScript.fields.x;
    VecFromScript.fields.y = y + VecFromScript.fields.y;
    VecFromScript.fields.z = v13 + VecFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VecFromScript, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleMainMessageLabel = this->fields.mainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v40 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v75 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v40,
            script,
            (System_String_o *)StringLiteral_21515/*"mainMsgOffset"*/,
            v41);
    v75.fields.x = v14 + v75.fields.x;
    v75.fields.y = v39 + v75.fields.y;
    v75.fields.z = v13 + v75.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v40, v75, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_58:
      sub_1BD36B4(mainMessageLabel, isNoMainTitle);
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = this->fields.noTitleDetailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v43 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v44 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v76 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v44,
            script,
            (System_String_o *)StringLiteral_18817/*"detailMsgOffset"*/,
            v45);
    v76.fields.x = x + v76.fields.x;
    v76.fields.y = v43 + v76.fields.y;
    v76.fields.z = z + v76.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v44, v76, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleDetailMessageLabel = this->fields.detailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v46 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v47 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v77 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v47,
            script,
            (System_String_o *)StringLiteral_18817/*"detailMsgOffset"*/,
            v48);
    v77.fields.x = x + v77.fields.x;
    v77.fields.y = v46 + v77.fields.y;
    v77.fields.z = z + v77.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v47, v77, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleDetailMessageLabel )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)noTitleDetailMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBaseHeight,
    0LL);
  result = 2;
  StringFromScript = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                       v49,
                       script,
                       (System_String_o *)StringLiteral_21513/*"mainMsgAlignment"*/,
                       v50);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  mainMessageLabel = (UnityEngine_Component_o *)System_Enum__TryParse_Int32Enum_(
                                                  StringFromScript,
                                                  &result,
                                                  (const MethodInfo_2F388DC *)Method_System_Enum_TryParse_NGUIText_Alignment___);
  if ( ((unsigned __int8)mainMessageLabel & 1) != 0 )
  {
    if ( !noTitleMainMessageLabel )
      goto LABEL_58;
    UILabel__set_alignment(noTitleMainMessageLabel, result, 0LL);
  }
  v53 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
          (MessageAndScrollDetailConfirmDialog_o *)mainMessageLabel,
          script,
          (System_String_o *)StringLiteral_18815/*"detailMsgAlignment"*/,
          v52);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__TryParse_Int32Enum_(
         v53,
         &result,
         (const MethodInfo_2F388DC *)Method_System_Enum_TryParse_NGUIText_Alignment___) )
  {
    UILabel__set_alignment(noTitleDetailMessageLabel, result, 0LL);
  }
  v54 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v54 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v54,
                    script,
                    (System_String_o *)StringLiteral_21512/*"mainMsg"*/,
                    v55);
  if ( mainMessage )
  {
    Empty = System_String__Trim_62554608(mainMessage, 0xAu, 0LL);
    if ( detailMessage )
    {
LABEL_41:
      v57 = System_String__Trim_62554608(detailMessage, 0xAu, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_41;
  }
  v57 = string_TypeInfo->static_fields->Empty;
LABEL_44:
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleMainMessageLabel )
    goto LABEL_58;
  UILabel__set_fontSize(
    noTitleMainMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
    0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                    v58,
                    script,
                    (System_String_o *)StringLiteral_21516/*"mainMsgSpacingY"*/,
                    v59);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0LL);
  v61 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   Empty,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0LL);
  MainMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                          v61,
                          script,
                          (System_String_o *)StringLiteral_21514/*"mainMsgFontSize"*/,
                          v62);
  if ( MainMessageFontSize <= 0 )
  {
    v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    MainMessageFontSize = v64->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, MainMessageFontSize, 0LL);
  v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v65->static_fields->DetailMessageFontSize, 0LL);
  v68 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v66, script, (System_String_o *)StringLiteral_18818/*"detailMsgSpacingY"*/, v67);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v68, 0LL);
  v69 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v57,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0LL);
  DetailMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                            v69,
                            script,
                            (System_String_o *)StringLiteral_18816/*"detailMsgFontSize"*/,
                            v70);
  if ( DetailMessageFontSize <= 0 )
  {
    v72 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v72 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    DetailMessageFontSize = v72->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, DetailMessageFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Awake(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(
        MessageAndScrollDetailConfirmDialog_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t klass; // w19
  TerminalPramsManager_c *v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3A381 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_GachaMaster___, *(_QWORD *)&gachaId);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v7);
    byte_4B3A381 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33926 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
    byte_4B33926 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SummonType_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_31D1F44 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B33926 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
      byte_4B33926 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_1BD36B4(Master_object, v10);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 20, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_array *linkInfo,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t v4; // w1
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !linkInfo )
    goto LABEL_10;
  if ( (int)linkInfo->max_length < 2 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)linkInfo->m_Items[1];
  if ( !this
    || (this = (MessageAndScrollDetailConfirmDialog_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1BD36B4(this, linkInfo);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1BD36BC(this, linkInfo);
  this = (MessageAndScrollDetailConfirmDialog_o *)System_Int32__TryParse(
                                                    (System_String_o *)this->fields.basePanel,
                                                    &result,
                                                    0LL);
  v4 = result;
LABEL_9:
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(this, v4, method);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MessageAndScrollDetailConfirmDialog__Close_45013384(this, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__CloseFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  System_Action_o *closeNotificationCallback; // x20
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PartyOrganizationUtility_c *v18; // x21
  TerminalPramsManager_c *v19; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v21; // x2

  if ( (byte_4B3A37B & 1) == 0 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, result);
    sub_1BD3458(&StringLiteral_1/*""*/, v9);
    byte_4B3A37B = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0LL;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v18 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B31F0B )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v11);
    byte_4B31F0B = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v19->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v18;
  sub_1BD33FC(p_TransitionScrollTabName_k__BackingField, (int64_t)v18, v12, v13, v14, v15, v16, v17);
  MessageAndScrollDetailConfirmDialog__Close_45013384(this, closeNotificationCallback, v21);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close_45013384(
        MessageAndScrollDetailConfirmDialog_o *this,
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

  if ( (byte_4B3A386 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, callback);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_EndClose__, v10);
    byte_4B3A386 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__DeicedFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_decideNotificationCallback; // x0
  System_Action_o *decideNotificationCallback; // t1
  const MethodInfo *v11; // x2

  decideNotificationCallback = this->fields.decideNotificationCallback;
  p_decideNotificationCallback = (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback;
  p_decideNotificationCallback->klass = 0LL;
  sub_1BD33FC(p_decideNotificationCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  MessageAndScrollDetailConfirmDialog__Close_45013384(this, decideNotificationCallback, v11);
}


void __fastcall MessageAndScrollDetailConfirmDialog__EndClose(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
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

  MessageAndScrollDetailConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BD33FC(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__EndOpen(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t __fastcall MessageAndScrollDetailConfirmDialog__GetIntFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3A385 & 1) == 0 )
  {
    sub_1BD3458(&System_Convert_TypeInfo, script);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BD3458(
                                                      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                                      v6);
    byte_4B3A385 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BD36B4(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL);
}


System_String_o *__fastcall MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3A384 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1BD3458(&string_TypeInfo, v6);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BD3458(&StringLiteral_1/*""*/, v7);
    byte_4B3A384 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BD36B4(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


System_String_array *__fastcall MessageAndScrollDetailConfirmDialog__GetTransitionParam(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *StringValue; // x0
  __int64 v6; // x1

  if ( (byte_4B3A382 & 1) == 0 )
  {
    sub_1BD3458(&string_TypeInfo, script);
    sub_1BD3458(&StringLiteral_24334/*"transitionParam"*/, v4);
    byte_4B3A382 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_24334/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1BD36B4(0LL, v6);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
}


UnityEngine_Vector3_o __fastcall MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
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

  if ( (byte_4B3A383 & 1) == 0 )
  {
    sub_1BD3458(&System_Convert_TypeInfo, script);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BD3458(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_4B3A383 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BD36B4(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3285BA0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_4B31941 )
    {
      sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4B31941 = 1;
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


void __fastcall MessageAndScrollDetailConfirmDialog__Init(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *mainTitleLabel; // x0

  if ( (byte_4B3A376 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B3A376 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    mainTitleLabel = this->fields.mainTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.mainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.noTitleMainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.detailTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.detailMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.noTitleDetailMessageLabel;
    if ( !mainTitleLabel
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = this->fields.okBtnLabel) == 0LL)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = this->fields.decideBtnLabel) == 0LL)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
LABEL_14:
      sub_1BD36B4(mainTitleLabel, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__OnClickDecide(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickDecideBtnFunc; // x8

  if ( (byte_4B3A388 & 1) == 0 )
  {
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__, method);
    byte_4B3A388 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0LL);
    clickDecideBtnFunc = this->fields.clickDecideBtnFunc;
    if ( clickDecideBtnFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickDecideBtnFunc->fields.m_target)(
        clickDecideBtnFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickDecideBtnFunc->fields.extra_arg);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__OnClickOk(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickOkBtnFunc; // x8

  if ( (byte_4B3A387 & 1) == 0 )
  {
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__, method);
    byte_4B3A387 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0LL);
    clickOkBtnFunc = this->fields.clickOkBtnFunc;
    if ( clickOkBtnFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickOkBtnFunc->fields.m_target)(
        clickOkBtnFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickOkBtnFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__Open(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        System_Action_o *func,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleSize,
        int32_t detailTitleSize,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        const MethodInfo *method)
{
  __int64 v20; // x1
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v21; // x26
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // [xsp+30h] [xbp-80h]

  if ( (byte_4B3A377 & 1) == 0 )
  {
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v20);
    byte_4B3A377 = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)func,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)func,
    (FollowerInfo_o *)script,
    *(PartyListViewItem_o **)&panelDepth);
  v21 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BD36A4(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v22);
  MessageAndScrollDetailConfirmDialog__OpenDialog_44999328(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v21,
    script,
    panelDepth,
    maxLine,
    mainTitleSize,
    detailTitleSize,
    canMaskTouchClose,
    this->fields.onClickOkSeKind,
    8,
    v23);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *okFunc,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        int32_t mainMsgFontSize,
        int32_t detailMsgFontSize,
        System_Nullable_float__o mainTitlePosY,
        System_Nullable_float__o detailTitlePosY,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        bool canMaskTouchClose,
        System_String_o *cancelBtnLabelName,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  int32_t v24; // w25
  int32_t v25; // w26
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
  UIPanel_o *TargetPanel; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v50; // x23
  UILabel_o *mainTitleLabel; // x0
  __int64 keepPanelDepth; // x1
  MessageAndScrollDetailConfirmDialog_c *v53; // x0
  MessageAndScrollDetailConfirmDialog_c *v54; // x0
  System_String_o *v55; // x21
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v61; // x0
  MessageAndScrollDetailConfirmDialog_c *v62; // x0
  System_String_o *v63; // x25
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v64; // x8
  float v65; // s9
  float v66; // s8
  float y; // s0
  UnityEngine_GameObject_o *v68; // x0
  bool IsNullOrEmpty; // w20
  bool v70; // w0
  UnityEngine_Object_o *okBtnLabel; // x20
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v72; // x20
  const MethodInfo *v73; // x3
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  UILabel_o *v80; // x20
  UnityEngine_GameObject_o *v81; // x0
  MessageAndScrollDetailConfirmDialog_c *v82; // x8
  UnityEngine_GameObject_o *v83; // x20
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v84; // x10
  System_Nullable_int__o v85; // x21
  System_Nullable_int__o v86; // x24
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v90; // x20
  UnityEngine_GameObject_o *v91; // x0
  MessageAndScrollDetailConfirmDialog_c *v92; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v93; // x10
  const MethodInfo *v94; // x3
  UnityEngine_Object_o *v95; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v97; // x20
  struct UnityEngine_GameObject_o *v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v106; // x0
  System_Action_o *v107; // x20
  const MethodInfo *v108; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+7Ch] [xbp-74h]
  float va; // [xsp+7Ch] [xbp-74h]
  System_Nullable_int__o v115; // 0:x1.8
  System_Nullable_int__o v116; // 0:x2.8
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s3.4,4:s4.4,8:s5.4

  v24 = detailTitleFontSize;
  v25 = mainTitleFontSize;
  if ( (byte_4B3A379 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, mainTitle);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v30);
    sub_1BD3458(&LocalizationManager_TypeInfo, v31);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v32);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v33);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v34);
    sub_1BD3458(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_1BD3458(&Method_System_Nullable_float__get_HasValue__, v36);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v37);
    sub_1BD3458(&StringLiteral_3793/*"COMMON_CONFIRM_CANCEL"*/, v38);
    sub_1BD3458(&StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1BD3458(&StringLiteral_1/*""*/, v40);
    sub_1BD3458(&StringLiteral_15838/*"Window/OkBtn"*/, v41);
    byte_4B3A379 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v50 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v50 )
        goto LABEL_92;
      this->fields.keepPanelDepth = v50->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v43, v44, v45, v46, v47, v48);
  if ( mainTitleFontSize <= 0 )
  {
    v53 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v53 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v25 = v53->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v25, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, mainTitle, 0LL);
  v54 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v55 = detailTitle;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v54 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v54->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  v = value;
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v117.fields.y = v;
  v117.fields.x = x;
  v117.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v117, 0LL);
  if ( detailTitleFontSize <= 0 )
  {
    v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v24 = v61->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v24, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, detailTitle, 0LL);
  v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v63 = cancelBtnLabelName;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v64 = v62->static_fields;
  v65 = v64->DetailTitleBasePos.fields.x;
  v66 = v64->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v64 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v64->DetailTitleBasePos.fields.y;
  }
  va = y;
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
LABEL_92:
    sub_1BD36B4(mainTitleLabel, keepPanelDepth);
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v118.fields.y = va;
  v118.fields.x = v65;
  v118.fields.z = v66;
  GameObjectExtensions__SetLocalPosition(v68, v118, 0LL);
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0LL);
  v70 = System_String__IsNullOrEmpty(v55, 0LL);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v70,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v119,
    v121,
    mainMsgAlignment,
    detailMsgAlignment,
    v108);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    if ( System_String__op_Inequality(decideBtnLabelName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UILabel__set_text(mainTitleLabel, decideBtnLabelName, 0LL);
      v72 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BD36A4(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v72,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v73);
      this->fields.clickDecideBtnFunc = v72;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v72,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      v80 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v63 = (System_String_o *)mainTitleLabel;
      }
      if ( !v80 )
        goto LABEL_92;
      UILabel__set_text(v80, v63, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v82 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v83 = v81;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v82 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v84 = v82->static_fields;
      v86 = inputCancelBtnWidth;
      v85 = inputDecideBtnWidth;
      p_x = &v84->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v84->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v84->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v90 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v63 = (System_String_o *)mainTitleLabel;
      }
      if ( !v90 )
        goto LABEL_92;
      UILabel__set_text(v90, v63, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v92 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v83 = v91;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v92 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v93 = v92->static_fields;
      v86 = inputCancelBtnWidth;
      v85 = inputDecideBtnWidth;
      p_x = &v93->OkButtonBasePos.fields.x;
      p_y = &v93->OkButtonBasePos.fields.y;
      p_z = &v93->OkButtonBasePos.fields.z;
    }
    v120.fields.y = *p_y;
    v120.fields.x = *p_x;
    v120.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v83, v120, 0LL);
    v115 = v86;
    v116 = v85;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v115, v116, v94);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v50 )
      goto LABEL_92;
    UIPanel__set_depth(v50, keepPanelDepth, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v95 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                  this,
                                  this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v95, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v97 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)mainTitleLabel,
                                      (System_String_o *)StringLiteral_15838/*"Window/OkBtn"*/,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v97, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v97 )
        {
          v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v97, 0LL);
          this->fields.closeButton = v98;
          p_closeButton = &this->fields.closeButton;
LABEL_90:
          sub_1BD33FC((PartyOrganizationUtility_o *)p_closeButton, (int64_t)v98, v99, v100, v101, v102, v103, v104);
          goto LABEL_91;
        }
        goto LABEL_92;
      }
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
    {
      v106 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                           this,
                                           this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v106, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v98 = 0LL;
      goto LABEL_90;
    }
  }
LABEL_91:
  v107 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v107, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v107, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog_44999328(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *okFunc,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  System_String_o *v18; // x27
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
  UIPanel_o *TargetPanel; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v49; // x22
  UILabel_o *mainTitleLabel; // x0
  __int64 monitor_high; // x1
  MessageAndScrollDetailConfirmDialog_o *v52; // x0
  const MethodInfo *v53; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v55; // x0
  UILabel_o *v56; // x29
  const MethodInfo *v57; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  const MethodInfo *v59; // x3
  MessageAndScrollDetailConfirmDialog_c *v60; // x8
  UnityEngine_GameObject_o *v61; // x27
  float *p_x; // x8
  float v63; // s8
  float v64; // s9
  float v65; // s10
  MessageAndScrollDetailConfirmDialog_o *v66; // x0
  const MethodInfo *v67; // x3
  MessageAndScrollDetailConfirmDialog_c *v68; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v70; // x3
  MessageAndScrollDetailConfirmDialog_o *v71; // x0
  const MethodInfo *v72; // x3
  MessageAndScrollDetailConfirmDialog_c *v73; // x8
  UnityEngine_GameObject_o *v74; // x26
  float *v75; // x8
  float v76; // s8
  float v77; // s9
  float v78; // s10
  struct UILabel_o *v79; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v84; // s11
  float v85; // s12
  float v86; // s13
  struct UILabel_o *v87; // x8
  char v88; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v90; // x7
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v92; // x0
  const MethodInfo *v93; // x3
  MessageAndScrollDetailConfirmDialog_o *StringFromScript; // x24
  const MethodInfo *v95; // x3
  System_String_o *v96; // x23
  MessageAndScrollDetailConfirmDialog_o *v97; // x0
  const MethodInfo *v98; // x3
  UILabel_o *decideBtnLabel; // x24
  const MethodInfo *v100; // x2
  struct System_Action_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v108; // x24
  const MethodInfo *v109; // x3
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  UILabel_o *v116; // x24
  MessageAndScrollDetailConfirmDialog_o *v117; // x0
  const MethodInfo *v118; // x3
  MessageAndScrollDetailConfirmDialog_c *v119; // x8
  UnityEngine_GameObject_o *v120; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v121; // x10
  float *v122; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v125; // x24
  MessageAndScrollDetailConfirmDialog_c *v126; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v127; // x10
  float v128; // s9
  float v129; // s8
  float v130; // s10
  MessageAndScrollDetailConfirmDialog_o *v131; // x0
  const MethodInfo *v132; // x3
  UILabel_o *v133; // x23
  const MethodInfo *v134; // x2
  UnityEngine_Object_o *v135; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v137; // x20
  struct UnityEngine_GameObject_o *v138; // x1
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v146; // x0
  System_Action_o *v147; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s3.4,4:s4.4,8:s5.4

  v18 = mainTitle;
  if ( (byte_4B3A37A & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, mainTitle);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v20);
    sub_1BD3458(&LocalizationManager_TypeInfo, v21);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v22);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v23);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_TypeInfo, v24);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v25);
    sub_1BD3458(&StringLiteral_21521/*"mainTitleFontSize"*/, v26);
    sub_1BD3458(&StringLiteral_18730/*"decideBtnFontSize"*/, v27);
    sub_1BD3458(&StringLiteral_18820/*"detailTitleFontSize"*/, v28);
    sub_1BD3458(&StringLiteral_18819/*"detailTitle"*/, v29);
    sub_1BD3458(&StringLiteral_21520/*"mainTitle"*/, v30);
    sub_1BD3458(&StringLiteral_18821/*"detailTitleOffset"*/, v31);
    sub_1BD3458(&StringLiteral_17932/*"cancelBtnFontSize"*/, v32);
    sub_1BD3458(&StringLiteral_3793/*"COMMON_CONFIRM_CANCEL"*/, v33);
    sub_1BD3458(&StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, v34);
    sub_1BD3458(&StringLiteral_18731/*"decideBtnLabel"*/, v35);
    sub_1BD3458(&StringLiteral_17933/*"cancelBtnLabel"*/, v36);
    sub_1BD3458(&StringLiteral_17850/*"buttonOffset"*/, v37);
    sub_1BD3458(&StringLiteral_1/*""*/, v38);
    sub_1BD3458(&StringLiteral_15838/*"Window/OkBtn"*/, v39);
    sub_1BD3458(&StringLiteral_21522/*"mainTitleOffset"*/, v40);
    byte_4B3A37A = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v49 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v49->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v42, v43, v44, v45, v46, v47);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v52,
                      script,
                      (System_String_o *)StringLiteral_21521/*"mainTitleFontSize"*/,
                      v53);
    if ( IntFromScript <= 0 )
    {
      v55 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v55 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v55->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  v56 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_21520/*"mainTitle"*/,
                                    v57);
    v18 = (System_String_o *)mainTitleLabel;
  }
  if ( !v56 )
    goto LABEL_99;
  UILabel__set_text(v56, v18, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0LL);
  v60 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v61 = (UnityEngine_GameObject_o *)gameObject;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v60 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v60->static_fields->MainTitleBasePos.fields.x;
  v63 = *p_x;
  v64 = p_x[1];
  v65 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_21522/*"mainTitleOffset"*/,
                    v59);
  VecFromScript.fields.x = v63 + VecFromScript.fields.x;
  VecFromScript.fields.y = v64 + VecFromScript.fields.y;
  VecFromScript.fields.z = v65 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v61, VecFromScript, 0LL);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v66,
                      script,
                      (System_String_o *)StringLiteral_18820/*"detailTitleFontSize"*/,
                      v67);
    if ( IntFromScript <= 0 )
    {
      v68 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v68 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v68->static_fields->DetailTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(detailTitle, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_18819/*"detailTitle"*/,
                                    v70);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_99;
  UILabel__set_text(detailTitleLabel, detailTitle, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  v71 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0LL);
  v73 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v74 = (UnityEngine_GameObject_o *)v71;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v73 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v75 = &v73->static_fields->MainTitleBasePos.fields.x;
  v76 = v75[9];
  v77 = v75[10];
  v78 = v75[11];
  v152 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v71, script, (System_String_o *)StringLiteral_18821/*"detailTitleOffset"*/, v72);
  v152.fields.x = v76 + v152.fields.x;
  v152.fields.y = v77 + v152.fields.y;
  v152.fields.z = v78 + v152.fields.z;
  GameObjectExtensions__SetLocalPosition(v74, v152, 0LL);
  v79 = this->fields.mainTitleLabel;
  if ( !v79 )
    goto LABEL_99;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v84 = static_fields->DetailMessageBasePos.fields.x;
  v85 = static_fields->DetailMessageBasePos.fields.y;
  v86 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v79->fields.mText, 0LL);
  v87 = this->fields.detailTitleLabel;
  if ( !v87 )
LABEL_99:
    sub_1BD36B4(mainTitleLabel, monitor_high);
  v88 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v87->fields.mText, 0LL);
  v153.fields.x = x;
  v153.fields.y = y;
  v153.fields.z = z;
  v155.fields.x = v84;
  v155.fields.y = v85;
  v155.fields.z = v86;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_45006700(
    this,
    v88 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v153,
    v155,
    script,
    v90);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v92 = UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL);
  if ( v92 )
  {
    StringFromScript = (MessageAndScrollDetailConfirmDialog_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                                                  (MessageAndScrollDetailConfirmDialog_o *)v92,
                                                                  script,
                                                                  (System_String_o *)StringLiteral_18731/*"decideBtnLabel"*/,
                                                                  v93);
    v96 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
            StringFromScript,
            script,
            (System_String_o *)StringLiteral_17933/*"cancelBtnLabel"*/,
            v95);
    if ( System_String__op_Inequality((System_String_o *)StringFromScript, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UILabel__set_text(mainTitleLabel, (System_String_o *)StringFromScript, 0LL);
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                      v97,
                                      script,
                                      (System_String_o *)StringLiteral_18730/*"decideBtnFontSize"*/,
                                      v98);
      decideBtnLabel = this->fields.decideBtnLabel;
      monitor_high = (unsigned int)mainTitleLabel;
      if ( (int)mainTitleLabel <= 0 )
      {
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        monitor_high = HIDWORD(mainTitleLabel->fields.onChange[1].monitor);
      }
      if ( !decideBtnLabel )
        goto LABEL_99;
      UILabel__set_fontSize(decideBtnLabel, monitor_high, 0LL);
      v101 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v100);
      this->fields.decideNotificationCallback = v101;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
        (int64_t)v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
      v108 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BD36A4(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v108,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v109);
      this->fields.clickDecideBtnFunc = v108;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v108,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      v116 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v96, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3793/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v96 = (System_String_o *)mainTitleLabel;
      }
      if ( !v116 )
        goto LABEL_99;
      UILabel__set_text(v116, v96, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v117 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v119 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v120 = (UnityEngine_GameObject_o *)v117;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v119 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v121 = v119->static_fields;
      v122 = &v121->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v121->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v121->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v125 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v96, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3794/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v96 = (System_String_o *)mainTitleLabel;
      }
      if ( !v125 )
        goto LABEL_99;
      UILabel__set_text(v125, v96, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v117 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v126 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v120 = (UnityEngine_GameObject_o *)v117;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v126 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v127 = v126->static_fields;
      v122 = &v127->OkButtonBasePos.fields.x;
      p_y = &v127->OkButtonBasePos.fields.y;
      p_z = &v127->OkButtonBasePos.fields.z;
    }
    v128 = *v122;
    v129 = *p_y;
    v130 = *p_z;
    v154 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v117,
             script,
             (System_String_o *)StringLiteral_17850/*"buttonOffset"*/,
             v118);
    v154.fields.x = v128 + v154.fields.x;
    v154.fields.y = v129 + v154.fields.y;
    v154.fields.z = v130 + v154.fields.z;
    GameObjectExtensions__SetLocalPosition(v120, v154, 0LL);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v131,
                                    script,
                                    (System_String_o *)StringLiteral_17932/*"cancelBtnFontSize"*/,
                                    v132);
    v133 = this->fields.okBtnLabel;
    monitor_high = (unsigned int)mainTitleLabel;
    if ( (int)mainTitleLabel <= 0 )
    {
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      monitor_high = LODWORD(mainTitleLabel->fields.onChange[1].monitor);
    }
    if ( !v133 )
      goto LABEL_99;
    UILabel__set_fontSize(v133, monitor_high, 0LL);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_45012304(this, script, v134);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    monitor_high = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      monitor_high = (unsigned int)this->fields.keepPanelDepth;
    if ( !v49 )
      goto LABEL_99;
    UIPanel__set_depth(v49, monitor_high, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v135 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                   this,
                                   this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v135, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v137 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                       (UnityEngine_Transform_o *)mainTitleLabel,
                                       (System_String_o *)StringLiteral_15838/*"Window/OkBtn"*/,
                                       0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v137, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v137 )
        {
          v138 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v137, 0LL);
          this->fields.closeButton = v138;
          p_closeButton = &this->fields.closeButton;
LABEL_97:
          sub_1BD33FC((PartyOrganizationUtility_o *)p_closeButton, (int64_t)v138, v139, v140, v141, v142, v143, v144);
          goto LABEL_98;
        }
        goto LABEL_99;
      }
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v135, 0LL, 0LL) )
    {
      v146 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                           this,
                                           this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v146, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v138 = 0LL;
      goto LABEL_97;
    }
  }
LABEL_98:
  v147 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v147, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v147, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__Open_45001752(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        System_Action_o *closeFunc,
        System_Action_o *decideFunc,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        int32_t mainMsgFontSize,
        int32_t detailMsgFontSize,
        System_Nullable_float__o mainTitlePosY,
        System_Nullable_float__o detailTitlePosY,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        bool canMaskTouchClose,
        System_String_o *cancelBtnLabelName,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v35; // x26
  const MethodInfo *v36; // x3

  if ( (byte_4B3A378 & 1) == 0 )
  {
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v28);
    byte_4B3A378 = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)closeFunc,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)closeFunc,
    (FollowerInfo_o *)decideFunc,
    *(PartyListViewItem_o **)&panelDepth);
  this->fields.decideNotificationCallback = decideFunc;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
    (int64_t)decideFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BD36A4(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v35,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v36);
  MessageAndScrollDetailConfirmDialog__OpenDialog(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v35,
    panelDepth,
    maxLine,
    mainTitleFontSize,
    detailTitleFontSize,
    mainMsgFontSize,
    detailMsgFontSize,
    mainTitlePosY,
    detailTitlePosY,
    mainMsgAlignment,
    detailMsgAlignment,
    canMaskTouchClose,
    cancelBtnLabelName,
    decideBtnLabelName,
    inputCancelBtnWidth,
    inputDecideBtnWidth,
    this->fields.onClickOkSeKind,
    onClickDecideSe,
    *(const MethodInfo **)&onClickDecideSe);
}


System_Action_o *__fastcall MessageAndScrollDetailConfirmDialog__SetTransitionFunc(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  int64_t v50; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  MessageAndScrollDetailConfirmDialog_o *v59; // x0
  const MethodInfo *v60; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v62; // x19
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  System_Action_o *_9__51_4; // x20
  __int64 v71; // x8
  System_String_o *v72; // x19
  int32_t SceneType; // w23
  __int64 v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 *v81; // x19
  __int64 v82; // x8
  __int64 v83; // x8
  System_String_o *v84; // x20
  System_Action_o *v85; // x0
  Il2CppObject *v86; // x1
  __int64 v87; // x2
  __int64 v88; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v89; // x0
  Il2CppObject *v90; // x19
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v97; // x0
  PartyOrganizationUtility_o *p__9__51_4; // x0
  __int64 v99; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v100; // x0
  Il2CppObject *v101; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v102; // x0
  __int64 v103; // x8
  __int64 v104; // x21
  __int64 v105; // x8
  int32_t v106; // w22
  SceneJumpInfo_o *v107; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x8
  int32_t v115; // w19
  int32_t v116; // w20
  SceneJumpInfo_o *v117; // x23
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  __int64 *v124; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v125; // x0
  Il2CppObject *v126; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v128; // x0
  Il2CppObject *v129; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v130; // x0
  __int64 v131; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v132; // x0
  Il2CppObject *v133; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v134; // x0
  __int64 v135; // x8
  __int64 v136; // x8
  System_String_o *v137; // x20
  SceneJumpInfo_o *v138; // x19
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  __int64 v145; // x8
  System_String_o *v146; // x20
  SceneJumpInfo_o *v147; // x22
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  __int64 v154; // x20
  __int64 v155; // x8
  System_String_o *v156; // x19
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  __int64 v163; // x8
  __int64 v164; // x8
  System_String_o *v165; // x20
  SceneJumpInfo_o *v166; // x19
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  __int64 v173; // x20
  __int64 v174; // x8
  __int64 v175; // x8
  System_String_o *v176; // x21
  __int64 v177; // x1
  TerminalPramsManager_c *v178; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v179; // x0
  Il2CppObject *v180; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v181; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Predicate_object__o *v183; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v185; // x20
  System_String_o *v186; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v187; // x8
  NotificationDialog_ClickDelegate_o *_9__51_12; // x22
  Il2CppObject *v189; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v190; // x0
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  int64_t v197; // x19
  TerminalPramsManager_c *v198; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v200; // x0
  Il2CppObject *v201; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v202; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4B3A37E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, script);
    sub_1BD3458(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v6);
    sub_1BD3458(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1BD3458(&DataManager_TypeInfo, v8);
    sub_1BD3458(&Method_System_Enum_TryParse_ServantOperationManager_Kind___, v9);
    sub_1BD3458(&Method_System_Enum_TryParse_MasterMissionComponent_Type___, v10);
    sub_1BD3458(&Method_System_Enum_TryParse_PayType_Type___, v11);
    sub_1BD3458(&System_Enum_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_GachaEntity__Find__, v13);
    sub_1BD3458(&LocalizationManager_TypeInfo, v14);
    sub_1BD3458(&System_Predicate_GachaEntity__TypeInfo, v15);
    sub_1BD3458(&SceneJumpInfo_TypeInfo, v16);
    sub_1BD3458(&SceneList_TypeInfo, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v19);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__, v20);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__, v21);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__, v22);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__, v23);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__, v24);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__, v25);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__, v26);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__, v27);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__, v28);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo, v29);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__, v30);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo, v31);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__, v32);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__, v33);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo, v34);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__, v35);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo, v36);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__, v37);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo, v38);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__, v39);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo, v40);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__, v41);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo, v42);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v43);
    sub_1BD3458(&StringLiteral_9674/*"NormalEventShop"*/, v44);
    sub_1BD3458(&StringLiteral_13458/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, v45);
    sub_1BD3458(&StringLiteral_12718/*"Scroll"*/, v46);
    sub_1BD3458(&StringLiteral_1/*""*/, v47);
    sub_1BD3458(&StringLiteral_13459/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, v48);
    sub_1BD3458(&StringLiteral_12686/*"Scene"*/, v49);
    byte_4B3A37E = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)eventType = 0LL;
  v50 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_169;
  *(_QWORD *)(v50 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v50 + 16), (int64_t)this, v53, v54, v55, v56, v57, v58);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v59, script, v60);
  *(_QWORD *)(v50 + 24) = TransitionParam;
  v62 = (__int64 *)(v50 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v50 + 24), (int64_t)TransitionParam, v63, v64, v65, v66, v67, v68);
  v69 = *(_QWORD *)(v50 + 24);
  if ( !v69 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v69 + 24) )
    goto LABEL_170;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v69 + 32), 0LL);
  _9__51_4 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__51_4;
  v71 = *v62;
  if ( !*v62 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v71 + 24) )
    goto LABEL_170;
  v72 = System_String__Concat_62525248(*(System_String_o **)(v71 + 32), (System_String_o *)StringLiteral_12686/*"Scene"*/, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v72, 0LL);
  v74 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v74, 0LL);
  if ( !v74 )
    goto LABEL_169;
  *(_QWORD *)(v74 + 24) = v50;
  v81 = (__int64 *)(v74 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v74 + 24), v50, v75, v76, v77, v78, v79, v80);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v74 + 16) = -1;
          v82 = *(_QWORD *)(v74 + 24);
          if ( v82 )
          {
            v83 = *(_QWORD *)(v82 + 24);
            if ( v83 )
            {
              if ( *(int *)(v83 + 24) >= 2 )
              {
                v84 = *(System_String_o **)(v83 + 40);
                if ( !System_Enum_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
                System_Enum__TryParse_Int32Enum_(
                  v84,
                  (int32_t *)(v74 + 16),
                  (const MethodInfo_2F388DC *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
              _9__51_4 = v85;
              v86 = (Il2CppObject *)v74;
              LODWORD(v87) = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__;
              goto LABEL_115;
            }
          }
LABEL_169:
          sub_1BD36B4(IsNullOrEmpty, v52);
        }
        return 0LL;
      }
      v125 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v125 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v125->static_fields->__9__51_4;
      if ( !_9__51_4 )
      {
        if ( !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v125 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v126 = (Il2CppObject *)v125->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v126,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__,
          0LL);
        static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        static_fields->__9__51_4 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&static_fields->__9__51_4;
LABEL_166:
        sub_1BD33FC(p__9__51_4, (int64_t)_9__51_4, v91, v92, v93, v94, v95, v96);
        return _9__51_4;
      }
      return _9__51_4;
    }
    if ( !*v81 )
      goto LABEL_169;
    v103 = *(_QWORD *)(*v81 + 24);
    if ( !v103 )
      goto LABEL_169;
    if ( *(int *)(v103 + 24) < 2 )
      return 0LL;
    v104 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( !*v81 )
      goto LABEL_169;
    v105 = *(_QWORD *)(*v81 + 24);
    if ( !v105 )
      goto LABEL_169;
    if ( *(_DWORD *)(v105 + 24) > 1u )
    {
      System_Int32__TryParse(*(System_String_o **)(v105 + 40), result, 0LL);
      v106 = result[0];
      v107 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39452460(v107, (System_String_o *)StringLiteral_9674/*"NormalEventShop"*/, v106, 0LL);
      if ( !v104 )
        goto LABEL_169;
      *(_QWORD *)(v104 + 16) = v107;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v107, v108, v109, v110, v111, v112, v113);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v104 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0LL);
      _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        (Il2CppObject *)v104,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__,
        0LL);
      if ( !*v81 )
        goto LABEL_169;
      v114 = *(_QWORD *)(*v81 + 24);
      if ( !v114 )
        goto LABEL_169;
      if ( *(int *)(v114 + 24) < 3 )
        return _9__51_4;
      System_Int32__TryParse(*(System_String_o **)(v114 + 48), &eventType[1], 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0LL) )
        return _9__51_4;
      v115 = result[0];
      v116 = eventType[1];
      v117 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39452520(v117, (System_String_o *)StringLiteral_1/*""*/, v115, v116, 0LL);
      *(_QWORD *)(v104 + 16) = v117;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v117, v118, v119, v120, v121, v122, v123);
      v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      v124 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__;
LABEL_114:
      v87 = *v124;
      _9__51_4 = v85;
      v86 = (Il2CppObject *)v104;
LABEL_115:
      System_Action___ctor(v85, v86, v87, 0LL);
      return _9__51_4;
    }
    goto LABEL_170;
  }
  _9__51_4 = 0LL;
  if ( SceneType <= 22 )
  {
    if ( SceneType == 20 )
    {
      result[1] = 1;
      v104 = *v81;
      if ( !*v81 )
        goto LABEL_169;
      v135 = *(_QWORD *)(v104 + 24);
      if ( !v135 )
        goto LABEL_169;
      if ( *(int *)(v135 + 24) >= 2 )
      {
        v173 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v173, 0LL);
        if ( !*v81 )
          goto LABEL_169;
        v174 = *(_QWORD *)(*v81 + 24);
        if ( !v174 )
          goto LABEL_169;
        if ( *(_DWORD *)(v174 + 24) <= 1u )
          goto LABEL_170;
        if ( !v173 )
          goto LABEL_169;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v174 + 40),
                                             (int32_t *)(v173 + 16),
                                             0LL);
        if ( !*v81 )
          goto LABEL_169;
        v175 = *(_QWORD *)(*v81 + 24);
        if ( !v175 )
          goto LABEL_169;
        if ( *(_DWORD *)(v175 + 24) <= 1u )
          goto LABEL_170;
        v176 = *(System_String_o **)(v175 + 40);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        System_Enum__TryParse_Int32Enum_(
          v176,
          &result[1],
          (const MethodInfo_2F388DC *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B33926 )
          {
            sub_1BD3458(&TerminalPramsManager_TypeInfo, v177);
            byte_4B33926 = 1;
          }
          v178 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v178 = TerminalPramsManager_TypeInfo;
          }
          v178->static_fields->_SummonType_k__BackingField = 3;
          v179 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v179 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_4 = v179->static_fields->__9__51_10;
          if ( !_9__51_4 )
          {
            if ( !v179->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v179);
              v179 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v180 = (Il2CppObject *)v179->static_fields->__9;
            _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_4,
              v180,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__,
              0LL);
            v181 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v181->__9__51_10 = _9__51_4;
            p__9__51_4 = (PartyOrganizationUtility_o *)&v181->__9__51_10;
            goto LABEL_166;
          }
          return _9__51_4;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_169;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0LL);
        v183 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_GachaEntity__TypeInfo);
        System_Predicate_object____ctor(
          v183,
          (Il2CppObject *)v173,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__,
          0LL);
        if ( !ValidGachaEntityList )
          goto LABEL_169;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v183,
               (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v185 = LocalizationManager__Get((System_String_o *)StringLiteral_13459/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0LL);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13458/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0LL);
          v186 = (System_String_o *)IsNullOrEmpty;
          v187 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v187 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_12 = v187->static_fields->__9__51_12;
          if ( !_9__51_12 )
          {
            if ( !v187->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v187);
              v187 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v189 = (Il2CppObject *)v187->static_fields->__9;
            _9__51_12 = (NotificationDialog_ClickDelegate_o *)sub_1BD36A4(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              _9__51_12,
              v189,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__,
              0LL);
            v190 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v190->__9__51_12 = _9__51_12;
            sub_1BD33FC(
              (PartyOrganizationUtility_o *)&v190->__9__51_12,
              (int64_t)_9__51_12,
              v191,
              v192,
              v193,
              v194,
              v195,
              v196);
          }
          if ( !Instance )
            goto LABEL_169;
          CommonUI__OpenNotificationDialog_30804932(
            (CommonUI_o *)Instance,
            v185,
            v186,
            _9__51_12,
            -1,
            0,
            0,
            0,
            0,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            1,
            0LL,
            0LL,
            0LL,
            0LL);
          return 0LL;
        }
        v104 = *v81;
      }
      v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      v124 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__;
      goto LABEL_114;
    }
    if ( SceneType != 22 )
      return _9__51_4;
    if ( !*v81 )
      goto LABEL_169;
    v99 = *(_QWORD *)(*v81 + 24);
    if ( !v99 )
      goto LABEL_169;
    if ( *(int *)(v99 + 24) < 2 )
    {
      v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v100->static_fields->__9__51_2;
      if ( !_9__51_4 )
      {
        if ( !v100->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v100);
          v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v101 = (Il2CppObject *)v100->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v101,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__,
          0LL);
        v102 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v102->__9__51_2 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&v102->__9__51_2;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    v104 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( !*v81 )
      goto LABEL_169;
    v145 = *(_QWORD *)(*v81 + 24);
    if ( !v145 )
      goto LABEL_169;
    if ( *(_DWORD *)(v145 + 24) > 1u )
    {
      v146 = *(System_String_o **)(v145 + 40);
      v147 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39452372(v147, v146, 0LL);
      if ( !v104 )
        goto LABEL_169;
      *(_QWORD *)(v104 + 16) = v147;
      v154 = v104 + 16;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v147, v148, v149, v150, v151, v152, v153);
      if ( !*v81 )
        goto LABEL_169;
      v155 = *(_QWORD *)(*v81 + 24);
      if ( !v155 )
        goto LABEL_169;
      if ( *(int *)(v155 + 24) >= 3 )
      {
        eventType[0] = 0;
        v156 = *(System_String_o **)(v155 + 48);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v156,
                                             eventType,
                                             (const MethodInfo_2F388DC *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v154 )
          goto LABEL_169;
        *(_DWORD *)(*(_QWORD *)v154 + 24LL) = eventType[0];
      }
      v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      v124 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__;
      goto LABEL_114;
    }
LABEL_170:
    sub_1BD36BC(IsNullOrEmpty, v52);
  }
  if ( SceneType == 23 )
  {
    v128 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
      v128 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    _9__51_4 = v128->static_fields->__9__51_5;
    if ( !_9__51_4 )
    {
      if ( !v128->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v128);
        v128 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v129 = (Il2CppObject *)v128->static_fields->__9;
      _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        v129,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__,
        0LL);
      v130 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v130->__9__51_5 = _9__51_4;
      p__9__51_4 = (PartyOrganizationUtility_o *)&v130->__9__51_5;
      goto LABEL_166;
    }
    return _9__51_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v81 )
      goto LABEL_169;
    v131 = *(_QWORD *)(*v81 + 24);
    if ( !v131 )
      goto LABEL_169;
    if ( *(int *)(v131 + 24) < 2 )
    {
      v132 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v132 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v132->static_fields->__9__51_7;
      if ( !_9__51_4 )
      {
        if ( !v132->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v132);
          v132 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v133 = (Il2CppObject *)v132->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v133,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__,
          0LL);
        v134 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v134->__9__51_7 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&v134->__9__51_7;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v131 + 40),
                                         (System_String_o *)StringLiteral_12718/*"Scroll"*/,
                                         0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v81 )
        goto LABEL_169;
      v163 = *(_QWORD *)(*v81 + 24);
      if ( !v163 )
        goto LABEL_169;
      if ( *(int *)(v163 + 24) >= 3 )
      {
        v197 = *(_QWORD *)(v163 + 48);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4B31F0B )
        {
          sub_1BD3458(&TerminalPramsManager_TypeInfo, v52);
          byte_4B31F0B = 1;
        }
        v198 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v198 = TerminalPramsManager_TypeInfo;
        }
        p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v198->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (PartyOrganizationUtility_c *)v197;
        sub_1BD33FC(p_TransitionScrollTabName_k__BackingField, v197, v157, v158, v159, v160, v161, v162);
        v200 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
          v200 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        _9__51_4 = v200->static_fields->__9__51_6;
        if ( !_9__51_4 )
        {
          if ( !v200->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v200);
            v200 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v201 = (Il2CppObject *)v200->static_fields->__9;
          _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__51_4,
            v201,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__,
            0LL);
          v202 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v202->__9__51_6 = _9__51_4;
          p__9__51_4 = (PartyOrganizationUtility_o *)&v202->__9__51_6;
          goto LABEL_166;
        }
        return _9__51_4;
      }
    }
    v104 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( !*v81 )
      goto LABEL_169;
    v164 = *(_QWORD *)(*v81 + 24);
    if ( !v164 )
      goto LABEL_169;
    if ( *(_DWORD *)(v164 + 24) > 1u )
    {
      v165 = *(System_String_o **)(v164 + 40);
      v166 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39452372(v166, v165, 0LL);
      if ( !v104 )
        goto LABEL_169;
      *(_QWORD *)(v104 + 16) = v166;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v166, v167, v168, v169, v170, v171, v172);
      v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      v124 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  if ( SceneType != 32 )
    return _9__51_4;
  if ( !*v81 )
    goto LABEL_169;
  v88 = *(_QWORD *)(*v81 + 24);
  if ( !v88 )
    goto LABEL_169;
  if ( *(int *)(v88 + 24) >= 2 )
  {
    v104 = sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v104, 0LL);
    if ( !*v81 )
      goto LABEL_169;
    v136 = *(_QWORD *)(*v81 + 24);
    if ( !v136 )
      goto LABEL_169;
    if ( *(_DWORD *)(v136 + 24) > 1u )
    {
      v137 = *(System_String_o **)(v136 + 40);
      v138 = (SceneJumpInfo_o *)sub_1BD36A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39452372(v138, v137, 0LL);
      if ( !v104 )
        goto LABEL_169;
      *(_QWORD *)(v104 + 16) = v138;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v104 + 16), (int64_t)v138, v139, v140, v141, v142, v143, v144);
      v85 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      v124 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  v89 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v89 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_4 = v89->static_fields->__9__51_3;
  if ( !_9__51_4 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v90 = (Il2CppObject *)v89->static_fields->__9;
    _9__51_4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_4,
      v90,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__,
      0LL);
    v97 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v97->__9__51_3 = _9__51_4;
    p__9__51_4 = (PartyOrganizationUtility_o *)&v97->__9__51_3;
    goto LABEL_166;
  }
  return _9__51_4;
}


UnityEngine_GameObject_o *__fastcall MessageAndScrollDetailConfirmDialog__get_closeBtnObject(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B3A375 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3A375 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
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
  sub_1BD33FC(
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
  if ( (sub_1BD3518(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A19338;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A192F0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__BeginInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_4B3A38B & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, isOk);
    byte_4B3A38B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BD340C(this, v9, callback, object);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__Invoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3A38C & 1) == 0 )
  {
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v1);
    byte_4B3A38C = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___ctor(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_10(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A38D & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A38D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__51_13; // x20
  Il2CppObject *v11; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B3A38E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isDecide);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BD3458(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__, v4);
    sub_1BD3458(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v5);
    byte_4B3A38E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_13 = v8->static_fields->__9__51_13;
  if ( !_9__51_13 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__51_13 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_13,
      v11,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__,
      0LL);
    static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__51_13 = _9__51_13;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_13,
      (int64_t)_9__51_13,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v9 )
    sub_1BD36B4(Instance, v7);
  CommonUI__CloseNotificationDialog_30805364(v9, _9__51_13, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A38F & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A38F = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A390 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A390 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A391 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A391 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A392 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A392 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A393 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A393 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A394 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A394 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B3A395 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A395 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___SetTransitionFunc_b__1(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BD36B4(this, method);
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(this->fields.__4__this, this->fields.linkInfo, v2);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___SetTransitionFunc_b__0(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *mPlayerStatus; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *CS___8__locals1; // x9
  struct MessageAndScrollDetailConfirmDialog_o *_4__this; // x9

  if ( (byte_4B3A396 & 1) == 0 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B3A396 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B31F06 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    byte_4B31F06 = 1;
  }
  mPlayerStatus = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mPlayerStatus = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mPlayerStatus->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0LL
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (mPlayerStatus = (TerminalSceneComponent_c *)mTerminalList->fields.mPlayerStatus) == 0LL )
  {
    sub_1BD36B4(mPlayerStatus, method);
  }
  ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
    (ScrPlayerStatus_o *)mPlayerStatus,
    this->fields.tabNo,
    _4__this->fields.closeNotificationCallback,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__8(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A397 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A397 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__9(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A398 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A398 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___SetTransitionFunc_b__11(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BD36B4(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___SetTransitionFunc_b__14(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A399 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A399 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___SetTransitionFunc_b__15(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A39A & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A39A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___SetTransitionFunc_b__16(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A39B & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3A39B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0LL);
}