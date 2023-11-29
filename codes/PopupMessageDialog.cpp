void __fastcall PopupMessageDialog___ctor(PopupMessageDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F8FC5 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F8FC5 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PopupMessageDialog__EndClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_40F8FC4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8FC4 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B170D4();
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall PopupMessageDialog__EndOpen(PopupMessageDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall PopupMessageDialog__OnClickClose(PopupMessageDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40F8FC3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PopupMessageDialog_EndClose__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F8FC3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.isButtonEnable = 0;
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_PopupMessageDialog_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PopupMessageDialog__Open(
        PopupMessageDialog_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_o *v12; // x21
  struct UILabel_o *messageLabel; // x0
  UIWidget_o **p_messageLabel; // x22
  System_String_o *v15; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v17; // s0
  double v18; // d0
  float v19; // s0
  double v20; // d0
  UICamera_c *v21; // x0
  struct UICamera_StaticFields *static_fields; // x9
  float v23; // s0
  float v24; // s1
  float v25; // s2
  UnityEngine_GameObject_o *v26; // x0
  float v27; // s10
  float v28; // s11
  float v29; // s12
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  float x; // s11
  float y; // s12
  ManagerConfig_c *v34; // x0
  float v35; // s15
  float v36; // s10
  __int16 v37; // w8
  int v38; // w8
  float v39; // s10
  float v40; // s0
  float v41; // s0
  __int16 v42; // w8
  float v43; // s15
  int v44; // w8
  float v45; // s0
  float v46; // s13
  float v47; // s0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Transform_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  float v51; // s2
  double v52; // d0
  float v53; // s10
  double v54; // d0
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x20
  float value; // [xsp+Ch] [xbp-64h]
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8FC2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    sub_B16FFC(&Method_PopupMessageDialog_EndOpen__, v7);
    sub_B16FFC(&UICamera_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F8FC2 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_78;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              baseWindow,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = Component_srcLineSprite;
  if ( this->fields.isInit )
  {
    p_messageLabel = (UIWidget_o **)&this->fields.messageLabel;
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_78;
  }
  else
  {
    this->fields.isInit = 1;
    if ( !Component_srcLineSprite )
      goto LABEL_78;
    p_messageLabel = (UIWidget_o **)&this->fields.messageLabel;
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_78;
    this->fields.windowOffsetSize = (struct UnityEngine_Vector2_o)vcvt_f32_s32(
                                                                    vsub_s32(
                                                                      (int32x2_t)v12[1].fields.mFSM,
                                                                      *(int32x2_t *)&messageLabel->fields.mWidth)).n64_u64[0];
  }
  UIWidget__set_width((UIWidget_o *)messageLabel, 984, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  UIWidget__set_height(*p_messageLabel, 1024, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  v15 = message ? message : (System_String_o *)StringLiteral_1;
  UILabel__set_text((UILabel_o *)*p_messageLabel, v15, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  printedSize = UILabel__get_printedSize((UILabel_o *)*p_messageLabel, 0LL);
  if ( !v12 )
    goto LABEL_78;
  v17 = printedSize.fields.x + this->fields.windowOffsetSize.fields.x;
  if ( v17 == INFINITY )
    v18 = -v17;
  else
    v18 = v17;
  UIWidget__set_width((UIWidget_o *)v12, (int)v18, 0LL);
  v19 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  if ( v19 == INFINITY )
    v20 = -INFINITY;
  else
    v20 = v19;
  UIWidget__set_height((UIWidget_o *)v12, (int)v20, 0LL);
  v21 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v21 = UICamera_TypeInfo;
  }
  if ( !this->fields.dialogCamera )
    goto LABEL_78;
  static_fields = v21->static_fields;
  v62.fields.z = 0.0;
  v62.fields.x = static_fields->lastTouchPosition.fields.x;
  v62.fields.y = static_fields->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Camera__ScreenToWorldPoint_40663568(this->fields.dialogCamera, v62, 0LL);
  v26 = this->fields.baseWindow;
  if ( !v26 )
    goto LABEL_78;
  v27 = v23;
  v28 = v24;
  v29 = v25;
  transform = UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !transform )
    goto LABEL_78;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_78;
  v63.fields.x = v27;
  v63.fields.y = v28;
  v63.fields.z = v29;
  v64 = UnityEngine_Transform__InverseTransformPoint(parent, v63, 0LL);
  value = v64.fields.z;
  x = v64.fields.x;
  y = v64.fields.y;
  v34 = ManagerConfig_TypeInfo;
  v35 = (float)((float)(printedSize.fields.x + this->fields.windowOffsetSize.fields.x) * 0.5) + 20.0;
  v36 = printedSize.fields.y + this->fields.windowOffsetSize.fields.y;
  v37 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v37 & 0x400) != 0 )
  {
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v34 = ManagerConfig_TypeInfo;
      v37 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v38 = v37 & 0x400;
  }
  else
  {
    v38 = 0;
  }
  v39 = v36 * 0.5;
  v40 = (float)(v34->static_fields->WIDTH / 2);
  if ( x >= (float)(v35 - v40) )
  {
    if ( v38 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ManagerConfig_TypeInfo;
      v40 = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
    }
    v41 = v40 - v35;
    if ( x > v41 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        v34 = ManagerConfig_TypeInfo;
        x = (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2) - v35;
      }
      else
      {
        x = v41;
      }
    }
  }
  else if ( v38 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = ManagerConfig_TypeInfo;
    x = v35 - (float)(ManagerConfig_TypeInfo->static_fields->WIDTH / 2);
  }
  else
  {
    x = v35 - v40;
  }
  v42 = WORD1(v34->vtable._0_Equals.methodPtr);
  v43 = v39 + 20.0;
  if ( (v42 & 0x400) != 0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ManagerConfig_TypeInfo;
      v42 = WORD1(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v44 = v42 & 0x400;
  }
  else
  {
    v44 = 0;
  }
  v45 = (float)(v34->static_fields->HEIGHT / 2);
  v46 = v43 - v45;
  if ( y >= (float)(v43 - v45) )
  {
    if ( v44 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ManagerConfig_TypeInfo;
      v45 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
    }
    v47 = v45 - v43;
    v46 = y;
    if ( y > v47 )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v46 = v47;
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v46 = (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2) - (float)(v39 + 20.0);
        }
      }
      else
      {
        v46 = v47;
      }
    }
  }
  else if ( v44 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v46 = (float)(v39 + 20.0) - (float)(ManagerConfig_TypeInfo->static_fields->HEIGHT / 2);
  }
  v48 = this->fields.baseWindow;
  if ( !v48 )
    goto LABEL_78;
  v49 = UnityEngine_GameObject__get_transform(v48, 0LL);
  if ( !v49 )
    goto LABEL_78;
  v65.fields.z = value;
  v65.fields.x = x;
  v65.fields.y = v46;
  UnityEngine_Transform__set_localPosition(v49, v65, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_messageLabel, 0LL);
  if ( !v50 )
    goto LABEL_78;
  *(UnityEngine_Vector3_o *)(&v51 - 2) = UnityEngine_Transform__get_localPosition(v50, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  v52 = printedSize.fields.x;
  if ( printedSize.fields.x == INFINITY )
    v52 = -INFINITY;
  v53 = v51;
  UIWidget__set_width(*p_messageLabel, (int)v52, 0LL);
  if ( !*p_messageLabel )
    goto LABEL_78;
  v54 = printedSize.fields.y;
  if ( printedSize.fields.y == INFINITY )
    v54 = -INFINITY;
  UIWidget__set_height(*p_messageLabel, (int)v54, 0LL);
  if ( !*p_messageLabel
    || (v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*p_messageLabel, 0LL)) == 0LL )
  {
LABEL_78:
    sub_B170D4();
  }
  v66.fields.x = printedSize.fields.x * -0.5;
  v66.fields.y = printedSize.fields.y * 0.5;
  v66.fields.z = v53;
  UnityEngine_Transform__set_localPosition(v55, v66, 0LL);
  this->fields.isButtonEnable = 0;
  v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_PopupMessageDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}