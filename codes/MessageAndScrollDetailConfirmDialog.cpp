void __fastcall MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v2; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v3; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v4; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x8

  if ( (byte_4BDF80C & 1) == 0 )
  {
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    byte_4BDF80C = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v2 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v3 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&v3->MainMessageBasePos.fields.x = 0x42BE000000000000LL;
  v3->MainMessageBasePos.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->NoTitleMainMessageBasePos.fields.x = 0x42F0000000000000LL;
  v4->NoTitleMainMessageBasePos.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->DetailTitleBasePos.fields.x = 0x4361000000000000LL;
  v5->DetailTitleBasePos.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->DetailMessageBasePos.fields.x = 0x4357000000000000LL;
  v6->DetailMessageBasePos.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->NoTitleDetailMessageBasePos.fields.x = 0x436B000000000000LL;
  v7->NoTitleDetailMessageBasePos.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->OkButtonBasePos.fields.x = 0xC340800000000000LL;
  v8->OkButtonBasePos.fields.z = 0.0;
  v9 = v2->static_fields;
  *(_QWORD *)&v9->OkButtonBasePosTypeTwoAlternative.fields.x = 0xC3408000C3200000LL;
  v9->OkButtonBasePosTypeTwoAlternative.fields.z = 0.0;
  v10 = v2->static_fields;
  v10->DetailMessageBaseHeight = 1000;
  *(_OWORD *)&v10->ButtonBaseSizeX = xmmword_BFF510;
  *(_OWORD *)&v10->MainTitleFontSize = xmmword_BFF2B0;
}


void __fastcall MessageAndScrollDetailConfirmDialog___ctor(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDF80B & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDF80B = 1;
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
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v8; // x22
  UIWidget_o *Component_object; // x23
  Il2CppObject *v10; // x22
  MessageAndScrollDetailConfirmDialog_c *v11; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v15; // x20
  Il2CppObject *v16; // x21
  MessageAndScrollDetailConfirmDialog_c *v17; // x0
  int v18; // s8
  int32_t v19; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v5 = inputCancelBtnWidth;
  if ( (byte_4BDF801 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF801 = 1;
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
  v8 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          v8,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
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
      v11 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v11 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v11->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v10 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v10, 0LL);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v10, size, 0LL);
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
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v15 = (UIWidget_o *)okBtnLabel;
    v16 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v15 )
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
          if ( !v15 )
            goto LABEL_45;
        }
        UIWidget__set_width(v15, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
        v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v15, v17->static_fields->ButtonBaseSizeY, 0LL);
        if ( v16 )
        {
          v18 = v15->fields.mWidth;
          v19 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v21 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v16, 0LL);
          v21.fields.x = (float)v18;
          v21.fields.y = (float)v19;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v16, v21, 0LL);
          return;
        }
LABEL_45:
        ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C22094)(okBtnLabel, inputCancelBtnWidth);
      }
    }
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize_45513556(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v8; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w23
  MessageAndScrollDetailConfirmDialog_c *v12; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v14; // x21
  Il2CppObject *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w19
  MessageAndScrollDetailConfirmDialog_c *v19; // x0
  int32_t v20; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF802 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_18027/*"cancelBtnWidth"*/);
    sub_1C21E38(&StringLiteral_18830/*"decideBtnWidth"*/);
    byte_4BDF802 = 1;
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
  v6 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         v6,
         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( v9 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v9,
                                                script,
                                                (System_String_o *)StringLiteral_18027/*"cancelBtnWidth"*/,
                                                v10);
      v11 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v11 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v11, 0LL);
      v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v12->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v8 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v8, 0LL);
      size.fields.x = (float)v11;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v8, size, 0LL);
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
                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v14 = (UIWidget_o *)okBtnLabel;
    v15 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
      if ( v16 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v16,
                                                  script,
                                                  (System_String_o *)StringLiteral_18830/*"decideBtnWidth"*/,
                                                  v17);
        v18 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v18 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
        }
        if ( v14 )
        {
          UIWidget__set_width(v14, v18, 0LL);
          v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v14, v19->static_fields->ButtonBaseSizeY, 0LL);
          if ( v15 )
          {
            v20 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v22 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0LL);
            v22.fields.x = (float)v18;
            v22.fields.y = (float)v20;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v15, v22, 0LL);
            return;
          }
        }
LABEL_43:
        sub_1C22094(okBtnLabel, script);
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
  UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x29
  UnityEngine_GameObject_o *v24; // x0
  MessageAndScrollDetailConfirmDialog_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x29
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v28; // x0
  MessageAndScrollDetailConfirmDialog_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x29
  UnityEngine_GameObject_o *v31; // x0
  MessageAndScrollDetailConfirmDialog_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x29
  MessageAndScrollDetailConfirmDialog_c *v34; // x0
  System_String_o *Empty; // x25
  System_String_o *v36; // x24
  MessageAndScrollDetailConfirmDialog_c *v37; // x0
  MessageAndScrollDetailConfirmDialog_c *v38; // x0
  MessageAndScrollDetailConfirmDialog_c *v39; // x0
  MessageAndScrollDetailConfirmDialog_c *v40; // x0

  v19 = this;
  if ( (byte_4BDF7FE & 1) == 0 )
  {
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C21E38(&string_TypeInfo);
    byte_4BDF7FE = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v19->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v19->fields.noTitleMainMessageLabel,
                   0LL);
    v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v23 = gameObject;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v23, v22->static_fields->NoTitleMainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleMainMessageLabel = v19->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.mainMessageLabel, 0LL);
    v25 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v26 = v24;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v25 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v26, v25->static_fields->MainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_46:
      sub_1C22094(this, isNoMainTitle);
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
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.noTitleDetailMessageLabel, 0LL);
    v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v30 = v28;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v30, v29->static_fields->NoTitleDetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleDetailMessageLabel = v19->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.detailMessageLabel, 0LL);
    v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v33 = v31;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v33, v32->static_fields->DetailMessageBasePos, 0LL);
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
  v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v34->static_fields->DetailMessageBaseHeight, 0LL);
  UILabel__set_alignment(noTitleMainMessageLabel, mainMsgAlignment, 0LL);
  UILabel__set_alignment(noTitleDetailMessageLabel, detailMsgAlignment, 0LL);
  if ( mainMessage )
    Empty = System_String__Trim_63144836(mainMessage, 0xAu, 0LL);
  else
    Empty = string_TypeInfo->static_fields->Empty;
  if ( detailMessage )
    v36 = System_String__Trim_63144836(detailMessage, 0xAu, 0LL);
  else
    v36 = string_TypeInfo->static_fields->Empty;
  v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v37->static_fields->MainMessageFontSize, 0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  WrapControlText__textAdjust(noTitleMainMessageLabel, Empty, noTitleMainMessageLabel->fields.mFontSize, 0, 0LL);
  if ( mainFontSize <= 0 )
  {
    v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v38->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0LL);
  v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v39->static_fields->DetailMessageFontSize, 0LL);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v36,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0LL);
  if ( detailFontSize <= 0 )
  {
    v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v40->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_45507952(
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
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *mainMessageLabel; // x0
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v25; // x3
  float v26; // s12
  MessageAndScrollDetailConfirmDialog_o *v27; // x26
  const MethodInfo *v28; // x3
  struct UILabel_o *noTitleDetailMessageLabel; // x24
  float v30; // s10
  MessageAndScrollDetailConfirmDialog_o *v31; // x26
  const MethodInfo *v32; // x3
  float v33; // s10
  MessageAndScrollDetailConfirmDialog_o *v34; // x26
  const MethodInfo *v35; // x3
  MessageAndScrollDetailConfirmDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *StringFromScript; // x25
  const MethodInfo *v39; // x3
  System_String_o *v40; // x25
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x3
  System_String_o *Empty; // x23
  System_String_o *v44; // x22
  MessageAndScrollDetailConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  int MainMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v51; // x0
  MessageAndScrollDetailConfirmDialog_c *v52; // x0
  MessageAndScrollDetailConfirmDialog_o *v53; // x0
  const MethodInfo *v54; // x3
  int32_t v55; // w0
  MessageAndScrollDetailConfirmDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  int DetailMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v59; // x0
  int32_t result; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v13 = mainMessagePos.fields.z;
  v14 = mainMessagePos.fields.x;
  if ( (byte_4BDF7FF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Enum_TryParse_NGUIText_Alignment___);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_21634/*"mainMsgAlignment"*/);
    sub_1C21E38(&StringLiteral_21636/*"mainMsgOffset"*/);
    sub_1C21E38(&StringLiteral_21635/*"mainMsgFontSize"*/);
    sub_1C21E38(&StringLiteral_18915/*"detailMsgOffset"*/);
    sub_1C21E38(&StringLiteral_18914/*"detailMsgFontSize"*/);
    sub_1C21E38(&StringLiteral_18916/*"detailMsgSpacingY"*/);
    sub_1C21E38(&StringLiteral_18913/*"detailMsgAlignment"*/);
    sub_1C21E38(&StringLiteral_21633/*"mainMsg"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_21637/*"mainMsgSpacingY"*/);
    byte_4BDF7FF = 1;
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
                      (System_String_o *)StringLiteral_21636/*"mainMsgOffset"*/,
                      v25);
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
    v26 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v27 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v62 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v27,
            script,
            (System_String_o *)StringLiteral_21636/*"mainMsgOffset"*/,
            v28);
    v62.fields.x = v14 + v62.fields.x;
    v62.fields.y = v26 + v62.fields.y;
    v62.fields.z = v13 + v62.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v27, v62, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_58:
      sub_1C22094(mainMessageLabel, isNoMainTitle);
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
    v30 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v31 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v63 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v31,
            script,
            (System_String_o *)StringLiteral_18915/*"detailMsgOffset"*/,
            v32);
    v63.fields.x = x + v63.fields.x;
    v63.fields.y = v30 + v63.fields.y;
    v63.fields.z = z + v63.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, v63, 0LL);
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
    v33 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v34 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v64 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v34,
            script,
            (System_String_o *)StringLiteral_18915/*"detailMsgOffset"*/,
            v35);
    v64.fields.x = x + v64.fields.x;
    v64.fields.y = v33 + v64.fields.y;
    v64.fields.z = z + v64.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v34, v64, 0LL);
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
                       v36,
                       script,
                       (System_String_o *)StringLiteral_21634/*"mainMsgAlignment"*/,
                       v37);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  mainMessageLabel = (UnityEngine_Component_o *)System_Enum__TryParse_Int32Enum_(
                                                  StringFromScript,
                                                  &result,
                                                  (const MethodInfo_2FB6948 *)Method_System_Enum_TryParse_NGUIText_Alignment___);
  if ( ((unsigned __int8)mainMessageLabel & 1) != 0 )
  {
    if ( !noTitleMainMessageLabel )
      goto LABEL_58;
    UILabel__set_alignment(noTitleMainMessageLabel, result, 0LL);
  }
  v40 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
          (MessageAndScrollDetailConfirmDialog_o *)mainMessageLabel,
          script,
          (System_String_o *)StringLiteral_18913/*"detailMsgAlignment"*/,
          v39);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__TryParse_Int32Enum_(
         v40,
         &result,
         (const MethodInfo_2FB6948 *)Method_System_Enum_TryParse_NGUIText_Alignment___) )
  {
    UILabel__set_alignment(noTitleDetailMessageLabel, result, 0LL);
  }
  v41 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v41 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v41,
                    script,
                    (System_String_o *)StringLiteral_21633/*"mainMsg"*/,
                    v42);
  if ( mainMessage )
  {
    Empty = System_String__Trim_63144836(mainMessage, 0xAu, 0LL);
    if ( detailMessage )
    {
LABEL_41:
      v44 = System_String__Trim_63144836(detailMessage, 0xAu, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_41;
  }
  v44 = string_TypeInfo->static_fields->Empty;
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
                    v45,
                    script,
                    (System_String_o *)StringLiteral_21637/*"mainMsgSpacingY"*/,
                    v46);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0LL);
  v48 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   Empty,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0LL);
  MainMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                          v48,
                          script,
                          (System_String_o *)StringLiteral_21635/*"mainMsgFontSize"*/,
                          v49);
  if ( MainMessageFontSize <= 0 )
  {
    v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    MainMessageFontSize = v51->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, MainMessageFontSize, 0LL);
  v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v52->static_fields->DetailMessageFontSize, 0LL);
  v55 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v53, script, (System_String_o *)StringLiteral_18916/*"detailMsgSpacingY"*/, v54);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v55, 0LL);
  v56 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v44,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0LL);
  DetailMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                            v56,
                            script,
                            (System_String_o *)StringLiteral_18914/*"detailMsgFontSize"*/,
                            v57);
  if ( DetailMessageFontSize <= 0 )
  {
    v59 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v59 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    DetailMessageFontSize = v59->static_fields->DetailMessageFontSize;
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


void __fastcall MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(
        MessageAndScrollDetailConfirmDialog_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t klass; // w19
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF803 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF803 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD8C41 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD8C41 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonType_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_325BE14 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD8C41 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD8C41 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_1C22094(Master_object, v6);
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
    sub_1C22094(this, linkInfo);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1C2209C(this, linkInfo);
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

  MessageAndScrollDetailConfirmDialog__Close_45514636(this, 0LL, v2);
}


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
  System_Action_o *closeNotificationCallback; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PartyOrganizationUtility_c *v16; // x21
  TerminalPramsManager_c *v17; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4BDF7FD & 1) == 0 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF7FD = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0LL;
  sub_1C21DDC(
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
  v16 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4BD7186 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7186 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v17->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v16;
  sub_1C21DDC(p_TransitionScrollTabName_k__BackingField, (int64_t)v16, v10, v11, v12, v13, v14, v15);
  MessageAndScrollDetailConfirmDialog__Close_45514636(this, closeNotificationCallback, v19);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close_45514636(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BDF808 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_EndClose__);
    byte_4BDF808 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  sub_1C21DDC(p_decideNotificationCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  MessageAndScrollDetailConfirmDialog__Close_45514636(this, decideNotificationCallback, v11);
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
    sub_1C21DDC(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF807 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4BDF807 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0LL);
}


System_String_o *__fastcall MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF806 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&string_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF806 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_o *StringValue; // x0
  __int64 v5; // x1

  if ( (byte_4BDF804 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_24481/*"transitionParam"*/);
    byte_4BDF804 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_24481/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1C22094(0LL, v5);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
}


UnityEngine_Vector3_o __fastcall MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  __int64 methodPtr_low; // x10
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

  if ( (byte_4BDF805 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    byte_4BDF805 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0LL);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0LL);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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

  if ( (byte_4BDF7F8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF7F8 = 1;
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
      sub_1C22094(mainTitleLabel, method);
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

  if ( (byte_4BDF80A & 1) == 0 )
  {
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    byte_4BDF80A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0LL);
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

  if ( (byte_4BDF809 & 1) == 0 )
  {
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    byte_4BDF809 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0LL);
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
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v20; // x26
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // [xsp+30h] [xbp-80h]

  if ( (byte_4BDF7F9 & 1) == 0 )
  {
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_4BDF7F9 = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)func,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)func,
    (FollowerInfo_o *)script,
    *(PartyListViewItem_o **)&panelDepth);
  v20 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C22084(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v21);
  MessageAndScrollDetailConfirmDialog__OpenDialog_45500580(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v20,
    script,
    panelDepth,
    maxLine,
    mainTitleSize,
    detailTitleSize,
    canMaskTouchClose,
    this->fields.onClickOkSeKind,
    8,
    v22);
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
  UIPanel_o *TargetPanel; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v38; // x23
  UILabel_o *mainTitleLabel; // x0
  __int64 keepPanelDepth; // x1
  MessageAndScrollDetailConfirmDialog_c *v41; // x0
  MessageAndScrollDetailConfirmDialog_c *v42; // x0
  System_String_o *v43; // x21
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v49; // x0
  MessageAndScrollDetailConfirmDialog_c *v50; // x0
  System_String_o *v51; // x25
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v52; // x8
  float v53; // s9
  float v54; // s8
  float y; // s0
  UnityEngine_GameObject_o *v56; // x0
  bool IsNullOrEmpty; // w20
  bool v58; // w0
  UnityEngine_Object_o *okBtnLabel; // x20
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v60; // x20
  const MethodInfo *v61; // x3
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  UILabel_o *v68; // x20
  UnityEngine_GameObject_o *v69; // x0
  MessageAndScrollDetailConfirmDialog_c *v70; // x8
  UnityEngine_GameObject_o *v71; // x20
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v72; // x10
  System_Nullable_int__o v73; // x21
  System_Nullable_int__o v74; // x24
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v78; // x20
  UnityEngine_GameObject_o *v79; // x0
  MessageAndScrollDetailConfirmDialog_c *v80; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v81; // x10
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *v83; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v85; // x20
  struct UnityEngine_GameObject_o *v86; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v94; // x0
  System_Action_o *v95; // x20
  const MethodInfo *v96; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+7Ch] [xbp-74h]
  float va; // [xsp+7Ch] [xbp-74h]
  System_Nullable_int__o v103; // 0:x1.8
  System_Nullable_int__o v104; // 0:x2.8
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s3.4,4:s4.4,8:s5.4

  v24 = detailTitleFontSize;
  v25 = mainTitleFontSize;
  if ( (byte_4BDF7FB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_15920/*"Window/OkBtn"*/);
    byte_4BDF7FB = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v38 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v38 )
        goto LABEL_92;
      this->fields.keepPanelDepth = v38->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v31, v32, v33, v34, v35, v36);
  if ( mainTitleFontSize <= 0 )
  {
    v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v25 = v41->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v25, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, mainTitle, 0LL);
  v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v43 = detailTitle;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v42->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  v = value;
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v105.fields.y = v;
  v105.fields.x = x;
  v105.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v105, 0LL);
  if ( detailTitleFontSize <= 0 )
  {
    v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v24 = v49->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v24, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, detailTitle, 0LL);
  v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v51 = cancelBtnLabelName;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v52 = v50->static_fields;
  v53 = v52->DetailTitleBasePos.fields.x;
  v54 = v52->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v52 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v52->DetailTitleBasePos.fields.y;
  }
  va = y;
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
LABEL_92:
    sub_1C22094(mainTitleLabel, keepPanelDepth);
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v106.fields.y = va;
  v106.fields.x = v53;
  v106.fields.z = v54;
  GameObjectExtensions__SetLocalPosition(v56, v106, 0LL);
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0LL);
  v58 = System_String__IsNullOrEmpty(v43, 0LL);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v58,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v107,
    v109,
    mainMsgAlignment,
    detailMsgAlignment,
    v96);
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
      v60 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C22084(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v60,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v61);
      this->fields.clickDecideBtnFunc = v60;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v60,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      v68 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v51 = (System_String_o *)mainTitleLabel;
      }
      if ( !v68 )
        goto LABEL_92;
      UILabel__set_text(v68, v51, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v70 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v71 = v69;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v70 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v72 = v70->static_fields;
      v74 = inputCancelBtnWidth;
      v73 = inputDecideBtnWidth;
      p_x = &v72->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v72->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v72->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v78 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v51 = (System_String_o *)mainTitleLabel;
      }
      if ( !v78 )
        goto LABEL_92;
      UILabel__set_text(v78, v51, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v80 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v71 = v79;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v80 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v81 = v80->static_fields;
      v74 = inputCancelBtnWidth;
      v73 = inputDecideBtnWidth;
      p_x = &v81->OkButtonBasePos.fields.x;
      p_y = &v81->OkButtonBasePos.fields.y;
      p_z = &v81->OkButtonBasePos.fields.z;
    }
    v108.fields.y = *p_y;
    v108.fields.x = *p_x;
    v108.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v71, v108, 0LL);
    v103 = v74;
    v104 = v73;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v103, v104, v82);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v38 )
      goto LABEL_92;
    UIPanel__set_depth(v38, keepPanelDepth, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v83 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                  this,
                                  this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v83, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v85 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)mainTitleLabel,
                                      (System_String_o *)StringLiteral_15920/*"Window/OkBtn"*/,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v85 )
        {
          v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v85, 0LL);
          this->fields.closeButton = v86;
          p_closeButton = &this->fields.closeButton;
LABEL_90:
          sub_1C21DDC((PartyOrganizationUtility_o *)p_closeButton, (int64_t)v86, v87, v88, v89, v90, v91, v92);
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
    if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
    {
      v94 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v94, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v86 = 0LL;
      goto LABEL_90;
    }
  }
LABEL_91:
  v95 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog_45500580(
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
  UIPanel_o *TargetPanel; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v28; // x22
  UILabel_o *mainTitleLabel; // x0
  __int64 monitor_high; // x1
  MessageAndScrollDetailConfirmDialog_o *v31; // x0
  const MethodInfo *v32; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v34; // x0
  UILabel_o *v35; // x29
  const MethodInfo *v36; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  const MethodInfo *v38; // x3
  MessageAndScrollDetailConfirmDialog_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x27
  float *p_x; // x8
  float v42; // s8
  float v43; // s9
  float v44; // s10
  MessageAndScrollDetailConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  MessageAndScrollDetailConfirmDialog_c *v47; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v49; // x3
  MessageAndScrollDetailConfirmDialog_o *v50; // x0
  const MethodInfo *v51; // x3
  MessageAndScrollDetailConfirmDialog_c *v52; // x8
  UnityEngine_GameObject_o *v53; // x26
  float *v54; // x8
  float v55; // s8
  float v56; // s9
  float v57; // s10
  struct UILabel_o *v58; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v63; // s11
  float v64; // s12
  float v65; // s13
  struct UILabel_o *v66; // x8
  char v67; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v69; // x7
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v71; // x0
  const MethodInfo *v72; // x3
  MessageAndScrollDetailConfirmDialog_o *StringFromScript; // x24
  const MethodInfo *v74; // x3
  System_String_o *v75; // x23
  MessageAndScrollDetailConfirmDialog_o *v76; // x0
  const MethodInfo *v77; // x3
  UILabel_o *decideBtnLabel; // x24
  const MethodInfo *v79; // x2
  struct System_Action_o *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v87; // x24
  const MethodInfo *v88; // x3
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  UILabel_o *v95; // x24
  MessageAndScrollDetailConfirmDialog_o *v96; // x0
  const MethodInfo *v97; // x3
  MessageAndScrollDetailConfirmDialog_c *v98; // x8
  UnityEngine_GameObject_o *v99; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v100; // x10
  float *v101; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v104; // x24
  MessageAndScrollDetailConfirmDialog_c *v105; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v106; // x10
  float v107; // s9
  float v108; // s8
  float v109; // s10
  MessageAndScrollDetailConfirmDialog_o *v110; // x0
  const MethodInfo *v111; // x3
  UILabel_o *v112; // x23
  const MethodInfo *v113; // x2
  UnityEngine_Object_o *v114; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v116; // x20
  struct UnityEngine_GameObject_o *v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v125; // x0
  System_Action_o *v126; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BDF7FC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_21642/*"mainTitleFontSize"*/);
    sub_1C21E38(&StringLiteral_18828/*"decideBtnFontSize"*/);
    sub_1C21E38(&StringLiteral_18918/*"detailTitleFontSize"*/);
    sub_1C21E38(&StringLiteral_18917/*"detailTitle"*/);
    sub_1C21E38(&StringLiteral_21641/*"mainTitle"*/);
    sub_1C21E38(&StringLiteral_18919/*"detailTitleOffset"*/);
    sub_1C21E38(&StringLiteral_18025/*"cancelBtnFontSize"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_18829/*"decideBtnLabel"*/);
    sub_1C21E38(&StringLiteral_18026/*"cancelBtnLabel"*/);
    sub_1C21E38(&StringLiteral_17943/*"buttonOffset"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_15920/*"Window/OkBtn"*/);
    sub_1C21E38(&StringLiteral_21643/*"mainTitleOffset"*/);
    byte_4BDF7FC = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v28 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v28 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v28->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v21, v22, v23, v24, v25, v26);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v31,
                      script,
                      (System_String_o *)StringLiteral_21642/*"mainTitleFontSize"*/,
                      v32);
    if ( IntFromScript <= 0 )
    {
      v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v34->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  v35 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(mainTitle, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_21641/*"mainTitle"*/,
                                    v36);
    mainTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !v35 )
    goto LABEL_99;
  UILabel__set_text(v35, mainTitle, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0LL);
  v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v40 = (UnityEngine_GameObject_o *)gameObject;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v39->static_fields->MainTitleBasePos.fields.x;
  v42 = *p_x;
  v43 = p_x[1];
  v44 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_21643/*"mainTitleOffset"*/,
                    v38);
  VecFromScript.fields.x = v42 + VecFromScript.fields.x;
  VecFromScript.fields.y = v43 + VecFromScript.fields.y;
  VecFromScript.fields.z = v44 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v40, VecFromScript, 0LL);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v45,
                      script,
                      (System_String_o *)StringLiteral_18918/*"detailTitleFontSize"*/,
                      v46);
    if ( IntFromScript <= 0 )
    {
      v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v47->static_fields->DetailTitleFontSize;
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
                                    (System_String_o *)StringLiteral_18917/*"detailTitle"*/,
                                    v49);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_99;
  UILabel__set_text(detailTitleLabel, detailTitle, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  v50 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0LL);
  v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v53 = (UnityEngine_GameObject_o *)v50;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v54 = &v52->static_fields->MainTitleBasePos.fields.x;
  v55 = v54[9];
  v56 = v54[10];
  v57 = v54[11];
  v131 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v50, script, (System_String_o *)StringLiteral_18919/*"detailTitleOffset"*/, v51);
  v131.fields.x = v55 + v131.fields.x;
  v131.fields.y = v56 + v131.fields.y;
  v131.fields.z = v57 + v131.fields.z;
  GameObjectExtensions__SetLocalPosition(v53, v131, 0LL);
  v58 = this->fields.mainTitleLabel;
  if ( !v58 )
    goto LABEL_99;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v63 = static_fields->DetailMessageBasePos.fields.x;
  v64 = static_fields->DetailMessageBasePos.fields.y;
  v65 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v58->fields.mText, 0LL);
  v66 = this->fields.detailTitleLabel;
  if ( !v66 )
LABEL_99:
    sub_1C22094(mainTitleLabel, monitor_high);
  v67 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v66->fields.mText, 0LL);
  v132.fields.x = x;
  v132.fields.y = y;
  v132.fields.z = z;
  v134.fields.x = v63;
  v134.fields.y = v64;
  v134.fields.z = v65;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_45507952(
    this,
    v67 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v132,
    v134,
    script,
    v69);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v71 = UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL);
  if ( v71 )
  {
    StringFromScript = (MessageAndScrollDetailConfirmDialog_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                                                  (MessageAndScrollDetailConfirmDialog_o *)v71,
                                                                  script,
                                                                  (System_String_o *)StringLiteral_18829/*"decideBtnLabel"*/,
                                                                  v72);
    v75 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
            StringFromScript,
            script,
            (System_String_o *)StringLiteral_18026/*"cancelBtnLabel"*/,
            v74);
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
                                      v76,
                                      script,
                                      (System_String_o *)StringLiteral_18828/*"decideBtnFontSize"*/,
                                      v77);
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
      v80 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v79);
      this->fields.decideNotificationCallback = v80;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
        (int64_t)v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      v87 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C22084(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v87,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v88);
      this->fields.clickDecideBtnFunc = v87;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v87,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94);
      v95 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v75, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v75 = (System_String_o *)mainTitleLabel;
      }
      if ( !v95 )
        goto LABEL_99;
      UILabel__set_text(v95, v75, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v96 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)mainTitleLabel,
                                                       0LL);
      v98 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v99 = (UnityEngine_GameObject_o *)v96;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v98 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v100 = v98->static_fields;
      v101 = &v100->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v100->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v100->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v104 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v75, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v75 = (System_String_o *)mainTitleLabel;
      }
      if ( !v104 )
        goto LABEL_99;
      UILabel__set_text(v104, v75, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v96 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)mainTitleLabel,
                                                       0LL);
      v105 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v99 = (UnityEngine_GameObject_o *)v96;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v105 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v106 = v105->static_fields;
      v101 = &v106->OkButtonBasePos.fields.x;
      p_y = &v106->OkButtonBasePos.fields.y;
      p_z = &v106->OkButtonBasePos.fields.z;
    }
    v107 = *v101;
    v108 = *p_y;
    v109 = *p_z;
    v133 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v96,
             script,
             (System_String_o *)StringLiteral_17943/*"buttonOffset"*/,
             v97);
    v133.fields.x = v107 + v133.fields.x;
    v133.fields.y = v108 + v133.fields.y;
    v133.fields.z = v109 + v133.fields.z;
    GameObjectExtensions__SetLocalPosition(v99, v133, 0LL);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v110,
                                    script,
                                    (System_String_o *)StringLiteral_18025/*"cancelBtnFontSize"*/,
                                    v111);
    v112 = this->fields.okBtnLabel;
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
    if ( !v112 )
      goto LABEL_99;
    UILabel__set_fontSize(v112, monitor_high, 0LL);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_45513556(this, script, v113);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    monitor_high = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      monitor_high = (unsigned int)this->fields.keepPanelDepth;
    if ( !v28 )
      goto LABEL_99;
    UIPanel__set_depth(v28, monitor_high, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v114 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                   this,
                                   this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v114, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v116 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                       (UnityEngine_Transform_o *)mainTitleLabel,
                                       (System_String_o *)StringLiteral_15920/*"Window/OkBtn"*/,
                                       0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v116, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v116 )
        {
          v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v116, 0LL);
          this->fields.closeButton = v117;
          p_closeButton = &this->fields.closeButton;
LABEL_97:
          sub_1C21DDC((PartyOrganizationUtility_o *)p_closeButton, (int64_t)v117, v118, v119, v120, v121, v122, v123);
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
    if ( UnityEngine_Object__op_Inequality(v114, 0LL, 0LL) )
    {
      v125 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                           this,
                                           this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v125, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v117 = 0LL;
      goto LABEL_97;
    }
  }
LABEL_98:
  v126 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v126, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v126, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__Open_45503004(
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v34; // x26
  const MethodInfo *v35; // x3

  if ( (byte_4BDF7FA & 1) == 0 )
  {
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_4BDF7FA = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)closeFunc,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)closeFunc,
    (FollowerInfo_o *)decideFunc,
    *(PartyListViewItem_o **)&panelDepth);
  this->fields.decideNotificationCallback = decideFunc;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
    (int64_t)decideFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C22084(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v35);
  MessageAndScrollDetailConfirmDialog__OpenDialog(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v34,
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
  int64_t v5; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  MessageAndScrollDetailConfirmDialog_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v17; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  System_Action_o *_9__51_4; // x20
  __int64 v26; // x8
  System_String_o *v27; // x19
  int32_t SceneType; // w23
  __int64 v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x8
  System_String_o *v39; // x20
  System_Action_o *v40; // x0
  Il2CppObject *v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v44; // x0
  Il2CppObject *v45; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v52; // x0
  PartyOrganizationUtility_o *p__9__51_4; // x0
  __int64 v54; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v55; // x0
  Il2CppObject *v56; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v57; // x0
  __int64 v58; // x8
  __int64 v59; // x21
  __int64 v60; // x8
  int32_t v61; // w22
  SceneJumpInfo_o *v62; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x8
  int32_t v70; // w19
  int32_t v71; // w20
  SceneJumpInfo_o *v72; // x23
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 *v79; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v80; // x0
  Il2CppObject *v81; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v83; // x0
  Il2CppObject *v84; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v85; // x0
  __int64 v86; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v87; // x0
  Il2CppObject *v88; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v89; // x0
  __int64 v90; // x8
  __int64 v91; // x8
  System_String_o *v92; // x20
  SceneJumpInfo_o *v93; // x19
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x8
  System_String_o *v101; // x20
  SceneJumpInfo_o *v102; // x22
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  __int64 v109; // x20
  __int64 v110; // x8
  System_String_o *v111; // x19
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  __int64 v118; // x8
  __int64 v119; // x8
  System_String_o *v120; // x20
  SceneJumpInfo_o *v121; // x19
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  __int64 v128; // x20
  __int64 v129; // x8
  __int64 v130; // x8
  System_String_o *v131; // x21
  TerminalPramsManager_c *v132; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v133; // x0
  Il2CppObject *v134; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v135; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Predicate_object__o *v137; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v139; // x20
  System_String_o *v140; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v141; // x8
  NotificationDialog_ClickDelegate_o *_9__51_12; // x22
  Il2CppObject *v143; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x19
  TerminalPramsManager_c *v152; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v154; // x0
  Il2CppObject *v155; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v156; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4BDF800 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Enum_TryParse_ServantOperationManager_Kind___);
    sub_1C21E38(&Method_System_Enum_TryParse_MasterMissionComponent_Type___);
    sub_1C21E38(&Method_System_Enum_TryParse_PayType_Type___);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Predicate_GachaEntity__TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    sub_1C21E38(&StringLiteral_9723/*"NormalEventShop"*/);
    sub_1C21E38(&StringLiteral_13532/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/);
    sub_1C21E38(&StringLiteral_12788/*"Scroll"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_13533/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_12756/*"Scene"*/);
    byte_4BDF800 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)eventType = 0LL;
  v5 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_169;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v14, script, v15);
  *(_QWORD *)(v5 + 24) = TransitionParam;
  v17 = (__int64 *)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)TransitionParam, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v5 + 24);
  if ( !v24 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_170;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v24 + 32), 0LL);
  _9__51_4 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__51_4;
  v26 = *v17;
  if ( !*v17 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_170;
  v27 = System_String__Concat_63115476(*(System_String_o **)(v26 + 32), (System_String_o *)StringLiteral_12756/*"Scene"*/, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v27, 0LL);
  v29 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_169;
  *(_QWORD *)(v29 + 24) = v5;
  v36 = (__int64 *)(v29 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 24), v5, v30, v31, v32, v33, v34, v35);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v29 + 16) = -1;
          v37 = *(_QWORD *)(v29 + 24);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 24);
            if ( v38 )
            {
              if ( *(int *)(v38 + 24) >= 2 )
              {
                v39 = *(System_String_o **)(v38 + 40);
                if ( !System_Enum_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
                System_Enum__TryParse_Int32Enum_(
                  v39,
                  (int32_t *)(v29 + 16),
                  (const MethodInfo_2FB6948 *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              _9__51_4 = v40;
              v41 = (Il2CppObject *)v29;
              LODWORD(v42) = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__;
              goto LABEL_115;
            }
          }
LABEL_169:
          sub_1C22094(IsNullOrEmpty, v7);
        }
        return 0LL;
      }
      v80 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v80 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v80->static_fields->__9__51_4;
      if ( !_9__51_4 )
      {
        if ( !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80);
          v80 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v81 = (Il2CppObject *)v80->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v81,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__,
          0LL);
        static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        static_fields->__9__51_4 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&static_fields->__9__51_4;
LABEL_166:
        sub_1C21DDC(p__9__51_4, (int64_t)_9__51_4, v46, v47, v48, v49, v50, v51);
        return _9__51_4;
      }
      return _9__51_4;
    }
    if ( !*v36 )
      goto LABEL_169;
    v58 = *(_QWORD *)(*v36 + 24);
    if ( !v58 )
      goto LABEL_169;
    if ( *(int *)(v58 + 24) < 2 )
      return 0LL;
    v59 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    if ( !*v36 )
      goto LABEL_169;
    v60 = *(_QWORD *)(*v36 + 24);
    if ( !v60 )
      goto LABEL_169;
    if ( *(_DWORD *)(v60 + 24) > 1u )
    {
      System_Int32__TryParse(*(System_String_o **)(v60 + 40), result, 0LL);
      v61 = result[0];
      v62 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918344(v62, (System_String_o *)StringLiteral_9723/*"NormalEventShop"*/, v61, 0LL);
      if ( !v59 )
        goto LABEL_169;
      *(_QWORD *)(v59 + 16) = v62;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v62, v63, v64, v65, v66, v67, v68);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v59 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0LL);
      _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        (Il2CppObject *)v59,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__,
        0LL);
      if ( !*v36 )
        goto LABEL_169;
      v69 = *(_QWORD *)(*v36 + 24);
      if ( !v69 )
        goto LABEL_169;
      if ( *(int *)(v69 + 24) < 3 )
        return _9__51_4;
      System_Int32__TryParse(*(System_String_o **)(v69 + 48), &eventType[1], 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0LL) )
        return _9__51_4;
      v70 = result[0];
      v71 = eventType[1];
      v72 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918404(v72, (System_String_o *)StringLiteral_1/*""*/, v70, v71, 0LL);
      *(_QWORD *)(v59 + 16) = v72;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v72, v73, v74, v75, v76, v77, v78);
      v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v79 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__;
LABEL_114:
      v42 = *v79;
      _9__51_4 = v40;
      v41 = (Il2CppObject *)v59;
LABEL_115:
      System_Action___ctor(v40, v41, v42, 0LL);
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
      v59 = *v36;
      if ( !*v36 )
        goto LABEL_169;
      v90 = *(_QWORD *)(v59 + 24);
      if ( !v90 )
        goto LABEL_169;
      if ( *(int *)(v90 + 24) >= 2 )
      {
        v128 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v128, 0LL);
        if ( !*v36 )
          goto LABEL_169;
        v129 = *(_QWORD *)(*v36 + 24);
        if ( !v129 )
          goto LABEL_169;
        if ( *(_DWORD *)(v129 + 24) <= 1u )
          goto LABEL_170;
        if ( !v128 )
          goto LABEL_169;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v129 + 40),
                                             (int32_t *)(v128 + 16),
                                             0LL);
        if ( !*v36 )
          goto LABEL_169;
        v130 = *(_QWORD *)(*v36 + 24);
        if ( !v130 )
          goto LABEL_169;
        if ( *(_DWORD *)(v130 + 24) <= 1u )
          goto LABEL_170;
        v131 = *(System_String_o **)(v130 + 40);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        System_Enum__TryParse_Int32Enum_(
          v131,
          &result[1],
          (const MethodInfo_2FB6948 *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD8C41 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD8C41 = 1;
          }
          v132 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v132 = TerminalPramsManager_TypeInfo;
          }
          v132->static_fields->_SummonType_k__BackingField = 3;
          v133 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v133 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_4 = v133->static_fields->__9__51_10;
          if ( !_9__51_4 )
          {
            if ( !v133->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v133);
              v133 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v134 = (Il2CppObject *)v133->static_fields->__9;
            _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_4,
              v134,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__,
              0LL);
            v135 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v135->__9__51_10 = _9__51_4;
            p__9__51_4 = (PartyOrganizationUtility_o *)&v135->__9__51_10;
            goto LABEL_166;
          }
          return _9__51_4;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_169;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0LL);
        v137 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_GachaEntity__TypeInfo);
        System_Predicate_object____ctor(
          v137,
          (Il2CppObject *)v128,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__,
          0LL);
        if ( !ValidGachaEntityList )
          goto LABEL_169;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v137,
               (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v139 = LocalizationManager__Get((System_String_o *)StringLiteral_13533/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0LL);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13532/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0LL);
          v140 = (System_String_o *)IsNullOrEmpty;
          v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_12 = v141->static_fields->__9__51_12;
          if ( !_9__51_12 )
          {
            if ( !v141->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v141);
              v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v143 = (Il2CppObject *)v141->static_fields->__9;
            _9__51_12 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              _9__51_12,
              v143,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__,
              0LL);
            v144 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v144->__9__51_12 = _9__51_12;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v144->__9__51_12,
              (int64_t)_9__51_12,
              v145,
              v146,
              v147,
              v148,
              v149,
              v150);
          }
          if ( !Instance )
            goto LABEL_169;
          CommonUI__OpenNotificationDialog_31130684(
            (CommonUI_o *)Instance,
            v139,
            v140,
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
        v59 = *v36;
      }
      v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v79 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__;
      goto LABEL_114;
    }
    if ( SceneType != 22 )
      return _9__51_4;
    if ( !*v36 )
      goto LABEL_169;
    v54 = *(_QWORD *)(*v36 + 24);
    if ( !v54 )
      goto LABEL_169;
    if ( *(int *)(v54 + 24) < 2 )
    {
      v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v55->static_fields->__9__51_2;
      if ( !_9__51_4 )
      {
        if ( !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v55->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v56,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__,
          0LL);
        v57 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v57->__9__51_2 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&v57->__9__51_2;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    v59 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    if ( !*v36 )
      goto LABEL_169;
    v100 = *(_QWORD *)(*v36 + 24);
    if ( !v100 )
      goto LABEL_169;
    if ( *(_DWORD *)(v100 + 24) > 1u )
    {
      v101 = *(System_String_o **)(v100 + 40);
      v102 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v102, v101, 0LL);
      if ( !v59 )
        goto LABEL_169;
      *(_QWORD *)(v59 + 16) = v102;
      v109 = v59 + 16;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v102, v103, v104, v105, v106, v107, v108);
      if ( !*v36 )
        goto LABEL_169;
      v110 = *(_QWORD *)(*v36 + 24);
      if ( !v110 )
        goto LABEL_169;
      if ( *(int *)(v110 + 24) >= 3 )
      {
        eventType[0] = 0;
        v111 = *(System_String_o **)(v110 + 48);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v111,
                                             eventType,
                                             (const MethodInfo_2FB6948 *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v109 )
          goto LABEL_169;
        *(_DWORD *)(*(_QWORD *)v109 + 24LL) = eventType[0];
      }
      v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v79 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__;
      goto LABEL_114;
    }
LABEL_170:
    sub_1C2209C(IsNullOrEmpty, v7);
  }
  if ( SceneType == 23 )
  {
    v83 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
      v83 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    _9__51_4 = v83->static_fields->__9__51_5;
    if ( !_9__51_4 )
    {
      if ( !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        v83 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v84 = (Il2CppObject *)v83->static_fields->__9;
      _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        v84,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__,
        0LL);
      v85 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v85->__9__51_5 = _9__51_4;
      p__9__51_4 = (PartyOrganizationUtility_o *)&v85->__9__51_5;
      goto LABEL_166;
    }
    return _9__51_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v36 )
      goto LABEL_169;
    v86 = *(_QWORD *)(*v36 + 24);
    if ( !v86 )
      goto LABEL_169;
    if ( *(int *)(v86 + 24) < 2 )
    {
      v87 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v87 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v87->static_fields->__9__51_7;
      if ( !_9__51_4 )
      {
        if ( !v87->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v87);
          v87 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v88 = (Il2CppObject *)v87->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v88,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__,
          0LL);
        v89 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v89->__9__51_7 = _9__51_4;
        p__9__51_4 = (PartyOrganizationUtility_o *)&v89->__9__51_7;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v86 + 40),
                                         (System_String_o *)StringLiteral_12788/*"Scroll"*/,
                                         0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v36 )
        goto LABEL_169;
      v118 = *(_QWORD *)(*v36 + 24);
      if ( !v118 )
        goto LABEL_169;
      if ( *(int *)(v118 + 24) >= 3 )
      {
        v151 = *(_QWORD *)(v118 + 48);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD7186 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD7186 = 1;
        }
        v152 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v152 = TerminalPramsManager_TypeInfo;
        }
        p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v152->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (PartyOrganizationUtility_c *)v151;
        sub_1C21DDC(p_TransitionScrollTabName_k__BackingField, v151, v112, v113, v114, v115, v116, v117);
        v154 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
          v154 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        _9__51_4 = v154->static_fields->__9__51_6;
        if ( !_9__51_4 )
        {
          if ( !v154->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v154);
            v154 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v155 = (Il2CppObject *)v154->static_fields->__9;
          _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            _9__51_4,
            v155,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__,
            0LL);
          v156 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v156->__9__51_6 = _9__51_4;
          p__9__51_4 = (PartyOrganizationUtility_o *)&v156->__9__51_6;
          goto LABEL_166;
        }
        return _9__51_4;
      }
    }
    v59 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    if ( !*v36 )
      goto LABEL_169;
    v119 = *(_QWORD *)(*v36 + 24);
    if ( !v119 )
      goto LABEL_169;
    if ( *(_DWORD *)(v119 + 24) > 1u )
    {
      v120 = *(System_String_o **)(v119 + 40);
      v121 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v121, v120, 0LL);
      if ( !v59 )
        goto LABEL_169;
      *(_QWORD *)(v59 + 16) = v121;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v121, v122, v123, v124, v125, v126, v127);
      v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v79 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  if ( SceneType != 32 )
    return _9__51_4;
  if ( !*v36 )
    goto LABEL_169;
  v43 = *(_QWORD *)(*v36 + 24);
  if ( !v43 )
    goto LABEL_169;
  if ( *(int *)(v43 + 24) >= 2 )
  {
    v59 = sub_1C22084(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v59, 0LL);
    if ( !*v36 )
      goto LABEL_169;
    v91 = *(_QWORD *)(*v36 + 24);
    if ( !v91 )
      goto LABEL_169;
    if ( *(_DWORD *)(v91 + 24) > 1u )
    {
      v92 = *(System_String_o **)(v91 + 40);
      v93 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39918256(v93, v92, 0LL);
      if ( !v59 )
        goto LABEL_169;
      *(_QWORD *)(v59 + 16) = v93;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v93, v94, v95, v96, v97, v98, v99);
      v40 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v79 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  v44 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v44 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_4 = v44->static_fields->__9__51_3;
  if ( !_9__51_4 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v44->static_fields->__9;
    _9__51_4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_4,
      v45,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__,
      0LL);
    v52 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v52->__9__51_3 = _9__51_4;
    p__9__51_4 = (PartyOrganizationUtility_o *)&v52->__9__51_3;
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

  if ( (byte_4BDF7F7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF7F7 = 1;
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A66DE4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A66D9C;
}


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
  if ( (byte_4BDF80D & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BDF80D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF80E & 1) == 0 )
  {
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_4BDF80E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BDF80F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF80F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v5; // x8
  CommonUI_o *v6; // x19
  System_Action_o *_9__51_13; // x20
  Il2CppObject *v8; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDF810 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__);
    sub_1C21E38(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_4BDF810 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v5 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_13 = v5->static_fields->__9__51_13;
  if ( !_9__51_13 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__51_13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_13,
      v8,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__,
      0LL);
    static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__51_13 = _9__51_13;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_13,
      (int64_t)_9__51_13,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__CloseNotificationDialog_31131116(v6, _9__51_13, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF811 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF811 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF812 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF812 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF813 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF813 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF814 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF814 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF815 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF815 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF816 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF816 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF817 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF817 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
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
    sub_1C22094(this, method);
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

  if ( (byte_4BDF818 & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDF818 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
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
    sub_1C22094(mPlayerStatus, method);
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

  if ( (byte_4BDF819 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF819 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BDF81A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF81A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(this, 0LL);
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

  if ( (byte_4BDF81B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF81B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BDF81C & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF81C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BDF81D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF81D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0LL);
}