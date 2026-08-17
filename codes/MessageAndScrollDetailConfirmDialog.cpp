void MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v2; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v3; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v4; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x9

  if ( (byte_59743D5 & 1) == 0 )
  {
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    byte_59743D5 = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  v2 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v3 = v2->static_fields;
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
  *(_OWORD *)&v10->ButtonBaseSizeX = xmmword_E9D9A0;
  *(_OWORD *)&v10->MainTitleFontSize = xmmword_E9DB20;
  v10->DetailMessageBaseHeight = 1000;
}


void MessageAndScrollDetailConfirmDialog___ctor(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_59743D4 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59743D4 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.isInitPanelDepth = 1;
  *(_QWORD *)&this->fields.onClickOkSeKind = 0x800000001LL;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MessageAndScrollDetailConfirmDialog__AdjustBtnSize(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        const MethodInfo *method)
{
  System_Nullable_int__o v5; // x21
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v8; // x22
  UIWidget_o *Component_object; // x23
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  __int64 v12; // x1
  MessageAndScrollDetailConfirmDialog_c *v13; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  MessageAndScrollDetailConfirmDialog_c *v23; // x0
  int v24; // s8
  int32_t v25; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v5 = inputCancelBtnWidth;
  if ( (byte_59743CA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59743CA = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  v8 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = UnityEngine_GameObject__GetComponent_object_(
          v8,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, inputCancelBtnWidth);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
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
        if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, inputCancelBtnWidth);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(okBtnLabel[7].fields.m_CachedPtr + 96);
        if ( !Component_object )
          goto LABEL_45;
      }
      UIWidget__set_width(Component_object, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0);
      v13 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v12);
        v13 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v13->static_fields->ButtonBaseSizeY, 0);
      if ( !v11 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v11, 0);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v11, size, 0);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0);
  if ( !okBtnLabel )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_45;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v17 = (UIWidget_o *)okBtnLabel;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v17 )
            goto LABEL_45;
        }
        else
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v21);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(okBtnLabel[7].fields.m_CachedPtr + 96);
          if ( !v17 )
            goto LABEL_45;
        }
        UIWidget__set_width(v17, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0);
        v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v22);
          v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v17, v23->static_fields->ButtonBaseSizeY, 0);
        if ( v19 )
        {
          v24 = v17->fields.mWidth;
          v25 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v27 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v19, 0);
          v27.fields.x = (float)v24;
          v27.fields.y = (float)v25;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v19, v27, 0);
          return;
        }
LABEL_45:
        sub_2213CDC(okBtnLabel, inputCancelBtnWidth);
      }
    }
  }
}


void MessageAndScrollDetailConfirmDialog__AdjustBtnSize_55032936(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x22
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w23
  __int64 v13; // x1
  MessageAndScrollDetailConfirmDialog_c *v14; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v16; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x20
  __int64 v19; // x1
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w19
  __int64 v23; // x1
  MessageAndScrollDetailConfirmDialog_c *v24; // x0
  int32_t v25; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59743CB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18511/*"cancelBtnWidth"*/);
    sub_2213A60(&StringLiteral_19355/*"decideBtnWidth"*/);
    byte_59743CB = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  v6 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v9 = UnityEngine_GameObject__GetComponent_object_(
         v6,
         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, script);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( v10 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v10,
                                                script,
                                                (System_String_o *)StringLiteral_18511/*"cancelBtnWidth"*/,
                                                v11);
      v12 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, script);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v12 = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v12, 0);
      v14 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v13);
        v14 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v14->static_fields->ButtonBaseSizeY, 0);
      if ( !v9 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v9, 0);
      size.fields.x = (float)v12;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v9, size, 0);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0);
  if ( !okBtnLabel )
    goto LABEL_43;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_43;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v16 = (UIWidget_o *)okBtnLabel;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( v20 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v20,
                                                  script,
                                                  (System_String_o *)StringLiteral_19355/*"decideBtnWidth"*/,
                                                  v21);
        v22 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, script);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v22 = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
        }
        if ( v16 )
        {
          UIWidget__set_width(v16, v22, 0);
          v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v23);
            v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v16, v24->static_fields->ButtonBaseSizeY, 0);
          if ( v18 )
          {
            v25 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v27 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v18, 0);
            v27.fields.x = (float)v22;
            v27.fields.y = (float)v25;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v18, v27, 0);
            return;
          }
        }
LABEL_43:
        sub_2213CDC(okBtnLabel, script);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
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
  __int64 v22; // x1
  MessageAndScrollDetailConfirmDialog_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x29
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  MessageAndScrollDetailConfirmDialog_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x29
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v30; // x0
  __int64 v31; // x1
  MessageAndScrollDetailConfirmDialog_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x29
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  MessageAndScrollDetailConfirmDialog_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x29
  __int64 v38; // x1
  MessageAndScrollDetailConfirmDialog_c *v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x25
  System_String_o *v42; // x24
  MessageAndScrollDetailConfirmDialog_c *v43; // x0
  __int64 v44; // x1
  MessageAndScrollDetailConfirmDialog_c *v45; // x0
  __int64 v46; // x1
  MessageAndScrollDetailConfirmDialog_c *v47; // x0
  __int64 v48; // x1
  MessageAndScrollDetailConfirmDialog_c *v49; // x0

  v19 = this;
  if ( (byte_59743C7 & 1) == 0 )
  {
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    byte_59743C7 = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v19->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v19->fields.noTitleMainMessageLabel,
                   0);
    v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v24 = gameObject;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v22);
      v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v24, v23->static_fields->NoTitleMainMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleMainMessageLabel = v19->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.mainMessageLabel, 0);
    v27 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v28 = v25;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v26);
      v27 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v28, v27->static_fields->MainMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_46:
      sub_2213CDC(this, isNoMainTitle);
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = v19->fields.noTitleDetailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.noTitleDetailMessageLabel, 0);
    v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v33 = v30;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v31);
      v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v33, v32->static_fields->NoTitleDetailMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleDetailMessageLabel = v19->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.detailMessageLabel, 0);
    v36 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v37 = v34;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v35);
      v36 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v37, v36->static_fields->DetailMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleDetailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v38);
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v39->static_fields->DetailMessageBaseHeight, 0);
  UILabel__set_alignment(noTitleMainMessageLabel, mainMsgAlignment, 0);
  UILabel__set_alignment(noTitleDetailMessageLabel, detailMsgAlignment, 0);
  if ( mainMessage )
    v41 = System_String__Trim_75713068(mainMessage, 0xAu, 0);
  else
    v41 = **(System_String_o ***)(qword_5984390 + 184);
  if ( detailMessage )
    v42 = System_String__Trim_75713068(detailMessage, 0xAu, 0);
  else
    v42 = **(System_String_o ***)(qword_5984390 + 184);
  v43 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v40);
    v43 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v43->static_fields->MainMessageFontSize, 0);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0);
  WrapControlText__textAdjust(noTitleMainMessageLabel, v41, noTitleMainMessageLabel->fields.mFontSize, 0, 0);
  if ( mainFontSize <= 0 )
  {
    v45 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v44);
      v45 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v45->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0);
  v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v46);
    v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v47->static_fields->DetailMessageFontSize, 0);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v42,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0);
  if ( detailFontSize <= 0 )
  {
    v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v48);
      v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v49->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0);
}


// local variable allocation has failed, the output may be wrong!
void MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_55027520(
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
  float v12; // s10
  float v13; // s11
  UnityEngine_Component_o *mainMessageLabel; // x0
  int v22; // w9
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *v24; // x8
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v27; // x3
  UnityEngine_Component_o *v28; // x8
  float v29; // s12
  MessageAndScrollDetailConfirmDialog_o *v30; // x26
  const MethodInfo *v31; // x3
  int v32; // w9
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_Component_o *v34; // x8
  float v35; // s10
  MessageAndScrollDetailConfirmDialog_o *v36; // x26
  const MethodInfo *v37; // x3
  UnityEngine_Component_o *detailMessageLabel; // x8
  float v39; // s10
  MessageAndScrollDetailConfirmDialog_o *v40; // x26
  const MethodInfo *v41; // x3
  MessageAndScrollDetailConfirmDialog_o *v42; // x0
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  System_String_o *StringFromScript; // x25
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  System_String_o *v48; // x25
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x3
  System_String_o *v51; // x24
  System_String_o *v52; // x22
  MessageAndScrollDetailConfirmDialog_o *v53; // x0
  const MethodInfo *v54; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  int32_t v58; // w0
  __int64 v59; // x1
  MessageAndScrollDetailConfirmDialog_c *v60; // x0
  __int64 v61; // x1
  MessageAndScrollDetailConfirmDialog_c *v62; // x0
  MessageAndScrollDetailConfirmDialog_o *v63; // x0
  const MethodInfo *v64; // x3
  int32_t v65; // w0
  MessageAndScrollDetailConfirmDialog_o *v66; // x0
  const MethodInfo *v67; // x3
  int32_t v68; // w0
  __int64 v69; // x1
  MessageAndScrollDetailConfirmDialog_c *v70; // x0
  int32_t result; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v12 = mainMessagePos.fields.z;
  v13 = mainMessagePos.fields.x;
  if ( (byte_59743C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Enum_TryParse_NGUIText_Alignment___);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_22479/*"mainMsgAlignment"*/);
    sub_2213A60(&StringLiteral_22481/*"mainMsgOffset"*/);
    sub_2213A60(&StringLiteral_22480/*"mainMsgFontSize"*/);
    sub_2213A60(&StringLiteral_19441/*"detailMsgOffset"*/);
    sub_2213A60(&StringLiteral_19440/*"detailMsgFontSize"*/);
    sub_2213A60(&StringLiteral_19442/*"detailMsgSpacingY"*/);
    sub_2213A60(&StringLiteral_19439/*"detailMsgAlignment"*/);
    sub_2213A60(&StringLiteral_22478/*"mainMsg"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_22482/*"mainMsgSpacingY"*/);
    byte_59743C8 = 1;
  }
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  result = 0;
  v22 = *(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = this->fields.noTitleMainMessageLabel;
    v24 = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !v22 )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      v24 = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    }
    if ( !v24 )
      goto LABEL_58;
    y = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleMainMessageBasePos.fields.y;
    gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(v24, 0);
    VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                      gameObject,
                      script,
                      (System_String_o *)StringLiteral_22481/*"mainMsgOffset"*/,
                      v27);
    VecFromScript.fields.x = v13 + VecFromScript.fields.x;
    VecFromScript.fields.y = y + VecFromScript.fields.y;
    VecFromScript.fields.z = v12 + VecFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VecFromScript, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleMainMessageLabel = this->fields.mainMessageLabel;
    v28 = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !v22 )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      v28 = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    }
    if ( !v28 )
      goto LABEL_58;
    v29 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v30 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(v28, 0);
    v73 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v30,
            script,
            (System_String_o *)StringLiteral_22481/*"mainMsgOffset"*/,
            v31);
    v73.fields.x = v13 + v73.fields.x;
    v73.fields.y = v29 + v73.fields.y;
    v73.fields.z = v12 + v73.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v30, v73, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_58:
      sub_2213CDC(mainMessageLabel, isNoMainTitle);
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  v32 = *(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = this->fields.noTitleDetailMessageLabel;
    v34 = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !v32 )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      v34 = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    }
    if ( !v34 )
      goto LABEL_58;
    v35 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v36 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(v34, 0);
    v74 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v36,
            script,
            (System_String_o *)StringLiteral_19441/*"detailMsgOffset"*/,
            v37);
    v74.fields.x = x + v74.fields.x;
    v74.fields.y = v35 + v74.fields.y;
    v74.fields.z = z + v74.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v36, v74, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleDetailMessageLabel = this->fields.detailMessageLabel;
    detailMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !v32 )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      detailMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    }
    if ( !detailMessageLabel )
      goto LABEL_58;
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v40 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(detailMessageLabel, 0);
    v75 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v40,
            script,
            (System_String_o *)StringLiteral_19441/*"detailMsgOffset"*/,
            v41);
    v75.fields.x = x + v75.fields.x;
    v75.fields.y = v39 + v75.fields.y;
    v75.fields.z = z + v75.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v40, v75, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
  if ( !noTitleDetailMessageLabel )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)noTitleDetailMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBaseHeight,
    0);
  result = 2;
  StringFromScript = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                       v42,
                       script,
                       (System_String_o *)StringLiteral_22479/*"mainMsgAlignment"*/,
                       v43);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v44);
  mainMessageLabel = (UnityEngine_Component_o *)System_Enum__TryParse_Int32Enum_(
                                                  StringFromScript,
                                                  &result,
                                                  (const MethodInfo_3861584 *)Method_System_Enum_TryParse_NGUIText_Alignment___);
  if ( ((unsigned __int8)mainMessageLabel & 1) != 0 )
  {
    if ( !noTitleMainMessageLabel )
      goto LABEL_58;
    UILabel__set_alignment(noTitleMainMessageLabel, result, 0);
  }
  v48 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
          (MessageAndScrollDetailConfirmDialog_o *)mainMessageLabel,
          script,
          (System_String_o *)StringLiteral_19439/*"detailMsgAlignment"*/,
          v46);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v47);
  if ( System_Enum__TryParse_Int32Enum_(
         v48,
         &result,
         (const MethodInfo_3861584 *)Method_System_Enum_TryParse_NGUIText_Alignment___) )
  {
    UILabel__set_alignment(noTitleDetailMessageLabel, result, 0);
  }
  v49 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v49 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v49,
                    script,
                    (System_String_o *)StringLiteral_22478/*"mainMsg"*/,
                    v50);
  if ( mainMessage )
  {
    v51 = System_String__Trim_75713068(mainMessage, 0xAu, 0);
    if ( detailMessage )
    {
LABEL_41:
      v52 = System_String__Trim_75713068(detailMessage, 0xAu, 0);
      goto LABEL_44;
    }
  }
  else
  {
    v51 = **(System_String_o ***)(qword_5984390 + 184);
    if ( detailMessage )
      goto LABEL_41;
  }
  v52 = **(System_String_o ***)(qword_5984390 + 184);
LABEL_44:
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
  if ( !noTitleMainMessageLabel )
    goto LABEL_58;
  UILabel__set_fontSize(
    noTitleMainMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
    0);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0);
  IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                    v53,
                    script,
                    (System_String_o *)StringLiteral_22482/*"mainMsgSpacingY"*/,
                    v54);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0);
  v56 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   v51,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0);
  v58 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v56, script, (System_String_o *)StringLiteral_22480/*"mainMsgFontSize"*/, v57);
  v59 = (unsigned int)v58;
  if ( v58 <= 0 )
  {
    v60 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v59);
      v60 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    LODWORD(v59) = v60->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v59, 0);
  v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v61);
    v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v62->static_fields->DetailMessageFontSize, 0);
  v65 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v63, script, (System_String_o *)StringLiteral_19442/*"detailMsgSpacingY"*/, v64);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v65, 0);
  v66 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v52,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0);
  v68 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v66, script, (System_String_o *)StringLiteral_19440/*"detailMsgFontSize"*/, v67);
  v69 = (unsigned int)v68;
  if ( v68 <= 0 )
  {
    v70 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v69);
      v70 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    LODWORD(v69) = v70->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v69, 0);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0);
}


void MessageAndScrollDetailConfirmDialog__Awake(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(
        MessageAndScrollDetailConfirmDialog_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  DataManager_c *v5; // x8
  int v6; // w10
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t klass; // w19
  TerminalPramsManager_c *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59743CC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_59743CC = 1;
  }
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
  if ( !byte_596A158 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A158 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = DataManager_TypeInfo;
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v4->static_fields->_SummonType_k__BackingField = 1;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&gachaId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    if ( !byte_596A158 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A158 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_2213CDC(Master_object, v8);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 20, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(
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
  if ( SLODWORD(linkInfo->max_length) < 2 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)linkInfo->m_Items[1];
  if ( !this
    || (this = (MessageAndScrollDetailConfirmDialog_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_10:
    sub_2213CDC(this, linkInfo);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_2213CE4(this);
  this = (MessageAndScrollDetailConfirmDialog_o *)System_Int32__TryParse(
                                                    (System_String_o *)this->fields.basePanel,
                                                    &result,
                                                    0);
  v4 = result;
LABEL_9:
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(this, v4, method);
}


void MessageAndScrollDetailConfirmDialog__Close(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MessageAndScrollDetailConfirmDialog__Close_55034016(this, 0, v2);
}


void MessageAndScrollDetailConfirmDialog__CloseFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *closeNotificationCallback; // x20
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_c *v17; // x21
  TerminalPramsManager_c *v18; // x0
  MissionNaviTransitionBoardItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v20; // x2

  if ( (byte_59743C6 & 1) == 0 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59743C6 = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeNotificationCallback,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
  v17 = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  if ( !byte_596A093 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A093 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    v18 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v18->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v17;
  sub_2213A04(p_TransitionScrollTabName_k__BackingField, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  MessageAndScrollDetailConfirmDialog__Close_55034016(this, closeNotificationCallback, v20);
}


void MessageAndScrollDetailConfirmDialog__Close_55034016(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59743D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_EndClose__);
    byte_59743D1 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void MessageAndScrollDetailConfirmDialog__DeicedFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_decideNotificationCallback; // x0
  System_Action_o *decideNotificationCallback; // t1
  const MethodInfo *v11; // x2

  decideNotificationCallback = this->fields.decideNotificationCallback;
  p_decideNotificationCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.decideNotificationCallback;
  p_decideNotificationCallback->klass = 0;
  sub_2213A04(p_decideNotificationCallback, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  MessageAndScrollDetailConfirmDialog__Close_55034016(this, decideNotificationCallback, v11);
}


void MessageAndScrollDetailConfirmDialog__EndClose(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  MessageAndScrollDetailConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_2213A04(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__EndOpen(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t MessageAndScrollDetailConfirmDialog__GetIntFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59743D0 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59743D0 = 1;
  }
  value = 0;
  if ( !script )
    sub_2213CDC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
  return System_Convert__ToInt32(v7, 0);
}


System_String_o *MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59743CF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59743CF = 1;
  }
  value = 0;
  if ( !script )
    sub_2213CDC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0;
  if ( value->klass == (Il2CppClass *)qword_5984390 )
    return (System_String_o *)value;
  return 0;
}


System_String_array *MessageAndScrollDetailConfirmDialog__GetTransitionParam(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  __int64 v5; // x1

  if ( (byte_59743CD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25491/*"transitionParam"*/);
    byte_59743CD = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_25491/*"transitionParam"*/,
                  **(System_String_o ***)(qword_5984390 + 184),
                  0);
  if ( !StringValue )
    sub_2213CDC(0, v5);
  return System_String__Split(StringValue, 0x2Fu, 0, 0);
}


UnityEngine_Vector3_o MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
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
  __int64 v12; // x1
  Il2CppObject *Item; // x20
  double v14; // d8
  Il2CppObject *v15; // x0
  double v16; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59743CE & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_59743CE = 1;
  }
  value = 0;
  if ( !script )
    sub_2213CDC(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12);
    v14 = System_Convert__ToDouble(Item, 0);
    v15 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
    v16 = System_Convert__ToDouble(v15, 0);
    x = v14;
    z = 0.0;
    y = v16;
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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


void MessageAndScrollDetailConfirmDialog__Init(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *mainTitleLabel; // x0

  if ( (byte_59743C1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59743C1 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    mainTitleLabel = this->fields.mainTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.mainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.noTitleMainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.detailTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.detailMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.noTitleDetailMessageLabel;
    if ( !mainTitleLabel
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = this->fields.okBtnLabel) == 0)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = this->fields.decideBtnLabel) == 0)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
    {
LABEL_14:
      sub_2213CDC(mainTitleLabel, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 0, 0);
    BaseDialog__Init((BaseDialog_o *)this, 0);
  }
}


void MessageAndScrollDetailConfirmDialog__OnClickDecide(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickDecideBtnFunc; // x8

  if ( (byte_59743D3 & 1) == 0 )
  {
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    byte_59743D3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
    clickDecideBtnFunc = this->fields.clickDecideBtnFunc;
    if ( clickDecideBtnFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickDecideBtnFunc->fields.invoke_impl)(
        clickDecideBtnFunc->fields.method_code,
        1,
        clickDecideBtnFunc->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__OnClickOk(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickOkBtnFunc; // x8

  if ( (byte_59743D2 & 1) == 0 )
  {
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    byte_59743D2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0);
    clickOkBtnFunc = this->fields.clickOkBtnFunc;
    if ( clickOkBtnFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickOkBtnFunc->fields.invoke_impl)(
        clickOkBtnFunc->fields.method_code,
        1,
        clickOkBtnFunc->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__Open(
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

  if ( (byte_59743C2 & 1) == 0 )
  {
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_59743C2 = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)func,
    mainMessage,
    detailTitle,
    (int32_t)detailMessage,
    (int32_t)func,
    (bool)script,
    panelDepth);
  v20 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_2213CCC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v21);
  MessageAndScrollDetailConfirmDialog__OpenDialog_55020216(
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


void MessageAndScrollDetailConfirmDialog__OpenDialog(
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
  int32_t v28; // w25
  int32_t v29; // w26
  UIPanel_o *TargetPanel; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v39; // x23
  UILabel_o *mainTitleLabel; // x0
  __int64 keepPanelDepth; // x1
  MessageAndScrollDetailConfirmDialog_c *v42; // x0
  MessageAndScrollDetailConfirmDialog_c *v43; // x0
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v49; // x0
  MessageAndScrollDetailConfirmDialog_c *v50; // x0
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v51; // x8
  float v52; // s9
  float v53; // s8
  float y; // s10
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  bool IsNullOrEmpty; // w22
  bool v58; // w0
  __int64 v59; // x1
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v61; // x1
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v62; // x20
  const MethodInfo *v63; // x3
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  UILabel_o *v70; // x20
  System_String_o *v71; // x21
  UnityEngine_GameObject_o *v72; // x0
  __int64 v73; // x1
  MessageAndScrollDetailConfirmDialog_c *v74; // x8
  UnityEngine_GameObject_o *v75; // x20
  System_Nullable_int__o v76; // x21
  System_Nullable_int__o v77; // x22
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v78; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  System_String_o *v82; // x21
  UILabel_o *v83; // x20
  UnityEngine_GameObject_o *v84; // x0
  __int64 v85; // x1
  MessageAndScrollDetailConfirmDialog_c *v86; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v87; // x10
  System_Nullable_int__o v88; // x1
  System_Nullable_int__o v89; // x2
  const MethodInfo *v90; // x3
  __int64 v91; // x1
  UnityEngine_Object_o *v92; // x20
  int v93; // w9
  __int64 v94; // x1
  UnityEngine_Object_o *v95; // x20
  struct UnityEngine_GameObject_o *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  int32_t v103; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v105; // x0
  System_Action_o *v106; // x20
  const MethodInfo *v107; // [xsp+10h] [xbp-E0h]
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s3.4,4:s4.4,8:s5.4

  v28 = detailTitleFontSize;
  v29 = mainTitleFontSize;
  if ( (byte_59743C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16270/*"Window/OkBtn"*/);
    byte_59743C4 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v39 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_92;
      this->fields.keepPanelDepth = v39->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickOkBtnFunc,
    (int32_t)okFunc,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( mainTitleFontSize <= 0 )
  {
    v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
      v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v29 = v42->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v29, 0);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, mainTitle, 0);
  v43 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
    v43 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v43->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, keepPanelDepth);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
  v112.fields.x = x;
  v112.fields.y = value;
  v112.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v112, 0);
  if ( detailTitleFontSize <= 0 )
  {
    v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
      v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v28 = v49->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v28, 0);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, detailTitle, 0);
  v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
    v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v51 = v50->static_fields;
  v52 = v51->DetailTitleBasePos.fields.x;
  v53 = v51->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, keepPanelDepth);
      v51 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v51->DetailTitleBasePos.fields.y;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
LABEL_92:
    sub_2213CDC(mainTitleLabel, keepPanelDepth);
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
  v113.fields.x = v52;
  v113.fields.y = y;
  v113.fields.z = v53;
  GameObjectExtensions__SetLocalPosition(v55, v113, 0);
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v56);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0);
  v58 = System_String__IsNullOrEmpty(detailTitle, 0);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v58,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v114,
    v116,
    mainMsgAlignment,
    detailMsgAlignment,
    v107);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    if ( System_String__op_Inequality(decideBtnLabelName, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UILabel__set_text(mainTitleLabel, decideBtnLabelName, 0);
      v62 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_2213CCC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v62,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v63);
      this->fields.clickDecideBtnFunc = v62;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.clickDecideBtnFunc,
        (int32_t)v62,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v70 = this->fields.okBtnLabel;
      v71 = cancelBtnLabelName;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, keepPanelDepth);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
        v71 = (System_String_o *)mainTitleLabel;
      }
      if ( !v70 )
        goto LABEL_92;
      UILabel__set_text(v70, v71, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
      v74 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v75 = v72;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v73);
        v74 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v77 = inputCancelBtnWidth;
      v76 = inputDecideBtnWidth;
      v78 = v74->static_fields;
      p_x = &v78->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v78->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v78->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v82 = cancelBtnLabelName;
      v83 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, keepPanelDepth);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v82 = (System_String_o *)mainTitleLabel;
      }
      if ( !v83 )
        goto LABEL_92;
      UILabel__set_text(v83, v82, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
      v86 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v75 = v84;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v85);
        v86 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v77 = inputCancelBtnWidth;
      v76 = inputDecideBtnWidth;
      v87 = v86->static_fields;
      p_x = &v87->OkButtonBasePos.fields.x;
      p_y = &v87->OkButtonBasePos.fields.y;
      p_z = &v87->OkButtonBasePos.fields.z;
    }
    v115.fields.y = *p_y;
    v115.fields.x = *p_x;
    v115.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v75, v115, 0);
    v88 = v77;
    v89 = v76;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v88, v89, v90);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v39 )
      goto LABEL_92;
    UIPanel__set_depth(v39, keepPanelDepth, 0);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v92 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                  this,
                                  this->klass->vtable._4_get_closeBtnObject.method);
  v93 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( canMaskTouchClose )
  {
    if ( !v93 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
    if ( UnityEngine_Object__op_Equality(v92, 0, 0) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v95 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)mainTitleLabel,
                                      (System_String_o *)StringLiteral_16270/*"Window/OkBtn"*/,
                                      0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v94);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v95, 0, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v95 )
        {
          v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v95, 0);
          v103 = (int)v96;
          this->fields.closeButton = v96;
          p_closeButton = &this->fields.closeButton;
LABEL_90:
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p_closeButton, v103, v97, v98, v99, v100, v101, v102);
          goto LABEL_91;
        }
        goto LABEL_92;
      }
    }
  }
  else
  {
    if ( !v93 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v91);
    if ( UnityEngine_Object__op_Inequality(v92, 0, 0) )
    {
      v105 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__RemoveBackBtn(v105, 0);
      v103 = 0;
      this->fields.closeButton = 0;
      p_closeButton = &this->fields.closeButton;
      goto LABEL_90;
    }
  }
LABEL_91:
  v106 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v106, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v106, 0, 0, 0);
}


void MessageAndScrollDetailConfirmDialog__OpenDialog_55020216(
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
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v29; // x22
  UILabel_o *mainTitleLabel; // x0
  __int64 data_high; // x1
  MessageAndScrollDetailConfirmDialog_o *v32; // x0
  const MethodInfo *v33; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v35; // x0
  UILabel_o *v36; // x29
  const MethodInfo *v37; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  MessageAndScrollDetailConfirmDialog_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x27
  float *p_x; // x8
  float v44; // s8
  float v45; // s9
  float v46; // s10
  MessageAndScrollDetailConfirmDialog_o *v47; // x0
  const MethodInfo *v48; // x3
  MessageAndScrollDetailConfirmDialog_c *v49; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v51; // x3
  MessageAndScrollDetailConfirmDialog_o *v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  MessageAndScrollDetailConfirmDialog_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x26
  float *v57; // x8
  float v58; // s8
  float v59; // s9
  float v60; // s10
  struct UILabel_o *v61; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v66; // s11
  float v67; // s12
  float v68; // s13
  struct UILabel_o *v69; // x8
  char v70; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v72; // x7
  __int64 v73; // x1
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x3
  MessageAndScrollDetailConfirmDialog_o *StringFromScript; // x24
  const MethodInfo *v79; // x3
  System_String_o *v80; // x23
  MessageAndScrollDetailConfirmDialog_o *v81; // x0
  const MethodInfo *v82; // x3
  UILabel_o *decideBtnLabel; // x24
  const MethodInfo *v84; // x2
  struct System_Action_o *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v92; // x24
  const MethodInfo *v93; // x3
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  UILabel_o *v100; // x24
  MessageAndScrollDetailConfirmDialog_o *v101; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x3
  MessageAndScrollDetailConfirmDialog_c *v104; // x8
  UnityEngine_GameObject_o *v105; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v106; // x10
  float *v107; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v110; // x24
  __int64 v111; // x1
  MessageAndScrollDetailConfirmDialog_c *v112; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v113; // x10
  float v114; // s8
  float v115; // s9
  float v116; // s10
  MessageAndScrollDetailConfirmDialog_o *v117; // x0
  const MethodInfo *v118; // x3
  UILabel_o *v119; // x23
  const MethodInfo *v120; // x2
  __int64 v121; // x1
  UnityEngine_Object_o *v122; // x20
  int v123; // w9
  __int64 v124; // x1
  UnityEngine_Object_o *v125; // x20
  struct UnityEngine_GameObject_o *v126; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  int32_t v133; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v135; // x0
  System_Action_o *v136; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_59743C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22485/*"mainTitleFontSize"*/);
    sub_2213A60(&StringLiteral_19353/*"decideBtnFontSize"*/);
    sub_2213A60(&StringLiteral_19444/*"detailTitleFontSize"*/);
    sub_2213A60(&StringLiteral_19443/*"detailTitle"*/);
    sub_2213A60(&StringLiteral_22484/*"mainTitle"*/);
    sub_2213A60(&StringLiteral_19445/*"detailTitleOffset"*/);
    sub_2213A60(&StringLiteral_18509/*"cancelBtnFontSize"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_19354/*"decideBtnLabel"*/);
    sub_2213A60(&StringLiteral_18510/*"cancelBtnLabel"*/);
    sub_2213A60(&StringLiteral_18416/*"buttonOffset"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16270/*"Window/OkBtn"*/);
    sub_2213A60(&StringLiteral_22486/*"mainTitleOffset"*/);
    byte_59743C5 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v29 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v29->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickOkBtnFunc,
    (int32_t)okFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v32,
                      script,
                      (System_String_o *)StringLiteral_22485/*"mainTitleFontSize"*/,
                      v33);
    if ( IntFromScript <= 0 )
    {
      v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, data_high);
        v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v35->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0);
  v36 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(mainTitle, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_22484/*"mainTitle"*/,
                                    v37);
    mainTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !v36 )
    goto LABEL_99;
  UILabel__set_text(v36, mainTitle, 0);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0);
  v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v42 = (UnityEngine_GameObject_o *)gameObject;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v39);
    v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v41->static_fields->MainTitleBasePos.fields.x;
  v44 = *p_x;
  v45 = p_x[1];
  v46 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_22486/*"mainTitleOffset"*/,
                    v40);
  VecFromScript.fields.x = v44 + VecFromScript.fields.x;
  VecFromScript.fields.y = v45 + VecFromScript.fields.y;
  VecFromScript.fields.z = v46 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v42, VecFromScript, 0);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v47,
                      script,
                      (System_String_o *)StringLiteral_19444/*"detailTitleFontSize"*/,
                      v48);
    if ( IntFromScript <= 0 )
    {
      v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, data_high);
        v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v49->static_fields->DetailTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0);
  detailTitleLabel = this->fields.detailTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(detailTitle, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_19443/*"detailTitle"*/,
                                    v51);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_99;
  UILabel__set_text(detailTitleLabel, detailTitle, 0);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  v52 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0);
  v55 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v56 = (UnityEngine_GameObject_o *)v52;
  if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v53);
    v55 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v57 = &v55->static_fields->MainTitleBasePos.fields.x;
  v58 = v57[9];
  v59 = v57[10];
  v60 = v57[11];
  v141 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v52, script, (System_String_o *)StringLiteral_19445/*"detailTitleOffset"*/, v54);
  v141.fields.x = v58 + v141.fields.x;
  v141.fields.y = v59 + v141.fields.y;
  v141.fields.z = v60 + v141.fields.z;
  GameObjectExtensions__SetLocalPosition(v56, v141, 0);
  v61 = this->fields.mainTitleLabel;
  if ( !v61 )
    goto LABEL_99;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v66 = static_fields->DetailMessageBasePos.fields.x;
  v67 = static_fields->DetailMessageBasePos.fields.y;
  v68 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v61->fields.mText, 0);
  v69 = this->fields.detailTitleLabel;
  if ( !v69 )
LABEL_99:
    sub_2213CDC(mainTitleLabel, data_high);
  v70 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v69->fields.mText, 0);
  v142.fields.x = x;
  v142.fields.y = y;
  v142.fields.z = z;
  v144.fields.x = v66;
  v144.fields.y = v67;
  v144.fields.z = v68;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_55027520(
    this,
    v70 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v142,
    v144,
    script,
    v72);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
  v75 = UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0);
  if ( v75 )
  {
    StringFromScript = (MessageAndScrollDetailConfirmDialog_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                                                  (MessageAndScrollDetailConfirmDialog_o *)v75,
                                                                  script,
                                                                  (System_String_o *)StringLiteral_19354/*"decideBtnLabel"*/,
                                                                  v77);
    v80 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
            StringFromScript,
            script,
            (System_String_o *)StringLiteral_18510/*"cancelBtnLabel"*/,
            v79);
    if ( System_String__op_Inequality((System_String_o *)StringFromScript, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UILabel__set_text(mainTitleLabel, (System_String_o *)StringFromScript, 0);
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                      v81,
                                      script,
                                      (System_String_o *)StringLiteral_19353/*"decideBtnFontSize"*/,
                                      v82);
      decideBtnLabel = this->fields.decideBtnLabel;
      data_high = (unsigned int)mainTitleLabel;
      if ( (int)mainTitleLabel <= 0 )
      {
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, data_high);
          mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        data_high = HIDWORD(mainTitleLabel->fields.onChange->fields.data);
      }
      if ( !decideBtnLabel )
        goto LABEL_99;
      UILabel__set_fontSize(decideBtnLabel, data_high, 0);
      v85 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v84);
      this->fields.decideNotificationCallback = v85;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.decideNotificationCallback,
        (int32_t)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      v92 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_2213CCC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v92,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v93);
      this->fields.clickDecideBtnFunc = v92;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.clickDecideBtnFunc,
        (int32_t)v92,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      v100 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v80, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data_high);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
        v80 = (System_String_o *)mainTitleLabel;
      }
      if ( !v100 )
        goto LABEL_99;
      UILabel__set_text(v100, v80, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v101 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0);
      v104 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v105 = (UnityEngine_GameObject_o *)v101;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v102);
        v104 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v106 = v104->static_fields;
      v107 = &v106->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v106->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v106->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v110 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v80, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, data_high);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v80 = (System_String_o *)mainTitleLabel;
      }
      if ( !v110 )
        goto LABEL_99;
      UILabel__set_text(v110, v80, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v101 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0);
      v112 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v105 = (UnityEngine_GameObject_o *)v101;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v111);
        v112 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v113 = v112->static_fields;
      v107 = &v113->OkButtonBasePos.fields.x;
      p_y = &v113->OkButtonBasePos.fields.y;
      p_z = &v113->OkButtonBasePos.fields.z;
    }
    v114 = *p_y;
    v115 = *v107;
    v116 = *p_z;
    v143 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v101,
             script,
             (System_String_o *)StringLiteral_18416/*"buttonOffset"*/,
             v103);
    v143.fields.x = v115 + v143.fields.x;
    v143.fields.y = v114 + v143.fields.y;
    v143.fields.z = v116 + v143.fields.z;
    GameObjectExtensions__SetLocalPosition(v105, v143, 0);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v117,
                                    script,
                                    (System_String_o *)StringLiteral_18509/*"cancelBtnFontSize"*/,
                                    v118);
    v119 = this->fields.okBtnLabel;
    data_high = (unsigned int)mainTitleLabel;
    if ( (int)mainTitleLabel <= 0 )
    {
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, data_high);
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      data_high = LODWORD(mainTitleLabel->fields.onChange->fields.data);
    }
    if ( !v119 )
      goto LABEL_99;
    UILabel__set_fontSize(v119, data_high, 0);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_55032936(this, script, v120);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    data_high = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      data_high = (unsigned int)this->fields.keepPanelDepth;
    if ( !v29 )
      goto LABEL_99;
    UIPanel__set_depth(v29, data_high, 0);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v122 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_closeBtnObject.method);
  v123 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( canMaskTouchClose )
  {
    if ( !v123 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v121);
    if ( UnityEngine_Object__op_Equality(v122, 0, 0) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v125 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                       (UnityEngine_Transform_o *)mainTitleLabel,
                                       (System_String_o *)StringLiteral_16270/*"Window/OkBtn"*/,
                                       0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v124);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v125, 0, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v125 )
        {
          v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v125, 0);
          v133 = (int)v126;
          this->fields.closeButton = v126;
          p_closeButton = &this->fields.closeButton;
LABEL_97:
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p_closeButton, v133, v127, v128, v129, v130, v131, v132);
          goto LABEL_98;
        }
        goto LABEL_99;
      }
    }
  }
  else
  {
    if ( !v123 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v121);
    if ( UnityEngine_Object__op_Inequality(v122, 0, 0) )
    {
      v135 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__RemoveBackBtn(v135, 0);
      v133 = 0;
      this->fields.closeButton = 0;
      p_closeButton = &this->fields.closeButton;
      goto LABEL_97;
    }
  }
LABEL_98:
  v136 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v136, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v136, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MessageAndScrollDetailConfirmDialog__Open_55022644(
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
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v34; // x26
  const MethodInfo *v35; // x3

  if ( (byte_59743C3 & 1) == 0 )
  {
    sub_2213A60(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_59743C3 = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)closeFunc,
    mainMessage,
    detailTitle,
    (int32_t)detailMessage,
    (int32_t)closeFunc,
    (bool)decideFunc,
    panelDepth);
  this->fields.decideNotificationCallback = decideFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideNotificationCallback,
    (int32_t)decideFunc,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_2213CCC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
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


System_Action_o *MessageAndScrollDetailConfirmDialog__SetTransitionFunc(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  MessageAndScrollDetailConfirmDialog_o *v14; // x0
  const MethodInfo *v15; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v17; // x19
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  System_Action_o *_9__51_4; // x20
  __int64 v26; // x8
  __int64 v27; // x1
  System_String_o *v28; // x19
  int32_t SceneType; // w23
  __int64 v30; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 *v37; // x19
  __int64 v38; // x8
  __int64 v39; // x8
  System_String_o *v40; // x20
  System_Action_o *v41; // x0
  Il2CppObject *v42; // x1
  intptr_t v43; // x2
  __int64 v44; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v45; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v46; // x8
  Il2CppObject *v47; // x19
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v54; // x0
  MissionNaviTransitionBoardItem_o *p__9__51_4; // x0
  __int64 v56; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v57; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v58; // x8
  Il2CppObject *v59; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v60; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v61; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x8
  Il2CppObject *v63; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v64; // x0
  __int64 v65; // x8
  __int64 v66; // x21
  __int64 v67; // x8
  int32_t v68; // w22
  SceneJumpInfo_o *v69; // x20
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 v76; // x8
  __int64 v77; // x1
  int32_t v78; // w19
  int32_t v79; // w20
  SceneJumpInfo_o *v80; // x23
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  intptr_t *v87; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v88; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v89; // x8
  Il2CppObject *v90; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v91; // x0
  __int64 v92; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v93; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v94; // x8
  Il2CppObject *v95; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v96; // x0
  __int64 v97; // x8
  long double v98; // q0
  __int64 v99; // x8
  __int64 v100; // x8
  System_String_o *v101; // x20
  SceneJumpInfo_o *v102; // x19
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  __int64 v109; // x20
  __int64 v110; // x8
  __int64 v111; // x8
  System_String_o *v112; // x21
  __int64 v113; // x1
  __int64 v114; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v115; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v116; // x8
  Il2CppObject *v117; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v118; // x0
  __int64 v119; // x8
  System_String_o *v120; // x20
  SceneJumpInfo_o *v121; // x19
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  __int64 v128; // x8
  System_String_o *v129; // x20
  SceneJumpInfo_o *v130; // x22
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  __int64 v137; // x20
  __int64 v138; // x8
  System_String_o *v139; // x19
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Predicate_object__o *v141; // x22
  __int64 v142; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v144; // x20
  System_String_o *v145; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v146; // x8
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v147; // x9
  NotificationDialog_ClickDelegate_o *_9__51_12; // x22
  Il2CppObject *v149; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v150; // x0
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  __int64 v157; // x19
  __int64 v158; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v159; // x0
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v160; // x8
  Il2CppObject *v161; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v162; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_59743C9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Enum_TryParse_ServantOperationManager_Kind___);
    sub_2213A60(&Method_System_Enum_TryParse_MasterMissionComponent_Type___);
    sub_2213A60(&Method_System_Enum_TryParse_PayType_Type___);
    sub_2213A60(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Predicate_GachaEntity__TypeInfo);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&SceneList_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_9934/*"NormalEventShop"*/);
    sub_2213A60(&StringLiteral_13919/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/);
    sub_2213A60(&StringLiteral_13174/*"Scroll"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13920/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_13144/*"Scene"*/);
    byte_59743C9 = 1;
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)eventType = 0;
  v5 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_161;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v14, script, v15);
  *(_QWORD *)(v5 + 24) = TransitionParam;
  v17 = (__int64 *)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)TransitionParam, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v5 + 24);
  if ( !v24 )
    goto LABEL_161;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_162;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v24 + 32), 0);
  _9__51_4 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__51_4;
  v26 = *v17;
  if ( !*v17 )
    goto LABEL_161;
  if ( !*(_DWORD *)(v26 + 24) )
    goto LABEL_162;
  v28 = System_String__Concat_75651716(*(System_String_o **)(v26 + 32), (System_String_o *)StringLiteral_13144/*"Scene"*/, 0);
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v27);
  SceneType = SceneList__getSceneType(v28, 0);
  v30 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  if ( !v30 )
    goto LABEL_161;
  *(_QWORD *)(v30 + 24) = v5;
  v37 = (__int64 *)(v30 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 24), v5, v31, v32, v33, v34, v35, v36);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v30 + 16) = -1;
          v38 = *(_QWORD *)(v30 + 24);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 24);
            if ( v39 )
            {
              if ( *(int *)(v39 + 24) >= 2 )
              {
                v40 = *(System_String_o **)(v39 + 40);
                if ( !*(_DWORD *)(qword_5984398 + 228) )
                  j_il2cpp_runtime_class_init_0(qword_5984398, v7);
                System_Enum__TryParse_Int32Enum_(
                  v40,
                  (int32_t *)(v30 + 16),
                  (const MethodInfo_3861584 *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              _9__51_4 = v41;
              v42 = (Il2CppObject *)v30;
              v43 = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__;
              goto LABEL_133;
            }
          }
LABEL_161:
          sub_2213CDC(IsNullOrEmpty, v7);
        }
        return 0;
      }
      v61 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
        v61 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      static_fields = v61->static_fields;
      _9__51_4 = static_fields->__9__51_4;
      if ( !_9__51_4 )
      {
        if ( !*(&v61->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v61, v7);
          static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        }
        v63 = (Il2CppObject *)static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v63,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__,
          0);
        v64 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v64->__9__51_4 = _9__51_4;
        p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v64->__9__51_4;
LABEL_158:
        sub_2213A04(p__9__51_4, (int32_t)_9__51_4, v48, v49, v50, v51, v52, v53);
        return _9__51_4;
      }
      return _9__51_4;
    }
    if ( !*v37 )
      goto LABEL_161;
    v65 = *(_QWORD *)(*v37 + 24);
    if ( !v65 )
      goto LABEL_161;
    if ( *(int *)(v65 + 24) < 2 )
      return 0;
    v66 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0);
    if ( !*v37 )
      goto LABEL_161;
    v67 = *(_QWORD *)(*v37 + 24);
    if ( !v67 )
      goto LABEL_161;
    if ( (*(_DWORD *)(v67 + 24) & 0xFFFFFFFE) != 0 )
    {
      System_Int32__TryParse(*(System_String_o **)(v67 + 40), result, 0);
      v68 = result[0];
      v69 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464916(v69, (System_String_o *)StringLiteral_9934/*"NormalEventShop"*/, v68, 0);
      if ( !v66 )
        goto LABEL_161;
      *(_QWORD *)(v66 + 16) = v69;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)v69, v70, v71, v72, v73, v74, v75);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v66 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_161;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0);
      _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        (Il2CppObject *)v66,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__,
        0);
      if ( !*v37 )
        goto LABEL_161;
      v76 = *(_QWORD *)(*v37 + 24);
      if ( !v76 )
        goto LABEL_161;
      if ( *(int *)(v76 + 24) < 3 )
        return _9__51_4;
      System_Int32__TryParse(*(System_String_o **)(v76 + 48), &eventType[1], 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v77);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_161;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0) )
        return _9__51_4;
      v78 = result[0];
      v79 = eventType[1];
      v80 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464976(v80, (System_String_o *)StringLiteral_1/*""*/, v78, v79, 0);
      *(_QWORD *)(v66 + 16) = v80;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)v80, v81, v82, v83, v84, v85, v86);
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v87 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__;
LABEL_132:
      v43 = *v87;
      _9__51_4 = v41;
      v42 = (Il2CppObject *)v66;
LABEL_133:
      System_Action___ctor(v41, v42, v43, 0);
      return _9__51_4;
    }
    goto LABEL_162;
  }
  _9__51_4 = 0;
  if ( SceneType <= 22 )
  {
    if ( SceneType == 20 )
    {
      v66 = *v37;
      result[1] = 1;
      if ( !v66 )
        goto LABEL_161;
      v97 = *(_QWORD *)(v66 + 24);
      if ( !v97 )
        goto LABEL_161;
      if ( *(int *)(v97 + 24) >= 2 )
      {
        v109 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v109, 0);
        if ( !*v37 )
          goto LABEL_161;
        v110 = *(_QWORD *)(*v37 + 24);
        if ( !v110 )
          goto LABEL_161;
        if ( (*(_DWORD *)(v110 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_162;
        if ( !v109 )
          goto LABEL_161;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v110 + 40),
                                             (int32_t *)(v109 + 16),
                                             0);
        if ( !*v37 )
          goto LABEL_161;
        v111 = *(_QWORD *)(*v37 + 24);
        if ( !v111 )
          goto LABEL_161;
        if ( (*(_DWORD *)(v111 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_162;
        v112 = *(System_String_o **)(v111 + 40);
        if ( !*(_DWORD *)(qword_5984398 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984398, v7);
        System_Enum__TryParse_Int32Enum_(
          v112,
          &result[1],
          (const MethodInfo_3861584 *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v113);
          sub_255F8F8(3, 0);
          v115 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v114);
            v115 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v116 = v115->static_fields;
          _9__51_4 = v116->__9__51_10;
          if ( !_9__51_4 )
          {
            if ( !*(&v115->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v115, v114);
              v116 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            }
            v117 = (Il2CppObject *)v116->__9;
            _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_4,
              v117,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__,
              0);
            v118 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v118->__9__51_10 = _9__51_4;
            p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v118->__9__51_10;
            goto LABEL_158;
          }
          return _9__51_4;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v113);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_161;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0);
        v141 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_GachaEntity__TypeInfo);
        System_Predicate_object____ctor(
          v141,
          (Il2CppObject *)v109,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__,
          0);
        if ( !ValidGachaEntityList )
          goto LABEL_161;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v141,
               (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v142);
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_13920/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13919/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0);
          v145 = (System_String_o *)IsNullOrEmpty;
          v146 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
            v146 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v147 = v146->static_fields;
          _9__51_12 = v147->__9__51_12;
          if ( !_9__51_12 )
          {
            if ( !*(&v146->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v146, v7);
              v147 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            }
            v149 = (Il2CppObject *)v147->__9;
            _9__51_12 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              _9__51_12,
              v149,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__,
              0);
            v150 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v150->__9__51_12 = _9__51_12;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v150->__9__51_12,
              (int32_t)_9__51_12,
              v151,
              v152,
              v153,
              v154,
              v155,
              v156);
          }
          if ( !Instance )
            goto LABEL_161;
          CommonUI__OpenNotificationDialog_37376108(
            (CommonUI_o *)Instance,
            v144,
            v145,
            _9__51_12,
            -1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0);
          return 0;
        }
        v66 = *v37;
      }
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v87 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__;
      goto LABEL_132;
    }
    if ( SceneType != 22 )
      return _9__51_4;
    if ( !*v37 )
      goto LABEL_161;
    v56 = *(_QWORD *)(*v37 + 24);
    if ( !v56 )
      goto LABEL_161;
    if ( *(int *)(v56 + 24) < 2 )
    {
      v57 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
        v57 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v58 = v57->static_fields;
      _9__51_4 = v58->__9__51_2;
      if ( !_9__51_4 )
      {
        if ( !*(&v57->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v57, v7);
          v58 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        }
        v59 = (Il2CppObject *)v58->__9;
        _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v59,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__,
          0);
        v60 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v60->__9__51_2 = _9__51_4;
        p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v60->__9__51_2;
        goto LABEL_158;
      }
      return _9__51_4;
    }
    v66 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0);
    if ( !*v37 )
      goto LABEL_161;
    v128 = *(_QWORD *)(*v37 + 24);
    if ( !v128 )
      goto LABEL_161;
    if ( (*(_DWORD *)(v128 + 24) & 0xFFFFFFFE) != 0 )
    {
      v129 = *(System_String_o **)(v128 + 40);
      v130 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v130, v129, 0);
      if ( !v66 )
        goto LABEL_161;
      *(_QWORD *)(v66 + 16) = v130;
      v137 = v66 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)v130, v131, v132, v133, v134, v135, v136);
      if ( !*v37 )
        goto LABEL_161;
      v138 = *(_QWORD *)(*v37 + 24);
      if ( !v138 )
        goto LABEL_161;
      if ( *(int *)(v138 + 24) >= 3 )
      {
        v139 = *(System_String_o **)(v138 + 48);
        eventType[0] = 0;
        if ( !*(_DWORD *)(qword_5984398 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984398, v7);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v139,
                                             eventType,
                                             (const MethodInfo_3861584 *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v137 )
          goto LABEL_161;
        *(_DWORD *)(*(_QWORD *)v137 + 24LL) = eventType[0];
      }
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v87 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__;
      goto LABEL_132;
    }
LABEL_162:
    sub_2213CE4(IsNullOrEmpty);
  }
  if ( SceneType == 23 )
  {
    v88 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
      v88 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v89 = v88->static_fields;
    _9__51_4 = v89->__9__51_5;
    if ( !_9__51_4 )
    {
      if ( !*(&v88->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v88, v7);
        v89 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      }
      v90 = (Il2CppObject *)v89->__9;
      _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        v90,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__,
        0);
      v91 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v91->__9__51_5 = _9__51_4;
      p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v91->__9__51_5;
      goto LABEL_158;
    }
    return _9__51_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v37 )
      goto LABEL_161;
    v92 = *(_QWORD *)(*v37 + 24);
    if ( !v92 )
      goto LABEL_161;
    if ( *(int *)(v92 + 24) < 2 )
    {
      v93 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
        v93 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v94 = v93->static_fields;
      _9__51_4 = v94->__9__51_7;
      if ( !_9__51_4 )
      {
        if ( !*(&v93->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v93, v7);
          v94 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        }
        v95 = (Il2CppObject *)v94->__9;
        _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v95,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__,
          0);
        v96 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v96->__9__51_7 = _9__51_4;
        p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v96->__9__51_7;
        goto LABEL_158;
      }
      return _9__51_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v92 + 40),
                                         (System_String_o *)StringLiteral_13174/*"Scroll"*/,
                                         0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v37 )
        goto LABEL_161;
      v99 = *(_QWORD *)(*v37 + 24);
      if ( !v99 )
        goto LABEL_161;
      if ( *(int *)(v99 + 24) >= 3 )
      {
        v157 = *(_QWORD *)(v99 + 48);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v98 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
        sub_23C2C2C(v157, 0, v98);
        v159 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v158);
          v159 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v160 = v159->static_fields;
        _9__51_4 = v160->__9__51_6;
        if ( !_9__51_4 )
        {
          if ( !*(&v159->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v159, v158);
            v160 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          }
          v161 = (Il2CppObject *)v160->__9;
          _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__51_4,
            v161,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__,
            0);
          v162 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v162->__9__51_6 = _9__51_4;
          p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v162->__9__51_6;
          goto LABEL_158;
        }
        return _9__51_4;
      }
    }
    v66 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0);
    if ( !*v37 )
      goto LABEL_161;
    v100 = *(_QWORD *)(*v37 + 24);
    if ( !v100 )
      goto LABEL_161;
    if ( (*(_DWORD *)(v100 + 24) & 0xFFFFFFFE) != 0 )
    {
      v101 = *(System_String_o **)(v100 + 40);
      v102 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v102, v101, 0);
      if ( !v66 )
        goto LABEL_161;
      *(_QWORD *)(v66 + 16) = v102;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)v102, v103, v104, v105, v106, v107, v108);
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v87 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__;
      goto LABEL_132;
    }
    goto LABEL_162;
  }
  if ( SceneType != 32 )
    return _9__51_4;
  if ( !*v37 )
    goto LABEL_161;
  v44 = *(_QWORD *)(*v37 + 24);
  if ( !v44 )
    goto LABEL_161;
  if ( *(int *)(v44 + 24) >= 2 )
  {
    v66 = sub_2213CCC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0);
    if ( !*v37 )
      goto LABEL_161;
    v119 = *(_QWORD *)(*v37 + 24);
    if ( !v119 )
      goto LABEL_161;
    if ( (*(_DWORD *)(v119 + 24) & 0xFFFFFFFE) != 0 )
    {
      v120 = *(System_String_o **)(v119 + 40);
      v121 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48464828(v121, v120, 0);
      if ( !v66 )
        goto LABEL_161;
      *(_QWORD *)(v66 + 16) = v121;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 16), (int32_t)v121, v122, v123, v124, v125, v126, v127);
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v87 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__;
      goto LABEL_132;
    }
    goto LABEL_162;
  }
  v45 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7);
    v45 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  v46 = v45->static_fields;
  _9__51_4 = v46->__9__51_3;
  if ( !_9__51_4 )
  {
    if ( !*(&v45->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v45, v7);
      v46 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v46->__9;
    _9__51_4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_4, v47, Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__, 0);
    v54 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v54->__9__51_3 = _9__51_4;
    p__9__51_4 = (MissionNaviTransitionBoardItem_o *)&v54->__9__51_3;
    goto LABEL_158;
  }
  return _9__51_4;
}


UnityEngine_GameObject_o *MessageAndScrollDetailConfirmDialog__get_closeBtnObject(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_59743C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59743C0 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2014018;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2013FD0;
}


System_IAsyncResult_o *MessageAndScrollDetailConfirmDialog_ClickDelegate__BeginInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate__Invoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}


void MessageAndScrollDetailConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59743D6 & 1) == 0 )
  {
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_59743D6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MessageAndScrollDetailConfirmDialog___c___ctor(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_10(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743D7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v5; // x8
  CommonUI_o *v6; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x9
  System_Action_o *_9__51_13; // x20
  Il2CppObject *v9; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59743D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__);
    sub_2213A60(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_59743D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v4);
    v5 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__51_13 = static_fields->__9__51_13;
  if ( !_9__51_13 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__51_13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__51_13, v9, Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__, 0);
    v10 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v10->__9__51_13 = _9__51_13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__51_13, (int32_t)_9__51_13, v11, v12, v13, v14, v15, v16);
  }
  if ( !v6 )
    sub_2213CDC(Instance, v4);
  CommonUI__CloseNotificationDialog_37376584(v6, _9__51_13, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743D9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743D9 = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DE & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59743DF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___SetTransitionFunc_b__1(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(this->fields.__4__this, this->fields.linkInfo, v2);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___SetTransitionFunc_b__0(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  ScrPlayerStatus_o *v3; // x0
  ScrPlayerBP_c *klass; // x8
  __int64 v5; // x8
  struct MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *CS___8__locals1; // x9
  struct MessageAndScrollDetailConfirmDialog_o *_4__this; // x9

  if ( (byte_59743E0 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_59743E0 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = (ScrPlayerStatus_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.rpRoot->klass;
  if ( !klass
    || (v5 = *(_QWORD *)&klass->_2.element_size) == 0
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (v3 = *(ScrPlayerStatus_o **)(v5 + 128)) == 0 )
  {
    sub_2213CDC(v3, method);
  }
  ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
    v3,
    this->fields.tabNo,
    _4__this->fields.closeNotificationCallback,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__8(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59743E1 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__9(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59743E2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___SetTransitionFunc_b__11(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_2213CDC(this, 0);
  return n->fields.id == this->fields.gachaId;
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___SetTransitionFunc_b__14(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59743E3 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)this->fields.info, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___SetTransitionFunc_b__15(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59743E4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, (Il2CppObject *)this->fields.info, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___SetTransitionFunc_b__16(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59743E5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_59743E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0);
}